// Copyright 2024 Sigurd Holsen (@Sigurd Holsen)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_split_keyboard.md#handedness-by-eeprom
// qmk flash -kb sighol56 -km default -bl uf2-split-{left,right}
#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP8
#define SERIAL_USART_RX_PIN GP9

#define MASTER_LEFT
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// #define RGBLIGHT_SPLIT
// #define RGBLED_SPLIT {1, 1}

#define PERMISSIVE_HOLD_PER_KEY
#define CHORDAL_HOLD
#define QUICK_TAP_TERM 0

#define NO_USB_STARTUP_CHECK

#define COMBO_TERM 100
