// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_api_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_api_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "options.pb.h"
#include "trip.pb.h"
#include "directions.pb.h"
#include "info.pb.h"
#include "status.pb.h"
#include "matrix.pb.h"
#include "isochrone.pb.h"
#include "expansion.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_api_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_api_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace valhalla {
class Api;
class ApiDefaultTypeInternal;
extern ApiDefaultTypeInternal _Api_default_instance_;
}  // namespace valhalla
PROTOBUF_NAMESPACE_OPEN
template<> ::valhalla::Api* Arena::CreateMaybeMessage<::valhalla::Api>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace valhalla {

// ===================================================================

class Api PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.Api) */ {
 public:
  inline Api() : Api(nullptr) {};
  virtual ~Api();

  Api(const Api& from);
  Api(Api&& from) noexcept
    : Api() {
    *this = ::std::move(from);
  }

  inline Api& operator=(const Api& from) {
    CopyFrom(from);
    return *this;
  }
  inline Api& operator=(Api&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const Api& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Api* internal_default_instance() {
    return reinterpret_cast<const Api*>(
               &_Api_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Api& a, Api& b) {
    a.Swap(&b);
  }
  inline void Swap(Api* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Api* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Api* New() const final {
    return CreateMaybeMessage<Api>(nullptr);
  }

  Api* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Api>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const Api& from);
  void MergeFrom(const Api& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Api* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "valhalla.Api";
  }
  protected:
  explicit Api(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOptionsFieldNumber = 1,
    kTripFieldNumber = 2,
    kDirectionsFieldNumber = 3,
    kStatusFieldNumber = 4,
    kMatrixFieldNumber = 5,
    kIsochroneFieldNumber = 6,
    kExpansionFieldNumber = 7,
    kInfoFieldNumber = 20,
  };
  // .valhalla.Options options = 1;
  bool has_options() const;
  private:
  bool _internal_has_options() const;
  public:
  void clear_options();
  const ::valhalla::Options& options() const;
  ::valhalla::Options* release_options();
  ::valhalla::Options* mutable_options();
  void set_allocated_options(::valhalla::Options* options);
  private:
  const ::valhalla::Options& _internal_options() const;
  ::valhalla::Options* _internal_mutable_options();
  public:
  void unsafe_arena_set_allocated_options(
      ::valhalla::Options* options);
  ::valhalla::Options* unsafe_arena_release_options();

  // .valhalla.Trip trip = 2;
  bool has_trip() const;
  private:
  bool _internal_has_trip() const;
  public:
  void clear_trip();
  const ::valhalla::Trip& trip() const;
  ::valhalla::Trip* release_trip();
  ::valhalla::Trip* mutable_trip();
  void set_allocated_trip(::valhalla::Trip* trip);
  private:
  const ::valhalla::Trip& _internal_trip() const;
  ::valhalla::Trip* _internal_mutable_trip();
  public:
  void unsafe_arena_set_allocated_trip(
      ::valhalla::Trip* trip);
  ::valhalla::Trip* unsafe_arena_release_trip();

  // .valhalla.Directions directions = 3;
  bool has_directions() const;
  private:
  bool _internal_has_directions() const;
  public:
  void clear_directions();
  const ::valhalla::Directions& directions() const;
  ::valhalla::Directions* release_directions();
  ::valhalla::Directions* mutable_directions();
  void set_allocated_directions(::valhalla::Directions* directions);
  private:
  const ::valhalla::Directions& _internal_directions() const;
  ::valhalla::Directions* _internal_mutable_directions();
  public:
  void unsafe_arena_set_allocated_directions(
      ::valhalla::Directions* directions);
  ::valhalla::Directions* unsafe_arena_release_directions();

  // .valhalla.Status status = 4;
  bool has_status() const;
  private:
  bool _internal_has_status() const;
  public:
  void clear_status();
  const ::valhalla::Status& status() const;
  ::valhalla::Status* release_status();
  ::valhalla::Status* mutable_status();
  void set_allocated_status(::valhalla::Status* status);
  private:
  const ::valhalla::Status& _internal_status() const;
  ::valhalla::Status* _internal_mutable_status();
  public:
  void unsafe_arena_set_allocated_status(
      ::valhalla::Status* status);
  ::valhalla::Status* unsafe_arena_release_status();

  // .valhalla.Matrix matrix = 5;
  bool has_matrix() const;
  private:
  bool _internal_has_matrix() const;
  public:
  void clear_matrix();
  const ::valhalla::Matrix& matrix() const;
  ::valhalla::Matrix* release_matrix();
  ::valhalla::Matrix* mutable_matrix();
  void set_allocated_matrix(::valhalla::Matrix* matrix);
  private:
  const ::valhalla::Matrix& _internal_matrix() const;
  ::valhalla::Matrix* _internal_mutable_matrix();
  public:
  void unsafe_arena_set_allocated_matrix(
      ::valhalla::Matrix* matrix);
  ::valhalla::Matrix* unsafe_arena_release_matrix();

  // .valhalla.Isochrone isochrone = 6;
  bool has_isochrone() const;
  private:
  bool _internal_has_isochrone() const;
  public:
  void clear_isochrone();
  const ::valhalla::Isochrone& isochrone() const;
  ::valhalla::Isochrone* release_isochrone();
  ::valhalla::Isochrone* mutable_isochrone();
  void set_allocated_isochrone(::valhalla::Isochrone* isochrone);
  private:
  const ::valhalla::Isochrone& _internal_isochrone() const;
  ::valhalla::Isochrone* _internal_mutable_isochrone();
  public:
  void unsafe_arena_set_allocated_isochrone(
      ::valhalla::Isochrone* isochrone);
  ::valhalla::Isochrone* unsafe_arena_release_isochrone();

  // .valhalla.Expansion expansion = 7;
  bool has_expansion() const;
  private:
  bool _internal_has_expansion() const;
  public:
  void clear_expansion();
  const ::valhalla::Expansion& expansion() const;
  ::valhalla::Expansion* release_expansion();
  ::valhalla::Expansion* mutable_expansion();
  void set_allocated_expansion(::valhalla::Expansion* expansion);
  private:
  const ::valhalla::Expansion& _internal_expansion() const;
  ::valhalla::Expansion* _internal_mutable_expansion();
  public:
  void unsafe_arena_set_allocated_expansion(
      ::valhalla::Expansion* expansion);
  ::valhalla::Expansion* unsafe_arena_release_expansion();

  // .valhalla.Info info = 20;
  bool has_info() const;
  private:
  bool _internal_has_info() const;
  public:
  void clear_info();
  const ::valhalla::Info& info() const;
  ::valhalla::Info* release_info();
  ::valhalla::Info* mutable_info();
  void set_allocated_info(::valhalla::Info* info);
  private:
  const ::valhalla::Info& _internal_info() const;
  ::valhalla::Info* _internal_mutable_info();
  public:
  void unsafe_arena_set_allocated_info(
      ::valhalla::Info* info);
  ::valhalla::Info* unsafe_arena_release_info();

  // @@protoc_insertion_point(class_scope:valhalla.Api)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::valhalla::Options* options_;
  ::valhalla::Trip* trip_;
  ::valhalla::Directions* directions_;
  ::valhalla::Status* status_;
  ::valhalla::Matrix* matrix_;
  ::valhalla::Isochrone* isochrone_;
  ::valhalla::Expansion* expansion_;
  ::valhalla::Info* info_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_api_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Api

// .valhalla.Options options = 1;
inline bool Api::_internal_has_options() const {
  return this != internal_default_instance() && options_ != nullptr;
}
inline bool Api::has_options() const {
  return _internal_has_options();
}
inline const ::valhalla::Options& Api::_internal_options() const {
  const ::valhalla::Options* p = options_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Options*>(
      &::valhalla::_Options_default_instance_);
}
inline const ::valhalla::Options& Api::options() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.options)
  return _internal_options();
}
inline void Api::unsafe_arena_set_allocated_options(
    ::valhalla::Options* options) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(options_);
  }
  options_ = options;
  if (options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.options)
}
inline ::valhalla::Options* Api::release_options() {
  auto temp = unsafe_arena_release_options();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Options* Api::unsafe_arena_release_options() {
  // @@protoc_insertion_point(field_release:valhalla.Api.options)
  
  ::valhalla::Options* temp = options_;
  options_ = nullptr;
  return temp;
}
inline ::valhalla::Options* Api::_internal_mutable_options() {
  
  if (options_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Options>(GetArena());
    options_ = p;
  }
  return options_;
}
inline ::valhalla::Options* Api::mutable_options() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.options)
  return _internal_mutable_options();
}
inline void Api::set_allocated_options(::valhalla::Options* options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(options_);
  }
  if (options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(options)->GetArena();
    if (message_arena != submessage_arena) {
      options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, options, submessage_arena);
    }
    
  } else {
    
  }
  options_ = options;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.options)
}

