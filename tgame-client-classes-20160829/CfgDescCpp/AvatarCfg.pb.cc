// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AvatarCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AvatarCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_AvatarCfg_2eproto() {
  delete AvatarCfg::default_instance_;
  delete AvatarCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_AvatarCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_AvatarCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AvatarCfg::default_instance_ = new AvatarCfg();
  AvatarCfgSet::default_instance_ = new AvatarCfgSet();
  AvatarCfg::default_instance_->InitAsDefaultInstance();
  AvatarCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AvatarCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_AvatarCfg_2eproto_once_);
void protobuf_AddDesc_AvatarCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_AvatarCfg_2eproto_once_,
                 &protobuf_AddDesc_AvatarCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AvatarCfg_2eproto {
  StaticDescriptorInitializer_AvatarCfg_2eproto() {
    protobuf_AddDesc_AvatarCfg_2eproto();
  }
} static_descriptor_initializer_AvatarCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AvatarCfg::kAvatarIDFieldNumber;
const int AvatarCfg::kResFieldNumber;
#endif  // !_MSC_VER

AvatarCfg::AvatarCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AvatarCfg::InitAsDefaultInstance() {
}

AvatarCfg::AvatarCfg(const AvatarCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AvatarCfg::SharedCtor() {
  _cached_size_ = 0;
  avatarid_ = 0u;
  res_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AvatarCfg::~AvatarCfg() {
  SharedDtor();
}

void AvatarCfg::SharedDtor() {
  if (res_ != &::google::protobuf::internal::kEmptyString) {
    delete res_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AvatarCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AvatarCfg& AvatarCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_AvatarCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_AvatarCfg_2eproto();
#endif
  return *default_instance_;
}

AvatarCfg* AvatarCfg::default_instance_ = NULL;

AvatarCfg* AvatarCfg::New() const {
  return new AvatarCfg;
}

void AvatarCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    avatarid_ = 0u;
    if (has_res()) {
      if (res_ != &::google::protobuf::internal::kEmptyString) {
        res_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AvatarCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 AvatarID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatarid_)));
          set_has_avatarid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Res;
        break;
      }

      // required string Res = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Res:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_res()));
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

void AvatarCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 AvatarID = 1;
  if (has_avatarid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->avatarid(), output);
  }

  // required string Res = 2;
  if (has_res()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->res(), output);
  }

}

int AvatarCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 AvatarID = 1;
    if (has_avatarid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->avatarid());
    }

    // required string Res = 2;
    if (has_res()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->res());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AvatarCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AvatarCfg*>(&from));
}

void AvatarCfg::MergeFrom(const AvatarCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_avatarid()) {
      set_avatarid(from.avatarid());
    }
    if (from.has_res()) {
      set_res(from.res());
    }
  }
}

void AvatarCfg::CopyFrom(const AvatarCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AvatarCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void AvatarCfg::Swap(AvatarCfg* other) {
  if (other != this) {
    std::swap(avatarid_, other->avatarid_);
    std::swap(res_, other->res_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AvatarCfg::GetTypeName() const {
  return "com.cfg.vo.AvatarCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int AvatarCfgSet::kAvatarCfgFieldNumber;
#endif  // !_MSC_VER

AvatarCfgSet::AvatarCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AvatarCfgSet::InitAsDefaultInstance() {
}

AvatarCfgSet::AvatarCfgSet(const AvatarCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AvatarCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AvatarCfgSet::~AvatarCfgSet() {
  SharedDtor();
}

void AvatarCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AvatarCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AvatarCfgSet& AvatarCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_AvatarCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_AvatarCfg_2eproto();
#endif
  return *default_instance_;
}

AvatarCfgSet* AvatarCfgSet::default_instance_ = NULL;

AvatarCfgSet* AvatarCfgSet::New() const {
  return new AvatarCfgSet;
}

void AvatarCfgSet::Clear() {
  avatarcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AvatarCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.AvatarCfg avatarCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_avatarCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_avatarcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_avatarCfg;
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

void AvatarCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.AvatarCfg avatarCfg = 1;
  for (int i = 0; i < this->avatarcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->avatarcfg(i), output);
  }

}

int AvatarCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.AvatarCfg avatarCfg = 1;
  total_size += 1 * this->avatarcfg_size();
  for (int i = 0; i < this->avatarcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->avatarcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AvatarCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AvatarCfgSet*>(&from));
}

void AvatarCfgSet::MergeFrom(const AvatarCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  avatarcfg_.MergeFrom(from.avatarcfg_);
}

void AvatarCfgSet::CopyFrom(const AvatarCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AvatarCfgSet::IsInitialized() const {

  for (int i = 0; i < avatarcfg_size(); i++) {
    if (!this->avatarcfg(i).IsInitialized()) return false;
  }
  return true;
}

void AvatarCfgSet::Swap(AvatarCfgSet* other) {
  if (other != this) {
    avatarcfg_.Swap(&other->avatarcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AvatarCfgSet::GetTypeName() const {
  return "com.cfg.vo.AvatarCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
