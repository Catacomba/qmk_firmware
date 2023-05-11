#include QMK_KEYBOARD_H
#include "quantum\keymap_extras\keymap_slovenian.h"
/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


enum unicode_names {
	SI_SCARON_LOWER,
	SI_SCARON_UPPER,
	SI_ZCARON_LOWER,
    SI_ZCARON_UPPER,
    SI_CCARON_LOWER,
    SI_CCARON_UPPER,
};

const uint32_t unicode_map[] PROGMEM = {
	// Unicode codes for each character
	// š/Š
	[SI_SCARON_LOWER] = 0x0161,
	[SI_SCARON_UPPER] = 0x0160,
	// ž/Ž
	[SI_ZCARON_LOWER] = 0x017E,
	[SI_ZCARON_UPPER] = 0x017D,
	// č/Č
	[SI_CCARON_LOWER] = 0x010D,
	[SI_CCARON_UPPER] = 0x010C,
};

enum layers {
    _BASE = 0,
	_LAYER1 = 1,
	_LAYER2 = 2,
	_RGB = 3,
};

#define SI_SCARON XP(SI_SCARON_LOWER, SI_SCARON_UPPER)
#define SI_ZCARON XP(SI_ZCARON_LOWER, SI_ZCARON_UPPER)
#define SI_CCARON XP(SI_CCARON_LOWER, SI_CCARON_UPPER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
     // XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX .
    	KC_ESC  , KC_1    , KC_2      , KC_3      , KC_4    , KC_5      ,                     KC_6      , KC_7    , KC_8    , KC_9    , KC_0    , KC_GRV  , 
    	KC_TAB  , KC_Q    , KC_W      , KC_E      , KC_R    , KC_T      ,                     KC_Y      , KC_U    , KC_I    , KC_O    , KC_P    , KC_MINS , 
    	KC_LSFT , KC_A    , KC_S      , KC_D      , KC_F    , KC_G      ,                     KC_H      , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , 
    	KC_LCTL , KC_Z    , KC_X      , KC_C      , KC_V    , KC_B      , KC_LBRC , KC_RBRC , KC_N      , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_BSLS , 
		                                KC_LALT   , KC_LGUI , MO(1)     , KC_SPC  , KC_ENT  , MO(2)     , KC_BSPC , KC_RALT
       ),
    [_LAYER1] = LAYOUT(
     // XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX .
    	KC_F1   , KC_F2   , KC_F3     , KC_F4     , KC_F5   , KC_F6     ,                     KC_F7     , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , 
    	_______ , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   ,                     SI_ZCARON , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
    	_______ , XXXXXXX , SI_SCARON , XXXXXXX   , XXXXXXX , XXXXXXX   ,                     XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
    	_______ , XXXXXXX , XXXXXXX   , SI_CCARON , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
                                        _______   , _______ , _______   , _______ , _______ , MO(3)     , _______ , _______
    ),
    [_LAYER2] = LAYOUT(	
     // XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX .
    	_______ , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   ,                     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    	_______ , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , KC_LCBR   ,                     KC_RCBR , XXXXXXX , KC_UP   , XXXXXXX , XXXXXXX , XXXXXXX , 
    	_______ , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , KC_ASTR   ,                     KC_LPRN , KC_LEFT , KC_DOWN , KC_RGHT , XXXXXXX , XXXXXXX , 
    	_______ , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
    	                                _______   , _______ , MO(3)     , _______ , _______ , _______ , _______ , _______
    ),
    [_RGB] = LAYOUT(
     // XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX .
    	XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   ,                     XXXXXXX , XXXXXXX , XXXXXXX , BL_UP   , XXXXXXX , XXXXXXX ,  
    	XXXXXXX , RGB_M_P , RGB_M_B   , RGB_M_R   , RGB_M_SW, RGB_M_SN  ,                     BL_TOGG , BL_STEP , BL_BRTG , BL_DOWN , XXXXXXX , XXXXXXX , 
    	XXXXXXX , RGB_M_X , RGB_M_T   , XXXXXXX   , XXXXXXX , XXXXXXX   ,                     RGB_SPI , XXXXXXX , RGB_TOG , RGB_HUI , RGB_SAI , RGB_VAI , 
    	XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX   , XXXXXXX , XXXXXXX   , XXXXXXX , XXXXXXX , RGB_M_R , RGB_RMOD, RGB_MOD , RGB_HUD , RGB_SAD , RGB_VAD , 
    	                                _______   , _______ , _______   , _______ , _______ , _______ , _______ , _______
	)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



