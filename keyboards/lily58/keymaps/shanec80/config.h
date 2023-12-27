/* This is the c configuration file for the keymap Copyright 2023 <carakesa@gmail.com> Copyright 2023
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

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */
#define MASTER_LEFT
#define SPLIT_USB_TIMEOUT 3000
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
#define QUICK_TAP_TERM 100
#define TAPPING_TERM 220

//#define HOLD_ON_OTHER_KEY_PRESS
#define PERMISSIVE_HOLD
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_WPM_ENABLE //Enable WPM across split keyboards
