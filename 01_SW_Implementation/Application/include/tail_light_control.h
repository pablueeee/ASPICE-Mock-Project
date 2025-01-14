// tail_light_control.h
#ifndef TAIL_LIGHT_CONTROL_H
#define  TAIL_LIGHT_CONTROL_H

#include <stdint.h>
#include <stdbool.h>
#include "Dio.h"
#include "error_codes.h"
#include "states.h"

int TailLightContol_Run(uint16_t systemState);
int brakeLightTurnOn(void);
int reverseLightTurnOn(void);
int tailLightTurnOff(void);

#endif