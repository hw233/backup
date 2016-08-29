// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DotaLvCfg.proto

#ifndef PROTOBUF_DotaLvCfg_2eproto__INCLUDED
#define PROTOBUF_DotaLvCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_DotaLvCfg_2eproto();
void protobuf_AssignDesc_DotaLvCfg_2eproto();
void protobuf_ShutdownFile_DotaLvCfg_2eproto();

class DotaLvUpNeed;
class DotaLvCfg;
class DotaLvCfgSet;

// ===================================================================

class DotaLvUpNeed : public ::google::protobuf::MessageLite {
 public:
  DotaLvUpNeed();
  virtual ~DotaLvUpNeed();

  DotaLvUpNeed(const DotaLvUpNeed& from);

  inline DotaLvUpNeed& operator=(const DotaLvUpNeed& from) {
    CopyFrom(from);
    return *this;
  }

  static const DotaLvUpNeed& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DotaLvUpNeed* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DotaLvUpNeed* other);

  // implements Message ----------------------------------------------

  DotaLvUpNeed* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DotaLvUpNeed& from);
  void MergeFrom(const DotaLvUpNeed& from);
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

  // required uint32 DotaItemID = 1;
  inline bool has_dotaitemid() const;
  inline void clear_dotaitemid();
  static const int kDotaItemIDFieldNumber = 1;
  inline ::google::protobuf::uint32 dotaitemid() const;
  inline void set_dotaitemid(::google::protobuf::uint32 value);

  // required uint32 DotaItemCnt = 2;
  inline bool has_dotaitemcnt() const;
  inline void clear_dotaitemcnt();
  static const int kDotaItemCntFieldNumber = 2;
  inline ::google::protobuf::uint32 dotaitemcnt() const;
  inline void set_dotaitemcnt(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DotaLvUpNeed)
 private:
  inline void set_has_dotaitemid();
  inline void clear_has_dotaitemid();
  inline void set_has_dotaitemcnt();
  inline void clear_has_dotaitemcnt();

  ::google::protobuf::uint32 dotaitemid_;
  ::google::protobuf::uint32 dotaitemcnt_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DotaLvCfg_2eproto();
  friend void protobuf_ShutdownFile_DotaLvCfg_2eproto();

  void InitAsDefaultInstance();
  static DotaLvUpNeed* default_instance_;
};
// -------------------------------------------------------------------

class DotaLvCfg : public ::google::protobuf::MessageLite {
 public:
  DotaLvCfg();
  virtual ~DotaLvCfg();

  DotaLvCfg(const DotaLvCfg& from);

  inline DotaLvCfg& operator=(const DotaLvCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const DotaLvCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DotaLvCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DotaLvCfg* other);

  // implements Message ----------------------------------------------

  DotaLvCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DotaLvCfg& from);
  void MergeFrom(const DotaLvCfg& from);
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

  // required uint32 DotaLv = 1;
  inline bool has_dotalv() const;
  inline void clear_dotalv();
  static const int kDotaLvFieldNumber = 1;
  inline ::google::protobuf::uint32 dotalv() const;
  inline void set_dotalv(::google::protobuf::uint32 value);

  // required uint32 DotaPart = 2;
  inline bool has_dotapart() const;
  inline void clear_dotapart();
  static const int kDotaPartFieldNumber = 2;
  inline ::google::protobuf::uint32 dotapart() const;
  inline void set_dotapart(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.DotaLvUpNeed DotaLvUpNeeds = 3;
  inline int dotalvupneeds_size() const;
  inline void clear_dotalvupneeds();
  static const int kDotaLvUpNeedsFieldNumber = 3;
  inline const ::com::cfg::vo::DotaLvUpNeed& dotalvupneeds(int index) const;
  inline ::com::cfg::vo::DotaLvUpNeed* mutable_dotalvupneeds(int index);
  inline ::com::cfg::vo::DotaLvUpNeed* add_dotalvupneeds();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvUpNeed >&
      dotalvupneeds() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvUpNeed >*
      mutable_dotalvupneeds();

  // required uint32 ATK = 4;
  inline bool has_atk() const;
  inline void clear_atk();
  static const int kATKFieldNumber = 4;
  inline ::google::protobuf::uint32 atk() const;
  inline void set_atk(::google::protobuf::uint32 value);

  // required uint32 DEF = 5;
  inline bool has_def() const;
  inline void clear_def();
  static const int kDEFFieldNumber = 5;
  inline ::google::protobuf::uint32 def() const;
  inline void set_def(::google::protobuf::uint32 value);

  // required uint32 HP = 6;
  inline bool has_hp() const;
  inline void clear_hp();
  static const int kHPFieldNumber = 6;
  inline ::google::protobuf::uint32 hp() const;
  inline void set_hp(::google::protobuf::uint32 value);

  // required uint32 HIT = 7;
  inline bool has_hit() const;
  inline void clear_hit();
  static const int kHITFieldNumber = 7;
  inline ::google::protobuf::uint32 hit() const;
  inline void set_hit(::google::protobuf::uint32 value);

  // required uint32 CostCoin = 8;
  inline bool has_costcoin() const;
  inline void clear_costcoin();
  static const int kCostCoinFieldNumber = 8;
  inline ::google::protobuf::uint32 costcoin() const;
  inline void set_costcoin(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DotaLvCfg)
 private:
  inline void set_has_dotalv();
  inline void clear_has_dotalv();
  inline void set_has_dotapart();
  inline void clear_has_dotapart();
  inline void set_has_atk();
  inline void clear_has_atk();
  inline void set_has_def();
  inline void clear_has_def();
  inline void set_has_hp();
  inline void clear_has_hp();
  inline void set_has_hit();
  inline void clear_has_hit();
  inline void set_has_costcoin();
  inline void clear_has_costcoin();

  ::google::protobuf::uint32 dotalv_;
  ::google::protobuf::uint32 dotapart_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvUpNeed > dotalvupneeds_;
  ::google::protobuf::uint32 atk_;
  ::google::protobuf::uint32 def_;
  ::google::protobuf::uint32 hp_;
  ::google::protobuf::uint32 hit_;
  ::google::protobuf::uint32 costcoin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DotaLvCfg_2eproto();
  friend void protobuf_ShutdownFile_DotaLvCfg_2eproto();

  void InitAsDefaultInstance();
  static DotaLvCfg* default_instance_;
};
// -------------------------------------------------------------------

