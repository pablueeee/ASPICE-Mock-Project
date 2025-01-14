#include "input_monitoring.h"

int InputMonitoring_Run(uint16_t *systemState)
{
  int errorStatus = NO_ERROR;

  // read headlight inputs
  uint16_t hLightStatus = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_hLight_btn);
  if (hLightStatus == DIO_READ_FAILURE) 
  {
    return HEAD_LIGHT_BTN_READ_FAILED; 
  }

  uint16_t beamSelection = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_hLight_Beam_btn);
  if (beamSelection == DIO_READ_FAILURE) 
  {
    return HEAD_LIGHT_BEAM_BTN_READ_FAILED; 
  }

  // uint16_t flashTrigger = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_flash_btn);
  // if (flashTrigger == DIO_READ_FAILURE) 
  // {
  //   return HEAD_LIGHT_FLASH_BTN_READ_FAILED; 
  // }

  // read signal light inputs
  uint16_t turnLeftTrigger = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_turn_l_btn);
  if (turnLeftTrigger == DIO_READ_FAILURE) 
  {
    return TURN_LEFT_BTN_READ_FAILED; 
  }

  uint16_t turnRightTrigger = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_turn_r_btn);
  if (turnRightTrigger == DIO_READ_FAILURE) 
  {
    return TURN_RIGHT_BTN_READ_FAILED; 
  }

  uint16_t hazard = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_hazard_btn);
  if (hazard == DIO_READ_FAILURE) 
  {
    return HAZARD_BTN_READ_FAILED; 
  }

  // set temp state
  uint16_t tempState = 0;

  if(hLightStatus && !beamSelection)
  {
    tempState |= HEAD_LIGHT_LOW_BEAM;
  }
  else if(hLightStatus && beamSelection)
  {
    tempState |= HEAD_LIGHT_HIGH_BEAM;
  }

  if(hazard)
  {
    tempState |= SIGNAL_LIGHT_HAZARD;
  }
  else if(turnLeftTrigger)
  {
    tempState |= SIGNAL_LIGHT_TURN_LEFT;
  }
  else if(turnRightTrigger)
  {
    tempState |= SIGNAL_LIGHT_TURN_RIGHT;
  }

// set systemState here
*systemState = tempState;

return errorStatus;
}