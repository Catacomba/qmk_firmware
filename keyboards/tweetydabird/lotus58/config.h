// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Options not yet fully implemented in info.json
#define RGBLIGHT_DEFAULT_VAL 87

#define SPLIT_HAND_PIN B5
// Not yet available in `info.json`
#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X32
#    define SPLIT_OLED_ENABLE
#endif

// Not yet available in `info.json`
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 68
#    define RGB_MATRIX_SPLIT { 34, 34 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE

//Rgbs
#define RGB_MATRIX_TIMEOUT 300000

#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT

// //Encoders
// #define ENCODERS_PAD_A { C6, F7 }
// #define ENCODERS_PAD_B { D4, F6 }
// #define ENCODER_RESOLUTION 7
// Not yet available in `info.json`
#ifdef OLED_ENABLE
#   define OLED_FONT_H "keyboards/splitkb/aurora/lily58/glcdfont.c"
#endif