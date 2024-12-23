// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/core_platform_payloads.proto

#include "tensorflow/core/protobuf/core_platform_payloads.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace tensorflow {
namespace core {
namespace platform {
PROTOBUF_CONSTEXPR ErrorSourceProto::ErrorSourceProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.error_source_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ErrorSourceProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ErrorSourceProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ErrorSourceProtoDefaultTypeInternal() {}
  union {
    ErrorSourceProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ErrorSourceProtoDefaultTypeInternal _ErrorSourceProto_default_instance_;
}  // namespace platform
}  // namespace core
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::core::platform::ErrorSourceProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::core::platform::ErrorSourceProto, _impl_.error_source_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::core::platform::ErrorSourceProto)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::core::platform::_ErrorSourceProto_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n5tensorflow/core/protobuf/core_platform"
  "_payloads.proto\022\030tensorflow.core.platfor"
  "m\"\354\001\n\020ErrorSourceProto\022L\n\014error_source\030\001"
  " \001(\01626.tensorflow.core.platform.ErrorSou"
  "rceProto.ErrorSource\"\211\001\n\013ErrorSource\022\013\n\007"
  "UNKNOWN\020\000\022\022\n\016TPU_COMPILE_OP\020\001\022\021\n\rTF_XLA_"
  "BRIDGE\020\002\022\027\n\023MLIR_BRIDGE_PHASE_1\020\003\022\027\n\023MLI"
  "R_BRIDGE_PHASE_2\020\004\022\024\n\020EAGER_REMOTE_MGR\020\005"
  "BZZUgithub.com/tensorflow/tensorflow/ten"
  "sorflow/go/core/protobuf/for_core_protos"
  "_go_proto\370\001\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto = {
    false, false, 420, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto,
    "tensorflow/core/protobuf/core_platform_payloads.proto",
    &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto(&descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto);
namespace tensorflow {
namespace core {
namespace platform {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorSourceProto_ErrorSource_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto);
  return file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto[0];
}
bool ErrorSourceProto_ErrorSource_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::UNKNOWN;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::TPU_COMPILE_OP;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::TF_XLA_BRIDGE;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::MLIR_BRIDGE_PHASE_1;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::MLIR_BRIDGE_PHASE_2;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::EAGER_REMOTE_MGR;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::ErrorSource_MIN;
constexpr ErrorSourceProto_ErrorSource ErrorSourceProto::ErrorSource_MAX;
constexpr int ErrorSourceProto::ErrorSource_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ErrorSourceProto::_Internal {
 public:
};

ErrorSourceProto::ErrorSourceProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.core.platform.ErrorSourceProto)
}
ErrorSourceProto::ErrorSourceProto(const ErrorSourceProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ErrorSourceProto* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.error_source_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.error_source_ = from._impl_.error_source_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.core.platform.ErrorSourceProto)
}

inline void ErrorSourceProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.error_source_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ErrorSourceProto::~ErrorSourceProto() {
  // @@protoc_insertion_point(destructor:tensorflow.core.platform.ErrorSourceProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ErrorSourceProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ErrorSourceProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ErrorSourceProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.core.platform.ErrorSourceProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.error_source_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ErrorSourceProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .tensorflow.core.platform.ErrorSourceProto.ErrorSource error_source = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_error_source(static_cast<::tensorflow::core::platform::ErrorSourceProto_ErrorSource>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ErrorSourceProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.core.platform.ErrorSourceProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.core.platform.ErrorSourceProto.ErrorSource error_source = 1;
  if (this->_internal_error_source() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_error_source(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.core.platform.ErrorSourceProto)
  return target;
}

size_t ErrorSourceProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.core.platform.ErrorSourceProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.core.platform.ErrorSourceProto.ErrorSource error_source = 1;
  if (this->_internal_error_source() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_error_source());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ErrorSourceProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ErrorSourceProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ErrorSourceProto::GetClassData() const { return &_class_data_; }


void ErrorSourceProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ErrorSourceProto*>(&to_msg);
  auto& from = static_cast<const ErrorSourceProto&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.core.platform.ErrorSourceProto)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_error_source() != 0) {
    _this->_internal_set_error_source(from._internal_error_source());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ErrorSourceProto::CopyFrom(const ErrorSourceProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.core.platform.ErrorSourceProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorSourceProto::IsInitialized() const {
  return true;
}

void ErrorSourceProto::InternalSwap(ErrorSourceProto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.error_source_, other->_impl_.error_source_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ErrorSourceProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2fcore_5fplatform_5fpayloads_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace platform
}  // namespace core
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::core::platform::ErrorSourceProto*
Arena::CreateMaybeMessage< ::tensorflow::core::platform::ErrorSourceProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::core::platform::ErrorSourceProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
