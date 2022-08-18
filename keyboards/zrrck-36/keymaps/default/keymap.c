/* Copyright 2019 Thomas Baart
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

#define _QWERTY 0
#define _NUM 1
#define _NAV 2
#define _WNAV 3
#define _SYM 4

#define ___x___ KC_NO

#define MY_SPC  LT(_SYM, KC_SPC)
#define MY_ENT  LT(_NUM, KC_ENT)
#define MY_ESC  LT(_NAV, KC_ESC)
#define MY_TAB  LT(_WNAV, KC_TAB)


#define OS_SFT  OSM(MOD_LSFT)
#define OS_CTL  OSM(MOD_LCTL)
#define OS_GUI  OSM(MOD_LGUI)
#define OS_ALT  OSM(MOD_LALT)

enum keycodes {
  QWERTY = SAFE_RANGE,
  NAV,
  NUM,
  WNAV,
  SYM,
// special keys
  ENC_PRS,
  DOTSPC,
  COMMSPC,
  EXLMSPC,
  QUESSPC,
  DQUOT,
  QUOT,
  PRN,
  BRC,
  CBR,
  LTGT,
  LTGTC,
  GRV,
  A_TAB,
  AS_TAB,
  WOKE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
      LGUI_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F),    KC_G,                      KC_H,    RSFT_T(KC_J), RALT_T(KC_K), LCTL_T(KC_L), RGUI_T(KC_SCLN),
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,    KC_SLSH,
                                 KC_LALT,  MY_TAB,  MY_ESC,  MY_ENT, MY_SPC,  KC_BACKSPACE
    ),

    [_NUM] = LAYOUT(
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   ___x___,                    KC_PLUS, KC_7,    KC_8,    KC_9,    KC_SLSH,
     KC_F5,   KC_F6,   KC_F7,   KC_F8,   ___x___,                    KC_COMM, KC_4,    KC_5,    KC_6,    KC_DOT,
     KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___x___,                    KC_MINS, KC_1,    KC_2,    KC_3,    KC_ASTR,
                                ___x___, _______, ___x___,  _______, _______, KC_0
    ),

    [_NAV] = LAYOUT(                                      
      ___x___, ___x___, ___x___, ___x___,  ___x___,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END, ___x___,
      ___x___, ___x___, ___x___, ___x___, ___x___,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___x___,
      ___x___, ___x___, ___x___, ___x___, ___x___,                    ___x___,___x___, ___x___, ___x___, ___x___,
                                 _______, _______, _______,  ___x___, _______, ___x___
      ),

    [_SYM] = LAYOUT(
         KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                   KC_AMPR, KC_SLSH, KC_QUOT, KC_DQUO, KC_ASTR,
         KC_PIPE, KC_PLUS,KC_GRV,KC_LPRN, KC_LCBR,                  KC_RCBR, KC_RPRN, KC_QUES, KC_PEQL, KC_PLUS,
         KC_BSLS,   KC_NO,   KC_NO,   KC_LT, KC_LBRC,                  KC_RBRC,   KC_GT, KC_TILD,  KC_GRV, KC_CIRC,
                                _______, _______, _______,  ___x___, _______, ___x___
                    ),

    [_WNAV] = LAYOUT(
                     MEH(KC_J), LSA(KC_7), LSA(KC_8), LSA(KC_9), LCAG(KC_X),                    SGUI(KC_N), G(KC_7), G(KC_8), G(KC_9), MEH(KC_L),
                     MEH(KC_K), LSA(KC_4), LSA(KC_5), LSA(KC_6), MEH(KC_L),                    SGUI(KC_W),  G(KC_4), G(KC_5), G(KC_6), MEH(KC_H),
                     ___x___, LSA(KC_1), LSA(KC_2),  LSA(KC_3), LAG(KC_1),                    LAG(KC_J), G(KC_1), G(KC_2), G(KC_3), ___x___,
                                   ___x___, ___x___, ___x___,    ___x___, ___x___, ___x___
        ),

};




