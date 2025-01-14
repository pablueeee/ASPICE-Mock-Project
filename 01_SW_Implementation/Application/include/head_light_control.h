// head_light_control.h
#ifndef HEAD_LIGHT_CONTROL_H
#define  HEAD_LIGHT_CONTROL_H

#include <stdint.h>

#include "Dio.h"

#include "error_codes.h"
#include "states.h"

// Function protorypes
int HeadLightContol_Run(uint16_t systemState);
int hLightTurnOff(void);
int hLightTurnOn(void);
int hLightHighBeamOn(void);

#endif