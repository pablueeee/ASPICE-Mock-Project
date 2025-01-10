/* MCAL includes */
#include "Dio.h"
#include "Port.h"
#include "Mcu.h"
#include "Gpt.h"

/* System includes*/
#include "system_S32K144.h"

/* for Gpt_Ftm_ProcessCommonInterrupt() */
#include "Gpt_Ftm.h"
#include "Gpt_Irq.h"

#define TICK_PERIOD	1000U

void GptNotification_FTM(void)
{
    Dio_FlipChannel(DioConf_DioChannel_l_Low_Beam);
}

int main()
{
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuClockSettingConfig_0);
    Port_Init(&Port_Config);

    //Det_Test_Case(10);

    Gpt_Init(&Gpt_Config);

    //Det_Test_Case(14);

    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, TICK_PERIOD);

    Dio_WriteChannel(DioConf_DioChannel_l_Low_Beam, STD_HIGH);
    Dio_WriteChannel(DioConf_DioChannel_l_Low_Beam, STD_LOW);

    //Det_Test_Case(13);
    //Det_Test_Case(31);
    //Det_Test_Case(22);

    while (1)
    {
    }
}
