// Copyright 2021.06.15 HorizonRobotics

#ifndef DATA_STRUCT_FUSION_O_H
#define DATA_STRUCT_FUSION_O_H

#include <cstdint>
const int  OBJ_TRACKS_SIZE = 64;
namespace HbObjFsn_function_output {
#pragma pack(4)
// top struct of HbObjFsn function output
struct PP_HbObjFsn_ObjListOut_st {
  float TimeStamp_f32;
  uint16_t UpdateCntr_u16;
  uint16_t ObjNum_u16;
  uint32_t SensorType_u32;
  float Latency_f32;
  // Tracks_at[64]
  struct Tracks_st { 
    bool Updated_b;
    bool CoverLine_b;
    float CoverLine_Val;
    uint8_t Coord_u8;
    uint8_t Zone_u8;
    uint8_t VsnIdx_u8;
    int32_t VsnObjIdx_s32;
    int32_t VsnObjOutIdx_s32;
    uint16_t ID_u16;
    uint16_t AgeCntr_u16;
    uint16_t LifeCntr_u16;
    uint16_t RefPoint_u16;
    uint8_t MissedCycleVsn_u8;
    uint8_t MissedCycleFrontCenterRdr_u8;
    uint8_t MissedCycleRearLeftRdr_u8;
    uint8_t MissedCycleRearRightRdr_u8;
    uint16_t SensorID_au16[4];
    uint16_t SensorIDHistory_au16[4];
    uint32_t UpdatedSensor_u32;
    uint32_t UpdatedSensorHistory_u32;
    // Motion_st
    struct Motion_st {
      uint16_t RowNum_u16;
      uint16_t Reserved_u16;
      float Data_af32[6];
      Motion_st() : RowNum_u16(0), Reserved_u16(0) {}
    };
    // MotionCov_st
    struct MotionCov_st {
      uint16_t RowNum_u16;
      uint16_t Reserved_u16;
      float Data_af32[21];
      MotionCov_st() : RowNum_u16(0), Reserved_u16(0) {}
    };
  float Gain_f32;
  float GainVal_f32;
  float YawRate_f32;
  float YawRateVar_f32;
  float Heading_f32;
  float HeadingVar_f32;
  float HeadingYawRateCov_f32;
  float ObstacleProb_f32;
  float ExistQuality_f32;
  float Width_f32;
  float Length_f32;
  float Height_f32;
  uint16_t MotionType_u16;
  uint16_t VisionMotionCategory_u16;
  uint16_t ObjClass_u16;
  uint16_t ObjClassProb_u16;
  uint8_t AsilVerified_u8;
  uint8_t Reserved_u8;
  uint16_t Reserved_u16;
  Tracks_st()
      : Updated_b(false),
      CoverLine_b(false),
      CoverLine_Val(0.0f),
      Coord_u8(0),
      Zone_u8(0),
      VsnIdx_u8(0),
      VsnObjIdx_s32(0),
      VsnObjOutIdx_s32(0),
      ID_u16(0),
      AgeCntr_u16(0),
      LifeCntr_u16(0),
      RefPoint_u16(0),
      MissedCycleVsn_u8(0),
      MissedCycleFrontCenterRdr_u8(0),
      MissedCycleRearLeftRdr_u8(0),
      MissedCycleRearRightRdr_u8(0),
      UpdatedSensor_u32(0),
      UpdatedSensorHistory_u32(0),
      Gain_f32(0.0f),
      GainVal_f32(0.0f),
      YawRate_f32(0.0f),
      YawRateVar_f32(0.0f),
      Heading_f32(0.0f),
      HeadingVar_f32(0.0f),
      HeadingYawRateCov_f32(0.0f),
      ObstacleProb_f32(0.0f),
      ExistQuality_f32(0.0f),
      Width_f32(0.0f),
      Length_f32(0.0f),
      Height_f32(0.0f) {}
  }Tracks_st[OBJ_TRACKS_SIZE];
  PP_HbObjFsn_ObjListOut_st()
      : TimeStamp_f32(0),
      ObjNum_u16(0),
      SensorType_u32(0),
      Latency_f32(0.0f) {}
};
#pragma pack()
}  // namespace HbObjFsn_function_output
#endif  // !DATA_STRUCT_FUSION_O_H

