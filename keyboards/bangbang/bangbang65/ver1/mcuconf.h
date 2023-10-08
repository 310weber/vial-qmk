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

#include_next <mcuconf.h>

/* Set PLL M divider from 4 (F401 GENERIC default) to 8, because of 16 MHz crystal on board */
#undef STM32_PLLM_VALUE
#define STM32_PLLM_VALUE        8

/*  For reference, the complete clock tree is as follows:
  ST32_HSECLK      = 16000000   # 16 MHz External Crystal   (CHANGED from default 8 MHz)
  STM32_PLLM_VALUE = 8          # 16/8 = 2 MHz Main PLL input - requirement is [1 <= (PLL Input) <= 2] - higher is better (CHANGED from default 4)
  STM32_PLLN_VALUE = 168        # 2*168 = 336 MHz - lowest possible value to be divisible for both 84 MHz sys and 48 MHz USB clock
  STM32_PLLP_VALUE = 4          # 336/4 = 84 MHz core system clock
  STM32_PLLQ_VALUE = 7          # 336/7 = 48 MHz USB clock
*/

/* Set PWM timer for WS2812 RGB LEDs */
#undef STM32_PWM_USE_ADVANCED
#define STM32_PWM_USE_ADVANCED      TRUE

#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1          TRUE
