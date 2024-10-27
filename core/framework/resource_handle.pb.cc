// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/resource_handle.proto

#include "tensorflow/core/framework/resource_handle.pb.h"

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
PROTOBUF_CONSTEXPR ResourceHandleProto_DtypeAndShape::ResourceHandleProto_DtypeAndShape(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.shape_)*/nullptr
  , /*decltype(_impl_.dtype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ResourceHandleProto_DtypeAndShapeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceHandleProto_DtypeAndShapeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceHandleProto_DtypeAndShapeDefaultTypeInternal() {}
  union {
    ResourceHandleProto_DtypeAndShape _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceHandleProto_DtypeAndShapeDefaultTypeInternal _ResourceHandleProto_DtypeAndShape_default_instance_;
PROTOBUF_CONSTEXPR ResourceHandleProto::ResourceHandleProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.dtypes_and_shapes_)*/{}
  , /*decltype(_impl_.device_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.container_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.maybe_type_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.hash_code_)*/uint64_t{0u}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ResourceHandleProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceHandleProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceHandleProtoDefaultTypeInternal() {}
  union {
    ResourceHandleProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceHandleProtoDefaultTypeInternal _ResourceHandleProto_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto_DtypeAndShape, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto_DtypeAndShape, _impl_.dtype_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto_DtypeAndShape, _impl_.shape_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.device_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.container_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.hash_code_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.maybe_type_name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _impl_.dtypes_and_shapes_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::ResourceHandleProto_DtypeAndShape)},
  { 8, -1, -1, sizeof(::tensorflow::ResourceHandleProto)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_ResourceHandleProto_DtypeAndShape_default_instance_._instance,
  &::tensorflow::_ResourceHandleProto_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n/tensorflow/core/framework/resource_han"
  "dle.proto\022\ntensorflow\032,tensorflow/core/f"
  "ramework/tensor_shape.proto\032%tensorflow/"
  "core/framework/types.proto\"\245\002\n\023ResourceH"
  "andleProto\022\016\n\006device\030\001 \001(\t\022\021\n\tcontainer\030"
  "\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\021\n\thash_code\030\004 \001(\004\022\027"
  "\n\017maybe_type_name\030\005 \001(\t\022H\n\021dtypes_and_sh"
  "apes\030\006 \003(\0132-.tensorflow.ResourceHandlePr"
  "oto.DtypeAndShape\032a\n\rDtypeAndShape\022#\n\005dt"
  "ype\030\001 \001(\0162\024.tensorflow.DataType\022+\n\005shape"
  "\030\002 \001(\0132\034.tensorflow.TensorShapeProtoJ\004\010\007"
  "\020\010B\207\001\n\030org.tensorflow.frameworkB\016Resourc"
  "eHandleP\001ZVgithub.com/tensorflow/tensorf"
  "low/tensorflow/go/core/framework/resourc"
  "e_handle_go_proto\370\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_deps[2] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftypes_2eproto,
};
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto = {
    false, false, 588, descriptor_table_protodef_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto,
    "tensorflow/core/framework/resource_handle.proto",
    &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once, descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_deps, 2, 2,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto(&descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto);
namespace tensorflow {

// ===================================================================

class ResourceHandleProto_DtypeAndShape::_Internal {
 public:
  static const ::tensorflow::TensorShapeProto& shape(const ResourceHandleProto_DtypeAndShape* msg);
};

const ::tensorflow::TensorShapeProto&
ResourceHandleProto_DtypeAndShape::_Internal::shape(const ResourceHandleProto_DtypeAndShape* msg) {
  return *msg->_impl_.shape_;
}
void ResourceHandleProto_DtypeAndShape::clear_shape() {
  if (GetArenaForAllocation() == nullptr && _impl_.shape_ != nullptr) {
    delete _impl_.shape_;
  }
  _impl_.shape_ = nullptr;
}
ResourceHandleProto_DtypeAndShape::ResourceHandleProto_DtypeAndShape(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ResourceHandleProto.DtypeAndShape)
}
ResourceHandleProto_DtypeAndShape::ResourceHandleProto_DtypeAndShape(const ResourceHandleProto_DtypeAndShape& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ResourceHandleProto_DtypeAndShape* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.shape_){nullptr}
    , decltype(_impl_.dtype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_shape()) {
    _this->_impl_.shape_ = new ::tensorflow::TensorShapeProto(*from._impl_.shape_);
  }
  _this->_impl_.dtype_ = from._impl_.dtype_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.ResourceHandleProto.DtypeAndShape)
}

