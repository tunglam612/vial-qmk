#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define SPLIT_WPM_ENABLE
#ifdef RGBLIGHT_ENABLE

    // Disabling some of these is a good way to save flash space.
//  #define RGBLIGHT_EFFECT_ALTERNATING
//  #define RGBLIGHT_EFFECT_RGB_TEST
//  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//  #define RGBLIGHT_EFFECT_BREATHING
//  #define RGBLIGHT_EFFECT_KNIGHT
//  #define RGBLIGHT_EFFECT_SNAKE
//  #define RGBLIGHT_EFFECT_CHRISTMAS
//  #define RGBLIGHT_EFFECT_TWINKLE

    // Set default lighting option
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL+2
    // Allow use of LEDs as modifier/layer indicators without disrupting animations.
    #define RGBLIGHT_LAYERS
#endif

// #undef TAP_CODE_DELAY
// #define TAP_CODE_DELAY 100

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64