// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuyInstanceCfg.proto

#ifndef PROTOBUF_BuyInstanceCfg_2eproto__INCLUDED
#define PROTOBUF_BuyInstanceCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_BuyInstanceCfg_2eproto();
void protobuf_AssignDesc_BuyInstanceCfg_2eproto();
void protobuf_ShutdownFile_BuyInstanceCfg_2eproto();

class BuyInstanceCfg;
class BuyInstanceCfgSet;

// ===================================================================

class BuyInstanceCfg : public ::google::protobuf::MessageLite {
 public:
  BuyInstanceCfg();
  virtual ~BuyInstanceCfg();

  BuyInstanceCfg(const BuyInstanceCfg& from);

  inline BuyInstanceCfg& operator=(const BuyInstanceCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const BuyInstanceCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BuyInstanceCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BuyInstanceCfg* other);

  // implements Message ----------------------------------------------

  BuyInstanceCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BuyInstanceCfg& from);
  void MergeFrom(const BuyInstanceCfg& from);
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

  // required uint32 Count = 1;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 1;
  inline ::google::protobuf::uint32 count() const;
  inline void set_count(::google::protobuf::uint32 value);

  // required uint32 Cost = 2;
  inline bool has_cost() const;
  inline void clear_cost();
  static const int kCostFieldNumber = 2;
  inline ::google::protobuf::uint32 cost() const;
  inline void set_cost(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.BuyInstanceCfg)
 private:
  inline void set_has_count();
  inline void clear_has_count();
  inline void set_has_cost();
  inline void clear_has_cost();

  ::google::protobuf::uint32 count_;
  ::google::protobuf::uint32 cost_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BuyInstanceCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BuyInstanceCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BuyInstanceCfg_2eproto();
  friend void protobuf_ShutdownFile_BuyInstanceCfg_2eproto();

  void InitAsDefaultInstance();
  static BuyInstanceCfg* default_instance_;
};
// -------------------------------------------------------------------

class BuyInstanceCfgSet : public ::google::protobuf::MessageLite {
 public:
  BuyInstanceCfgSet();
  virtual ~BuyInstanceCfgSet();

  BuyInstanceCfgSet(const BuyInstanceCfgSet& from);

  inline BuyInstanceCfgSet& operator=(const BuyInstanceCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const BuyInstanceCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BuyInstanceCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BuyInstanceCfgSet* other);

  // implements Message ----------------------------------------------

  BuyInstanceCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BuyInstanceCfgSet& from);
  void MergeFrom(const BuyInstanceCfgSet& from);
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

  // repeated .com.cfg.vo.BuyInstanceCfg buyinstancecfg = 1;
  inline int buyinstancecfg_size() const;
  inline void clear_buyinstancecfg();
  static const int kBuyinstancecfgFieldNumber = 1;
  inline const ::com::cfg::vo::BuyInstanceCfg& buyinstancecfg(int index) const;
  inline ::com::cfg::vo::BuyInstanceCfg* mutable_buyinstancecfg(int index);
  inline ::com::cfg::vo::BuyInstanceCfg* add_buyinstancecfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuyInstanceCfg >&
      buyinstancecfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuyInstanceCfg >*
      mutable_buyinstancecfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.BuyInstanceCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuyInstanceCfg > buyinstancecfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BuyInstanceCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BuyInstanceCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BuyInstanceCfg_2eproto();
  friend void protobuf_ShutdownFile_BuyInstanceCfg_2eproto();

  void InitAsDefaultInstance();
  static BuyInstanceCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// BuyInstanceCfg

// required uint32 Count = 1;
inline bool BuyInstanceCfg::has_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BuyInstanceCfg::set_has_count() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BuyInstanceCfg::clear_has_count() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BuyInstanceCfg::clear_count() {
  count_ = 0u;
  clear_has_count();
}
inline ::google::protobuf::uint32 BuyInstanceCfg::count() const {
  return count_;
}
inline void BuyInstanceCfg::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
}

// required uint32 Cost = 2;
inline bool BuyInstanceCfg::has_cost() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BuyInstanceCfg::set_has_cost() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BuyInstanceCfg::clear_has_cost() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BuyInstanceCfg::clear_cost() {
  cost_ = 0u;
  clear_has_cost();
}
inline ::google::protobuf::uint32 BuyInstanceCfg::cost() const {
  return cost_;
}
inline void BuyInstanceCfg::set_cost(::google::protobuf::uint32 value) {
  set_has_cost();
  cost_ = value;
}

// -------------------------------------------------------------------

// BuyInstanceCfgSet

// repeated .com.cfg.vo.BuyInstanceCfg buyinstancecfg = 1;
inline int BuyInstanceCfgSet::buyinstancecfg_size() const {
  return buyinstancecfg_.size();
}
inline void BuyInstanceCfgSet::clear_buyinstancecfg() {
  buyinstancecfg_.Clear();
}
inline const ::com::cfg::vo::BuyInstanceCfg& BuyInstanceCfgSet::buyinstancecfg(int index) const {
  return buyinstancecfg_.Get(index);
}
inline ::com::cfg::vo::BuyInstanceCfg* BuyInstanceCfgSet::mutable_buyinstancecfg(int index) {
  return buyinstancecfg_.Mutable(index);
}
inline ::com::cfg::vo::BuyInstanceCfg* BuyInstanceCfgSet::add_buyinstancecfg() {
  return buyinstancecfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuyInstanceCfg >&
BuyInstanceCfgSet::buyinstancecfg() const {
  return buyinstancecfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::BuyInstanceCfg >*
BuyInstanceCfgSet::mutable_buyinstancecfg() {
  return &buyinstancecfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BuyInstanceCfg_2eproto__INCLUDED
