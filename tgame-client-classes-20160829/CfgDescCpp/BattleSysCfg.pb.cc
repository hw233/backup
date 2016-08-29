// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattleSysCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BattleSysCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_BattleSysCfg_2eproto() {
  delete BattleSysCfg::default_instance_;
  delete BattleSysCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_BattleSysCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_BattleSysCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  BattleSysCfg::default_instance_ = new BattleSysCfg();
  BattleSysCfgSet::default_instance_ = new BattleSysCfgSet();
  BattleSysCfg::default_instance_->InitAsDefaultInstance();
  BattleSysCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BattleSysCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_BattleSysCfg_2eproto_once_);
void protobuf_AddDesc_BattleSysCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_BattleSysCfg_2eproto_once_,
                 &protobuf_AddDesc_BattleSysCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BattleSysCfg_2eproto {
  StaticDescriptorInitializer_BattleSysCfg_2eproto() {
    protobuf_AddDesc_BattleSysCfg_2eproto();
  }
} static_descriptor_initializer_BattleSysCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BattleSysCfg::kCfgIDFieldNumber;
const int BattleSysCfg::kTargetDefAdjustFieldNumber;
const int BattleSysCfg::kDamageAdjustRatioFieldNumber;
#endif  // !_MSC_VER

BattleSysCfg::BattleSysCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BattleSysCfg::InitAsDefaultInstance() {
}

BattleSysCfg::BattleSysCfg(const BattleSysCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BattleSysCfg::SharedCtor() {
  _cached_size_ = 0;
  cfgid_ = 0u;
  targetdefadjust_ = 0u;
  damageadjustratio_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattleSysCfg::~BattleSysCfg() {
  SharedDtor();
}

void BattleSysCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BattleSysCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BattleSysCfg& BattleSysCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BattleSysCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BattleSysCfg_2eproto();
#endif
  return *default_instance_;
}

BattleSysCfg* BattleSysCfg::default_instance_ = NULL;

BattleSysCfg* BattleSysCfg::New() const {
  return new BattleSysCfg;
}

void BattleSysCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cfgid_ = 0u;
    targetdefadjust_ = 0u;
    damageadjustratio_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BattleSysCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 CfgID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cfgid_)));
          set_has_cfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_TargetDefAdjust;
        break;
      }

      // required uint32 TargetDefAdjust = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TargetDefAdjust:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &targetdefadjust_)));
          set_has_targetdefadjust();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_DamageAdjustRatio;
        break;
      }

      // required uint32 DamageAdjustRatio = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DamageAdjustRatio:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &damageadjustratio_)));
          set_has_damageadjustratio();
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

void BattleSysCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 CfgID = 1;
  if (has_cfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->cfgid(), output);
  }

  // required uint32 TargetDefAdjust = 2;
  if (has_targetdefadjust()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->targetdefadjust(), output);
  }

  // required uint32 DamageAdjustRatio = 3;
  if (has_damageadjustratio()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->damageadjustratio(), output);
  }

}

int BattleSysCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 CfgID = 1;
    if (has_cfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cfgid());
    }

    // required uint32 TargetDefAdjust = 2;
    if (has_targetdefadjust()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->targetdefadjust());
    }

    // required uint32 DamageAdjustRatio = 3;
    if (has_damageadjustratio()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->damageadjustratio());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BattleSysCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BattleSysCfg*>(&from));
}

void BattleSysCfg::MergeFrom(const BattleSysCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cfgid()) {
      set_cfgid(from.cfgid());
    }
    if (from.has_targetdefadjust()) {
      set_targetdefadjust(from.targetdefadjust());
    }
    if (from.has_damageadjustratio()) {
      set_damageadjustratio(from.damageadjustratio());
    }
  }
}

void BattleSysCfg::CopyFrom(const BattleSysCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleSysCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void BattleSysCfg::Swap(BattleSysCfg* other) {
  if (other != this) {
    std::swap(cfgid_, other->cfgid_);
    std::swap(targetdefadjust_, other->targetdefadjust_);
    std::swap(damageadjustratio_, other->damageadjustratio_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BattleSysCfg::GetTypeName() const {
  return "com.cfg.vo.BattleSysCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int BattleSysCfgSet::kBattleCfgFieldNumber;
#endif  // !_MSC_VER

BattleSysCfgSet::BattleSysCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BattleSysCfgSet::InitAsDefaultInstance() {
}

BattleSysCfgSet::BattleSysCfgSet(const BattleSysCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BattleSysCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattleSysCfgSet::~BattleSysCfgSet() {
  SharedDtor();
}

void BattleSysCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BattleSysCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BattleSysCfgSet& BattleSysCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BattleSysCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BattleSysCfg_2eproto();
#endif
  return *default_instance_;
}

BattleSysCfgSet* BattleSysCfgSet::default_instance_ = NULL;

BattleSysCfgSet* BattleSysCfgSet::New() const {
  return new BattleSysCfgSet;
}

void BattleSysCfgSet::Clear() {
  battlecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BattleSysCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.BattleSysCfg BattleCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_BattleCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_battlecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_BattleCfg;
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

void BattleSysCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.BattleSysCfg BattleCfg = 1;
  for (int i = 0; i < this->battlecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->battlecfg(i), output);
  }

}

int BattleSysCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.BattleSysCfg BattleCfg = 1;
  total_size += 1 * this->battlecfg_size();
  for (int i = 0; i < this->battlecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->battlecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BattleSysCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BattleSysCfgSet*>(&from));
}

void BattleSysCfgSet::MergeFrom(const BattleSysCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  battlecfg_.MergeFrom(from.battlecfg_);
}

void BattleSysCfgSet::CopyFrom(const BattleSysCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleSysCfgSet::IsInitialized() const {

  for (int i = 0; i < battlecfg_size(); i++) {
    if (!this->battlecfg(i).IsInitialized()) return false;
  }
  return true;
}

void BattleSysCfgSet::Swap(BattleSysCfgSet* other) {
  if (other != this) {
    battlecfg_.Swap(&other->battlecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BattleSysCfgSet::GetTypeName() const {
  return "com.cfg.vo.BattleSysCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
