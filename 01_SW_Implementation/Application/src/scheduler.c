#include "scheduler.h"
volatile uint64_t global_time = 0;

int Scheduler_Run(void)
{
    int nReturn = -1;
    uint16_t systemState = INITIAL_STATE;
    uint8_t time_segment = 0;

    NVIC_Init();

    while (true)
    {
        time_segment = global_time % 40;       

        if (INPUT_MONITORING_SEGMENT_MIN <= time_segment &&
            INPUT_MONITORING_SEGMENT_MAX >= time_segment)
        {
            nReturn = InputMonitoring_Run(&systemState);
        }

        if (HEAD_LIGHT_CONTROL_SEGMENT_MIN <= time_segment &&
            HEAD_LIGHT_CONTROL_SEGMENT_MAX >= time_segment)
        {
            nReturn = HeadLightContol_Run(&systemState);
        }
        
        else if (SIGNAL_LIGHT_CONTROL_SEGMENT_MIN <= time_segment &&
                 SIGNAL_LIGHT_CONTROL_SEGMENT_MAX >= time_segment)
        {
            nReturn = SignalLightContol_Run(&systemState);
        }

        else if (TAIL_LIGHT_CONTROL_SEGMENT_MIN <= time_segment &&
                 TAIL_LIGHT_CONTROL_SEGMENT_MAX >= time_segment)
        {
            nReturn = TailLightContol_Run(systemState);
        }

        if (0 > nReturn)
        {
            break;
        }
    }

    return nReturn;
}

// GPT callback function
void GptNotification_FTM(void)
{
        global_time++;
}

void NVIC_Init (void)
{
	// Clear priority register for FTM0
	S32_NVIC->ICPR[FTM0_Ch0_Ch1_IRQn / 32U] |= 1U << (FTM0_Ch0_Ch1_IRQn % 32U);
	// Set enable register for FTM0
	S32_NVIC->ISER[FTM0_Ch0_Ch1_IRQn / 32U] |= 1U << (FTM0_Ch0_Ch1_IRQn % 32U);
	// Set priority 0 for FTM0
	S32_NVIC->IP[FTM0_Ch0_Ch1_IRQn] |= (FTM0_PRIORITY << 4U);
}

void FTM0_Ch0_Ch1_IRQHandler(void)
{
    Gpt_Ftm_ProcessCommonInterrupt(FTM_0_CH_0);
}