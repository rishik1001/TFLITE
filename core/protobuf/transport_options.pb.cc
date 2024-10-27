// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/transport_options.proto

#include "tensorflow/core/protobuf/transport_options.pb.h"

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
PROTOBUF_CONSTEXPR RecvBufRespExtra::RecvBufRespExtra(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.tensor_content_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RecvBufRespExtraDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RecvBufRespExtraDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RecvBufRespExtraDefaultTypeInternal() {}
  union {
    RecvBufRespExtra _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RecvBufRespExtraDefaultTypeInternal _RecvBufRespExtra_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::RecvBufRespExtra, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::RecvBufRespExtra, _impl_.tensor_content_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::RecvBufRespExtra)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_RecvBufRespExtra_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0tensorflow/core/protobuf/transport_opt"
  "ions.proto\022\ntensorflow\"*\n\020RecvBufRespExt"
  "ra\022\026\n\016tensor_content\030\001 \003(\014BWZUgithub.com"
  "/tensorflow/tensorflow/tensorflow/go/cor"
  "e/protobuf/for_core_protos_go_protob\006pro"
  "to3"
  ;
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto = {
    false, false, 203, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto,
    "tensorflow/core/protobuf/transport_options.proto",
    &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto);
namespace tensorflow {

// ===================================================================

class RecvBufRespExtra::_Internal {
 public:
};

RecvBufRespExtra::RecvBufRespExtra(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.RecvBufRespExtra)
}
RecvBufRespExtra::RecvBufRespExtra(const RecvBufRespExtra& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RecvBufRespExtra* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.tensor_content_){from._impl_.tensor_content_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.RecvBufRespExtra)
}

inline void RecvBufRespExtra::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.tensor_content_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

RecvBufRespExtra::~RecvBufRespExtra() {
  // @@protoc_insertion_point(destructor:tensorflow.RecvBufRespExtra)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RecvBufRespExtra::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.tensor_content_.~RepeatedPtrField();
}

void RecvBufRespExtra::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RecvBufRespExtra::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.RecvBufRespExtra)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.tensor_content_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RecvBufRespExtra::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated bytes tensor_content = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_tensor_content();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* RecvBufRespExtra::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.RecvBufRespExtra)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes tensor_content = 1;
  for (int i = 0, n = this->_internal_tensor_content_size(); i < n; i++) {
    const auto& s = this->_internal_tensor_content(i);
    target = stream->WriteBytes(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.RecvBufRespExtra)
  return target;
}

size_t RecvBufRespExtra::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.RecvBufRespExtra)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes tensor_content = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.tensor_content_.size());
  for (int i = 0, n = _impl_.tensor_content_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      _impl_.tensor_content_.Get(i));
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RecvBufRespExtra::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RecvBufRespExtra::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RecvBufRespExtra::GetClassData() const { return &_class_data_; }


void RecvBufRespExtra::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RecvBufRespExtra*>(&to_msg);
  auto& from = static_cast<const RecvBufRespExtra&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.RecvBufRespExtra)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.tensor_content_.MergeFrom(from._impl_.tensor_content_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RecvBufRespExtra::CopyFrom(const RecvBufRespExtra& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.RecvBufRespExtra)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecvBufRespExtra::IsInitialized() const {
  return true;
}

void RecvBufRespExtra::InternalSwap(RecvBufRespExtra* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.tensor_content_.InternalSwap(&other->_impl_.tensor_content_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RecvBufRespExtra::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftransport_5foptions_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::RecvBufRespExtra*
Arena::CreateMaybeMessage< ::tensorflow::RecvBufRespExtra >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::RecvBufRespExtra >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>