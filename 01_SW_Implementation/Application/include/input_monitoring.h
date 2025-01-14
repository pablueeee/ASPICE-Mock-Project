// input_monitoring.h
#ifndef INPUT_MONITORING_H
#define INPUT_MONITORING_H

#include <stdint.h>
#include <stdbool.h>

#include "Dio.h"

#include "states.h"
#include "error_codes.h"

int InputMonitoring_Run(uint16_t *systemState);

static bool isBrakePressed = false;

static bool isReversePressed = false;
static bool prev_reverseStatus = false;

#endif // INPUT_MONITORING_H
