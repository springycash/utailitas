// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
    [0] = LAYOUT_macropad_4x4( //layer picker
        KC_AUDIO_MUTE, PB_1, PB_1, KC_F23,
        TO(1), TO(2), PB_1, PB_1,
        PB_1, PB_1, PB_1, PB_1,
        PB_1, PB_1, PB_1, PB_1
    ),

    [1] = LAYOUT_macropad_4x4( //numpad
        KC_AUDIO_MUTE, PB_1, PB_1, KC_F23,
        KC_P1, KC_P2, KC_P3, TO(0),
        KC_P4, KC_P5, KC_P6, KC_P0,
        KC_P7, KC_P8, KC_P9, KC_NUM
    ),

    [2] = LAYOUT_macropad_4x4( //rgb
        KC_AUDIO_MUTE, PB_1, PB_1, RGB_MOD,
        RGB_TOG, RGB_MOD, PB_1, TO(0),
        RGB_HUI, RGB_SAI, RGB_VAI, PB_1, 
        RGB_HUD, RGB_SAD, RGB_VAD, PB_1
    )
    
};
    bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (index == 0) { /* Right encoder */
        if (clockwise) {
            tap_code(KC_F21);
        } else {
            tap_code(KC_F22);
        }
    } else if (index == 1) { /* Left encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return true;
}