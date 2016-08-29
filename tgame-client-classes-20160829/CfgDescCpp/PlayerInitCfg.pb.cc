// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerInitCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerInitCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_PlayerInitCfg_2eproto() {
  delete PlayerInitCfg::default_instance_;
  delete PlayerInitCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerInitCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerInitCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerInitCfg::default_instance_ = new PlayerInitCfg();
  PlayerInitCfgSet::default_instance_ = new PlayerInitCfgSet();
  PlayerInitCfg::default_instance_->InitAsDefaultInstance();
  PlayerInitCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerInitCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerInitCfg_2eproto_once_);
void protobuf_AddDesc_PlayerInitCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerInitCfg_2eproto_once_,
                 &protobuf_AddDesc_PlayerInitCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerInitCfg_2eproto {
  StaticDescriptorInitializer_PlayerInitCfg_2eproto() {
    protobuf_AddDesc_PlayerInitCfg_2eproto();
  }
} static_descriptor_initializer_PlayerInitCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerInitCfg::kPlayerIDFieldNumber;
const int PlayerInitCfg::kWeaponCfgIDFieldNumber;
const int PlayerInitCfg::kDodgeDistFieldNumber;
const int PlayerInitCfg::kDodgeCDFieldNumber;
const int PlayerInitCfg::kShowIDFieldNumber;
const int PlayerInitCfg::kEvolutionIDFieldNumber;
const int PlayerInitCfg::kHitFieldNumber;
#endif  // !_MSC_VER

PlayerInitCfg::PlayerInitCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerInitCfg::InitAsDefaultInstance() {
}

PlayerInitCfg::PlayerInitCfg(const PlayerInitCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerInitCfg::SharedCtor() {
  _cached_size_ = 0;
  playerid_ = 0u;
  weaponcfgid_ = 0u;
  dodgedist_ = 0u;
  dodgecd_ = 0u;
  showid_ = 0u;
  evolutionid_ = 0u;
  hit_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerInitCfg::~PlayerInitCfg() {
  SharedDtor();
}

void PlayerInitCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerInitCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerInitCfg& PlayerInitCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerInitCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerInitCfg_2eproto();
#endif
  return *default_instance_;
}

PlayerInitCfg* PlayerInitCfg::default_instance_ = NULL;

PlayerInitCfg* PlayerInitCfg::New() const {
  return new PlayerInitCfg;
}

void PlayerInitCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    playerid_ = 0u;
    weaponcfgid_ = 0u;
    dodgedist_ = 0u;
    dodgecd_ = 0u;
    showid_ = 0u;
    evolutionid_ = 0u;
    hit_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerInitCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 PlayerID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_WeaponCfgID;
        break;
      }

      // required uint32 WeaponCfgID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WeaponCfgID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weaponcfgid_)));
          set_has_weaponcfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_DodgeDist;
        break;
      }

      // required uint32 DodgeDist = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DodgeDist:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dodgedist_)));
          set_has_dodgedist();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_DodgeCD;
        break;
      }

      // required uint32 DodgeCD = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DodgeCD:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dodgecd_)));
          set_has_dodgecd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_ShowID;
        break;
      }

      // required uint32 ShowID = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ShowID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &showid_)));
          set_has_showid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_EvolutionID;
        break;
      }

      // required uint32 EvolutionID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_EvolutionID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &evolutionid_)));
          set_has_evolutionid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_Hit;
        break;
      }

      // required uint32 Hit = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Hit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hit_)));
          set_has_hit();
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

void PlayerInitCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 PlayerID = 1;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->playerid(), output);
  }

  // required uint32 WeaponCfgID = 2;
  if (has_weaponcfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->weaponcfgid(), output);
  }

  // required uint32 DodgeDist = 3;
  if (has_dodgedist()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->dodgedist(), output);
  }

  // required uint32 DodgeCD = 4;
  if (has_dodgecd()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->dodgecd(), output);
  }

  // required uint32 ShowID = 5;
  if (has_showid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->showid(), output);
  }

  // required uint32 EvolutionID = 6;
  if (has_evolutionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->evolutionid(), output);
  }

  // required uint32 Hit = 7;
  if (has_hit()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->hit(), output);
  }

}

int PlayerInitCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 PlayerID = 1;
    if (has_playerid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->playerid());
    }

    // required uint32 WeaponCfgID = 2;
    if (has_weaponcfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->weaponcfgid());
    }

    // required uint32 DodgeDist = 3;
    if (has_dodgedist()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dodgedist());
    }

    // required uint32 DodgeCD = 4;
    if (has_dodgecd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dodgecd());
    }

    // required uint32 ShowID = 5;
    if (has_showid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->showid());
    }

    // required uint32 EvolutionID = 6;
    if (has_evolutionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->evolutionid());
    }

    // required uint32 Hit = 7;
    if (has_hit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hit());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerInitCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerInitCfg*>(&from));
}

void PlayerInitCfg::MergeFrom(const PlayerInitCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_weaponcfgid()) {
      set_weaponcfgid(from.weaponcfgid());
    }
    if (from.has_dodgedist()) {
      set_dodgedist(from.dodgedist());
    }
    if (from.has_dodgecd()) {
      set_dodgecd(from.dodgecd());
    }
    if (from.has_showid()) {
      set_showid(from.showid());
    }
    if (from.has_evolutionid()) {
      set_evolutionid(from.evolutionid());
    }
    if (from.has_hit()) {
      set_hit(from.hit());
    }
  }
}

void PlayerInitCfg::CopyFrom(const PlayerInitCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerInitCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void PlayerInitCfg::Swap(PlayerInitCfg* other) {
  if (other != this) {
    std::swap(playerid_, other->playerid_);
    std::swap(weaponcfgid_, other->weaponcfgid_);
    std::swap(dodgedist_, other->dodgedist_);
    std::swap(dodgecd_, other->dodgecd_);
    std::swap(showid_, other->showid_);
    std::swap(evolutionid_, other->evolutionid_);
    std::swap(hit_, other->hit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerInitCfg::GetTypeName() const {
  return "com.cfg.vo.PlayerInitCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int PlayerInitCfgSet::kPlayerinitcfgFieldNumber;
#endif  // !_MSC_VER

PlayerInitCfgSet::PlayerInitCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerInitCfgSet::InitAsDefaultInstance() {
}

PlayerInitCfgSet::PlayerInitCfgSet(const PlayerInitCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerInitCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerInitCfgSet::~PlayerInitCfgSet() {
  SharedDtor();
}

void PlayerInitCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerInitCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerInitCfgSet& PlayerInitCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerInitCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerInitCfg_2eproto();
#endif
  return *default_instance_;
}

PlayerInitCfgSet* PlayerInitCfgSet::default_instance_ = NULL;

PlayerInitCfgSet* PlayerInitCfgSet::New() const {
  return new PlayerInitCfgSet;
}

void PlayerInitCfgSet::Clear() {
  playerinitcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerInitCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.PlayerInitCfg playerinitcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_playerinitcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_playerinitcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_playerinitcfg;
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

void PlayerInitCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.PlayerInitCfg playerinitcfg = 1;
  for (int i = 0; i < this->playerinitcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->playerinitcfg(i), output);
  }

}

int PlayerInitCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.PlayerInitCfg playerinitcfg = 1;
  total_size += 1 * this->playerinitcfg_size();
  for (int i = 0; i < this->playerinitcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->playerinitcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerInitCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerInitCfgSet*>(&from));
}

void PlayerInitCfgSet::MergeFrom(const PlayerInitCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  playerinitcfg_.MergeFrom(from.playerinitcfg_);
}

void PlayerInitCfgSet::CopyFrom(const PlayerInitCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerInitCfgSet::IsInitialized() const {

  for (int i = 0; i < playerinitcfg_size(); i++) {
    if (!this->playerinitcfg(i).IsInitialized()) return false;
  }
  return true;
}

void PlayerInitCfgSet::Swap(PlayerInitCfgSet* other) {
  if (other != this) {
    playerinitcfg_.Swap(&other->playerinitcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerInitCfgSet::GetTypeName() const {
  return "com.cfg.vo.PlayerInitCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
