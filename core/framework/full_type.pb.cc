// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/full_type.proto

#include "tensorflow/core/framework/full_type.pb.h"

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
PROTOBUF_CONSTEXPR FullTypeDef::FullTypeDef(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.args_)*/{}
  , /*decltype(_impl_.type_id_)*/0
  , /*decltype(_impl_.attr_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct FullTypeDefDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FullTypeDefDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FullTypeDefDefaultTypeInternal() {}
  union {
    FullTypeDef _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FullTypeDefDefaultTypeInternal _FullTypeDef_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::FullTypeDef, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::tensorflow::FullTypeDef, _impl_._oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::FullTypeDef, _impl_.type_id_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::FullTypeDef, _impl_.args_),
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::tensorflow::FullTypeDef, _impl_.attr_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::FullTypeDef)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_FullTypeDef_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)tensorflow/core/framework/full_type.pr"
  "oto\022\ntensorflow\"\177\n\013FullTypeDef\022\'\n\007type_i"
  "d\030\001 \001(\0162\026.tensorflow.FullTypeId\022%\n\004args\030"
  "\002 \003(\0132\027.tensorflow.FullTypeDef\022\013\n\001s\030\003 \001("
  "\tH\000\022\013\n\001i\030\004 \001(\003H\000B\006\n\004attr*\332\004\n\nFullTypeId\022"
  "\r\n\tTFT_UNSET\020\000\022\013\n\007TFT_VAR\020\001\022\013\n\007TFT_ANY\020\002"
  "\022\017\n\013TFT_PRODUCT\020\003\022\r\n\tTFT_NAMED\020\004\022\020\n\014TFT_"
  "FOR_EACH\020\024\022\020\n\014TFT_CALLABLE\020d\022\017\n\nTFT_TENS"
  "OR\020\350\007\022\016\n\tTFT_ARRAY\020\351\007\022\021\n\014TFT_OPTIONAL\020\352\007"
  "\022\020\n\013TFT_LITERAL\020\353\007\022\020\n\013TFT_ENCODED\020\354\007\022\025\n\020"
  "TFT_SHAPE_TENSOR\020\355\007\022\r\n\010TFT_BOOL\020\310\001\022\016\n\tTF"
  "T_UINT8\020\311\001\022\017\n\nTFT_UINT16\020\312\001\022\017\n\nTFT_UINT3"
  "2\020\313\001\022\017\n\nTFT_UINT64\020\314\001\022\r\n\010TFT_INT8\020\315\001\022\016\n\t"
  "TFT_INT16\020\316\001\022\016\n\tTFT_INT32\020\317\001\022\016\n\tTFT_INT6"
  "4\020\320\001\022\r\n\010TFT_HALF\020\321\001\022\016\n\tTFT_FLOAT\020\322\001\022\017\n\nT"
  "FT_DOUBLE\020\323\001\022\021\n\014TFT_BFLOAT16\020\327\001\022\022\n\rTFT_C"
  "OMPLEX64\020\324\001\022\023\n\016TFT_COMPLEX128\020\325\001\022\017\n\nTFT_"
  "STRING\020\326\001\022\020\n\013TFT_DATASET\020\366N\022\017\n\nTFT_RAGGE"
  "D\020\367N\022\021\n\014TFT_ITERATOR\020\370N\022\023\n\016TFT_MUTEX_LOC"
  "K\020\332O\022\027\n\022TFT_LEGACY_VARIANT\020\333OB\201\001\n\030org.te"
  "nsorflow.frameworkB\016FullTypeProtosP\001ZPgi"
  "thub.com/tensorflow/tensorflow/tensorflo"
  "w/go/core/framework/full_type_go_proto\370\001"
  "\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto = {
    false, false, 929, descriptor_table_protodef_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto,
    "tensorflow/core/framework/full_type.proto",
    &descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto(&descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto);
namespace tensorflow {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FullTypeId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto);
  return file_level_enum_descriptors_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto[0];
}
bool FullTypeId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 20:
    case 100:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 10102:
    case 10103:
    case 10104:
    case 10202:
    case 10203:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class FullTypeDef::_Internal {
 public:
};

FullTypeDef::FullTypeDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.FullTypeDef)
}
FullTypeDef::FullTypeDef(const FullTypeDef& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FullTypeDef* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.args_){from._impl_.args_}
    , decltype(_impl_.type_id_){}
    , decltype(_impl_.attr_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.type_id_ = from._impl_.type_id_;
  clear_has_attr();
  switch (from.attr_case()) {
    case kS: {
      _this->_internal_set_s(from._internal_s());
      break;
    }
    case kI: {
      _this->_internal_set_i(from._internal_i());
      break;
    }
    case ATTR_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.FullTypeDef)
}

inline void FullTypeDef::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.args_){arena}
    , decltype(_impl_.type_id_){0}
    , decltype(_impl_.attr_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_attr();
}

FullTypeDef::~FullTypeDef() {
  // @@protoc_insertion_point(destructor:tensorflow.FullTypeDef)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FullTypeDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.args_.~RepeatedPtrField();
  if (has_attr()) {
    clear_attr();
  }
}

void FullTypeDef::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FullTypeDef::clear_attr() {
// @@protoc_insertion_point(one_of_clear_start:tensorflow.FullTypeDef)
  switch (attr_case()) {
    case kS: {
      _impl_.attr_.s_.Destroy();
      break;
    }
    case kI: {
      // No need to clear
      break;
    }
    case ATTR_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = ATTR_NOT_SET;
}


void FullTypeDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.FullTypeDef)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.args_.Clear();
  _impl_.type_id_ = 0;
  clear_attr();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FullTypeDef::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .tensorflow.FullTypeId type_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type_id(static_cast<::tensorflow::FullTypeId>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated .tensorflow.FullTypeDef args = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_args(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string s = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_s();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.FullTypeDef.s"));
        } else
          goto handle_unusual;
        continue;
      // int64 i = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _internal_set_i(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

uint8_t* FullTypeDef::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.FullTypeDef)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.FullTypeId type_id = 1;
  if (this->_internal_type_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type_id(), target);
  }

  // repeated .tensorflow.FullTypeDef args = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_args_size()); i < n; i++) {
    const auto& repfield = this->_internal_args(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string s = 3;
  if (_internal_has_s()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_s().data(), static_cast<int>(this->_internal_s().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.FullTypeDef.s");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_s(), target);
  }

  // int64 i = 4;
  if (_internal_has_i()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_i(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.FullTypeDef)
  return target;
}

size_t FullTypeDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.FullTypeDef)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.FullTypeDef args = 2;
  total_size += 1UL * this->_internal_args_size();
  for (const auto& msg : this->_impl_.args_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .tensorflow.FullTypeId type_id = 1;
  if (this->_internal_type_id() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type_id());
  }

  switch (attr_case()) {
    // string s = 3;
    case kS: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_s());
      break;
    }
    // int64 i = 4;
    case kI: {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_i());
      break;
    }
    case ATTR_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FullTypeDef::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FullTypeDef::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FullTypeDef::GetClassData() const { return &_class_data_; }


void FullTypeDef::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FullTypeDef*>(&to_msg);
  auto& from = static_cast<const FullTypeDef&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.FullTypeDef)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.args_.MergeFrom(from._impl_.args_);
  if (from._internal_type_id() != 0) {
    _this->_internal_set_type_id(from._internal_type_id());
  }
  switch (from.attr_case()) {
    case kS: {
      _this->_internal_set_s(from._internal_s());
      break;
    }
    case kI: {
      _this->_internal_set_i(from._internal_i());
      break;
    }
    case ATTR_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FullTypeDef::CopyFrom(const FullTypeDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.FullTypeDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FullTypeDef::IsInitialized() const {
  return true;
}

void FullTypeDef::InternalSwap(FullTypeDef* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.args_.InternalSwap(&other->_impl_.args_);
  swap(_impl_.type_id_, other->_impl_.type_id_);
  swap(_impl_.attr_, other->_impl_.attr_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata FullTypeDef::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2ffull_5ftype_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::FullTypeDef*
Arena::CreateMaybeMessage< ::tensorflow::FullTypeDef >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::FullTypeDef >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
