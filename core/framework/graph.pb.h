// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/graph.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fgraph_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fgraph_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/function.pb.h"
#include "tensorflow/core/framework/graph_debug_info.pb.h"
#include "tensorflow/core/framework/node_def.pb.h"
#include "tensorflow/core/framework/versions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2fgraph_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fframework_2fgraph_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fgraph_2eproto;
namespace tensorflow {
class GraphDef;
struct GraphDefDefaultTypeInternal;
extern GraphDefDefaultTypeInternal _GraphDef_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::GraphDef* Arena::CreateMaybeMessage<::tensorflow::GraphDef>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class GraphDef final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.GraphDef) */ {
 public:
  inline GraphDef() : GraphDef(nullptr) {}
  ~GraphDef() override;
  explicit PROTOBUF_CONSTEXPR GraphDef(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GraphDef(const GraphDef& from);
  GraphDef(GraphDef&& from) noexcept
    : GraphDef() {
    *this = ::std::move(from);
  }

  inline GraphDef& operator=(const GraphDef& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphDef& operator=(GraphDef&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GraphDef& default_instance() {
    return *internal_default_instance();
  }
  static inline const GraphDef* internal_default_instance() {
    return reinterpret_cast<const GraphDef*>(
               &_GraphDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GraphDef& a, GraphDef& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphDef* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GraphDef* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GraphDef* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GraphDef>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GraphDef& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GraphDef& from) {
    GraphDef::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GraphDef* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.GraphDef";
  }
  protected:
  explicit GraphDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNodeFieldNumber = 1,
    kLibraryFieldNumber = 2,
    kVersionsFieldNumber = 4,
    kDebugInfoFieldNumber = 5,
    kVersionFieldNumber = 3,
  };
  // repeated .tensorflow.NodeDef node = 1;
  int node_size() const;
  private:
  int _internal_node_size() const;
  public:
  void clear_node();
  ::tensorflow::NodeDef* mutable_node(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::NodeDef >*
      mutable_node();
  private:
  const ::tensorflow::NodeDef& _internal_node(int index) const;
  ::tensorflow::NodeDef* _internal_add_node();
  public:
  const ::tensorflow::NodeDef& node(int index) const;
  ::tensorflow::NodeDef* add_node();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::NodeDef >&
      node() const;

  // .tensorflow.FunctionDefLibrary library = 2;
  bool has_library() const;
  private:
  bool _internal_has_library() const;
  public:
  void clear_library();
  const ::tensorflow::FunctionDefLibrary& library() const;
  PROTOBUF_NODISCARD ::tensorflow::FunctionDefLibrary* release_library();
  ::tensorflow::FunctionDefLibrary* mutable_library();
  void set_allocated_library(::tensorflow::FunctionDefLibrary* library);
  private:
  const ::tensorflow::FunctionDefLibrary& _internal_library() const;
  ::tensorflow::FunctionDefLibrary* _internal_mutable_library();
  public:
  void unsafe_arena_set_allocated_library(
      ::tensorflow::FunctionDefLibrary* library);
  ::tensorflow::FunctionDefLibrary* unsafe_arena_release_library();

  // .tensorflow.VersionDef versions = 4;
  bool has_versions() const;
  private:
  bool _internal_has_versions() const;
  public:
  void clear_versions();
  const ::tensorflow::VersionDef& versions() const;
  PROTOBUF_NODISCARD ::tensorflow::VersionDef* release_versions();
  ::tensorflow::VersionDef* mutable_versions();
  void set_allocated_versions(::tensorflow::VersionDef* versions);
  private:
  const ::tensorflow::VersionDef& _internal_versions() const;
  ::tensorflow::VersionDef* _internal_mutable_versions();
  public:
  void unsafe_arena_set_allocated_versions(
      ::tensorflow::VersionDef* versions);
  ::tensorflow::VersionDef* unsafe_arena_release_versions();

  // .tensorflow.GraphDebugInfo debug_info = 5;
  bool has_debug_info() const;
  private:
  bool _internal_has_debug_info() const;
  public:
  void clear_debug_info();
  const ::tensorflow::GraphDebugInfo& debug_info() const;
  PROTOBUF_NODISCARD ::tensorflow::GraphDebugInfo* release_debug_info();
  ::tensorflow::GraphDebugInfo* mutable_debug_info();
  void set_allocated_debug_info(::tensorflow::GraphDebugInfo* debug_info);
  private:
  const ::tensorflow::GraphDebugInfo& _internal_debug_info() const;
  ::tensorflow::GraphDebugInfo* _internal_mutable_debug_info();
  public:
  void unsafe_arena_set_allocated_debug_info(
      ::tensorflow::GraphDebugInfo* debug_info);
  ::tensorflow::GraphDebugInfo* unsafe_arena_release_debug_info();

  // int32 version = 3 [deprecated = true];
  PROTOBUF_DEPRECATED void clear_version();
  PROTOBUF_DEPRECATED int32_t version() const;
  PROTOBUF_DEPRECATED void set_version(int32_t value);
  private:
  int32_t _internal_version() const;
  void _internal_set_version(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.GraphDef)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::NodeDef > node_;
    ::tensorflow::FunctionDefLibrary* library_;
    ::tensorflow::VersionDef* versions_;
    ::tensorflow::GraphDebugInfo* debug_info_;
    int32_t version_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2fcore_2fframework_2fgraph_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GraphDef

// repeated .tensorflow.NodeDef node = 1;
inline int GraphDef::_internal_node_size() const {
  return _impl_.node_.size();
}
inline int GraphDef::node_size() const {
  return _internal_node_size();
}
inline ::tensorflow::NodeDef* GraphDef::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.GraphDef.node)
  return _impl_.node_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::NodeDef >*
GraphDef::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.GraphDef.node)
  return &_impl_.node_;
}
inline const ::tensorflow::NodeDef& GraphDef::_internal_node(int index) const {
  return _impl_.node_.Get(index);
}
inline const ::tensorflow::NodeDef& GraphDef::node(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.GraphDef.node)
  return _internal_node(index);
}
inline ::tensorflow::NodeDef* GraphDef::_internal_add_node() {
  return _impl_.node_.Add();
}
inline ::tensorflow::NodeDef* GraphDef::add_node() {
  ::tensorflow::NodeDef* _add = _internal_add_node();
  // @@protoc_insertion_point(field_add:tensorflow.GraphDef.node)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::NodeDef >&
GraphDef::node() const {
  // @@protoc_insertion_point(field_list:tensorflow.GraphDef.node)
  return _impl_.node_;
}

// .tensorflow.VersionDef versions = 4;
inline bool GraphDef::_internal_has_versions() const {
  return this != internal_default_instance() && _impl_.versions_ != nullptr;
}
inline bool GraphDef::has_versions() const {
  return _internal_has_versions();
}
inline const ::tensorflow::VersionDef& GraphDef::_internal_versions() const {
  const ::tensorflow::VersionDef* p = _impl_.versions_;
  return p != nullptr ? *p : reinterpret_cast<const ::tensorflow::VersionDef&>(
      ::tensorflow::_VersionDef_default_instance_);
}
inline const ::tensorflow::VersionDef& GraphDef::versions() const {
  // @@protoc_insertion_point(field_get:tensorflow.GraphDef.versions)
  return _internal_versions();
}
inline void GraphDef::unsafe_arena_set_allocated_versions(
    ::tensorflow::VersionDef* versions) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.versions_);
  }
  _impl_.versions_ = versions;
  if (versions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.GraphDef.versions)
}
inline ::tensorflow::VersionDef* GraphDef::release_versions() {
  
  ::tensorflow::VersionDef* temp = _impl_.versions_;
  _impl_.versions_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::tensorflow::VersionDef* GraphDef::unsafe_arena_release_versions() {
  // @@protoc_insertion_point(field_release:tensorflow.GraphDef.versions)
  
  ::tensorflow::VersionDef* temp = _impl_.versions_;
  _impl_.versions_ = nullptr;
  return temp;
}
inline ::tensorflow::VersionDef* GraphDef::_internal_mutable_versions() {
  
  if (_impl_.versions_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::VersionDef>(GetArenaForAllocation());
    _impl_.versions_ = p;
  }
  return _impl_.versions_;
}
inline ::tensorflow::VersionDef* GraphDef::mutable_versions() {
  ::tensorflow::VersionDef* _msg = _internal_mutable_versions();
  // @@protoc_insertion_point(field_mutable:tensorflow.GraphDef.versions)
  return _msg;
}
inline void GraphDef::set_allocated_versions(::tensorflow::VersionDef* versions) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.versions_);
  }
  if (versions) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(versions));
    if (message_arena != submessage_arena) {
      versions = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, versions, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.versions_ = versions;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.GraphDef.versions)
}