// .valhalla.Trip trip = 2;
inline bool Api::_internal_has_trip() const {
  return this != internal_default_instance() && trip_ != nullptr;
}
inline bool Api::has_trip() const {
  return _internal_has_trip();
}
inline const ::valhalla::Trip& Api::_internal_trip() const {
  const ::valhalla::Trip* p = trip_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Trip*>(
      &::valhalla::_Trip_default_instance_);
}
inline const ::valhalla::Trip& Api::trip() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.trip)
  return _internal_trip();
}
inline void Api::unsafe_arena_set_allocated_trip(
    ::valhalla::Trip* trip) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(trip_);
  }
  trip_ = trip;
  if (trip) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.trip)
}
inline ::valhalla::Trip* Api::release_trip() {
  auto temp = unsafe_arena_release_trip();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Trip* Api::unsafe_arena_release_trip() {
  // @@protoc_insertion_point(field_release:valhalla.Api.trip)
  
  ::valhalla::Trip* temp = trip_;
  trip_ = nullptr;
  return temp;
}
inline ::valhalla::Trip* Api::_internal_mutable_trip() {
  
  if (trip_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Trip>(GetArena());
    trip_ = p;
  }
  return trip_;
}
inline ::valhalla::Trip* Api::mutable_trip() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.trip)
  return _internal_mutable_trip();
}
inline void Api::set_allocated_trip(::valhalla::Trip* trip) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(trip_);
  }
  if (trip) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(trip)->GetArena();
    if (message_arena != submessage_arena) {
      trip = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, trip, submessage_arena);
    }
    
  } else {
    
  }
  trip_ = trip;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.trip)
}

