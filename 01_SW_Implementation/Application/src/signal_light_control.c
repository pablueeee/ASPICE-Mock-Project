// signal_light_control.c
#include "signal_light_control.h"

int SignalLightContol_Run(uint16_t systemState)
{
  uint16_t sLightState = systemState & SIGNAL_LIGHT_MASK;
  uint16_t sLightTime = systemState & SIGNAL_LIGHT_TIMER_MASK;

  switch(sLightState)
  {
    case SIGNAL_LIGHT_OFF:
      if(sLightTurnOff() != NO_ERROR)
      {
        return SIGNAL_LIGHT_CONTROL_ERROR;
      }
      break;

    case SIGNAL_LIGHT_TURN_RIGHT:
      if(sLightTurnRight(sLightTime) != NO_ERROR)
      {
        return SIGNAL_LIGHT_CONTROL_ERROR;
      }
      break;

    case SIGNAL_LIGHT_TURN_LEFT:
      if(sLightTurnLeft(sLightTime) != NO_ERROR)
      {
        return SIGNAL_LIGHT_CONTROL_ERROR;
      }
      break;

    case SIGNAL_LIGHT_HAZARD:
      if(sLightHazard(sLightTime) != NO_ERROR)
      {
        return SIGNAL_LIGHT_CONTROL_ERROR;
      }
      break;

    default:
      return SIGNAL_LIGHT_CONTROL_ERROR;
  }

  return NO_ERROR;
}

int sLightTurnOff(void)
{
  int errorStatus = NO_ERROR;

  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_l, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_r, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_l, STD_LOW);
  Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_r, STD_LOW);
    
  if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_l) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_r) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_l) != STD_LOW ||
      Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_r) != STD_LOW)
  {
      return SIGNAL_LIGHT_CONTROL_ERROR;
  }
  
  return errorStatus;
}

int sLightTurnRight(uint16_t time)
{
  int errorStatus = NO_ERROR;

  if(time == TIMER_0_MS || time == TIMER_250_MS)
  {
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_l, STD_LOW);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_r, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_l, STD_LOW);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_r, STD_HIGH);
      
    if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_l) != STD_LOW ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_r) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_l) != STD_LOW ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_r) != STD_HIGH)
    {
        return SIGNAL_LIGHT_CONTROL_ERROR;
    }
  }
  else
  {
    errorStatus = sLightTurnOff();
  }
  
  return errorStatus;
}

int sLightTurnLeft(uint16_t time)
{
  int errorStatus = NO_ERROR;

  if(time == TIMER_0_MS || time == TIMER_250_MS)
  {
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_l, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_r, STD_LOW);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_l, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_r, STD_LOW);
    
    if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_l) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_r) != STD_LOW ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_l) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_r) != STD_LOW)
    {
        return SIGNAL_LIGHT_CONTROL_ERROR;
    }
  }
  else
  {
    errorStatus = sLightTurnOff();
  }
  
  return errorStatus;
}

int sLightHazard(uint16_t time)
{
  int errorStatus = NO_ERROR;

  if(time == TIMER_0_MS || time == TIMER_500_MS)
  {
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_l, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_front_r, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_l, STD_HIGH);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_back_r, STD_HIGH);
      
    if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_l) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_front_r) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_l) != STD_HIGH ||
        Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_back_r) != STD_HIGH)
    {
        return SIGNAL_LIGHT_CONTROL_ERROR;
    }
  }
  else
  {
    errorStatus = sLightTurnOff();
  }

  return errorStatus;
}
