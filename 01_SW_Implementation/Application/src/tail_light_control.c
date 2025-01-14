// tail_light_control.c
#include "tail_light_control.h"

int TailLightContol_Run(uint16_t systemState)
{

    uint16_t tailLightState = systemState & TAIL_LIGHT_MASK;

    switch(tailLightState)
    {
      case TAIL_LIGHT_OFF:
        if(tailLightTurnOff() != NO_ERROR)
        {
          return TAIL_LIGHT_CONTROL_ERROR;
        }
      break;
      case BRAKE_LIGHT_ON:
        if(brakeLightTurnOn() != NO_ERROR)
        {
          return TAIL_LIGHT_CONTROL_ERROR;
        }
      break;

      case REVERSE_LIGHT_ON:
        if(reverseLightTurnOn() != NO_ERROR)
        {
          return TAIL_LIGHT_CONTROL_ERROR;
        }
      break;
    }


    return NO_ERROR;
}

int brakeLightTurnOn(void)
{
	int errorStatus = NO_ERROR;
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight, STD_HIGH);
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_bLight, STD_HIGH);

	if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight) != STD_HIGH ||
	Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight) != STD_HIGH)
	{
		return TAIL_LIGHT_CONTROL_ERROR;
	}
  
	return errorStatus;
}

int reverseLightTurnOn(void)
{
	int errorStatus = NO_ERROR;
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight, STD_HIGH);
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_tLight, STD_HIGH);

	if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight) != STD_HIGH ||
    Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_tLight) != STD_HIGH)
	{
		return TAIL_LIGHT_CONTROL_ERROR;
	}
  
	return errorStatus;
}

int tailLightTurnOff(void)
{
	int errorStatus = NO_ERROR;
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight, STD_LOW);
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_bLight, STD_LOW);
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight, STD_LOW);
	Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_tLight, STD_LOW);

	if(Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight) != STD_LOW ||
	Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight) != STD_LOW ||
    Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight) != STD_LOW ||
    Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_r_bLight) != STD_LOW)
	{
		return TAIL_LIGHT_CONTROL_ERROR;
	}
  
	return errorStatus;
}
