// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemCfg.proto

#ifndef PROTOBUF_ItemCfg_2eproto__INCLUDED
#define PROTOBUF_ItemCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_ItemCfg_2eproto();
void protobuf_AssignDesc_ItemCfg_2eproto();
void protobuf_ShutdownFile_ItemCfg_2eproto();

class ItemCfg;
class ItemCfgSet;

// ===================================================================

class ItemCfg : public ::google::protobuf::MessageLite {
 public:
  ItemCfg();
  virtual ~ItemCfg();

  ItemCfg(const ItemCfg& from);

  inline ItemCfg& operator=(const ItemCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const ItemCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ItemCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ItemCfg* other);

  // implements Message ----------------------------------------------

  ItemCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ItemCfg& from);
  void MergeFrom(const ItemCfg& from);
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

  // required uint32 ItemID = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIDFieldNumber = 1;
  inline ::google::protobuf::uint32 itemid() const;
  inline void set_itemid(::google::protobuf::uint32 value);

  // required string ItemName = 2;
  inline bool has_itemname() const;
  inline void clear_itemname();
  static const int kItemNameFieldNumber = 2;
  inline const ::std::string& itemname() const;
  inline void set_itemname(const ::std::string& value);
  inline void set_itemname(const char* value);
  inline void set_itemname(const char* value, size_t size);
  inline ::std::string* mutable_itemname();
  inline ::std::string* release_itemname();
  inline void set_allocated_itemname(::std::string* itemname);

  // required uint32 ItemColor = 3;
  inline bool has_itemcolor() const;
  inline void clear_itemcolor();
  static const int kItemColorFieldNumber = 3;
  inline ::google::protobuf::uint32 itemcolor() const;
  inline void set_itemcolor(::google::protobuf::uint32 value);

  // required string ItemIcon = 4;
  inline bool has_itemicon() const;
  inline void clear_itemicon();
  static const int kItemIconFieldNumber = 4;
  inline const ::std::string& itemicon() const;
  inline void set_itemicon(const ::std::string& value);
  inline void set_itemicon(const char* value);
  inline void set_itemicon(const char* value, size_t size);
  inline ::std::string* mutable_itemicon();
  inline ::std::string* release_itemicon();
  inline void set_allocated_itemicon(::std::string* itemicon);

  // required string ItemDesc = 5;
  inline bool has_itemdesc() const;
  inline void clear_itemdesc();
  static const int kItemDescFieldNumber = 5;
  inline const ::std::string& itemdesc() const;
  inline void set_itemdesc(const ::std::string& value);
  inline void set_itemdesc(const char* value);
  inline void set_itemdesc(const char* value, size_t size);
  inline ::std::string* mutable_itemdesc();
  inline ::std::string* release_itemdesc();
  inline void set_allocated_itemdesc(::std::string* itemdesc);

  // required uint32 Usable = 6;
  inline bool has_usable() const;
  inline void clear_usable();
  static const int kUsableFieldNumber = 6;
  inline ::google::protobuf::uint32 usable() const;
  inline void set_usable(::google::protobuf::uint32 value);

  // required uint32 ItemMax = 7;
  inline bool has_itemmax() const;
  inline void clear_itemmax();
  static const int kItemMaxFieldNumber = 7;
  inline ::google::protobuf::uint32 itemmax() const;
  inline void set_itemmax(::google::protobuf::uint32 value);

  // required uint32 CoinPrice = 8;
  inline bool has_coinprice() const;
  inline void clear_coinprice();
  static const int kCoinPriceFieldNumber = 8;
  inline ::google::protobuf::uint32 coinprice() const;
  inline void set_coinprice(::google::protobuf::uint32 value);

  // required uint32 GoldPrice = 9;
  inline bool has_goldprice() const;
  inline void clear_goldprice();
  static const int kGoldPriceFieldNumber = 9;
  inline ::google::protobuf::uint32 goldprice() const;
  inline void set_goldprice(::google::protobuf::uint32 value);

  // required uint32 CanSell = 10;
  inline bool has_cansell() const;
  inline void clear_cansell();
  static const int kCanSellFieldNumber = 10;
  inline ::google::protobuf::uint32 cansell() const;
  inline void set_cansell(::google::protobuf::uint32 value);

  // required uint32 WarType = 11;
  inline bool has_wartype() const;
  inline void clear_wartype();
  static const int kWarTypeFieldNumber = 11;
  inline ::google::protobuf::uint32 wartype() const;
  inline void set_wartype(::google::protobuf::uint32 value);

  // required uint32 WarID = 12;
  inline bool has_warid() const;
  inline void clear_warid();
  static const int kWarIDFieldNumber = 12;
  inline ::google::protobuf::uint32 warid() const;
  inline void set_warid(::google::protobuf::uint32 value);

  // required uint32 PlayerLv = 14;
  inline bool has_playerlv() const;
  inline void clear_playerlv();
  static const int kPlayerLvFieldNumber = 14;
  inline ::google::protobuf::uint32 playerlv() const;
  inline void set_playerlv(::google::protobuf::uint32 value);

  // required uint32 ItemType = 15;
  inline bool has_itemtype() const;
  inline void clear_itemtype();
  static const int kItemTypeFieldNumber = 15;
  inline ::google::protobuf::uint32 itemtype() const;
  inline void set_itemtype(::google::protobuf::uint32 value);

  // required uint32 BuyPrice = 16;
  inline bool has_buyprice() const;
  inline void clear_buyprice();
  static const int kBuyPriceFieldNumber = 16;
  inline ::google::protobuf::uint32 buyprice() const;
  inline void set_buyprice(::google::protobuf::uint32 value);

  // required uint32 BuyPriceType = 17;
  inline bool has_buypricetype() const;
  inline void clear_buypricetype();
  static const int kBuyPriceTypeFieldNumber = 17;
  inline ::google::protobuf::uint32 buypricetype() const;
  inline void set_buypricetype(::google::protobuf::uint32 value);

  // required uint32 DiscountThreshold = 18;
  inline bool has_discountthreshold() const;
  inline void clear_discountthreshold();
  static const int kDiscountThresholdFieldNumber = 18;
  inline ::google::protobuf::uint32 discountthreshold() const;
  inline void set_discountthreshold(::google::protobuf::uint32 value);

  // required uint32 Discount = 19;
  inline bool has_discount() const;
  inline void clear_discount();
  static const int kDiscountFieldNumber = 19;
  inline ::google::protobuf::uint32 discount() const;
  inline void set_discount(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ItemCfg)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_itemname();
  inline void clear_has_itemname();
  inline void set_has_itemcolor();
  inline void clear_has_itemcolor();
  inline void set_has_itemicon();
  inline void clear_has_itemicon();
  inline void set_has_itemdesc();
  inline void clear_has_itemdesc();
  inline void set_has_usable();
  inline void clear_has_usable();
  inline void set_has_itemmax();
  inline void clear_has_itemmax();
  inline void set_has_coinprice();
  inline void clear_has_coinprice();
  inline void set_has_goldprice();
  inline void clear_has_goldprice();
  inline void set_has_cansell();
  inline void clear_has_cansell();
  inline void set_has_wartype();
  inline void clear_has_wartype();
  inline void set_has_warid();
  inline void clear_has_warid();
  inline void set_has_playerlv();
  inline void clear_has_playerlv();
  inline void set_has_itemtype();
  inline void clear_has_itemtype();
  inline void set_has_buyprice();
  inline void clear_has_buyprice();
  inline void set_has_buypricetype();
  inline void clear_has_buypricetype();
  inline void set_has_discountthreshold();
  inline void clear_has_discountthreshold();
  inline void set_has_discount();
  inline void clear_has_discount();

  ::std::string* itemname_;
  ::google::protobuf::uint32 itemid_;
  ::google::protobuf::uint32 itemcolor_;
  ::std::string* itemicon_;
  ::std::string* itemdesc_;
  ::google::protobuf::uint32 usable_;
  ::google::protobuf::uint32 itemmax_;
  ::google::protobuf::uint32 coinprice_;
  ::google::protobuf::uint32 goldprice_;
  ::google::protobuf::uint32 cansell_;
  ::google::protobuf::uint32 wartype_;
  ::google::protobuf::uint32 warid_;
  ::google::protobuf::uint32 playerlv_;
  ::google::protobuf::uint32 itemtype_;
  ::google::protobuf::uint32 buyprice_;
  ::google::protobuf::uint32 buypricetype_;
  ::google::protobuf::uint32 discountthreshold_;
  ::google::protobuf::uint32 discount_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(18 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ItemCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ItemCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ItemCfg_2eproto();
  friend void protobuf_ShutdownFile_ItemCfg_2eproto();

  void InitAsDefaultInstance();
  static ItemCfg* default_instance_;
};
// -------------------------------------------------------------------

