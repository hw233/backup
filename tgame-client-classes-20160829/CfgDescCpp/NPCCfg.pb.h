// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NPCCfg.proto

#ifndef PROTOBUF_NPCCfg_2eproto__INCLUDED
#define PROTOBUF_NPCCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_NPCCfg_2eproto();
void protobuf_AssignDesc_NPCCfg_2eproto();
void protobuf_ShutdownFile_NPCCfg_2eproto();

class NPCCfg;
class NPCCfgSet;

// ===================================================================

class NPCCfg : public ::google::protobuf::MessageLite {
 public:
  NPCCfg();
  virtual ~NPCCfg();

  NPCCfg(const NPCCfg& from);

  inline NPCCfg& operator=(const NPCCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const NPCCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NPCCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NPCCfg* other);

  // implements Message ----------------------------------------------

  NPCCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NPCCfg& from);
  void MergeFrom(const NPCCfg& from);
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

  // required uint32 NPCID = 1;
  inline bool has_npcid() const;
  inline void clear_npcid();
  static const int kNPCIDFieldNumber = 1;
  inline ::google::protobuf::uint32 npcid() const;
  inline void set_npcid(::google::protobuf::uint32 value);

  // required string NPCName = 2;
  inline bool has_npcname() const;
  inline void clear_npcname();
  static const int kNPCNameFieldNumber = 2;
  inline const ::std::string& npcname() const;
  inline void set_npcname(const ::std::string& value);
  inline void set_npcname(const char* value);
  inline void set_npcname(const char* value, size_t size);
  inline ::std::string* mutable_npcname();
  inline ::std::string* release_npcname();
  inline void set_allocated_npcname(::std::string* npcname);

  // required string NPCDesc = 3;
  inline bool has_npcdesc() const;
  inline void clear_npcdesc();
  static const int kNPCDescFieldNumber = 3;
  inline const ::std::string& npcdesc() const;
  inline void set_npcdesc(const ::std::string& value);
  inline void set_npcdesc(const char* value);
  inline void set_npcdesc(const char* value, size_t size);
  inline ::std::string* mutable_npcdesc();
  inline ::std::string* release_npcdesc();
  inline void set_allocated_npcdesc(::std::string* npcdesc);

  // required string ShowID = 4;
  inline bool has_showid() const;
  inline void clear_showid();
  static const int kShowIDFieldNumber = 4;
  inline const ::std::string& showid() const;
  inline void set_showid(const ::std::string& value);
  inline void set_showid(const char* value);
  inline void set_showid(const char* value, size_t size);
  inline ::std::string* mutable_showid();
  inline ::std::string* release_showid();
  inline void set_allocated_showid(::std::string* showid);

  // required string DefaultWords = 5;
  inline bool has_defaultwords() const;
  inline void clear_defaultwords();
  static const int kDefaultWordsFieldNumber = 5;
  inline const ::std::string& defaultwords() const;
  inline void set_defaultwords(const ::std::string& value);
  inline void set_defaultwords(const char* value);
  inline void set_defaultwords(const char* value, size_t size);
  inline ::std::string* mutable_defaultwords();
  inline ::std::string* release_defaultwords();
  inline void set_allocated_defaultwords(::std::string* defaultwords);

  // required uint32 bubbleId = 6;
  inline bool has_bubbleid() const;
  inline void clear_bubbleid();
  static const int kBubbleIdFieldNumber = 6;
  inline ::google::protobuf::uint32 bubbleid() const;
  inline void set_bubbleid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.NPCCfg)
 private:
  inline void set_has_npcid();
  inline void clear_has_npcid();
  inline void set_has_npcname();
  inline void clear_has_npcname();
  inline void set_has_npcdesc();
  inline void clear_has_npcdesc();
  inline void set_has_showid();
  inline void clear_has_showid();
  inline void set_has_defaultwords();
  inline void clear_has_defaultwords();
  inline void set_has_bubbleid();
  inline void clear_has_bubbleid();

  ::std::string* npcname_;
  ::std::string* npcdesc_;
  ::google::protobuf::uint32 npcid_;
  ::google::protobuf::uint32 bubbleid_;
  ::std::string* showid_;
  ::std::string* defaultwords_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_NPCCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_NPCCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_NPCCfg_2eproto();
  friend void protobuf_ShutdownFile_NPCCfg_2eproto();

  void InitAsDefaultInstance();
  static NPCCfg* default_instance_;
};
// -------------------------------------------------------------------

class NPCCfgSet : public ::google::protobuf::MessageLite {
 public:
  NPCCfgSet();
  virtual ~NPCCfgSet();

  NPCCfgSet(const NPCCfgSet& from);

  inline NPCCfgSet& operator=(const NPCCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const NPCCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NPCCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NPCCfgSet* other);

  // implements Message ----------------------------------------------

  NPCCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NPCCfgSet& from);
  void MergeFrom(const NPCCfgSet& from);
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

  // repeated .com.cfg.vo.NPCCfg npccfg = 1;
  inline int npccfg_size() const;
  inline void clear_npccfg();
  static const int kNpccfgFieldNumber = 1;
  inline const ::com::cfg::vo::NPCCfg& npccfg(int index) const;
  inline ::com::cfg::vo::NPCCfg* mutable_npccfg(int index);
  inline ::com::cfg::vo::NPCCfg* add_npccfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::NPCCfg >&
      npccfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::NPCCfg >*
      mutable_npccfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.NPCCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::NPCCfg > npccfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_NPCCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_NPCCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_NPCCfg_2eproto();
  friend void protobuf_ShutdownFile_NPCCfg_2eproto();

  void InitAsDefaultInstance();
  static NPCCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// NPCCfg

// required uint32 NPCID = 1;
inline bool NPCCfg::has_npcid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NPCCfg::set_has_npcid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NPCCfg::clear_has_npcid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NPCCfg::clear_npcid() {
  npcid_ = 0u;
  clear_has_npcid();
}
inline ::google::protobuf::uint32 NPCCfg::npcid() const {
  return npcid_;
}
inline void NPCCfg::set_npcid(::google::protobuf::uint32 value) {
  set_has_npcid();
  npcid_ = value;
}

