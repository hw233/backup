// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DailyLoginAwardCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DailyLoginAwardCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto() {
  delete DailyLoginAwardElmt::default_instance_;
  delete DailyLoginAwardCfg::default_instance_;
  delete DailyLoginAwardCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_DailyLoginAwardCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_DailyLoginAwardCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  DailyLoginAwardElmt::default_instance_ = new DailyLoginAwardElmt();
  DailyLoginAwardCfg::default_instance_ = new DailyLoginAwardCfg();
  DailyLoginAwardCfgSet::default_instance_ = new DailyLoginAwardCfgSet();
  DailyLoginAwardElmt::default_instance_->InitAsDefaultInstance();
  DailyLoginAwardCfg::default_instance_->InitAsDefaultInstance();
  DailyLoginAwardCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_DailyLoginAwardCfg_2eproto_once_);
void protobuf_AddDesc_DailyLoginAwardCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_DailyLoginAwardCfg_2eproto_once_,
                 &protobuf_AddDesc_DailyLoginAwardCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DailyLoginAwardCfg_2eproto {
  StaticDescriptorInitializer_DailyLoginAwardCfg_2eproto() {
    protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
  }
} static_descriptor_initializer_DailyLoginAwardCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int DailyLoginAwardElmt::kElementTypeFieldNumber;
const int DailyLoginAwardElmt::kElementIDFieldNumber;
const int DailyLoginAwardElmt::kElementCntFieldNumber;
#endif  // !_MSC_VER

DailyLoginAwardElmt::DailyLoginAwardElmt()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DailyLoginAwardElmt::InitAsDefaultInstance() {
}

DailyLoginAwardElmt::DailyLoginAwardElmt(const DailyLoginAwardElmt& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DailyLoginAwardElmt::SharedCtor() {
  _cached_size_ = 0;
  elementtype_ = 0u;
  elementid_ = 0u;
  elementcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DailyLoginAwardElmt::~DailyLoginAwardElmt() {
  SharedDtor();
}

void DailyLoginAwardElmt::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DailyLoginAwardElmt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DailyLoginAwardElmt& DailyLoginAwardElmt::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#endif
  return *default_instance_;
}

DailyLoginAwardElmt* DailyLoginAwardElmt::default_instance_ = NULL;

DailyLoginAwardElmt* DailyLoginAwardElmt::New() const {
  return new DailyLoginAwardElmt;
}

void DailyLoginAwardElmt::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    elementtype_ = 0u;
    elementid_ = 0u;
    elementcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DailyLoginAwardElmt::MergePartialFromCodedStream(
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

void DailyLoginAwardElmt::SerializeWithCachedSizes(
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

int DailyLoginAwardElmt::ByteSize() const {
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

void DailyLoginAwardElmt::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DailyLoginAwardElmt*>(&from));
}

void DailyLoginAwardElmt::MergeFrom(const DailyLoginAwardElmt& from) {
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

void DailyLoginAwardElmt::CopyFrom(const DailyLoginAwardElmt& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DailyLoginAwardElmt::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void DailyLoginAwardElmt::Swap(DailyLoginAwardElmt* other) {
  if (other != this) {
    std::swap(elementtype_, other->elementtype_);
    std::swap(elementid_, other->elementid_);
    std::swap(elementcnt_, other->elementcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DailyLoginAwardElmt::GetTypeName() const {
  return "com.cfg.vo.DailyLoginAwardElmt";
}


// ===================================================================

#ifndef _MSC_VER
const int DailyLoginAwardCfg::kDayFieldNumber;
const int DailyLoginAwardCfg::kAwardTypeFieldNumber;
const int DailyLoginAwardCfg::kElmtLstFieldNumber;
#endif  // !_MSC_VER

DailyLoginAwardCfg::DailyLoginAwardCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DailyLoginAwardCfg::InitAsDefaultInstance() {
}

DailyLoginAwardCfg::DailyLoginAwardCfg(const DailyLoginAwardCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DailyLoginAwardCfg::SharedCtor() {
  _cached_size_ = 0;
  day_ = 0u;
  awardtype_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DailyLoginAwardCfg::~DailyLoginAwardCfg() {
  SharedDtor();
}

void DailyLoginAwardCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DailyLoginAwardCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DailyLoginAwardCfg& DailyLoginAwardCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#endif
  return *default_instance_;
}

DailyLoginAwardCfg* DailyLoginAwardCfg::default_instance_ = NULL;

DailyLoginAwardCfg* DailyLoginAwardCfg::New() const {
  return new DailyLoginAwardCfg;
}

void DailyLoginAwardCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    day_ = 0u;
    awardtype_ = 0u;
  }
  elmtlst_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DailyLoginAwardCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Day = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &day_)));
          set_has_day();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_AwardType;
        break;
      }

      // required uint32 AwardType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_AwardType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &awardtype_)));
          set_has_awardtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtLst;
        break;
      }

      // repeated .com.cfg.vo.DailyLoginAwardElmt ElmtLst = 3;
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

void DailyLoginAwardCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Day = 1;
  if (has_day()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->day(), output);
  }

  // required uint32 AwardType = 2;
  if (has_awardtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->awardtype(), output);
  }

  // repeated .com.cfg.vo.DailyLoginAwardElmt ElmtLst = 3;
  for (int i = 0; i < this->elmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->elmtlst(i), output);
  }

}

int DailyLoginAwardCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Day = 1;
    if (has_day()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->day());
    }

    // required uint32 AwardType = 2;
    if (has_awardtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->awardtype());
    }

  }
  // repeated .com.cfg.vo.DailyLoginAwardElmt ElmtLst = 3;
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

void DailyLoginAwardCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DailyLoginAwardCfg*>(&from));
}

void DailyLoginAwardCfg::MergeFrom(const DailyLoginAwardCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtlst_.MergeFrom(from.elmtlst_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_day()) {
      set_day(from.day());
    }
    if (from.has_awardtype()) {
      set_awardtype(from.awardtype());
    }
  }
}

void DailyLoginAwardCfg::CopyFrom(const DailyLoginAwardCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DailyLoginAwardCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < elmtlst_size(); i++) {
    if (!this->elmtlst(i).IsInitialized()) return false;
  }
  return true;
}

void DailyLoginAwardCfg::Swap(DailyLoginAwardCfg* other) {
  if (other != this) {
    std::swap(day_, other->day_);
    std::swap(awardtype_, other->awardtype_);
    elmtlst_.Swap(&other->elmtlst_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DailyLoginAwardCfg::GetTypeName() const {
  return "com.cfg.vo.DailyLoginAwardCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int DailyLoginAwardCfgSet::kDailyLoginAwardCfgFieldNumber;
#endif  // !_MSC_VER

DailyLoginAwardCfgSet::DailyLoginAwardCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DailyLoginAwardCfgSet::InitAsDefaultInstance() {
}

DailyLoginAwardCfgSet::DailyLoginAwardCfgSet(const DailyLoginAwardCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DailyLoginAwardCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DailyLoginAwardCfgSet::~DailyLoginAwardCfgSet() {
  SharedDtor();
}

void DailyLoginAwardCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DailyLoginAwardCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DailyLoginAwardCfgSet& DailyLoginAwardCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
#endif
  return *default_instance_;
}

DailyLoginAwardCfgSet* DailyLoginAwardCfgSet::default_instance_ = NULL;

DailyLoginAwardCfgSet* DailyLoginAwardCfgSet::New() const {
  return new DailyLoginAwardCfgSet;
}

void DailyLoginAwardCfgSet::Clear() {
  dailyloginawardcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DailyLoginAwardCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.DailyLoginAwardCfg dailyLoginAwardCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dailyLoginAwardCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_dailyloginawardcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_dailyLoginAwardCfg;
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

void DailyLoginAwardCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.DailyLoginAwardCfg dailyLoginAwardCfg = 1;
  for (int i = 0; i < this->dailyloginawardcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->dailyloginawardcfg(i), output);
  }

}

int DailyLoginAwardCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.DailyLoginAwardCfg dailyLoginAwardCfg = 1;
  total_size += 1 * this->dailyloginawardcfg_size();
  for (int i = 0; i < this->dailyloginawardcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->dailyloginawardcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DailyLoginAwardCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DailyLoginAwardCfgSet*>(&from));
}

void DailyLoginAwardCfgSet::MergeFrom(const DailyLoginAwardCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  dailyloginawardcfg_.MergeFrom(from.dailyloginawardcfg_);
}

void DailyLoginAwardCfgSet::CopyFrom(const DailyLoginAwardCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DailyLoginAwardCfgSet::IsInitialized() const {

  for (int i = 0; i < dailyloginawardcfg_size(); i++) {
    if (!this->dailyloginawardcfg(i).IsInitialized()) return false;
  }
  return true;
}

void DailyLoginAwardCfgSet::Swap(DailyLoginAwardCfgSet* other) {
  if (other != this) {
    dailyloginawardcfg_.Swap(&other->dailyloginawardcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DailyLoginAwardCfgSet::GetTypeName() const {
  return "com.cfg.vo.DailyLoginAwardCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
