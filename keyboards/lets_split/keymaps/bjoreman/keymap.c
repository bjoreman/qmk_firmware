#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum custom_keycodes {
  QWERTY = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_4x12(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    LT(2, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,    KC_K,    KC_L,    SE_ACUT,   SE_APOS,
    LSFT_T(SE_PLUS), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,  RSFT_T(KC_ENTER),
    KC_LCTL, KC_LALT, KC_LGUI,    MT(MOD_LSFT | MOD_LALT | MOD_LGUI, SE_LESS),    MO(1),    KC_SPACE,    KC_RGUI,  LALT(KC_4),  SE_LCBR_MAC, SE_RCBR_MAC,   LALT(KC_2), SE_QUES
),

[1] = LAYOUT_ortho_4x12( \
    KC_GRAVE,  LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),  LSFT(KC_6),  LSFT(KC_7),  LSFT(KC_8),  LSFT(KC_9),  LSFT(KC_0),  SE_AE,
    KC_TAB,  SE_PIPE_MAC,  _______,  _______,   _______,  _______,  SE_GRV_MAC,   SE_BSLS_MAC,  SE_LBRC,   SE_RBRC,  SE_OSLH, SE_AA,
    _______,   _______,  _______,  _______,   _______,  _______,    _______,   _______,    _______,   _______,    _______,  _______,
    _______,   _______,  _______,  _______,   _______,   _______,  _______,  _______,   _______,  _______,   _______,   _______
),

[2] = LAYOUT_ortho_4x12( \
    RESET, _______, KC_HOME, KC_UP, KC_END, _______, _______, KC_7, KC_8, KC_9, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, LSFT(KC_7), KC_4, KC_5, KC_6, SE_PLUS, _______,
    _______, _______, _______, _______, _______, _______, LSFT(SE_APOS), KC_1, KC_2, KC_3, LSFT(KC_DOT), RSFT_T(KC_ENTER),
    _______, _______, _______, _______, _______, _______, _______, KC_0, KC_SLSH, KC_COMM, KC_DOT, _______
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}