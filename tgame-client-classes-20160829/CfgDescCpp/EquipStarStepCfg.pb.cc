// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EquipStarStepCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EquipStarStepCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_EquipStarStepCfg_2eproto() {
  delete EquipNeeds::default_instance_;
  delete EquipStarStepCfg::default_instance_;
  delete EquipStarStepCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_EquipStarStepCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_EquipStarStepCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  EquipNeeds::default_instance_ = new EquipNeeds();
  EquipStarStepCfg::default_instance_ = new EquipStarStepCfg();
  EquipStarStepCfgSet::default_instance_ = new EquipStarStepCfgSet();
  EquipNeeds::default_instance_->InitAsDefaultInstance();
  EquipStarStepCfg::default_instance_->InitAsDefaultInstance();
  EquipStarStepCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EquipStarStepCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_EquipStarStepCfg_2eproto_once_);
void protobuf_AddDesc_EquipStarStepCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_EquipStarStepCfg_2eproto_once_,
                 &protobuf_AddDesc_EquipStarStepCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EquipStarStepCfg_2eproto {
  StaticDescriptorInitializer_EquipStarStepCfg_2eproto() {
    protobuf_AddDesc_EquipStarStepCfg_2eproto();
  }
} static_descriptor_initializer_EquipStarStepCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int EquipNeeds::kTypeFieldNumber;
const int EquipNeeds::kCfgIDFieldNumber;
const int EquipNeeds::kCfgCntFieldNumber;
#endif  // !_MSC_VER

EquipNeeds::EquipNeeds()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EquipNeeds::InitAsDefaultInstance() {
}

EquipNeeds::EquipNeeds(const EquipNeeds& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EquipNeeds::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  cfgid_ = 0u;
  cfgcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EquipNeeds::~EquipNeeds() {
  SharedDtor();
}

void EquipNeeds::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EquipNeeds::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EquipNeeds& EquipNeeds::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EquipStarStepCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EquipStarStepCfg_2eproto();
#endif
  return *default_instance_;
}

EquipNeeds* EquipNeeds::default_instance_ = NULL;

EquipNeeds* EquipNeeds::New() const {
  return new EquipNeeds;
}

void EquipNeeds::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    cfgid_ = 0u;
    cfgcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EquipNeeds::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_CfgID;
        break;
      }

      // required uint32 CfgID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CfgID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cfgid_)));
          set_has_cfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_CfgCnt;
        break;
      }

      // required uint32 CfgCnt = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CfgCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cfgcnt_)));
          set_has_cfgcnt();
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

void EquipNeeds::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // required uint32 CfgID = 2;
  if (has_cfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cfgid(), output);
  }

  // required uint32 CfgCnt = 3;
  if (has_cfgcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->cfgcnt(), output);
  }

}

int EquipNeeds::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 CfgID = 2;
    if (has_cfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cfgid());
    }

    // required uint32 CfgCnt = 3;
    if (has_cfgcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cfgcnt());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EquipNeeds::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EquipNeeds*>(&from));
}

void EquipNeeds::MergeFrom(const EquipNeeds& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_cfgid()) {
      set_cfgid(from.cfgid());
    }
    if (from.has_cfgcnt()) {
      set_cfgcnt(from.cfgcnt());
    }
  }
}

