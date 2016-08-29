// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GuideCfg.proto

#ifndef PROTOBUF_GuideCfg_2eproto__INCLUDED
#define PROTOBUF_GuideCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_GuideCfg_2eproto();
void protobuf_AssignDesc_GuideCfg_2eproto();
void protobuf_ShutdownFile_GuideCfg_2eproto();

class GuideCfg;
class GuideCfgSet;

// ===================================================================

class GuideCfg : public ::google::protobuf::MessageLite {
 public:
  GuideCfg();
  virtual ~GuideCfg();

  GuideCfg(const GuideCfg& from);

  inline GuideCfg& operator=(const GuideCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const GuideCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GuideCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GuideCfg* other);

  // implements Message ----------------------------------------------

  GuideCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GuideCfg& from);
  void MergeFrom(const GuideCfg& from);
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

  // required uint32 GuideID = 1;
  inline bool has_guideid() const;
  inline void clear_guideid();
  static const int kGuideIDFieldNumber = 1;
  inline ::google::protobuf::uint32 guideid() const;
  inline void set_guideid(::google::protobuf::uint32 value);

  // required string GuideName = 2;
  inline bool has_guidename() const;
  inline void clear_guidename();
  static const int kGuideNameFieldNumber = 2;
  inline const ::std::string& guidename() const;
  inline void set_guidename(const ::std::string& value);
  inline void set_guidename(const char* value);
  inline void set_guidename(const char* value, size_t size);
  inline ::std::string* mutable_guidename();
  inline ::std::string* release_guidename();
  inline void set_allocated_guidename(::std::string* guidename);

  // required uint32 IsLocked = 3;
  inline bool has_islocked() const;
  inline void clear_islocked();
  static const int kIsLockedFieldNumber = 3;
  inline ::google::protobuf::uint32 islocked() const;
  inline void set_islocked(::google::protobuf::uint32 value);

  // required uint32 TriggerType = 4;
  inline bool has_triggertype() const;
  inline void clear_triggertype();
  static const int kTriggerTypeFieldNumber = 4;
  inline ::google::protobuf::uint32 triggertype() const;
  inline void set_triggertype(::google::protobuf::uint32 value);

  // required uint32 LinkID = 5;
  inline bool has_linkid() const;
  inline void clear_linkid();
  static const int kLinkIDFieldNumber = 5;
  inline ::google::protobuf::uint32 linkid() const;
  inline void set_linkid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.GuideCfg)
 private:
  inline void set_has_guideid();
  inline void clear_has_guideid();
  inline void set_has_guidename();
  inline void clear_has_guidename();
  inline void set_has_islocked();
  inline void clear_has_islocked();
  inline void set_has_triggertype();
  inline void clear_has_triggertype();
  inline void set_has_linkid();
  inline void clear_has_linkid();

  ::std::string* guidename_;
  ::google::protobuf::uint32 guideid_;
  ::google::protobuf::uint32 islocked_;
  ::google::protobuf::uint32 triggertype_;
  ::google::protobuf::uint32 linkid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GuideCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GuideCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_GuideCfg_2eproto();
  friend void protobuf_ShutdownFile_GuideCfg_2eproto();

  void InitAsDefaultInstance();
  static GuideCfg* default_instance_;
};
// -------------------------------------------------------------------

class GuideCfgSet : public ::google::protobuf::MessageLite {
 public:
  GuideCfgSet();
  virtual ~GuideCfgSet();

  GuideCfgSet(const GuideCfgSet& from);

  inline GuideCfgSet& operator=(const GuideCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const GuideCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GuideCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GuideCfgSet* other);

  // implements Message ----------------------------------------------

  GuideCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GuideCfgSet& from);
  void MergeFrom(const GuideCfgSet& from);
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

  // repeated .com.cfg.vo.GuideCfg guidecfg = 1;
  inline int guidecfg_size() const;
  inline void clear_guidecfg();
  static const int kGuidecfgFieldNumber = 1;
  inline const ::com::cfg::vo::GuideCfg& guidecfg(int index) const;
  inline ::com::cfg::vo::GuideCfg* mutable_guidecfg(int index);
  inline ::com::cfg::vo::GuideCfg* add_guidecfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GuideCfg >&
      guidecfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GuideCfg >*
      mutable_guidecfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.GuideCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GuideCfg > guidecfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GuideCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GuideCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_GuideCfg_2eproto();
  friend void protobuf_ShutdownFile_GuideCfg_2eproto();

  void InitAsDefaultInstance();
  static GuideCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// GuideCfg

