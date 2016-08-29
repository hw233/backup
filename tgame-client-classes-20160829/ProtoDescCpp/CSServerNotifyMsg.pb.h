// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CSServerNotifyMsg.proto

#ifndef PROTOBUF_CSServerNotifyMsg_2eproto__INCLUDED
#define PROTOBUF_CSServerNotifyMsg_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace vmsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CSServerNotifyMsg_2eproto();
void protobuf_AssignDesc_CSServerNotifyMsg_2eproto();
void protobuf_ShutdownFile_CSServerNotifyMsg_2eproto();

class CSServerNotifyPkg;
class CSServerNotify;
class CSServerNotifyRequest;
class CSServerNotifyRespond;

enum NOTIFY_SPEC_ID {
  GM_NOTIFY_ID = 0,
  IMPORTANT_EVENT_NOTIFY_ID = 10000
};
bool NOTIFY_SPEC_ID_IsValid(int value);
const NOTIFY_SPEC_ID NOTIFY_SPEC_ID_MIN = GM_NOTIFY_ID;
const NOTIFY_SPEC_ID NOTIFY_SPEC_ID_MAX = IMPORTANT_EVENT_NOTIFY_ID;
const int NOTIFY_SPEC_ID_ARRAYSIZE = NOTIFY_SPEC_ID_MAX + 1;

// ===================================================================

class CSServerNotifyPkg : public ::google::protobuf::MessageLite {
 public:
  CSServerNotifyPkg();
  virtual ~CSServerNotifyPkg();

  CSServerNotifyPkg(const CSServerNotifyPkg& from);

  inline CSServerNotifyPkg& operator=(const CSServerNotifyPkg& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSServerNotifyPkg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSServerNotifyPkg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSServerNotifyPkg* other);

  // implements Message ----------------------------------------------

  CSServerNotifyPkg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSServerNotifyPkg& from);
  void MergeFrom(const CSServerNotifyPkg& from);
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

  // @@protoc_insertion_point(class_scope:vmsg.CSServerNotifyPkg)
 private:


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSServerNotifyMsg_2eproto();
  friend void protobuf_ShutdownFile_CSServerNotifyMsg_2eproto();

  void InitAsDefaultInstance();
  static CSServerNotifyPkg* default_instance_;
};
// -------------------------------------------------------------------

class CSServerNotify : public ::google::protobuf::MessageLite {
 public:
  CSServerNotify();
  virtual ~CSServerNotify();

  CSServerNotify(const CSServerNotify& from);

  inline CSServerNotify& operator=(const CSServerNotify& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSServerNotify& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSServerNotify* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSServerNotify* other);

  // implements Message ----------------------------------------------

  CSServerNotify* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSServerNotify& from);
  void MergeFrom(const CSServerNotify& from);
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

  // required uint32 NotifyID = 1;
  inline bool has_notifyid() const;
  inline void clear_notifyid();
  static const int kNotifyIDFieldNumber = 1;
  inline ::google::protobuf::uint32 notifyid() const;
  inline void set_notifyid(::google::protobuf::uint32 value);

  // repeated string NotifyStr = 2;
  inline int notifystr_size() const;
  inline void clear_notifystr();
  static const int kNotifyStrFieldNumber = 2;
  inline const ::std::string& notifystr(int index) const;
  inline ::std::string* mutable_notifystr(int index);
  inline void set_notifystr(int index, const ::std::string& value);
  inline void set_notifystr(int index, const char* value);
  inline void set_notifystr(int index, const char* value, size_t size);
  inline ::std::string* add_notifystr();
  inline void add_notifystr(const ::std::string& value);
  inline void add_notifystr(const char* value);
  inline void add_notifystr(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& notifystr() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_notifystr();

  // optional .vmsg.CSServerNotifyPkg ServerNotifyPkg = 3;
  inline bool has_servernotifypkg() const;
  inline void clear_servernotifypkg();
  static const int kServerNotifyPkgFieldNumber = 3;
  inline const ::vmsg::CSServerNotifyPkg& servernotifypkg() const;
  inline ::vmsg::CSServerNotifyPkg* mutable_servernotifypkg();
  inline ::vmsg::CSServerNotifyPkg* release_servernotifypkg();
  inline void set_allocated_servernotifypkg(::vmsg::CSServerNotifyPkg* servernotifypkg);

  // @@protoc_insertion_point(class_scope:vmsg.CSServerNotify)
 private:
  inline void set_has_notifyid();
  inline void clear_has_notifyid();
  inline void set_has_servernotifypkg();
  inline void clear_has_servernotifypkg();

  ::google::protobuf::RepeatedPtrField< ::std::string> notifystr_;
  ::vmsg::CSServerNotifyPkg* servernotifypkg_;
  ::google::protobuf::uint32 notifyid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSServerNotifyMsg_2eproto();
  friend void protobuf_ShutdownFile_CSServerNotifyMsg_2eproto();

  void InitAsDefaultInstance();
  static CSServerNotify* default_instance_;
};
// -------------------------------------------------------------------

