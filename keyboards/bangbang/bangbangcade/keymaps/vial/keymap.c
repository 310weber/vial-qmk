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
    _BS = 0,    // Base (Default)
    _RS,        // Raise
    _LW,        // Lower
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*  "1RIGHT", "1LEFT",  "1UP",  "1DOWN", "1SW1", "1SW2", "1SW3", "1SW4", \
    "2RIGHT", "2LEFT",  "2UP",  "2DOWN", "2SW1", "2SW2", "2SW3", "2SW4", \
	"1START", "2START", "COIN", "EXIT"                                   \
*/
	[_BS] = LAYOUT_base( /* BASE */
		KC_RGHT, KC_LEFT, KC_UP, KC_DOWN, KC_LCTL, KC_LALT, KC_SPC, KC_LSFT,
		KC_G,    KC_D,    KC_R,  KC_F,    KC_A,    KC_S,    KC_Q,   KC_W,
		LT(_RS, KC_1),    LT(_LW, KC_2),  KC_5,    KC_ESC   
		),
	
	[_RS] = LAYOUT_base( /* [> RAISE <] */
		KC_ENT, KC_NO, KC_GRV, KC_NO, KC_NO, KC_TAB, KC_NO, KC_NO,
		KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
		KC_NO,  KC_NO, KC_NO,  KC_NO   
		),

	[_LW] = LAYOUT_base( /* [> LOWER <] */
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_6,  KC_NO   
		),
};
