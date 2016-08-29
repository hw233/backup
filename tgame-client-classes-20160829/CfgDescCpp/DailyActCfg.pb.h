// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DailyActCfg.proto

#ifndef PROTOBUF_DailyActCfg_2eproto__INCLUDED
#define PROTOBUF_DailyActCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DailyActCfg_2eproto();
void protobuf_AssignDesc_DailyActCfg_2eproto();
void protobuf_ShutdownFile_DailyActCfg_2eproto();

class DailyActCfg;
class DailyActCfgSet;

// ===================================================================

class DailyActCfg : public ::google::protobuf::MessageLite {
 public:
  DailyActCfg();
  virtual ~DailyActCfg();

  DailyActCfg(const DailyActCfg& from);

  inline DailyActCfg& operator=(const DailyActCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const DailyActCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DailyActCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DailyActCfg* other);

  // implements Message ----------------------------------------------

  DailyActCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DailyActCfg& from);
  void MergeFrom(const DailyActCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ActID = 1;
  inline bool has_actid() const;
  inline void clear_actid();
  static const int kActIDFieldNumber = 1;
  inline ::google::protobuf::uint32 actid() const;
  inline void set_actid(::google::protobuf::uint32 value);

  // required string ActIcon = 2;
  inline bool has_acticon() const;
  inline void clear_acticon();
  static const int kActIconFieldNumber = 2;
  inline const ::std::string& acticon() const;
  inline void set_acticon(const ::std::string& value);
  inline void set_acticon(const char* value);
  inline void set_acticon(const char* value, size_t size);
  inline ::std::string* mutable_acticon();
  inline ::std::string* release_acticon();
  inline void set_allocated_acticon(::std::string* acticon);

  // required string TitleImg = 3;
  inline bool has_titleimg() const;
  inline void clear_titleimg();
  static const int kTitleImgFieldNumber = 3;
  inline const ::std::string& titleimg() const;
  inline void set_titleimg(const ::std::string& value);
  inline void set_titleimg(const char* value);
  inline void set_titleimg(const char* value, size_t size);
  inline ::std::string* mutable_titleimg();
  inline ::std::string* release_titleimg();
  inline void set_allocated_titleimg(::std::string* titleimg);

  // required string TimeDesc = 4;
  inline bool has_timedesc() const;
  inline void clear_timedesc();
  static const int kTimeDescFieldNumber = 4;
  inline const ::std::string& timedesc() const;
  inline void set_timedesc(const ::std::string& value);
  inline void set_timedesc(const char* value);
  inline void set_timedesc(const char* value, size_t size);
  inline ::std::string* mutable_timedesc();
  inline ::std::string* release_timedesc();
  inline void set_allocated_timedesc(::std::string* timedesc);

  // required string AwardDesc = 5;
  inline bool has_awarddesc() const;
  inline void clear_awarddesc();
  static const int kAwardDescFieldNumber = 5;
  inline const ::std::string& awarddesc() const;
  inline void set_awarddesc(const ::std::string& value);
  inline void set_awarddesc(const char* value);
  inline void set_awarddesc(const char* value, size_t size);
  inline ::std::string* mutable_awarddesc();
  inline ::std::string* release_awarddesc();
  inline void set_allocated_awarddesc(::std::string* awarddesc);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DailyActCfg)
 private:
  inline void set_has_actid();
  inline void clear_has_actid();
  inline void set_has_acticon();
  inline void clear_has_acticon();
  inline void set_has_titleimg();
  inline void clear_has_titleimg();
  inline void set_has_timedesc();
  inline void clear_has_timedesc();
  inline void set_has_awarddesc();
  inline void clear_has_awarddesc();

  ::std::string* acticon_;
  ::std::string* titleimg_;
  ::std::string* timedesc_;
  ::std::string* awarddesc_;
  ::google::protobuf::uint32 actid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DailyActCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DailyActCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DailyActCfg_2eproto();
  friend void protobuf_ShutdownFile_DailyActCfg_2eproto();

  void InitAsDefaultInstance();
  static DailyActCfg* default_instance_;
};
// -------------------------------------------------------------------

class DailyActCfgSet : public ::google::protobuf::MessageLite {
 public:
  DailyActCfgSet();
  virtual ~DailyActCfgSet();

  DailyActCfgSet(const DailyActCfgSet& from);

  inline DailyActCfgSet& operator=(const DailyActCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const DailyActCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DailyActCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DailyActCfgSet* other);

  // implements Message ----------------------------------------------

  DailyActCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DailyActCfgSet& from);
  void MergeFrom(const DailyActCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.DailyActCfg dailyActCfg = 1;
  inline int dailyactcfg_size() const;
  inline void clear_dailyactcfg();
  static const int kDailyActCfgFieldNumber = 1;
  inline const ::com::cfg::vo::DailyActCfg& dailyactcfg(int index) const;
  inline ::com::cfg::vo::DailyActCfg* mutable_dailyactcfg(int index);
  inline ::com::cfg::vo::DailyActCfg* add_dailyactcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyActCfg >&
      dailyactcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyActCfg >*
      mutable_dailyactcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DailyActCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyActCfg > dailyactcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DailyActCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DailyActCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DailyActCfg_2eproto();
  friend void protobuf_ShutdownFile_DailyActCfg_2eproto();

  void InitAsDefaultInstance();
  static DailyActCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// DailyActCfg

// required uint32 ActID = 1;
inline bool DailyActCfg::has_actid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DailyActCfg::set_has_actid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DailyActCfg::clear_has_actid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DailyActCfg::clear_actid() {
  actid_ = 0u;
  clear_has_actid();
}
inline ::google::protobuf::uint32 DailyActCfg::actid() const {
  return actid_;
}
inline void DailyActCfg::set_actid(::google::protobuf::uint32 value) {
  set_has_actid();
  actid_ = value;
}

// required string ActIcon = 2;
inline bool DailyActCfg::has_acticon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DailyActCfg::set_has_acticon() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DailyActCfg::clear_has_acticon() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DailyActCfg::clear_acticon() {
  if (acticon_ != &::google::protobuf::internal::kEmptyString) {
    acticon_->clear();
  }
  clear_has_acticon();
}
inline const ::std::string& DailyActCfg::acticon() const {
  return *acticon_;
}
inline void DailyActCfg::set_acticon(const ::std::string& value) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(value);
}
inline void DailyActCfg::set_acticon(const char* value) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(value);
}
inline void DailyActCfg::set_acticon(const char* value, size_t size) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DailyActCfg::mutable_acticon() {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  return acticon_;
}
inline ::std::string* DailyActCfg::release_acticon() {
  clear_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = acticon_;
    acticon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DailyActCfg::set_allocated_acticon(::std::string* acticon) {
  if (acticon_ != &::google::protobuf::internal::kEmptyString) {
    delete acticon_;
  }
  if (acticon) {
    set_has_acticon();
    acticon_ = acticon;
  } else {
    clear_has_acticon();
    acticon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string TitleImg = 3;
inline bool DailyActCfg::has_titleimg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DailyActCfg::set_has_titleimg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DailyActCfg::clear_has_titleimg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DailyActCfg::clear_titleimg() {
  if (titleimg_ != &::google::protobuf::internal::kEmptyString) {
    titleimg_->clear();
  }
  clear_has_titleimg();
}
inline const ::std::string& DailyActCfg::titleimg() const {
  return *titleimg_;
}
inline void DailyActCfg::set_titleimg(const ::std::string& value) {
  set_has_titleimg();
  if (titleimg_ == &::google::protobuf::internal::kEmptyString) {
    titleimg_ = new ::std::string;
  }
  titleimg_->assign(value);
}
inline void DailyActCfg::set_titleimg(const char* value) {
  set_has_titleimg();
  if (titleimg_ == &::google::protobuf::internal::kEmptyString) {
    titleimg_ = new ::std::string;
  }
  titleimg_->assign(value);
}
inline void DailyActCfg::set_titleimg(const char* value, size_t size) {
  set_has_titleimg();
  if (titleimg_ == &::google::protobuf::internal::kEmptyString) {
    titleimg_ = new ::std::string;
  }
  titleimg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DailyActCfg::mutable_titleimg() {
  set_has_titleimg();
  if (titleimg_ == &::google::protobuf::internal::kEmptyString) {
    titleimg_ = new ::std::string;
  }
  return titleimg_;
}
inline ::std::string* DailyActCfg::release_titleimg() {
  clear_has_titleimg();
  if (titleimg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = titleimg_;
    titleimg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DailyActCfg::set_allocated_titleimg(::std::string* titleimg) {
  if (titleimg_ != &::google::protobuf::internal::kEmptyString) {
    delete titleimg_;
  }
  if (titleimg) {
    set_has_titleimg();
    titleimg_ = titleimg;
  } else {
    clear_has_titleimg();
    titleimg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string TimeDesc = 4;
inline bool DailyActCfg::has_timedesc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DailyActCfg::set_has_timedesc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DailyActCfg::clear_has_timedesc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DailyActCfg::clear_timedesc() {
  if (timedesc_ != &::google::protobuf::internal::kEmptyString) {
    timedesc_->clear();
  }
  clear_has_timedesc();
}
inline const ::std::string& DailyActCfg::timedesc() const {
  return *timedesc_;
}
inline void DailyActCfg::set_timedesc(const ::std::string& value) {
  set_has_timedesc();
  if (timedesc_ == &::google::protobuf::internal::kEmptyString) {
    timedesc_ = new ::std::string;
  }
  timedesc_->assign(value);
}
inline void DailyActCfg::set_timedesc(const char* value) {
  set_has_timedesc();
  if (timedesc_ == &::google::protobuf::internal::kEmptyString) {
    timedesc_ = new ::std::string;
  }
  timedesc_->assign(value);
}
inline void DailyActCfg::set_timedesc(const char* value, size_t size) {
  set_has_timedesc();
  if (timedesc_ == &::google::protobuf::internal::kEmptyString) {
    timedesc_ = new ::std::string;
  }
  timedesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DailyActCfg::mutable_timedesc() {
  set_has_timedesc();
  if (timedesc_ == &::google::protobuf::internal::kEmptyString) {
    timedesc_ = new ::std::string;
  }
  return timedesc_;
}
inline ::std::string* DailyActCfg::release_timedesc() {
  clear_has_timedesc();
  if (timedesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = timedesc_;
    timedesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DailyActCfg::set_allocated_timedesc(::std::string* timedesc) {
  if (timedesc_ != &::google::protobuf::internal::kEmptyString) {
    delete timedesc_;
  }
  if (timedesc) {
    set_has_timedesc();
    timedesc_ = timedesc;
  } else {
    clear_has_timedesc();
    timedesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string AwardDesc = 5;
inline bool DailyActCfg::has_awarddesc() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DailyActCfg::set_has_awarddesc() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DailyActCfg::clear_has_awarddesc() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DailyActCfg::clear_awarddesc() {
  if (awarddesc_ != &::google::protobuf::internal::kEmptyString) {
    awarddesc_->clear();
  }
  clear_has_awarddesc();
}
inline const ::std::string& DailyActCfg::awarddesc() const {
  return *awarddesc_;
}
inline void DailyActCfg::set_awarddesc(const ::std::string& value) {
  set_has_awarddesc();
  if (awarddesc_ == &::google::protobuf::internal::kEmptyString) {
    awarddesc_ = new ::std::string;
  }
  awarddesc_->assign(value);
}
inline void DailyActCfg::set_awarddesc(const char* value) {
  set_has_awarddesc();
  if (awarddesc_ == &::google::protobuf::internal::kEmptyString) {
    awarddesc_ = new ::std::string;
  }
  awarddesc_->assign(value);
}
inline void DailyActCfg::set_awarddesc(const char* value, size_t size) {
  set_has_awarddesc();
  if (awarddesc_ == &::google::protobuf::internal::kEmptyString) {
    awarddesc_ = new ::std::string;
  }
  awarddesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DailyActCfg::mutable_awarddesc() {
  set_has_awarddesc();
  if (awarddesc_ == &::google::protobuf::internal::kEmptyString) {
    awarddesc_ = new ::std::string;
  }
  return awarddesc_;
}
inline ::std::string* DailyActCfg::release_awarddesc() {
  clear_has_awarddesc();
  if (awarddesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = awarddesc_;
    awarddesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DailyActCfg::set_allocated_awarddesc(::std::string* awarddesc) {
  if (awarddesc_ != &::google::protobuf::internal::kEmptyString) {
    delete awarddesc_;
  }
  if (awarddesc) {
    set_has_awarddesc();
    awarddesc_ = awarddesc;
  } else {
    clear_has_awarddesc();
    awarddesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// DailyActCfgSet

// repeated .com.cfg.vo.DailyActCfg dailyActCfg = 1;
inline int DailyActCfgSet::dailyactcfg_size() const {
  return dailyactcfg_.size();
}
inline void DailyActCfgSet::clear_dailyactcfg() {
  dailyactcfg_.Clear();
}
inline const ::com::cfg::vo::DailyActCfg& DailyActCfgSet::dailyactcfg(int index) const {
  return dailyactcfg_.Get(index);
}
inline ::com::cfg::vo::DailyActCfg* DailyActCfgSet::mutable_dailyactcfg(int index) {
  return dailyactcfg_.Mutable(index);
}
inline ::com::cfg::vo::DailyActCfg* DailyActCfgSet::add_dailyactcfg() {
  return dailyactcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyActCfg >&
DailyActCfgSet::dailyactcfg() const {
  return dailyactcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyActCfg >*
DailyActCfgSet::mutable_dailyactcfg() {
  return &dailyactcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DailyActCfg_2eproto__INCLUDED
