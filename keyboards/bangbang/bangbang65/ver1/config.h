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

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B13, B12, A5,  A4,  A3,  A15, C12, C0,  C1,  C2 }
#define MATRIX_COL_PINS { B10, B1,  B0,  C5,  C4,  A7,  A6,  B9 }               // A1, A2 was C5, C4

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
#define WS2812_DI_PIN B14

#define WS2812_PWM_COMPLEMENTARY_OUTPUT
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6

#ifdef  WS2812_DI_PIN
#define WS2812_EXTERNAL_PULLUP
#define RGBLED_NUM 13
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
#define LED_NUM_LOCK_PIN A2
#define LED_CAPS_LOCK_PIN A1
// #define LED_SCROLL_LOCK_PIN B1
// #define LED_COMPOSE_PIN B1
// #define LED_KANA_PIN B1

/* Encoders */
#define ENCODERS_PAD_A { C10 }
#define ENCODERS_PAD_B { C11 }
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS { 2 }

/* EEPROM Emulation */
#define WEAR_LEVELING_LOGICAL_SIZE	    2048
#define WEAR_LEVELING_BACKING_SIZE      WEAR_LEVELING_LOGICAL_SIZE * 4