inline void ResourceHandleProto_DtypeAndShape::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.shape_){nullptr}
    , decltype(_impl_.dtype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ResourceHandleProto_DtypeAndShape::~ResourceHandleProto_DtypeAndShape() {
  // @@protoc_insertion_point(destructor:tensorflow.ResourceHandleProto.DtypeAndShape)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ResourceHandleProto_DtypeAndShape::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.shape_;
}

void ResourceHandleProto_DtypeAndShape::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ResourceHandleProto_DtypeAndShape::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ResourceHandleProto.DtypeAndShape)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.shape_ != nullptr) {
    delete _impl_.shape_;
  }
  _impl_.shape_ = nullptr;
  _impl_.dtype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceHandleProto_DtypeAndShape::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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

uint8_t* ResourceHandleProto_DtypeAndShape::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ResourceHandleProto.DtypeAndShape)
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

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ResourceHandleProto.DtypeAndShape)
  return target;
}

size_t ResourceHandleProto_DtypeAndShape::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ResourceHandleProto.DtypeAndShape)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

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

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResourceHandleProto_DtypeAndShape::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ResourceHandleProto_DtypeAndShape::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResourceHandleProto_DtypeAndShape::GetClassData() const { return &_class_data_; }


void ResourceHandleProto_DtypeAndShape::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ResourceHandleProto_DtypeAndShape*>(&to_msg);
  auto& from = static_cast<const ResourceHandleProto_DtypeAndShape&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ResourceHandleProto.DtypeAndShape)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_shape()) {
    _this->_internal_mutable_shape()->::tensorflow::TensorShapeProto::MergeFrom(
        from._internal_shape());
  }
  if (from._internal_dtype() != 0) {
    _this->_internal_set_dtype(from._internal_dtype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceHandleProto_DtypeAndShape::CopyFrom(const ResourceHandleProto_DtypeAndShape& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ResourceHandleProto.DtypeAndShape)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceHandleProto_DtypeAndShape::IsInitialized() const {
  return true;
}

void ResourceHandleProto_DtypeAndShape::InternalSwap(ResourceHandleProto_DtypeAndShape* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ResourceHandleProto_DtypeAndShape, _impl_.dtype_)
      + sizeof(ResourceHandleProto_DtypeAndShape::_impl_.dtype_)
      - PROTOBUF_FIELD_OFFSET(ResourceHandleProto_DtypeAndShape, _impl_.shape_)>(
          reinterpret_cast<char*>(&_impl_.shape_),
          reinterpret_cast<char*>(&other->_impl_.shape_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceHandleProto_DtypeAndShape::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto[0]);
}

// ===================================================================

class ResourceHandleProto::_Internal {
 public:
};

ResourceHandleProto::ResourceHandleProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ResourceHandleProto)
}
ResourceHandleProto::ResourceHandleProto(const ResourceHandleProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ResourceHandleProto* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.dtypes_and_shapes_){from._impl_.dtypes_and_shapes_}
    , decltype(_impl_.device_){}
    , decltype(_impl_.container_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.maybe_type_name_){}
    , decltype(_impl_.hash_code_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.device_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.device_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_device().empty()) {
    _this->_impl_.device_.Set(from._internal_device(), 
      _this->GetArenaForAllocation());
  }
  _impl_.container_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.container_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_container().empty()) {
    _this->_impl_.container_.Set(from._internal_container(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.maybe_type_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.maybe_type_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_maybe_type_name().empty()) {
    _this->_impl_.maybe_type_name_.Set(from._internal_maybe_type_name(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.hash_code_ = from._impl_.hash_code_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.ResourceHandleProto)
}

inline void ResourceHandleProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.dtypes_and_shapes_){arena}
    , decltype(_impl_.device_){}
    , decltype(_impl_.container_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.maybe_type_name_){}
    , decltype(_impl_.hash_code_){uint64_t{0u}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.device_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.device_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.container_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.container_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.maybe_type_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.maybe_type_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ResourceHandleProto::~ResourceHandleProto() {
  // @@protoc_insertion_point(destructor:tensorflow.ResourceHandleProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ResourceHandleProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.dtypes_and_shapes_.~RepeatedPtrField();
  _impl_.device_.Destroy();
  _impl_.container_.Destroy();
  _impl_.name_.Destroy();
  _impl_.maybe_type_name_.Destroy();
}

void ResourceHandleProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ResourceHandleProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ResourceHandleProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.dtypes_and_shapes_.Clear();
  _impl_.device_.ClearToEmpty();
  _impl_.container_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  _impl_.maybe_type_name_.ClearToEmpty();
  _impl_.hash_code_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceHandleProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string device = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_device();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ResourceHandleProto.device"));
        } else
          goto handle_unusual;
        continue;
      // string container = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_container();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ResourceHandleProto.container"));
        } else
          goto handle_unusual;
        continue;
      // string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ResourceHandleProto.name"));
        } else
          goto handle_unusual;
        continue;
      // uint64 hash_code = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.hash_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string maybe_type_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_maybe_type_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ResourceHandleProto.maybe_type_name"));
        } else
          goto handle_unusual;
        continue;
      // repeated .tensorflow.ResourceHandleProto.DtypeAndShape dtypes_and_shapes = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_dtypes_and_shapes(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
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

