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

#include "tensorflow/lite/experimental/lrt/vendors/qualcomm/qnn_log.h"

#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <iostream>

#include "third_party/qairt/include/QNN/QnnInterface.h"
#include "third_party/qairt/include/QNN/QnnLog.h"

namespace lrt::qnn {
namespace {

// NOLINTBEGIN
constexpr char kQnnInterfaceDumpTpl[] =
    "\
QNN-INTERFACE\n\
name: %s\n\
backend_id: %u\n\
core_api_version: %u.%u.%u\n\
backend_api_version: %u.%u.%u\n";

constexpr char kQnnSystemInterfaceDumpTpl[] =
    "\
QNN-SYTSTEM-INTERFACE\n\
name: %s\n\
backend_id: %u\n\
system_api_version: %u.%u.%u\n";
// NOLINTEND

void DefaultStdOutLogger(const char* fmt, QnnLog_Level_t level,
                         uint64_t timestamp, va_list argp) {
  const char* levelStr = "";
  switch (level) {
    case QNN_LOG_LEVEL_ERROR:
      levelStr = " ERROR ";
      break;
    case QNN_LOG_LEVEL_WARN:
      levelStr = "WARNING";
      break;
    case QNN_LOG_LEVEL_INFO:
      levelStr = "  INFO ";
      break;
    case QNN_LOG_LEVEL_DEBUG:
      levelStr = " DEBUG ";
      break;
    case QNN_LOG_LEVEL_VERBOSE:
      levelStr = "VERBOSE";
      break;
    case QNN_LOG_LEVEL_MAX:
      levelStr = "UNKNOWN";
      break;
  }
  char buffer1[256];
  char buffer2[256];
  double ms = timestamp;
  snprintf(buffer1, sizeof(buffer1), "%8.1fms [%-7s] ", ms, levelStr);
  buffer1[sizeof(buffer1) - 1] = 0;
  vsnprintf(buffer2, sizeof(buffer2), fmt, argp);
  buffer2[sizeof(buffer1) - 2] = 0;
  std::cout << buffer1 << buffer2;
}

}  // namespace

void DumpInterface(const QnnInterface_t* interface) {
  const auto core_version = interface->apiVersion.coreApiVersion;
  const auto backend_version = interface->apiVersion.backendApiVersion;

  fprintf(stderr, kQnnInterfaceDumpTpl, interface->providerName,
          interface->backendId, core_version.major, core_version.minor,
          core_version.patch, backend_version.major, backend_version.minor,
          backend_version.patch);
}

void DumpSystemInterface(const QnnSystemInterface_t* interface) {
  const auto system_version = interface->systemApiVersion;

  fprintf(stderr, kQnnSystemInterfaceDumpTpl, interface->providerName,
          interface->backendId, system_version.major, system_version.minor,
          system_version.patch);
}

QnnLog_Callback_t GetDefaultStdOutLogger() { return DefaultStdOutLogger; }

}  // namespace lrt::qnn