// .valhalla.Directions directions = 3;
inline bool Api::_internal_has_directions() const {
  return this != internal_default_instance() && directions_ != nullptr;
}
inline bool Api::has_directions() const {
  return _internal_has_directions();
}
inline const ::valhalla::Directions& Api::_internal_directions() const {
  const ::valhalla::Directions* p = directions_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Directions*>(
      &::valhalla::_Directions_default_instance_);
}
inline const ::valhalla::Directions& Api::directions() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.directions)
  return _internal_directions();
}
inline void Api::unsafe_arena_set_allocated_directions(
    ::valhalla::Directions* directions) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(directions_);
  }
  directions_ = directions;
  if (directions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.directions)
}
inline ::valhalla::Directions* Api::release_directions() {
  auto temp = unsafe_arena_release_directions();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Directions* Api::unsafe_arena_release_directions() {
  // @@protoc_insertion_point(field_release:valhalla.Api.directions)
  
  ::valhalla::Directions* temp = directions_;
  directions_ = nullptr;
  return temp;
}
inline ::valhalla::Directions* Api::_internal_mutable_directions() {
  
  if (directions_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Directions>(GetArena());
    directions_ = p;
  }
  return directions_;
}
inline ::valhalla::Directions* Api::mutable_directions() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.directions)
  return _internal_mutable_directions();
}
inline void Api::set_allocated_directions(::valhalla::Directions* directions) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(directions_);
  }
  if (directions) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(directions)->GetArena();
    if (message_arena != submessage_arena) {
      directions = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, directions, submessage_arena);
    }
    
  } else {
    
  }
  directions_ = directions;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.directions)
}

