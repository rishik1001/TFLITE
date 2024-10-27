// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/fingerprint.proto

#include "tensorflow/core/protobuf/fingerprint.pb.h"

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
PROTOBUF_CONSTEXPR FingerprintDef::FingerprintDef(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_)*/nullptr
  , /*decltype(_impl_.saved_model_checksum_)*/uint64_t{0u}
  , /*decltype(_impl_.graph_def_program_hash_)*/uint64_t{0u}
  , /*decltype(_impl_.signature_def_hash_)*/uint64_t{0u}
  , /*decltype(_impl_.saved_object_graph_hash_)*/uint64_t{0u}
  , /*decltype(_impl_.checkpoint_hash_)*/uint64_t{0u}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FingerprintDefDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FingerprintDefDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FingerprintDefDefaultTypeInternal() {}
  union {
    FingerprintDef _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FingerprintDefDefaultTypeInternal _FingerprintDef_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.saved_model_checksum_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.graph_def_program_hash_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.signature_def_hash_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.saved_object_graph_hash_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.checkpoint_hash_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FingerprintDef, _impl_.version_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::FingerprintDef)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_FingerprintDef_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*tensorflow/core/protobuf/fingerprint.p"
  "roto\022\ntensorflow\032(tensorflow/core/framew"
  "ork/versions.proto\"\315\001\n\016FingerprintDef\022\034\n"
  "\024saved_model_checksum\030\001 \001(\004\022\036\n\026graph_def"
  "_program_hash\030\002 \001(\004\022\032\n\022signature_def_has"
  "h\030\003 \001(\004\022\037\n\027saved_object_graph_hash\030\004 \001(\004"
  "\022\027\n\017checkpoint_hash\030\005 \001(\004\022\'\n\007version\030\006 \001"
  "(\0132\026.tensorflow.VersionDefB\211\001\n\030org.tenso"
  "rflow.frameworkB\021FingerprintProtosP\001ZUgi"
  "thub.com/tensorflow/tensorflow/tensorflo"
  "w/go/core/protobuf/for_core_protos_go_pr"
  "oto\370\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_deps[1] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2fversions_2eproto,
};
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto = {
    false, false, 454, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto,
    "tensorflow/core/protobuf/fingerprint.proto",
    &descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_once, descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto);
namespace tensorflow {

// ===================================================================

class FingerprintDef::_Internal {
 public:
  static const ::tensorflow::VersionDef& version(const FingerprintDef* msg);
};

const ::tensorflow::VersionDef&
FingerprintDef::_Internal::version(const FingerprintDef* msg) {
  return *msg->_impl_.version_;
}
void FingerprintDef::clear_version() {
  if (GetArenaForAllocation() == nullptr && _impl_.version_ != nullptr) {
    delete _impl_.version_;
  }
  _impl_.version_ = nullptr;
}
FingerprintDef::FingerprintDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.FingerprintDef)
}
FingerprintDef::FingerprintDef(const FingerprintDef& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FingerprintDef* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){nullptr}
    , decltype(_impl_.saved_model_checksum_){}
    , decltype(_impl_.graph_def_program_hash_){}
    , decltype(_impl_.signature_def_hash_){}
    , decltype(_impl_.saved_object_graph_hash_){}
    , decltype(_impl_.checkpoint_hash_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_version()) {
    _this->_impl_.version_ = new ::tensorflow::VersionDef(*from._impl_.version_);
  }
  ::memcpy(&_impl_.saved_model_checksum_, &from._impl_.saved_model_checksum_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.checkpoint_hash_) -
    reinterpret_cast<char*>(&_impl_.saved_model_checksum_)) + sizeof(_impl_.checkpoint_hash_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.FingerprintDef)
}

