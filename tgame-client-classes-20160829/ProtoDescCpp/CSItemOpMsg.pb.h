// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CSItemOpMsg.proto

#ifndef PROTOBUF_CSItemOpMsg_2eproto__INCLUDED
#define PROTOBUF_CSItemOpMsg_2eproto__INCLUDED

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
#include "MsgBase.pb.h"
#include "ShareByClient.pb.h"
#include "CSEquipItemMsg.pb.h"
#include "CSBagMsg.pb.h"
// @@protoc_insertion_point(includes)

namespace vmsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CSItemOpMsg_2eproto();
void protobuf_AssignDesc_CSItemOpMsg_2eproto();
void protobuf_ShutdownFile_CSItemOpMsg_2eproto();

class CSOpenPackageRqst;
class CSOpenPackageRsp;
class CSItemRequest;
class CSItemRespond;

// ===================================================================

class CSOpenPackageRqst : public ::google::protobuf::MessageLite {
 public:
  CSOpenPackageRqst();
  virtual ~CSOpenPackageRqst();

  CSOpenPackageRqst(const CSOpenPackageRqst& from);

  inline CSOpenPackageRqst& operator=(const CSOpenPackageRqst& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSOpenPackageRqst& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSOpenPackageRqst* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSOpenPackageRqst* other);

  // implements Message ----------------------------------------------

  CSOpenPackageRqst* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSOpenPackageRqst& from);
  void MergeFrom(const CSOpenPackageRqst& from);
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

  // required int32 PackageIdx = 1;
  inline bool has_packageidx() const;
  inline void clear_packageidx();
  static const int kPackageIdxFieldNumber = 1;
  inline ::google::protobuf::int32 packageidx() const;
  inline void set_packageidx(::google::protobuf::int32 value);

  // required uint32 PackageCfgID = 2;
  inline bool has_packagecfgid() const;
  inline void clear_packagecfgid();
  static const int kPackageCfgIDFieldNumber = 2;
  inline ::google::protobuf::uint32 packagecfgid() const;
  inline void set_packagecfgid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:vmsg.CSOpenPackageRqst)
 private:
  inline void set_has_packageidx();
  inline void clear_has_packageidx();
  inline void set_has_packagecfgid();
  inline void clear_has_packagecfgid();

  ::google::protobuf::int32 packageidx_;
  ::google::protobuf::uint32 packagecfgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSItemOpMsg_2eproto();
  friend void protobuf_ShutdownFile_CSItemOpMsg_2eproto();

  void InitAsDefaultInstance();
  static CSOpenPackageRqst* default_instance_;
};
// -------------------------------------------------------------------

class CSOpenPackageRsp : public ::google::protobuf::MessageLite {
 public:
  CSOpenPackageRsp();
  virtual ~CSOpenPackageRsp();

  CSOpenPackageRsp(const CSOpenPackageRsp& from);

  inline CSOpenPackageRsp& operator=(const CSOpenPackageRsp& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSOpenPackageRsp& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSOpenPackageRsp* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSOpenPackageRsp* other);

  // implements Message ----------------------------------------------