void EquipNeeds::CopyFrom(const EquipNeeds& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EquipNeeds::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void EquipNeeds::Swap(EquipNeeds* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(cfgid_, other->cfgid_);
    std::swap(cfgcnt_, other->cfgcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EquipNeeds::GetTypeName() const {
  return "com.cfg.vo.EquipNeeds";
}


// ===================================================================

#ifndef _MSC_VER
const int EquipStarStepCfg::kStarFieldNumber;
const int EquipStarStepCfg::kStepFieldNumber;
const int EquipStarStepCfg::kNextStarFieldNumber;
const int EquipStarStepCfg::kNextStepFieldNumber;
const int EquipStarStepCfg::kNeedLevelFieldNumber;
const int EquipStarStepCfg::kNeedsFieldNumber;
const int EquipStarStepCfg::kNeedEquipCntFieldNumber;
const int EquipStarStepCfg::kCostCoinFieldNumber;
#endif  // !_MSC_VER

EquipStarStepCfg::EquipStarStepCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EquipStarStepCfg::InitAsDefaultInstance() {
}

EquipStarStepCfg::EquipStarStepCfg(const EquipStarStepCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EquipStarStepCfg::SharedCtor() {
  _cached_size_ = 0;
  star_ = 0u;
  step_ = 0u;
  nextstar_ = 0u;
  nextstep_ = 0u;
  needlevel_ = 0u;
  needequipcnt_ = 0u;
  costcoin_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EquipStarStepCfg::~EquipStarStepCfg() {
  SharedDtor();
}

void EquipStarStepCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EquipStarStepCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EquipStarStepCfg& EquipStarStepCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EquipStarStepCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EquipStarStepCfg_2eproto();
#endif
  return *default_instance_;
}

EquipStarStepCfg* EquipStarStepCfg::default_instance_ = NULL;

EquipStarStepCfg* EquipStarStepCfg::New() const {
  return new EquipStarStepCfg;
}

void EquipStarStepCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    star_ = 0u;
    step_ = 0u;
    nextstar_ = 0u;
    nextstep_ = 0u;
    needlevel_ = 0u;
    needequipcnt_ = 0u;
    costcoin_ = 0u;
  }
  needs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EquipStarStepCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Star = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star_)));
          set_has_star();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Step;
        break;
      }

      // required uint32 Step = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Step:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &step_)));
          set_has_step();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_NextStar;
        break;
      }

      // required uint32 NextStar = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NextStar:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &nextstar_)));
          set_has_nextstar();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_NextStep;
        break;
      }

      // required uint32 NextStep = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NextStep:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &nextstep_)));
          set_has_nextstep();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_NeedLevel;
        break;
      }

      // required uint32 NeedLevel = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NeedLevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &needlevel_)));
          set_has_needlevel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_Needs;
        break;
      }

      // repeated .com.cfg.vo.EquipNeeds Needs = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Needs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_needs()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_Needs;
        if (input->ExpectTag(56)) goto parse_NeedEquipCnt;
        break;
      }

      // required uint32 NeedEquipCnt = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NeedEquipCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &needequipcnt_)));
          set_has_needequipcnt();
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

void EquipStarStepCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Star = 1;
  if (has_star()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->star(), output);
  }

  // required uint32 Step = 2;
  if (has_step()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->step(), output);
  }

  // required uint32 NextStar = 3;
  if (has_nextstar()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->nextstar(), output);
  }

  // required uint32 NextStep = 4;
  if (has_nextstep()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->nextstep(), output);
  }

  // required uint32 NeedLevel = 5;
  if (has_needlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->needlevel(), output);
  }

  // repeated .com.cfg.vo.EquipNeeds Needs = 6;
  for (int i = 0; i < this->needs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, this->needs(i), output);
  }

  // required uint32 NeedEquipCnt = 7;
  if (has_needequipcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->needequipcnt(), output);
  }

  // required uint32 CostCoin = 8;
  if (has_costcoin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->costcoin(), output);
  }

}

int EquipStarStepCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Star = 1;
    if (has_star()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star());
    }

    // required uint32 Step = 2;
    if (has_step()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->step());
    }

    // required uint32 NextStar = 3;
    if (has_nextstar()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->nextstar());
    }

    // required uint32 NextStep = 4;
    if (has_nextstep()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->nextstep());
    }

    // required uint32 NeedLevel = 5;
    if (has_needlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->needlevel());
    }

    // required uint32 NeedEquipCnt = 7;
    if (has_needequipcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->needequipcnt());
    }

    // required uint32 CostCoin = 8;
    if (has_costcoin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->costcoin());
    }

  }
  // repeated .com.cfg.vo.EquipNeeds Needs = 6;
  total_size += 1 * this->needs_size();
  for (int i = 0; i < this->needs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->needs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EquipStarStepCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EquipStarStepCfg*>(&from));
}

