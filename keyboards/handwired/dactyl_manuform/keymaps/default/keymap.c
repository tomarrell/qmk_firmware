#include "dactyl_manuform.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _NAV 1
#define _NUM 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  NAV,
  NUM,
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 *
 * -= LEFT HAND =-
 *
 * ,-----------------------------------------,
 * |   1  |   2  |   3  |   4  |   5  |   6  |
 * |-----------------------------------------|
 * |  TAB |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+-------------|
 * |  ESC |   A  |   S  |   D  |   F  |   G  |
 * |-----------------------------------------|
 * |   +  |   Z  |   X  |   C  |   V  |   B  |
 * |-----------------------------------------'
 * |   1  |   2  |   3  |   4  |   5  |
 * '----------------------------------'
 *                                           ,------,------,
 *                                           |   $  |   %  |
 *                                    ,------|------|------|
 *                                    |      |      |  DEL |
 *                                    |  SPC | SHFT |------|
 *                                    |      |      | BKSP |
 *                                    '------'------'------'
 *
 *
 * -= RIGHT HAND =-
 *
 *               ,-----------------------------------------,
 *               |      |      |      |      |      |      |
 *               |-----------------------------------------|
 *               |      |      |      |      |      |      |
 *               |------+------+------+------+-------------|
 *               |      |      |      |      |      |      |
 *               |-----------------------------------------|
 *               |      |      |      |      |      |      |
 *               '-----------------------------------------|
 *                      |      |      |      |      |      |
 *                      '----------------------------------'
 * ,------,------,
 * |      |      |
 * |------|------|------,
 * |      |      |      |
 * |------|      |      |
 * |      |      |      |
 * '------'------'------'
 *
 */

[_BASE] = KEYMAP( \
  KC_1,      KC_2, KC_3, KC_4, KC_5, KC_6,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     \
  KC_TAB,    KC_Q, KC_W, KC_E, KC_R, KC_T,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     \
  KC_ESCAPE, KC_A, KC_S, KC_D, KC_F, KC_G,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     \
  KC_PLUS,   KC_Z, KC_X, KC_C, KC_V, KC_B,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     \
  KC_1,      KC_2, KC_3, KC_4, KC_5,                                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     \
                                     KC_DLR, KC_PERC, KC_DEL,    KC_NO, KC_NO, KC_NO,                                        \
                                     KC_SPC, KC_LSFT, KC_BSPC,       KC_NO, KC_NO, KC_NO                                         \
)

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

