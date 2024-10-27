// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/quantization/uniform_quant_ops_attr.proto

#include "tensorflow/core/util/quantization/uniform_quant_ops_attr.pb.h"

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
PROTOBUF_CONSTEXPR UniformQuantizedConvolutionDimensionNumbersAttr::UniformQuantizedConvolutionDimensionNumbersAttr(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.input_spatial_dimensions_)*/{}
  , /*decltype(_impl_._input_spatial_dimensions_cached_byte_size_)*/{0}
  , /*decltype(_impl_.kernel_spatial_dimensions_)*/{}
  , /*decltype(_impl_._kernel_spatial_dimensions_cached_byte_size_)*/{0}
  , /*decltype(_impl_.output_spatial_dimensions_)*/{}
  , /*decltype(_impl_._output_spatial_dimensions_cached_byte_size_)*/{0}
  , /*decltype(_impl_.input_batch_dimension_)*/int64_t{0}
  , /*decltype(_impl_.input_feature_dimension_)*/int64_t{0}
  , /*decltype(_impl_.kernel_input_feature_dimension_)*/int64_t{0}
  , /*decltype(_impl_.kernel_output_feature_dimension_)*/int64_t{0}
  , /*decltype(_impl_.output_batch_dimension_)*/int64_t{0}
  , /*decltype(_impl_.output_feature_dimension_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UniformQuantizedConvolutionDimensionNumbersAttrDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UniformQuantizedConvolutionDimensionNumbersAttrDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UniformQuantizedConvolutionDimensionNumbersAttrDefaultTypeInternal() {}
  union {
    UniformQuantizedConvolutionDimensionNumbersAttr _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UniformQuantizedConvolutionDimensionNumbersAttrDefaultTypeInternal _UniformQuantizedConvolutionDimensionNumbersAttr_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.input_batch_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.input_feature_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.input_spatial_dimensions_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.kernel_input_feature_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.kernel_output_feature_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.kernel_spatial_dimensions_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.output_batch_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.output_feature_dimension_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.output_spatial_dimensions_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_UniformQuantizedConvolutionDimensionNumbersAttr_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n>tensorflow/core/util/quantization/unif"
  "orm_quant_ops_attr.proto\022\ntensorflow\"\354\002\n"
  "/UniformQuantizedConvolutionDimensionNum"
  "bersAttr\022\035\n\025input_batch_dimension\030\001 \001(\003\022"
  "\037\n\027input_feature_dimension\030\002 \001(\003\022 \n\030inpu"
  "t_spatial_dimensions\030\003 \003(\003\022&\n\036kernel_inp"
  "ut_feature_dimension\030\004 \001(\003\022\'\n\037kernel_out"
  "put_feature_dimension\030\005 \001(\003\022!\n\031kernel_sp"
  "atial_dimensions\030\006 \003(\003\022\036\n\026output_batch_d"
  "imension\030\007 \001(\003\022 \n\030output_feature_dimensi"
  "on\030\010 \001(\003\022!\n\031output_spatial_dimensions\030\t "
  "\003(\003BWZUgithub.com/tensorflow/tensorflow/"
  "tensorflow/go/core/protobuf/for_core_pro"
  "tos_go_protob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto = {
    false, false, 540, descriptor_table_protodef_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto,
    "tensorflow/core/util/quantization/uniform_quant_ops_attr.proto",
    &descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto(&descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto);
namespace tensorflow {

// ===================================================================

class UniformQuantizedConvolutionDimensionNumbersAttr::_Internal {
 public:
};

UniformQuantizedConvolutionDimensionNumbersAttr::UniformQuantizedConvolutionDimensionNumbersAttr(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
}
UniformQuantizedConvolutionDimensionNumbersAttr::UniformQuantizedConvolutionDimensionNumbersAttr(const UniformQuantizedConvolutionDimensionNumbersAttr& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UniformQuantizedConvolutionDimensionNumbersAttr* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.input_spatial_dimensions_){from._impl_.input_spatial_dimensions_}
    , /*decltype(_impl_._input_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.kernel_spatial_dimensions_){from._impl_.kernel_spatial_dimensions_}
    , /*decltype(_impl_._kernel_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.output_spatial_dimensions_){from._impl_.output_spatial_dimensions_}
    , /*decltype(_impl_._output_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.input_batch_dimension_){}
    , decltype(_impl_.input_feature_dimension_){}
    , decltype(_impl_.kernel_input_feature_dimension_){}
    , decltype(_impl_.kernel_output_feature_dimension_){}
    , decltype(_impl_.output_batch_dimension_){}
    , decltype(_impl_.output_feature_dimension_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.input_batch_dimension_, &from._impl_.input_batch_dimension_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.output_feature_dimension_) -
    reinterpret_cast<char*>(&_impl_.input_batch_dimension_)) + sizeof(_impl_.output_feature_dimension_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
}

inline void UniformQuantizedConvolutionDimensionNumbersAttr::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.input_spatial_dimensions_){arena}
    , /*decltype(_impl_._input_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.kernel_spatial_dimensions_){arena}
    , /*decltype(_impl_._kernel_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.output_spatial_dimensions_){arena}
    , /*decltype(_impl_._output_spatial_dimensions_cached_byte_size_)*/{0}
    , decltype(_impl_.input_batch_dimension_){int64_t{0}}
    , decltype(_impl_.input_feature_dimension_){int64_t{0}}
    , decltype(_impl_.kernel_input_feature_dimension_){int64_t{0}}
    , decltype(_impl_.kernel_output_feature_dimension_){int64_t{0}}
    , decltype(_impl_.output_batch_dimension_){int64_t{0}}
    , decltype(_impl_.output_feature_dimension_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UniformQuantizedConvolutionDimensionNumbersAttr::~UniformQuantizedConvolutionDimensionNumbersAttr() {
  // @@protoc_insertion_point(destructor:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UniformQuantizedConvolutionDimensionNumbersAttr::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.input_spatial_dimensions_.~RepeatedField();
  _impl_.kernel_spatial_dimensions_.~RepeatedField();
  _impl_.output_spatial_dimensions_.~RepeatedField();
}

void UniformQuantizedConvolutionDimensionNumbersAttr::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UniformQuantizedConvolutionDimensionNumbersAttr::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.input_spatial_dimensions_.Clear();
  _impl_.kernel_spatial_dimensions_.Clear();
  _impl_.output_spatial_dimensions_.Clear();
  ::memset(&_impl_.input_batch_dimension_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.output_feature_dimension_) -
      reinterpret_cast<char*>(&_impl_.input_batch_dimension_)) + sizeof(_impl_.output_feature_dimension_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UniformQuantizedConvolutionDimensionNumbersAttr::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 input_batch_dimension = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.input_batch_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 input_feature_dimension = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.input_feature_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int64 input_spatial_dimensions = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_input_spatial_dimensions(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 24) {
          _internal_add_input_spatial_dimensions(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 kernel_input_feature_dimension = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.kernel_input_feature_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 kernel_output_feature_dimension = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.kernel_output_feature_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int64 kernel_spatial_dimensions = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_kernel_spatial_dimensions(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 48) {
          _internal_add_kernel_spatial_dimensions(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 output_batch_dimension = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.output_batch_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 output_feature_dimension = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.output_feature_dimension_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int64 output_spatial_dimensions = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_output_spatial_dimensions(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 72) {
          _internal_add_output_spatial_dimensions(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

uint8_t* UniformQuantizedConvolutionDimensionNumbersAttr::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 input_batch_dimension = 1;
  if (this->_internal_input_batch_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_input_batch_dimension(), target);
  }

  // int64 input_feature_dimension = 2;
  if (this->_internal_input_feature_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_input_feature_dimension(), target);
  }

  // repeated int64 input_spatial_dimensions = 3;
  {
    int byte_size = _impl_._input_spatial_dimensions_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          3, _internal_input_spatial_dimensions(), byte_size, target);
    }
  }

  // int64 kernel_input_feature_dimension = 4;
  if (this->_internal_kernel_input_feature_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_kernel_input_feature_dimension(), target);
  }

  // int64 kernel_output_feature_dimension = 5;
  if (this->_internal_kernel_output_feature_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_kernel_output_feature_dimension(), target);
  }

  // repeated int64 kernel_spatial_dimensions = 6;
  {
    int byte_size = _impl_._kernel_spatial_dimensions_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          6, _internal_kernel_spatial_dimensions(), byte_size, target);
    }
  }

  // int64 output_batch_dimension = 7;
  if (this->_internal_output_batch_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(7, this->_internal_output_batch_dimension(), target);
  }

  // int64 output_feature_dimension = 8;
  if (this->_internal_output_feature_dimension() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(8, this->_internal_output_feature_dimension(), target);
  }

  // repeated int64 output_spatial_dimensions = 9;
  {
    int byte_size = _impl_._output_spatial_dimensions_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          9, _internal_output_spatial_dimensions(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  return target;
}

size_t UniformQuantizedConvolutionDimensionNumbersAttr::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 input_spatial_dimensions = 3;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int64Size(this->_impl_.input_spatial_dimensions_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._input_spatial_dimensions_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated int64 kernel_spatial_dimensions = 6;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int64Size(this->_impl_.kernel_spatial_dimensions_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._kernel_spatial_dimensions_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated int64 output_spatial_dimensions = 9;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int64Size(this->_impl_.output_spatial_dimensions_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._output_spatial_dimensions_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // int64 input_batch_dimension = 1;
  if (this->_internal_input_batch_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_input_batch_dimension());
  }

  // int64 input_feature_dimension = 2;
  if (this->_internal_input_feature_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_input_feature_dimension());
  }

  // int64 kernel_input_feature_dimension = 4;
  if (this->_internal_kernel_input_feature_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_kernel_input_feature_dimension());
  }

  // int64 kernel_output_feature_dimension = 5;
  if (this->_internal_kernel_output_feature_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_kernel_output_feature_dimension());
  }

  // int64 output_batch_dimension = 7;
  if (this->_internal_output_batch_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_output_batch_dimension());
  }

  // int64 output_feature_dimension = 8;
  if (this->_internal_output_feature_dimension() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_output_feature_dimension());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UniformQuantizedConvolutionDimensionNumbersAttr::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UniformQuantizedConvolutionDimensionNumbersAttr::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UniformQuantizedConvolutionDimensionNumbersAttr::GetClassData() const { return &_class_data_; }


