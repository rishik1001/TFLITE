// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensor_bundle.proto

#include "tensorflow/core/protobuf/tensor_bundle.pb.h"

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
PROTOBUF_CONSTEXPR BundleHeaderProto::BundleHeaderProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_)*/nullptr
  , /*decltype(_impl_.num_shards_)*/0
  , /*decltype(_impl_.endianness_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BundleHeaderProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BundleHeaderProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BundleHeaderProtoDefaultTypeInternal() {}
  union {
    BundleHeaderProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BundleHeaderProtoDefaultTypeInternal _BundleHeaderProto_default_instance_;
PROTOBUF_CONSTEXPR BundleEntryProto::BundleEntryProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.slices_)*/{}
  , /*decltype(_impl_.shape_)*/nullptr
  , /*decltype(_impl_.dtype_)*/0
  , /*decltype(_impl_.shard_id_)*/0
  , /*decltype(_impl_.offset_)*/int64_t{0}
  , /*decltype(_impl_.size_)*/int64_t{0}
  , /*decltype(_impl_.crc32c_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BundleEntryProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BundleEntryProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BundleEntryProtoDefaultTypeInternal() {}
  union {
    BundleEntryProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BundleEntryProtoDefaultTypeInternal _BundleEntryProto_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, _impl_.num_shards_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, _impl_.endianness_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, _impl_.version_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.dtype_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.shape_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.shard_id_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.offset_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.size_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.crc32c_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _impl_.slices_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::BundleHeaderProto)},
  { 9, -1, -1, sizeof(::tensorflow::BundleEntryProto)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_BundleHeaderProto_default_instance_._instance,
  &::tensorflow::_BundleEntryProto_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,tensorflow/core/protobuf/tensor_bundle"
  ".proto\022\ntensorflow\032,tensorflow/core/fram"
  "ework/tensor_shape.proto\032,tensorflow/cor"
  "e/framework/tensor_slice.proto\032%tensorfl"
  "ow/core/framework/types.proto\032(tensorflo"
  "w/core/framework/versions.proto\"\261\001\n\021Bund"
  "leHeaderProto\022\022\n\nnum_shards\030\001 \001(\005\022<\n\nend"
  "ianness\030\002 \001(\0162(.tensorflow.BundleHeaderP"
  "roto.Endianness\022\'\n\007version\030\003 \001(\0132\026.tenso"
  "rflow.VersionDef\"!\n\nEndianness\022\n\n\006LITTLE"
  "\020\000\022\007\n\003BIG\020\001\"\322\001\n\020BundleEntryProto\022#\n\005dtyp"
  "e\030\001 \001(\0162\024.tensorflow.DataType\022+\n\005shape\030\002"
  " \001(\0132\034.tensorflow.TensorShapeProto\022\020\n\010sh"
  "ard_id\030\003 \001(\005\022\016\n\006offset\030\004 \001(\003\022\014\n\004size\030\005 \001"
  "(\003\022\016\n\006crc32c\030\006 \001(\007\022,\n\006slices\030\007 \003(\0132\034.ten"
  "sorflow.TensorSliceProtoB\205\001\n\023org.tensorf"
  "low.utilB\022TensorBundleProtosP\001ZUgithub.c"
  "om/tensorflow/tensorflow/tensorflow/go/c"
  "ore/protobuf/for_core_protos_go_proto\370\001\001"
  "b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_deps[4] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftypes_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2fversions_2eproto,
};
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto = {
    false, false, 768, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto,
    "tensorflow/core/protobuf/tensor_bundle.proto",
    &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once, descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_deps, 4, 2,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto);
namespace tensorflow {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BundleHeaderProto_Endianness_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto);
  return file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[0];
}
bool BundleHeaderProto_Endianness_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr BundleHeaderProto_Endianness BundleHeaderProto::LITTLE;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::BIG;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::Endianness_MIN;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::Endianness_MAX;
constexpr int BundleHeaderProto::Endianness_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class BundleHeaderProto::_Internal {
 public:
  static const ::tensorflow::VersionDef& version(const BundleHeaderProto* msg);
};

const ::tensorflow::VersionDef&
BundleHeaderProto::_Internal::version(const BundleHeaderProto* msg) {
  return *msg->_impl_.version_;
}
void BundleHeaderProto::clear_version() {
  if (GetArenaForAllocation() == nullptr && _impl_.version_ != nullptr) {
    delete _impl_.version_;
  }
  _impl_.version_ = nullptr;
}
BundleHeaderProto::BundleHeaderProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.BundleHeaderProto)
}
BundleHeaderProto::BundleHeaderProto(const BundleHeaderProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BundleHeaderProto* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){nullptr}
    , decltype(_impl_.num_shards_){}
    , decltype(_impl_.endianness_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_version()) {
    _this->_impl_.version_ = new ::tensorflow::VersionDef(*from._impl_.version_);
  }
  ::memcpy(&_impl_.num_shards_, &from._impl_.num_shards_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.endianness_) -
    reinterpret_cast<char*>(&_impl_.num_shards_)) + sizeof(_impl_.endianness_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.BundleHeaderProto)
}

inline void BundleHeaderProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){nullptr}
    , decltype(_impl_.num_shards_){0}
    , decltype(_impl_.endianness_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

BundleHeaderProto::~BundleHeaderProto() {
  // @@protoc_insertion_point(destructor:tensorflow.BundleHeaderProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BundleHeaderProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.version_;
}

void BundleHeaderProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BundleHeaderProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.BundleHeaderProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.version_ != nullptr) {
    delete _impl_.version_;
  }
  _impl_.version_ = nullptr;
  ::memset(&_impl_.num_shards_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.endianness_) -
      reinterpret_cast<char*>(&_impl_.num_shards_)) + sizeof(_impl_.endianness_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BundleHeaderProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 num_shards = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.num_shards_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_endianness(static_cast<::tensorflow::BundleHeaderProto_Endianness>(val));
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.VersionDef version = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
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

uint8_t* BundleHeaderProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.BundleHeaderProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_shards = 1;
  if (this->_internal_num_shards() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_num_shards(), target);
  }

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  if (this->_internal_endianness() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_endianness(), target);
  }

  // .tensorflow.VersionDef version = 3;
  if (this->_internal_has_version()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::version(this),
        _Internal::version(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.BundleHeaderProto)
  return target;
}

size_t BundleHeaderProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.BundleHeaderProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.VersionDef version = 3;
  if (this->_internal_has_version()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.version_);
  }

  // int32 num_shards = 1;
  if (this->_internal_num_shards() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_num_shards());
  }

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  if (this->_internal_endianness() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_endianness());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BundleHeaderProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BundleHeaderProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BundleHeaderProto::GetClassData() const { return &_class_data_; }


void BundleHeaderProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BundleHeaderProto*>(&to_msg);
  auto& from = static_cast<const BundleHeaderProto&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.BundleHeaderProto)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_version()) {
    _this->_internal_mutable_version()->::tensorflow::VersionDef::MergeFrom(
        from._internal_version());
  }
  if (from._internal_num_shards() != 0) {
    _this->_internal_set_num_shards(from._internal_num_shards());
  }
  if (from._internal_endianness() != 0) {
    _this->_internal_set_endianness(from._internal_endianness());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BundleHeaderProto::CopyFrom(const BundleHeaderProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.BundleHeaderProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BundleHeaderProto::IsInitialized() const {
  return true;
}

void BundleHeaderProto::InternalSwap(BundleHeaderProto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BundleHeaderProto, _impl_.endianness_)
      + sizeof(BundleHeaderProto::_impl_.endianness_)
      - PROTOBUF_FIELD_OFFSET(BundleHeaderProto, _impl_.version_)>(
          reinterpret_cast<char*>(&_impl_.version_),
          reinterpret_cast<char*>(&other->_impl_.version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BundleHeaderProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[0]);
}

// ===================================================================

class BundleEntryProto::_Internal {
 public:
  static const ::tensorflow::TensorShapeProto& shape(const BundleEntryProto* msg);
};

const ::tensorflow::TensorShapeProto&
BundleEntryProto::_Internal::shape(const BundleEntryProto* msg) {
  return *msg->_impl_.shape_;
}
void BundleEntryProto::clear_shape() {
  if (GetArenaForAllocation() == nullptr && _impl_.shape_ != nullptr) {
    delete _impl_.shape_;
  }
  _impl_.shape_ = nullptr;
}
void BundleEntryProto::clear_slices() {
  _impl_.slices_.Clear();
}
BundleEntryProto::BundleEntryProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.BundleEntryProto)
}
BundleEntryProto::BundleEntryProto(const BundleEntryProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BundleEntryProto* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.slices_){from._impl_.slices_}
    , decltype(_impl_.shape_){nullptr}
    , decltype(_impl_.dtype_){}
    , decltype(_impl_.shard_id_){}
    , decltype(_impl_.offset_){}
    , decltype(_impl_.size_){}
    , decltype(_impl_.crc32c_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_shape()) {
    _this->_impl_.shape_ = new ::tensorflow::TensorShapeProto(*from._impl_.shape_);
  }
  ::memcpy(&_impl_.dtype_, &from._impl_.dtype_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.crc32c_) -
    reinterpret_cast<char*>(&_impl_.dtype_)) + sizeof(_impl_.crc32c_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.BundleEntryProto)
}

inline void BundleEntryProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.slices_){arena}
    , decltype(_impl_.shape_){nullptr}
    , decltype(_impl_.dtype_){0}
    , decltype(_impl_.shard_id_){0}
    , decltype(_impl_.offset_){int64_t{0}}
    , decltype(_impl_.size_){int64_t{0}}
    , decltype(_impl_.crc32c_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

BundleEntryProto::~BundleEntryProto() {
  // @@protoc_insertion_point(destructor:tensorflow.BundleEntryProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BundleEntryProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.slices_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.shape_;
}

void BundleEntryProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BundleEntryProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.BundleEntryProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.slices_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.shape_ != nullptr) {
    delete _impl_.shape_;
  }
  _impl_.shape_ = nullptr;
  ::memset(&_impl_.dtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.crc32c_) -
      reinterpret_cast<char*>(&_impl_.dtype_)) + sizeof(_impl_.crc32c_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BundleEntryProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .tensorflow.DataType dtype = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_dtype(static_cast<::tensorflow::DataType>(val));
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.TensorShapeProto shape = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_shape(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 shard_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.shard_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 offset = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 size = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // fixed32 crc32c = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 53)) {
          _impl_.crc32c_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // repeated .tensorflow.TensorSliceProto slices = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_slices(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
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

uint8_t* BundleEntryProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.BundleEntryProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.DataType dtype = 1;
  if (this->_internal_dtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_dtype(), target);
  }

  // .tensorflow.TensorShapeProto shape = 2;
  if (this->_internal_has_shape()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::shape(this),
        _Internal::shape(this).GetCachedSize(), target, stream);
  }

  // int32 shard_id = 3;
  if (this->_internal_shard_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_shard_id(), target);
  }

  // int64 offset = 4;
  if (this->_internal_offset() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_offset(), target);
  }

  // int64 size = 5;
  if (this->_internal_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_size(), target);
  }

  // fixed32 crc32c = 6;
  if (this->_internal_crc32c() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(6, this->_internal_crc32c(), target);
  }

  // repeated .tensorflow.TensorSliceProto slices = 7;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_slices_size()); i < n; i++) {
    const auto& repfield = this->_internal_slices(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(7, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.BundleEntryProto)
  return target;
}

size_t BundleEntryProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.BundleEntryProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.TensorSliceProto slices = 7;
  total_size += 1UL * this->_internal_slices_size();
  for (const auto& msg : this->_impl_.slices_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .tensorflow.TensorShapeProto shape = 2;
  if (this->_internal_has_shape()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.shape_);
  }

  // .tensorflow.DataType dtype = 1;
  if (this->_internal_dtype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_dtype());
  }

  // int32 shard_id = 3;
  if (this->_internal_shard_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_shard_id());
  }

  // int64 offset = 4;
  if (this->_internal_offset() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_offset());
  }

  // int64 size = 5;
  if (this->_internal_size() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_size());
  }

  // fixed32 crc32c = 6;
  if (this->_internal_crc32c() != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BundleEntryProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BundleEntryProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BundleEntryProto::GetClassData() const { return &_class_data_; }


void BundleEntryProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BundleEntryProto*>(&to_msg);
  auto& from = static_cast<const BundleEntryProto&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.BundleEntryProto)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.slices_.MergeFrom(from._impl_.slices_);
  if (from._internal_has_shape()) {
    _this->_internal_mutable_shape()->::tensorflow::TensorShapeProto::MergeFrom(
        from._internal_shape());
  }
  if (from._internal_dtype() != 0) {
    _this->_internal_set_dtype(from._internal_dtype());
  }
  if (from._internal_shard_id() != 0) {
    _this->_internal_set_shard_id(from._internal_shard_id());
  }
  if (from._internal_offset() != 0) {
    _this->_internal_set_offset(from._internal_offset());
  }
  if (from._internal_size() != 0) {
    _this->_internal_set_size(from._internal_size());
  }
  if (from._internal_crc32c() != 0) {
    _this->_internal_set_crc32c(from._internal_crc32c());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BundleEntryProto::CopyFrom(const BundleEntryProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.BundleEntryProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BundleEntryProto::IsInitialized() const {
  return true;
}

void BundleEntryProto::InternalSwap(BundleEntryProto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.slices_.InternalSwap(&other->_impl_.slices_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BundleEntryProto, _impl_.crc32c_)
      + sizeof(BundleEntryProto::_impl_.crc32c_)
      - PROTOBUF_FIELD_OFFSET(BundleEntryProto, _impl_.shape_)>(
          reinterpret_cast<char*>(&_impl_.shape_),
          reinterpret_cast<char*>(&other->_impl_.shape_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BundleEntryProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::BundleHeaderProto*
Arena::CreateMaybeMessage< ::tensorflow::BundleHeaderProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::BundleHeaderProto >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::BundleEntryProto*
Arena::CreateMaybeMessage< ::tensorflow::BundleEntryProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::BundleEntryProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>