// int32 version = 3 [deprecated = true];
inline void GraphDef::clear_version() {
  _impl_.version_ = 0;
}
inline int32_t GraphDef::_internal_version() const {
  return _impl_.version_;
}
inline int32_t GraphDef::version() const {
  // @@protoc_insertion_point(field_get:tensorflow.GraphDef.version)
  return _internal_version();
}
inline void GraphDef::_internal_set_version(int32_t value) {
  
  _impl_.version_ = value;
}
inline void GraphDef::set_version(int32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:tensorflow.GraphDef.version)
}

// .tensorflow.FunctionDefLibrary library = 2;
inline bool GraphDef::_internal_has_library() const {
  return this != internal_default_instance() && _impl_.library_ != nullptr;
}
inline bool GraphDef::has_library() const {
  return _internal_has_library();
}
inline const ::tensorflow::FunctionDefLibrary& GraphDef::_internal_library() const {
  const ::tensorflow::FunctionDefLibrary* p = _impl_.library_;
  return p != nullptr ? *p : reinterpret_cast<const ::tensorflow::FunctionDefLibrary&>(
      ::tensorflow::_FunctionDefLibrary_default_instance_);
}
inline const ::tensorflow::FunctionDefLibrary& GraphDef::library() const {
  // @@protoc_insertion_point(field_get:tensorflow.GraphDef.library)
  return _internal_library();
}
inline void GraphDef::unsafe_arena_set_allocated_library(
    ::tensorflow::FunctionDefLibrary* library) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.library_);
  }
  _impl_.library_ = library;
  if (library) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.GraphDef.library)
}
inline ::tensorflow::FunctionDefLibrary* GraphDef::release_library() {
  
  ::tensorflow::FunctionDefLibrary* temp = _impl_.library_;
  _impl_.library_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::tensorflow::FunctionDefLibrary* GraphDef::unsafe_arena_release_library() {
  // @@protoc_insertion_point(field_release:tensorflow.GraphDef.library)
  
  ::tensorflow::FunctionDefLibrary* temp = _impl_.library_;
  _impl_.library_ = nullptr;
  return temp;
}
inline ::tensorflow::FunctionDefLibrary* GraphDef::_internal_mutable_library() {
  
  if (_impl_.library_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::FunctionDefLibrary>(GetArenaForAllocation());
    _impl_.library_ = p;
  }
  return _impl_.library_;
}
inline ::tensorflow::FunctionDefLibrary* GraphDef::mutable_library() {
  ::tensorflow::FunctionDefLibrary* _msg = _internal_mutable_library();
  // @@protoc_insertion_point(field_mutable:tensorflow.GraphDef.library)
  return _msg;
}
inline void GraphDef::set_allocated_library(::tensorflow::FunctionDefLibrary* library) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.library_);
  }
  if (library) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(library));
    if (message_arena != submessage_arena) {
      library = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, library, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.library_ = library;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.GraphDef.library)
}

