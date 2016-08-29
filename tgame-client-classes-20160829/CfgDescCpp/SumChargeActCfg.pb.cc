// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SumChargeActCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SumChargeActCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_SumChargeActCfg_2eproto() {
  delete SumChargeActCfgElmt::default_instance_;
  delete SumChargeActCfg::default_instance_;
  delete SumChargeActCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_SumChargeActCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_SumChargeActCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SumChargeActCfgElmt::default_instance_ = new SumChargeActCfgElmt();
  SumChargeActCfg::default_instance_ = new SumChargeActCfg();
  SumChargeActCfgSet::default_instance_ = new SumChargeActCfgSet();
  SumChargeActCfgElmt::default_instance_->InitAsDefaultInstance();
  SumChargeActCfg::default_instance_->InitAsDefaultInstance();
  SumChargeActCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SumChargeActCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_SumChargeActCfg_2eproto_once_);
void protobuf_AddDesc_SumChargeActCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_SumChargeActCfg_2eproto_once_,
                 &protobuf_AddDesc_SumChargeActCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SumChargeActCfg_2eproto {
  StaticDescriptorInitializer_SumChargeActCfg_2eproto() {
    protobuf_AddDesc_SumChargeActCfg_2eproto();
  }
} static_descriptor_initializer_SumChargeActCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SumChargeActCfgElmt::kElementTypeFieldNumber;
const int SumChargeActCfgElmt::kElementIDFieldNumber;
const int SumChargeActCfgElmt::kElementCntFieldNumber;
#endif  // !_MSC_VER

SumChargeActCfgElmt::SumChargeActCfgElmt()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SumChargeActCfgElmt::InitAsDefaultInstance() {
}

SumChargeActCfgElmt::SumChargeActCfgElmt(const SumChargeActCfgElmt& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SumChargeActCfgElmt::SharedCtor() {
  _cached_size_ = 0;
  elementtype_ = 0u;
  elementid_ = 0u;
  elementcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SumChargeActCfgElmt::~SumChargeActCfgElmt() {
  SharedDtor();
}

void SumChargeActCfgElmt::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SumChargeActCfgElmt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SumChargeActCfgElmt& SumChargeActCfgElmt::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SumChargeActCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SumChargeActCfg_2eproto();
#endif
  return *default_instance_;
}

SumChargeActCfgElmt* SumChargeActCfgElmt::default_instance_ = NULL;

SumChargeActCfgElmt* SumChargeActCfgElmt::New() const {
  return new SumChargeActCfgElmt;
}

void SumChargeActCfgElmt::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    elementtype_ = 0u;
    elementid_ = 0u;
    elementcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SumChargeActCfgElmt::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ElementType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &elementtype_)));
          set_has_elementtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ElementID;
        break;
      }

      // required uint32 ElementID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ElementID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &elementid_)));
          set_has_elementid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_ElementCnt;
        break;
      }

      // required uint32 ElementCnt = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ElementCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &elementcnt_)));
          set_has_elementcnt();
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

void SumChargeActCfgElmt::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ElementType = 1;
  if (has_elementtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->elementtype(), output);
  }

  // required uint32 ElementID = 2;
  if (has_elementid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->elementid(), output);
  }

  // required uint32 ElementCnt = 3;
  if (has_elementcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->elementcnt(), output);
  }

}

int SumChargeActCfgElmt::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ElementType = 1;
    if (has_elementtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->elementtype());
    }

    // required uint32 ElementID = 2;
    if (has_elementid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->elementid());
    }

    // required uint32 ElementCnt = 3;
    if (has_elementcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->elementcnt());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SumChargeActCfgElmt::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SumChargeActCfgElmt*>(&from));
}

void SumChargeActCfgElmt::MergeFrom(const SumChargeActCfgElmt& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_elementtype()) {
      set_elementtype(from.elementtype());
    }
    if (from.has_elementid()) {
      set_elementid(from.elementid());
    }
    if (from.has_elementcnt()) {
      set_elementcnt(from.elementcnt());
    }
  }
}

