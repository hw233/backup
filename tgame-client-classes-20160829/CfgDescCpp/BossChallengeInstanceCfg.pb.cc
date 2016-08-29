// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BossChallengeInstanceCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BossChallengeInstanceCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_BossChallengeInstanceCfg_2eproto() {
  delete BossChallengeCfg::default_instance_;
  delete BossChallengeCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_BossChallengeInstanceCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_BossChallengeInstanceCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  BossChallengeCfg::default_instance_ = new BossChallengeCfg();
  BossChallengeCfgSet::default_instance_ = new BossChallengeCfgSet();
  BossChallengeCfg::default_instance_->InitAsDefaultInstance();
  BossChallengeCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BossChallengeInstanceCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_BossChallengeInstanceCfg_2eproto_once_);
void protobuf_AddDesc_BossChallengeInstanceCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_BossChallengeInstanceCfg_2eproto_once_,
                 &protobuf_AddDesc_BossChallengeInstanceCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BossChallengeInstanceCfg_2eproto {
  StaticDescriptorInitializer_BossChallengeInstanceCfg_2eproto() {
    protobuf_AddDesc_BossChallengeInstanceCfg_2eproto();
  }
} static_descriptor_initializer_BossChallengeInstanceCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BossChallengeCfg::kChallengeTypeFieldNumber;
const int BossChallengeCfg::kTopRankerAwardPkgsFieldNumber;
const int BossChallengeCfg::kAttendeeAwardPkgFieldNumber;
const int BossChallengeCfg::kStartNotifyIDFieldNumber;
const int BossChallengeCfg::kSuccessNotifyIDFieldNumber;
const int BossChallengeCfg::kPrepareNotifyIDFieldNumber;
const int BossChallengeCfg::kFailNotifyIDFieldNumber;
const int BossChallengeCfg::kActNameFieldNumber;
const int BossChallengeCfg::kReliveCostFieldNumber;
const int BossChallengeCfg::kReliveTimeFieldNumber;
const int BossChallengeCfg::kDelegateCostFieldNumber;
#endif  // !_MSC_VER

BossChallengeCfg::BossChallengeCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BossChallengeCfg::InitAsDefaultInstance() {
}

BossChallengeCfg::BossChallengeCfg(const BossChallengeCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BossChallengeCfg::SharedCtor() {
  _cached_size_ = 0;
  challengetype_ = 0u;
  attendeeawardpkg_ = 0u;
  startnotifyid_ = 0u;
  successnotifyid_ = 0u;
  preparenotifyid_ = 0u;
  failnotifyid_ = 0u;
  actname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  relivecost_ = 0u;
  relivetime_ = 0u;
  delegatecost_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BossChallengeCfg::~BossChallengeCfg() {
  SharedDtor();
}

void BossChallengeCfg::SharedDtor() {
  if (actname_ != &::google::protobuf::internal::kEmptyString) {
    delete actname_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BossChallengeCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BossChallengeCfg& BossChallengeCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BossChallengeInstanceCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BossChallengeInstanceCfg_2eproto();
#endif
  return *default_instance_;
}

BossChallengeCfg* BossChallengeCfg::default_instance_ = NULL;

BossChallengeCfg* BossChallengeCfg::New() const {
  return new BossChallengeCfg;
}

void BossChallengeCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    challengetype_ = 0u;
    attendeeawardpkg_ = 0u;
    startnotifyid_ = 0u;
    successnotifyid_ = 0u;
    preparenotifyid_ = 0u;
    failnotifyid_ = 0u;
    if (has_actname()) {
      if (actname_ != &::google::protobuf::internal::kEmptyString) {
        actname_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    relivecost_ = 0u;
    relivetime_ = 0u;
    delegatecost_ = 0u;
  }
  toprankerawardpkgs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BossChallengeCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ChallengeType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &challengetype_)));
          set_has_challengetype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_TopRankerAwardPkgs;
        break;
      }

      // repeated uint32 TopRankerAwardPkgs = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TopRankerAwardPkgs:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 16, input, this->mutable_toprankerawardpkgs())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_toprankerawardpkgs())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_TopRankerAwardPkgs;
        if (input->ExpectTag(24)) goto parse_AttendeeAwardPkg;
        break;
      }

      // required uint32 AttendeeAwardPkg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_AttendeeAwardPkg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &attendeeawardpkg_)));
          set_has_attendeeawardpkg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_StartNotifyID;
        break;
      }

      // required uint32 StartNotifyID = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_StartNotifyID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &startnotifyid_)));
          set_has_startnotifyid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_SuccessNotifyID;
        break;
      }

      // required uint32 SuccessNotifyID = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_SuccessNotifyID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &successnotifyid_)));
          set_has_successnotifyid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_PrepareNotifyID;
        break;
      }

      // required uint32 PrepareNotifyID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_PrepareNotifyID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &preparenotifyid_)));
          set_has_preparenotifyid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_FailNotifyID;
        break;
      }

      // required uint32 FailNotifyID = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_FailNotifyID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &failnotifyid_)));
          set_has_failnotifyid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_ActName;
        break;
      }

      // required string ActName = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ActName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_actname()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_ReliveCost;
        break;
      }

      // required uint32 ReliveCost = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ReliveCost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &relivecost_)));
          set_has_relivecost();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_ReliveTime;
        break;
      }

      // required uint32 ReliveTime = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ReliveTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &relivetime_)));
          set_has_relivetime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_DelegateCost;
        break;
      }

      // required uint32 DelegateCost = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DelegateCost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &delegatecost_)));
          set_has_delegatecost();
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

void BossChallengeCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ChallengeType = 1;
  if (has_challengetype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->challengetype(), output);
  }

  // repeated uint32 TopRankerAwardPkgs = 2;
  for (int i = 0; i < this->toprankerawardpkgs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      2, this->toprankerawardpkgs(i), output);
  }

  // required uint32 AttendeeAwardPkg = 3;
  if (has_attendeeawardpkg()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->attendeeawardpkg(), output);
  }

  // required uint32 StartNotifyID = 4;
  if (has_startnotifyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->startnotifyid(), output);
  }

  // required uint32 SuccessNotifyID = 5;
  if (has_successnotifyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->successnotifyid(), output);
  }

  // required uint32 PrepareNotifyID = 6;
  if (has_preparenotifyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->preparenotifyid(), output);
  }

  // required uint32 FailNotifyID = 7;
  if (has_failnotifyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->failnotifyid(), output);
  }

  // required string ActName = 8;
  if (has_actname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->actname(), output);
  }

  // required uint32 ReliveCost = 9;
  if (has_relivecost()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->relivecost(), output);
  }

  // required uint32 ReliveTime = 10;
  if (has_relivetime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->relivetime(), output);
  }

  // required uint32 DelegateCost = 11;
  if (has_delegatecost()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->delegatecost(), output);
  }

}

int BossChallengeCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ChallengeType = 1;
    if (has_challengetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->challengetype());
    }

    // required uint32 AttendeeAwardPkg = 3;
    if (has_attendeeawardpkg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->attendeeawardpkg());
    }

    // required uint32 StartNotifyID = 4;
    if (has_startnotifyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->startnotifyid());
    }

    // required uint32 SuccessNotifyID = 5;
    if (has_successnotifyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->successnotifyid());
    }

    // required uint32 PrepareNotifyID = 6;
    if (has_preparenotifyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->preparenotifyid());
    }

    // required uint32 FailNotifyID = 7;
    if (has_failnotifyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->failnotifyid());
    }

    // required string ActName = 8;
    if (has_actname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->actname());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 ReliveCost = 9;
    if (has_relivecost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->relivecost());
    }

    // required uint32 ReliveTime = 10;
    if (has_relivetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->relivetime());
    }

    // required uint32 DelegateCost = 11;
    if (has_delegatecost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->delegatecost());
    }

  }
  // repeated uint32 TopRankerAwardPkgs = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->toprankerawardpkgs_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->toprankerawardpkgs(i));
    }
    total_size += 1 * this->toprankerawardpkgs_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BossChallengeCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BossChallengeCfg*>(&from));
}

