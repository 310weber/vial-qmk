/* Copyright 2021 Arnie Weber

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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _QW 0
#define _RS 1	/* Raise */
#define _LW 2	/* Lower */
#define _RL 3	/* Raise + Lower */
#define _NP 4	/* Numpad layer */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*	K000, K001, K002, K003, K004, K005, K006,         K007, K008, K009, K010, K011, K012,   K112, \
 *	  K100, K101, K102, K103, K104, K105,           K106, K107, K108, K109, K110, K111, K212, K312, \
 *	   K200, K201, K202, K203, K204, K205,           K206, K207, K208, K209, K210, K211, K412, \
 *	    K300,  K301, K302, K303, K304, K305,           K306, K307, K308, K309, K310, K311, \
 *	  K400, K401, K402,  K403,  K404, K405,          K406, K407,  K408,  K409, K410, K411  \
 */
	[_QW] = LAYOUT( /* QWERTY */
		QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT, MO(_RS), KC_SPC,  KC_NO,            KC_ENT,  KC_BSPC, MO(_LW), KC_RALT, KC_APP,  KC_RCTL
		),

	[_RS] = LAYOUT(	/* [> RAISE <] */
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_NO,   KC_NO,   KC_NO,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO,   KC_TRNS,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,            KC_TRNS, KC_DEL,  MO(_RL), KC_TRNS, KC_TRNS, TG(_NP)
		),

	[_LW] = LAYOUT(	/* [> LOWER <] */
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
		KC_TRNS, KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_TRNS, KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, MO(_RL), KC_TRNS, KC_NO,            KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),

	[_RL] = LAYOUT(	/* [> RAISE <] + [> LOWER <] */
		RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_RBT,
		KC_NO,   RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
		),

	[_NP] = LAYOUT(	/* Numpad Layer */
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PSLS, KC_PAST, KC_NO,   KC_NO,   KC_NO,
		KC_TAB,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,   KC_NO,
		KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_NO,
		KC_NO,   KC_NO,   KC_NO,   TG(_QW), KC_NO,   KC_NO,            KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
		),
};


/* Encoder rotation mapping */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QW] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_RS] =   { ENCODER_CCW_CW(C(S(KC_TAB)),  LCTL(KC_TAB)) },
    [_LW] =   { ENCODER_CCW_CW(KC_TRNS,  KC_TRNS) },
    [_RL] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
    [_NP] =   { ENCODER_CCW_CW(KC_NO,    KC_NO  ) }
};
#endif