// .valhalla.Status status = 4;
inline bool Api::_internal_has_status() const {
  return this != internal_default_instance() && status_ != nullptr;
}
inline bool Api::has_status() const {
  return _internal_has_status();
}
inline const ::valhalla::Status& Api::_internal_status() const {
  const ::valhalla::Status* p = status_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Status*>(
      &::valhalla::_Status_default_instance_);
}
inline const ::valhalla::Status& Api::status() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.status)
  return _internal_status();
}
inline void Api::unsafe_arena_set_allocated_status(
    ::valhalla::Status* status) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  status_ = status;
  if (status) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.status)
}
inline ::valhalla::Status* Api::release_status() {
  auto temp = unsafe_arena_release_status();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Status* Api::unsafe_arena_release_status() {
  // @@protoc_insertion_point(field_release:valhalla.Api.status)
  
  ::valhalla::Status* temp = status_;
  status_ = nullptr;
  return temp;
}
inline ::valhalla::Status* Api::_internal_mutable_status() {
  
  if (status_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Status>(GetArena());
    status_ = p;
  }
  return status_;
}
inline ::valhalla::Status* Api::mutable_status() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.status)
  return _internal_mutable_status();
}
inline void Api::set_allocated_status(::valhalla::Status* status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  if (status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(status)->GetArena();
    if (message_arena != submessage_arena) {
      status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    
  } else {
    
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.status)
}

// .valhalla.Matrix matrix = 5;
inline bool Api::_internal_has_matrix() const {
  return this != internal_default_instance() && matrix_ != nullptr;
}
inline bool Api::has_matrix() const {
  return _internal_has_matrix();
}
inline const ::valhalla::Matrix& Api::_internal_matrix() const {
  const ::valhalla::Matrix* p = matrix_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Matrix*>(
      &::valhalla::_Matrix_default_instance_);
}
inline const ::valhalla::Matrix& Api::matrix() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.matrix)
  return _internal_matrix();
}
inline void Api::unsafe_arena_set_allocated_matrix(
    ::valhalla::Matrix* matrix) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(matrix_);
  }
  matrix_ = matrix;
  if (matrix) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.matrix)
}
inline ::valhalla::Matrix* Api::release_matrix() {
  auto temp = unsafe_arena_release_matrix();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Matrix* Api::unsafe_arena_release_matrix() {
  // @@protoc_insertion_point(field_release:valhalla.Api.matrix)
  
  ::valhalla::Matrix* temp = matrix_;
  matrix_ = nullptr;
  return temp;
}
inline ::valhalla::Matrix* Api::_internal_mutable_matrix() {
  
  if (matrix_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Matrix>(GetArena());
    matrix_ = p;
  }
  return matrix_;
}
inline ::valhalla::Matrix* Api::mutable_matrix() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.matrix)
  return _internal_mutable_matrix();
}
inline void Api::set_allocated_matrix(::valhalla::Matrix* matrix) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(matrix_);
  }
  if (matrix) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(matrix)->GetArena();
    if (message_arena != submessage_arena) {
      matrix = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, matrix, submessage_arena);
    }
    
  } else {
    
  }
  matrix_ = matrix;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.matrix)
}

// .valhalla.Isochrone isochrone = 6;
inline bool Api::_internal_has_isochrone() const {
  return this != internal_default_instance() && isochrone_ != nullptr;
}
inline bool Api::has_isochrone() const {
  return _internal_has_isochrone();
}
inline const ::valhalla::Isochrone& Api::_internal_isochrone() const {
  const ::valhalla::Isochrone* p = isochrone_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Isochrone*>(
      &::valhalla::_Isochrone_default_instance_);
}
inline const ::valhalla::Isochrone& Api::isochrone() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.isochrone)
  return _internal_isochrone();
}
inline void Api::unsafe_arena_set_allocated_isochrone(
    ::valhalla::Isochrone* isochrone) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(isochrone_);
  }
  isochrone_ = isochrone;
  if (isochrone) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.isochrone)
}
inline ::valhalla::Isochrone* Api::release_isochrone() {
  auto temp = unsafe_arena_release_isochrone();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Isochrone* Api::unsafe_arena_release_isochrone() {
  // @@protoc_insertion_point(field_release:valhalla.Api.isochrone)
  
  ::valhalla::Isochrone* temp = isochrone_;
  isochrone_ = nullptr;
  return temp;
}
inline ::valhalla::Isochrone* Api::_internal_mutable_isochrone() {
  
  if (isochrone_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Isochrone>(GetArena());
    isochrone_ = p;
  }
  return isochrone_;
}
inline ::valhalla::Isochrone* Api::mutable_isochrone() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.isochrone)
  return _internal_mutable_isochrone();
}
inline void Api::set_allocated_isochrone(::valhalla::Isochrone* isochrone) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(isochrone_);
  }
  if (isochrone) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(isochrone)->GetArena();
    if (message_arena != submessage_arena) {
      isochrone = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, isochrone, submessage_arena);
    }
    
  } else {
    
  }
  isochrone_ = isochrone;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.isochrone)
}

