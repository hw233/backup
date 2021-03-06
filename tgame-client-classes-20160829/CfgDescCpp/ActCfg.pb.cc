// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ActCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ActCfg_2eproto() {
  delete ActCfg::default_instance_;
  delete ActCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ActCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ActCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ActCfg::default_instance_ = new ActCfg();
  ActCfgSet::default_instance_ = new ActCfgSet();
  ActCfg::default_instance_->InitAsDefaultInstance();
  ActCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ActCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ActCfg_2eproto_once_);
void protobuf_AddDesc_ActCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ActCfg_2eproto_once_,
                 &protobuf_AddDesc_ActCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ActCfg_2eproto {
  StaticDescriptorInitializer_ActCfg_2eproto() {
    protobuf_AddDesc_ActCfg_2eproto();
  }
} static_descriptor_initializer_ActCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ActCfg::kTypeFieldNumber;
const int ActCfg::kNameFieldNumber;
const int ActCfg::kActIconFieldNumber;
const int ActCfg::kContentFieldNumber;
const int ActCfg::kTimeFieldNumber;
const int ActCfg::kTimeLabelFieldNumber;
const int ActCfg::kActStyleFieldNumber;
const int ActCfg::kOrderFieldNumber;
#endif  // !_MSC_VER

ActCfg::ActCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ActCfg::InitAsDefaultInstance() {
}

ActCfg::ActCfg(const ActCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ActCfg::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  acticon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  timelabel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  actstyle_ = 0u;
  order_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActCfg::~ActCfg() {
  SharedDtor();
}

void ActCfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (acticon_ != &::google::protobuf::internal::kEmptyString) {
    delete acticon_;
  }
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    delete time_;
  }
  if (timelabel_ != &::google::protobuf::internal::kEmptyString) {
    delete timelabel_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActCfg& ActCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActCfg_2eproto();
#endif
  return *default_instance_;
}

ActCfg* ActCfg::default_instance_ = NULL;

ActCfg* ActCfg::New() const {
  return new ActCfg;
}

void ActCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_acticon()) {
      if (acticon_ != &::google::protobuf::internal::kEmptyString) {
        acticon_->clear();
      }
    }
    if (has_content()) {
      if (content_ != &::google::protobuf::internal::kEmptyString) {
        content_->clear();
      }
    }
    if (has_time()) {
      if (time_ != &::google::protobuf::internal::kEmptyString) {
        time_->clear();
      }
    }
    if (has_timelabel()) {
      if (timelabel_ != &::google::protobuf::internal::kEmptyString) {
        timelabel_->clear();
      }
    }
    actstyle_ = 0u;
    order_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ActCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Name;
        break;
      }

      // required string Name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ActIcon;
        break;
      }

      // required string ActIcon = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ActIcon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_acticon()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Content;
        break;
      }

      // required string Content = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_Time;
        break;
      }

      // required string Time = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_time()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_TimeLabel;
        break;
      }

      // required string TimeLabel = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_TimeLabel:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timelabel()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_ActStyle;
        break;
      }

      // required uint32 ActStyle = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ActStyle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &actstyle_)));
          set_has_actstyle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_Order;
        break;
      }

      // required uint32 Order = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &order_)));
          set_has_order();
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

void ActCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // required string Name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required string ActIcon = 3;
  if (has_acticon()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->acticon(), output);
  }

  // required string Content = 4;
  if (has_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->content(), output);
  }

  // required string Time = 5;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->time(), output);
  }

  // required string TimeLabel = 6;
  if (has_timelabel()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->timelabel(), output);
  }

  // required uint32 ActStyle = 7;
  if (has_actstyle()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->actstyle(), output);
  }

  // required uint32 Order = 8;
  if (has_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->order(), output);
  }

}

int ActCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required string Name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required string ActIcon = 3;
    if (has_acticon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->acticon());
    }

    // required string Content = 4;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->content());
    }

    // required string Time = 5;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->time());
    }

    // required string TimeLabel = 6;
    if (has_timelabel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->timelabel());
    }

    // required uint32 ActStyle = 7;
    if (has_actstyle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->actstyle());
    }

    // required uint32 Order = 8;
    if (has_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->order());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActCfg*>(&from));
}

void ActCfg::MergeFrom(const ActCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_acticon()) {
      set_acticon(from.acticon());
    }
    if (from.has_content()) {
      set_content(from.content());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_timelabel()) {
      set_timelabel(from.timelabel());
    }
    if (from.has_actstyle()) {
      set_actstyle(from.actstyle());
    }
    if (from.has_order()) {
      set_order(from.order());
    }
  }
}

void ActCfg::CopyFrom(const ActCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000ff) != 0x000000ff) return false;

  return true;
}

void ActCfg::Swap(ActCfg* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(name_, other->name_);
    std::swap(acticon_, other->acticon_);
    std::swap(content_, other->content_);
    std::swap(time_, other->time_);
    std::swap(timelabel_, other->timelabel_);
    std::swap(actstyle_, other->actstyle_);
    std::swap(order_, other->order_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActCfg::GetTypeName() const {
  return "com.cfg.vo.ActCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ActCfgSet::kActCfgFieldNumber;
#endif  // !_MSC_VER

ActCfgSet::ActCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ActCfgSet::InitAsDefaultInstance() {
}

ActCfgSet::ActCfgSet(const ActCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ActCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActCfgSet::~ActCfgSet() {
  SharedDtor();
}

void ActCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActCfgSet& ActCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActCfg_2eproto();
#endif
  return *default_instance_;
}

ActCfgSet* ActCfgSet::default_instance_ = NULL;

ActCfgSet* ActCfgSet::New() const {
  return new ActCfgSet;
}

void ActCfgSet::Clear() {
  actcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ActCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ActCfg actCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_actCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_actcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_actCfg;
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

void ActCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ActCfg actCfg = 1;
  for (int i = 0; i < this->actcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->actcfg(i), output);
  }

}

int ActCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ActCfg actCfg = 1;
  total_size += 1 * this->actcfg_size();
  for (int i = 0; i < this->actcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->actcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActCfgSet*>(&from));
}

void ActCfgSet::MergeFrom(const ActCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  actcfg_.MergeFrom(from.actcfg_);
}

void ActCfgSet::CopyFrom(const ActCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActCfgSet::IsInitialized() const {

  for (int i = 0; i < actcfg_size(); i++) {
    if (!this->actcfg(i).IsInitialized()) return false;
  }
  return true;
}

void ActCfgSet::Swap(ActCfgSet* other) {
  if (other != this) {
    actcfg_.Swap(&other->actcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActCfgSet::GetTypeName() const {
  return "com.cfg.vo.ActCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
