// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensorflow_server.proto

#include "tensorflow/core/protobuf/tensorflow_server.pb.h"

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
PROTOBUF_CONSTEXPR ServerDef::ServerDef(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.job_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.protocol_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.cluster_)*/nullptr
  , /*decltype(_impl_.default_session_config_)*/nullptr
  , /*decltype(_impl_.cluster_device_filters_)*/nullptr
  , /*decltype(_impl_.task_index_)*/0
  , /*decltype(_impl_.port_)*/0
  , /*decltype(_impl_.replica_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ServerDefDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServerDefDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServerDefDefaultTypeInternal() {}
  union {
    ServerDef _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServerDefDefaultTypeInternal _ServerDef_default_instance_;
}  // namespace tensorflow
static ::_pb::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto = nullptr;

const uint32_t TableStruct_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.cluster_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.job_name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.replica_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.task_index_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.default_session_config_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.protocol_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.port_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _impl_.cluster_device_filters_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::ServerDef)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::tensorflow::_ServerDef_default_instance_._instance,
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0tensorflow/core/protobuf/tensorflow_se"
  "rver.proto\022\ntensorflow\032&tensorflow/core/"
  "protobuf/cluster.proto\032%tensorflow/core/"
  "protobuf/config.proto\032-tensorflow/core/p"
  "rotobuf/device_filters.proto\"\206\002\n\tServerD"
  "ef\022\'\n\007cluster\030\001 \001(\0132\026.tensorflow.Cluster"
  "Def\022\020\n\010job_name\030\002 \001(\t\022\017\n\007replica\030\010 \001(\005\022\022"
  "\n\ntask_index\030\003 \001(\005\0227\n\026default_session_co"
  "nfig\030\004 \001(\0132\027.tensorflow.ConfigProto\022\020\n\010p"
  "rotocol\030\005 \001(\t\022\014\n\004port\030\006 \001(\005\022@\n\026cluster_d"
  "evice_filters\030\007 \001(\0132 .tensorflow.Cluster"
  "DeviceFiltersB\206\001\n\032org.tensorflow.distrun"
  "timeB\014ServerProtosP\001ZUgithub.com/tensorf"
  "low/tensorflow/tensorflow/go/core/protob"
  "uf/for_core_protos_go_proto\370\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_deps[3] = {
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fdevice_5ffilters_2eproto,
};
static ::_pbi::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto = {
    false, false, 598, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
    "tensorflow/core/protobuf/tensorflow_server.proto",
    &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_once, descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::offsets,
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto);
namespace tensorflow {

// ===================================================================

class ServerDef::_Internal {
 public:
  static const ::tensorflow::ClusterDef& cluster(const ServerDef* msg);
  static const ::tensorflow::ConfigProto& default_session_config(const ServerDef* msg);
  static const ::tensorflow::ClusterDeviceFilters& cluster_device_filters(const ServerDef* msg);
};

const ::tensorflow::ClusterDef&
ServerDef::_Internal::cluster(const ServerDef* msg) {
  return *msg->_impl_.cluster_;
}
const ::tensorflow::ConfigProto&
ServerDef::_Internal::default_session_config(const ServerDef* msg) {
  return *msg->_impl_.default_session_config_;
}
const ::tensorflow::ClusterDeviceFilters&
ServerDef::_Internal::cluster_device_filters(const ServerDef* msg) {
  return *msg->_impl_.cluster_device_filters_;
}
void ServerDef::clear_cluster() {
  if (GetArenaForAllocation() == nullptr && _impl_.cluster_ != nullptr) {
    delete _impl_.cluster_;
  }
  _impl_.cluster_ = nullptr;
}
void ServerDef::clear_default_session_config() {
  if (GetArenaForAllocation() == nullptr && _impl_.default_session_config_ != nullptr) {
    delete _impl_.default_session_config_;
  }
  _impl_.default_session_config_ = nullptr;
}
void ServerDef::clear_cluster_device_filters() {
  if (GetArenaForAllocation() == nullptr && _impl_.cluster_device_filters_ != nullptr) {
    delete _impl_.cluster_device_filters_;
  }
  _impl_.cluster_device_filters_ = nullptr;
}
ServerDef::ServerDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ServerDef)
}
ServerDef::ServerDef(const ServerDef& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ServerDef* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.job_name_){}
    , decltype(_impl_.protocol_){}
    , decltype(_impl_.cluster_){nullptr}
    , decltype(_impl_.default_session_config_){nullptr}
    , decltype(_impl_.cluster_device_filters_){nullptr}
    , decltype(_impl_.task_index_){}
    , decltype(_impl_.port_){}
    , decltype(_impl_.replica_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.job_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.job_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_job_name().empty()) {
    _this->_impl_.job_name_.Set(from._internal_job_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.protocol_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.protocol_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_protocol().empty()) {
    _this->_impl_.protocol_.Set(from._internal_protocol(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_cluster()) {
    _this->_impl_.cluster_ = new ::tensorflow::ClusterDef(*from._impl_.cluster_);
  }
  if (from._internal_has_default_session_config()) {
    _this->_impl_.default_session_config_ = new ::tensorflow::ConfigProto(*from._impl_.default_session_config_);
  }
  if (from._internal_has_cluster_device_filters()) {
    _this->_impl_.cluster_device_filters_ = new ::tensorflow::ClusterDeviceFilters(*from._impl_.cluster_device_filters_);
  }
  ::memcpy(&_impl_.task_index_, &from._impl_.task_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.replica_) -
    reinterpret_cast<char*>(&_impl_.task_index_)) + sizeof(_impl_.replica_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ServerDef)
}

inline void ServerDef::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.job_name_){}
    , decltype(_impl_.protocol_){}
    , decltype(_impl_.cluster_){nullptr}
    , decltype(_impl_.default_session_config_){nullptr}
    , decltype(_impl_.cluster_device_filters_){nullptr}
    , decltype(_impl_.task_index_){0}
    , decltype(_impl_.port_){0}
    , decltype(_impl_.replica_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.job_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.job_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.protocol_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.protocol_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ServerDef::~ServerDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ServerDef)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ServerDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.job_name_.Destroy();
  _impl_.protocol_.Destroy();
  if (this != internal_default_instance()) delete _impl_.cluster_;
  if (this != internal_default_instance()) delete _impl_.default_session_config_;
  if (this != internal_default_instance()) delete _impl_.cluster_device_filters_;
}

void ServerDef::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ServerDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ServerDef)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.job_name_.ClearToEmpty();
  _impl_.protocol_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.cluster_ != nullptr) {
    delete _impl_.cluster_;
  }
  _impl_.cluster_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.default_session_config_ != nullptr) {
    delete _impl_.default_session_config_;
  }
  _impl_.default_session_config_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.cluster_device_filters_ != nullptr) {
    delete _impl_.cluster_device_filters_;
  }
  _impl_.cluster_device_filters_ = nullptr;
  ::memset(&_impl_.task_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.replica_) -
      reinterpret_cast<char*>(&_impl_.task_index_)) + sizeof(_impl_.replica_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServerDef::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .tensorflow.ClusterDef cluster = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_cluster(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string job_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_job_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ServerDef.job_name"));
        } else
          goto handle_unusual;
        continue;
      // int32 task_index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.task_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.ConfigProto default_session_config = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_default_session_config(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string protocol = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_protocol();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "tensorflow.ServerDef.protocol"));
        } else
          goto handle_unusual;
        continue;
      // int32 port = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_cluster_device_filters(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 replica = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.replica_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* ServerDef::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ServerDef)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.ClusterDef cluster = 1;
  if (this->_internal_has_cluster()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::cluster(this),
        _Internal::cluster(this).GetCachedSize(), target, stream);
  }

  // string job_name = 2;
  if (!this->_internal_job_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_job_name().data(), static_cast<int>(this->_internal_job_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.job_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_job_name(), target);
  }

  // int32 task_index = 3;
  if (this->_internal_task_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_task_index(), target);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->_internal_has_default_session_config()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::default_session_config(this),
        _Internal::default_session_config(this).GetCachedSize(), target, stream);
  }

  // string protocol = 5;
  if (!this->_internal_protocol().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_protocol().data(), static_cast<int>(this->_internal_protocol().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.protocol");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_protocol(), target);
  }

  // int32 port = 6;
  if (this->_internal_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_port(), target);
  }

  // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
  if (this->_internal_has_cluster_device_filters()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::cluster_device_filters(this),
        _Internal::cluster_device_filters(this).GetCachedSize(), target, stream);
  }

  // int32 replica = 8;
  if (this->_internal_replica() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_replica(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ServerDef)
  return target;
}

size_t ServerDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ServerDef)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string job_name = 2;
  if (!this->_internal_job_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_job_name());
  }

  // string protocol = 5;
  if (!this->_internal_protocol().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_protocol());
  }

  // .tensorflow.ClusterDef cluster = 1;
  if (this->_internal_has_cluster()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.cluster_);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->_internal_has_default_session_config()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.default_session_config_);
  }

  // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
  if (this->_internal_has_cluster_device_filters()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.cluster_device_filters_);
  }

  // int32 task_index = 3;
  if (this->_internal_task_index() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_task_index());
  }

  // int32 port = 6;
  if (this->_internal_port() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_port());
  }

  // int32 replica = 8;
  if (this->_internal_replica() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_replica());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ServerDef::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ServerDef::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ServerDef::GetClassData() const { return &_class_data_; }


void ServerDef::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ServerDef*>(&to_msg);
  auto& from = static_cast<const ServerDef&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ServerDef)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_job_name().empty()) {
    _this->_internal_set_job_name(from._internal_job_name());
  }
  if (!from._internal_protocol().empty()) {
    _this->_internal_set_protocol(from._internal_protocol());
  }
  if (from._internal_has_cluster()) {
    _this->_internal_mutable_cluster()->::tensorflow::ClusterDef::MergeFrom(
        from._internal_cluster());
  }
  if (from._internal_has_default_session_config()) {
    _this->_internal_mutable_default_session_config()->::tensorflow::ConfigProto::MergeFrom(
        from._internal_default_session_config());
  }
  if (from._internal_has_cluster_device_filters()) {
    _this->_internal_mutable_cluster_device_filters()->::tensorflow::ClusterDeviceFilters::MergeFrom(
        from._internal_cluster_device_filters());
  }
  if (from._internal_task_index() != 0) {
    _this->_internal_set_task_index(from._internal_task_index());
  }
  if (from._internal_port() != 0) {
    _this->_internal_set_port(from._internal_port());
  }
  if (from._internal_replica() != 0) {
    _this->_internal_set_replica(from._internal_replica());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ServerDef::CopyFrom(const ServerDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ServerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerDef::IsInitialized() const {
  return true;
}

void ServerDef::InternalSwap(ServerDef* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.job_name_, lhs_arena,
      &other->_impl_.job_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.protocol_, lhs_arena,
      &other->_impl_.protocol_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ServerDef, _impl_.replica_)
      + sizeof(ServerDef::_impl_.replica_)
      - PROTOBUF_FIELD_OFFSET(ServerDef, _impl_.cluster_)>(
          reinterpret_cast<char*>(&_impl_.cluster_),
          reinterpret_cast<char*>(&other->_impl_.cluster_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerDef::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::ServerDef*
Arena::CreateMaybeMessage< ::tensorflow::ServerDef >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ServerDef >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