  CSOpenPackageRsp* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSOpenPackageRsp& from);
  void MergeFrom(const CSOpenPackageRsp& from);
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

  // required .vmsg.CSBagInfo BagInfo = 1;
  inline bool has_baginfo() const;
  inline void clear_baginfo();
  static const int kBagInfoFieldNumber = 1;
  inline const ::vmsg::CSBagInfo& baginfo() const;
  inline ::vmsg::CSBagInfo* mutable_baginfo();
  inline ::vmsg::CSBagInfo* release_baginfo();
  inline void set_allocated_baginfo(::vmsg::CSBagInfo* baginfo);

  // repeated .vmsg.CSAwardElement AwardLst = 2;
  inline int awardlst_size() const;
  inline void clear_awardlst();
  static const int kAwardLstFieldNumber = 2;
  inline const ::vmsg::CSAwardElement& awardlst(int index) const;
  inline ::vmsg::CSAwardElement* mutable_awardlst(int index);
  inline ::vmsg::CSAwardElement* add_awardlst();
  inline const ::google::protobuf::RepeatedPtrField< ::vmsg::CSAwardElement >&
      awardlst() const;
  inline ::google::protobuf::RepeatedPtrField< ::vmsg::CSAwardElement >*
      mutable_awardlst();

  // @@protoc_insertion_point(class_scope:vmsg.CSOpenPackageRsp)
 private:
  inline void set_has_baginfo();
  inline void clear_has_baginfo();

  ::vmsg::CSBagInfo* baginfo_;
  ::google::protobuf::RepeatedPtrField< ::vmsg::CSAwardElement > awardlst_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSItemOpMsg_2eproto();
  friend void protobuf_ShutdownFile_CSItemOpMsg_2eproto();

  void InitAsDefaultInstance();
  static CSOpenPackageRsp* default_instance_;
};
// -------------------------------------------------------------------

class CSItemRequest : public ::google::protobuf::MessageLite {
 public:
  CSItemRequest();
  virtual ~CSItemRequest();

  CSItemRequest(const CSItemRequest& from);

  inline CSItemRequest& operator=(const CSItemRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSItemRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSItemRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSItemRequest* other);

  // implements Message ----------------------------------------------

  CSItemRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSItemRequest& from);
  void MergeFrom(const CSItemRequest& from);
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

  // optional .vmsg.CSOpenPackageRqst OpenPackage_Rqst = 1;
  inline bool has_openpackage_rqst() const;
  inline void clear_openpackage_rqst();
  static const int kOpenPackageRqstFieldNumber = 1;
  inline const ::vmsg::CSOpenPackageRqst& openpackage_rqst() const;
  inline ::vmsg::CSOpenPackageRqst* mutable_openpackage_rqst();
  inline ::vmsg::CSOpenPackageRqst* release_openpackage_rqst();
  inline void set_allocated_openpackage_rqst(::vmsg::CSOpenPackageRqst* openpackage_rqst);

  // @@protoc_insertion_point(class_scope:vmsg.CSItemRequest)
 private:
  inline void set_has_openpackage_rqst();
  inline void clear_has_openpackage_rqst();

  ::vmsg::CSOpenPackageRqst* openpackage_rqst_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSItemOpMsg_2eproto();
  friend void protobuf_ShutdownFile_CSItemOpMsg_2eproto();

  void InitAsDefaultInstance();
  static CSItemRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSItemRespond : public ::google::protobuf::MessageLite {
 public:
  CSItemRespond();
  virtual ~CSItemRespond();

  CSItemRespond(const CSItemRespond& from);

  inline CSItemRespond& operator=(const CSItemRespond& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSItemRespond& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSItemRespond* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSItemRespond* other);

  // implements Message ----------------------------------------------

  CSItemRespond* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSItemRespond& from);
  void MergeFrom(const CSItemRespond& from);
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

  // optional .vmsg.CSOpenPackageRsp OpenPackage_Rsp = 1;
  inline bool has_openpackage_rsp() const;
  inline void clear_openpackage_rsp();
  static const int kOpenPackageRspFieldNumber = 1;
  inline const ::vmsg::CSOpenPackageRsp& openpackage_rsp() const;
  inline ::vmsg::CSOpenPackageRsp* mutable_openpackage_rsp();
  inline ::vmsg::CSOpenPackageRsp* release_openpackage_rsp();
  inline void set_allocated_openpackage_rsp(::vmsg::CSOpenPackageRsp* openpackage_rsp);

  // @@protoc_insertion_point(class_scope:vmsg.CSItemRespond)
 private:
  inline void set_has_openpackage_rsp();
  inline void clear_has_openpackage_rsp();

  ::vmsg::CSOpenPackageRsp* openpackage_rsp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSItemOpMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSItemOpMsg_2eproto();
  friend void protobuf_ShutdownFile_CSItemOpMsg_2eproto();

  void InitAsDefaultInstance();
  static CSItemRespond* default_instance_;
};
// ===================================================================


