// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DotaLvCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DotaLvCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_DotaLvCfg_2eproto() {
  delete DotaLvUpNeed::default_instance_;
  delete DotaLvCfg::default_instance_;
  delete DotaLvCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_DotaLvCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_DotaLvCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  DotaLvUpNeed::default_instance_ = new DotaLvUpNeed();
  DotaLvCfg::default_instance_ = new DotaLvCfg();
  DotaLvCfgSet::default_instance_ = new DotaLvCfgSet();
  DotaLvUpNeed::default_instance_->InitAsDefaultInstance();
  DotaLvCfg::default_instance_->InitAsDefaultInstance();
  DotaLvCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DotaLvCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_DotaLvCfg_2eproto_once_);
void protobuf_AddDesc_DotaLvCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_DotaLvCfg_2eproto_once_,
                 &protobuf_AddDesc_DotaLvCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DotaLvCfg_2eproto {
  StaticDescriptorInitializer_DotaLvCfg_2eproto() {
    protobuf_AddDesc_DotaLvCfg_2eproto();
  }
} static_descriptor_initializer_DotaLvCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int DotaLvUpNeed::kDotaItemIDFieldNumber;
const int DotaLvUpNeed::kDotaItemCntFieldNumber;
#endif  // !_MSC_VER

DotaLvUpNeed::DotaLvUpNeed()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DotaLvUpNeed::InitAsDefaultInstance() {
}

DotaLvUpNeed::DotaLvUpNeed(const DotaLvUpNeed& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DotaLvUpNeed::SharedCtor() {
  _cached_size_ = 0;
  dotaitemid_ = 0u;
  dotaitemcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DotaLvUpNeed::~DotaLvUpNeed() {
  SharedDtor();
}

void DotaLvUpNeed::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DotaLvUpNeed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DotaLvUpNeed& DotaLvUpNeed::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DotaLvCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DotaLvCfg_2eproto();
#endif
  return *default_instance_;
}

DotaLvUpNeed* DotaLvUpNeed::default_instance_ = NULL;

DotaLvUpNeed* DotaLvUpNeed::New() const {
  return new DotaLvUpNeed;
}

void DotaLvUpNeed::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    dotaitemid_ = 0u;
    dotaitemcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DotaLvUpNeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 DotaItemID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dotaitemid_)));
          set_has_dotaitemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_DotaItemCnt;
        break;
      }

      // required uint32 DotaItemCnt = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DotaItemCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dotaitemcnt_)));
          set_has_dotaitemcnt();
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

void DotaLvUpNeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 DotaItemID = 1;
  if (has_dotaitemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dotaitemid(), output);
  }

  // required uint32 DotaItemCnt = 2;
  if (has_dotaitemcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->dotaitemcnt(), output);
  }

}

int DotaLvUpNeed::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 DotaItemID = 1;
    if (has_dotaitemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dotaitemid());
    }

    // required uint32 DotaItemCnt = 2;
    if (has_dotaitemcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dotaitemcnt());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DotaLvUpNeed::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DotaLvUpNeed*>(&from));
}

void DotaLvUpNeed::MergeFrom(const DotaLvUpNeed& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dotaitemid()) {
      set_dotaitemid(from.dotaitemid());
    }
    if (from.has_dotaitemcnt()) {
      set_dotaitemcnt(from.dotaitemcnt());
    }
  }
}

