// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeaponRefitCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WeaponRefitCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_WeaponRefitCfg_2eproto() {
  delete RefitConsumeElement::default_instance_;
  delete WeaponRefitCfg::default_instance_;
  delete WeaponRefitCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_WeaponRefitCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_WeaponRefitCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  RefitConsumeElement::default_instance_ = new RefitConsumeElement();
  WeaponRefitCfg::default_instance_ = new WeaponRefitCfg();
  WeaponRefitCfgSet::default_instance_ = new WeaponRefitCfgSet();
  RefitConsumeElement::default_instance_->InitAsDefaultInstance();
  WeaponRefitCfg::default_instance_->InitAsDefaultInstance();
  WeaponRefitCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WeaponRefitCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_WeaponRefitCfg_2eproto_once_);
void protobuf_AddDesc_WeaponRefitCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_WeaponRefitCfg_2eproto_once_,
                 &protobuf_AddDesc_WeaponRefitCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WeaponRefitCfg_2eproto {
  StaticDescriptorInitializer_WeaponRefitCfg_2eproto() {
    protobuf_AddDesc_WeaponRefitCfg_2eproto();
  }
} static_descriptor_initializer_WeaponRefitCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int RefitConsumeElement::kElementIDFieldNumber;
const int RefitConsumeElement::kElementTypeFieldNumber;
const int RefitConsumeElement::kElementCntFieldNumber;
#endif  // !_MSC_VER

RefitConsumeElement::RefitConsumeElement()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void RefitConsumeElement::InitAsDefaultInstance() {
}

RefitConsumeElement::RefitConsumeElement(const RefitConsumeElement& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void RefitConsumeElement::SharedCtor() {
  _cached_size_ = 0;
  elementid_ = 0u;
  elementtype_ = 0u;
  elementcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RefitConsumeElement::~RefitConsumeElement() {
  SharedDtor();
}

void RefitConsumeElement::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void RefitConsumeElement::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RefitConsumeElement& RefitConsumeElement::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponRefitCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponRefitCfg_2eproto();
#endif
  return *default_instance_;
}

RefitConsumeElement* RefitConsumeElement::default_instance_ = NULL;

RefitConsumeElement* RefitConsumeElement::New() const {
  return new RefitConsumeElement;
}

void RefitConsumeElement::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    elementid_ = 0u;
    elementtype_ = 0u;
    elementcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool RefitConsumeElement::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ElementID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &elementid_)));
          set_has_elementid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ElementType;
        break;
      }

      // required uint32 ElementType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ElementType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &elementtype_)));
          set_has_elementtype();
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

void RefitConsumeElement::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ElementID = 1;
  if (has_elementid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->elementid(), output);
  }

  // required uint32 ElementType = 2;
  if (has_elementtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->elementtype(), output);
  }

  // required uint32 ElementCnt = 3;
  if (has_elementcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->elementcnt(), output);
  }

}

int RefitConsumeElement::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ElementID = 1;
    if (has_elementid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->elementid());
    }

    // required uint32 ElementType = 2;
    if (has_elementtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->elementtype());
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

void RefitConsumeElement::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RefitConsumeElement*>(&from));
}

void RefitConsumeElement::MergeFrom(const RefitConsumeElement& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_elementid()) {
      set_elementid(from.elementid());
    }
    if (from.has_elementtype()) {
      set_elementtype(from.elementtype());
    }
    if (from.has_elementcnt()) {
      set_elementcnt(from.elementcnt());
    }
  }
}

void RefitConsumeElement::CopyFrom(const RefitConsumeElement& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RefitConsumeElement::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void RefitConsumeElement::Swap(RefitConsumeElement* other) {
  if (other != this) {
    std::swap(elementid_, other->elementid_);
    std::swap(elementtype_, other->elementtype_);
    std::swap(elementcnt_, other->elementcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string RefitConsumeElement::GetTypeName() const {
  return "com.cfg.vo.RefitConsumeElement";
}


// ===================================================================

#ifndef _MSC_VER
const int WeaponRefitCfg::kWeaponTypeIDFieldNumber;
const int WeaponRefitCfg::kColorFieldNumber;
const int WeaponRefitCfg::kElmtListFieldNumber;
#endif  // !_MSC_VER

WeaponRefitCfg::WeaponRefitCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponRefitCfg::InitAsDefaultInstance() {
}

WeaponRefitCfg::WeaponRefitCfg(const WeaponRefitCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponRefitCfg::SharedCtor() {
  _cached_size_ = 0;
  weapontypeid_ = 0u;
  color_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponRefitCfg::~WeaponRefitCfg() {
  SharedDtor();
}

void WeaponRefitCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponRefitCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponRefitCfg& WeaponRefitCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponRefitCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponRefitCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponRefitCfg* WeaponRefitCfg::default_instance_ = NULL;

WeaponRefitCfg* WeaponRefitCfg::New() const {
  return new WeaponRefitCfg;
}

void WeaponRefitCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    weapontypeid_ = 0u;
    color_ = 0u;
  }
  elmtlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponRefitCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 WeaponTypeID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weapontypeid_)));
          set_has_weapontypeid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Color;
        break;
      }

      // required uint32 Color = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Color:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &color_)));
          set_has_color();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtList;
        break;
      }

      // repeated .com.cfg.vo.RefitConsumeElement ElmtList = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ElmtList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_elmtlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ElmtList;
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

void WeaponRefitCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 WeaponTypeID = 1;
  if (has_weapontypeid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->weapontypeid(), output);
  }

  // required uint32 Color = 2;
  if (has_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->color(), output);
  }

  // repeated .com.cfg.vo.RefitConsumeElement ElmtList = 3;
  for (int i = 0; i < this->elmtlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->elmtlist(i), output);
  }

}

int WeaponRefitCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 WeaponTypeID = 1;
    if (has_weapontypeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->weapontypeid());
    }

    // required uint32 Color = 2;
    if (has_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->color());
    }

  }
  // repeated .com.cfg.vo.RefitConsumeElement ElmtList = 3;
  total_size += 1 * this->elmtlist_size();
  for (int i = 0; i < this->elmtlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->elmtlist(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponRefitCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponRefitCfg*>(&from));
}

void WeaponRefitCfg::MergeFrom(const WeaponRefitCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtlist_.MergeFrom(from.elmtlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_weapontypeid()) {
      set_weapontypeid(from.weapontypeid());
    }
    if (from.has_color()) {
      set_color(from.color());
    }
  }
}

void WeaponRefitCfg::CopyFrom(const WeaponRefitCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponRefitCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < elmtlist_size(); i++) {
    if (!this->elmtlist(i).IsInitialized()) return false;
  }
  return true;
}

void WeaponRefitCfg::Swap(WeaponRefitCfg* other) {
  if (other != this) {
    std::swap(weapontypeid_, other->weapontypeid_);
    std::swap(color_, other->color_);
    elmtlist_.Swap(&other->elmtlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponRefitCfg::GetTypeName() const {
  return "com.cfg.vo.WeaponRefitCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int WeaponRefitCfgSet::kWeaponrefitcfgFieldNumber;
#endif  // !_MSC_VER

WeaponRefitCfgSet::WeaponRefitCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponRefitCfgSet::InitAsDefaultInstance() {
}

WeaponRefitCfgSet::WeaponRefitCfgSet(const WeaponRefitCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponRefitCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponRefitCfgSet::~WeaponRefitCfgSet() {
  SharedDtor();
}

void WeaponRefitCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponRefitCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponRefitCfgSet& WeaponRefitCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponRefitCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponRefitCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponRefitCfgSet* WeaponRefitCfgSet::default_instance_ = NULL;

WeaponRefitCfgSet* WeaponRefitCfgSet::New() const {
  return new WeaponRefitCfgSet;
}

void WeaponRefitCfgSet::Clear() {
  weaponrefitcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponRefitCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.WeaponRefitCfg weaponrefitcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_weaponrefitcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_weaponrefitcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_weaponrefitcfg;
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

void WeaponRefitCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.WeaponRefitCfg weaponrefitcfg = 1;
  for (int i = 0; i < this->weaponrefitcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->weaponrefitcfg(i), output);
  }

}

int WeaponRefitCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.WeaponRefitCfg weaponrefitcfg = 1;
  total_size += 1 * this->weaponrefitcfg_size();
  for (int i = 0; i < this->weaponrefitcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->weaponrefitcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponRefitCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponRefitCfgSet*>(&from));
}

void WeaponRefitCfgSet::MergeFrom(const WeaponRefitCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  weaponrefitcfg_.MergeFrom(from.weaponrefitcfg_);
}

void WeaponRefitCfgSet::CopyFrom(const WeaponRefitCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponRefitCfgSet::IsInitialized() const {

  for (int i = 0; i < weaponrefitcfg_size(); i++) {
    if (!this->weaponrefitcfg(i).IsInitialized()) return false;
  }
  return true;
}

void WeaponRefitCfgSet::Swap(WeaponRefitCfgSet* other) {
  if (other != this) {
    weaponrefitcfg_.Swap(&other->weaponrefitcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponRefitCfgSet::GetTypeName() const {
  return "com.cfg.vo.WeaponRefitCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
