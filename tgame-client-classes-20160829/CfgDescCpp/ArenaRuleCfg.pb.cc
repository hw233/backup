// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArenaRuleCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArenaRuleCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ArenaRuleCfg_2eproto() {
  delete ArenaRuleCfg::default_instance_;
  delete ArenaRuleCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ArenaRuleCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ArenaRuleCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ArenaRuleCfg::default_instance_ = new ArenaRuleCfg();
  ArenaRuleCfgSet::default_instance_ = new ArenaRuleCfgSet();
  ArenaRuleCfg::default_instance_->InitAsDefaultInstance();
  ArenaRuleCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArenaRuleCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ArenaRuleCfg_2eproto_once_);
void protobuf_AddDesc_ArenaRuleCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ArenaRuleCfg_2eproto_once_,
                 &protobuf_AddDesc_ArenaRuleCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArenaRuleCfg_2eproto {
  StaticDescriptorInitializer_ArenaRuleCfg_2eproto() {
    protobuf_AddDesc_ArenaRuleCfg_2eproto();
  }
} static_descriptor_initializer_ArenaRuleCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ArenaRuleCfg::kIDFieldNumber;
const int ArenaRuleCfg::kRuleDescFieldNumber;
#endif  // !_MSC_VER

ArenaRuleCfg::ArenaRuleCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaRuleCfg::InitAsDefaultInstance() {
}

ArenaRuleCfg::ArenaRuleCfg(const ArenaRuleCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaRuleCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  ruledesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaRuleCfg::~ArenaRuleCfg() {
  SharedDtor();
}

void ArenaRuleCfg::SharedDtor() {
  if (ruledesc_ != &::google::protobuf::internal::kEmptyString) {
    delete ruledesc_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaRuleCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaRuleCfg& ArenaRuleCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaRuleCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaRuleCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaRuleCfg* ArenaRuleCfg::default_instance_ = NULL;

ArenaRuleCfg* ArenaRuleCfg::New() const {
  return new ArenaRuleCfg;
}

void ArenaRuleCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_ruledesc()) {
      if (ruledesc_ != &::google::protobuf::internal::kEmptyString) {
        ruledesc_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaRuleCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_RuleDesc;
        break;
      }

      // required string RuleDesc = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_RuleDesc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ruledesc()));
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

void ArenaRuleCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string RuleDesc = 2;
  if (has_ruledesc()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->ruledesc(), output);
  }

}

int ArenaRuleCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string RuleDesc = 2;
    if (has_ruledesc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ruledesc());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaRuleCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaRuleCfg*>(&from));
}

void ArenaRuleCfg::MergeFrom(const ArenaRuleCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_ruledesc()) {
      set_ruledesc(from.ruledesc());
    }
  }
}

void ArenaRuleCfg::CopyFrom(const ArenaRuleCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaRuleCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ArenaRuleCfg::Swap(ArenaRuleCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(ruledesc_, other->ruledesc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaRuleCfg::GetTypeName() const {
  return "com.cfg.vo.ArenaRuleCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ArenaRuleCfgSet::kArenaRuleCfgFieldNumber;
#endif  // !_MSC_VER

ArenaRuleCfgSet::ArenaRuleCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaRuleCfgSet::InitAsDefaultInstance() {
}

ArenaRuleCfgSet::ArenaRuleCfgSet(const ArenaRuleCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaRuleCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaRuleCfgSet::~ArenaRuleCfgSet() {
  SharedDtor();
}

void ArenaRuleCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaRuleCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaRuleCfgSet& ArenaRuleCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaRuleCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaRuleCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaRuleCfgSet* ArenaRuleCfgSet::default_instance_ = NULL;

ArenaRuleCfgSet* ArenaRuleCfgSet::New() const {
  return new ArenaRuleCfgSet;
}

void ArenaRuleCfgSet::Clear() {
  arenarulecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaRuleCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ArenaRuleCfg arenaRuleCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_arenaRuleCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_arenarulecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_arenaRuleCfg;
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

void ArenaRuleCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ArenaRuleCfg arenaRuleCfg = 1;
  for (int i = 0; i < this->arenarulecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->arenarulecfg(i), output);
  }

}

int ArenaRuleCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ArenaRuleCfg arenaRuleCfg = 1;
  total_size += 1 * this->arenarulecfg_size();
  for (int i = 0; i < this->arenarulecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->arenarulecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaRuleCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaRuleCfgSet*>(&from));
}

void ArenaRuleCfgSet::MergeFrom(const ArenaRuleCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  arenarulecfg_.MergeFrom(from.arenarulecfg_);
}

void ArenaRuleCfgSet::CopyFrom(const ArenaRuleCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaRuleCfgSet::IsInitialized() const {

  for (int i = 0; i < arenarulecfg_size(); i++) {
    if (!this->arenarulecfg(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaRuleCfgSet::Swap(ArenaRuleCfgSet* other) {
  if (other != this) {
    arenarulecfg_.Swap(&other->arenarulecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaRuleCfgSet::GetTypeName() const {
  return "com.cfg.vo.ArenaRuleCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
