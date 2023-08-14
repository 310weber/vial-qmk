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


/* Settings should be configured in info.json where possible.
 * Below settings are not defined in info.json.
 */

/* RGB backlight driver config */
#define WS2812_PWM_COMPLEMENTARY_OUTPUT
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6
#define WS2812_EXTERNAL_PULLUP

/* RGB backlight defaults */
#define RGBLIGHT_DEFAULT_MODE	RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE	100
#define RGBLIGHT_DEFAULT_SAT	255
#define RGBLIGHT_DEFAULT_VAL	RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_DEFAULT_SPD	0


/* EEPROM Emulation */
#define WEAR_LEVELING_LOGICAL_SIZE	    2048
#define WEAR_LEVELING_BACKING_SIZE      WEAR_LEVELING_LOGICAL_SIZE * 4
