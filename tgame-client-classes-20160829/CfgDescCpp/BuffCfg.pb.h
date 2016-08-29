// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuffCfg.proto

#ifndef PROTOBUF_BuffCfg_2eproto__INCLUDED
#define PROTOBUF_BuffCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_BuffCfg_2eproto();
void protobuf_AssignDesc_BuffCfg_2eproto();
void protobuf_ShutdownFile_BuffCfg_2eproto();

class BuffEffect;
class BuffCfg;
class BuffCfgSet;

// ===================================================================

class BuffEffect : public ::google::protobuf::MessageLite {
 public:
  BuffEffect();
  virtual ~BuffEffect();

  BuffEffect(const BuffEffect& from);

  inline BuffEffect& operator=(const BuffEffect& from) {
    CopyFrom(from);
    return *this;
  }

  static const BuffEffect& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BuffEffect* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BuffEffect* other);

  // implements Message ----------------------------------------------

  BuffEffect* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BuffEffect& from);
  void MergeFrom(const BuffEffect& from);
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

  // required uint32 EffectType = 1;
  inline bool has_effecttype() const;
  inline void clear_effecttype();
  static const int kEffectTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 effecttype() const;
  inline void set_effecttype(::google::protobuf::uint32 value);

  // required uint32 Value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::uint32 value() const;
  inline void set_value(::google::protobuf::uint32 value);

  // required uint32 MagicType = 3;
  inline bool has_magictype() const;
  inline void clear_magictype();
  static const int kMagicTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 magictype() const;
  inline void set_magictype(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.BuffEffect)
 private:
  inline void set_has_effecttype();
  inline void clear_has_effecttype();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_magictype();
  inline void clear_has_magictype();

  ::google::protobuf::uint32 effecttype_;
  ::google::protobuf::uint32 value_;
  ::google::protobuf::uint32 magictype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BuffCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BuffCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BuffCfg_2eproto();
  friend void protobuf_ShutdownFile_BuffCfg_2eproto();

  void InitAsDefaultInstance();
  static BuffEffect* default_instance_;
};
// -------------------------------------------------------------------

class BuffCfg : public ::google::protobuf::MessageLite {
 public:
  BuffCfg();
  virtual ~BuffCfg();

  BuffCfg(const BuffCfg& from);

  inline BuffCfg& operator=(const BuffCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const BuffCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BuffCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BuffCfg* other);

  // implements Message ----------------------------------------------

  BuffCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BuffCfg& from);
  void MergeFrom(const BuffCfg& from);
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

  // required uint32 BuffID = 1;
  inline bool has_buffid() const;
  inline void clear_buffid();
  static const int kBuffIDFieldNumber = 1;
  inline ::google::protobuf::uint32 buffid() const;
  inline void set_buffid(::google::protobuf::uint32 value);

  // required string Name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string Desc = 3;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 3;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // required string Icon = 4;
  inline bool has_icon() const;
  inline void clear_icon();
  static const int kIconFieldNumber = 4;
  inline const ::std::string& icon() const;
  inline void set_icon(const ::std::string& value);
  inline void set_icon(const char* value);
  inline void set_icon(const char* value, size_t size);
  inline ::std::string* mutable_icon();
  inline ::std::string* release_icon();
  inline void set_allocated_icon(::std::string* icon);

  // required string StateIcon = 5;
  inline bool has_stateicon() const;
  inline void clear_stateicon();
  static const int kStateIconFieldNumber = 5;
  inline const ::std::string& stateicon() const;
  inline void set_stateicon(const ::std::string& value);
  inline void set_stateicon(const char* value);
  inline void set_stateicon(const char* value, size_t size);
  inline ::std::string* mutable_stateicon();
  inline ::std::string* release_stateicon();
  inline void set_allocated_stateicon(::std::string* stateicon);

  // required string Animation = 6;
  inline bool has_animation() const;
  inline void clear_animation();
  static const int kAnimationFieldNumber = 6;
  inline const ::std::string& animation() const;
  inline void set_animation(const ::std::string& value);
  inline void set_animation(const char* value);
  inline void set_animation(const char* value, size_t size);
  inline ::std::string* mutable_animation();
  inline ::std::string* release_animation();
  inline void set_allocated_animation(::std::string* animation);

  // required uint32 TargetType = 7;
  inline bool has_targettype() const;
  inline void clear_targettype();
  static const int kTargetTypeFieldNumber = 7;
  inline ::google::protobuf::uint32 targettype() const;
  inline void set_targettype(::google::protobuf::uint32 value);

  // required uint32 AddOrDec = 8;
  inline bool has_addordec() const;
  inline void clear_addordec();
  static const int kAddOrDecFieldNumber = 8;
  inline ::google::protobuf::uint32 addordec() const;
  inline void set_addordec(::google::protobuf::uint32 value);

  // required uint32 LiveSpan = 9;
  inline bool has_livespan() const;
  inline void clear_livespan();
  static const int kLiveSpanFieldNumber = 9;
  inline ::google::protobuf::uint32 livespan() const;
  inline void set_livespan(::google::protobuf::uint32 value);

  // required uint32 DisplayPos = 10;
  inline bool has_displaypos() const;
  inline void clear_displaypos();
  static const int kDisplayPosFieldNumber = 10;
  inline ::google::protobuf::uint32 displaypos() const;
  inline void set_displaypos(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.BuffEffect Effects = 12;
  inline int effects_size() const;
  inline void clear_effects();
  static const int kEffectsFieldNumber = 12;
  inline const ::com::cfg::vo::BuffEffect& effects(int index) const;
  inline ::com::cfg::vo::BuffEffect* mutable_effects(int index);
  inline ::com::cfg::vo::BuffEffect* add_effects();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffEffect >&
      effects() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffEffect >*
      mutable_effects();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.BuffCfg)
 private:
  inline void set_has_buffid();
  inline void clear_has_buffid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_icon();
  inline void clear_has_icon();
  inline void set_has_stateicon();
  inline void clear_has_stateicon();
  inline void set_has_animation();
  inline void clear_has_animation();
  inline void set_has_targettype();
  inline void clear_has_targettype();
  inline void set_has_addordec();
  inline void clear_has_addordec();
  inline void set_has_livespan();
  inline void clear_has_livespan();
  inline void set_has_displaypos();
  inline void clear_has_displaypos();

  ::std::string* name_;
  ::std::string* desc_;
  ::std::string* icon_;
  ::google::protobuf::uint32 buffid_;
  ::google::protobuf::uint32 targettype_;
  ::std::string* stateicon_;
  ::std::string* animation_;
  ::google::protobuf::uint32 addordec_;
  ::google::protobuf::uint32 livespan_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffEffect > effects_;
  ::google::protobuf::uint32 displaypos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BuffCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BuffCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BuffCfg_2eproto();
  friend void protobuf_ShutdownFile_BuffCfg_2eproto();

  void InitAsDefaultInstance();
  static BuffCfg* default_instance_;
};
// -------------------------------------------------------------------

class BuffCfgSet : public ::google::protobuf::MessageLite {
 public:
  BuffCfgSet();
  virtual ~BuffCfgSet();

  BuffCfgSet(const BuffCfgSet& from);

  inline BuffCfgSet& operator=(const BuffCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const BuffCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BuffCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BuffCfgSet* other);

  // implements Message ----------------------------------------------

  BuffCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BuffCfgSet& from);
  void MergeFrom(const BuffCfgSet& from);
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

  // repeated .com.cfg.vo.BuffCfg buffcfg = 1;
  inline int buffcfg_size() const;
  inline void clear_buffcfg();
  static const int kBuffcfgFieldNumber = 1;
  inline const ::com::cfg::vo::BuffCfg& buffcfg(int index) const;
  inline ::com::cfg::vo::BuffCfg* mutable_buffcfg(int index);
  inline ::com::cfg::vo::BuffCfg* add_buffcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffCfg >&
      buffcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffCfg >*
      mutable_buffcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.BuffCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffCfg > buffcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BuffCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BuffCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BuffCfg_2eproto();
  friend void protobuf_ShutdownFile_BuffCfg_2eproto();

  void InitAsDefaultInstance();
  static BuffCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// BuffEffect

// required uint32 EffectType = 1;
inline bool BuffEffect::has_effecttype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BuffEffect::set_has_effecttype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BuffEffect::clear_has_effecttype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BuffEffect::clear_effecttype() {
  effecttype_ = 0u;
  clear_has_effecttype();
}
inline ::google::protobuf::uint32 BuffEffect::effecttype() const {
  return effecttype_;
}
inline void BuffEffect::set_effecttype(::google::protobuf::uint32 value) {
  set_has_effecttype();
  effecttype_ = value;
}

// required uint32 Value = 2;
inline bool BuffEffect::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BuffEffect::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BuffEffect::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BuffEffect::clear_value() {
  value_ = 0u;
  clear_has_value();
}
inline ::google::protobuf::uint32 BuffEffect::value() const {
  return value_;
}
inline void BuffEffect::set_value(::google::protobuf::uint32 value) {
  set_has_value();
  value_ = value;
}

// required uint32 MagicType = 3;
inline bool BuffEffect::has_magictype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BuffEffect::set_has_magictype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BuffEffect::clear_has_magictype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BuffEffect::clear_magictype() {
  magictype_ = 0u;
  clear_has_magictype();
}
inline ::google::protobuf::uint32 BuffEffect::magictype() const {
  return magictype_;
}
inline void BuffEffect::set_magictype(::google::protobuf::uint32 value) {
  set_has_magictype();
  magictype_ = value;
}

// -------------------------------------------------------------------

// BuffCfg

// required uint32 BuffID = 1;
inline bool BuffCfg::has_buffid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BuffCfg::set_has_buffid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BuffCfg::clear_has_buffid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BuffCfg::clear_buffid() {
  buffid_ = 0u;
  clear_has_buffid();
}
inline ::google::protobuf::uint32 BuffCfg::buffid() const {
  return buffid_;
}
inline void BuffCfg::set_buffid(::google::protobuf::uint32 value) {
  set_has_buffid();
  buffid_ = value;
}