void UniformQuantizedConvolutionDimensionNumbersAttr::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UniformQuantizedConvolutionDimensionNumbersAttr*>(&to_msg);
  auto& from = static_cast<const UniformQuantizedConvolutionDimensionNumbersAttr&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.input_spatial_dimensions_.MergeFrom(from._impl_.input_spatial_dimensions_);
  _this->_impl_.kernel_spatial_dimensions_.MergeFrom(from._impl_.kernel_spatial_dimensions_);
  _this->_impl_.output_spatial_dimensions_.MergeFrom(from._impl_.output_spatial_dimensions_);
  if (from._internal_input_batch_dimension() != 0) {
    _this->_internal_set_input_batch_dimension(from._internal_input_batch_dimension());
  }
  if (from._internal_input_feature_dimension() != 0) {
    _this->_internal_set_input_feature_dimension(from._internal_input_feature_dimension());
  }
  if (from._internal_kernel_input_feature_dimension() != 0) {
    _this->_internal_set_kernel_input_feature_dimension(from._internal_kernel_input_feature_dimension());
  }
  if (from._internal_kernel_output_feature_dimension() != 0) {
    _this->_internal_set_kernel_output_feature_dimension(from._internal_kernel_output_feature_dimension());
  }
  if (from._internal_output_batch_dimension() != 0) {
    _this->_internal_set_output_batch_dimension(from._internal_output_batch_dimension());
  }
  if (from._internal_output_feature_dimension() != 0) {
    _this->_internal_set_output_feature_dimension(from._internal_output_feature_dimension());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UniformQuantizedConvolutionDimensionNumbersAttr::CopyFrom(const UniformQuantizedConvolutionDimensionNumbersAttr& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.UniformQuantizedConvolutionDimensionNumbersAttr)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UniformQuantizedConvolutionDimensionNumbersAttr::IsInitialized() const {
  return true;
}

void UniformQuantizedConvolutionDimensionNumbersAttr::InternalSwap(UniformQuantizedConvolutionDimensionNumbersAttr* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.input_spatial_dimensions_.InternalSwap(&other->_impl_.input_spatial_dimensions_);
  _impl_.kernel_spatial_dimensions_.InternalSwap(&other->_impl_.kernel_spatial_dimensions_);
  _impl_.output_spatial_dimensions_.InternalSwap(&other->_impl_.output_spatial_dimensions_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.output_feature_dimension_)
      + sizeof(UniformQuantizedConvolutionDimensionNumbersAttr::_impl_.output_feature_dimension_)
      - PROTOBUF_FIELD_OFFSET(UniformQuantizedConvolutionDimensionNumbersAttr, _impl_.input_batch_dimension_)>(
          reinterpret_cast<char*>(&_impl_.input_batch_dimension_),
          reinterpret_cast<char*>(&other->_impl_.input_batch_dimension_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UniformQuantizedConvolutionDimensionNumbersAttr::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto_getter, &descriptor_table_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2futil_2fquantization_2funiform_5fquant_5fops_5fattr_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr*
Arena::CreateMaybeMessage< ::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::UniformQuantizedConvolutionDimensionNumbersAttr >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
