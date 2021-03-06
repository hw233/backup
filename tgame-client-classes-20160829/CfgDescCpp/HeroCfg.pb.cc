// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeroCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HeroCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_HeroCfg_2eproto() {
  delete HeroCfg::default_instance_;
  delete HeroCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_HeroCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_HeroCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  HeroCfg::default_instance_ = new HeroCfg();
  HeroCfgSet::default_instance_ = new HeroCfgSet();
  HeroCfg::default_instance_->InitAsDefaultInstance();
  HeroCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HeroCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_HeroCfg_2eproto_once_);
void protobuf_AddDesc_HeroCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_HeroCfg_2eproto_once_,
                 &protobuf_AddDesc_HeroCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HeroCfg_2eproto {
  StaticDescriptorInitializer_HeroCfg_2eproto() {
    protobuf_AddDesc_HeroCfg_2eproto();
  }
} static_descriptor_initializer_HeroCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int HeroCfg::kShowIDFieldNumber;
const int HeroCfg::kRoleNameFieldNumber;
const int HeroCfg::kRoleIntroFieldNumber;
const int HeroCfg::kResNameFieldNumber;
const int HeroCfg::kWordsVoiceFieldNumber;
const int HeroCfg::kEmergeVoiceFieldNumber;
const int HeroCfg::kHurtVoiceFieldNumber;
const int HeroCfg::kDieVoiceFieldNumber;
const int HeroCfg::kStiffTimeFieldNumber;
const int HeroCfg::kSwitchWeaponVoiceFieldNumber;
const int HeroCfg::kHeadIconFieldNumber;
const int HeroCfg::kDodgeSoundFieldNumber;
const int HeroCfg::kHurtColorFieldNumber;
const int HeroCfg::kRunDisFieldNumber;
const int HeroCfg::kActNumFieldNumber;
#endif  // !_MSC_VER

HeroCfg::HeroCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void HeroCfg::InitAsDefaultInstance() {
}

HeroCfg::HeroCfg(const HeroCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void HeroCfg::SharedCtor() {
  _cached_size_ = 0;
  showid_ = 0u;
  rolename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  roleintro_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  resname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  wordsvoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  emergevoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  hurtvoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  dievoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  stifftime_ = 0u;
  switchweaponvoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  headicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  dodgesound_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  hurtcolor_ = 0u;
  rundis_ = 0u;
  actnum_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeroCfg::~HeroCfg() {
  SharedDtor();
}

void HeroCfg::SharedDtor() {
  if (rolename_ != &::google::protobuf::internal::kEmptyString) {
    delete rolename_;
  }
  if (roleintro_ != &::google::protobuf::internal::kEmptyString) {
    delete roleintro_;
  }
  if (resname_ != &::google::protobuf::internal::kEmptyString) {
    delete resname_;
  }
  if (wordsvoice_ != &::google::protobuf::internal::kEmptyString) {
    delete wordsvoice_;
  }
  if (emergevoice_ != &::google::protobuf::internal::kEmptyString) {
    delete emergevoice_;
  }
  if (hurtvoice_ != &::google::protobuf::internal::kEmptyString) {
    delete hurtvoice_;
  }
  if (dievoice_ != &::google::protobuf::internal::kEmptyString) {
    delete dievoice_;
  }
  if (switchweaponvoice_ != &::google::protobuf::internal::kEmptyString) {
    delete switchweaponvoice_;
  }
  if (headicon_ != &::google::protobuf::internal::kEmptyString) {
    delete headicon_;
  }
  if (dodgesound_ != &::google::protobuf::internal::kEmptyString) {
    delete dodgesound_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HeroCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HeroCfg& HeroCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_HeroCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_HeroCfg_2eproto();
#endif
  return *default_instance_;
}

HeroCfg* HeroCfg::default_instance_ = NULL;

HeroCfg* HeroCfg::New() const {
  return new HeroCfg;
}

void HeroCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    showid_ = 0u;
    if (has_rolename()) {
      if (rolename_ != &::google::protobuf::internal::kEmptyString) {
        rolename_->clear();
      }
    }
    if (has_roleintro()) {
      if (roleintro_ != &::google::protobuf::internal::kEmptyString) {
        roleintro_->clear();
      }
    }
    if (has_resname()) {
      if (resname_ != &::google::protobuf::internal::kEmptyString) {
        resname_->clear();
      }
    }
    if (has_wordsvoice()) {
      if (wordsvoice_ != &::google::protobuf::internal::kEmptyString) {
        wordsvoice_->clear();
      }
    }
    if (has_emergevoice()) {
      if (emergevoice_ != &::google::protobuf::internal::kEmptyString) {
        emergevoice_->clear();
      }
    }
    if (has_hurtvoice()) {
      if (hurtvoice_ != &::google::protobuf::internal::kEmptyString) {
        hurtvoice_->clear();
      }
    }
    if (has_dievoice()) {
      if (dievoice_ != &::google::protobuf::internal::kEmptyString) {
        dievoice_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    stifftime_ = 0u;
    if (has_switchweaponvoice()) {
      if (switchweaponvoice_ != &::google::protobuf::internal::kEmptyString) {
        switchweaponvoice_->clear();
      }
    }
    if (has_headicon()) {
      if (headicon_ != &::google::protobuf::internal::kEmptyString) {
        headicon_->clear();
      }
    }
    if (has_dodgesound()) {
      if (dodgesound_ != &::google::protobuf::internal::kEmptyString) {
        dodgesound_->clear();
      }
    }
    hurtcolor_ = 0u;
    rundis_ = 0u;
    actnum_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool HeroCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ShowID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &showid_)));
          set_has_showid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_RoleName;
        break;
      }

      // required string RoleName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_RoleName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rolename()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_RoleIntro;
        break;
      }

      // required string RoleIntro = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_RoleIntro:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_roleintro()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_ResName;
        break;
      }

      // required string ResName = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ResName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resname()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_WordsVoice;
        break;
      }

      // required string WordsVoice = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_WordsVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_wordsvoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_EmergeVoice;
        break;
      }

      // required string EmergeVoice = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_EmergeVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_emergevoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_HurtVoice;
        break;
      }

      // required string HurtVoice = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_HurtVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hurtvoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_DieVoice;
        break;
      }

      // required string DieVoice = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DieVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dievoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_StiffTime;
        break;
      }

      // required uint32 StiffTime = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_StiffTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &stifftime_)));
          set_has_stifftime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_SwitchWeaponVoice;
        break;
      }

      // required string SwitchWeaponVoice = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_SwitchWeaponVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_switchweaponvoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(90)) goto parse_HeadIcon;
        break;
      }

      // required string HeadIcon = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_HeadIcon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_headicon()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_DodgeSound;
        break;
      }

      // required string DodgeSound = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DodgeSound:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dodgesound()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_HurtColor;
        break;
      }

      // required uint32 HurtColor = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HurtColor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hurtcolor_)));
          set_has_hurtcolor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_RunDis;
        break;
      }

      // required uint32 RunDis = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_RunDis:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rundis_)));
          set_has_rundis();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(120)) goto parse_ActNum;
        break;
      }

      // required uint32 ActNum = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ActNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &actnum_)));
          set_has_actnum();
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

void HeroCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ShowID = 1;
  if (has_showid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->showid(), output);
  }

  // required string RoleName = 2;
  if (has_rolename()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->rolename(), output);
  }

  // required string RoleIntro = 3;
  if (has_roleintro()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->roleintro(), output);
  }

  // required string ResName = 4;
  if (has_resname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->resname(), output);
  }

  // required string WordsVoice = 5;
  if (has_wordsvoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->wordsvoice(), output);
  }

  // required string EmergeVoice = 6;
  if (has_emergevoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->emergevoice(), output);
  }

  // required string HurtVoice = 7;
  if (has_hurtvoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->hurtvoice(), output);
  }

  // required string DieVoice = 8;
  if (has_dievoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->dievoice(), output);
  }

  // required uint32 StiffTime = 9;
  if (has_stifftime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->stifftime(), output);
  }

  // required string SwitchWeaponVoice = 10;
  if (has_switchweaponvoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->switchweaponvoice(), output);
  }

  // required string HeadIcon = 11;
  if (has_headicon()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      11, this->headicon(), output);
  }

  // required string DodgeSound = 12;
  if (has_dodgesound()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      12, this->dodgesound(), output);
  }

  // required uint32 HurtColor = 13;
  if (has_hurtcolor()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->hurtcolor(), output);
  }

  // required uint32 RunDis = 14;
  if (has_rundis()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->rundis(), output);
  }

  // required uint32 ActNum = 15;
  if (has_actnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->actnum(), output);
  }

}

int HeroCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ShowID = 1;
    if (has_showid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->showid());
    }

    // required string RoleName = 2;
    if (has_rolename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->rolename());
    }

    // required string RoleIntro = 3;
    if (has_roleintro()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->roleintro());
    }

    // required string ResName = 4;
    if (has_resname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->resname());
    }

    // required string WordsVoice = 5;
    if (has_wordsvoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->wordsvoice());
    }

    // required string EmergeVoice = 6;
    if (has_emergevoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->emergevoice());
    }

    // required string HurtVoice = 7;
    if (has_hurtvoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hurtvoice());
    }

    // required string DieVoice = 8;
    if (has_dievoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dievoice());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 StiffTime = 9;
    if (has_stifftime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->stifftime());
    }

    // required string SwitchWeaponVoice = 10;
    if (has_switchweaponvoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->switchweaponvoice());
    }

    // required string HeadIcon = 11;
    if (has_headicon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->headicon());
    }

    // required string DodgeSound = 12;
    if (has_dodgesound()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dodgesound());
    }

    // required uint32 HurtColor = 13;
    if (has_hurtcolor()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hurtcolor());
    }

    // required uint32 RunDis = 14;
    if (has_rundis()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->rundis());
    }

    // required uint32 ActNum = 15;
    if (has_actnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->actnum());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeroCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HeroCfg*>(&from));
}

