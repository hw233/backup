// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrapCfg.proto

#ifndef PROTOBUF_TrapCfg_2eproto__INCLUDED
#define PROTOBUF_TrapCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_TrapCfg_2eproto();
void protobuf_AssignDesc_TrapCfg_2eproto();
void protobuf_ShutdownFile_TrapCfg_2eproto();

class TrapCfg;
class TrapCfgSet;

// ===================================================================

class TrapCfg : public ::google::protobuf::MessageLite {
 public:
  TrapCfg();
  virtual ~TrapCfg();

  TrapCfg(const TrapCfg& from);

  inline TrapCfg& operator=(const TrapCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const TrapCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TrapCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TrapCfg* other);

  // implements Message ----------------------------------------------

  TrapCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TrapCfg& from);
  void MergeFrom(const TrapCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string Res = 2;
  inline bool has_res() const;
  inline void clear_res();
  static const int kResFieldNumber = 2;
  inline const ::std::string& res() const;
  inline void set_res(const ::std::string& value);
  inline void set_res(const char* value);
  inline void set_res(const char* value, size_t size);
  inline ::std::string* mutable_res();
  inline ::std::string* release_res();
  inline void set_allocated_res(::std::string* res);

  // required string Name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required uint32 Type = 4;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required uint32 CDTime = 5;
  inline bool has_cdtime() const;
  inline void clear_cdtime();
  static const int kCDTimeFieldNumber = 5;
  inline ::google::protobuf::uint32 cdtime() const;
  inline void set_cdtime(::google::protobuf::uint32 value);

  // required uint32 BuffID = 6;
  inline bool has_buffid() const;
  inline void clear_buffid();
  static const int kBuffIDFieldNumber = 6;
  inline ::google::protobuf::uint32 buffid() const;
  inline void set_buffid(::google::protobuf::uint32 value);

  // required uint32 TargetType = 7;
  inline bool has_targettype() const;
  inline void clear_targettype();
  static const int kTargetTypeFieldNumber = 7;
  inline ::google::protobuf::uint32 targettype() const;
  inline void set_targettype(::google::protobuf::uint32 value);

  // required uint32 DamgeCnt = 8;
  inline bool has_damgecnt() const;
  inline void clear_damgecnt();
  static const int kDamgeCntFieldNumber = 8;
  inline ::google::protobuf::uint32 damgecnt() const;
  inline void set_damgecnt(::google::protobuf::uint32 value);

  // required uint32 ModelType = 9;
  inline bool has_modeltype() const;
  inline void clear_modeltype();
  static const int kModelTypeFieldNumber = 9;
  inline ::google::protobuf::uint32 modeltype() const;
  inline void set_modeltype(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.TrapCfg)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_res();
  inline void clear_has_res();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_cdtime();
  inline void clear_has_cdtime();
  inline void set_has_buffid();
  inline void clear_has_buffid();
  inline void set_has_targettype();
  inline void clear_has_targettype();
  inline void set_has_damgecnt();
  inline void clear_has_damgecnt();
  inline void set_has_modeltype();
  inline void clear_has_modeltype();

  ::std::string* res_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 type_;
  ::std::string* name_;
  ::google::protobuf::uint32 cdtime_;
  ::google::protobuf::uint32 buffid_;
  ::google::protobuf::uint32 targettype_;
  ::google::protobuf::uint32 damgecnt_;
  ::google::protobuf::uint32 modeltype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_TrapCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_TrapCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_TrapCfg_2eproto();
  friend void protobuf_ShutdownFile_TrapCfg_2eproto();

  void InitAsDefaultInstance();
  static TrapCfg* default_instance_;
};
// -------------------------------------------------------------------

class TrapCfgSet : public ::google::protobuf::MessageLite {
 public:
  TrapCfgSet();
  virtual ~TrapCfgSet();

  TrapCfgSet(const TrapCfgSet& from);

  inline TrapCfgSet& operator=(const TrapCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const TrapCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TrapCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TrapCfgSet* other);

  // implements Message ----------------------------------------------

  TrapCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TrapCfgSet& from);
  void MergeFrom(const TrapCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.TrapCfg trapCfg = 1;
  inline int trapcfg_size() const;
  inline void clear_trapcfg();
  static const int kTrapCfgFieldNumber = 1;
  inline const ::com::cfg::vo::TrapCfg& trapcfg(int index) const;
  inline ::com::cfg::vo::TrapCfg* mutable_trapcfg(int index);
  inline ::com::cfg::vo::TrapCfg* add_trapcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::TrapCfg >&
      trapcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::TrapCfg >*
      mutable_trapcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.TrapCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::TrapCfg > trapcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_TrapCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_TrapCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_TrapCfg_2eproto();
  friend void protobuf_ShutdownFile_TrapCfg_2eproto();

  void InitAsDefaultInstance();
  static TrapCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// TrapCfg

// required uint32 ID = 1;
inline bool TrapCfg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrapCfg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrapCfg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrapCfg::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 TrapCfg::id() const {
  return id_;
}
inline void TrapCfg::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required string Res = 2;
inline bool TrapCfg::has_res() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TrapCfg::set_has_res() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TrapCfg::clear_has_res() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TrapCfg::clear_res() {
  if (res_ != &::google::protobuf::internal::kEmptyString) {
    res_->clear();
  }
  clear_has_res();
}
inline const ::std::string& TrapCfg::res() const {
  return *res_;
}
inline void TrapCfg::set_res(const ::std::string& value) {
  set_has_res();
  if (res_ == &::google::protobuf::internal::kEmptyString) {
    res_ = new ::std::string;
  }
  res_->assign(value);
}
inline void TrapCfg::set_res(const char* value) {
  set_has_res();
  if (res_ == &::google::protobuf::internal::kEmptyString) {
    res_ = new ::std::string;
  }
  res_->assign(value);
}
inline void TrapCfg::set_res(const char* value, size_t size) {
  set_has_res();
  if (res_ == &::google::protobuf::internal::kEmptyString) {
    res_ = new ::std::string;
  }
  res_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TrapCfg::mutable_res() {
  set_has_res();
  if (res_ == &::google::protobuf::internal::kEmptyString) {
    res_ = new ::std::string;
  }
  return res_;
}
inline ::std::string* TrapCfg::release_res() {
  clear_has_res();
  if (res_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = res_;
    res_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TrapCfg::set_allocated_res(::std::string* res) {
  if (res_ != &::google::protobuf::internal::kEmptyString) {
    delete res_;
  }
  if (res) {
    set_has_res();
    res_ = res;
  } else {
    clear_has_res();
    res_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Name = 3;
inline bool TrapCfg::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrapCfg::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrapCfg::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrapCfg::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& TrapCfg::name() const {
  return *name_;
}
inline void TrapCfg::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TrapCfg::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TrapCfg::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TrapCfg::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* TrapCfg::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TrapCfg::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 Type = 4;
inline bool TrapCfg::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TrapCfg::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TrapCfg::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TrapCfg::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 TrapCfg::type() const {
  return type_;
}
inline void TrapCfg::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
}

// required uint32 CDTime = 5;
inline bool TrapCfg::has_cdtime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TrapCfg::set_has_cdtime() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TrapCfg::clear_has_cdtime() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TrapCfg::clear_cdtime() {
  cdtime_ = 0u;
  clear_has_cdtime();
}
inline ::google::protobuf::uint32 TrapCfg::cdtime() const {
  return cdtime_;
}
inline void TrapCfg::set_cdtime(::google::protobuf::uint32 value) {
  set_has_cdtime();
  cdtime_ = value;
}

// required uint32 BuffID = 6;
inline bool TrapCfg::has_buffid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TrapCfg::set_has_buffid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TrapCfg::clear_has_buffid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TrapCfg::clear_buffid() {
  buffid_ = 0u;
  clear_has_buffid();
}
inline ::google::protobuf::uint32 TrapCfg::buffid() const {
  return buffid_;
}
inline void TrapCfg::set_buffid(::google::protobuf::uint32 value) {
  set_has_buffid();
  buffid_ = value;
}

// required uint32 TargetType = 7;
inline bool TrapCfg::has_targettype() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TrapCfg::set_has_targettype() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TrapCfg::clear_has_targettype() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TrapCfg::clear_targettype() {
  targettype_ = 0u;
  clear_has_targettype();
}
inline ::google::protobuf::uint32 TrapCfg::targettype() const {
  return targettype_;
}
inline void TrapCfg::set_targettype(::google::protobuf::uint32 value) {
  set_has_targettype();
  targettype_ = value;
}

// required uint32 DamgeCnt = 8;
inline bool TrapCfg::has_damgecnt() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TrapCfg::set_has_damgecnt() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TrapCfg::clear_has_damgecnt() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TrapCfg::clear_damgecnt() {
  damgecnt_ = 0u;
  clear_has_damgecnt();
}
inline ::google::protobuf::uint32 TrapCfg::damgecnt() const {
  return damgecnt_;
}
inline void TrapCfg::set_damgecnt(::google::protobuf::uint32 value) {
  set_has_damgecnt();
  damgecnt_ = value;
}

// required uint32 ModelType = 9;
inline bool TrapCfg::has_modeltype() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void TrapCfg::set_has_modeltype() {
  _has_bits_[0] |= 0x00000100u;
}
inline void TrapCfg::clear_has_modeltype() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void TrapCfg::clear_modeltype() {
  modeltype_ = 0u;
  clear_has_modeltype();
}
inline ::google::protobuf::uint32 TrapCfg::modeltype() const {
  return modeltype_;
}
inline void TrapCfg::set_modeltype(::google::protobuf::uint32 value) {
  set_has_modeltype();
  modeltype_ = value;
}

// -------------------------------------------------------------------

// TrapCfgSet

// repeated .com.cfg.vo.TrapCfg trapCfg = 1;
inline int TrapCfgSet::trapcfg_size() const {
  return trapcfg_.size();
}
inline void TrapCfgSet::clear_trapcfg() {
  trapcfg_.Clear();
}
inline const ::com::cfg::vo::TrapCfg& TrapCfgSet::trapcfg(int index) const {
  return trapcfg_.Get(index);
}
inline ::com::cfg::vo::TrapCfg* TrapCfgSet::mutable_trapcfg(int index) {
  return trapcfg_.Mutable(index);
}
inline ::com::cfg::vo::TrapCfg* TrapCfgSet::add_trapcfg() {
  return trapcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::TrapCfg >&
TrapCfgSet::trapcfg() const {
  return trapcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::TrapCfg >*
TrapCfgSet::mutable_trapcfg() {
  return &trapcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TrapCfg_2eproto__INCLUDED