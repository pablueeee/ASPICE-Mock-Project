// head_light_control.c
#include "head_light_control.h"

int HeadLightContol_Run(uint16_t *systemState)
{
  uint16_t hLightState = *systemState & HEAD_LIGHT_MASK;

  switch(hLightState)
  {
    case HEAD_LIGHT_OFF:
      if(hLightTurnOff() != NO_ERROR)
      {
        return HEAD_LIGHT_CONTROL_ERROR;
      }
      break;

    case HEAD_LIGHT_LOW_BEAM:
      if(hLightTurnOn() != NO_ERROR)
      {
        return HEAD_LIGHT_CONTROL_ERROR;
      }
      break;

    case HEAD_LIGHT_HIGH_BEAM:
      if(hLightHighBeamOn() != NO_ERROR)
      {
        return HEAD_LIGHT_CONTROL_ERROR;
      }
      break;

    default:
      return HEAD_LIGHT_CONTROL_ERROR;
  }

  return NO_ERROR;
}

int hLightTurnOff(void)
{
  int errorStatus = NO_ERROR;

  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam, STD_LOW);
    
  if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam) != STD_LOW)
  {
      return HEAD_LIGHT_CONTROL_ERROR;
  }
  
  return errorStatus;
}

int hLightTurnOn(void)
{
  int errorStatus = NO_ERROR;
  
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam, STD_HIGH);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam, STD_HIGH);
    
  if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam) != STD_HIGH ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam) != STD_HIGH)
  {
      return HEAD_LIGHT_CONTROL_ERROR;
  }
  
  return errorStatus;
}

int hLightHighBeamOn(void)
{
  int errorStatus = NO_ERROR;

  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam, STD_HIGH);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam, STD_HIGH);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam, STD_LOW);
    
  if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_High_Beam) != STD_HIGH ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_High_Beam) != STD_HIGH ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_Low_Beam) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_Low_Beam) != STD_LOW)
  {
      return HEAD_LIGHT_CONTROL_ERROR;
  }
  
  return errorStatus;
}