void DotaLvUpNeed::CopyFrom(const DotaLvUpNeed& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DotaLvUpNeed::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void DotaLvUpNeed::Swap(DotaLvUpNeed* other) {
  if (other != this) {
    std::swap(dotaitemid_, other->dotaitemid_);
    std::swap(dotaitemcnt_, other->dotaitemcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DotaLvUpNeed::GetTypeName() const {
  return "com.cfg.vo.DotaLvUpNeed";
}


// ===================================================================

#ifndef _MSC_VER
const int DotaLvCfg::kDotaLvFieldNumber;
const int DotaLvCfg::kDotaPartFieldNumber;
const int DotaLvCfg::kDotaLvUpNeedsFieldNumber;
const int DotaLvCfg::kATKFieldNumber;
const int DotaLvCfg::kDEFFieldNumber;
const int DotaLvCfg::kHPFieldNumber;
const int DotaLvCfg::kHITFieldNumber;
const int DotaLvCfg::kCostCoinFieldNumber;
#endif  // !_MSC_VER

DotaLvCfg::DotaLvCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DotaLvCfg::InitAsDefaultInstance() {
}

DotaLvCfg::DotaLvCfg(const DotaLvCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DotaLvCfg::SharedCtor() {
  _cached_size_ = 0;
  dotalv_ = 0u;
  dotapart_ = 0u;
  atk_ = 0u;
  def_ = 0u;
  hp_ = 0u;
  hit_ = 0u;
  costcoin_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DotaLvCfg::~DotaLvCfg() {
  SharedDtor();
}

void DotaLvCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DotaLvCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DotaLvCfg& DotaLvCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DotaLvCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DotaLvCfg_2eproto();
#endif
  return *default_instance_;
}

DotaLvCfg* DotaLvCfg::default_instance_ = NULL;

DotaLvCfg* DotaLvCfg::New() const {
  return new DotaLvCfg;
}

void DotaLvCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    dotalv_ = 0u;
    dotapart_ = 0u;
    atk_ = 0u;
    def_ = 0u;
    hp_ = 0u;
    hit_ = 0u;
    costcoin_ = 0u;
  }
  dotalvupneeds_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DotaLvCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 DotaLv = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dotalv_)));
          set_has_dotalv();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_DotaPart;
        break;
      }

      // required uint32 DotaPart = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DotaPart:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dotapart_)));
          set_has_dotapart();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_DotaLvUpNeeds;
        break;
      }

      // repeated .com.cfg.vo.DotaLvUpNeed DotaLvUpNeeds = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DotaLvUpNeeds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_dotalvupneeds()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_DotaLvUpNeeds;
        if (input->ExpectTag(32)) goto parse_ATK;
        break;
      }

      // required uint32 ATK = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ATK:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &atk_)));
          set_has_atk();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_DEF;
        break;
      }

      // required uint32 DEF = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DEF:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &def_)));
          set_has_def();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_HP;
        break;
      }

      // required uint32 HP = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hp_)));
          set_has_hp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_HIT;
        break;
      }

      // required uint32 HIT = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HIT:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hit_)));
          set_has_hit();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_CostCoin;
        break;
      }

      // required uint32 CostCoin = 8;
      case 8: {
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

void DotaLvCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 DotaLv = 1;
  if (has_dotalv()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dotalv(), output);
  }

  // required uint32 DotaPart = 2;
  if (has_dotapart()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->dotapart(), output);
  }

  // repeated .com.cfg.vo.DotaLvUpNeed DotaLvUpNeeds = 3;
  for (int i = 0; i < this->dotalvupneeds_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->dotalvupneeds(i), output);
  }

  // required uint32 ATK = 4;
  if (has_atk()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->atk(), output);
  }

  // required uint32 DEF = 5;
  if (has_def()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->def(), output);
  }

  // required uint32 HP = 6;
  if (has_hp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->hp(), output);
  }

  // required uint32 HIT = 7;
  if (has_hit()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->hit(), output);
  }

  // required uint32 CostCoin = 8;
  if (has_costcoin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->costcoin(), output);
  }

}

int DotaLvCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 DotaLv = 1;
    if (has_dotalv()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dotalv());
    }

    // required uint32 DotaPart = 2;
    if (has_dotapart()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dotapart());
    }

    // required uint32 ATK = 4;
    if (has_atk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->atk());
    }

    // required uint32 DEF = 5;
    if (has_def()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->def());
    }

    // required uint32 HP = 6;
    if (has_hp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hp());
    }

    // required uint32 HIT = 7;
    if (has_hit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hit());
    }

    // required uint32 CostCoin = 8;
    if (has_costcoin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->costcoin());
    }

  }
  // repeated .com.cfg.vo.DotaLvUpNeed DotaLvUpNeeds = 3;
  total_size += 1 * this->dotalvupneeds_size();
  for (int i = 0; i < this->dotalvupneeds_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->dotalvupneeds(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DotaLvCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DotaLvCfg*>(&from));
}

