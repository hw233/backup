// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: QiangHunCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "QiangHunCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_QiangHunCfg_2eproto() {
  delete QiangHunElementCfg::default_instance_;
  delete QiangHunGetElement::default_instance_;
  delete QiangHunCfg::default_instance_;
  delete QiangHunCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_QiangHunCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_QiangHunCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  QiangHunElementCfg::default_instance_ = new QiangHunElementCfg();
  QiangHunGetElement::default_instance_ = new QiangHunGetElement();
  QiangHunCfg::default_instance_ = new QiangHunCfg();
  QiangHunCfgSet::default_instance_ = new QiangHunCfgSet();
  QiangHunElementCfg::default_instance_->InitAsDefaultInstance();
  QiangHunGetElement::default_instance_->InitAsDefaultInstance();
  QiangHunCfg::default_instance_->InitAsDefaultInstance();
  QiangHunCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_QiangHunCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_QiangHunCfg_2eproto_once_);
void protobuf_AddDesc_QiangHunCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_QiangHunCfg_2eproto_once_,
                 &protobuf_AddDesc_QiangHunCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_QiangHunCfg_2eproto {
  StaticDescriptorInitializer_QiangHunCfg_2eproto() {
    protobuf_AddDesc_QiangHunCfg_2eproto();
  }
} static_descriptor_initializer_QiangHunCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int QiangHunElementCfg::kIsKeyFieldNumber;
const int QiangHunElementCfg::kTypeFieldNumber;
const int QiangHunElementCfg::kCfgIDFieldNumber;
const int QiangHunElementCfg::kCntFieldNumber;
const int QiangHunElementCfg::kProbFieldNumber;
#endif  // !_MSC_VER

QiangHunElementCfg::QiangHunElementCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void QiangHunElementCfg::InitAsDefaultInstance() {
}

QiangHunElementCfg::QiangHunElementCfg(const QiangHunElementCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void QiangHunElementCfg::SharedCtor() {
  _cached_size_ = 0;
  iskey_ = 0u;
  type_ = 0u;
  cfgid_ = 0u;
  cnt_ = 0u;
  prob_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QiangHunElementCfg::~QiangHunElementCfg() {
  SharedDtor();
}

void QiangHunElementCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void QiangHunElementCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const QiangHunElementCfg& QiangHunElementCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_QiangHunCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_QiangHunCfg_2eproto();
#endif
  return *default_instance_;
}

QiangHunElementCfg* QiangHunElementCfg::default_instance_ = NULL;

QiangHunElementCfg* QiangHunElementCfg::New() const {
  return new QiangHunElementCfg;
}

void QiangHunElementCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    iskey_ = 0u;
    type_ = 0u;
    cfgid_ = 0u;
    cnt_ = 0u;
    prob_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool QiangHunElementCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 IsKey = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &iskey_)));
          set_has_iskey();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Type;
        break;
      }

      // required uint32 Type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_CfgID;
        break;
      }

      // required uint32 CfgID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CfgID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cfgid_)));
          set_has_cfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_Cnt;
        break;
      }

      // required uint32 Cnt = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Cnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cnt_)));
          set_has_cnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_Prob;
        break;
      }

      // required uint32 Prob = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Prob:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prob_)));
          set_has_prob();
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

void QiangHunElementCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 IsKey = 1;
  if (has_iskey()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->iskey(), output);
  }

  // required uint32 Type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->type(), output);
  }

  // required uint32 CfgID = 3;
  if (has_cfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->cfgid(), output);
  }

  // required uint32 Cnt = 4;
  if (has_cnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->cnt(), output);
  }

  // required uint32 Prob = 5;
  if (has_prob()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->prob(), output);
  }

}

int QiangHunElementCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 IsKey = 1;
    if (has_iskey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->iskey());
    }

    // required uint32 Type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 CfgID = 3;
    if (has_cfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cfgid());
    }

    // required uint32 Cnt = 4;
    if (has_cnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cnt());
    }

    // required uint32 Prob = 5;
    if (has_prob()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->prob());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QiangHunElementCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QiangHunElementCfg*>(&from));
}

void QiangHunElementCfg::MergeFrom(const QiangHunElementCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_iskey()) {
      set_iskey(from.iskey());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_cfgid()) {
      set_cfgid(from.cfgid());
    }
    if (from.has_cnt()) {
      set_cnt(from.cnt());
    }
    if (from.has_prob()) {
      set_prob(from.prob());
    }
  }
}