void SumChargeActCfgElmt::CopyFrom(const SumChargeActCfgElmt& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SumChargeActCfgElmt::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void SumChargeActCfgElmt::Swap(SumChargeActCfgElmt* other) {
  if (other != this) {
    std::swap(elementtype_, other->elementtype_);
    std::swap(elementid_, other->elementid_);
    std::swap(elementcnt_, other->elementcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SumChargeActCfgElmt::GetTypeName() const {
  return "com.cfg.vo.SumChargeActCfgElmt";
}


// ===================================================================

#ifndef _MSC_VER
const int SumChargeActCfg::kLevelFieldNumber;
const int SumChargeActCfg::kTotalChargeFieldNumber;
const int SumChargeActCfg::kElmtLstFieldNumber;
#endif  // !_MSC_VER

SumChargeActCfg::SumChargeActCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SumChargeActCfg::InitAsDefaultInstance() {
}

SumChargeActCfg::SumChargeActCfg(const SumChargeActCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SumChargeActCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  totalcharge_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SumChargeActCfg::~SumChargeActCfg() {
  SharedDtor();
}

void SumChargeActCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SumChargeActCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SumChargeActCfg& SumChargeActCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SumChargeActCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SumChargeActCfg_2eproto();
#endif
  return *default_instance_;
}

SumChargeActCfg* SumChargeActCfg::default_instance_ = NULL;

SumChargeActCfg* SumChargeActCfg::New() const {
  return new SumChargeActCfg;
}

void SumChargeActCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    totalcharge_ = 0u;
  }
  elmtlst_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SumChargeActCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_TotalCharge;
        break;
      }

      // required uint32 TotalCharge = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TotalCharge:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &totalcharge_)));
          set_has_totalcharge();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtLst;
        break;
      }

      // repeated .com.cfg.vo.SumChargeActCfgElmt ElmtLst = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ElmtLst:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_elmtlst()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtLst;
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

void SumChargeActCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 TotalCharge = 2;
  if (has_totalcharge()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->totalcharge(), output);
  }

  // repeated .com.cfg.vo.SumChargeActCfgElmt ElmtLst = 3;
  for (int i = 0; i < this->elmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->elmtlst(i), output);
  }

}

int SumChargeActCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 TotalCharge = 2;
    if (has_totalcharge()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->totalcharge());
    }

  }
  // repeated .com.cfg.vo.SumChargeActCfgElmt ElmtLst = 3;
  total_size += 1 * this->elmtlst_size();
  for (int i = 0; i < this->elmtlst_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->elmtlst(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SumChargeActCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SumChargeActCfg*>(&from));
}

void SumChargeActCfg::MergeFrom(const SumChargeActCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtlst_.MergeFrom(from.elmtlst_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_totalcharge()) {
      set_totalcharge(from.totalcharge());
    }
  }
}

void SumChargeActCfg::CopyFrom(const SumChargeActCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SumChargeActCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < elmtlst_size(); i++) {
    if (!this->elmtlst(i).IsInitialized()) return false;
  }
  return true;
}

void SumChargeActCfg::Swap(SumChargeActCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(totalcharge_, other->totalcharge_);
    elmtlst_.Swap(&other->elmtlst_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SumChargeActCfg::GetTypeName() const {
  return "com.cfg.vo.SumChargeActCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int SumChargeActCfgSet::kSumChargeActCfgFieldNumber;
#endif  // !_MSC_VER

SumChargeActCfgSet::SumChargeActCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SumChargeActCfgSet::InitAsDefaultInstance() {
}

SumChargeActCfgSet::SumChargeActCfgSet(const SumChargeActCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SumChargeActCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SumChargeActCfgSet::~SumChargeActCfgSet() {
  SharedDtor();
}

void SumChargeActCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SumChargeActCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SumChargeActCfgSet& SumChargeActCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SumChargeActCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SumChargeActCfg_2eproto();
#endif
  return *default_instance_;
}

SumChargeActCfgSet* SumChargeActCfgSet::default_instance_ = NULL;

SumChargeActCfgSet* SumChargeActCfgSet::New() const {
  return new SumChargeActCfgSet;
}

void SumChargeActCfgSet::Clear() {
  sumchargeactcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SumChargeActCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.SumChargeActCfg sumChargeActCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sumChargeActCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_sumchargeactcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_sumChargeActCfg;
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

void SumChargeActCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.SumChargeActCfg sumChargeActCfg = 1;
  for (int i = 0; i < this->sumchargeactcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->sumchargeactcfg(i), output);
  }

}

int SumChargeActCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.SumChargeActCfg sumChargeActCfg = 1;
  total_size += 1 * this->sumchargeactcfg_size();
  for (int i = 0; i < this->sumchargeactcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->sumchargeactcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SumChargeActCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SumChargeActCfgSet*>(&from));
}

void SumChargeActCfgSet::MergeFrom(const SumChargeActCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  sumchargeactcfg_.MergeFrom(from.sumchargeactcfg_);
}

void SumChargeActCfgSet::CopyFrom(const SumChargeActCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SumChargeActCfgSet::IsInitialized() const {

  for (int i = 0; i < sumchargeactcfg_size(); i++) {
    if (!this->sumchargeactcfg(i).IsInitialized()) return false;
  }
  return true;
}

void SumChargeActCfgSet::Swap(SumChargeActCfgSet* other) {
  if (other != this) {
    sumchargeactcfg_.Swap(&other->sumchargeactcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SumChargeActCfgSet::GetTypeName() const {
  return "com.cfg.vo.SumChargeActCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
