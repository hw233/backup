// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EquipRefineCostCfg.proto

#ifndef PROTOBUF_EquipRefineCostCfg_2eproto__INCLUDED
#define PROTOBUF_EquipRefineCostCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_EquipRefineCostCfg_2eproto();
void protobuf_AssignDesc_EquipRefineCostCfg_2eproto();
void protobuf_ShutdownFile_EquipRefineCostCfg_2eproto();

class EquipRefineCostCfg;
class EquipRefineCostCfgSet;

// ===================================================================

class EquipRefineCostCfg : public ::google::protobuf::MessageLite {
 public:
  EquipRefineCostCfg();
  virtual ~EquipRefineCostCfg();

  EquipRefineCostCfg(const EquipRefineCostCfg& from);

  inline EquipRefineCostCfg& operator=(const EquipRefineCostCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const EquipRefineCostCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EquipRefineCostCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EquipRefineCostCfg* other);

  // implements Message ----------------------------------------------

  EquipRefineCostCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EquipRefineCostCfg& from);
  void MergeFrom(const EquipRefineCostCfg& from);
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

  // required uint32 RefineLv = 2;
  inline bool has_refinelv() const;
  inline void clear_refinelv();
  static const int kRefineLvFieldNumber = 2;
  inline ::google::protobuf::uint32 refinelv() const;
  inline void set_refinelv(::google::protobuf::uint32 value);

  // required string RefineDesc = 3;
  inline bool has_refinedesc() const;
  inline void clear_refinedesc();
  static const int kRefineDescFieldNumber = 3;
  inline const ::std::string& refinedesc() const;
  inline void set_refinedesc(const ::std::string& value);
  inline void set_refinedesc(const char* value);
  inline void set_refinedesc(const char* value, size_t size);
  inline ::std::string* mutable_refinedesc();
  inline ::std::string* release_refinedesc();
  inline void set_allocated_refinedesc(::std::string* refinedesc);

  // required uint32 EquipLv = 4;
  inline bool has_equiplv() const;
  inline void clear_equiplv();
  static const int kEquipLvFieldNumber = 4;
  inline ::google::protobuf::uint32 equiplv() const;
  inline void set_equiplv(::google::protobuf::uint32 value);

  // required uint32 Part = 5;
  inline bool has_part() const;
  inline void clear_part();
  static const int kPartFieldNumber = 5;
  inline ::google::protobuf::uint32 part() const;
  inline void set_part(::google::protobuf::uint32 value);

  // required uint32 CostItemID = 6;
  inline bool has_costitemid() const;
  inline void clear_costitemid();
  static const int kCostItemIDFieldNumber = 6;
  inline ::google::protobuf::uint32 costitemid() const;
  inline void set_costitemid(::google::protobuf::uint32 value);

  // required uint32 CostItemNum = 7;
  inline bool has_costitemnum() const;
  inline void clear_costitemnum();
  static const int kCostItemNumFieldNumber = 7;
  inline ::google::protobuf::uint32 costitemnum() const;
  inline void set_costitemnum(::google::protobuf::uint32 value);

  // required uint32 ExtCostGold = 8;
  inline bool has_extcostgold() const;
  inline void clear_extcostgold();
  static const int kExtCostGoldFieldNumber = 8;
  inline ::google::protobuf::uint32 extcostgold() const;
  inline void set_extcostgold(::google::protobuf::uint32 value);

  // required uint32 Prob = 9;
  inline bool has_prob() const;
  inline void clear_prob();
  static const int kProbFieldNumber = 9;
  inline ::google::protobuf::uint32 prob() const;
  inline void set_prob(::google::protobuf::uint32 value);

  // repeated uint32 ColorAttrAdd = 10;
  inline int colorattradd_size() const;
  inline void clear_colorattradd();
  static const int kColorAttrAddFieldNumber = 10;
  inline ::google::protobuf::uint32 colorattradd(int index) const;
  inline void set_colorattradd(int index, ::google::protobuf::uint32 value);
  inline void add_colorattradd(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      colorattradd() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_colorattradd();

  // required uint32 TransCostCoin = 11;
  inline bool has_transcostcoin() const;
  inline void clear_transcostcoin();
  static const int kTransCostCoinFieldNumber = 11;
  inline ::google::protobuf::uint32 transcostcoin() const;
  inline void set_transcostcoin(::google::protobuf::uint32 value);

  // required uint32 CostCoin = 12;
  inline bool has_costcoin() const;
  inline void clear_costcoin();
  static const int kCostCoinFieldNumber = 12;
  inline ::google::protobuf::uint32 costcoin() const;
  inline void set_costcoin(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.EquipRefineCostCfg)
 private:
  inline void set_has_refinelv();
  inline void clear_has_refinelv();
  inline void set_has_refinedesc();
  inline void clear_has_refinedesc();
  inline void set_has_equiplv();
  inline void clear_has_equiplv();
  inline void set_has_part();
  inline void clear_has_part();
  inline void set_has_costitemid();
  inline void clear_has_costitemid();
  inline void set_has_costitemnum();
  inline void clear_has_costitemnum();
  inline void set_has_extcostgold();
  inline void clear_has_extcostgold();
  inline void set_has_prob();
  inline void clear_has_prob();
  inline void set_has_transcostcoin();
  inline void clear_has_transcostcoin();
  inline void set_has_costcoin();
  inline void clear_has_costcoin();

  ::std::string* refinedesc_;
  ::google::protobuf::uint32 refinelv_;
  ::google::protobuf::uint32 equiplv_;
  ::google::protobuf::uint32 part_;
  ::google::protobuf::uint32 costitemid_;
  ::google::protobuf::uint32 costitemnum_;
  ::google::protobuf::uint32 extcostgold_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > colorattradd_;
  ::google::protobuf::uint32 prob_;
  ::google::protobuf::uint32 transcostcoin_;
  ::google::protobuf::uint32 costcoin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_EquipRefineCostCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_EquipRefineCostCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_EquipRefineCostCfg_2eproto();
  friend void protobuf_ShutdownFile_EquipRefineCostCfg_2eproto();

  void InitAsDefaultInstance();
  static EquipRefineCostCfg* default_instance_;
};
// -------------------------------------------------------------------

