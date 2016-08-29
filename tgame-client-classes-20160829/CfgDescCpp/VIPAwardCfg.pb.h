// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VIPAwardCfg.proto

#ifndef PROTOBUF_VIPAwardCfg_2eproto__INCLUDED
#define PROTOBUF_VIPAwardCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_VIPAwardCfg_2eproto();
void protobuf_AssignDesc_VIPAwardCfg_2eproto();
void protobuf_ShutdownFile_VIPAwardCfg_2eproto();

class VIPAwardCfg;
class VIPAwardCfgSet;

// ===================================================================

class VIPAwardCfg : public ::google::protobuf::MessageLite {
 public:
  VIPAwardCfg();
  virtual ~VIPAwardCfg();

  VIPAwardCfg(const VIPAwardCfg& from);

  inline VIPAwardCfg& operator=(const VIPAwardCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const VIPAwardCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const VIPAwardCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(VIPAwardCfg* other);

  // implements Message ----------------------------------------------

  VIPAwardCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const VIPAwardCfg& from);
  void MergeFrom(const VIPAwardCfg& from);
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

  // required uint32 PlayerLv = 1;
  inline bool has_playerlv() const;
  inline void clear_playerlv();
  static const int kPlayerLvFieldNumber = 1;
  inline ::google::protobuf::uint32 playerlv() const;
  inline void set_playerlv(::google::protobuf::uint32 value);

  // required uint32 VIPLv = 2;
  inline bool has_viplv() const;
  inline void clear_viplv();
  static const int kVIPLvFieldNumber = 2;
  inline ::google::protobuf::uint32 viplv() const;
  inline void set_viplv(::google::protobuf::uint32 value);

  // required uint32 Coin = 3;
  inline bool has_coin() const;
  inline void clear_coin();
  static const int kCoinFieldNumber = 3;
  inline ::google::protobuf::uint32 coin() const;
  inline void set_coin(::google::protobuf::uint32 value);

  // required uint32 Gold = 4;
  inline bool has_gold() const;
  inline void clear_gold();
  static const int kGoldFieldNumber = 4;
  inline ::google::protobuf::uint32 gold() const;
  inline void set_gold(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.VIPAwardCfg)
 private:
  inline void set_has_playerlv();
  inline void clear_has_playerlv();
  inline void set_has_viplv();
  inline void clear_has_viplv();
  inline void set_has_coin();
  inline void clear_has_coin();
  inline void set_has_gold();
  inline void clear_has_gold();

  ::google::protobuf::uint32 playerlv_;
  ::google::protobuf::uint32 viplv_;
  ::google::protobuf::uint32 coin_;
  ::google::protobuf::uint32 gold_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_VIPAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_VIPAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_VIPAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_VIPAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static VIPAwardCfg* default_instance_;
};
// -------------------------------------------------------------------

class VIPAwardCfgSet : public ::google::protobuf::MessageLite {
 public:
  VIPAwardCfgSet();
  virtual ~VIPAwardCfgSet();

  VIPAwardCfgSet(const VIPAwardCfgSet& from);

  inline VIPAwardCfgSet& operator=(const VIPAwardCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const VIPAwardCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const VIPAwardCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(VIPAwardCfgSet* other);

  // implements Message ----------------------------------------------

  VIPAwardCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const VIPAwardCfgSet& from);
  void MergeFrom(const VIPAwardCfgSet& from);
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

  // repeated .com.cfg.vo.VIPAwardCfg vipawardcfg = 1;
  inline int vipawardcfg_size() const;
  inline void clear_vipawardcfg();
  static const int kVipawardcfgFieldNumber = 1;
  inline const ::com::cfg::vo::VIPAwardCfg& vipawardcfg(int index) const;
  inline ::com::cfg::vo::VIPAwardCfg* mutable_vipawardcfg(int index);
  inline ::com::cfg::vo::VIPAwardCfg* add_vipawardcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VIPAwardCfg >&
      vipawardcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VIPAwardCfg >*
      mutable_vipawardcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.VIPAwardCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VIPAwardCfg > vipawardcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_VIPAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_VIPAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_VIPAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_VIPAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static VIPAwardCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// VIPAwardCfg

// required uint32 PlayerLv = 1;
inline bool VIPAwardCfg::has_playerlv() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VIPAwardCfg::set_has_playerlv() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VIPAwardCfg::clear_has_playerlv() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VIPAwardCfg::clear_playerlv() {
  playerlv_ = 0u;
  clear_has_playerlv();
}
inline ::google::protobuf::uint32 VIPAwardCfg::playerlv() const {
  return playerlv_;
}
inline void VIPAwardCfg::set_playerlv(::google::protobuf::uint32 value) {
  set_has_playerlv();
  playerlv_ = value;
}

// required uint32 VIPLv = 2;
inline bool VIPAwardCfg::has_viplv() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VIPAwardCfg::set_has_viplv() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VIPAwardCfg::clear_has_viplv() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VIPAwardCfg::clear_viplv() {
  viplv_ = 0u;
  clear_has_viplv();
}
inline ::google::protobuf::uint32 VIPAwardCfg::viplv() const {
  return viplv_;
}
inline void VIPAwardCfg::set_viplv(::google::protobuf::uint32 value) {
  set_has_viplv();
  viplv_ = value;
}

// required uint32 Coin = 3;
inline bool VIPAwardCfg::has_coin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VIPAwardCfg::set_has_coin() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VIPAwardCfg::clear_has_coin() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VIPAwardCfg::clear_coin() {
  coin_ = 0u;
  clear_has_coin();
}
inline ::google::protobuf::uint32 VIPAwardCfg::coin() const {
  return coin_;
}
inline void VIPAwardCfg::set_coin(::google::protobuf::uint32 value) {
  set_has_coin();
  coin_ = value;
}

// required uint32 Gold = 4;
inline bool VIPAwardCfg::has_gold() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VIPAwardCfg::set_has_gold() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VIPAwardCfg::clear_has_gold() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VIPAwardCfg::clear_gold() {
  gold_ = 0u;
  clear_has_gold();
}
inline ::google::protobuf::uint32 VIPAwardCfg::gold() const {
  return gold_;
}
inline void VIPAwardCfg::set_gold(::google::protobuf::uint32 value) {
  set_has_gold();
  gold_ = value;
}

// -------------------------------------------------------------------

// VIPAwardCfgSet

// repeated .com.cfg.vo.VIPAwardCfg vipawardcfg = 1;
inline int VIPAwardCfgSet::vipawardcfg_size() const {
  return vipawardcfg_.size();
}
inline void VIPAwardCfgSet::clear_vipawardcfg() {
  vipawardcfg_.Clear();
}
inline const ::com::cfg::vo::VIPAwardCfg& VIPAwardCfgSet::vipawardcfg(int index) const {
  return vipawardcfg_.Get(index);
}
inline ::com::cfg::vo::VIPAwardCfg* VIPAwardCfgSet::mutable_vipawardcfg(int index) {
  return vipawardcfg_.Mutable(index);
}
inline ::com::cfg::vo::VIPAwardCfg* VIPAwardCfgSet::add_vipawardcfg() {
  return vipawardcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VIPAwardCfg >&
VIPAwardCfgSet::vipawardcfg() const {
  return vipawardcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VIPAwardCfg >*
VIPAwardCfgSet::mutable_vipawardcfg() {
  return &vipawardcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_VIPAwardCfg_2eproto__INCLUDED
