// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerGrowCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerGrowCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_PlayerGrowCfg_2eproto() {
  delete PlayerGrowCfg::default_instance_;
  delete PlayerGrowCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerGrowCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerGrowCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerGrowCfg::default_instance_ = new PlayerGrowCfg();
  PlayerGrowCfgSet::default_instance_ = new PlayerGrowCfgSet();
  PlayerGrowCfg::default_instance_->InitAsDefaultInstance();
  PlayerGrowCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerGrowCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerGrowCfg_2eproto_once_);
void protobuf_AddDesc_PlayerGrowCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerGrowCfg_2eproto_once_,
                 &protobuf_AddDesc_PlayerGrowCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerGrowCfg_2eproto {
  StaticDescriptorInitializer_PlayerGrowCfg_2eproto() {
    protobuf_AddDesc_PlayerGrowCfg_2eproto();
  }
} static_descriptor_initializer_PlayerGrowCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerGrowCfg::kLevelFieldNumber;
const int PlayerGrowCfg::kHPFieldNumber;
const int PlayerGrowCfg::kMPFieldNumber;
const int PlayerGrowCfg::kATKFieldNumber;
const int PlayerGrowCfg::kDEFFieldNumber;
const int PlayerGrowCfg::kMoveSpeedFieldNumber;
const int PlayerGrowCfg::kRunSpeedFieldNumber;
const int PlayerGrowCfg::kBackSpeedFieldNumber;
const int PlayerGrowCfg::kAtkSpeedFieldNumber;
#endif  // !_MSC_VER

PlayerGrowCfg::PlayerGrowCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerGrowCfg::InitAsDefaultInstance() {
}

PlayerGrowCfg::PlayerGrowCfg(const PlayerGrowCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerGrowCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  hp_ = 0u;
  mp_ = 0u;
  atk_ = 0u;
  def_ = 0u;
  movespeed_ = 0u;
  runspeed_ = 0u;
  backspeed_ = 0u;
  atkspeed_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerGrowCfg::~PlayerGrowCfg() {
  SharedDtor();
}

void PlayerGrowCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerGrowCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerGrowCfg& PlayerGrowCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerGrowCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerGrowCfg_2eproto();
#endif
  return *default_instance_;
}

PlayerGrowCfg* PlayerGrowCfg::default_instance_ = NULL;

PlayerGrowCfg* PlayerGrowCfg::New() const {
  return new PlayerGrowCfg;
}

void PlayerGrowCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    hp_ = 0u;
    mp_ = 0u;
    atk_ = 0u;
    def_ = 0u;
    movespeed_ = 0u;
    runspeed_ = 0u;
    backspeed_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    atkspeed_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerGrowCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_HP;
        break;
      }

      // required uint32 HP = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hp_)));
          set_has_hp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MP;
        break;
      }

      // required uint32 MP = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &mp_)));
          set_has_mp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_ATK;
        break;
      }

      // required uint32 ATK = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ATK:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &atk_)));
          set_has_atk();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_DEF;
        break;
      }

      // required uint32 DEF = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DEF:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &def_)));
          set_has_def();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_MoveSpeed;
        break;
      }

      // required uint32 MoveSpeed = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MoveSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &movespeed_)));
          set_has_movespeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_RunSpeed;
        break;
      }

      // required uint32 RunSpeed = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_RunSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &runspeed_)));
          set_has_runspeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_BackSpeed;
        break;
      }

      // required uint32 BackSpeed = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_BackSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &backspeed_)));
          set_has_backspeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_AtkSpeed;
        break;
      }

      // required uint32 AtkSpeed = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_AtkSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &atkspeed_)));
          set_has_atkspeed();
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

void PlayerGrowCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 HP = 2;
  if (has_hp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->hp(), output);
  }

  // required uint32 MP = 3;
  if (has_mp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->mp(), output);
  }

  // required uint32 ATK = 4;
  if (has_atk()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->atk(), output);
  }

  // required uint32 DEF = 5;
  if (has_def()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->def(), output);
  }

  // required uint32 MoveSpeed = 6;
  if (has_movespeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->movespeed(), output);
  }

  // required uint32 RunSpeed = 7;
  if (has_runspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->runspeed(), output);
  }

  // required uint32 BackSpeed = 8;
  if (has_backspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->backspeed(), output);
  }

  // required uint32 AtkSpeed = 9;
  if (has_atkspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->atkspeed(), output);
  }

}

int PlayerGrowCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 HP = 2;
    if (has_hp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hp());
    }

    // required uint32 MP = 3;
    if (has_mp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->mp());
    }

    // required uint32 ATK = 4;
    if (has_atk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->atk());
    }

    // required uint32 DEF = 5;
    if (has_def()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->def());
    }

    // required uint32 MoveSpeed = 6;
    if (has_movespeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->movespeed());
    }

    // required uint32 RunSpeed = 7;
    if (has_runspeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->runspeed());
    }

    // required uint32 BackSpeed = 8;
    if (has_backspeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->backspeed());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 AtkSpeed = 9;
    if (has_atkspeed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->atkspeed());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerGrowCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerGrowCfg*>(&from));
}

void PlayerGrowCfg::MergeFrom(const PlayerGrowCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_hp()) {
      set_hp(from.hp());
    }
    if (from.has_mp()) {
      set_mp(from.mp());
    }
    if (from.has_atk()) {
      set_atk(from.atk());
    }
    if (from.has_def()) {
      set_def(from.def());
    }
    if (from.has_movespeed()) {
      set_movespeed(from.movespeed());
    }
    if (from.has_runspeed()) {
      set_runspeed(from.runspeed());
    }
    if (from.has_backspeed()) {
      set_backspeed(from.backspeed());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_atkspeed()) {
      set_atkspeed(from.atkspeed());
    }
  }
}

void PlayerGrowCfg::CopyFrom(const PlayerGrowCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerGrowCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001ff) != 0x000001ff) return false;

  return true;
}

void PlayerGrowCfg::Swap(PlayerGrowCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(hp_, other->hp_);
    std::swap(mp_, other->mp_);
    std::swap(atk_, other->atk_);
    std::swap(def_, other->def_);
    std::swap(movespeed_, other->movespeed_);
    std::swap(runspeed_, other->runspeed_);
    std::swap(backspeed_, other->backspeed_);
    std::swap(atkspeed_, other->atkspeed_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerGrowCfg::GetTypeName() const {
  return "com.cfg.vo.PlayerGrowCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int PlayerGrowCfgSet::kPlayergrowcfgFieldNumber;
#endif  // !_MSC_VER

PlayerGrowCfgSet::PlayerGrowCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerGrowCfgSet::InitAsDefaultInstance() {
}

PlayerGrowCfgSet::PlayerGrowCfgSet(const PlayerGrowCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerGrowCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerGrowCfgSet::~PlayerGrowCfgSet() {
  SharedDtor();
}

void PlayerGrowCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerGrowCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerGrowCfgSet& PlayerGrowCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerGrowCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerGrowCfg_2eproto();
#endif
  return *default_instance_;
}

PlayerGrowCfgSet* PlayerGrowCfgSet::default_instance_ = NULL;

PlayerGrowCfgSet* PlayerGrowCfgSet::New() const {
  return new PlayerGrowCfgSet;
}

void PlayerGrowCfgSet::Clear() {
  playergrowcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerGrowCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.PlayerGrowCfg playergrowcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_playergrowcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_playergrowcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_playergrowcfg;
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

void PlayerGrowCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.PlayerGrowCfg playergrowcfg = 1;
  for (int i = 0; i < this->playergrowcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->playergrowcfg(i), output);
  }

}

int PlayerGrowCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.PlayerGrowCfg playergrowcfg = 1;
  total_size += 1 * this->playergrowcfg_size();
  for (int i = 0; i < this->playergrowcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->playergrowcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerGrowCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerGrowCfgSet*>(&from));
}

void PlayerGrowCfgSet::MergeFrom(const PlayerGrowCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  playergrowcfg_.MergeFrom(from.playergrowcfg_);
}

void PlayerGrowCfgSet::CopyFrom(const PlayerGrowCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerGrowCfgSet::IsInitialized() const {

  for (int i = 0; i < playergrowcfg_size(); i++) {
    if (!this->playergrowcfg(i).IsInitialized()) return false;
  }
  return true;
}

void PlayerGrowCfgSet::Swap(PlayerGrowCfgSet* other) {
  if (other != this) {
    playergrowcfg_.Swap(&other->playergrowcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerGrowCfgSet::GetTypeName() const {
  return "com.cfg.vo.PlayerGrowCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