// required string NPCName = 2;
inline bool NPCCfg::has_npcname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NPCCfg::set_has_npcname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NPCCfg::clear_has_npcname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NPCCfg::clear_npcname() {
  if (npcname_ != &::google::protobuf::internal::kEmptyString) {
    npcname_->clear();
  }
  clear_has_npcname();
}
inline const ::std::string& NPCCfg::npcname() const {
  return *npcname_;
}
inline void NPCCfg::set_npcname(const ::std::string& value) {
  set_has_npcname();
  if (npcname_ == &::google::protobuf::internal::kEmptyString) {
    npcname_ = new ::std::string;
  }
  npcname_->assign(value);
}
inline void NPCCfg::set_npcname(const char* value) {
  set_has_npcname();
  if (npcname_ == &::google::protobuf::internal::kEmptyString) {
    npcname_ = new ::std::string;
  }
  npcname_->assign(value);
}
inline void NPCCfg::set_npcname(const char* value, size_t size) {
  set_has_npcname();
  if (npcname_ == &::google::protobuf::internal::kEmptyString) {
    npcname_ = new ::std::string;
  }
  npcname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NPCCfg::mutable_npcname() {
  set_has_npcname();
  if (npcname_ == &::google::protobuf::internal::kEmptyString) {
    npcname_ = new ::std::string;
  }
  return npcname_;
}
inline ::std::string* NPCCfg::release_npcname() {
  clear_has_npcname();
  if (npcname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = npcname_;
    npcname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NPCCfg::set_allocated_npcname(::std::string* npcname) {
  if (npcname_ != &::google::protobuf::internal::kEmptyString) {
    delete npcname_;
  }
  if (npcname) {
    set_has_npcname();
    npcname_ = npcname;
  } else {
    clear_has_npcname();
    npcname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string NPCDesc = 3;
inline bool NPCCfg::has_npcdesc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NPCCfg::set_has_npcdesc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NPCCfg::clear_has_npcdesc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NPCCfg::clear_npcdesc() {
  if (npcdesc_ != &::google::protobuf::internal::kEmptyString) {
    npcdesc_->clear();
  }
  clear_has_npcdesc();
}
inline const ::std::string& NPCCfg::npcdesc() const {
  return *npcdesc_;
}
inline void NPCCfg::set_npcdesc(const ::std::string& value) {
  set_has_npcdesc();
  if (npcdesc_ == &::google::protobuf::internal::kEmptyString) {
    npcdesc_ = new ::std::string;
  }
  npcdesc_->assign(value);
}
inline void NPCCfg::set_npcdesc(const char* value) {
  set_has_npcdesc();
  if (npcdesc_ == &::google::protobuf::internal::kEmptyString) {
    npcdesc_ = new ::std::string;
  }
  npcdesc_->assign(value);
}
inline void NPCCfg::set_npcdesc(const char* value, size_t size) {
  set_has_npcdesc();
  if (npcdesc_ == &::google::protobuf::internal::kEmptyString) {
    npcdesc_ = new ::std::string;
  }
  npcdesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NPCCfg::mutable_npcdesc() {
  set_has_npcdesc();
  if (npcdesc_ == &::google::protobuf::internal::kEmptyString) {
    npcdesc_ = new ::std::string;
  }
  return npcdesc_;
}
inline ::std::string* NPCCfg::release_npcdesc() {
  clear_has_npcdesc();
  if (npcdesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = npcdesc_;
    npcdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NPCCfg::set_allocated_npcdesc(::std::string* npcdesc) {
  if (npcdesc_ != &::google::protobuf::internal::kEmptyString) {
    delete npcdesc_;
  }
  if (npcdesc) {
    set_has_npcdesc();
    npcdesc_ = npcdesc;
  } else {
    clear_has_npcdesc();
    npcdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string ShowID = 4;
inline bool NPCCfg::has_showid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NPCCfg::set_has_showid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NPCCfg::clear_has_showid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NPCCfg::clear_showid() {
  if (showid_ != &::google::protobuf::internal::kEmptyString) {
    showid_->clear();
  }
  clear_has_showid();
}
inline const ::std::string& NPCCfg::showid() const {
  return *showid_;
}
inline void NPCCfg::set_showid(const ::std::string& value) {
  set_has_showid();
  if (showid_ == &::google::protobuf::internal::kEmptyString) {
    showid_ = new ::std::string;
  }
  showid_->assign(value);
}
inline void NPCCfg::set_showid(const char* value) {
  set_has_showid();
  if (showid_ == &::google::protobuf::internal::kEmptyString) {
    showid_ = new ::std::string;
  }
  showid_->assign(value);
}
inline void NPCCfg::set_showid(const char* value, size_t size) {
  set_has_showid();
  if (showid_ == &::google::protobuf::internal::kEmptyString) {
    showid_ = new ::std::string;
  }
  showid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NPCCfg::mutable_showid() {
  set_has_showid();
  if (showid_ == &::google::protobuf::internal::kEmptyString) {
    showid_ = new ::std::string;
  }
  return showid_;
}
inline ::std::string* NPCCfg::release_showid() {
  clear_has_showid();
  if (showid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = showid_;
    showid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NPCCfg::set_allocated_showid(::std::string* showid) {
  if (showid_ != &::google::protobuf::internal::kEmptyString) {
    delete showid_;
  }
  if (showid) {
    set_has_showid();
    showid_ = showid;
  } else {
    clear_has_showid();
    showid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string DefaultWords = 5;
inline bool NPCCfg::has_defaultwords() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NPCCfg::set_has_defaultwords() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NPCCfg::clear_has_defaultwords() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NPCCfg::clear_defaultwords() {
  if (defaultwords_ != &::google::protobuf::internal::kEmptyString) {
    defaultwords_->clear();
  }
  clear_has_defaultwords();
}
inline const ::std::string& NPCCfg::defaultwords() const {
  return *defaultwords_;
}
inline void NPCCfg::set_defaultwords(const ::std::string& value) {
  set_has_defaultwords();
  if (defaultwords_ == &::google::protobuf::internal::kEmptyString) {
    defaultwords_ = new ::std::string;
  }
  defaultwords_->assign(value);
}
inline void NPCCfg::set_defaultwords(const char* value) {
  set_has_defaultwords();
  if (defaultwords_ == &::google::protobuf::internal::kEmptyString) {
    defaultwords_ = new ::std::string;
  }
  defaultwords_->assign(value);
}
inline void NPCCfg::set_defaultwords(const char* value, size_t size) {
  set_has_defaultwords();
  if (defaultwords_ == &::google::protobuf::internal::kEmptyString) {
    defaultwords_ = new ::std::string;
  }
  defaultwords_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NPCCfg::mutable_defaultwords() {
  set_has_defaultwords();
  if (defaultwords_ == &::google::protobuf::internal::kEmptyString) {
    defaultwords_ = new ::std::string;
  }
  return defaultwords_;
}
inline ::std::string* NPCCfg::release_defaultwords() {
  clear_has_defaultwords();
  if (defaultwords_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = defaultwords_;
    defaultwords_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NPCCfg::set_allocated_defaultwords(::std::string* defaultwords) {
  if (defaultwords_ != &::google::protobuf::internal::kEmptyString) {
    delete defaultwords_;
  }
  if (defaultwords) {
    set_has_defaultwords();
    defaultwords_ = defaultwords;
  } else {
    clear_has_defaultwords();
    defaultwords_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 bubbleId = 6;
inline bool NPCCfg::has_bubbleid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void NPCCfg::set_has_bubbleid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void NPCCfg::clear_has_bubbleid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void NPCCfg::clear_bubbleid() {
  bubbleid_ = 0u;
  clear_has_bubbleid();
}
inline ::google::protobuf::uint32 NPCCfg::bubbleid() const {
  return bubbleid_;
}
inline void NPCCfg::set_bubbleid(::google::protobuf::uint32 value) {
  set_has_bubbleid();
  bubbleid_ = value;
}

// -------------------------------------------------------------------

// NPCCfgSet

// repeated .com.cfg.vo.NPCCfg npccfg = 1;
inline int NPCCfgSet::npccfg_size() const {
  return npccfg_.size();
}
inline void NPCCfgSet::clear_npccfg() {
  npccfg_.Clear();
}
inline const ::com::cfg::vo::NPCCfg& NPCCfgSet::npccfg(int index) const {
  return npccfg_.Get(index);
}
inline ::com::cfg::vo::NPCCfg* NPCCfgSet::mutable_npccfg(int index) {
  return npccfg_.Mutable(index);
}
inline ::com::cfg::vo::NPCCfg* NPCCfgSet::add_npccfg() {
  return npccfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::NPCCfg >&
NPCCfgSet::npccfg() const {
  return npccfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::NPCCfg >*
NPCCfgSet::mutable_npccfg() {
  return &npccfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NPCCfg_2eproto__INCLUDED