void BossChallengeCfg::MergeFrom(const BossChallengeCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  toprankerawardpkgs_.MergeFrom(from.toprankerawardpkgs_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_challengetype()) {
      set_challengetype(from.challengetype());
    }
    if (from.has_attendeeawardpkg()) {
      set_attendeeawardpkg(from.attendeeawardpkg());
    }
    if (from.has_startnotifyid()) {
      set_startnotifyid(from.startnotifyid());
    }
    if (from.has_successnotifyid()) {
      set_successnotifyid(from.successnotifyid());
    }
    if (from.has_preparenotifyid()) {
      set_preparenotifyid(from.preparenotifyid());
    }
    if (from.has_failnotifyid()) {
      set_failnotifyid(from.failnotifyid());
    }
    if (from.has_actname()) {
      set_actname(from.actname());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_relivecost()) {
      set_relivecost(from.relivecost());
    }
    if (from.has_relivetime()) {
      set_relivetime(from.relivetime());
    }
    if (from.has_delegatecost()) {
      set_delegatecost(from.delegatecost());
    }
  }
}

void BossChallengeCfg::CopyFrom(const BossChallengeCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BossChallengeCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000007fd) != 0x000007fd) return false;

  return true;
}

void BossChallengeCfg::Swap(BossChallengeCfg* other) {
  if (other != this) {
    std::swap(challengetype_, other->challengetype_);
    toprankerawardpkgs_.Swap(&other->toprankerawardpkgs_);
    std::swap(attendeeawardpkg_, other->attendeeawardpkg_);
    std::swap(startnotifyid_, other->startnotifyid_);
    std::swap(successnotifyid_, other->successnotifyid_);
    std::swap(preparenotifyid_, other->preparenotifyid_);
    std::swap(failnotifyid_, other->failnotifyid_);
    std::swap(actname_, other->actname_);
    std::swap(relivecost_, other->relivecost_);
    std::swap(relivetime_, other->relivetime_);
    std::swap(delegatecost_, other->delegatecost_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BossChallengeCfg::GetTypeName() const {
  return "com.cfg.vo.BossChallengeCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int BossChallengeCfgSet::kBosschallengecfgsetFieldNumber;
#endif  // !_MSC_VER

BossChallengeCfgSet::BossChallengeCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BossChallengeCfgSet::InitAsDefaultInstance() {
}

BossChallengeCfgSet::BossChallengeCfgSet(const BossChallengeCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BossChallengeCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BossChallengeCfgSet::~BossChallengeCfgSet() {
  SharedDtor();
}

void BossChallengeCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BossChallengeCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BossChallengeCfgSet& BossChallengeCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BossChallengeInstanceCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BossChallengeInstanceCfg_2eproto();
#endif
  return *default_instance_;
}

BossChallengeCfgSet* BossChallengeCfgSet::default_instance_ = NULL;

BossChallengeCfgSet* BossChallengeCfgSet::New() const {
  return new BossChallengeCfgSet;
}

void BossChallengeCfgSet::Clear() {
  bosschallengecfgset_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BossChallengeCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.BossChallengeCfg bosschallengecfgset = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bosschallengecfgset:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_bosschallengecfgset()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_bosschallengecfgset;
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

void BossChallengeCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.BossChallengeCfg bosschallengecfgset = 1;
  for (int i = 0; i < this->bosschallengecfgset_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->bosschallengecfgset(i), output);
  }

}

int BossChallengeCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.BossChallengeCfg bosschallengecfgset = 1;
  total_size += 1 * this->bosschallengecfgset_size();
  for (int i = 0; i < this->bosschallengecfgset_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bosschallengecfgset(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BossChallengeCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BossChallengeCfgSet*>(&from));
}

void BossChallengeCfgSet::MergeFrom(const BossChallengeCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  bosschallengecfgset_.MergeFrom(from.bosschallengecfgset_);
}

void BossChallengeCfgSet::CopyFrom(const BossChallengeCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BossChallengeCfgSet::IsInitialized() const {

  for (int i = 0; i < bosschallengecfgset_size(); i++) {
    if (!this->bosschallengecfgset(i).IsInitialized()) return false;
  }
  return true;
}

void BossChallengeCfgSet::Swap(BossChallengeCfgSet* other) {
  if (other != this) {
    bosschallengecfgset_.Swap(&other->bosschallengecfgset_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BossChallengeCfgSet::GetTypeName() const {
  return "com.cfg.vo.BossChallengeCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