// ===================================================================

// CSOpenPackageRqst

// required int32 PackageIdx = 1;
inline bool CSOpenPackageRqst::has_packageidx() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSOpenPackageRqst::set_has_packageidx() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSOpenPackageRqst::clear_has_packageidx() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSOpenPackageRqst::clear_packageidx() {
  packageidx_ = 0;
  clear_has_packageidx();
}
inline ::google::protobuf::int32 CSOpenPackageRqst::packageidx() const {
  return packageidx_;
}
inline void CSOpenPackageRqst::set_packageidx(::google::protobuf::int32 value) {
  set_has_packageidx();
  packageidx_ = value;
}

// required uint32 PackageCfgID = 2;
inline bool CSOpenPackageRqst::has_packagecfgid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSOpenPackageRqst::set_has_packagecfgid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSOpenPackageRqst::clear_has_packagecfgid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSOpenPackageRqst::clear_packagecfgid() {
  packagecfgid_ = 0u;
  clear_has_packagecfgid();
}
inline ::google::protobuf::uint32 CSOpenPackageRqst::packagecfgid() const {
  return packagecfgid_;
}
inline void CSOpenPackageRqst::set_packagecfgid(::google::protobuf::uint32 value) {
  set_has_packagecfgid();
  packagecfgid_ = value;
}

// -------------------------------------------------------------------

// CSOpenPackageRsp

// required .vmsg.CSBagInfo BagInfo = 1;
inline bool CSOpenPackageRsp::has_baginfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSOpenPackageRsp::set_has_baginfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSOpenPackageRsp::clear_has_baginfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSOpenPackageRsp::clear_baginfo() {
  if (baginfo_ != NULL) baginfo_->::vmsg::CSBagInfo::Clear();
  clear_has_baginfo();
}
inline const ::vmsg::CSBagInfo& CSOpenPackageRsp::baginfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return baginfo_ != NULL ? *baginfo_ : *default_instance().baginfo_;
#else
  return baginfo_ != NULL ? *baginfo_ : *default_instance_->baginfo_;
#endif
}
inline ::vmsg::CSBagInfo* CSOpenPackageRsp::mutable_baginfo() {
  set_has_baginfo();
  if (baginfo_ == NULL) baginfo_ = new ::vmsg::CSBagInfo;
  return baginfo_;
}
inline ::vmsg::CSBagInfo* CSOpenPackageRsp::release_baginfo() {
  clear_has_baginfo();
  ::vmsg::CSBagInfo* temp = baginfo_;
  baginfo_ = NULL;
  return temp;
}
inline void CSOpenPackageRsp::set_allocated_baginfo(::vmsg::CSBagInfo* baginfo) {
  delete baginfo_;
  baginfo_ = baginfo;
  if (baginfo) {
    set_has_baginfo();
  } else {
    clear_has_baginfo();
  }
}

