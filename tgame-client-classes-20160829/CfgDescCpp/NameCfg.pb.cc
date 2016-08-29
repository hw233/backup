// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NameCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NameCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_NameCfg_2eproto() {
  delete NameCfg::default_instance_;
  delete NameCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_NameCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_NameCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  NameCfg::default_instance_ = new NameCfg();
  NameCfgSet::default_instance_ = new NameCfgSet();
  NameCfg::default_instance_->InitAsDefaultInstance();
  NameCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NameCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_NameCfg_2eproto_once_);
void protobuf_AddDesc_NameCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_NameCfg_2eproto_once_,
                 &protobuf_AddDesc_NameCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NameCfg_2eproto {
  StaticDescriptorInitializer_NameCfg_2eproto() {
    protobuf_AddDesc_NameCfg_2eproto();
  }
} static_descriptor_initializer_NameCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int NameCfg::kIDFieldNumber;
const int NameCfg::kFirstNameFieldNumber;
const int NameCfg::kSecondNameMaleFieldNumber;
const int NameCfg::kSecondNameFemaleFieldNumber;
#endif  // !_MSC_VER

NameCfg::NameCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NameCfg::InitAsDefaultInstance() {
}

NameCfg::NameCfg(const NameCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NameCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  secondnamemale_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  secondnamefemale_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NameCfg::~NameCfg() {
  SharedDtor();
}

void NameCfg::SharedDtor() {
  if (firstname_ != &::google::protobuf::internal::kEmptyString) {
    delete firstname_;
  }
  if (secondnamemale_ != &::google::protobuf::internal::kEmptyString) {
    delete secondnamemale_;
  }
  if (secondnamefemale_ != &::google::protobuf::internal::kEmptyString) {
    delete secondnamefemale_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NameCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NameCfg& NameCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NameCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NameCfg_2eproto();
#endif
  return *default_instance_;
}

NameCfg* NameCfg::default_instance_ = NULL;

NameCfg* NameCfg::New() const {
  return new NameCfg;
}

void NameCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_firstname()) {
      if (firstname_ != &::google::protobuf::internal::kEmptyString) {
        firstname_->clear();
      }
    }
    if (has_secondnamemale()) {
      if (secondnamemale_ != &::google::protobuf::internal::kEmptyString) {
        secondnamemale_->clear();
      }
    }
    if (has_secondnamefemale()) {
      if (secondnamefemale_ != &::google::protobuf::internal::kEmptyString) {
        secondnamefemale_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NameCfg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_FirstName;
        break;
      }

      // required string FirstName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_FirstName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_firstname()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_SecondNameMale;
        break;
      }

      // required string SecondNameMale = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_SecondNameMale:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_secondnamemale()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_SecondNameFemale;
        break;
      }

      // required string SecondNameFemale = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_SecondNameFemale:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_secondnamefemale()));
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

void NameCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string FirstName = 2;
  if (has_firstname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->firstname(), output);
  }

  // required string SecondNameMale = 3;
  if (has_secondnamemale()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->secondnamemale(), output);
  }

  // required string SecondNameFemale = 4;
  if (has_secondnamefemale()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->secondnamefemale(), output);
  }

}

int NameCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string FirstName = 2;
    if (has_firstname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->firstname());
    }

    // required string SecondNameMale = 3;
    if (has_secondnamemale()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->secondnamemale());
    }

    // required string SecondNameFemale = 4;
    if (has_secondnamefemale()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->secondnamefemale());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NameCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NameCfg*>(&from));
}

void NameCfg::MergeFrom(const NameCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_firstname()) {
      set_firstname(from.firstname());
    }
    if (from.has_secondnamemale()) {
      set_secondnamemale(from.secondnamemale());
    }
    if (from.has_secondnamefemale()) {
      set_secondnamefemale(from.secondnamefemale());
    }
  }
}

void NameCfg::CopyFrom(const NameCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NameCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void NameCfg::Swap(NameCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(firstname_, other->firstname_);
    std::swap(secondnamemale_, other->secondnamemale_);
    std::swap(secondnamefemale_, other->secondnamefemale_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NameCfg::GetTypeName() const {
  return "com.cfg.vo.NameCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int NameCfgSet::kNameCfgFieldNumber;
#endif  // !_MSC_VER

NameCfgSet::NameCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NameCfgSet::InitAsDefaultInstance() {
}

NameCfgSet::NameCfgSet(const NameCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NameCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NameCfgSet::~NameCfgSet() {
  SharedDtor();
}

void NameCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NameCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NameCfgSet& NameCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NameCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NameCfg_2eproto();
#endif
  return *default_instance_;
}

NameCfgSet* NameCfgSet::default_instance_ = NULL;

NameCfgSet* NameCfgSet::New() const {
  return new NameCfgSet;
}

void NameCfgSet::Clear() {
  namecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NameCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.NameCfg nameCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nameCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_namecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_nameCfg;
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

void NameCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.NameCfg nameCfg = 1;
  for (int i = 0; i < this->namecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->namecfg(i), output);
  }

}

int NameCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.NameCfg nameCfg = 1;
  total_size += 1 * this->namecfg_size();
  for (int i = 0; i < this->namecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->namecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NameCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NameCfgSet*>(&from));
}

void NameCfgSet::MergeFrom(const NameCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  namecfg_.MergeFrom(from.namecfg_);
}

void NameCfgSet::CopyFrom(const NameCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NameCfgSet::IsInitialized() const {

  for (int i = 0; i < namecfg_size(); i++) {
    if (!this->namecfg(i).IsInitialized()) return false;
  }
  return true;
}

void NameCfgSet::Swap(NameCfgSet* other) {
  if (other != this) {
    namecfg_.Swap(&other->namecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NameCfgSet::GetTypeName() const {
  return "com.cfg.vo.NameCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