class EquipRefineCostCfgSet : public ::google::protobuf::MessageLite {
 public:
  EquipRefineCostCfgSet();
  virtual ~EquipRefineCostCfgSet();

  EquipRefineCostCfgSet(const EquipRefineCostCfgSet& from);

  inline EquipRefineCostCfgSet& operator=(const EquipRefineCostCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const EquipRefineCostCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EquipRefineCostCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EquipRefineCostCfgSet* other);

  // implements Message ----------------------------------------------

  EquipRefineCostCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EquipRefineCostCfgSet& from);
  void MergeFrom(const EquipRefineCostCfgSet& from);
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

  // repeated .com.cfg.vo.EquipRefineCostCfg equiprefinecostcfg = 1;
  inline int equiprefinecostcfg_size() const;
  inline void clear_equiprefinecostcfg();
  static const int kEquiprefinecostcfgFieldNumber = 1;
  inline const ::com::cfg::vo::EquipRefineCostCfg& equiprefinecostcfg(int index) const;
  inline ::com::cfg::vo::EquipRefineCostCfg* mutable_equiprefinecostcfg(int index);
  inline ::com::cfg::vo::EquipRefineCostCfg* add_equiprefinecostcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipRefineCostCfg >&
      equiprefinecostcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipRefineCostCfg >*
      mutable_equiprefinecostcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.EquipRefineCostCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipRefineCostCfg > equiprefinecostcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_EquipRefineCostCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_EquipRefineCostCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_EquipRefineCostCfg_2eproto();
  friend void protobuf_ShutdownFile_EquipRefineCostCfg_2eproto();

  void InitAsDefaultInstance();
  static EquipRefineCostCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// EquipRefineCostCfg

