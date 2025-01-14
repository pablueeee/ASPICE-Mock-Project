/*
 * input_monitoring.h
 *
 *  Created on: Jan 13, 2025
 *      Author: DanielleTT
 */

#ifndef INPUT_MONITORING_H_
#define INPUT_MONITORING_H_

#include <stdint.h>
#include <stdbool.h>
#include "Dio.h"
#include "error_codes.h"
#include "states.h"

#define DEBOUNCE_DELAY_MS 50

static bool isBrakePressed = false;
static bool prev_brakeStatus = false;

static bool isReversePressed = false;
static bool prev_reverseStatus = false;

#endif /* INPUT_MONITORING_H_ */