// repeated .vmsg.CSAwardElement AwardLst = 2;
inline int CSOpenPackageRsp::awardlst_size() const {
  return awardlst_.size();
}
inline void CSOpenPackageRsp::clear_awardlst() {
  awardlst_.Clear();
}
inline const ::vmsg::CSAwardElement& CSOpenPackageRsp::awardlst(int index) const {
  return awardlst_.Get(index);
}
inline ::vmsg::CSAwardElement* CSOpenPackageRsp::mutable_awardlst(int index) {
  return awardlst_.Mutable(index);
}
inline ::vmsg::CSAwardElement* CSOpenPackageRsp::add_awardlst() {
  return awardlst_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::vmsg::CSAwardElement >&
CSOpenPackageRsp::awardlst() const {
  return awardlst_;
}
inline ::google::protobuf::RepeatedPtrField< ::vmsg::CSAwardElement >*
CSOpenPackageRsp::mutable_awardlst() {
  return &awardlst_;
}

// -------------------------------------------------------------------

// CSItemRequest

// optional .vmsg.CSOpenPackageRqst OpenPackage_Rqst = 1;
inline bool CSItemRequest::has_openpackage_rqst() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSItemRequest::set_has_openpackage_rqst() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSItemRequest::clear_has_openpackage_rqst() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSItemRequest::clear_openpackage_rqst() {
  if (openpackage_rqst_ != NULL) openpackage_rqst_->::vmsg::CSOpenPackageRqst::Clear();
  clear_has_openpackage_rqst();
}
inline const ::vmsg::CSOpenPackageRqst& CSItemRequest::openpackage_rqst() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return openpackage_rqst_ != NULL ? *openpackage_rqst_ : *default_instance().openpackage_rqst_;
#else
  return openpackage_rqst_ != NULL ? *openpackage_rqst_ : *default_instance_->openpackage_rqst_;
#endif
}
inline ::vmsg::CSOpenPackageRqst* CSItemRequest::mutable_openpackage_rqst() {
  set_has_openpackage_rqst();
  if (openpackage_rqst_ == NULL) openpackage_rqst_ = new ::vmsg::CSOpenPackageRqst;
  return openpackage_rqst_;
}
inline ::vmsg::CSOpenPackageRqst* CSItemRequest::release_openpackage_rqst() {
  clear_has_openpackage_rqst();
  ::vmsg::CSOpenPackageRqst* temp = openpackage_rqst_;
  openpackage_rqst_ = NULL;
  return temp;
}
inline void CSItemRequest::set_allocated_openpackage_rqst(::vmsg::CSOpenPackageRqst* openpackage_rqst) {
  delete openpackage_rqst_;
  openpackage_rqst_ = openpackage_rqst;
  if (openpackage_rqst) {
    set_has_openpackage_rqst();
  } else {
    clear_has_openpackage_rqst();
  }
}

// -------------------------------------------------------------------

// CSItemRespond

// optional .vmsg.CSOpenPackageRsp OpenPackage_Rsp = 1;
inline bool CSItemRespond::has_openpackage_rsp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSItemRespond::set_has_openpackage_rsp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSItemRespond::clear_has_openpackage_rsp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSItemRespond::clear_openpackage_rsp() {
  if (openpackage_rsp_ != NULL) openpackage_rsp_->::vmsg::CSOpenPackageRsp::Clear();
  clear_has_openpackage_rsp();
}
inline const ::vmsg::CSOpenPackageRsp& CSItemRespond::openpackage_rsp() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return openpackage_rsp_ != NULL ? *openpackage_rsp_ : *default_instance().openpackage_rsp_;
#else
  return openpackage_rsp_ != NULL ? *openpackage_rsp_ : *default_instance_->openpackage_rsp_;
#endif
}
inline ::vmsg::CSOpenPackageRsp* CSItemRespond::mutable_openpackage_rsp() {
  set_has_openpackage_rsp();
  if (openpackage_rsp_ == NULL) openpackage_rsp_ = new ::vmsg::CSOpenPackageRsp;
  return openpackage_rsp_;
}
inline ::vmsg::CSOpenPackageRsp* CSItemRespond::release_openpackage_rsp() {
  clear_has_openpackage_rsp();
  ::vmsg::CSOpenPackageRsp* temp = openpackage_rsp_;
  openpackage_rsp_ = NULL;
  return temp;
}
inline void CSItemRespond::set_allocated_openpackage_rsp(::vmsg::CSOpenPackageRsp* openpackage_rsp) {
  delete openpackage_rsp_;
  openpackage_rsp_ = openpackage_rsp;
  if (openpackage_rsp) {
    set_has_openpackage_rsp();
  } else {
    clear_has_openpackage_rsp();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vmsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CSItemOpMsg_2eproto__INCLUDED
