// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArenaBossLevCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArenaBossLevCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ArenaBossLevCfg_2eproto() {
  delete ArenaBossLevCfg::default_instance_;
  delete ArenaBossLevCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ArenaBossLevCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ArenaBossLevCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::com::cfg::vo::protobuf_AddDesc_MonsterCfg_2eproto();
  ArenaBossLevCfg::default_instance_ = new ArenaBossLevCfg();
  ArenaBossLevCfgSet::default_instance_ = new ArenaBossLevCfgSet();
  ArenaBossLevCfg::default_instance_->InitAsDefaultInstance();
  ArenaBossLevCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArenaBossLevCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ArenaBossLevCfg_2eproto_once_);
void protobuf_AddDesc_ArenaBossLevCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ArenaBossLevCfg_2eproto_once_,
                 &protobuf_AddDesc_ArenaBossLevCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArenaBossLevCfg_2eproto {
  StaticDescriptorInitializer_ArenaBossLevCfg_2eproto() {
    protobuf_AddDesc_ArenaBossLevCfg_2eproto();
  }
} static_descriptor_initializer_ArenaBossLevCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ArenaBossLevCfg::kLevelFieldNumber;
const int ArenaBossLevCfg::kHpFieldNumber;
const int ArenaBossLevCfg::kAtkFieldNumber;
#endif  // !_MSC_VER

ArenaBossLevCfg::ArenaBossLevCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaBossLevCfg::InitAsDefaultInstance() {
}

ArenaBossLevCfg::ArenaBossLevCfg(const ArenaBossLevCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaBossLevCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  hp_ = 0u;
  atk_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaBossLevCfg::~ArenaBossLevCfg() {
  SharedDtor();
}

void ArenaBossLevCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaBossLevCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaBossLevCfg& ArenaBossLevCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaBossLevCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaBossLevCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaBossLevCfg* ArenaBossLevCfg::default_instance_ = NULL;

ArenaBossLevCfg* ArenaBossLevCfg::New() const {
  return new ArenaBossLevCfg;
}

void ArenaBossLevCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    hp_ = 0u;
    atk_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaBossLevCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 level = 1;
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
        if (input->ExpectTag(16)) goto parse_hp;
        break;
      }

      // required uint32 hp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hp_)));
          set_has_hp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_atk;
        break;
      }

      // required uint32 atk = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_atk:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &atk_)));
          set_has_atk();
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

void ArenaBossLevCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 hp = 2;
  if (has_hp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->hp(), output);
  }

  // required uint32 atk = 3;
  if (has_atk()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->atk(), output);
  }

}

int ArenaBossLevCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 hp = 2;
    if (has_hp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hp());
    }

    // required uint32 atk = 3;
    if (has_atk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->atk());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaBossLevCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaBossLevCfg*>(&from));
}

void ArenaBossLevCfg::MergeFrom(const ArenaBossLevCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_hp()) {
      set_hp(from.hp());
    }
    if (from.has_atk()) {
      set_atk(from.atk());
    }
  }
}

void ArenaBossLevCfg::CopyFrom(const ArenaBossLevCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaBossLevCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void ArenaBossLevCfg::Swap(ArenaBossLevCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(hp_, other->hp_);
    std::swap(atk_, other->atk_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaBossLevCfg::GetTypeName() const {
  return "com.cfg.vo.ArenaBossLevCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ArenaBossLevCfgSet::kArenaBossLevCfgFieldNumber;
#endif  // !_MSC_VER

ArenaBossLevCfgSet::ArenaBossLevCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaBossLevCfgSet::InitAsDefaultInstance() {
}

ArenaBossLevCfgSet::ArenaBossLevCfgSet(const ArenaBossLevCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaBossLevCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaBossLevCfgSet::~ArenaBossLevCfgSet() {
  SharedDtor();
}

void ArenaBossLevCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaBossLevCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaBossLevCfgSet& ArenaBossLevCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaBossLevCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaBossLevCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaBossLevCfgSet* ArenaBossLevCfgSet::default_instance_ = NULL;

ArenaBossLevCfgSet* ArenaBossLevCfgSet::New() const {
  return new ArenaBossLevCfgSet;
}

void ArenaBossLevCfgSet::Clear() {
  arenabosslevcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaBossLevCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ArenaBossLevCfg arenaBossLevCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_arenaBossLevCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_arenabosslevcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_arenaBossLevCfg;
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

void ArenaBossLevCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ArenaBossLevCfg arenaBossLevCfg = 1;
  for (int i = 0; i < this->arenabosslevcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->arenabosslevcfg(i), output);
  }

}

int ArenaBossLevCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ArenaBossLevCfg arenaBossLevCfg = 1;
  total_size += 1 * this->arenabosslevcfg_size();
  for (int i = 0; i < this->arenabosslevcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->arenabosslevcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaBossLevCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaBossLevCfgSet*>(&from));
}

void ArenaBossLevCfgSet::MergeFrom(const ArenaBossLevCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  arenabosslevcfg_.MergeFrom(from.arenabosslevcfg_);
}

void ArenaBossLevCfgSet::CopyFrom(const ArenaBossLevCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaBossLevCfgSet::IsInitialized() const {

  for (int i = 0; i < arenabosslevcfg_size(); i++) {
    if (!this->arenabosslevcfg(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaBossLevCfgSet::Swap(ArenaBossLevCfgSet* other) {
  if (other != this) {
    arenabosslevcfg_.Swap(&other->arenabosslevcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaBossLevCfgSet::GetTypeName() const {
  return "com.cfg.vo.ArenaBossLevCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
