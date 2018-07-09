#ifndef REV2_H
#define REV2_H

#include "dactyl_manuform.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
#include <avr/io.h>
#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#define KEYMAP( \
    L00, L01, L02, L03, L04, L05, L06,      R00, R01, R02, R03, R04, R05, R06, R07,              \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, R16, R17,              \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, R26, R27,              \
    L30, L31, L32, L33, L34, L35, L36,      R30, R31, R32, R33, R34, R35, R36, R37,              \
    L40, L41, L42, L43, L44,                     R40, R41, R42, R43, R44, R45, R46               \
    \
    )                                                                                                  \
{                                                                                                  \
  { L00, L01, L02, L03, L04, L05, L06,                   },                                                      \
  { L10, L10, L11, L12, L13, L14, L15,                 },                                                      \
  { L20, L20, L21, L22, L23, L24, L25,                 },                                                      \
  { L30, L31, L32, L33, L34, L35, L36,                   },                                                      \
  { L40, L40, L41, L42, L43, L44,               KC_NO },                                                      \
  \
  { R00,   R01, R02, R03, R04, R05, R06, R07 },                                                      \
  { R10,   R11, R12, R13, R14, R15, R16, R17 },                                                      \
  { R20,   R21, R22, R23, R24, R25, R26, R27 },                                                      \
  { R30,   R31, R32, R33, R34, R35, R36, R37 },                                                      \
  { KC_NO, R40, R41, R42, R43, R44, R45, R46 }                                                       \
}

#endif