uint8_t* ResourceHandleProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ResourceHandleProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string device = 1;
  if (!this->_internal_device().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_device().data(), static_cast<int>(this->_internal_device().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.device");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_device(), target);
  }

  // string container = 2;
  if (!this->_internal_container().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_container().data(), static_cast<int>(this->_internal_container().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.container");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_container(), target);
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name(), target);
  }

  // uint64 hash_code = 4;
  if (this->_internal_hash_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_hash_code(), target);
  }

  // string maybe_type_name = 5;
  if (!this->_internal_maybe_type_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_maybe_type_name().data(), static_cast<int>(this->_internal_maybe_type_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.maybe_type_name");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_maybe_type_name(), target);
  }

  // repeated .tensorflow.ResourceHandleProto.DtypeAndShape dtypes_and_shapes = 6;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_dtypes_and_shapes_size()); i < n; i++) {
    const auto& repfield = this->_internal_dtypes_and_shapes(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(6, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ResourceHandleProto)
  return target;
}

size_t ResourceHandleProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ResourceHandleProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.ResourceHandleProto.DtypeAndShape dtypes_and_shapes = 6;
  total_size += 1UL * this->_internal_dtypes_and_shapes_size();
  for (const auto& msg : this->_impl_.dtypes_and_shapes_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string device = 1;
  if (!this->_internal_device().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_device());
  }

  // string container = 2;
  if (!this->_internal_container().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_container());
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string maybe_type_name = 5;
  if (!this->_internal_maybe_type_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_maybe_type_name());
  }

  // uint64 hash_code = 4;
  if (this->_internal_hash_code() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_hash_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResourceHandleProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ResourceHandleProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResourceHandleProto::GetClassData() const { return &_class_data_; }


void ResourceHandleProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ResourceHandleProto*>(&to_msg);
  auto& from = static_cast<const ResourceHandleProto&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ResourceHandleProto)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.dtypes_and_shapes_.MergeFrom(from._impl_.dtypes_and_shapes_);
  if (!from._internal_device().empty()) {
    _this->_internal_set_device(from._internal_device());
  }
  if (!from._internal_container().empty()) {
    _this->_internal_set_container(from._internal_container());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_maybe_type_name().empty()) {
    _this->_internal_set_maybe_type_name(from._internal_maybe_type_name());
  }
  if (from._internal_hash_code() != 0) {
    _this->_internal_set_hash_code(from._internal_hash_code());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceHandleProto::CopyFrom(const ResourceHandleProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ResourceHandleProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceHandleProto::IsInitialized() const {
  return true;
}

void ResourceHandleProto::InternalSwap(ResourceHandleProto* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.dtypes_and_shapes_.InternalSwap(&other->_impl_.dtypes_and_shapes_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.device_, lhs_arena,
      &other->_impl_.device_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.container_, lhs_arena,
      &other->_impl_.container_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.maybe_type_name_, lhs_arena,
      &other->_impl_.maybe_type_name_, rhs_arena
  );
  swap(_impl_.hash_code_, other->_impl_.hash_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceHandleProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::ResourceHandleProto_DtypeAndShape*
Arena::CreateMaybeMessage< ::tensorflow::ResourceHandleProto_DtypeAndShape >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ResourceHandleProto_DtypeAndShape >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::ResourceHandleProto*
Arena::CreateMaybeMessage< ::tensorflow::ResourceHandleProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ResourceHandleProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>