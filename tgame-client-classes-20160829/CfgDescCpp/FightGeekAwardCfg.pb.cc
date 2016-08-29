// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FightGeekAwardCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "FightGeekAwardCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_FightGeekAwardCfg_2eproto() {
  delete FightGeekActCfgElmt::default_instance_;
  delete FightGeekAwardCfg::default_instance_;
  delete FightGeekAwardCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_FightGeekAwardCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_FightGeekAwardCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  FightGeekActCfgElmt::default_instance_ = new FightGeekActCfgElmt();
  FightGeekAwardCfg::default_instance_ = new FightGeekAwardCfg();
  FightGeekAwardCfgSet::default_instance_ = new FightGeekAwardCfgSet();
  FightGeekActCfgElmt::default_instance_->InitAsDefaultInstance();
  FightGeekAwardCfg::default_instance_->InitAsDefaultInstance();
  FightGeekAwardCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_FightGeekAwardCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_FightGeekAwardCfg_2eproto_once_);
void protobuf_AddDesc_FightGeekAwardCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_FightGeekAwardCfg_2eproto_once_,
                 &protobuf_AddDesc_FightGeekAwardCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_FightGeekAwardCfg_2eproto {
  StaticDescriptorInitializer_FightGeekAwardCfg_2eproto() {
    protobuf_AddDesc_FightGeekAwardCfg_2eproto();
  }
} static_descriptor_initializer_FightGeekAwardCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int FightGeekActCfgElmt::kElementTypeFieldNumber;
const int FightGeekActCfgElmt::kElementIDFieldNumber;
const int FightGeekActCfgElmt::kElementCntFieldNumber;
#endif  // !_MSC_VER

FightGeekActCfgElmt::FightGeekActCfgElmt()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FightGeekActCfgElmt::InitAsDefaultInstance() {
}

FightGeekActCfgElmt::FightGeekActCfgElmt(const FightGeekActCfgElmt& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FightGeekActCfgElmt::SharedCtor() {
  _cached_size_ = 0;
  elementtype_ = 0u;
  elementid_ = 0u;
  elementcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightGeekActCfgElmt::~FightGeekActCfgElmt() {
  SharedDtor();
}

void FightGeekActCfgElmt::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FightGeekActCfgElmt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FightGeekActCfgElmt& FightGeekActCfgElmt::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#endif
  return *default_instance_;
}

FightGeekActCfgElmt* FightGeekActCfgElmt::default_instance_ = NULL;

FightGeekActCfgElmt* FightGeekActCfgElmt::New() const {
  return new FightGeekActCfgElmt;
}

void FightGeekActCfgElmt::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    elementtype_ = 0u;
    elementid_ = 0u;
    elementcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FightGeekActCfgElmt::MergePartialFromCodedStream(
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

void FightGeekActCfgElmt::SerializeWithCachedSizes(
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

int FightGeekActCfgElmt::ByteSize() const {
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

void FightGeekActCfgElmt::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FightGeekActCfgElmt*>(&from));
}

void FightGeekActCfgElmt::MergeFrom(const FightGeekActCfgElmt& from) {
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

void FightGeekActCfgElmt::CopyFrom(const FightGeekActCfgElmt& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightGeekActCfgElmt::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void FightGeekActCfgElmt::Swap(FightGeekActCfgElmt* other) {
  if (other != this) {
    std::swap(elementtype_, other->elementtype_);
    std::swap(elementid_, other->elementid_);
    std::swap(elementcnt_, other->elementcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FightGeekActCfgElmt::GetTypeName() const {
  return "com.cfg.vo.FightGeekActCfgElmt";
}


// ===================================================================

#ifndef _MSC_VER
const int FightGeekAwardCfg::kLevelFieldNumber;
const int FightGeekAwardCfg::kFightFieldNumber;
const int FightGeekAwardCfg::kElmtLstFieldNumber;
#endif  // !_MSC_VER

FightGeekAwardCfg::FightGeekAwardCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FightGeekAwardCfg::InitAsDefaultInstance() {
}

FightGeekAwardCfg::FightGeekAwardCfg(const FightGeekAwardCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FightGeekAwardCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  fight_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightGeekAwardCfg::~FightGeekAwardCfg() {
  SharedDtor();
}

void FightGeekAwardCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FightGeekAwardCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FightGeekAwardCfg& FightGeekAwardCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#endif
  return *default_instance_;
}

FightGeekAwardCfg* FightGeekAwardCfg::default_instance_ = NULL;

FightGeekAwardCfg* FightGeekAwardCfg::New() const {
  return new FightGeekAwardCfg;
}

void FightGeekAwardCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    fight_ = 0u;
  }
  elmtlst_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FightGeekAwardCfg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_Fight;
        break;
      }

      // required uint32 Fight = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Fight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fight_)));
          set_has_fight();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtLst;
        break;
      }

      // repeated .com.cfg.vo.FightGeekActCfgElmt ElmtLst = 3;
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

void FightGeekAwardCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 Fight = 2;
  if (has_fight()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->fight(), output);
  }

  // repeated .com.cfg.vo.FightGeekActCfgElmt ElmtLst = 3;
  for (int i = 0; i < this->elmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->elmtlst(i), output);
  }

}

int FightGeekAwardCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 Fight = 2;
    if (has_fight()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fight());
    }

  }
  // repeated .com.cfg.vo.FightGeekActCfgElmt ElmtLst = 3;
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

void FightGeekAwardCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FightGeekAwardCfg*>(&from));
}

void FightGeekAwardCfg::MergeFrom(const FightGeekAwardCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtlst_.MergeFrom(from.elmtlst_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_fight()) {
      set_fight(from.fight());
    }
  }
}

void FightGeekAwardCfg::CopyFrom(const FightGeekAwardCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightGeekAwardCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < elmtlst_size(); i++) {
    if (!this->elmtlst(i).IsInitialized()) return false;
  }
  return true;
}

void FightGeekAwardCfg::Swap(FightGeekAwardCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(fight_, other->fight_);
    elmtlst_.Swap(&other->elmtlst_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FightGeekAwardCfg::GetTypeName() const {
  return "com.cfg.vo.FightGeekAwardCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int FightGeekAwardCfgSet::kFightGeekAwardCfgFieldNumber;
#endif  // !_MSC_VER

FightGeekAwardCfgSet::FightGeekAwardCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FightGeekAwardCfgSet::InitAsDefaultInstance() {
}

FightGeekAwardCfgSet::FightGeekAwardCfgSet(const FightGeekAwardCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FightGeekAwardCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightGeekAwardCfgSet::~FightGeekAwardCfgSet() {
  SharedDtor();
}

void FightGeekAwardCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FightGeekAwardCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FightGeekAwardCfgSet& FightGeekAwardCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_FightGeekAwardCfg_2eproto();
#endif
  return *default_instance_;
}

FightGeekAwardCfgSet* FightGeekAwardCfgSet::default_instance_ = NULL;

FightGeekAwardCfgSet* FightGeekAwardCfgSet::New() const {
  return new FightGeekAwardCfgSet;
}

void FightGeekAwardCfgSet::Clear() {
  fightgeekawardcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FightGeekAwardCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.FightGeekAwardCfg fightGeekAwardCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_fightGeekAwardCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_fightgeekawardcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_fightGeekAwardCfg;
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

void FightGeekAwardCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.FightGeekAwardCfg fightGeekAwardCfg = 1;
  for (int i = 0; i < this->fightgeekawardcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->fightgeekawardcfg(i), output);
  }

}

int FightGeekAwardCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.FightGeekAwardCfg fightGeekAwardCfg = 1;
  total_size += 1 * this->fightgeekawardcfg_size();
  for (int i = 0; i < this->fightgeekawardcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fightgeekawardcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FightGeekAwardCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FightGeekAwardCfgSet*>(&from));
}

void FightGeekAwardCfgSet::MergeFrom(const FightGeekAwardCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  fightgeekawardcfg_.MergeFrom(from.fightgeekawardcfg_);
}

void FightGeekAwardCfgSet::CopyFrom(const FightGeekAwardCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightGeekAwardCfgSet::IsInitialized() const {

  for (int i = 0; i < fightgeekawardcfg_size(); i++) {
    if (!this->fightgeekawardcfg(i).IsInitialized()) return false;
  }
  return true;
}

void FightGeekAwardCfgSet::Swap(FightGeekAwardCfgSet* other) {
  if (other != this) {
    fightgeekawardcfg_.Swap(&other->fightgeekawardcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FightGeekAwardCfgSet::GetTypeName() const {
  return "com.cfg.vo.FightGeekAwardCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
