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

#pragma once

/* USB Device descriptor parameter */
// #define VENDOR_ID       0x2121      /* "!!" = BangBang */
// #define PRODUCT_ID      0x6000
// #define DEVICE_VER      0x0002
// #define MANUFACTURER    BangBang Boards
// #define PRODUCT         BangBang60 v2
// #define DESCRIPTION     BangBang60 v2

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, B5, B4, D7, D6 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, D4, D5, D3, D2, D1, D0, B7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
// #define BACKLIGHT_PIN B7
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* RGB backlighting */
#define WS2812_DI_PIN C7
#ifdef  WS2812_DI_PIN
#define RGBLED_NUM 8
#define RGBLIGHT_HUE_STEP 16
#define RGBLIGHT_SAT_STEP 16
#define RGBLIGHT_VAL_STEP 16
#define RGBLIGHT_SLEEP
/*== choose which animations to enable ==*/
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE
/*== end animation list ==*/
#endif

/* Indicator LEDs */
#define LED_PIN_ON_STATE 1      // The state of the indicator pins when the LED is "on" - 1 for high, 0 for low
#define LED_NUM_LOCK_PIN C6
#define LED_CAPS_LOCK_PIN B1
// #define LED_SCROLL_LOCK_PIN B1
// #define LED_COMPOSE_PIN B1
// #define LED_KANA_PIN B1

/* Encoders */
#define ENCODERS_PAD_A { B0 }
#define ENCODERS_PAD_B { E6 }
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS { 2 }
