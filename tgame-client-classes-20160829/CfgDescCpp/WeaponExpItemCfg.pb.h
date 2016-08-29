// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeaponExpItemCfg.proto

#ifndef PROTOBUF_WeaponExpItemCfg_2eproto__INCLUDED
#define PROTOBUF_WeaponExpItemCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_WeaponExpItemCfg_2eproto();
void protobuf_AssignDesc_WeaponExpItemCfg_2eproto();
void protobuf_ShutdownFile_WeaponExpItemCfg_2eproto();

class WeaponExpItemCfg;
class WeaponExpItemCfgSet;

// ===================================================================

class WeaponExpItemCfg : public ::google::protobuf::MessageLite {
 public:
  WeaponExpItemCfg();
  virtual ~WeaponExpItemCfg();

  WeaponExpItemCfg(const WeaponExpItemCfg& from);

  inline WeaponExpItemCfg& operator=(const WeaponExpItemCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const WeaponExpItemCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WeaponExpItemCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WeaponExpItemCfg* other);

  // implements Message ----------------------------------------------

  WeaponExpItemCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WeaponExpItemCfg& from);
  void MergeFrom(const WeaponExpItemCfg& from);
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

  // required uint32 ItemCfgID = 1;
  inline bool has_itemcfgid() const;
  inline void clear_itemcfgid();
  static const int kItemCfgIDFieldNumber = 1;
  inline ::google::protobuf::uint32 itemcfgid() const;
  inline void set_itemcfgid(::google::protobuf::uint32 value);

  // required uint32 WeaponExp = 2;
  inline bool has_weaponexp() const;
  inline void clear_weaponexp();
  static const int kWeaponExpFieldNumber = 2;
  inline ::google::protobuf::uint32 weaponexp() const;
  inline void set_weaponexp(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.WeaponExpItemCfg)
 private:
  inline void set_has_itemcfgid();
  inline void clear_has_itemcfgid();
  inline void set_has_weaponexp();
  inline void clear_has_weaponexp();

  ::google::protobuf::uint32 itemcfgid_;
  ::google::protobuf::uint32 weaponexp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_WeaponExpItemCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_WeaponExpItemCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_WeaponExpItemCfg_2eproto();
  friend void protobuf_ShutdownFile_WeaponExpItemCfg_2eproto();

  void InitAsDefaultInstance();
  static WeaponExpItemCfg* default_instance_;
};
// -------------------------------------------------------------------

class WeaponExpItemCfgSet : public ::google::protobuf::MessageLite {
 public:
  WeaponExpItemCfgSet();
  virtual ~WeaponExpItemCfgSet();

  WeaponExpItemCfgSet(const WeaponExpItemCfgSet& from);

  inline WeaponExpItemCfgSet& operator=(const WeaponExpItemCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const WeaponExpItemCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WeaponExpItemCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WeaponExpItemCfgSet* other);

  // implements Message ----------------------------------------------

  WeaponExpItemCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WeaponExpItemCfgSet& from);
  void MergeFrom(const WeaponExpItemCfgSet& from);
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

  // repeated .com.cfg.vo.WeaponExpItemCfg weaponexpitemcfg = 1;
  inline int weaponexpitemcfg_size() const;
  inline void clear_weaponexpitemcfg();
  static const int kWeaponexpitemcfgFieldNumber = 1;
  inline const ::com::cfg::vo::WeaponExpItemCfg& weaponexpitemcfg(int index) const;
  inline ::com::cfg::vo::WeaponExpItemCfg* mutable_weaponexpitemcfg(int index);
  inline ::com::cfg::vo::WeaponExpItemCfg* add_weaponexpitemcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::WeaponExpItemCfg >&
      weaponexpitemcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::WeaponExpItemCfg >*
      mutable_weaponexpitemcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.WeaponExpItemCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::WeaponExpItemCfg > weaponexpitemcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_WeaponExpItemCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_WeaponExpItemCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_WeaponExpItemCfg_2eproto();
  friend void protobuf_ShutdownFile_WeaponExpItemCfg_2eproto();

  void InitAsDefaultInstance();
  static WeaponExpItemCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// WeaponExpItemCfg

// required uint32 ItemCfgID = 1;
inline bool WeaponExpItemCfg::has_itemcfgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WeaponExpItemCfg::set_has_itemcfgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WeaponExpItemCfg::clear_has_itemcfgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WeaponExpItemCfg::clear_itemcfgid() {
  itemcfgid_ = 0u;
  clear_has_itemcfgid();
}
inline ::google::protobuf::uint32 WeaponExpItemCfg::itemcfgid() const {
  return itemcfgid_;
}
inline void WeaponExpItemCfg::set_itemcfgid(::google::protobuf::uint32 value) {
  set_has_itemcfgid();
  itemcfgid_ = value;
}

// required uint32 WeaponExp = 2;
inline bool WeaponExpItemCfg::has_weaponexp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WeaponExpItemCfg::set_has_weaponexp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WeaponExpItemCfg::clear_has_weaponexp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WeaponExpItemCfg::clear_weaponexp() {
  weaponexp_ = 0u;
  clear_has_weaponexp();
}
inline ::google::protobuf::uint32 WeaponExpItemCfg::weaponexp() const {
  return weaponexp_;
}
inline void WeaponExpItemCfg::set_weaponexp(::google::protobuf::uint32 value) {
  set_has_weaponexp();
  weaponexp_ = value;
}

// -------------------------------------------------------------------

// WeaponExpItemCfgSet

// repeated .com.cfg.vo.WeaponExpItemCfg weaponexpitemcfg = 1;
inline int WeaponExpItemCfgSet::weaponexpitemcfg_size() const {
  return weaponexpitemcfg_.size();
}
inline void WeaponExpItemCfgSet::clear_weaponexpitemcfg() {
  weaponexpitemcfg_.Clear();
}
inline const ::com::cfg::vo::WeaponExpItemCfg& WeaponExpItemCfgSet::weaponexpitemcfg(int index) const {
  return weaponexpitemcfg_.Get(index);
}
inline ::com::cfg::vo::WeaponExpItemCfg* WeaponExpItemCfgSet::mutable_weaponexpitemcfg(int index) {
  return weaponexpitemcfg_.Mutable(index);
}
inline ::com::cfg::vo::WeaponExpItemCfg* WeaponExpItemCfgSet::add_weaponexpitemcfg() {
  return weaponexpitemcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::WeaponExpItemCfg >&
WeaponExpItemCfgSet::weaponexpitemcfg() const {
  return weaponexpitemcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::WeaponExpItemCfg >*
WeaponExpItemCfgSet::mutable_weaponexpitemcfg() {
  return &weaponexpitemcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WeaponExpItemCfg_2eproto__INCLUDED