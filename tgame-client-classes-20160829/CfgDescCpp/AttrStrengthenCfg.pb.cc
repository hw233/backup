// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AttrStrengthenCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AttrStrengthenCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_AttrStrengthenCfg_2eproto() {
  delete AttrStrengthenCfg::default_instance_;
  delete AttrStrengthenCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_AttrStrengthenCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_AttrStrengthenCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AttrStrengthenCfg::default_instance_ = new AttrStrengthenCfg();
  AttrStrengthenCfgSet::default_instance_ = new AttrStrengthenCfgSet();
  AttrStrengthenCfg::default_instance_->InitAsDefaultInstance();
  AttrStrengthenCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AttrStrengthenCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_AttrStrengthenCfg_2eproto_once_);
void protobuf_AddDesc_AttrStrengthenCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_AttrStrengthenCfg_2eproto_once_,
                 &protobuf_AddDesc_AttrStrengthenCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AttrStrengthenCfg_2eproto {
  StaticDescriptorInitializer_AttrStrengthenCfg_2eproto() {
    protobuf_AddDesc_AttrStrengthenCfg_2eproto();
  }
} static_descriptor_initializer_AttrStrengthenCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AttrStrengthenCfg::kTypeFieldNumber;
const int AttrStrengthenCfg::kLevelFieldNumber;
const int AttrStrengthenCfg::kAttrValFieldNumber;
const int AttrStrengthenCfg::kProbFieldNumber;
const int AttrStrengthenCfg::kCostCoinFieldNumber;
const int AttrStrengthenCfg::kItemIDFieldNumber;
const int AttrStrengthenCfg::kItemCntFieldNumber;
const int AttrStrengthenCfg::kNeedLvFieldNumber;
#endif  // !_MSC_VER

AttrStrengthenCfg::AttrStrengthenCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AttrStrengthenCfg::InitAsDefaultInstance() {
}

AttrStrengthenCfg::AttrStrengthenCfg(const AttrStrengthenCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AttrStrengthenCfg::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  level_ = 0u;
  attrval_ = 0u;
  prob_ = 0u;
  costcoin_ = 0u;
  itemid_ = 0u;
  itemcnt_ = 0u;
  needlv_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttrStrengthenCfg::~AttrStrengthenCfg() {
  SharedDtor();
}

void AttrStrengthenCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AttrStrengthenCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AttrStrengthenCfg& AttrStrengthenCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_AttrStrengthenCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_AttrStrengthenCfg_2eproto();
#endif
  return *default_instance_;
}

AttrStrengthenCfg* AttrStrengthenCfg::default_instance_ = NULL;

AttrStrengthenCfg* AttrStrengthenCfg::New() const {
  return new AttrStrengthenCfg;
}

void AttrStrengthenCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    level_ = 0u;
    attrval_ = 0u;
    prob_ = 0u;
    costcoin_ = 0u;
    itemid_ = 0u;
    itemcnt_ = 0u;
    needlv_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AttrStrengthenCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Level;
        break;
      }

      // required uint32 Level = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_AttrVal;
        break;
      }

      // required uint32 AttrVal = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_AttrVal:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &attrval_)));
          set_has_attrval();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_Prob;
        break;
      }

      // required uint32 Prob = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Prob:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prob_)));
          set_has_prob();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_CostCoin;
        break;
      }

      // required uint32 CostCoin = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CostCoin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &costcoin_)));
          set_has_costcoin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_ItemID;
        break;
      }

      // required uint32 ItemID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ItemID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &itemid_)));
          set_has_itemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_ItemCnt;
        break;
      }

      // required uint32 ItemCnt = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ItemCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &itemcnt_)));
          set_has_itemcnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_NeedLv;
        break;
      }

      // required uint32 NeedLv = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NeedLv:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &needlv_)));
          set_has_needlv();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AttrStrengthenCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // required uint32 Level = 2;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->level(), output);
  }

  // required uint32 AttrVal = 3;
  if (has_attrval()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->attrval(), output);
  }

  // required uint32 Prob = 4;
  if (has_prob()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->prob(), output);
  }

  // required uint32 CostCoin = 5;
  if (has_costcoin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->costcoin(), output);
  }

  // required uint32 ItemID = 6;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->itemid(), output);
  }

  // required uint32 ItemCnt = 7;
  if (has_itemcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->itemcnt(), output);
  }

  // required uint32 NeedLv = 8;
  if (has_needlv()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->needlv(), output);
  }

}

int AttrStrengthenCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 Level = 2;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 AttrVal = 3;
    if (has_attrval()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->attrval());
    }

    // required uint32 Prob = 4;
    if (has_prob()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->prob());
    }

    // required uint32 CostCoin = 5;
    if (has_costcoin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->costcoin());
    }

    // required uint32 ItemID = 6;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->itemid());
    }

    // required uint32 ItemCnt = 7;
    if (has_itemcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->itemcnt());
    }

    // required uint32 NeedLv = 8;
    if (has_needlv()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->needlv());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttrStrengthenCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AttrStrengthenCfg*>(&from));
}

void AttrStrengthenCfg::MergeFrom(const AttrStrengthenCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_attrval()) {
      set_attrval(from.attrval());
    }
    if (from.has_prob()) {
      set_prob(from.prob());
    }
    if (from.has_costcoin()) {
      set_costcoin(from.costcoin());
    }
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
    if (from.has_itemcnt()) {
      set_itemcnt(from.itemcnt());
    }
    if (from.has_needlv()) {
      set_needlv(from.needlv());
    }
  }
}

void AttrStrengthenCfg::CopyFrom(const AttrStrengthenCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttrStrengthenCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000ff) != 0x000000ff) return false;

  return true;
}

void AttrStrengthenCfg::Swap(AttrStrengthenCfg* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(level_, other->level_);
    std::swap(attrval_, other->attrval_);
    std::swap(prob_, other->prob_);
    std::swap(costcoin_, other->costcoin_);
    std::swap(itemid_, other->itemid_);
    std::swap(itemcnt_, other->itemcnt_);
    std::swap(needlv_, other->needlv_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AttrStrengthenCfg::GetTypeName() const {
  return "com.cfg.vo.AttrStrengthenCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int AttrStrengthenCfgSet::kAttrstrengthencfgFieldNumber;
#endif  // !_MSC_VER

AttrStrengthenCfgSet::AttrStrengthenCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AttrStrengthenCfgSet::InitAsDefaultInstance() {
}

AttrStrengthenCfgSet::AttrStrengthenCfgSet(const AttrStrengthenCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AttrStrengthenCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttrStrengthenCfgSet::~AttrStrengthenCfgSet() {
  SharedDtor();
}

void AttrStrengthenCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AttrStrengthenCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AttrStrengthenCfgSet& AttrStrengthenCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_AttrStrengthenCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_AttrStrengthenCfg_2eproto();
#endif
  return *default_instance_;
}

AttrStrengthenCfgSet* AttrStrengthenCfgSet::default_instance_ = NULL;

AttrStrengthenCfgSet* AttrStrengthenCfgSet::New() const {
  return new AttrStrengthenCfgSet;
}

void AttrStrengthenCfgSet::Clear() {
  attrstrengthencfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AttrStrengthenCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.AttrStrengthenCfg attrstrengthencfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_attrstrengthencfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_attrstrengthencfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_attrstrengthencfg;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AttrStrengthenCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.AttrStrengthenCfg attrstrengthencfg = 1;
  for (int i = 0; i < this->attrstrengthencfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->attrstrengthencfg(i), output);
  }

}

int AttrStrengthenCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.AttrStrengthenCfg attrstrengthencfg = 1;
  total_size += 1 * this->attrstrengthencfg_size();
  for (int i = 0; i < this->attrstrengthencfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->attrstrengthencfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttrStrengthenCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AttrStrengthenCfgSet*>(&from));
}

void AttrStrengthenCfgSet::MergeFrom(const AttrStrengthenCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  attrstrengthencfg_.MergeFrom(from.attrstrengthencfg_);
}

void AttrStrengthenCfgSet::CopyFrom(const AttrStrengthenCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttrStrengthenCfgSet::IsInitialized() const {

  for (int i = 0; i < attrstrengthencfg_size(); i++) {
    if (!this->attrstrengthencfg(i).IsInitialized()) return false;
  }
  return true;
}

void AttrStrengthenCfgSet::Swap(AttrStrengthenCfgSet* other) {
  if (other != this) {
    attrstrengthencfg_.Swap(&other->attrstrengthencfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AttrStrengthenCfgSet::GetTypeName() const {
  return "com.cfg.vo.AttrStrengthenCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
