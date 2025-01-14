/*
 * input_monitoring.c
 *
 *  Created on: Jan 13, 2025
 *      Author: DanielleTT
 */
#include "input_monitoring.h"

int InputMonitoring_Run(uint16_t *systemState)
{
	int errorStatus = NO_ERROR;

	uint16_t brakeStatus = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_brake_btn);

	bool curr_brakeStatus = (brakeStatus != 0);

	uint16_t reverseStatus = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_reverse_btn);

	bool curr_reverseStatus = (reverseStatus != 0);

    if (curr_brakeStatus)
    {
        isBrakePressed = true;
    }
    else
    {
        isBrakePressed = false;
    }

	if (curr_reverseStatus && !prev_reverseStatus)
	{
		isReversePressed = !isReversePressed;
	}
	prev_reverseStatus = curr_reverseStatus;

	uint16_t tempState = 0;

	if(isBrakePressed)
	{
		tempState = tempState | BRAKE_BUTTON;
	}
	else
	{
		tempState = tempState & ~BRAKE_BUTTON;
	}

	if(isReversePressed)
	{
		tempState = tempState | REVERSE_BUTTON;
	}

	*systemState = tempState;

	return errorStatus;
}


