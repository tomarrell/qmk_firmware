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
 * |   `  |   2  |   3  |   4  |   5  |   6  |
 * |-----------------------------------------|
 * |  TAB |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+-------------|
 * |  ESC |   A  |   S  |   D  |   F  |   G  |
 * |-----------------------------------------|
 * |  HOM |   Z  |   X  |   C  |   V  |   B  |
 * |-----------------------------------------'
 * |  |>  | LEFT | DOWN |  UP  | RGHT |
 * '----------------------------------'
 *
 */

[_BASE] = KEYMAP( \
  KC_GRV,    KC_1,    KC_2,     KC_3,    KC_4,  KC_5,  KC_6,  KC_X,    KC_7, KC_8,     KC_9,    KC_0,    KC_MINS, KC_PLUS, KC_BSPC, KC_DEL,  \
  KC_TAB,    KC_Q,    KC_W,     KC_E,    KC_R,  KC_T,  KC_NO, KC_X,    KC_Y, KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
  KC_ESCAPE, KC_A,    KC_S,     KC_D,    KC_F,  KC_G,  KC_NO, KC_X,    KC_H, KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_UNDO, \
  KC_HOME,   KC_COMM, KC_Z,     KC_X,    KC_C,  KC_V,  KC_B,  KC_X,    KC_N, KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_COPY, \
  KC_LCTRL,  KC_LGUI, KC_LCTRL, KC_LALT, KC_NO, KC_NO, KC_NO, KC_X,    KC_1, KC_SPACE, KC_RALT, KC_VOLD, KC_VOLU, KC_LEFT, KC_DOWN, KC_RIGHT \
)

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