// required string Name = 2;
inline bool BuffCfg::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BuffCfg::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BuffCfg::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BuffCfg::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& BuffCfg::name() const {
  return *name_;
}
inline void BuffCfg::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BuffCfg::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BuffCfg::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BuffCfg::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* BuffCfg::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BuffCfg::set_allocated_name(::std::string* name) {
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

// required string Desc = 3;
inline bool BuffCfg::has_desc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BuffCfg::set_has_desc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BuffCfg::clear_has_desc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BuffCfg::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& BuffCfg::desc() const {
  return *desc_;
}
inline void BuffCfg::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void BuffCfg::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void BuffCfg::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BuffCfg::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* BuffCfg::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BuffCfg::set_allocated_desc(::std::string* desc) {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (desc) {
    set_has_desc();
    desc_ = desc;
  } else {
    clear_has_desc();
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Icon = 4;
inline bool BuffCfg::has_icon() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BuffCfg::set_has_icon() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BuffCfg::clear_has_icon() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BuffCfg::clear_icon() {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    icon_->clear();
  }
  clear_has_icon();
}
inline const ::std::string& BuffCfg::icon() const {
  return *icon_;
}
inline void BuffCfg::set_icon(const ::std::string& value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void BuffCfg::set_icon(const char* value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void BuffCfg::set_icon(const char* value, size_t size) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BuffCfg::mutable_icon() {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  return icon_;
}
inline ::std::string* BuffCfg::release_icon() {
  clear_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = icon_;
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BuffCfg::set_allocated_icon(::std::string* icon) {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    delete icon_;
  }
  if (icon) {
    set_has_icon();
    icon_ = icon;
  } else {
    clear_has_icon();
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string StateIcon = 5;
inline bool BuffCfg::has_stateicon() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BuffCfg::set_has_stateicon() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BuffCfg::clear_has_stateicon() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BuffCfg::clear_stateicon() {
  if (stateicon_ != &::google::protobuf::internal::kEmptyString) {
    stateicon_->clear();
  }
  clear_has_stateicon();
}
inline const ::std::string& BuffCfg::stateicon() const {
  return *stateicon_;
}
inline void BuffCfg::set_stateicon(const ::std::string& value) {
  set_has_stateicon();
  if (stateicon_ == &::google::protobuf::internal::kEmptyString) {
    stateicon_ = new ::std::string;
  }
  stateicon_->assign(value);
}
inline void BuffCfg::set_stateicon(const char* value) {
  set_has_stateicon();
  if (stateicon_ == &::google::protobuf::internal::kEmptyString) {
    stateicon_ = new ::std::string;
  }
  stateicon_->assign(value);
}
inline void BuffCfg::set_stateicon(const char* value, size_t size) {
  set_has_stateicon();
  if (stateicon_ == &::google::protobuf::internal::kEmptyString) {
    stateicon_ = new ::std::string;
  }
  stateicon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BuffCfg::mutable_stateicon() {
  set_has_stateicon();
  if (stateicon_ == &::google::protobuf::internal::kEmptyString) {
    stateicon_ = new ::std::string;
  }
  return stateicon_;
}
inline ::std::string* BuffCfg::release_stateicon() {
  clear_has_stateicon();
  if (stateicon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stateicon_;
    stateicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BuffCfg::set_allocated_stateicon(::std::string* stateicon) {
  if (stateicon_ != &::google::protobuf::internal::kEmptyString) {
    delete stateicon_;
  }
  if (stateicon) {
    set_has_stateicon();
    stateicon_ = stateicon;
  } else {
    clear_has_stateicon();
    stateicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Animation = 6;
inline bool BuffCfg::has_animation() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BuffCfg::set_has_animation() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BuffCfg::clear_has_animation() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BuffCfg::clear_animation() {
  if (animation_ != &::google::protobuf::internal::kEmptyString) {
    animation_->clear();
  }
  clear_has_animation();
}
inline const ::std::string& BuffCfg::animation() const {
  return *animation_;
}
inline void BuffCfg::set_animation(const ::std::string& value) {
  set_has_animation();
  if (animation_ == &::google::protobuf::internal::kEmptyString) {
    animation_ = new ::std::string;
  }
  animation_->assign(value);
}
inline void BuffCfg::set_animation(const char* value) {
  set_has_animation();
  if (animation_ == &::google::protobuf::internal::kEmptyString) {
    animation_ = new ::std::string;
  }
  animation_->assign(value);
}
inline void BuffCfg::set_animation(const char* value, size_t size) {
  set_has_animation();
  if (animation_ == &::google::protobuf::internal::kEmptyString) {
    animation_ = new ::std::string;
  }
  animation_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BuffCfg::mutable_animation() {
  set_has_animation();
  if (animation_ == &::google::protobuf::internal::kEmptyString) {
    animation_ = new ::std::string;
  }
  return animation_;
}
inline ::std::string* BuffCfg::release_animation() {
  clear_has_animation();
  if (animation_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = animation_;
    animation_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BuffCfg::set_allocated_animation(::std::string* animation) {
  if (animation_ != &::google::protobuf::internal::kEmptyString) {
    delete animation_;
  }
  if (animation) {
    set_has_animation();
    animation_ = animation;
  } else {
    clear_has_animation();
    animation_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 TargetType = 7;
inline bool BuffCfg::has_targettype() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void BuffCfg::set_has_targettype() {
  _has_bits_[0] |= 0x00000040u;
}
inline void BuffCfg::clear_has_targettype() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void BuffCfg::clear_targettype() {
  targettype_ = 0u;
  clear_has_targettype();
}
inline ::google::protobuf::uint32 BuffCfg::targettype() const {
  return targettype_;
}
inline void BuffCfg::set_targettype(::google::protobuf::uint32 value) {
  set_has_targettype();
  targettype_ = value;
}

// required uint32 AddOrDec = 8;
inline bool BuffCfg::has_addordec() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void BuffCfg::set_has_addordec() {
  _has_bits_[0] |= 0x00000080u;
}
inline void BuffCfg::clear_has_addordec() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void BuffCfg::clear_addordec() {
  addordec_ = 0u;
  clear_has_addordec();
}
inline ::google::protobuf::uint32 BuffCfg::addordec() const {
  return addordec_;
}
inline void BuffCfg::set_addordec(::google::protobuf::uint32 value) {
  set_has_addordec();
  addordec_ = value;
}

// required uint32 LiveSpan = 9;
inline bool BuffCfg::has_livespan() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void BuffCfg::set_has_livespan() {
  _has_bits_[0] |= 0x00000100u;
}
inline void BuffCfg::clear_has_livespan() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void BuffCfg::clear_livespan() {
  livespan_ = 0u;
  clear_has_livespan();
}
inline ::google::protobuf::uint32 BuffCfg::livespan() const {
  return livespan_;
}
inline void BuffCfg::set_livespan(::google::protobuf::uint32 value) {
  set_has_livespan();
  livespan_ = value;
}

// required uint32 DisplayPos = 10;
inline bool BuffCfg::has_displaypos() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void BuffCfg::set_has_displaypos() {
  _has_bits_[0] |= 0x00000200u;
}
inline void BuffCfg::clear_has_displaypos() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void BuffCfg::clear_displaypos() {
  displaypos_ = 0u;
  clear_has_displaypos();
}
inline ::google::protobuf::uint32 BuffCfg::displaypos() const {
  return displaypos_;
}
inline void BuffCfg::set_displaypos(::google::protobuf::uint32 value) {
  set_has_displaypos();
  displaypos_ = value;
}

// repeated .com.cfg.vo.BuffEffect Effects = 12;
inline int BuffCfg::effects_size() const {
  return effects_.size();
}
inline void BuffCfg::clear_effects() {
  effects_.Clear();
}
inline const ::com::cfg::vo::BuffEffect& BuffCfg::effects(int index) const {
  return effects_.Get(index);
}
inline ::com::cfg::vo::BuffEffect* BuffCfg::mutable_effects(int index) {
  return effects_.Mutable(index);
}
inline ::com::cfg::vo::BuffEffect* BuffCfg::add_effects() {
  return effects_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffEffect >&
BuffCfg::effects() const {
  return effects_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffEffect >*
BuffCfg::mutable_effects() {
  return &effects_;
}

// -------------------------------------------------------------------

// BuffCfgSet

// repeated .com.cfg.vo.BuffCfg buffcfg = 1;
inline int BuffCfgSet::buffcfg_size() const {
  return buffcfg_.size();
}
inline void BuffCfgSet::clear_buffcfg() {
  buffcfg_.Clear();
}
inline const ::com::cfg::vo::BuffCfg& BuffCfgSet::buffcfg(int index) const {
  return buffcfg_.Get(index);
}
inline ::com::cfg::vo::BuffCfg* BuffCfgSet::mutable_buffcfg(int index) {
  return buffcfg_.Mutable(index);
}
inline ::com::cfg::vo::BuffCfg* BuffCfgSet::add_buffcfg() {
  return buffcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffCfg >&
BuffCfgSet::buffcfg() const {
  return buffcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuffCfg >*
BuffCfgSet::mutable_buffcfg() {
  return &buffcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BuffCfg_2eproto__INCLUDED