void EquipStarStepCfg::MergeFrom(const EquipStarStepCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  needs_.MergeFrom(from.needs_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_star()) {
      set_star(from.star());
    }
    if (from.has_step()) {
      set_step(from.step());
    }
    if (from.has_nextstar()) {
      set_nextstar(from.nextstar());
    }
    if (from.has_nextstep()) {
      set_nextstep(from.nextstep());
    }
    if (from.has_needlevel()) {
      set_needlevel(from.needlevel());
    }
    if (from.has_needequipcnt()) {
      set_needequipcnt(from.needequipcnt());
    }
    if (from.has_costcoin()) {
      set_costcoin(from.costcoin());
    }
  }
}

void EquipStarStepCfg::CopyFrom(const EquipStarStepCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EquipStarStepCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000df) != 0x000000df) return false;

  for (int i = 0; i < needs_size(); i++) {
    if (!this->needs(i).IsInitialized()) return false;
  }
  return true;
}

void EquipStarStepCfg::Swap(EquipStarStepCfg* other) {
  if (other != this) {
    std::swap(star_, other->star_);
    std::swap(step_, other->step_);
    std::swap(nextstar_, other->nextstar_);
    std::swap(nextstep_, other->nextstep_);
    std::swap(needlevel_, other->needlevel_);
    needs_.Swap(&other->needs_);
    std::swap(needequipcnt_, other->needequipcnt_);
    std::swap(costcoin_, other->costcoin_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EquipStarStepCfg::GetTypeName() const {
  return "com.cfg.vo.EquipStarStepCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int EquipStarStepCfgSet::kEquipstarstepcfgFieldNumber;
#endif  // !_MSC_VER

EquipStarStepCfgSet::EquipStarStepCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EquipStarStepCfgSet::InitAsDefaultInstance() {
}

EquipStarStepCfgSet::EquipStarStepCfgSet(const EquipStarStepCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EquipStarStepCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EquipStarStepCfgSet::~EquipStarStepCfgSet() {
  SharedDtor();
}

void EquipStarStepCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EquipStarStepCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EquipStarStepCfgSet& EquipStarStepCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EquipStarStepCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EquipStarStepCfg_2eproto();
#endif
  return *default_instance_;
}

EquipStarStepCfgSet* EquipStarStepCfgSet::default_instance_ = NULL;

EquipStarStepCfgSet* EquipStarStepCfgSet::New() const {
  return new EquipStarStepCfgSet;
}

void EquipStarStepCfgSet::Clear() {
  equipstarstepcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EquipStarStepCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.EquipStarStepCfg equipstarstepcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_equipstarstepcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_equipstarstepcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_equipstarstepcfg;
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

void EquipStarStepCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.EquipStarStepCfg equipstarstepcfg = 1;
  for (int i = 0; i < this->equipstarstepcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->equipstarstepcfg(i), output);
  }

}

int EquipStarStepCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.EquipStarStepCfg equipstarstepcfg = 1;
  total_size += 1 * this->equipstarstepcfg_size();
  for (int i = 0; i < this->equipstarstepcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->equipstarstepcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EquipStarStepCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EquipStarStepCfgSet*>(&from));
}

void EquipStarStepCfgSet::MergeFrom(const EquipStarStepCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  equipstarstepcfg_.MergeFrom(from.equipstarstepcfg_);
}

void EquipStarStepCfgSet::CopyFrom(const EquipStarStepCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EquipStarStepCfgSet::IsInitialized() const {

  for (int i = 0; i < equipstarstepcfg_size(); i++) {
    if (!this->equipstarstepcfg(i).IsInitialized()) return false;
  }
  return true;
}

void EquipStarStepCfgSet::Swap(EquipStarStepCfgSet* other) {
  if (other != this) {
    equipstarstepcfg_.Swap(&other->equipstarstepcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EquipStarStepCfgSet::GetTypeName() const {
  return "com.cfg.vo.EquipStarStepCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
