/* Copyright 2022 splitkb.com <support@splitkb.com>
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



led_config_t g_led_config = { {
    {  0,      1,  2,      4,      5,      6,  7,      9,     10, 11, 13, 14, 15, 18, 19 },
    { 36,     35, 34,     33,     32,     31, 30,     29,     28, 27, 26, 25, 24, 16, 22 },
    { 38,     39, 40,     41,     42,     43, 44,     45,     46, 47, 48, 49, 23, 50, 20 },
    { 64, NO_LED, 63,     62,     61,     60, 59,     58,     57, 56, 55, 54, 53, 52, 21 },
    { 65,     66, 68, NO_LED, NO_LED, NO_LED, 70, NO_LED, NO_LED, 72, 73, 74, 76, 77, 78 }
}, {
    {  6, 10}, { 19, 10}, { 32, 10}, { 44, 13}, { 45, 10}, { 58, 10}, { 71, 10}, { 84, 10}, { 88, 13}, { 97, 10}, {110, 10}, {123, 10}, {132, 13}, {136, 10}, {149, 10}, {162, 10},
    {175, 10}, {179, 13}, {188, 10}, {205, 10}, {218, 10}, {218, 23}, {205, 23}, {185, 23}, {169, 23}, {156, 23}, {143, 23}, {130, 23}, {117, 23}, {104, 23}, { 91, 23}, { 78, 23},
    { 65, 23}, { 52, 23}, { 39, 23}, { 26, 23}, { 10, 23}, {  4, 26}, { 11, 35}, { 29, 35}, { 42, 35}, { 55, 35}, { 68, 35}, { 81, 35}, { 94, 35}, {107, 35}, {120, 35}, {133, 35},
    {146, 35}, {159, 35}, {180, 35}, {220, 32}, {205, 48}, {177, 48}, {153, 48}, {140, 48}, {127, 48}, {114, 48}, {101, 48}, { 88, 48}, { 75, 48}, { 62, 48}, { 49, 48}, { 36, 48},
    { 15, 48}, {  8, 61}, { 24, 61}, { 32, 52}, { 41, 61}, { 82, 56}, { 89, 61}, {132, 53}, {138, 61}, {154, 61}, {170, 61}, {179, 53}, {192, 61}, {205, 61}, {218, 61}
}, {
    1, 4, 4, 2, 4, 4, 4, 4, 2, 4, 4, 4, 2, 4, 4, 4, 4, 2, 1, 1, 1,
    1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 2,
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 2,
    1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
    1, 1, 2, 1, 2, 4, 2, 1, 1, 1, 2, 1, 1, 1
} };



#ifdef SWAP_HANDS_ENABLE
// clang-format off
    __attribute__ ((weak)) const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
        {{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}},
        {{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}},
        {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
        {{0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8}},
        {{0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9}},
        {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
        {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}},
        {{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}},
        {{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}},
        {{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}}
    };
// clang-format on
#    ifdef ENCODER_MAP_ENABLE
        const uint8_t PROGMEM encoder_hand_swap_config[NUM_ENCODERS] = {1,0};
#    endif
#endif