// required uint32 GuideID = 1;
inline bool GuideCfg::has_guideid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GuideCfg::set_has_guideid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GuideCfg::clear_has_guideid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GuideCfg::clear_guideid() {
  guideid_ = 0u;
  clear_has_guideid();
}
inline ::google::protobuf::uint32 GuideCfg::guideid() const {
  return guideid_;
}
inline void GuideCfg::set_guideid(::google::protobuf::uint32 value) {
  set_has_guideid();
  guideid_ = value;
}

// required string GuideName = 2;
inline bool GuideCfg::has_guidename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GuideCfg::set_has_guidename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GuideCfg::clear_has_guidename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GuideCfg::clear_guidename() {
  if (guidename_ != &::google::protobuf::internal::kEmptyString) {
    guidename_->clear();
  }
  clear_has_guidename();
}
inline const ::std::string& GuideCfg::guidename() const {
  return *guidename_;
}
inline void GuideCfg::set_guidename(const ::std::string& value) {
  set_has_guidename();
  if (guidename_ == &::google::protobuf::internal::kEmptyString) {
    guidename_ = new ::std::string;
  }
  guidename_->assign(value);
}
inline void GuideCfg::set_guidename(const char* value) {
  set_has_guidename();
  if (guidename_ == &::google::protobuf::internal::kEmptyString) {
    guidename_ = new ::std::string;
  }
  guidename_->assign(value);
}
inline void GuideCfg::set_guidename(const char* value, size_t size) {
  set_has_guidename();
  if (guidename_ == &::google::protobuf::internal::kEmptyString) {
    guidename_ = new ::std::string;
  }
  guidename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GuideCfg::mutable_guidename() {
  set_has_guidename();
  if (guidename_ == &::google::protobuf::internal::kEmptyString) {
    guidename_ = new ::std::string;
  }
  return guidename_;
}
inline ::std::string* GuideCfg::release_guidename() {
  clear_has_guidename();
  if (guidename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = guidename_;
    guidename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GuideCfg::set_allocated_guidename(::std::string* guidename) {
  if (guidename_ != &::google::protobuf::internal::kEmptyString) {
    delete guidename_;
  }
  if (guidename) {
    set_has_guidename();
    guidename_ = guidename;
  } else {
    clear_has_guidename();
    guidename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 IsLocked = 3;
inline bool GuideCfg::has_islocked() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GuideCfg::set_has_islocked() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GuideCfg::clear_has_islocked() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GuideCfg::clear_islocked() {
  islocked_ = 0u;
  clear_has_islocked();
}
inline ::google::protobuf::uint32 GuideCfg::islocked() const {
  return islocked_;
}
inline void GuideCfg::set_islocked(::google::protobuf::uint32 value) {
  set_has_islocked();
  islocked_ = value;
}

// required uint32 TriggerType = 4;
inline bool GuideCfg::has_triggertype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GuideCfg::set_has_triggertype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GuideCfg::clear_has_triggertype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GuideCfg::clear_triggertype() {
  triggertype_ = 0u;
  clear_has_triggertype();
}
inline ::google::protobuf::uint32 GuideCfg::triggertype() const {
  return triggertype_;
}
inline void GuideCfg::set_triggertype(::google::protobuf::uint32 value) {
  set_has_triggertype();
  triggertype_ = value;
}

// required uint32 LinkID = 5;
inline bool GuideCfg::has_linkid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GuideCfg::set_has_linkid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void GuideCfg::clear_has_linkid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void GuideCfg::clear_linkid() {
  linkid_ = 0u;
  clear_has_linkid();
}
inline ::google::protobuf::uint32 GuideCfg::linkid() const {
  return linkid_;
}
inline void GuideCfg::set_linkid(::google::protobuf::uint32 value) {
  set_has_linkid();
  linkid_ = value;
}

// -------------------------------------------------------------------

// GuideCfgSet

// repeated .com.cfg.vo.GuideCfg guidecfg = 1;
inline int GuideCfgSet::guidecfg_size() const {
  return guidecfg_.size();
}
inline void GuideCfgSet::clear_guidecfg() {
  guidecfg_.Clear();
}
inline const ::com::cfg::vo::GuideCfg& GuideCfgSet::guidecfg(int index) const {
  return guidecfg_.Get(index);
}
inline ::com::cfg::vo::GuideCfg* GuideCfgSet::mutable_guidecfg(int index) {
  return guidecfg_.Mutable(index);
}
inline ::com::cfg::vo::GuideCfg* GuideCfgSet::add_guidecfg() {
  return guidecfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GuideCfg >&
GuideCfgSet::guidecfg() const {
  return guidecfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GuideCfg >*
GuideCfgSet::mutable_guidecfg() {
  return &guidecfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GuideCfg_2eproto__INCLUDED
