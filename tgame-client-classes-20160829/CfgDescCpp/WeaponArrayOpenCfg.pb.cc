// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeaponArrayOpenCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WeaponArrayOpenCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_WeaponArrayOpenCfg_2eproto() {
  delete WeaponArrayOpenCfg::default_instance_;
  delete WeaponArrayOpenCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_WeaponArrayOpenCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_WeaponArrayOpenCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  WeaponArrayOpenCfg::default_instance_ = new WeaponArrayOpenCfg();
  WeaponArrayOpenCfgSet::default_instance_ = new WeaponArrayOpenCfgSet();
  WeaponArrayOpenCfg::default_instance_->InitAsDefaultInstance();
  WeaponArrayOpenCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WeaponArrayOpenCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_WeaponArrayOpenCfg_2eproto_once_);
void protobuf_AddDesc_WeaponArrayOpenCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_WeaponArrayOpenCfg_2eproto_once_,
                 &protobuf_AddDesc_WeaponArrayOpenCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WeaponArrayOpenCfg_2eproto {
  StaticDescriptorInitializer_WeaponArrayOpenCfg_2eproto() {
    protobuf_AddDesc_WeaponArrayOpenCfg_2eproto();
  }
} static_descriptor_initializer_WeaponArrayOpenCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int WeaponArrayOpenCfg::kIdxFieldNumber;
const int WeaponArrayOpenCfg::kVIPLvlFieldNumber;
const int WeaponArrayOpenCfg::kHeroLvlFieldNumber;
const int WeaponArrayOpenCfg::kDescFieldNumber;
#endif  // !_MSC_VER

WeaponArrayOpenCfg::WeaponArrayOpenCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponArrayOpenCfg::InitAsDefaultInstance() {
}

WeaponArrayOpenCfg::WeaponArrayOpenCfg(const WeaponArrayOpenCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponArrayOpenCfg::SharedCtor() {
  _cached_size_ = 0;
  idx_ = 0u;
  viplvl_ = 0u;
  herolvl_ = 0u;
  desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponArrayOpenCfg::~WeaponArrayOpenCfg() {
  SharedDtor();
}

void WeaponArrayOpenCfg::SharedDtor() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponArrayOpenCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponArrayOpenCfg& WeaponArrayOpenCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponArrayOpenCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponArrayOpenCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponArrayOpenCfg* WeaponArrayOpenCfg::default_instance_ = NULL;

WeaponArrayOpenCfg* WeaponArrayOpenCfg::New() const {
  return new WeaponArrayOpenCfg;
}

void WeaponArrayOpenCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    idx_ = 0u;
    viplvl_ = 0u;
    herolvl_ = 0u;
    if (has_desc()) {
      if (desc_ != &::google::protobuf::internal::kEmptyString) {
        desc_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponArrayOpenCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Idx = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &idx_)));
          set_has_idx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_VIPLvl;
        break;
      }

      // required uint32 VIPLvl = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_VIPLvl:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &viplvl_)));
          set_has_viplvl();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_HeroLvl;
        break;
      }

      // required uint32 HeroLvl = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HeroLvl:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &herolvl_)));
          set_has_herolvl();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Desc;
        break;
      }

      // required string Desc = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_desc()));
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

void WeaponArrayOpenCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Idx = 1;
  if (has_idx()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->idx(), output);
  }

  // required uint32 VIPLvl = 2;
  if (has_viplvl()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->viplvl(), output);
  }

  // required uint32 HeroLvl = 3;
  if (has_herolvl()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->herolvl(), output);
  }

  // required string Desc = 4;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->desc(), output);
  }

}

int WeaponArrayOpenCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Idx = 1;
    if (has_idx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->idx());
    }

    // required uint32 VIPLvl = 2;
    if (has_viplvl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->viplvl());
    }

    // required uint32 HeroLvl = 3;
    if (has_herolvl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->herolvl());
    }

    // required string Desc = 4;
    if (has_desc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desc());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponArrayOpenCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponArrayOpenCfg*>(&from));
}

void WeaponArrayOpenCfg::MergeFrom(const WeaponArrayOpenCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_idx()) {
      set_idx(from.idx());
    }
    if (from.has_viplvl()) {
      set_viplvl(from.viplvl());
    }
    if (from.has_herolvl()) {
      set_herolvl(from.herolvl());
    }
    if (from.has_desc()) {
      set_desc(from.desc());
    }
  }
}

void WeaponArrayOpenCfg::CopyFrom(const WeaponArrayOpenCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponArrayOpenCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void WeaponArrayOpenCfg::Swap(WeaponArrayOpenCfg* other) {
  if (other != this) {
    std::swap(idx_, other->idx_);
    std::swap(viplvl_, other->viplvl_);
    std::swap(herolvl_, other->herolvl_);
    std::swap(desc_, other->desc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponArrayOpenCfg::GetTypeName() const {
  return "com.cfg.vo.WeaponArrayOpenCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int WeaponArrayOpenCfgSet::kCellsFieldNumber;
#endif  // !_MSC_VER

WeaponArrayOpenCfgSet::WeaponArrayOpenCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponArrayOpenCfgSet::InitAsDefaultInstance() {
}

WeaponArrayOpenCfgSet::WeaponArrayOpenCfgSet(const WeaponArrayOpenCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponArrayOpenCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponArrayOpenCfgSet::~WeaponArrayOpenCfgSet() {
  SharedDtor();
}

void WeaponArrayOpenCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponArrayOpenCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponArrayOpenCfgSet& WeaponArrayOpenCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponArrayOpenCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponArrayOpenCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponArrayOpenCfgSet* WeaponArrayOpenCfgSet::default_instance_ = NULL;

WeaponArrayOpenCfgSet* WeaponArrayOpenCfgSet::New() const {
  return new WeaponArrayOpenCfgSet;
}

void WeaponArrayOpenCfgSet::Clear() {
  cells_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponArrayOpenCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.WeaponArrayOpenCfg cells = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_cells:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_cells()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_cells;
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

void WeaponArrayOpenCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.WeaponArrayOpenCfg cells = 1;
  for (int i = 0; i < this->cells_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->cells(i), output);
  }

}

int WeaponArrayOpenCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.WeaponArrayOpenCfg cells = 1;
  total_size += 1 * this->cells_size();
  for (int i = 0; i < this->cells_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->cells(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponArrayOpenCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponArrayOpenCfgSet*>(&from));
}

void WeaponArrayOpenCfgSet::MergeFrom(const WeaponArrayOpenCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  cells_.MergeFrom(from.cells_);
}

void WeaponArrayOpenCfgSet::CopyFrom(const WeaponArrayOpenCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponArrayOpenCfgSet::IsInitialized() const {

  for (int i = 0; i < cells_size(); i++) {
    if (!this->cells(i).IsInitialized()) return false;
  }
  return true;
}

void WeaponArrayOpenCfgSet::Swap(WeaponArrayOpenCfgSet* other) {
  if (other != this) {
    cells_.Swap(&other->cells_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponArrayOpenCfgSet::GetTypeName() const {
  return "com.cfg.vo.WeaponArrayOpenCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
