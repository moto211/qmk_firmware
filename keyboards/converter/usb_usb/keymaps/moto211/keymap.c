/*
Copyright 2017 Balz Guenat <balz.guenat@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

/* Define layers */
#define _BL 0
#define _SL 1

/* Define custom keycodes */
#define W_SH6 LSFT(KC_6)
#define W_AT LSFT(KC_2)

/* Define macros */
#define W_XLSUM  SEND_STRING("=SUM(") // one-tap excel sum formula starter
/* #define W_PRVDT  LCTL(LGUI(KC_LEFT))  // one-tap ctrl-win-left */

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: Base Qwerty JIS layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------. ,---------------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr|
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |XLM|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  ^|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  q|  w|  e|  r|  t|  y|  u|  i|  o|  p|  @|  [|     | |Del|End|PgD| |  7|  8|  9|  +|
     * |------------------------------------------------------|Retn| `-----------' |-----------|   |
     * |CapsL |  a|  s|  d|  f|  g|  h|  j|  k|  l|  ;|  :|  ]|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shft    |  z|  x|  c|  v|  b|  n|  m|  ,|  .|  /|  \|Shift |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl |Gui |Alt |MHEN|SPC |   Space   |SPC |Gui |Alt |Fn|Ctl | |Lef|Dow|Rig| |  0    |  .|Ent|
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

     /* 1: Shifted Qwerty JIS using layer 1 to be correct to keycap legends
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------. ,---------------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr|
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |XLM|  !|  "|  #|  $|  %|  &|  '|  (|  )|   |  =|  ~|  ||Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  @|  {|     | |Del|End|PgD| |  7|  8|  9|  +|
     * |------------------------------------------------------|Retn| `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  +|  *|  }|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shft    |  Z|  X|  C|  V|  B|  N|  M|  <|  >|  ?|  _|Shift |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl |Gui|Alt |MHEN|SPC |   Space   |SPC |Gui |Alt |Fn |Ctl | |Lef|Dow|Rig| |  0    |  .|Ent|
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [_BL] = LAYOUT_all(
    KC_ESC,           KC_F1,     KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,    KC_F10,      KC_F11,    KC_F12,                 KC_PSCR, KC_SLCK, KC_PAUS,     KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,
    W_XLSUM, KC_1,    KC_2,      KC_3,    KC_4,    KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,     W_SH6,     KC_JYEN,   KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,     KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,      KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,     W_AT,        KC_LBRC,                           KC_DEL,  KC_END,  KC_PGDN,     KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,    KC_S,      KC_D,    KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,                KC_NUHS,   KC_ENT,                                     KC_P4,   KC_P5,   KC_P6,
    MO(_SL), KC_NUBS, KC_Z,      KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH,                KC_RO,     MO(_SL),              KC_UP,                KC_P1,   KC_P2,   KC_P3,
    KC_LCTL, KC_LGUI, KC_LALT,   KC_MHEN, KC_SPC,                  KC_SPC,                   KC_SPC,   KC_RGUI,     KC_RALT,   KC_NO,     KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,     KC_P0,            KC_PDOT, KC_PENT
    ),
    [_SL] = LAYOUT_all(
    KC_ESC,           KC_F1,     KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,     KC_F9,    KC_F10,    KC_F11,    KC_F12,                 KC_PSCR, KC_SLCK, KC_PAUS,     KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,
    W_XLSUM, S(KC_1), S(KC_QUOT),S(KC_3), S(KC_4), S(KC_5),S(KC_7),KC_QUOT,S(KC_9), S(KC_0),   KC_NO,    KC_EQL,    S(KC_GRV), S(KC_BSLS),KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,     KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  S(KC_Q), S(KC_W),   S(KC_E), S(KC_R), S(KC_T),S(KC_Y),S(KC_U),S(KC_I), S(KC_O),   S(KC_P),  S(KC_2),   S(KC_LBRC),                        KC_DEL,  KC_END,  KC_PGDN,     KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, S(KC_A), S(KC_S),   S(KC_D), S(KC_F), S(KC_G),S(KC_H),S(KC_J),S(KC_K), S(KC_L),   S(KC_EQL),S(KC_8),              S(KC_RBRC),KC_ENT,                                     KC_P4,   KC_P5,   KC_P6,
    KC_TRNS,          S(KC_Z),   S(KC_X), S(KC_C), S(KC_V),S(KC_B),S(KC_N),S(KC_M), S(KC_COMM),S(KC_DOT),S(KC_SLSH),           S(KC_MINS),KC_TRNS,              KC_UP,                KC_P1,   KC_P2,   KC_P3,
    KC_LCTL, KC_LGUI, KC_LALT,   KC_MHEN, KC_SPC,                  KC_SPC,                     KC_SPC,   KC_RGUI,   KC_RALT,   KC_NO,     KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,     KC_P0,            KC_PDOT, KC_PENT
    ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
