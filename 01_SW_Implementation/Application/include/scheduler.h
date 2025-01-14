#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdint.h>
#include <stdbool.h>

#include "S32K144.h"

#include "Gpt.h"
#include "Gpt_Ftm.h"
#include "Gpt_Irq.h"

#include "error_codes.h"
#include "states.h"
#include "input_monitoring.h"
#include "head_light_control.h"
#include "signal_light_control.h"
#include "tail_light_control.h"

#define INPUT_MONITORING_SEGMENT_MIN            0
#define INPUT_MONITORING_SEGMENT_MAX            9

#define HEAD_LIGHT_CONTROL_SEGMENT_MIN          10
#define HEAD_LIGHT_CONTROL_SEGMENT_MAX          19

#define SIGNAL_LIGHT_CONTROL_SEGMENT_MIN        20
#define SIGNAL_LIGHT_CONTROL_SEGMENT_MAX        29

#define TAIL_LIGHT_CONTROL_SEGMENT_MIN          30
#define TAIL_LIGHT_CONTROL_SEGMENT_MAX          39

#define FTM0_PRIORITY                           1 

#define TIMER_10MS_TICKS                        10000    // Define 10ms timer value

int Scheduler_Run(void);
void GptNotification_FTM(void);
void NVIC_Init (void);
void FTM0_Ch0_Ch1_IRQHandler(void);

#endif // SCHEDULER_H