class CSServerNotifyRequest : public ::google::protobuf::MessageLite {
 public:
  CSServerNotifyRequest();
  virtual ~CSServerNotifyRequest();

  CSServerNotifyRequest(const CSServerNotifyRequest& from);

  inline CSServerNotifyRequest& operator=(const CSServerNotifyRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSServerNotifyRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSServerNotifyRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSServerNotifyRequest* other);

  // implements Message ----------------------------------------------

  CSServerNotifyRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSServerNotifyRequest& from);
  void MergeFrom(const CSServerNotifyRequest& from);
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

  // @@protoc_insertion_point(class_scope:vmsg.CSServerNotifyRequest)
 private:


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSServerNotifyMsg_2eproto();
  friend void protobuf_ShutdownFile_CSServerNotifyMsg_2eproto();

  void InitAsDefaultInstance();
  static CSServerNotifyRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSServerNotifyRespond : public ::google::protobuf::MessageLite {
 public:
  CSServerNotifyRespond();
  virtual ~CSServerNotifyRespond();

  CSServerNotifyRespond(const CSServerNotifyRespond& from);

  inline CSServerNotifyRespond& operator=(const CSServerNotifyRespond& from) {
    CopyFrom(from);
    return *this;
  }

  static const CSServerNotifyRespond& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CSServerNotifyRespond* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CSServerNotifyRespond* other);

  // implements Message ----------------------------------------------

  CSServerNotifyRespond* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CSServerNotifyRespond& from);
  void MergeFrom(const CSServerNotifyRespond& from);
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

  // optional .vmsg.CSServerNotify Server_Notify = 1;
  inline bool has_server_notify() const;
  inline void clear_server_notify();
  static const int kServerNotifyFieldNumber = 1;
  inline const ::vmsg::CSServerNotify& server_notify() const;
  inline ::vmsg::CSServerNotify* mutable_server_notify();
  inline ::vmsg::CSServerNotify* release_server_notify();
  inline void set_allocated_server_notify(::vmsg::CSServerNotify* server_notify);

  // @@protoc_insertion_point(class_scope:vmsg.CSServerNotifyRespond)
 private:
  inline void set_has_server_notify();
  inline void clear_has_server_notify();

  ::vmsg::CSServerNotify* server_notify_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CSServerNotifyMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_CSServerNotifyMsg_2eproto();
  friend void protobuf_ShutdownFile_CSServerNotifyMsg_2eproto();

  void InitAsDefaultInstance();
  static CSServerNotifyRespond* default_instance_;
};
// ===================================================================


// ===================================================================

// CSServerNotifyPkg

// -------------------------------------------------------------------

// CSServerNotify

// required uint32 NotifyID = 1;
inline bool CSServerNotify::has_notifyid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSServerNotify::set_has_notifyid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSServerNotify::clear_has_notifyid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSServerNotify::clear_notifyid() {
  notifyid_ = 0u;
  clear_has_notifyid();
}
inline ::google::protobuf::uint32 CSServerNotify::notifyid() const {
  return notifyid_;
}
inline void CSServerNotify::set_notifyid(::google::protobuf::uint32 value) {
  set_has_notifyid();
  notifyid_ = value;
}