// required uint32 RefineLv = 2;
inline bool EquipRefineCostCfg::has_refinelv() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EquipRefineCostCfg::set_has_refinelv() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EquipRefineCostCfg::clear_has_refinelv() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EquipRefineCostCfg::clear_refinelv() {
  refinelv_ = 0u;
  clear_has_refinelv();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::refinelv() const {
  return refinelv_;
}
inline void EquipRefineCostCfg::set_refinelv(::google::protobuf::uint32 value) {
  set_has_refinelv();
  refinelv_ = value;
}

// required string RefineDesc = 3;
inline bool EquipRefineCostCfg::has_refinedesc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EquipRefineCostCfg::set_has_refinedesc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EquipRefineCostCfg::clear_has_refinedesc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EquipRefineCostCfg::clear_refinedesc() {
  if (refinedesc_ != &::google::protobuf::internal::kEmptyString) {
    refinedesc_->clear();
  }
  clear_has_refinedesc();
}
inline const ::std::string& EquipRefineCostCfg::refinedesc() const {
  return *refinedesc_;
}
inline void EquipRefineCostCfg::set_refinedesc(const ::std::string& value) {
  set_has_refinedesc();
  if (refinedesc_ == &::google::protobuf::internal::kEmptyString) {
    refinedesc_ = new ::std::string;
  }
  refinedesc_->assign(value);
}
inline void EquipRefineCostCfg::set_refinedesc(const char* value) {
  set_has_refinedesc();
  if (refinedesc_ == &::google::protobuf::internal::kEmptyString) {
    refinedesc_ = new ::std::string;
  }
  refinedesc_->assign(value);
}
inline void EquipRefineCostCfg::set_refinedesc(const char* value, size_t size) {
  set_has_refinedesc();
  if (refinedesc_ == &::google::protobuf::internal::kEmptyString) {
    refinedesc_ = new ::std::string;
  }
  refinedesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EquipRefineCostCfg::mutable_refinedesc() {
  set_has_refinedesc();
  if (refinedesc_ == &::google::protobuf::internal::kEmptyString) {
    refinedesc_ = new ::std::string;
  }
  return refinedesc_;
}
inline ::std::string* EquipRefineCostCfg::release_refinedesc() {
  clear_has_refinedesc();
  if (refinedesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = refinedesc_;
    refinedesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EquipRefineCostCfg::set_allocated_refinedesc(::std::string* refinedesc) {
  if (refinedesc_ != &::google::protobuf::internal::kEmptyString) {
    delete refinedesc_;
  }
  if (refinedesc) {
    set_has_refinedesc();
    refinedesc_ = refinedesc;
  } else {
    clear_has_refinedesc();
    refinedesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 EquipLv = 4;
inline bool EquipRefineCostCfg::has_equiplv() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EquipRefineCostCfg::set_has_equiplv() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EquipRefineCostCfg::clear_has_equiplv() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EquipRefineCostCfg::clear_equiplv() {
  equiplv_ = 0u;
  clear_has_equiplv();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::equiplv() const {
  return equiplv_;
}
inline void EquipRefineCostCfg::set_equiplv(::google::protobuf::uint32 value) {
  set_has_equiplv();
  equiplv_ = value;
}

// required uint32 Part = 5;
inline bool EquipRefineCostCfg::has_part() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EquipRefineCostCfg::set_has_part() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EquipRefineCostCfg::clear_has_part() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EquipRefineCostCfg::clear_part() {
  part_ = 0u;
  clear_has_part();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::part() const {
  return part_;
}
inline void EquipRefineCostCfg::set_part(::google::protobuf::uint32 value) {
  set_has_part();
  part_ = value;
}

// required uint32 CostItemID = 6;
inline bool EquipRefineCostCfg::has_costitemid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EquipRefineCostCfg::set_has_costitemid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EquipRefineCostCfg::clear_has_costitemid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EquipRefineCostCfg::clear_costitemid() {
  costitemid_ = 0u;
  clear_has_costitemid();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::costitemid() const {
  return costitemid_;
}
inline void EquipRefineCostCfg::set_costitemid(::google::protobuf::uint32 value) {
  set_has_costitemid();
  costitemid_ = value;
}

// required uint32 CostItemNum = 7;
inline bool EquipRefineCostCfg::has_costitemnum() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EquipRefineCostCfg::set_has_costitemnum() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EquipRefineCostCfg::clear_has_costitemnum() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EquipRefineCostCfg::clear_costitemnum() {
  costitemnum_ = 0u;
  clear_has_costitemnum();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::costitemnum() const {
  return costitemnum_;
}
inline void EquipRefineCostCfg::set_costitemnum(::google::protobuf::uint32 value) {
  set_has_costitemnum();
  costitemnum_ = value;
}

// required uint32 ExtCostGold = 8;
inline bool EquipRefineCostCfg::has_extcostgold() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void EquipRefineCostCfg::set_has_extcostgold() {
  _has_bits_[0] |= 0x00000040u;
}
inline void EquipRefineCostCfg::clear_has_extcostgold() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void EquipRefineCostCfg::clear_extcostgold() {
  extcostgold_ = 0u;
  clear_has_extcostgold();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::extcostgold() const {
  return extcostgold_;
}
inline void EquipRefineCostCfg::set_extcostgold(::google::protobuf::uint32 value) {
  set_has_extcostgold();
  extcostgold_ = value;
}

// required uint32 Prob = 9;
inline bool EquipRefineCostCfg::has_prob() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void EquipRefineCostCfg::set_has_prob() {
  _has_bits_[0] |= 0x00000080u;
}
inline void EquipRefineCostCfg::clear_has_prob() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void EquipRefineCostCfg::clear_prob() {
  prob_ = 0u;
  clear_has_prob();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::prob() const {
  return prob_;
}
inline void EquipRefineCostCfg::set_prob(::google::protobuf::uint32 value) {
  set_has_prob();
  prob_ = value;
}

// repeated uint32 ColorAttrAdd = 10;
inline int EquipRefineCostCfg::colorattradd_size() const {
  return colorattradd_.size();
}
inline void EquipRefineCostCfg::clear_colorattradd() {
  colorattradd_.Clear();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::colorattradd(int index) const {
  return colorattradd_.Get(index);
}
inline void EquipRefineCostCfg::set_colorattradd(int index, ::google::protobuf::uint32 value) {
  colorattradd_.Set(index, value);
}
inline void EquipRefineCostCfg::add_colorattradd(::google::protobuf::uint32 value) {
  colorattradd_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
EquipRefineCostCfg::colorattradd() const {
  return colorattradd_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
EquipRefineCostCfg::mutable_colorattradd() {
  return &colorattradd_;
}

// required uint32 TransCostCoin = 11;
inline bool EquipRefineCostCfg::has_transcostcoin() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void EquipRefineCostCfg::set_has_transcostcoin() {
  _has_bits_[0] |= 0x00000200u;
}
inline void EquipRefineCostCfg::clear_has_transcostcoin() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void EquipRefineCostCfg::clear_transcostcoin() {
  transcostcoin_ = 0u;
  clear_has_transcostcoin();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::transcostcoin() const {
  return transcostcoin_;
}
inline void EquipRefineCostCfg::set_transcostcoin(::google::protobuf::uint32 value) {
  set_has_transcostcoin();
  transcostcoin_ = value;
}

// required uint32 CostCoin = 12;
inline bool EquipRefineCostCfg::has_costcoin() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void EquipRefineCostCfg::set_has_costcoin() {
  _has_bits_[0] |= 0x00000400u;
}
inline void EquipRefineCostCfg::clear_has_costcoin() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void EquipRefineCostCfg::clear_costcoin() {
  costcoin_ = 0u;
  clear_has_costcoin();
}
inline ::google::protobuf::uint32 EquipRefineCostCfg::costcoin() const {
  return costcoin_;
}
inline void EquipRefineCostCfg::set_costcoin(::google::protobuf::uint32 value) {
  set_has_costcoin();
  costcoin_ = value;
}

// -------------------------------------------------------------------

// EquipRefineCostCfgSet

// repeated .com.cfg.vo.EquipRefineCostCfg equiprefinecostcfg = 1;
inline int EquipRefineCostCfgSet::equiprefinecostcfg_size() const {
  return equiprefinecostcfg_.size();
}
inline void EquipRefineCostCfgSet::clear_equiprefinecostcfg() {
  equiprefinecostcfg_.Clear();
}
inline const ::com::cfg::vo::EquipRefineCostCfg& EquipRefineCostCfgSet::equiprefinecostcfg(int index) const {
  return equiprefinecostcfg_.Get(index);
}
inline ::com::cfg::vo::EquipRefineCostCfg* EquipRefineCostCfgSet::mutable_equiprefinecostcfg(int index) {
  return equiprefinecostcfg_.Mutable(index);
}
inline ::com::cfg::vo::EquipRefineCostCfg* EquipRefineCostCfgSet::add_equiprefinecostcfg() {
  return equiprefinecostcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipRefineCostCfg >&
EquipRefineCostCfgSet::equiprefinecostcfg() const {
  return equiprefinecostcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::EquipRefineCostCfg >*
EquipRefineCostCfgSet::mutable_equiprefinecostcfg() {
  return &equiprefinecostcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EquipRefineCostCfg_2eproto__INCLUDED