inline void FingerprintDef::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){nullptr}
    , decltype(_impl_.saved_model_checksum_){uint64_t{0u}}
    , decltype(_impl_.graph_def_program_hash_){uint64_t{0u}}
    , decltype(_impl_.signature_def_hash_){uint64_t{0u}}
    , decltype(_impl_.saved_object_graph_hash_){uint64_t{0u}}
    , decltype(_impl_.checkpoint_hash_){uint64_t{0u}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FingerprintDef::~FingerprintDef() {
  // @@protoc_insertion_point(destructor:tensorflow.FingerprintDef)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FingerprintDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.version_;
}

void FingerprintDef::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FingerprintDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.FingerprintDef)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.version_ != nullptr) {
    delete _impl_.version_;
  }
  _impl_.version_ = nullptr;
  ::memset(&_impl_.saved_model_checksum_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.checkpoint_hash_) -
      reinterpret_cast<char*>(&_impl_.saved_model_checksum_)) + sizeof(_impl_.checkpoint_hash_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FingerprintDef::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 saved_model_checksum = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.saved_model_checksum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 graph_def_program_hash = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.graph_def_program_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 signature_def_hash = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.signature_def_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 saved_object_graph_hash = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.saved_object_graph_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 checkpoint_hash = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.checkpoint_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.VersionDef version = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_version(), ptr);
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

uint8_t* FingerprintDef::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.FingerprintDef)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 saved_model_checksum = 1;
  if (this->_internal_saved_model_checksum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_saved_model_checksum(), target);
  }

  // uint64 graph_def_program_hash = 2;
  if (this->_internal_graph_def_program_hash() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_graph_def_program_hash(), target);
  }

  // uint64 signature_def_hash = 3;
  if (this->_internal_signature_def_hash() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_signature_def_hash(), target);
  }

  // uint64 saved_object_graph_hash = 4;
  if (this->_internal_saved_object_graph_hash() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_saved_object_graph_hash(), target);
  }

  // uint64 checkpoint_hash = 5;
  if (this->_internal_checkpoint_hash() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_checkpoint_hash(), target);
  }

  // .tensorflow.VersionDef version = 6;
  if (this->_internal_has_version()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::version(this),
        _Internal::version(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.FingerprintDef)
  return target;
}

size_t FingerprintDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.FingerprintDef)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.VersionDef version = 6;
  if (this->_internal_has_version()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.version_);
  }

  // uint64 saved_model_checksum = 1;
  if (this->_internal_saved_model_checksum() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_saved_model_checksum());
  }

  // uint64 graph_def_program_hash = 2;
  if (this->_internal_graph_def_program_hash() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_graph_def_program_hash());
  }

  // uint64 signature_def_hash = 3;
  if (this->_internal_signature_def_hash() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_signature_def_hash());
  }

  // uint64 saved_object_graph_hash = 4;
  if (this->_internal_saved_object_graph_hash() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_saved_object_graph_hash());
  }

  // uint64 checkpoint_hash = 5;
  if (this->_internal_checkpoint_hash() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_checkpoint_hash());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FingerprintDef::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FingerprintDef::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FingerprintDef::GetClassData() const { return &_class_data_; }


void FingerprintDef::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FingerprintDef*>(&to_msg);
  auto& from = static_cast<const FingerprintDef&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.FingerprintDef)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_version()) {
    _this->_internal_mutable_version()->::tensorflow::VersionDef::MergeFrom(
        from._internal_version());
  }
  if (from._internal_saved_model_checksum() != 0) {
    _this->_internal_set_saved_model_checksum(from._internal_saved_model_checksum());
  }
  if (from._internal_graph_def_program_hash() != 0) {
    _this->_internal_set_graph_def_program_hash(from._internal_graph_def_program_hash());
  }
  if (from._internal_signature_def_hash() != 0) {
    _this->_internal_set_signature_def_hash(from._internal_signature_def_hash());
  }
  if (from._internal_saved_object_graph_hash() != 0) {
    _this->_internal_set_saved_object_graph_hash(from._internal_saved_object_graph_hash());
  }
  if (from._internal_checkpoint_hash() != 0) {
    _this->_internal_set_checkpoint_hash(from._internal_checkpoint_hash());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FingerprintDef::CopyFrom(const FingerprintDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.FingerprintDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FingerprintDef::IsInitialized() const {
  return true;
}

void FingerprintDef::InternalSwap(FingerprintDef* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FingerprintDef, _impl_.checkpoint_hash_)
      + sizeof(FingerprintDef::_impl_.checkpoint_hash_)
      - PROTOBUF_FIELD_OFFSET(FingerprintDef, _impl_.version_)>(
          reinterpret_cast<char*>(&_impl_.version_),
          reinterpret_cast<char*>(&other->_impl_.version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FingerprintDef::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2ffingerprint_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::FingerprintDef*
Arena::CreateMaybeMessage< ::tensorflow::FingerprintDef >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::FingerprintDef >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>