class DotaLvCfgSet : public ::google::protobuf::MessageLite {
 public:
  DotaLvCfgSet();
  virtual ~DotaLvCfgSet();

  DotaLvCfgSet(const DotaLvCfgSet& from);

  inline DotaLvCfgSet& operator=(const DotaLvCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const DotaLvCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DotaLvCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DotaLvCfgSet* other);

  // implements Message ----------------------------------------------

  DotaLvCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DotaLvCfgSet& from);
  void MergeFrom(const DotaLvCfgSet& from);
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

  // repeated .com.cfg.vo.DotaLvCfg dotalvcfg = 1;
  inline int dotalvcfg_size() const;
  inline void clear_dotalvcfg();
  static const int kDotalvcfgFieldNumber = 1;
  inline const ::com::cfg::vo::DotaLvCfg& dotalvcfg(int index) const;
  inline ::com::cfg::vo::DotaLvCfg* mutable_dotalvcfg(int index);
  inline ::com::cfg::vo::DotaLvCfg* add_dotalvcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvCfg >&
      dotalvcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvCfg >*
      mutable_dotalvcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DotaLvCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvCfg > dotalvcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DotaLvCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DotaLvCfg_2eproto();
  friend void protobuf_ShutdownFile_DotaLvCfg_2eproto();

  void InitAsDefaultInstance();
  static DotaLvCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// DotaLvUpNeed

// required uint32 DotaItemID = 1;
inline bool DotaLvUpNeed::has_dotaitemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DotaLvUpNeed::set_has_dotaitemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DotaLvUpNeed::clear_has_dotaitemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DotaLvUpNeed::clear_dotaitemid() {
  dotaitemid_ = 0u;
  clear_has_dotaitemid();
}
inline ::google::protobuf::uint32 DotaLvUpNeed::dotaitemid() const {
  return dotaitemid_;
}
inline void DotaLvUpNeed::set_dotaitemid(::google::protobuf::uint32 value) {
  set_has_dotaitemid();
  dotaitemid_ = value;
}

// required uint32 DotaItemCnt = 2;
inline bool DotaLvUpNeed::has_dotaitemcnt() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DotaLvUpNeed::set_has_dotaitemcnt() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DotaLvUpNeed::clear_has_dotaitemcnt() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DotaLvUpNeed::clear_dotaitemcnt() {
  dotaitemcnt_ = 0u;
  clear_has_dotaitemcnt();
}
inline ::google::protobuf::uint32 DotaLvUpNeed::dotaitemcnt() const {
  return dotaitemcnt_;
}
inline void DotaLvUpNeed::set_dotaitemcnt(::google::protobuf::uint32 value) {
  set_has_dotaitemcnt();
  dotaitemcnt_ = value;
}

// -------------------------------------------------------------------

// DotaLvCfg

// required uint32 DotaLv = 1;
inline bool DotaLvCfg::has_dotalv() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DotaLvCfg::set_has_dotalv() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DotaLvCfg::clear_has_dotalv() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DotaLvCfg::clear_dotalv() {
  dotalv_ = 0u;
  clear_has_dotalv();
}
inline ::google::protobuf::uint32 DotaLvCfg::dotalv() const {
  return dotalv_;
}
inline void DotaLvCfg::set_dotalv(::google::protobuf::uint32 value) {
  set_has_dotalv();
  dotalv_ = value;
}