// repeated string NotifyStr = 2;
inline int CSServerNotify::notifystr_size() const {
  return notifystr_.size();
}
inline void CSServerNotify::clear_notifystr() {
  notifystr_.Clear();
}
inline const ::std::string& CSServerNotify::notifystr(int index) const {
  return notifystr_.Get(index);
}
inline ::std::string* CSServerNotify::mutable_notifystr(int index) {
  return notifystr_.Mutable(index);
}
inline void CSServerNotify::set_notifystr(int index, const ::std::string& value) {
  notifystr_.Mutable(index)->assign(value);
}
inline void CSServerNotify::set_notifystr(int index, const char* value) {
  notifystr_.Mutable(index)->assign(value);
}
inline void CSServerNotify::set_notifystr(int index, const char* value, size_t size) {
  notifystr_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSServerNotify::add_notifystr() {
  return notifystr_.Add();
}
inline void CSServerNotify::add_notifystr(const ::std::string& value) {
  notifystr_.Add()->assign(value);
}
inline void CSServerNotify::add_notifystr(const char* value) {
  notifystr_.Add()->assign(value);
}
inline void CSServerNotify::add_notifystr(const char* value, size_t size) {
  notifystr_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CSServerNotify::notifystr() const {
  return notifystr_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CSServerNotify::mutable_notifystr() {
  return &notifystr_;
}

// optional .vmsg.CSServerNotifyPkg ServerNotifyPkg = 3;
inline bool CSServerNotify::has_servernotifypkg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CSServerNotify::set_has_servernotifypkg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CSServerNotify::clear_has_servernotifypkg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CSServerNotify::clear_servernotifypkg() {
  if (servernotifypkg_ != NULL) servernotifypkg_->::vmsg::CSServerNotifyPkg::Clear();
  clear_has_servernotifypkg();
}
inline const ::vmsg::CSServerNotifyPkg& CSServerNotify::servernotifypkg() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return servernotifypkg_ != NULL ? *servernotifypkg_ : *default_instance().servernotifypkg_;
#else
  return servernotifypkg_ != NULL ? *servernotifypkg_ : *default_instance_->servernotifypkg_;
#endif
}
inline ::vmsg::CSServerNotifyPkg* CSServerNotify::mutable_servernotifypkg() {
  set_has_servernotifypkg();
  if (servernotifypkg_ == NULL) servernotifypkg_ = new ::vmsg::CSServerNotifyPkg;
  return servernotifypkg_;
}
inline ::vmsg::CSServerNotifyPkg* CSServerNotify::release_servernotifypkg() {
  clear_has_servernotifypkg();
  ::vmsg::CSServerNotifyPkg* temp = servernotifypkg_;
  servernotifypkg_ = NULL;
  return temp;
}
inline void CSServerNotify::set_allocated_servernotifypkg(::vmsg::CSServerNotifyPkg* servernotifypkg) {
  delete servernotifypkg_;
  servernotifypkg_ = servernotifypkg;
  if (servernotifypkg) {
    set_has_servernotifypkg();
  } else {
    clear_has_servernotifypkg();
  }
}

// -------------------------------------------------------------------

// CSServerNotifyRequest

// -------------------------------------------------------------------

// CSServerNotifyRespond

// optional .vmsg.CSServerNotify Server_Notify = 1;
inline bool CSServerNotifyRespond::has_server_notify() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSServerNotifyRespond::set_has_server_notify() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSServerNotifyRespond::clear_has_server_notify() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSServerNotifyRespond::clear_server_notify() {
  if (server_notify_ != NULL) server_notify_->::vmsg::CSServerNotify::Clear();
  clear_has_server_notify();
}
inline const ::vmsg::CSServerNotify& CSServerNotifyRespond::server_notify() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return server_notify_ != NULL ? *server_notify_ : *default_instance().server_notify_;
#else
  return server_notify_ != NULL ? *server_notify_ : *default_instance_->server_notify_;
#endif
}
inline ::vmsg::CSServerNotify* CSServerNotifyRespond::mutable_server_notify() {
  set_has_server_notify();
  if (server_notify_ == NULL) server_notify_ = new ::vmsg::CSServerNotify;
  return server_notify_;
}
inline ::vmsg::CSServerNotify* CSServerNotifyRespond::release_server_notify() {
  clear_has_server_notify();
  ::vmsg::CSServerNotify* temp = server_notify_;
  server_notify_ = NULL;
  return temp;
}
inline void CSServerNotifyRespond::set_allocated_server_notify(::vmsg::CSServerNotify* server_notify) {
  delete server_notify_;
  server_notify_ = server_notify;
  if (server_notify) {
    set_has_server_notify();
  } else {
    clear_has_server_notify();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vmsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CSServerNotifyMsg_2eproto__INCLUDED
