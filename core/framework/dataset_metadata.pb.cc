// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/dataset_metadata.proto

#include "tensorflow/core/framework/dataset_metadata.pb.h"

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
namespace data {
PROTOBUF_CONSTEXPR Metadata::Metadata(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MetadataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MetadataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MetadataDefaultTypeInternal() {}
  union {
    Metadata _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MetadataDefaultTypeInternal _Metadata_default_instance_;
}  // namespace data
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::data::Metadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::data::Metadata, _impl_.name_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::data::Metadata)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::data::_Metadata_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0tensorflow/core/framework/dataset_meta"
  "data.proto\022\017tensorflow.data\"\030\n\010Metadata\022"
  "\014\n\004name\030\001 \001(\014BYZWgithub.com/tensorflow/t"
  "ensorflow/tensorflow/go/core/framework/d"
  "ataset_metadata_go_protob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto = {
    false, false, 192, descriptor_table_protodef_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto,
    "tensorflow/core/framework/dataset_metadata.proto",
    &descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto(&descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto);
namespace tensorflow {
namespace data {

// ===================================================================

class Metadata::_Internal {
 public:
};

Metadata::Metadata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.data.Metadata)
}
Metadata::Metadata(const Metadata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Metadata* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.data.Metadata)
}

inline void Metadata::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Metadata::~Metadata() {
  // @@protoc_insertion_point(destructor:tensorflow.data.Metadata)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Metadata::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void Metadata::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Metadata::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.data.Metadata)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Metadata::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

uint8_t* Metadata::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.data.Metadata)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (!this->_internal_name().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.data.Metadata)
  return target;
}

size_t Metadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.data.Metadata)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Metadata::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Metadata::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Metadata::GetClassData() const { return &_class_data_; }


void Metadata::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Metadata*>(&to_msg);
  auto& from = static_cast<const Metadata&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.data.Metadata)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Metadata::CopyFrom(const Metadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.data.Metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Metadata::IsInitialized() const {
  return true;
}

void Metadata::InternalSwap(Metadata* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Metadata::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fdataset_5fmetadata_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::data::Metadata*
Arena::CreateMaybeMessage< ::tensorflow::data::Metadata >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::data::Metadata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
