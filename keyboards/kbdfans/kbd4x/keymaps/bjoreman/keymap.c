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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  KBD4X = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_planck_mit(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    LT(3, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,    KC_K,    KC_L,    SE_ACUT,   SE_APOS,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH,   KC_ENTER,
    KC_LCTL, KC_LALT, KC_LGUI,    SE_LESS,    MO(2),    KC_SPACE,    KC_RGUI,   SE_LCBR_MAC, SE_RCBR_MAC,   LALT(KC_2), SE_QUES
  ),

  [1] = LAYOUT_planck_mit(
    KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, SE_PLUS,
    RESET,    LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),  LSFT(KC_6),  LSFT(KC_7),  LSFT(KC_8),  LSFT(KC_9),  LSFT(KC_0),  ___,
    ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,
    ___,   ___,  ___,  ___,  ___,  ___,   ___,  ___,  ___,  ___,  ___
  ),

 [2] = LAYOUT_planck_mit(
    KC_GRAVE,  LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),  LSFT(KC_6),  LSFT(KC_7),  LSFT(KC_8),  LSFT(KC_9),  LSFT(KC_0),  SE_AE,
    KC_TAB,  SE_BSLS_MAC,  SE_PIPE_MAC,  SE_LBRC,   SE_RBRC,  ___,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT,  SE_OSLH, SE_AA,
    LALT(KC_4),   SE_PLUS,  SE_GRV_MAC,  SE_LCBR_MAC,   SE_RCBR_MAC,  ___,   ___,  ___,   ___,   ___,    ___,  ___,
    ___,   ___,  ___,  ___,   ___,  ___,  ___,   ___,  ___,   ___,   ___
  ),

  [3] = LAYOUT_planck_mit(
    RESET, ___, KC_UP, ___, ___, ___, ___, ___, KC_7, KC_8, KC_9, ___,
    ___, KC_LEFT, KC_DOWN, KC_RIGHT, ___, ___, ___, LSFT(KC_7), KC_4, KC_5, KC_6, SE_PLUS,
    ___, ___, ___, ___, ___, ___, ___, LSFT(SE_APOS), KC_1, KC_2, KC_3, KC_ENTER,
    ___, ___, ___, ___, ___, ___, ___, KC_0, KC_SLSH, KC_COMM, KC_DOT
  ),

/* Always good to have a nice clean layer template …
  [4] = LAYOUT_planck_mit(
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