void QiangHunElementCfg::CopyFrom(const QiangHunElementCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QiangHunElementCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void QiangHunElementCfg::Swap(QiangHunElementCfg* other) {
  if (other != this) {
    std::swap(iskey_, other->iskey_);
    std::swap(type_, other->type_);
    std::swap(cfgid_, other->cfgid_);
    std::swap(cnt_, other->cnt_);
    std::swap(prob_, other->prob_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string QiangHunElementCfg::GetTypeName() const {
  return "com.cfg.vo.QiangHunElementCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int QiangHunGetElement::kTypeFieldNumber;
const int QiangHunGetElement::kCfgIDFieldNumber;
const int QiangHunGetElement::kCountDescFieldNumber;
#endif  // !_MSC_VER

QiangHunGetElement::QiangHunGetElement()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void QiangHunGetElement::InitAsDefaultInstance() {
}

QiangHunGetElement::QiangHunGetElement(const QiangHunGetElement& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void QiangHunGetElement::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  cfgid_ = 0u;
  countdesc_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QiangHunGetElement::~QiangHunGetElement() {
  SharedDtor();
}

void QiangHunGetElement::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void QiangHunGetElement::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const QiangHunGetElement& QiangHunGetElement::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_QiangHunCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_QiangHunCfg_2eproto();
#endif
  return *default_instance_;
}

QiangHunGetElement* QiangHunGetElement::default_instance_ = NULL;

QiangHunGetElement* QiangHunGetElement::New() const {
  return new QiangHunGetElement;
}

void QiangHunGetElement::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    cfgid_ = 0u;
    countdesc_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool QiangHunGetElement::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_CfgID;
        break;
      }

      // required uint32 CfgID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CfgID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cfgid_)));
          set_has_cfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_CountDesc;
        break;
      }

      // required uint32 CountDesc = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CountDesc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &countdesc_)));
          set_has_countdesc();
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

void QiangHunGetElement::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // required uint32 CfgID = 2;
  if (has_cfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cfgid(), output);
  }

  // required uint32 CountDesc = 3;
  if (has_countdesc()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->countdesc(), output);
  }

}

int QiangHunGetElement::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 CfgID = 2;
    if (has_cfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cfgid());
    }

    // required uint32 CountDesc = 3;
    if (has_countdesc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->countdesc());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QiangHunGetElement::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QiangHunGetElement*>(&from));
}

void QiangHunGetElement::MergeFrom(const QiangHunGetElement& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_cfgid()) {
      set_cfgid(from.cfgid());
    }
    if (from.has_countdesc()) {
      set_countdesc(from.countdesc());
    }
  }
}

void QiangHunGetElement::CopyFrom(const QiangHunGetElement& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QiangHunGetElement::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void QiangHunGetElement::Swap(QiangHunGetElement* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(cfgid_, other->cfgid_);
    std::swap(countdesc_, other->countdesc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string QiangHunGetElement::GetTypeName() const {
  return "com.cfg.vo.QiangHunGetElement";
}


// ===================================================================

#ifndef _MSC_VER
const int QiangHunCfg::kLayerFieldNumber;
const int QiangHunCfg::kMinLevelFieldNumber;
const int QiangHunCfg::kMaxLevelFieldNumber;
const int QiangHunCfg::kElmtCfgsFieldNumber;
const int QiangHunCfg::kGetElmtsFieldNumber;
#endif  // !_MSC_VER

QiangHunCfg::QiangHunCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void QiangHunCfg::InitAsDefaultInstance() {
}

QiangHunCfg::QiangHunCfg(const QiangHunCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void QiangHunCfg::SharedCtor() {
  _cached_size_ = 0;
  layer_ = 0u;
  minlevel_ = 0u;
  maxlevel_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QiangHunCfg::~QiangHunCfg() {
  SharedDtor();
}

void QiangHunCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void QiangHunCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const QiangHunCfg& QiangHunCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_QiangHunCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_QiangHunCfg_2eproto();
#endif
  return *default_instance_;
}

QiangHunCfg* QiangHunCfg::default_instance_ = NULL;

QiangHunCfg* QiangHunCfg::New() const {
  return new QiangHunCfg;
}

void QiangHunCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    layer_ = 0u;
    minlevel_ = 0u;
    maxlevel_ = 0u;
  }
  elmtcfgs_.Clear();
  getelmts_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool QiangHunCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Layer = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &layer_)));
          set_has_layer();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_MinLevel;
        break;
      }

      // required uint32 MinLevel = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MinLevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minlevel_)));
          set_has_minlevel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MaxLevel;
        break;
      }

      // required uint32 MaxLevel = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MaxLevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxlevel_)));
          set_has_maxlevel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_ElmtCfgs;
        break;
      }

      // repeated .com.cfg.vo.QiangHunElementCfg ElmtCfgs = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ElmtCfgs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_elmtcfgs()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_ElmtCfgs;
        if (input->ExpectTag(42)) goto parse_GetElmts;
        break;
      }

      // repeated .com.cfg.vo.QiangHunGetElement GetElmts = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_GetElmts:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_getelmts()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_GetElmts;
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

void QiangHunCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Layer = 1;
  if (has_layer()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->layer(), output);
  }

  // required uint32 MinLevel = 2;
  if (has_minlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->minlevel(), output);
  }

  // required uint32 MaxLevel = 3;
  if (has_maxlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->maxlevel(), output);
  }

  // repeated .com.cfg.vo.QiangHunElementCfg ElmtCfgs = 4;
  for (int i = 0; i < this->elmtcfgs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->elmtcfgs(i), output);
  }

  // repeated .com.cfg.vo.QiangHunGetElement GetElmts = 5;
  for (int i = 0; i < this->getelmts_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->getelmts(i), output);
  }

}

int QiangHunCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Layer = 1;
    if (has_layer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->layer());
    }

    // required uint32 MinLevel = 2;
    if (has_minlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->minlevel());
    }

    // required uint32 MaxLevel = 3;
    if (has_maxlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxlevel());
    }

  }
  // repeated .com.cfg.vo.QiangHunElementCfg ElmtCfgs = 4;
  total_size += 1 * this->elmtcfgs_size();
  for (int i = 0; i < this->elmtcfgs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->elmtcfgs(i));
  }

  // repeated .com.cfg.vo.QiangHunGetElement GetElmts = 5;
  total_size += 1 * this->getelmts_size();
  for (int i = 0; i < this->getelmts_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->getelmts(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QiangHunCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QiangHunCfg*>(&from));
}

void QiangHunCfg::MergeFrom(const QiangHunCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  elmtcfgs_.MergeFrom(from.elmtcfgs_);
  getelmts_.MergeFrom(from.getelmts_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_layer()) {
      set_layer(from.layer());
    }
    if (from.has_minlevel()) {
      set_minlevel(from.minlevel());
    }
    if (from.has_maxlevel()) {
      set_maxlevel(from.maxlevel());
    }
  }
}

void QiangHunCfg::CopyFrom(const QiangHunCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QiangHunCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  for (int i = 0; i < elmtcfgs_size(); i++) {
    if (!this->elmtcfgs(i).IsInitialized()) return false;
  }
  for (int i = 0; i < getelmts_size(); i++) {
    if (!this->getelmts(i).IsInitialized()) return false;
  }
  return true;
}

void QiangHunCfg::Swap(QiangHunCfg* other) {
  if (other != this) {
    std::swap(layer_, other->layer_);
    std::swap(minlevel_, other->minlevel_);
    std::swap(maxlevel_, other->maxlevel_);
    elmtcfgs_.Swap(&other->elmtcfgs_);
    getelmts_.Swap(&other->getelmts_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string QiangHunCfg::GetTypeName() const {
  return "com.cfg.vo.QiangHunCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int QiangHunCfgSet::kQianghuncfgFieldNumber;
#endif  // !_MSC_VER

QiangHunCfgSet::QiangHunCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void QiangHunCfgSet::InitAsDefaultInstance() {
}

QiangHunCfgSet::QiangHunCfgSet(const QiangHunCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void QiangHunCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QiangHunCfgSet::~QiangHunCfgSet() {
  SharedDtor();
}

void QiangHunCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void QiangHunCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const QiangHunCfgSet& QiangHunCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_QiangHunCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_QiangHunCfg_2eproto();
#endif
  return *default_instance_;
}

QiangHunCfgSet* QiangHunCfgSet::default_instance_ = NULL;

QiangHunCfgSet* QiangHunCfgSet::New() const {
  return new QiangHunCfgSet;
}

void QiangHunCfgSet::Clear() {
  qianghuncfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool QiangHunCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.QiangHunCfg qianghuncfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_qianghuncfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_qianghuncfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_qianghuncfg;
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

void QiangHunCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.QiangHunCfg qianghuncfg = 1;
  for (int i = 0; i < this->qianghuncfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->qianghuncfg(i), output);
  }

}

int QiangHunCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.QiangHunCfg qianghuncfg = 1;
  total_size += 1 * this->qianghuncfg_size();
  for (int i = 0; i < this->qianghuncfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->qianghuncfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QiangHunCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QiangHunCfgSet*>(&from));
}

void QiangHunCfgSet::MergeFrom(const QiangHunCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  qianghuncfg_.MergeFrom(from.qianghuncfg_);
}

void QiangHunCfgSet::CopyFrom(const QiangHunCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QiangHunCfgSet::IsInitialized() const {

  for (int i = 0; i < qianghuncfg_size(); i++) {
    if (!this->qianghuncfg(i).IsInitialized()) return false;
  }
  return true;
}

void QiangHunCfgSet::Swap(QiangHunCfgSet* other) {
  if (other != this) {
    qianghuncfg_.Swap(&other->qianghuncfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string QiangHunCfgSet::GetTypeName() const {
  return "com.cfg.vo.QiangHunCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
