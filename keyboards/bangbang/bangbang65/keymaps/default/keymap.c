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
enum {
    _QW = 0,    // QWERTY (Default)
    _RS,        // Raise
    _LW,        // Lower
    _RL,        // Raise + Lower
    _NP         // Number pad
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*  K00, K01, K02, K03, K04, K05, K06,         K50, K51, K52, K53, K54, K55,  K56, \
*	  K10, K11, K12, K13, K14, K15,           K60, K61, K62, K63, K64, K65, K66, K67, \
*	   K20, K21, K22, K23, K24, K25,           K70, K71, K72, K73, K74, K75, K76, \
*	    K30,  K31, K32, K33, K34, K35,           K80, K81, K82, K83, K84, K85,   K86, \
*	  K40, K41, K42,  K43,  K44, K45,          K90, K91,  K92,  K93, K94,   K95, K96, K97  \
*/
	[_QW] = LAYOUT( /* QWERTY */
		QK_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		CTL_T(KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
		KC_LCTL,        KC_LGUI, KC_LALT, MO(_RS), KC_NO,   KC_SPC,           KC_ENT,  KC_BSPC, MO(_LW), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
		),

	[_RS] = LAYOUT(	/* [> RAISE <] */
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_NO,   KC_NO,   KC_NO,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO,   KC_TRNS,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_PGUP,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,            KC_TRNS, KC_DEL,  MO(_RL), KC_TRNS, TG(_NP), KC_HOME, KC_PGDN, KC_END
		),

	[_LW] = LAYOUT(	/* [> LOWER <] */
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
		KC_TRNS, KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_TRNS, KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, MO(_RL), KC_NO,   KC_TRNS,          KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),

	[_RL] = LAYOUT(	/* [> RAISE <] + [> LOWER <] */
		RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
		),

	[_NP] = LAYOUT(	/* Numpad Layer */
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PSLS, KC_PAST, KC_NO,   KC_NO,   KC_NO,
		KC_TAB,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,   KC_NO,
		KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_NO,   KC_UP,
		KC_NO,   KC_NO,   KC_NO,   TG(_QW), KC_NO,   KC_NO,            KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT
		),
};


/* Encoder rotation mapping */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(C(S(KC_TAB)),  LCTL(KC_TAB)) },
    [2] =   { ENCODER_CCW_CW(KC_TRNS,  KC_TRNS) },
    [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
    [4] =   { ENCODER_CCW_CW(KC_NO,    KC_NO  ) }
};
#endif


// define combo names
enum combos {
    COMBO_CUT,
    COMBO_COPY,
    COMBO_PASTE,
    // more here...

    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

uint16_t COMBO_LEN = COMBO_LENGTH; // nifty trick continued

// define keys that make up combos
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
// more here...

// map combo names to their keys and the key they trigger
combo_t key_combos[] = {
    [COMBO_CUT] = COMBO(sd_combo, LCTL(KC_X)),
    [COMBO_COPY] = COMBO(df_combo, LCTL(KC_C)),
    [COMBO_PASTE] = COMBO(fg_combo, LCTL(KC_V)),
    // more here...
};
