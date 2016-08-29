// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExpCfg.proto

#ifndef PROTOBUF_ExpCfg_2eproto__INCLUDED
#define PROTOBUF_ExpCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_ExpCfg_2eproto();
void protobuf_AssignDesc_ExpCfg_2eproto();
void protobuf_ShutdownFile_ExpCfg_2eproto();

class ExpCfg;
class ExpCfgSet;

// ===================================================================

class ExpCfg : public ::google::protobuf::MessageLite {
 public:
  ExpCfg();
  virtual ~ExpCfg();

  ExpCfg(const ExpCfg& from);

  inline ExpCfg& operator=(const ExpCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const ExpCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ExpCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ExpCfg* other);

  // implements Message ----------------------------------------------

  ExpCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ExpCfg& from);
  void MergeFrom(const ExpCfg& from);
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

  // required uint32 Level = 1;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 1;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // required uint64 Exp = 2;
  inline bool has_exp() const;
  inline void clear_exp();
  static const int kExpFieldNumber = 2;
  inline ::google::protobuf::uint64 exp() const;
  inline void set_exp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ExpCfg)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_exp();
  inline void clear_has_exp();

  ::google::protobuf::uint64 exp_;
  ::google::protobuf::uint32 level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ExpCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ExpCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ExpCfg_2eproto();
  friend void protobuf_ShutdownFile_ExpCfg_2eproto();

  void InitAsDefaultInstance();
  static ExpCfg* default_instance_;
};
// -------------------------------------------------------------------

class ExpCfgSet : public ::google::protobuf::MessageLite {
 public:
  ExpCfgSet();
  virtual ~ExpCfgSet();

  ExpCfgSet(const ExpCfgSet& from);

  inline ExpCfgSet& operator=(const ExpCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ExpCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ExpCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ExpCfgSet* other);

  // implements Message ----------------------------------------------

  ExpCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ExpCfgSet& from);
  void MergeFrom(const ExpCfgSet& from);
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

  // repeated .com.cfg.vo.ExpCfg expcfg = 1;
  inline int expcfg_size() const;
  inline void clear_expcfg();
  static const int kExpcfgFieldNumber = 1;
  inline const ::com::cfg::vo::ExpCfg& expcfg(int index) const;
  inline ::com::cfg::vo::ExpCfg* mutable_expcfg(int index);
  inline ::com::cfg::vo::ExpCfg* add_expcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ExpCfg >&
      expcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ExpCfg >*
      mutable_expcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ExpCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ExpCfg > expcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ExpCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ExpCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ExpCfg_2eproto();
  friend void protobuf_ShutdownFile_ExpCfg_2eproto();

  void InitAsDefaultInstance();
  static ExpCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// ExpCfg

// required uint32 Level = 1;
inline bool ExpCfg::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExpCfg::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExpCfg::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExpCfg::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 ExpCfg::level() const {
  return level_;
}
inline void ExpCfg::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// required uint64 Exp = 2;
inline bool ExpCfg::has_exp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExpCfg::set_has_exp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExpCfg::clear_has_exp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExpCfg::clear_exp() {
  exp_ = GOOGLE_ULONGLONG(0);
  clear_has_exp();
}
inline ::google::protobuf::uint64 ExpCfg::exp() const {
  return exp_;
}
inline void ExpCfg::set_exp(::google::protobuf::uint64 value) {
  set_has_exp();
  exp_ = value;
}

// -------------------------------------------------------------------

// ExpCfgSet

// repeated .com.cfg.vo.ExpCfg expcfg = 1;
inline int ExpCfgSet::expcfg_size() const {
  return expcfg_.size();
}
inline void ExpCfgSet::clear_expcfg() {
  expcfg_.Clear();
}
inline const ::com::cfg::vo::ExpCfg& ExpCfgSet::expcfg(int index) const {
  return expcfg_.Get(index);
}
inline ::com::cfg::vo::ExpCfg* ExpCfgSet::mutable_expcfg(int index) {
  return expcfg_.Mutable(index);
}
inline ::com::cfg::vo::ExpCfg* ExpCfgSet::add_expcfg() {
  return expcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ExpCfg >&
ExpCfgSet::expcfg() const {
  return expcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ExpCfg >*
ExpCfgSet::mutable_expcfg() {
  return &expcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ExpCfg_2eproto__INCLUDED
