// Copyright 2024 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "tensorflow/lite/experimental/lrt/core/ahwb_buffer.h"

#include <cstddef>
#include <cstdint>

#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "tensorflow/lite/experimental/lrt/c/lite_rt_common.h"
#include "tensorflow/lite/experimental/lrt/c/lite_rt_event.h"

namespace lrt {
namespace internal {

bool AhwbBuffer::IsSupported() {
#if LRT_HAS_AHWB_SUPPORT
  return true;
#else
  return false;
#endif
}

absl::StatusOr<AhwbBuffer> AhwbBuffer::Alloc(size_t size) {
#if LRT_HAS_AHWB_SUPPORT
  AHardwareBuffer* ahwb;
  AHardwareBuffer_Desc ahwb_desc = {
      .width = static_cast<uint32_t>(size),
      .height = 1,
      .layers = 1,
      .format = AHARDWAREBUFFER_FORMAT_BLOB,
      .usage = AHARDWAREBUFFER_USAGE_CPU_WRITE_RARELY |
               AHARDWAREBUFFER_USAGE_CPU_READ_RARELY |
               AHARDWAREBUFFER_USAGE_GPU_DATA_BUFFER};
  if (AHardwareBuffer_allocate(&ahwb_desc, &ahwb) != 0) {
    return absl::InternalError("Failed to allocate AHWB");
  }
  return AhwbBuffer{/*.ahwb=*/ahwb};
#else
  return absl::InternalError(
      "AHardwareBuffers are not supported on this platform");
#endif  // LRT_HAS_AHWB_SUPPORT
}

void AhwbBuffer::Free(AHardwareBuffer* ahwb) {
#if LRT_HAS_AHWB_SUPPORT
  AHardwareBuffer_release(ahwb);
#endif
}

absl::StatusOr<size_t> AhwbBuffer::GetSize(AHardwareBuffer* ahwb) {
#if LRT_HAS_AHWB_SUPPORT
  AHardwareBuffer_Desc ahwb_desc;
  AHardwareBuffer_describe(ahwb, &ahwb_desc);
  return static_cast<size_t>(ahwb_desc.width) * ahwb_desc.height *
         ahwb_desc.layers;
#else
  return absl::InternalError(
      "AHardwareBuffers are not supported on this platform");
#endif  // LRT_HAS_AHWB_SUPPORT
}

absl::StatusOr<void*> AhwbBuffer::Lock(AHardwareBuffer* ahwb, LrtEvent event) {
#if LRT_HAS_AHWB_SUPPORT
  int fence = -1;
  if (event) {
    if (auto status = LrtEventGetSyncFenceFd(event, &fence);
        status != kLrtStatusOk) {
      return absl::InternalError("Failed to get sync fence fd from event");
    }
  }
  void* host_addr;
  if (AHardwareBuffer_lock(ahwb,
                           AHARDWAREBUFFER_USAGE_CPU_READ_RARELY |
                               AHARDWAREBUFFER_USAGE_CPU_WRITE_RARELY,
                           fence, /*rect=*/nullptr, &host_addr) != 0) {
    return absl::InternalError("Failed to lock AHWB");
  }
  return host_addr;
#else
  return absl::InternalError(
      "AHardwareBuffers are not supported on this platform");
#endif
}

absl::Status AhwbBuffer::Unlock(AHardwareBuffer* ahwb) {
#if LRT_HAS_AHWB_SUPPORT
  if (AHardwareBuffer_unlock(ahwb, /*fence=*/nullptr) != 0) {
    return absl::InternalError("Failed to unlock AHWB");
  }
  return {};
#else
  return absl::InternalError(
      "AHardwareBuffers are not supported on this platform");
#endif
}

}  // namespace internal
}  // namespace lrt