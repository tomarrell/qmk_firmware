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
  KC_GRV,    KC_1,    KC_2,    KC_3,   KC_4,    KC_5, KC_6,            KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS,   KC_EQL,   KC_DEL,   KC_BSPC, \
  KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,      KC_LBRC,  KC_RBRC,  KC_BSLASH, \
  KC_ESCAPE, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,     KC_L,    KC_SCOLON, KC_QUOTE, KC_ENTER, KC_ENTER, \
  KC_LSFT,   KC_HOME, KC_Z,    KC_X,   KC_C,    KC_V, KC_B,            KC_N,    KC_M,    KC_COMMA, KC_DOT,  KC_SLASH,  KC_RSFT,  KC_RCTRL, MO(_NAV), \
  KC_LCTRL,  KC_LGUI, KC_LALT, MO(_NAV), KC_SPACE,                              KC_LSFT, KC_LEFT,  KC_DOWN, KC_UP,     KC_RIGHT, KC_PGDN,  KC_PGUP
),
[_NAV] = KEYMAP( \
  KC_ESCAPE, KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5, KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,   _______,  _______, \
  RESET,   _______, _______, _______, _______, _______,                KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,    _______,  _______,  _______, \
  _______, _______, _______, _______, _______, _______,                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,    _______,  _______,  _______, \
  KC_INS,  KC_END,  _______, _______, _______, _______, _______,       KC_BTN1, KC_BTN2, KC_BTN3, _______, _______,    _______,  KC_RGUI,  KC_TRNS, \
  KC_PSCR, _______, _______, KC_TRNS, KC_MUTE,                                  KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU,    KC_MNXT,  KC_VOLD,  KC_VOLU
)
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

