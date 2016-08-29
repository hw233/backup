// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EliteWarMapCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EliteWarMapCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_EliteWarMapCfg_2eproto() {
  delete EliteWarMapCfg::default_instance_;
  delete EliteWarMapCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_EliteWarMapCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_EliteWarMapCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  EliteWarMapCfg::default_instance_ = new EliteWarMapCfg();
  EliteWarMapCfgSet::default_instance_ = new EliteWarMapCfgSet();
  EliteWarMapCfg::default_instance_->InitAsDefaultInstance();
  EliteWarMapCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EliteWarMapCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_EliteWarMapCfg_2eproto_once_);
void protobuf_AddDesc_EliteWarMapCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_EliteWarMapCfg_2eproto_once_,
                 &protobuf_AddDesc_EliteWarMapCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EliteWarMapCfg_2eproto {
  StaticDescriptorInitializer_EliteWarMapCfg_2eproto() {
    protobuf_AddDesc_EliteWarMapCfg_2eproto();
  }
} static_descriptor_initializer_EliteWarMapCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int EliteWarMapCfg::kIDFieldNumber;
const int EliteWarMapCfg::kNameFieldNumber;
const int EliteWarMapCfg::kMapIDFieldNumber;
const int EliteWarMapCfg::kWarIDFieldNumber;
const int EliteWarMapCfg::kWinTypeFieldNumber;
const int EliteWarMapCfg::kWinValue1FieldNumber;
const int EliteWarMapCfg::kWinValue2FieldNumber;
const int EliteWarMapCfg::kLimitTimeFieldNumber;
const int EliteWarMapCfg::kStageNumFieldNumber;
const int EliteWarMapCfg::kPackageIDFieldNumber;
const int EliteWarMapCfg::kBossIDFieldNumber;
const int EliteWarMapCfg::kLevelFieldNumber;
const int EliteWarMapCfg::kStarConditionFieldNumber;
#endif  // !_MSC_VER

EliteWarMapCfg::EliteWarMapCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EliteWarMapCfg::InitAsDefaultInstance() {
}

EliteWarMapCfg::EliteWarMapCfg(const EliteWarMapCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EliteWarMapCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  mapid_ = 0u;
  warid_ = 0u;
  wintype_ = 0u;
  winvalue1_ = 0u;
  winvalue2_ = 0u;
  limittime_ = 0u;
  stagenum_ = 0u;
  packageid_ = 0u;
  bossid_ = 0u;
  level_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EliteWarMapCfg::~EliteWarMapCfg() {
  SharedDtor();
}

void EliteWarMapCfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EliteWarMapCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EliteWarMapCfg& EliteWarMapCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EliteWarMapCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EliteWarMapCfg_2eproto();
#endif
  return *default_instance_;
}

EliteWarMapCfg* EliteWarMapCfg::default_instance_ = NULL;

EliteWarMapCfg* EliteWarMapCfg::New() const {
  return new EliteWarMapCfg;
}

void EliteWarMapCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    mapid_ = 0u;
    warid_ = 0u;
    wintype_ = 0u;
    winvalue1_ = 0u;
    winvalue2_ = 0u;
    limittime_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    stagenum_ = 0u;
    packageid_ = 0u;
    bossid_ = 0u;
    level_ = 0u;
  }
  starcondition_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EliteWarMapCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Name;
        break;
      }

      // required string Name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MapID;
        break;
      }

      // required uint32 MapID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MapID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &mapid_)));
          set_has_mapid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_WarID;
        break;
      }

      // required uint32 WarID = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WarID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &warid_)));
          set_has_warid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_WinType;
        break;
      }

      // required uint32 WinType = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WinType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wintype_)));
          set_has_wintype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_WinValue1;
        break;
      }

      // required uint32 WinValue1 = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WinValue1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &winvalue1_)));
          set_has_winvalue1();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_WinValue2;
        break;
      }

      // required uint32 WinValue2 = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WinValue2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &winvalue2_)));
          set_has_winvalue2();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_LimitTime;
        break;
      }

      // required uint32 LimitTime = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_LimitTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &limittime_)));
          set_has_limittime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_StageNum;
        break;
      }

      // required uint32 StageNum = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_StageNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &stagenum_)));
          set_has_stagenum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_PackageID;
        break;
      }

      // required uint32 PackageID = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_PackageID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &packageid_)));
          set_has_packageid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_BossID;
        break;
      }

      // required uint32 BossID = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_BossID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bossid_)));
          set_has_bossid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_Level;
        break;
      }

      // required uint32 Level = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_StarCondition;
        break;
      }

      // repeated uint32 StarCondition = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_StarCondition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 104, input, this->mutable_starcondition())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_starcondition())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_StarCondition;
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

void EliteWarMapCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string Name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required uint32 MapID = 3;
  if (has_mapid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->mapid(), output);
  }

  // required uint32 WarID = 4;
  if (has_warid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->warid(), output);
  }

  // required uint32 WinType = 5;
  if (has_wintype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->wintype(), output);
  }

  // required uint32 WinValue1 = 6;
  if (has_winvalue1()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->winvalue1(), output);
  }

  // required uint32 WinValue2 = 7;
  if (has_winvalue2()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->winvalue2(), output);
  }

  // required uint32 LimitTime = 8;
  if (has_limittime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->limittime(), output);
  }

  // required uint32 StageNum = 9;
  if (has_stagenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->stagenum(), output);
  }

  // required uint32 PackageID = 10;
  if (has_packageid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->packageid(), output);
  }

  // required uint32 BossID = 11;
  if (has_bossid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->bossid(), output);
  }

  // required uint32 Level = 12;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->level(), output);
  }

  // repeated uint32 StarCondition = 13;
  for (int i = 0; i < this->starcondition_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      13, this->starcondition(i), output);
  }

}

int EliteWarMapCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string Name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required uint32 MapID = 3;
    if (has_mapid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->mapid());
    }

    // required uint32 WarID = 4;
    if (has_warid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->warid());
    }

    // required uint32 WinType = 5;
    if (has_wintype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->wintype());
    }

    // required uint32 WinValue1 = 6;
    if (has_winvalue1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->winvalue1());
    }

    // required uint32 WinValue2 = 7;
    if (has_winvalue2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->winvalue2());
    }

    // required uint32 LimitTime = 8;
    if (has_limittime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->limittime());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 StageNum = 9;
    if (has_stagenum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->stagenum());
    }

    // required uint32 PackageID = 10;
    if (has_packageid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->packageid());
    }

    // required uint32 BossID = 11;
    if (has_bossid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->bossid());
    }

    // required uint32 Level = 12;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

  }
  // repeated uint32 StarCondition = 13;
  {
    int data_size = 0;
    for (int i = 0; i < this->starcondition_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->starcondition(i));
    }
    total_size += 1 * this->starcondition_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EliteWarMapCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EliteWarMapCfg*>(&from));
}

void EliteWarMapCfg::MergeFrom(const EliteWarMapCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  starcondition_.MergeFrom(from.starcondition_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_mapid()) {
      set_mapid(from.mapid());
    }
    if (from.has_warid()) {
      set_warid(from.warid());
    }
    if (from.has_wintype()) {
      set_wintype(from.wintype());
    }
    if (from.has_winvalue1()) {
      set_winvalue1(from.winvalue1());
    }
    if (from.has_winvalue2()) {
      set_winvalue2(from.winvalue2());
    }
    if (from.has_limittime()) {
      set_limittime(from.limittime());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_stagenum()) {
      set_stagenum(from.stagenum());
    }
    if (from.has_packageid()) {
      set_packageid(from.packageid());
    }
    if (from.has_bossid()) {
      set_bossid(from.bossid());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
  }
}

void EliteWarMapCfg::CopyFrom(const EliteWarMapCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EliteWarMapCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000fff) != 0x00000fff) return false;

  return true;
}

void EliteWarMapCfg::Swap(EliteWarMapCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    std::swap(mapid_, other->mapid_);
    std::swap(warid_, other->warid_);
    std::swap(wintype_, other->wintype_);
    std::swap(winvalue1_, other->winvalue1_);
    std::swap(winvalue2_, other->winvalue2_);
    std::swap(limittime_, other->limittime_);
    std::swap(stagenum_, other->stagenum_);
    std::swap(packageid_, other->packageid_);
    std::swap(bossid_, other->bossid_);
    std::swap(level_, other->level_);
    starcondition_.Swap(&other->starcondition_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EliteWarMapCfg::GetTypeName() const {
  return "com.cfg.vo.EliteWarMapCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int EliteWarMapCfgSet::kElitewarMapCfgFieldNumber;
#endif  // !_MSC_VER

EliteWarMapCfgSet::EliteWarMapCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EliteWarMapCfgSet::InitAsDefaultInstance() {
}

EliteWarMapCfgSet::EliteWarMapCfgSet(const EliteWarMapCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EliteWarMapCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EliteWarMapCfgSet::~EliteWarMapCfgSet() {
  SharedDtor();
}

void EliteWarMapCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EliteWarMapCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EliteWarMapCfgSet& EliteWarMapCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EliteWarMapCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EliteWarMapCfg_2eproto();
#endif
  return *default_instance_;
}

EliteWarMapCfgSet* EliteWarMapCfgSet::default_instance_ = NULL;

EliteWarMapCfgSet* EliteWarMapCfgSet::New() const {
  return new EliteWarMapCfgSet;
}

void EliteWarMapCfgSet::Clear() {
  elitewarmapcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EliteWarMapCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.EliteWarMapCfg elitewarMapCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_elitewarMapCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_elitewarmapcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_elitewarMapCfg;
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

void EliteWarMapCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.EliteWarMapCfg elitewarMapCfg = 1;
  for (int i = 0; i < this->elitewarmapcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->elitewarmapcfg(i), output);
  }

}

int EliteWarMapCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.EliteWarMapCfg elitewarMapCfg = 1;
  total_size += 1 * this->elitewarmapcfg_size();
  for (int i = 0; i < this->elitewarmapcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->elitewarmapcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EliteWarMapCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EliteWarMapCfgSet*>(&from));
}

void EliteWarMapCfgSet::MergeFrom(const EliteWarMapCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  elitewarmapcfg_.MergeFrom(from.elitewarmapcfg_);
}

void EliteWarMapCfgSet::CopyFrom(const EliteWarMapCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EliteWarMapCfgSet::IsInitialized() const {

  for (int i = 0; i < elitewarmapcfg_size(); i++) {
    if (!this->elitewarmapcfg(i).IsInitialized()) return false;
  }
  return true;
}

void EliteWarMapCfgSet::Swap(EliteWarMapCfgSet* other) {
  if (other != this) {
    elitewarmapcfg_.Swap(&other->elitewarmapcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EliteWarMapCfgSet::GetTypeName() const {
  return "com.cfg.vo.EliteWarMapCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