void HeroCfg::MergeFrom(const HeroCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_showid()) {
      set_showid(from.showid());
    }
    if (from.has_rolename()) {
      set_rolename(from.rolename());
    }
    if (from.has_roleintro()) {
      set_roleintro(from.roleintro());
    }
    if (from.has_resname()) {
      set_resname(from.resname());
    }
    if (from.has_wordsvoice()) {
      set_wordsvoice(from.wordsvoice());
    }
    if (from.has_emergevoice()) {
      set_emergevoice(from.emergevoice());
    }
    if (from.has_hurtvoice()) {
      set_hurtvoice(from.hurtvoice());
    }
    if (from.has_dievoice()) {
      set_dievoice(from.dievoice());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_stifftime()) {
      set_stifftime(from.stifftime());
    }
    if (from.has_switchweaponvoice()) {
      set_switchweaponvoice(from.switchweaponvoice());
    }
    if (from.has_headicon()) {
      set_headicon(from.headicon());
    }
    if (from.has_dodgesound()) {
      set_dodgesound(from.dodgesound());
    }
    if (from.has_hurtcolor()) {
      set_hurtcolor(from.hurtcolor());
    }
    if (from.has_rundis()) {
      set_rundis(from.rundis());
    }
    if (from.has_actnum()) {
      set_actnum(from.actnum());
    }
  }
}

void HeroCfg::CopyFrom(const HeroCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeroCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00007fff) != 0x00007fff) return false;

  return true;
}

void HeroCfg::Swap(HeroCfg* other) {
  if (other != this) {
    std::swap(showid_, other->showid_);
    std::swap(rolename_, other->rolename_);
    std::swap(roleintro_, other->roleintro_);
    std::swap(resname_, other->resname_);
    std::swap(wordsvoice_, other->wordsvoice_);
    std::swap(emergevoice_, other->emergevoice_);
    std::swap(hurtvoice_, other->hurtvoice_);
    std::swap(dievoice_, other->dievoice_);
    std::swap(stifftime_, other->stifftime_);
    std::swap(switchweaponvoice_, other->switchweaponvoice_);
    std::swap(headicon_, other->headicon_);
    std::swap(dodgesound_, other->dodgesound_);
    std::swap(hurtcolor_, other->hurtcolor_);
    std::swap(rundis_, other->rundis_);
    std::swap(actnum_, other->actnum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string HeroCfg::GetTypeName() const {
  return "com.cfg.vo.HeroCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int HeroCfgSet::kHeroCfgFieldNumber;
#endif  // !_MSC_VER

HeroCfgSet::HeroCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void HeroCfgSet::InitAsDefaultInstance() {
}

HeroCfgSet::HeroCfgSet(const HeroCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void HeroCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeroCfgSet::~HeroCfgSet() {
  SharedDtor();
}

void HeroCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HeroCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HeroCfgSet& HeroCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_HeroCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_HeroCfg_2eproto();
#endif
  return *default_instance_;
}

HeroCfgSet* HeroCfgSet::default_instance_ = NULL;

HeroCfgSet* HeroCfgSet::New() const {
  return new HeroCfgSet;
}

void HeroCfgSet::Clear() {
  herocfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool HeroCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.HeroCfg heroCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_heroCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_herocfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_heroCfg;
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

void HeroCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.HeroCfg heroCfg = 1;
  for (int i = 0; i < this->herocfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->herocfg(i), output);
  }

}

int HeroCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.HeroCfg heroCfg = 1;
  total_size += 1 * this->herocfg_size();
  for (int i = 0; i < this->herocfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->herocfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeroCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HeroCfgSet*>(&from));
}

void HeroCfgSet::MergeFrom(const HeroCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  herocfg_.MergeFrom(from.herocfg_);
}

void HeroCfgSet::CopyFrom(const HeroCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeroCfgSet::IsInitialized() const {

  for (int i = 0; i < herocfg_size(); i++) {
    if (!this->herocfg(i).IsInitialized()) return false;
  }
  return true;
}

void HeroCfgSet::Swap(HeroCfgSet* other) {
  if (other != this) {
    herocfg_.Swap(&other->herocfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string HeroCfgSet::GetTypeName() const {
  return "com.cfg.vo.HeroCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
