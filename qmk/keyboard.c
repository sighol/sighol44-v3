// Copyright 2024 Sigurd Holsen (@Sigurd Holsen)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// When the keyboard boots without a USB host (computer off/sleeping), TinyUSB
// initializes into a failed state and won't recover on its own. This task
// detects when USB becomes available after boot and resets the MCU so it can
// properly enumerate.
void housekeeping_task_kb(void) {
    static bool prev_connected = false;
    bool connected = tud_connected();

    if (connected && !prev_connected) {
        mcu_reset();
    }
    prev_connected = connected;
}
