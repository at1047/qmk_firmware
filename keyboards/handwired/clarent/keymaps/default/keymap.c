// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1
#define _RTHUMB 2
#define _LOWER 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    // [0] = LAYOUT_ortho_4x4(
    //     KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
    //     KC_P4,   KC_P5,   KC_P6,   KC_PAST,
    //     KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
    //     KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    // )
    [_BASE] = LAYOUT(
                    KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
                    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSLS,
    MO(_LOWER),     KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
    KC_LSFT,        KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,              XXXXXXX, KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  RSFT_T(KC_ENT),
                            KC_LALT,    KC_SPC,   KC_LSFT, KC_LGUI,                   LT(_RTHUMB, KC_SPC),  MO(_RAISE), KC_A, KC_B, KC_C
    ),
    [_RAISE] = LAYOUT(
                KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,             KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,  KC_F12,
                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX,    KC_MINS,  KC_EQL, XXXXXXX,
    _______,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX,    KC_LBRC, KC_RBRC, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                        KC_LALT,    KC_SPC,   KC_LSFT, KC_LGUI,                      XXXXXXX,  _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_RTHUMB] = LAYOUT(
                XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,  KC_DEL,
                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                        KC_LALT,    KC_SPC,   KC_LSFT, KC_LGUI,                      XXXXXXX,  _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_LOWER] = LAYOUT(
                XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                        KC_LALT,    KC_SPC,   KC_LSFT, KC_LGUI,                      KC_SPC,  _______, KC_RCTL, KC_RALT, KC_RGUI
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}