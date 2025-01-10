/* MCAL includes */
#include "Dio.h"
#include "Port.h"
#include "Mcu.h"

/* System includes*/
#include "S32K144.h"

/* Application includes*/
#include "scheduler.h"


int main()
{
    // Initialize MCU, Ports, NVIC, and GPT
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuClockSettingConfig_0);

    Port_Init(&Port_Config);

    NVIC_Init();

    Gpt_Init(&Gpt_Config);
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, TIMER_10MS_TICKS);

    Dio_WriteChannel(DioConf_DioChannel_l_Low_Beam, STD_HIGH);
    Dio_WriteChannel(DioConf_DioChannel_l_Low_Beam, STD_LOW);

    int schedulerStatus = Scheduler_Run();
    if (schedulerStatus != NO_ERROR)
    {
        return schedulerStatus;
    }

   return 0;
}