void DotaLvCfg::MergeFrom(const DotaLvCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  dotalvupneeds_.MergeFrom(from.dotalvupneeds_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dotalv()) {
      set_dotalv(from.dotalv());
    }
    if (from.has_dotapart()) {
      set_dotapart(from.dotapart());
    }
    if (from.has_atk()) {
      set_atk(from.atk());
    }
    if (from.has_def()) {
      set_def(from.def());
    }
    if (from.has_hp()) {
      set_hp(from.hp());
    }
    if (from.has_hit()) {
      set_hit(from.hit());
    }
    if (from.has_costcoin()) {
      set_costcoin(from.costcoin());
    }
  }
}

void DotaLvCfg::CopyFrom(const DotaLvCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DotaLvCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000fb) != 0x000000fb) return false;

  for (int i = 0; i < dotalvupneeds_size(); i++) {
    if (!this->dotalvupneeds(i).IsInitialized()) return false;
  }
  return true;
}

void DotaLvCfg::Swap(DotaLvCfg* other) {
  if (other != this) {
    std::swap(dotalv_, other->dotalv_);
    std::swap(dotapart_, other->dotapart_);
    dotalvupneeds_.Swap(&other->dotalvupneeds_);
    std::swap(atk_, other->atk_);
    std::swap(def_, other->def_);
    std::swap(hp_, other->hp_);
    std::swap(hit_, other->hit_);
    std::swap(costcoin_, other->costcoin_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DotaLvCfg::GetTypeName() const {
  return "com.cfg.vo.DotaLvCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int DotaLvCfgSet::kDotalvcfgFieldNumber;
#endif  // !_MSC_VER

DotaLvCfgSet::DotaLvCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DotaLvCfgSet::InitAsDefaultInstance() {
}

DotaLvCfgSet::DotaLvCfgSet(const DotaLvCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DotaLvCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DotaLvCfgSet::~DotaLvCfgSet() {
  SharedDtor();
}

void DotaLvCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DotaLvCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DotaLvCfgSet& DotaLvCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DotaLvCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DotaLvCfg_2eproto();
#endif
  return *default_instance_;
}

DotaLvCfgSet* DotaLvCfgSet::default_instance_ = NULL;

DotaLvCfgSet* DotaLvCfgSet::New() const {
  return new DotaLvCfgSet;
}

void DotaLvCfgSet::Clear() {
  dotalvcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DotaLvCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.DotaLvCfg dotalvcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dotalvcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_dotalvcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_dotalvcfg;
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

void DotaLvCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.DotaLvCfg dotalvcfg = 1;
  for (int i = 0; i < this->dotalvcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->dotalvcfg(i), output);
  }

}

int DotaLvCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.DotaLvCfg dotalvcfg = 1;
  total_size += 1 * this->dotalvcfg_size();
  for (int i = 0; i < this->dotalvcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->dotalvcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DotaLvCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DotaLvCfgSet*>(&from));
}

void DotaLvCfgSet::MergeFrom(const DotaLvCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  dotalvcfg_.MergeFrom(from.dotalvcfg_);
}

void DotaLvCfgSet::CopyFrom(const DotaLvCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DotaLvCfgSet::IsInitialized() const {

  for (int i = 0; i < dotalvcfg_size(); i++) {
    if (!this->dotalvcfg(i).IsInitialized()) return false;
  }
  return true;
}

void DotaLvCfgSet::Swap(DotaLvCfgSet* other) {
  if (other != this) {
    dotalvcfg_.Swap(&other->dotalvcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DotaLvCfgSet::GetTypeName() const {
  return "com.cfg.vo.DotaLvCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
