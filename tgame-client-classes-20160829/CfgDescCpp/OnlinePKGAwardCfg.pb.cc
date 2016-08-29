// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OnlinePKGAwardCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OnlinePKGAwardCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_OnlinePKGAwardCfg_2eproto() {
  delete OnlinePKGCfgElmt::default_instance_;
  delete OnlinePKGCfg::default_instance_;
  delete OnlinePKGCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_OnlinePKGAwardCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_OnlinePKGAwardCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  OnlinePKGCfgElmt::default_instance_ = new OnlinePKGCfgElmt();
  OnlinePKGCfg::default_instance_ = new OnlinePKGCfg();
  OnlinePKGCfgSet::default_instance_ = new OnlinePKGCfgSet();
  OnlinePKGCfgElmt::default_instance_->InitAsDefaultInstance();
  OnlinePKGCfg::default_instance_->InitAsDefaultInstance();
  OnlinePKGCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OnlinePKGAwardCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_OnlinePKGAwardCfg_2eproto_once_);
void protobuf_AddDesc_OnlinePKGAwardCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_OnlinePKGAwardCfg_2eproto_once_,
                 &protobuf_AddDesc_OnlinePKGAwardCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OnlinePKGAwardCfg_2eproto {
  StaticDescriptorInitializer_OnlinePKGAwardCfg_2eproto() {
    protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
  }
} static_descriptor_initializer_OnlinePKGAwardCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int OnlinePKGCfgElmt::kElementTypeFieldNumber;
const int OnlinePKGCfgElmt::kElementIDFieldNumber;
const int OnlinePKGCfgElmt::kElementCntFieldNumber;
#endif  // !_MSC_VER

OnlinePKGCfgElmt::OnlinePKGCfgElmt()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void OnlinePKGCfgElmt::InitAsDefaultInstance() {
}

OnlinePKGCfgElmt::OnlinePKGCfgElmt(const OnlinePKGCfgElmt& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void OnlinePKGCfgElmt::SharedCtor() {
  _cached_size_ = 0;
  elementtype_ = 0u;
  elementid_ = 0u;
  elementcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OnlinePKGCfgElmt::~OnlinePKGCfgElmt() {
  SharedDtor();
}

void OnlinePKGCfgElmt::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void OnlinePKGCfgElmt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OnlinePKGCfgElmt& OnlinePKGCfgElmt::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#endif
  return *default_instance_;
}

OnlinePKGCfgElmt* OnlinePKGCfgElmt::default_instance_ = NULL;

OnlinePKGCfgElmt* OnlinePKGCfgElmt::New() const {
  return new OnlinePKGCfgElmt;
}

void OnlinePKGCfgElmt::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    elementtype_ = 0u;
    elementid_ = 0u;
    elementcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool OnlinePKGCfgElmt::MergePartialFromCodedStream(
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

void OnlinePKGCfgElmt::SerializeWithCachedSizes(
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

int OnlinePKGCfgElmt::ByteSize() const {
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

void OnlinePKGCfgElmt::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OnlinePKGCfgElmt*>(&from));
}

void OnlinePKGCfgElmt::MergeFrom(const OnlinePKGCfgElmt& from) {
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

void OnlinePKGCfgElmt::CopyFrom(const OnlinePKGCfgElmt& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnlinePKGCfgElmt::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void OnlinePKGCfgElmt::Swap(OnlinePKGCfgElmt* other) {
  if (other != this) {
    std::swap(elementtype_, other->elementtype_);
    std::swap(elementid_, other->elementid_);
    std::swap(elementcnt_, other->elementcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string OnlinePKGCfgElmt::GetTypeName() const {
  return "com.cfg.vo.OnlinePKGCfgElmt";
}


// ===================================================================

#ifndef _MSC_VER
const int OnlinePKGCfg::kLevelFieldNumber;
const int OnlinePKGCfg::kOnlineTimeFieldNumber;
const int OnlinePKGCfg::kElmtLstFieldNumber;
#endif  // !_MSC_VER

OnlinePKGCfg::OnlinePKGCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void OnlinePKGCfg::InitAsDefaultInstance() {
}

OnlinePKGCfg::OnlinePKGCfg(const OnlinePKGCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void OnlinePKGCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  onlinetime_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OnlinePKGCfg::~OnlinePKGCfg() {
  SharedDtor();
}

void OnlinePKGCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void OnlinePKGCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OnlinePKGCfg& OnlinePKGCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#endif
  return *default_instance_;
}

OnlinePKGCfg* OnlinePKGCfg::default_instance_ = NULL;

OnlinePKGCfg* OnlinePKGCfg::New() const {
  return new OnlinePKGCfg;
}

void OnlinePKGCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    onlinetime_ = 0u;
  }
  elmtlst_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool OnlinePKGCfg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_OnlineTime;
        break;
      }

      // required uint32 OnlineTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_OnlineTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &onlinetime_)));
          set_has_onlinetime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtLst;
        break;
      }

      // repeated .com.cfg.vo.OnlinePKGCfgElmt ElmtLst = 3;
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

void OnlinePKGCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 OnlineTime = 2;
  if (has_onlinetime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->onlinetime(), output);
  }

  // repeated .com.cfg.vo.OnlinePKGCfgElmt ElmtLst = 3;
  for (int i = 0; i < this->elmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->elmtlst(i), output);
  }

}

int OnlinePKGCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 OnlineTime = 2;
    if (has_onlinetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->onlinetime());
    }

  }
  // repeated .com.cfg.vo.OnlinePKGCfgElmt ElmtLst = 3;
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

void OnlinePKGCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OnlinePKGCfg*>(&from));
}

void OnlinePKGCfg::MergeFrom(const OnlinePKGCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtlst_.MergeFrom(from.elmtlst_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_onlinetime()) {
      set_onlinetime(from.onlinetime());
    }
  }
}

void OnlinePKGCfg::CopyFrom(const OnlinePKGCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnlinePKGCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < elmtlst_size(); i++) {
    if (!this->elmtlst(i).IsInitialized()) return false;
  }
  return true;
}

void OnlinePKGCfg::Swap(OnlinePKGCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(onlinetime_, other->onlinetime_);
    elmtlst_.Swap(&other->elmtlst_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string OnlinePKGCfg::GetTypeName() const {
  return "com.cfg.vo.OnlinePKGCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int OnlinePKGCfgSet::kOnlinePKGCfgFieldNumber;
#endif  // !_MSC_VER

OnlinePKGCfgSet::OnlinePKGCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void OnlinePKGCfgSet::InitAsDefaultInstance() {
}

OnlinePKGCfgSet::OnlinePKGCfgSet(const OnlinePKGCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void OnlinePKGCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OnlinePKGCfgSet::~OnlinePKGCfgSet() {
  SharedDtor();
}

void OnlinePKGCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void OnlinePKGCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OnlinePKGCfgSet& OnlinePKGCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_OnlinePKGAwardCfg_2eproto();
#endif
  return *default_instance_;
}

OnlinePKGCfgSet* OnlinePKGCfgSet::default_instance_ = NULL;

OnlinePKGCfgSet* OnlinePKGCfgSet::New() const {
  return new OnlinePKGCfgSet;
}

void OnlinePKGCfgSet::Clear() {
  onlinepkgcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool OnlinePKGCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.OnlinePKGCfg onlinePKGCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_onlinePKGCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_onlinepkgcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_onlinePKGCfg;
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

void OnlinePKGCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.OnlinePKGCfg onlinePKGCfg = 1;
  for (int i = 0; i < this->onlinepkgcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->onlinepkgcfg(i), output);
  }

}

int OnlinePKGCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.OnlinePKGCfg onlinePKGCfg = 1;
  total_size += 1 * this->onlinepkgcfg_size();
  for (int i = 0; i < this->onlinepkgcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->onlinepkgcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OnlinePKGCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OnlinePKGCfgSet*>(&from));
}

void OnlinePKGCfgSet::MergeFrom(const OnlinePKGCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  onlinepkgcfg_.MergeFrom(from.onlinepkgcfg_);
}

void OnlinePKGCfgSet::CopyFrom(const OnlinePKGCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnlinePKGCfgSet::IsInitialized() const {

  for (int i = 0; i < onlinepkgcfg_size(); i++) {
    if (!this->onlinepkgcfg(i).IsInitialized()) return false;
  }
  return true;
}

void OnlinePKGCfgSet::Swap(OnlinePKGCfgSet* other) {
  if (other != this) {
    onlinepkgcfg_.Swap(&other->onlinepkgcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string OnlinePKGCfgSet::GetTypeName() const {
  return "com.cfg.vo.OnlinePKGCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