// .tensorflow.GraphDebugInfo debug_info = 5;
inline bool GraphDef::_internal_has_debug_info() const {
  return this != internal_default_instance() && _impl_.debug_info_ != nullptr;
}
inline bool GraphDef::has_debug_info() const {
  return _internal_has_debug_info();
}
inline const ::tensorflow::GraphDebugInfo& GraphDef::_internal_debug_info() const {
  const ::tensorflow::GraphDebugInfo* p = _impl_.debug_info_;
  return p != nullptr ? *p : reinterpret_cast<const ::tensorflow::GraphDebugInfo&>(
      ::tensorflow::_GraphDebugInfo_default_instance_);
}
inline const ::tensorflow::GraphDebugInfo& GraphDef::debug_info() const {
  // @@protoc_insertion_point(field_get:tensorflow.GraphDef.debug_info)
  return _internal_debug_info();
}
inline void GraphDef::unsafe_arena_set_allocated_debug_info(
    ::tensorflow::GraphDebugInfo* debug_info) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.debug_info_);
  }
  _impl_.debug_info_ = debug_info;
  if (debug_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.GraphDef.debug_info)
}
inline ::tensorflow::GraphDebugInfo* GraphDef::release_debug_info() {
  
  ::tensorflow::GraphDebugInfo* temp = _impl_.debug_info_;
  _impl_.debug_info_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::tensorflow::GraphDebugInfo* GraphDef::unsafe_arena_release_debug_info() {
  // @@protoc_insertion_point(field_release:tensorflow.GraphDef.debug_info)
  
  ::tensorflow::GraphDebugInfo* temp = _impl_.debug_info_;
  _impl_.debug_info_ = nullptr;
  return temp;
}
inline ::tensorflow::GraphDebugInfo* GraphDef::_internal_mutable_debug_info() {
  
  if (_impl_.debug_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::GraphDebugInfo>(GetArenaForAllocation());
    _impl_.debug_info_ = p;
  }
  return _impl_.debug_info_;
}
inline ::tensorflow::GraphDebugInfo* GraphDef::mutable_debug_info() {
  ::tensorflow::GraphDebugInfo* _msg = _internal_mutable_debug_info();
  // @@protoc_insertion_point(field_mutable:tensorflow.GraphDef.debug_info)
  return _msg;
}
inline void GraphDef::set_allocated_debug_info(::tensorflow::GraphDebugInfo* debug_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.debug_info_);
  }
  if (debug_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(debug_info));
    if (message_arena != submessage_arena) {
      debug_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, debug_info, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.debug_info_ = debug_info;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.GraphDef.debug_info)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fgraph_2eproto