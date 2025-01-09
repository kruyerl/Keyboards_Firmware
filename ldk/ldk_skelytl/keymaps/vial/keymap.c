#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
// Configure LED
void keyboard_post_init_user(void) {
    // Initialize RGB to static black
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(RGB_WHITE);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
}

// Change LED
void housekeeping_task_user(void) {
    // Caps lock status
    if (host_keyboard_led_state().caps_lock) {
        rgblight_setrgb(RGB_RED);
    } else {
        // Layers
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 0:
                //rgblight_setrgb(RGB_WHITE);
                break;
            case 1:
                rgblight_setrgb(RGB_ORANGE);
                break;
            case 2:
                rgblight_setrgb(RGB_SPRINGGREEN);
                break;
            case 3:
                rgblight_setrgb(RGB_PURPLE);
                break;
            case 4:
                rgblight_setrgb(RGB_BLUE);
                break;
            case 5:
                rgblight_setrgb(RGB_RED);
                break;
        }
    }
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    ),
    [1] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    ),
    [2] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    ),
    [3] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    ),
    [4] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    ),
    [5] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
    )


};
