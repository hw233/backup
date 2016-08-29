// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArenaStoreCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArenaStoreCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ArenaStoreCfg_2eproto() {
  delete ArenaStoreCfg::default_instance_;
  delete ArenaStoreCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ArenaStoreCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ArenaStoreCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::com::cfg::vo::protobuf_AddDesc_ArenaDailyAwardCfg_2eproto();
  ArenaStoreCfg::default_instance_ = new ArenaStoreCfg();
  ArenaStoreCfgSet::default_instance_ = new ArenaStoreCfgSet();
  ArenaStoreCfg::default_instance_->InitAsDefaultInstance();
  ArenaStoreCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArenaStoreCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ArenaStoreCfg_2eproto_once_);
void protobuf_AddDesc_ArenaStoreCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ArenaStoreCfg_2eproto_once_,
                 &protobuf_AddDesc_ArenaStoreCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArenaStoreCfg_2eproto {
  StaticDescriptorInitializer_ArenaStoreCfg_2eproto() {
    protobuf_AddDesc_ArenaStoreCfg_2eproto();
  }
} static_descriptor_initializer_ArenaStoreCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ArenaStoreCfg::kKeyFieldNumber;
const int ArenaStoreCfg::kArenaMoneyFieldNumber;
const int ArenaStoreCfg::kOpenLevelFieldNumber;
const int ArenaStoreCfg::kAwardElmtFieldNumber;
#endif  // !_MSC_VER

ArenaStoreCfg::ArenaStoreCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaStoreCfg::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  awardelmt_ = const_cast< ::com::cfg::vo::ArenaAwardElement*>(
      ::com::cfg::vo::ArenaAwardElement::internal_default_instance());
#else
  awardelmt_ = const_cast< ::com::cfg::vo::ArenaAwardElement*>(&::com::cfg::vo::ArenaAwardElement::default_instance());
#endif
}

ArenaStoreCfg::ArenaStoreCfg(const ArenaStoreCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaStoreCfg::SharedCtor() {
  _cached_size_ = 0;
  key_ = 0u;
  arenamoney_ = 0u;
  openlevel_ = 0u;
  awardelmt_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaStoreCfg::~ArenaStoreCfg() {
  SharedDtor();
}

void ArenaStoreCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete awardelmt_;
  }
}

void ArenaStoreCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaStoreCfg& ArenaStoreCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaStoreCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaStoreCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaStoreCfg* ArenaStoreCfg::default_instance_ = NULL;

ArenaStoreCfg* ArenaStoreCfg::New() const {
  return new ArenaStoreCfg;
}

void ArenaStoreCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    key_ = 0u;
    arenamoney_ = 0u;
    openlevel_ = 0u;
    if (has_awardelmt()) {
      if (awardelmt_ != NULL) awardelmt_->::com::cfg::vo::ArenaAwardElement::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaStoreCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_)));
          set_has_key();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ArenaMoney;
        break;
      }

      // required uint32 ArenaMoney = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ArenaMoney:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &arenamoney_)));
          set_has_arenamoney();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_OpenLevel;
        break;
      }

      // required uint32 OpenLevel = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_OpenLevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &openlevel_)));
          set_has_openlevel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_AwardElmt;
        break;
      }

      // required .com.cfg.vo.ArenaAwardElement AwardElmt = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_AwardElmt:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_awardelmt()));
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

void ArenaStoreCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->key(), output);
  }

  // required uint32 ArenaMoney = 2;
  if (has_arenamoney()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->arenamoney(), output);
  }

  // required uint32 OpenLevel = 3;
  if (has_openlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->openlevel(), output);
  }

  // required .com.cfg.vo.ArenaAwardElement AwardElmt = 4;
  if (has_awardelmt()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->awardelmt(), output);
  }

}

int ArenaStoreCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->key());
    }

    // required uint32 ArenaMoney = 2;
    if (has_arenamoney()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->arenamoney());
    }

    // required uint32 OpenLevel = 3;
    if (has_openlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->openlevel());
    }

    // required .com.cfg.vo.ArenaAwardElement AwardElmt = 4;
    if (has_awardelmt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->awardelmt());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaStoreCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaStoreCfg*>(&from));
}

void ArenaStoreCfg::MergeFrom(const ArenaStoreCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_arenamoney()) {
      set_arenamoney(from.arenamoney());
    }
    if (from.has_openlevel()) {
      set_openlevel(from.openlevel());
    }
    if (from.has_awardelmt()) {
      mutable_awardelmt()->::com::cfg::vo::ArenaAwardElement::MergeFrom(from.awardelmt());
    }
  }
}

void ArenaStoreCfg::CopyFrom(const ArenaStoreCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaStoreCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_awardelmt()) {
    if (!this->awardelmt().IsInitialized()) return false;
  }
  return true;
}

void ArenaStoreCfg::Swap(ArenaStoreCfg* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(arenamoney_, other->arenamoney_);
    std::swap(openlevel_, other->openlevel_);
    std::swap(awardelmt_, other->awardelmt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaStoreCfg::GetTypeName() const {
  return "com.cfg.vo.ArenaStoreCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ArenaStoreCfgSet::kArenaStoreCfgFieldNumber;
#endif  // !_MSC_VER

ArenaStoreCfgSet::ArenaStoreCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaStoreCfgSet::InitAsDefaultInstance() {
}

ArenaStoreCfgSet::ArenaStoreCfgSet(const ArenaStoreCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaStoreCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaStoreCfgSet::~ArenaStoreCfgSet() {
  SharedDtor();
}

void ArenaStoreCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaStoreCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaStoreCfgSet& ArenaStoreCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaStoreCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaStoreCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaStoreCfgSet* ArenaStoreCfgSet::default_instance_ = NULL;

ArenaStoreCfgSet* ArenaStoreCfgSet::New() const {
  return new ArenaStoreCfgSet;
}

void ArenaStoreCfgSet::Clear() {
  arenastorecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaStoreCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ArenaStoreCfg arenaStoreCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_arenaStoreCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_arenastorecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_arenaStoreCfg;
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

void ArenaStoreCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ArenaStoreCfg arenaStoreCfg = 1;
  for (int i = 0; i < this->arenastorecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->arenastorecfg(i), output);
  }

}

int ArenaStoreCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ArenaStoreCfg arenaStoreCfg = 1;
  total_size += 1 * this->arenastorecfg_size();
  for (int i = 0; i < this->arenastorecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->arenastorecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaStoreCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaStoreCfgSet*>(&from));
}

void ArenaStoreCfgSet::MergeFrom(const ArenaStoreCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  arenastorecfg_.MergeFrom(from.arenastorecfg_);
}

void ArenaStoreCfgSet::CopyFrom(const ArenaStoreCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaStoreCfgSet::IsInitialized() const {

  for (int i = 0; i < arenastorecfg_size(); i++) {
    if (!this->arenastorecfg(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaStoreCfgSet::Swap(ArenaStoreCfgSet* other) {
  if (other != this) {
    arenastorecfg_.Swap(&other->arenastorecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaStoreCfgSet::GetTypeName() const {
  return "com.cfg.vo.ArenaStoreCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