// .valhalla.Expansion expansion = 7;
inline bool Api::_internal_has_expansion() const {
  return this != internal_default_instance() && expansion_ != nullptr;
}
inline bool Api::has_expansion() const {
  return _internal_has_expansion();
}
inline const ::valhalla::Expansion& Api::_internal_expansion() const {
  const ::valhalla::Expansion* p = expansion_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Expansion*>(
      &::valhalla::_Expansion_default_instance_);
}
inline const ::valhalla::Expansion& Api::expansion() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.expansion)
  return _internal_expansion();
}
inline void Api::unsafe_arena_set_allocated_expansion(
    ::valhalla::Expansion* expansion) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expansion_);
  }
  expansion_ = expansion;
  if (expansion) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.expansion)
}
inline ::valhalla::Expansion* Api::release_expansion() {
  auto temp = unsafe_arena_release_expansion();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Expansion* Api::unsafe_arena_release_expansion() {
  // @@protoc_insertion_point(field_release:valhalla.Api.expansion)
  
  ::valhalla::Expansion* temp = expansion_;
  expansion_ = nullptr;
  return temp;
}
inline ::valhalla::Expansion* Api::_internal_mutable_expansion() {
  
  if (expansion_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Expansion>(GetArena());
    expansion_ = p;
  }
  return expansion_;
}
inline ::valhalla::Expansion* Api::mutable_expansion() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.expansion)
  return _internal_mutable_expansion();
}
inline void Api::set_allocated_expansion(::valhalla::Expansion* expansion) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(expansion_);
  }
  if (expansion) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expansion)->GetArena();
    if (message_arena != submessage_arena) {
      expansion = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, expansion, submessage_arena);
    }
    
  } else {
    
  }
  expansion_ = expansion;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.expansion)
}

// .valhalla.Info info = 20;
inline bool Api::_internal_has_info() const {
  return this != internal_default_instance() && info_ != nullptr;
}
inline bool Api::has_info() const {
  return _internal_has_info();
}
inline const ::valhalla::Info& Api::_internal_info() const {
  const ::valhalla::Info* p = info_;
  return p != nullptr ? *p : *reinterpret_cast<const ::valhalla::Info*>(
      &::valhalla::_Info_default_instance_);
}
inline const ::valhalla::Info& Api::info() const {
  // @@protoc_insertion_point(field_get:valhalla.Api.info)
  return _internal_info();
}
inline void Api::unsafe_arena_set_allocated_info(
    ::valhalla::Info* info) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(info_);
  }
  info_ = info;
  if (info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:valhalla.Api.info)
}
inline ::valhalla::Info* Api::release_info() {
  auto temp = unsafe_arena_release_info();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::valhalla::Info* Api::unsafe_arena_release_info() {
  // @@protoc_insertion_point(field_release:valhalla.Api.info)
  
  ::valhalla::Info* temp = info_;
  info_ = nullptr;
  return temp;
}
inline ::valhalla::Info* Api::_internal_mutable_info() {
  
  if (info_ == nullptr) {
    auto* p = CreateMaybeMessage<::valhalla::Info>(GetArena());
    info_ = p;
  }
  return info_;
}
inline ::valhalla::Info* Api::mutable_info() {
  // @@protoc_insertion_point(field_mutable:valhalla.Api.info)
  return _internal_mutable_info();
}
inline void Api::set_allocated_info(::valhalla::Info* info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(info_);
  }
  if (info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(info)->GetArena();
    if (message_arena != submessage_arena) {
      info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, info, submessage_arena);
    }
    
  } else {
    
  }
  info_ = info;
  // @@protoc_insertion_point(field_set_allocated:valhalla.Api.info)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace valhalla

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_api_2eproto
