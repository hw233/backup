// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CVZMonsterWaveCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CVZMonsterWaveCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_CVZMonsterWaveCfg_2eproto() {
  delete CVZMonsterWaveCfg::default_instance_;
  delete CVZMonsterWaveCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_CVZMonsterWaveCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_CVZMonsterWaveCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  CVZMonsterWaveCfg::default_instance_ = new CVZMonsterWaveCfg();
  CVZMonsterWaveCfgSet::default_instance_ = new CVZMonsterWaveCfgSet();
  CVZMonsterWaveCfg::default_instance_->InitAsDefaultInstance();
  CVZMonsterWaveCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CVZMonsterWaveCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_CVZMonsterWaveCfg_2eproto_once_);
void protobuf_AddDesc_CVZMonsterWaveCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_CVZMonsterWaveCfg_2eproto_once_,
                 &protobuf_AddDesc_CVZMonsterWaveCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CVZMonsterWaveCfg_2eproto {
  StaticDescriptorInitializer_CVZMonsterWaveCfg_2eproto() {
    protobuf_AddDesc_CVZMonsterWaveCfg_2eproto();
  }
} static_descriptor_initializer_CVZMonsterWaveCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int CVZMonsterWaveCfg::kWaveFieldNumber;
const int CVZMonsterWaveCfg::kMonsteravatarFieldNumber;
const int CVZMonsterWaveCfg::kMinSpeedFieldNumber;
const int CVZMonsterWaveCfg::kMaxSpeedFieldNumber;
#endif  // !_MSC_VER

CVZMonsterWaveCfg::CVZMonsterWaveCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void CVZMonsterWaveCfg::InitAsDefaultInstance() {
}

CVZMonsterWaveCfg::CVZMonsterWaveCfg(const CVZMonsterWaveCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void CVZMonsterWaveCfg::SharedCtor() {
  _cached_size_ = 0;
  wave_ = 0u;
  monsteravatar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  minspeed_ = 0u;
  maxspeed_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CVZMonsterWaveCfg::~CVZMonsterWaveCfg() {
  SharedDtor();
}

void CVZMonsterWaveCfg::SharedDtor() {
  if (monsteravatar_ != &::google::protobuf::internal::kEmptyString) {
    delete monsteravatar_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void CVZMonsterWaveCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const CVZMonsterWaveCfg& CVZMonsterWaveCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_CVZMonsterWaveCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_CVZMonsterWaveCfg_2eproto();
#endif
  return *default_instance_;
}

CVZMonsterWaveCfg* CVZMonsterWaveCfg::default_instance_ = NULL;

CVZMonsterWaveCfg* CVZMonsterWaveCfg::New() const {
  return new CVZMonsterWaveCfg;
}

void CVZMonsterWaveCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    wave_ = 0u;
    if (has_monsteravatar()) {
      if (monsteravatar_ != &::google::protobuf::internal::kEmptyString) {
        monsteravatar_->clear();
      }
    }
    minspeed_ = 0u;
    maxspeed_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool CVZMonsterWaveCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 wave = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wave_)));
          set_has_wave();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_monsteravatar;
        break;
      }

      // required string monsteravatar = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_monsteravatar:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_monsteravatar()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MinSpeed;
        break;
      }

      // required uint32 MinSpeed = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MinSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minspeed_)));
          set_has_minspeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_MaxSpeed;
        break;
      }

      // required uint32 MaxSpeed = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MaxSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxspeed_)));
          set_has_maxspeed();
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

void CVZMonsterWaveCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 wave = 1;
  if (has_wave()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->wave(), output);
  }

  // required string monsteravatar = 2;
  if (has_monsteravatar()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->monsteravatar(), output);
  }

  // required uint32 MinSpeed = 3;
  if (has_minspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->minspeed(), output);
  }

  // required uint32 MaxSpeed = 4;
  if (has_maxspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->maxspeed(), output);
  }

}

int CVZMonsterWaveCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 wave = 1;
    if (has_wave()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->wave());
    }

    // required string monsteravatar = 2;
    if (has_monsteravatar()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->monsteravatar());
    }

    // required uint32 MinSpeed = 3;
    if (has_minspeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->minspeed());
    }

    // required uint32 MaxSpeed = 4;
    if (has_maxspeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxspeed());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CVZMonsterWaveCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CVZMonsterWaveCfg*>(&from));
}

void CVZMonsterWaveCfg::MergeFrom(const CVZMonsterWaveCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_wave()) {
      set_wave(from.wave());
    }
    if (from.has_monsteravatar()) {
      set_monsteravatar(from.monsteravatar());
    }
    if (from.has_minspeed()) {
      set_minspeed(from.minspeed());
    }
    if (from.has_maxspeed()) {
      set_maxspeed(from.maxspeed());
    }
  }
}

void CVZMonsterWaveCfg::CopyFrom(const CVZMonsterWaveCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CVZMonsterWaveCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void CVZMonsterWaveCfg::Swap(CVZMonsterWaveCfg* other) {
  if (other != this) {
    std::swap(wave_, other->wave_);
    std::swap(monsteravatar_, other->monsteravatar_);
    std::swap(minspeed_, other->minspeed_);
    std::swap(maxspeed_, other->maxspeed_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string CVZMonsterWaveCfg::GetTypeName() const {
  return "com.cfg.vo.CVZMonsterWaveCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int CVZMonsterWaveCfgSet::kMonsterWaveCfgFieldNumber;
#endif  // !_MSC_VER

CVZMonsterWaveCfgSet::CVZMonsterWaveCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void CVZMonsterWaveCfgSet::InitAsDefaultInstance() {
}

CVZMonsterWaveCfgSet::CVZMonsterWaveCfgSet(const CVZMonsterWaveCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void CVZMonsterWaveCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CVZMonsterWaveCfgSet::~CVZMonsterWaveCfgSet() {
  SharedDtor();
}

void CVZMonsterWaveCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void CVZMonsterWaveCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const CVZMonsterWaveCfgSet& CVZMonsterWaveCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_CVZMonsterWaveCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_CVZMonsterWaveCfg_2eproto();
#endif
  return *default_instance_;
}

CVZMonsterWaveCfgSet* CVZMonsterWaveCfgSet::default_instance_ = NULL;

CVZMonsterWaveCfgSet* CVZMonsterWaveCfgSet::New() const {
  return new CVZMonsterWaveCfgSet;
}

void CVZMonsterWaveCfgSet::Clear() {
  monsterwavecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool CVZMonsterWaveCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.CVZMonsterWaveCfg monsterWaveCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_monsterWaveCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_monsterwavecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_monsterWaveCfg;
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

void CVZMonsterWaveCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.CVZMonsterWaveCfg monsterWaveCfg = 1;
  for (int i = 0; i < this->monsterwavecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->monsterwavecfg(i), output);
  }

}

int CVZMonsterWaveCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.CVZMonsterWaveCfg monsterWaveCfg = 1;
  total_size += 1 * this->monsterwavecfg_size();
  for (int i = 0; i < this->monsterwavecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->monsterwavecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CVZMonsterWaveCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CVZMonsterWaveCfgSet*>(&from));
}

void CVZMonsterWaveCfgSet::MergeFrom(const CVZMonsterWaveCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  monsterwavecfg_.MergeFrom(from.monsterwavecfg_);
}

void CVZMonsterWaveCfgSet::CopyFrom(const CVZMonsterWaveCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CVZMonsterWaveCfgSet::IsInitialized() const {

  for (int i = 0; i < monsterwavecfg_size(); i++) {
    if (!this->monsterwavecfg(i).IsInitialized()) return false;
  }
  return true;
}

void CVZMonsterWaveCfgSet::Swap(CVZMonsterWaveCfgSet* other) {
  if (other != this) {
    monsterwavecfg_.Swap(&other->monsterwavecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string CVZMonsterWaveCfgSet::GetTypeName() const {
  return "com.cfg.vo.CVZMonsterWaveCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
