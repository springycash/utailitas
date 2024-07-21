// Copyright 2024 sam (@sam)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define ENCODERS_PAD_A {D2, F4}
#define ENCODERS_PAD_B {D3, F5}

#define WS2812_DI_PIN C6
#define RGBLED_NUM 12

//uncomment/comment the effects you want on/off
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_ALTERNATING	
//#define RGBLIGHT_EFFECT_BREATHING 
//#define RGBLIGHT_EFFECT_CHRISTMAS	
//#define RGBLIGHT_EFFECT_KNIGHT		
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL	
//#define RGBLIGHT_EFFECT_RGB_TEST	
//#define RGBLIGHT_EFFECT_SNAKE	
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT	
//#define RGBLIGHT_EFFECT_TWINKLE
