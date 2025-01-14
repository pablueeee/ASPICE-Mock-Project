#ifndef STATES_H
#define STATES_H

#include <stdint.h>

//  external lights masks
//      headlight
#define HEAD_LIGHT_MASK                 (0x003)     // xxxx xxxx xxxx xx11
#define HEAD_LIGHT_OFF                  (0x000)     // 0000 0000 0000 0000
#define HEAD_LIGHT_LOW_BEAM             (0x002)     // 0000 0000 0000 0010
#define HEAD_LIGHT_HIGH_BEAM            (0x003)     // 0000 0000 0000 0011

//      signal light
#define SIGNAL_LIGHT_MASK               (0x00C)     // xxxx xxxx xxxx 11xx
#define SIGNAL_LIGHT_OFF                (0x000)     // 0000 0000 0000 0000
#define SIGNAL_LIGHT_TURN_RIGHT         (0x004)     // 0000 0000 0000 0100
#define SIGNAL_LIGHT_TURN_LEFT          (0x008)     // 0000 0000 0000 1000
#define SIGNAL_LIGHT_HAZARD             (0x00C)     // 0000 0000 0000 1100

// others
#define INITIAL_STATE                   (0x000)     // 0000 0000 0000 0000

#endif // STATES_H