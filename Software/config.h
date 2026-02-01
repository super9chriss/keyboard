#pragma once

/* I2C Settings for RP2040 */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1

/* Split Settings */
#define USE_I2C
#define SPLIT_TRANSPORT_MIRROR
#define EE_HANDS // Gebruik EEPROM om links/rechts te bepalen

/* RGB Settings (Pico A2 GP5) */
#define RGB_DI_PIN GP5
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 1 // Pas aan naar het aantal LEDS dat je hebt
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
#endif