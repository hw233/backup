// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FBShareCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "FBShareCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_FBShareCfg_2eproto() {
  delete FBShareCfg::default_instance_;
  delete FBShareCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_FBShareCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_FBShareCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  FBShareCfg::default_instance_ = new FBShareCfg();
  FBShareCfgSet::default_instance_ = new FBShareCfgSet();
  FBShareCfg::default_instance_->InitAsDefaultInstance();
  FBShareCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_FBShareCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_FBShareCfg_2eproto_once_);
void protobuf_AddDesc_FBShareCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_FBShareCfg_2eproto_once_,
                 &protobuf_AddDesc_FBShareCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_FBShareCfg_2eproto {
  StaticDescriptorInitializer_FBShareCfg_2eproto() {
    protobuf_AddDesc_FBShareCfg_2eproto();
  }
} static_descriptor_initializer_FBShareCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int FBShareCfg::kIdFieldNumber;
const int FBShareCfg::kNameFieldNumber;
const int FBShareCfg::kCaptionFieldNumber;
const int FBShareCfg::kDescriptionFieldNumber;
const int FBShareCfg::kLinkFieldNumber;
const int FBShareCfg::kPictureFieldNumber;
#endif  // !_MSC_VER

FBShareCfg::FBShareCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FBShareCfg::InitAsDefaultInstance() {
}

FBShareCfg::FBShareCfg(const FBShareCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FBShareCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  caption_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  link_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  picture_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FBShareCfg::~FBShareCfg() {
  SharedDtor();
}

void FBShareCfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (caption_ != &::google::protobuf::internal::kEmptyString) {
    delete caption_;
  }
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    delete description_;
  }
  if (link_ != &::google::protobuf::internal::kEmptyString) {
    delete link_;
  }
  if (picture_ != &::google::protobuf::internal::kEmptyString) {
    delete picture_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FBShareCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FBShareCfg& FBShareCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_FBShareCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_FBShareCfg_2eproto();
#endif
  return *default_instance_;
}

FBShareCfg* FBShareCfg::default_instance_ = NULL;

FBShareCfg* FBShareCfg::New() const {
  return new FBShareCfg;
}

void FBShareCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_caption()) {
      if (caption_ != &::google::protobuf::internal::kEmptyString) {
        caption_->clear();
      }
    }
    if (has_description()) {
      if (description_ != &::google::protobuf::internal::kEmptyString) {
        description_->clear();
      }
    }
    if (has_link()) {
      if (link_ != &::google::protobuf::internal::kEmptyString) {
        link_->clear();
      }
    }
    if (has_picture()) {
      if (picture_ != &::google::protobuf::internal::kEmptyString) {
        picture_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FBShareCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
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
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_caption;
        break;
      }

      // required string caption = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_caption:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_caption()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_description;
        break;
      }

      // required string description = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_link;
        break;
      }

      // required string link = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_link:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_picture;
        break;
      }

      // required string picture = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_picture:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_picture()));
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

void FBShareCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required string caption = 3;
  if (has_caption()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->caption(), output);
  }

  // required string description = 4;
  if (has_description()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->description(), output);
  }

  // required string link = 5;
  if (has_link()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->link(), output);
  }

  // required string picture = 6;
  if (has_picture()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->picture(), output);
  }

}

int FBShareCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required string caption = 3;
    if (has_caption()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->caption());
    }

    // required string description = 4;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }

    // required string link = 5;
    if (has_link()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->link());
    }

    // required string picture = 6;
    if (has_picture()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->picture());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FBShareCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FBShareCfg*>(&from));
}

void FBShareCfg::MergeFrom(const FBShareCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_caption()) {
      set_caption(from.caption());
    }
    if (from.has_description()) {
      set_description(from.description());
    }
    if (from.has_link()) {
      set_link(from.link());
    }
    if (from.has_picture()) {
      set_picture(from.picture());
    }
  }
}

void FBShareCfg::CopyFrom(const FBShareCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FBShareCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void FBShareCfg::Swap(FBShareCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    std::swap(caption_, other->caption_);
    std::swap(description_, other->description_);
    std::swap(link_, other->link_);
    std::swap(picture_, other->picture_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FBShareCfg::GetTypeName() const {
  return "com.cfg.vo.FBShareCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int FBShareCfgSet::kFbShareCfgFieldNumber;
#endif  // !_MSC_VER

FBShareCfgSet::FBShareCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FBShareCfgSet::InitAsDefaultInstance() {
}

FBShareCfgSet::FBShareCfgSet(const FBShareCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FBShareCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FBShareCfgSet::~FBShareCfgSet() {
  SharedDtor();
}

void FBShareCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FBShareCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FBShareCfgSet& FBShareCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_FBShareCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_FBShareCfg_2eproto();
#endif
  return *default_instance_;
}

FBShareCfgSet* FBShareCfgSet::default_instance_ = NULL;

FBShareCfgSet* FBShareCfgSet::New() const {
  return new FBShareCfgSet;
}

void FBShareCfgSet::Clear() {
  fbsharecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FBShareCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.FBShareCfg fbShareCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_fbShareCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_fbsharecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_fbShareCfg;
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

void FBShareCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.FBShareCfg fbShareCfg = 1;
  for (int i = 0; i < this->fbsharecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->fbsharecfg(i), output);
  }

}

int FBShareCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.FBShareCfg fbShareCfg = 1;
  total_size += 1 * this->fbsharecfg_size();
  for (int i = 0; i < this->fbsharecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fbsharecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FBShareCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FBShareCfgSet*>(&from));
}

void FBShareCfgSet::MergeFrom(const FBShareCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  fbsharecfg_.MergeFrom(from.fbsharecfg_);
}

void FBShareCfgSet::CopyFrom(const FBShareCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FBShareCfgSet::IsInitialized() const {

  for (int i = 0; i < fbsharecfg_size(); i++) {
    if (!this->fbsharecfg(i).IsInitialized()) return false;
  }
  return true;
}

void FBShareCfgSet::Swap(FBShareCfgSet* other) {
  if (other != this) {
    fbsharecfg_.Swap(&other->fbsharecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FBShareCfgSet::GetTypeName() const {
  return "com.cfg.vo.FBShareCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