class ItemCfgSet : public ::google::protobuf::MessageLite {
 public:
  ItemCfgSet();
  virtual ~ItemCfgSet();

  ItemCfgSet(const ItemCfgSet& from);

  inline ItemCfgSet& operator=(const ItemCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ItemCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ItemCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ItemCfgSet* other);

  // implements Message ----------------------------------------------

  ItemCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ItemCfgSet& from);
  void MergeFrom(const ItemCfgSet& from);
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

  // repeated .com.cfg.vo.ItemCfg itemcfg = 1;
  inline int itemcfg_size() const;
  inline void clear_itemcfg();
  static const int kItemcfgFieldNumber = 1;
  inline const ::com::cfg::vo::ItemCfg& itemcfg(int index) const;
  inline ::com::cfg::vo::ItemCfg* mutable_itemcfg(int index);
  inline ::com::cfg::vo::ItemCfg* add_itemcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ItemCfg >&
      itemcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ItemCfg >*
      mutable_itemcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ItemCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ItemCfg > itemcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ItemCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ItemCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ItemCfg_2eproto();
  friend void protobuf_ShutdownFile_ItemCfg_2eproto();

  void InitAsDefaultInstance();
  static ItemCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemCfg

// required uint32 ItemID = 1;
inline bool ItemCfg::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemCfg::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemCfg::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemCfg::clear_itemid() {
  itemid_ = 0u;
  clear_has_itemid();
}
inline ::google::protobuf::uint32 ItemCfg::itemid() const {
  return itemid_;
}
inline void ItemCfg::set_itemid(::google::protobuf::uint32 value) {
  set_has_itemid();
  itemid_ = value;
}

