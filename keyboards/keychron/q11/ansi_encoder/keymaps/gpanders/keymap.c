/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include <stdint.h>

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    SYMBOLS,
    WIN_BASE,
    WIN_FN,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_91_ansi(
        KC_MUTE,  KC_ESC,         KC_F1,    KC_F2,    KC_F3,        KC_F4,        KC_F5,    KC_F6,      KC_F7,        KC_F8,        KC_F9,       KC_F10,     KC_F11,       KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        MC_1,     KC_GRV,         KC_1,     KC_2,     KC_3,         KC_4,         KC_5,     KC_6,       KC_7,         KC_8,         KC_9,        KC_0,       KC_MINS,      KC_EQL,   KC_BSPC,            KC_PGUP,
        MC_2,     KC_TAB,         KC_Q,     KC_W,     KC_E,         KC_R,         KC_T,     KC_Y,       KC_U,         KC_I,         KC_O,        KC_P,       KC_LBRC,      KC_RBRC,  KC_BSLS,            KC_PGDN,
        MC_3,     CTL_T(KC_ESC),  KC_A,     KC_S,     ALT_T(KC_D),  CMD_T(KC_F),  KC_G,     KC_H,       CMD_T(KC_J),  ALT_T(KC_K),  KC_L,        KC_SCLN,    KC_QUOT,                KC_ENT,             KC_HOME,
        MC_4,     KC_LSFT,                  KC_Z,     KC_X,         KC_C,         KC_V,     KC_B,       KC_N,         KC_M,         KC_COMM,     KC_DOT,     KC_SLSH,                KC_RSFT,  KC_UP,
        MC_5,     KC_LCTL,        KC_LOPT,  KC_LCMD,  MO(SYMBOLS),                KC_SPC,                             KC_SPC,                    KC_RCMD,    MO(SYMBOLS),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [SYMBOLS] = LAYOUT_91_ansi(
        RGB_TOG,  _______,        KC_BRID,  KC_BRIU,  KC_MCTL,      KC_LPAD,      RGB_VAD,  RGB_VAI,    KC_MPRV,      KC_MPLY,      KC_MNXT,     KC_MUTE,    KC_VOLD,      KC_VOLU,  KC_INS,   KC_DEL,   KC_MUTE,
        _______,  _______,        _______,  _______,  _______,      _______,      _______,  _______,    _______,      _______,      _______,     _______,    _______,      _______,  _______,            _______,
        _______,  _______,        S(KC_1),  S(KC_2),  S(KC_LBRC),   S(KC_RBRC),   S(KC_5),  _______,    S(KC_7),      S(KC_8),      S(KC_MINS),  _______,    _______,      _______,  _______,            _______,
        _______,  _______,        S(KC_6),  S(KC_4),  S(KC_9),      S(KC_0),      KC_GRV,   _______,    KC_EQL,       S(KC_EQL),    KC_MINS,     _______,    _______,                _______,            _______,
        _______,  _______,                  _______,  _______,      KC_LBRC,      KC_RBRC,  S(KC_GRV),  _______,      S(KC_BSLS),   S(KC_COMM),  S(KC_DOT),  _______,                _______,  _______,
        _______,  _______,        _______,  _______,  _______,                    _______,                            _______,                   _______,    _______,      _______,  _______,  _______,  _______),
    [WIN_BASE] = LAYOUT_91_ansi(
        KC_MUTE,  KC_ESC,         KC_F1,    KC_F2,    KC_F3,        KC_F4,        KC_F5,    KC_F6,      KC_F7,        KC_F8,        KC_F9,       KC_F10,     KC_F11,       KC_F12,    KC_INS,   KC_DEL,   KC_MUTE,
        MC_1,     KC_GRV,         KC_1,     KC_2,     KC_3,         KC_4,         KC_5,     KC_6,       KC_7,         KC_8,         KC_9,        KC_0,       KC_MINS,      KC_EQL,    KC_BSPC,            KC_PGUP,
        MC_2,     KC_TAB,         KC_Q,     KC_W,     KC_E,         KC_R,         KC_T,     KC_Y,       KC_U,         KC_I,         KC_O,        KC_P,       KC_LBRC,      KC_RBRC,   KC_BSLS,            KC_PGDN,
        MC_3,     KC_CAPS,        KC_A,     KC_S,     KC_D,         KC_F,         KC_G,     KC_H,       KC_J,         KC_K,         KC_L,        KC_SCLN,    KC_QUOT,                 KC_ENT,             KC_HOME,
        MC_4,     KC_LSFT,                  KC_Z,     KC_X,         KC_C,         KC_V,     KC_B,       KC_N,         KC_M,         KC_COMM,     KC_DOT,     KC_SLSH,                 KC_RSFT,  KC_UP,
        MC_5,     KC_LCTL,        KC_LWIN,  KC_LALT,  MO(WIN_FN),                 KC_SPC,                             KC_SPC,                    KC_RALT,    MO(WIN_FN),   KC_RCTL,   KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_91_ansi(
        RGB_TOG,  _______,        KC_BRID,  KC_BRIU,  KC_TASK,      KC_FLXP,      RGB_VAD,  RGB_VAI,    KC_MPRV,      KC_MPLY,      KC_MNXT,     KC_MUTE,    KC_VOLD,      KC_VOLU,   _______,  _______,  RGB_TOG,
        _______,  _______,        _______,  _______,  _______,      _______,      _______,  _______,    _______,      _______,      _______,     _______,    _______,      _______,   _______,            _______,
        _______,  RGB_TOG,        RGB_MOD,  RGB_VAI,  RGB_HUI,      RGB_SAI,      RGB_SPI,  _______,    _______,      _______,      _______,     _______,    _______,      _______,   _______,            _______,
        _______,  _______,        RGB_RMOD, RGB_VAD,  RGB_HUD,      RGB_SAD,      RGB_SPD,  _______,    _______,      _______,      _______,     _______,    _______,                 _______,            _______,
        _______,  _______,                  _______,  _______,      _______,      _______,  _______,    NK_TOGG,      _______,      _______,     _______,    _______,                 _______,  _______,
        _______,  _______,        _______,  _______,  _______,                    _______,                            _______,                   _______,    _______,      _______,   _______,  _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE]     = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [SYMBOLS]  = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif // ENCODER_MAP_ENABLE

#if defined(TAPPING_TERM_PER_KEY)
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case CTL_T(KC_ESC):
        return 100;
    default:
        return TAPPING_TERM;
    }
}
#endif

#if defined(RETRO_TAPPING_PER_KEY)
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ALT_T(KC_D):
    case CMD_T(KC_F):
    case CMD_T(KC_J):
    case ALT_T(KC_K):
    case CTL_T(KC_ESC):
        return true;
    default:
        return false;
    }
}
#endif

#if defined(PERMISSIVE_HOLD_PER_KEY)
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ALT_T(KC_D):
    case CMD_T(KC_F):
    case CMD_T(KC_J):
    case ALT_T(KC_K):
        return false;
    default:
        return true;
    }
}
#endif