// required uint32 DotaPart = 2;
inline bool DotaLvCfg::has_dotapart() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DotaLvCfg::set_has_dotapart() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DotaLvCfg::clear_has_dotapart() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DotaLvCfg::clear_dotapart() {
  dotapart_ = 0u;
  clear_has_dotapart();
}
inline ::google::protobuf::uint32 DotaLvCfg::dotapart() const {
  return dotapart_;
}
inline void DotaLvCfg::set_dotapart(::google::protobuf::uint32 value) {
  set_has_dotapart();
  dotapart_ = value;
}

// repeated .com.cfg.vo.DotaLvUpNeed DotaLvUpNeeds = 3;
inline int DotaLvCfg::dotalvupneeds_size() const {
  return dotalvupneeds_.size();
}
inline void DotaLvCfg::clear_dotalvupneeds() {
  dotalvupneeds_.Clear();
}
inline const ::com::cfg::vo::DotaLvUpNeed& DotaLvCfg::dotalvupneeds(int index) const {
  return dotalvupneeds_.Get(index);
}
inline ::com::cfg::vo::DotaLvUpNeed* DotaLvCfg::mutable_dotalvupneeds(int index) {
  return dotalvupneeds_.Mutable(index);
}
inline ::com::cfg::vo::DotaLvUpNeed* DotaLvCfg::add_dotalvupneeds() {
  return dotalvupneeds_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvUpNeed >&
DotaLvCfg::dotalvupneeds() const {
  return dotalvupneeds_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvUpNeed >*
DotaLvCfg::mutable_dotalvupneeds() {
  return &dotalvupneeds_;
}

// required uint32 ATK = 4;
inline bool DotaLvCfg::has_atk() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DotaLvCfg::set_has_atk() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DotaLvCfg::clear_has_atk() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DotaLvCfg::clear_atk() {
  atk_ = 0u;
  clear_has_atk();
}
inline ::google::protobuf::uint32 DotaLvCfg::atk() const {
  return atk_;
}
inline void DotaLvCfg::set_atk(::google::protobuf::uint32 value) {
  set_has_atk();
  atk_ = value;
}

// required uint32 DEF = 5;
inline bool DotaLvCfg::has_def() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DotaLvCfg::set_has_def() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DotaLvCfg::clear_has_def() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DotaLvCfg::clear_def() {
  def_ = 0u;
  clear_has_def();
}
inline ::google::protobuf::uint32 DotaLvCfg::def() const {
  return def_;
}
inline void DotaLvCfg::set_def(::google::protobuf::uint32 value) {
  set_has_def();
  def_ = value;
}

// required uint32 HP = 6;
inline bool DotaLvCfg::has_hp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DotaLvCfg::set_has_hp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DotaLvCfg::clear_has_hp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DotaLvCfg::clear_hp() {
  hp_ = 0u;
  clear_has_hp();
}
inline ::google::protobuf::uint32 DotaLvCfg::hp() const {
  return hp_;
}
inline void DotaLvCfg::set_hp(::google::protobuf::uint32 value) {
  set_has_hp();
  hp_ = value;
}

// required uint32 HIT = 7;
inline bool DotaLvCfg::has_hit() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DotaLvCfg::set_has_hit() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DotaLvCfg::clear_has_hit() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DotaLvCfg::clear_hit() {
  hit_ = 0u;
  clear_has_hit();
}
inline ::google::protobuf::uint32 DotaLvCfg::hit() const {
  return hit_;
}
inline void DotaLvCfg::set_hit(::google::protobuf::uint32 value) {
  set_has_hit();
  hit_ = value;
}

// required uint32 CostCoin = 8;
inline bool DotaLvCfg::has_costcoin() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DotaLvCfg::set_has_costcoin() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DotaLvCfg::clear_has_costcoin() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DotaLvCfg::clear_costcoin() {
  costcoin_ = 0u;
  clear_has_costcoin();
}
inline ::google::protobuf::uint32 DotaLvCfg::costcoin() const {
  return costcoin_;
}
inline void DotaLvCfg::set_costcoin(::google::protobuf::uint32 value) {
  set_has_costcoin();
  costcoin_ = value;
}

// -------------------------------------------------------------------

// DotaLvCfgSet

// repeated .com.cfg.vo.DotaLvCfg dotalvcfg = 1;
inline int DotaLvCfgSet::dotalvcfg_size() const {
  return dotalvcfg_.size();
}
inline void DotaLvCfgSet::clear_dotalvcfg() {
  dotalvcfg_.Clear();
}
inline const ::com::cfg::vo::DotaLvCfg& DotaLvCfgSet::dotalvcfg(int index) const {
  return dotalvcfg_.Get(index);
}
inline ::com::cfg::vo::DotaLvCfg* DotaLvCfgSet::mutable_dotalvcfg(int index) {
  return dotalvcfg_.Mutable(index);
}
inline ::com::cfg::vo::DotaLvCfg* DotaLvCfgSet::add_dotalvcfg() {
  return dotalvcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvCfg >&
DotaLvCfgSet::dotalvcfg() const {
  return dotalvcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DotaLvCfg >*
DotaLvCfgSet::mutable_dotalvcfg() {
  return &dotalvcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DotaLvCfg_2eproto__INCLUDED
