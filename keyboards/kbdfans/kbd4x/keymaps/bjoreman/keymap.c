/* Copyright 2018 sevenseacat
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

#define ___ KC_TRNS
#define C_S LCTL_T(KC_S)
#define A_D LALT_T(KC_D)
#define G_F LGUI_T(KC_F)
#define C_J RCTL_T(KC_J)
#define A_K RALT_T(KC_K)
#define G_L RGUI_T(KC_L)
#define UNDO LGUI(KC_Z)
#define REDO SGUI(KC_Z)
#define CUT LGUI(KC_X)
#define COPY LGUI(KC_C)
#define PASTE LGUI(KC_V)

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  KBD4X = SAFE_RANGE,
};

enum layers {
    _QWERTY = 0,
    _LOWER,
    _NUMPAD,
    _CURSOR,
    _MORE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_planck_mit(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    LT(_NUMPAD, KC_TAB),  KC_A,    C_S,    A_D,    G_F,    KC_G,     KC_H,   C_J,    A_K,    G_L,    SE_ACUT,   RSFT_T(KC_ENTER),
    LSFT_T(SE_PLUS), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH,   SE_APOS,
    KC_HYPR, ___, ___,  MT(MOD_LSFT | MOD_LALT | MOD_LGUI, SE_LESS),    MO(_LOWER),    KC_SPACE,    MO(_CURSOR),  MO(_MORE), SE_RCBR_MAC,   LALT(KC_2), SE_QUES
  ),

 [_LOWER] = LAYOUT_planck_mit(
    SE_LESS,  LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),  LSFT(KC_6),  LSFT(KC_7),  LSFT(KC_8),  LSFT(KC_9),  LSFT(KC_0),  ___,
    SE_GRTR,  SE_PIPE_MAC,  SE_LCBR_MAC,  SE_RCBR_MAC, LALT(KC_2), SE_QUES,  SE_GRV_MAC, SE_AA, SE_AE, SE_OSLH, LALT(SE_DIAE), ___,
    ___,   ___,  ___,  ___,   ___,  ___, ___,   ___,  ___,   ___,   ___,    ___,
    ___,   ___,  ___,  ___,   ___,  ___,  ___,   ___,  ___,   ___,   ___
  ),

  [_NUMPAD] = LAYOUT_planck_mit(
    RESET, ___, KC_HOME, KC_UP, KC_END, ___, ___, KC_7, KC_8, KC_9, ___, ___,
    ___, ___, KC_LEFT, KC_DOWN, KC_RIGHT, ___, LSFT(KC_7), KC_4, KC_5, KC_6, SE_PLUS, ___,
    ___, ___, ___, ___, ___, ___, LSFT(SE_APOS), KC_1, KC_2, KC_3, LSFT(KC_DOT), RSFT_T(KC_ENTER),
    ___, ___, ___, ___, ___, ___, KC_0, KC_SLSH, KC_COMM, KC_DOT, ___
  ),

  [_CURSOR] = LAYOUT_planck_mit(
    ___, ___, ___, ___, ___, ___, ___, KC_HOME, KC_UP, KC_END, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, KC_LEFT, KC_DOWN, KC_RIGHT, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),

  [_MORE] = LAYOUT_planck_mit(
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, SE_LESS_MAC, SE_GRTR_MAC, LALT(KC_4), ___, ___, SE_LBRC, SE_RBRC, SE_BSLS_MAC, LSFT(SE_DIAE), ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),
/* Always good to have a nice clean layer template …
  [3] = LAYOUT_planck_mit(
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___
  ),
  */
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {
}