// required string ItemName = 2;
inline bool ItemCfg::has_itemname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemCfg::set_has_itemname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemCfg::clear_has_itemname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemCfg::clear_itemname() {
  if (itemname_ != &::google::protobuf::internal::kEmptyString) {
    itemname_->clear();
  }
  clear_has_itemname();
}
inline const ::std::string& ItemCfg::itemname() const {
  return *itemname_;
}
inline void ItemCfg::set_itemname(const ::std::string& value) {
  set_has_itemname();
  if (itemname_ == &::google::protobuf::internal::kEmptyString) {
    itemname_ = new ::std::string;
  }
  itemname_->assign(value);
}
inline void ItemCfg::set_itemname(const char* value) {
  set_has_itemname();
  if (itemname_ == &::google::protobuf::internal::kEmptyString) {
    itemname_ = new ::std::string;
  }
  itemname_->assign(value);
}
inline void ItemCfg::set_itemname(const char* value, size_t size) {
  set_has_itemname();
  if (itemname_ == &::google::protobuf::internal::kEmptyString) {
    itemname_ = new ::std::string;
  }
  itemname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemCfg::mutable_itemname() {
  set_has_itemname();
  if (itemname_ == &::google::protobuf::internal::kEmptyString) {
    itemname_ = new ::std::string;
  }
  return itemname_;
}
inline ::std::string* ItemCfg::release_itemname() {
  clear_has_itemname();
  if (itemname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = itemname_;
    itemname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemCfg::set_allocated_itemname(::std::string* itemname) {
  if (itemname_ != &::google::protobuf::internal::kEmptyString) {
    delete itemname_;
  }
  if (itemname) {
    set_has_itemname();
    itemname_ = itemname;
  } else {
    clear_has_itemname();
    itemname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 ItemColor = 3;
inline bool ItemCfg::has_itemcolor() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ItemCfg::set_has_itemcolor() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ItemCfg::clear_has_itemcolor() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ItemCfg::clear_itemcolor() {
  itemcolor_ = 0u;
  clear_has_itemcolor();
}
inline ::google::protobuf::uint32 ItemCfg::itemcolor() const {
  return itemcolor_;
}
inline void ItemCfg::set_itemcolor(::google::protobuf::uint32 value) {
  set_has_itemcolor();
  itemcolor_ = value;
}

// required string ItemIcon = 4;
inline bool ItemCfg::has_itemicon() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ItemCfg::set_has_itemicon() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ItemCfg::clear_has_itemicon() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ItemCfg::clear_itemicon() {
  if (itemicon_ != &::google::protobuf::internal::kEmptyString) {
    itemicon_->clear();
  }
  clear_has_itemicon();
}
inline const ::std::string& ItemCfg::itemicon() const {
  return *itemicon_;
}
inline void ItemCfg::set_itemicon(const ::std::string& value) {
  set_has_itemicon();
  if (itemicon_ == &::google::protobuf::internal::kEmptyString) {
    itemicon_ = new ::std::string;
  }
  itemicon_->assign(value);
}
inline void ItemCfg::set_itemicon(const char* value) {
  set_has_itemicon();
  if (itemicon_ == &::google::protobuf::internal::kEmptyString) {
    itemicon_ = new ::std::string;
  }
  itemicon_->assign(value);
}
inline void ItemCfg::set_itemicon(const char* value, size_t size) {
  set_has_itemicon();
  if (itemicon_ == &::google::protobuf::internal::kEmptyString) {
    itemicon_ = new ::std::string;
  }
  itemicon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemCfg::mutable_itemicon() {
  set_has_itemicon();
  if (itemicon_ == &::google::protobuf::internal::kEmptyString) {
    itemicon_ = new ::std::string;
  }
  return itemicon_;
}
inline ::std::string* ItemCfg::release_itemicon() {
  clear_has_itemicon();
  if (itemicon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = itemicon_;
    itemicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemCfg::set_allocated_itemicon(::std::string* itemicon) {
  if (itemicon_ != &::google::protobuf::internal::kEmptyString) {
    delete itemicon_;
  }
  if (itemicon) {
    set_has_itemicon();
    itemicon_ = itemicon;
  } else {
    clear_has_itemicon();
    itemicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string ItemDesc = 5;
inline bool ItemCfg::has_itemdesc() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ItemCfg::set_has_itemdesc() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ItemCfg::clear_has_itemdesc() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ItemCfg::clear_itemdesc() {
  if (itemdesc_ != &::google::protobuf::internal::kEmptyString) {
    itemdesc_->clear();
  }
  clear_has_itemdesc();
}
inline const ::std::string& ItemCfg::itemdesc() const {
  return *itemdesc_;
}
inline void ItemCfg::set_itemdesc(const ::std::string& value) {
  set_has_itemdesc();
  if (itemdesc_ == &::google::protobuf::internal::kEmptyString) {
    itemdesc_ = new ::std::string;
  }
  itemdesc_->assign(value);
}
inline void ItemCfg::set_itemdesc(const char* value) {
  set_has_itemdesc();
  if (itemdesc_ == &::google::protobuf::internal::kEmptyString) {
    itemdesc_ = new ::std::string;
  }
  itemdesc_->assign(value);
}
inline void ItemCfg::set_itemdesc(const char* value, size_t size) {
  set_has_itemdesc();
  if (itemdesc_ == &::google::protobuf::internal::kEmptyString) {
    itemdesc_ = new ::std::string;
  }
  itemdesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemCfg::mutable_itemdesc() {
  set_has_itemdesc();
  if (itemdesc_ == &::google::protobuf::internal::kEmptyString) {
    itemdesc_ = new ::std::string;
  }
  return itemdesc_;
}
inline ::std::string* ItemCfg::release_itemdesc() {
  clear_has_itemdesc();
  if (itemdesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = itemdesc_;
    itemdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemCfg::set_allocated_itemdesc(::std::string* itemdesc) {
  if (itemdesc_ != &::google::protobuf::internal::kEmptyString) {
    delete itemdesc_;
  }
  if (itemdesc) {
    set_has_itemdesc();
    itemdesc_ = itemdesc;
  } else {
    clear_has_itemdesc();
    itemdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 Usable = 6;
inline bool ItemCfg::has_usable() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ItemCfg::set_has_usable() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ItemCfg::clear_has_usable() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ItemCfg::clear_usable() {
  usable_ = 0u;
  clear_has_usable();
}
inline ::google::protobuf::uint32 ItemCfg::usable() const {
  return usable_;
}
inline void ItemCfg::set_usable(::google::protobuf::uint32 value) {
  set_has_usable();
  usable_ = value;
}

// required uint32 ItemMax = 7;
inline bool ItemCfg::has_itemmax() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ItemCfg::set_has_itemmax() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ItemCfg::clear_has_itemmax() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ItemCfg::clear_itemmax() {
  itemmax_ = 0u;
  clear_has_itemmax();
}
inline ::google::protobuf::uint32 ItemCfg::itemmax() const {
  return itemmax_;
}
inline void ItemCfg::set_itemmax(::google::protobuf::uint32 value) {
  set_has_itemmax();
  itemmax_ = value;
}

// required uint32 CoinPrice = 8;
inline bool ItemCfg::has_coinprice() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ItemCfg::set_has_coinprice() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ItemCfg::clear_has_coinprice() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ItemCfg::clear_coinprice() {
  coinprice_ = 0u;
  clear_has_coinprice();
}
inline ::google::protobuf::uint32 ItemCfg::coinprice() const {
  return coinprice_;
}
inline void ItemCfg::set_coinprice(::google::protobuf::uint32 value) {
  set_has_coinprice();
  coinprice_ = value;
}

// required uint32 GoldPrice = 9;
inline bool ItemCfg::has_goldprice() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ItemCfg::set_has_goldprice() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ItemCfg::clear_has_goldprice() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ItemCfg::clear_goldprice() {
  goldprice_ = 0u;
  clear_has_goldprice();
}
inline ::google::protobuf::uint32 ItemCfg::goldprice() const {
  return goldprice_;
}
inline void ItemCfg::set_goldprice(::google::protobuf::uint32 value) {
  set_has_goldprice();
  goldprice_ = value;
}

// required uint32 CanSell = 10;
inline bool ItemCfg::has_cansell() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ItemCfg::set_has_cansell() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ItemCfg::clear_has_cansell() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ItemCfg::clear_cansell() {
  cansell_ = 0u;
  clear_has_cansell();
}
inline ::google::protobuf::uint32 ItemCfg::cansell() const {
  return cansell_;
}
inline void ItemCfg::set_cansell(::google::protobuf::uint32 value) {
  set_has_cansell();
  cansell_ = value;
}

// required uint32 WarType = 11;
inline bool ItemCfg::has_wartype() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ItemCfg::set_has_wartype() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ItemCfg::clear_has_wartype() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ItemCfg::clear_wartype() {
  wartype_ = 0u;
  clear_has_wartype();
}
inline ::google::protobuf::uint32 ItemCfg::wartype() const {
  return wartype_;
}
inline void ItemCfg::set_wartype(::google::protobuf::uint32 value) {
  set_has_wartype();
  wartype_ = value;
}

// required uint32 WarID = 12;
inline bool ItemCfg::has_warid() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ItemCfg::set_has_warid() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ItemCfg::clear_has_warid() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ItemCfg::clear_warid() {
  warid_ = 0u;
  clear_has_warid();
}
inline ::google::protobuf::uint32 ItemCfg::warid() const {
  return warid_;
}
inline void ItemCfg::set_warid(::google::protobuf::uint32 value) {
  set_has_warid();
  warid_ = value;
}

// required uint32 PlayerLv = 14;
inline bool ItemCfg::has_playerlv() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ItemCfg::set_has_playerlv() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ItemCfg::clear_has_playerlv() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ItemCfg::clear_playerlv() {
  playerlv_ = 0u;
  clear_has_playerlv();
}
inline ::google::protobuf::uint32 ItemCfg::playerlv() const {
  return playerlv_;
}
inline void ItemCfg::set_playerlv(::google::protobuf::uint32 value) {
  set_has_playerlv();
  playerlv_ = value;
}

// required uint32 ItemType = 15;
inline bool ItemCfg::has_itemtype() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void ItemCfg::set_has_itemtype() {
  _has_bits_[0] |= 0x00002000u;
}
inline void ItemCfg::clear_has_itemtype() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void ItemCfg::clear_itemtype() {
  itemtype_ = 0u;
  clear_has_itemtype();
}
inline ::google::protobuf::uint32 ItemCfg::itemtype() const {
  return itemtype_;
}
inline void ItemCfg::set_itemtype(::google::protobuf::uint32 value) {
  set_has_itemtype();
  itemtype_ = value;
}

// required uint32 BuyPrice = 16;
inline bool ItemCfg::has_buyprice() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void ItemCfg::set_has_buyprice() {
  _has_bits_[0] |= 0x00004000u;
}
inline void ItemCfg::clear_has_buyprice() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void ItemCfg::clear_buyprice() {
  buyprice_ = 0u;
  clear_has_buyprice();
}
inline ::google::protobuf::uint32 ItemCfg::buyprice() const {
  return buyprice_;
}
inline void ItemCfg::set_buyprice(::google::protobuf::uint32 value) {
  set_has_buyprice();
  buyprice_ = value;
}

// required uint32 BuyPriceType = 17;
inline bool ItemCfg::has_buypricetype() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void ItemCfg::set_has_buypricetype() {
  _has_bits_[0] |= 0x00008000u;
}
inline void ItemCfg::clear_has_buypricetype() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void ItemCfg::clear_buypricetype() {
  buypricetype_ = 0u;
  clear_has_buypricetype();
}
inline ::google::protobuf::uint32 ItemCfg::buypricetype() const {
  return buypricetype_;
}
inline void ItemCfg::set_buypricetype(::google::protobuf::uint32 value) {
  set_has_buypricetype();
  buypricetype_ = value;
}

// required uint32 DiscountThreshold = 18;
inline bool ItemCfg::has_discountthreshold() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void ItemCfg::set_has_discountthreshold() {
  _has_bits_[0] |= 0x00010000u;
}
inline void ItemCfg::clear_has_discountthreshold() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void ItemCfg::clear_discountthreshold() {
  discountthreshold_ = 0u;
  clear_has_discountthreshold();
}
inline ::google::protobuf::uint32 ItemCfg::discountthreshold() const {
  return discountthreshold_;
}
inline void ItemCfg::set_discountthreshold(::google::protobuf::uint32 value) {
  set_has_discountthreshold();
  discountthreshold_ = value;
}

// required uint32 Discount = 19;
inline bool ItemCfg::has_discount() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void ItemCfg::set_has_discount() {
  _has_bits_[0] |= 0x00020000u;
}
inline void ItemCfg::clear_has_discount() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void ItemCfg::clear_discount() {
  discount_ = 0u;
  clear_has_discount();
}
inline ::google::protobuf::uint32 ItemCfg::discount() const {
  return discount_;
}
inline void ItemCfg::set_discount(::google::protobuf::uint32 value) {
  set_has_discount();
  discount_ = value;
}

// -------------------------------------------------------------------

// ItemCfgSet

// repeated .com.cfg.vo.ItemCfg itemcfg = 1;
inline int ItemCfgSet::itemcfg_size() const {
  return itemcfg_.size();
}
inline void ItemCfgSet::clear_itemcfg() {
  itemcfg_.Clear();
}
inline const ::com::cfg::vo::ItemCfg& ItemCfgSet::itemcfg(int index) const {
  return itemcfg_.Get(index);
}
inline ::com::cfg::vo::ItemCfg* ItemCfgSet::mutable_itemcfg(int index) {
  return itemcfg_.Mutable(index);
}
inline ::com::cfg::vo::ItemCfg* ItemCfgSet::add_itemcfg() {
  return itemcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ItemCfg >&
ItemCfgSet::itemcfg() const {
  return itemcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ItemCfg >*
ItemCfgSet::mutable_itemcfg() {
  return &itemcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ItemCfg_2eproto__INCLUDED
