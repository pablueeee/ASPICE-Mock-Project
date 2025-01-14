// signal_light_control.h
#ifndef SIGNAL_LIGHT_CONTROL_H
#define  SIGNAL_LIGHT_CONTROL_H

#include <stdint.h>

#include "Dio.h"

#include "error_codes.h"
#include "states.h"

// Function Prototypes

int SignalLightContol_Run(uint16_t systemState);
int sLightTurnOff(void);
int sLightTurnRight(uint16_t time);
int sLightTurnLeft(uint16_t time);
int sLightHazard(uint16_t time);

#endif