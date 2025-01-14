#ifndef STATES_H
#define STATES_H

#include <stdint.h>

//  external lights masks
//      headlight
#define HEAD_LIGHT_MASK                 (0x0003)     // xxxx xxxx xxxx xx11
#define HEAD_LIGHT_OFF                  (0x0000)     // 0000 0000 0000 0000
#define HEAD_LIGHT_LOW_BEAM             (0x0002)     // 0000 0000 0000 0010
#define HEAD_LIGHT_HIGH_BEAM            (0x0003)     // 0000 0000 0000 0011

//      signal light
#define SIGNAL_LIGHT_MASK               (0x000C)     // xxxx xxxx xxxx 11xx
#define SIGNAL_LIGHT_OFF                (0x0000)     // 0000 0000 0000 0000
#define SIGNAL_LIGHT_TURN_RIGHT         (0x0004)     // 0000 0000 0000 0100
#define SIGNAL_LIGHT_TURN_LEFT          (0x0008)     // 0000 0000 0000 1000
#define SIGNAL_LIGHT_HAZARD             (0x000C)     // 0000 0000 0000 1100

#define SIGNAL_LIGHT_TIMER_MASK         (0X0030)     // 0000 0000 0011 0000
#define TIMER_0_MS                      (0X0000)     // 0000 0000 0000 0000
#define TIMER_250_MS                    (0X0010)     // 0000 0000 0001 0000
#define TIMER_500_MS                    (0X0020)     // 0000 0000 0010 0000
#define TIMER_750_MS                    (0X0030)     // 0000 0000 0011 0000

#define TAIL_LIGHT_MASK                 (0X00C0)     // 0000 0000 1100 0000
#define REVERSE_LIGHT_ON				(0X0040)     // 0000 0000 0100 0000
#define BRAKE_LIGHT_ON  				(0X0080)	 // 0000 0000 1000 0000
#define TAIL_LIGHT_OFF                  (0X0000)     // 0000 0000 0000 0000

// others
#define INITIAL_STATE                   (0x0000)     // 0000 0000 0000 0000

#endif // STATES_H