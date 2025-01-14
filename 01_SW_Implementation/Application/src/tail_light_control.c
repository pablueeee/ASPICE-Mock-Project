// tail_light_control.c
#include "tail_light_control.h"

int TailLightContol_Run(uint16_t systemState)
{
    bool brakeLedLevel;
    bool reverseLedLevel;

    const uint16_t brakeLightState = systemState & BRAKE_BUTTON;
    const uint16_t reverseLightState = systemState & REVERSE_BUTTON;

    brakeLedLevel = brakeLightState ? STD_HIGH : STD_LOW;
    reverseLedLevel = reverseLightState ? STD_HIGH : STD_LOW;

    lightControl(brakeLedLevel, reverseLedLevel);

    return NO_ERROR;
}

void lightControl(bool brakeLedLevel, bool reverseLedLevel)
{
    // Brake light control
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_bLight, brakeLedLevel);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_bLight, brakeLedLevel);

    // Reverse light control
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_l_tLight, reverseLedLevel);
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_r_tLight, reverseLedLevel);
}
