#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_RED});
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_SPRINGGREEN});
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_ORANGE});
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_PURPLE});
const rgblight_segment_t PROGMEM my_layer4_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_BLUE});
const rgblight_segment_t PROGMEM my_layer5_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_MAGENTA});
const rgblight_segment_t PROGMEM my_layer6_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_CYAN});


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,
    my_layer2_layer,
    my_layer3_layer,
    my_layer4_layer,
    my_layer5_layer,
    my_layer6_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    // Default set in keyboard json.
    //rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    return state;
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_2(
    KC_Q,         KC_W, KC_E, KC_R,    KC_T,           KC_Y,          KC_U,         KC_I,     KC_O,   KC_P,
    KC_A,         KC_S, KC_D, KC_F,    KC_G,           KC_H,          KC_J,         KC_K,     KC_L,   KC_BSPC,
    LSFT_T(KC_Z), KC_X, KC_C, KC_V,    KC_B,           KC_N,          KC_M,         KC_COMMA, KC_DOT, RSFT_T(KC_SLSH),
    KC_LALT, LGUI_T(KC_SPC), LT(1, KC_TAB), LT(2, KC_ENT)
  ),
  [1] = LAYOUT_split_3x5_2(
    KC_UNDS,         KC_MINS, KC_PLUS, KC_EQL,  KC_COLN, KC_GRV,   KC_MRWD, KC_MPLY, KC_MFFD, KC_DEL,
    KC_LCBR,         KC_LPRN, KC_RPRN, KC_RCBR, KC_PIPE, KC_ESC,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,
    LSFT_T(KC_LBRC), KC_QUOT, KC_DQUO, KC_RBRC, KC_SCLN, KC_TILDE, KC_VOLD, KC_MUTE, KC_VOLU, RSFT_T(KC_BSLS),
    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS
  ),
  [2] = LAYOUT_split_3x5_2(
    KC_EXLM, KC_AT, KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_CAPS, KC_BSPC,
    KC_1,    KC_2,  KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_LSFT, KC_NO, KC_NO,   KC_NO,   MO(3),   KC_NO,   KC_NO,   KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT_split_3x5_2(
    KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_F1,  KC_F2, KC_F3, KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8, KC_F9, KC_F10,
    KC_F11, KC_NO, KC_NO, QK_BOOT, KC_TRNS, KC_NO,   KC_NO,  KC_NO, KC_NO, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [4] = LAYOUT_split_3x5_2(
    KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_F1,  KC_F2, KC_F3, KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8, KC_F9, KC_F10,
    KC_F11, KC_NO, KC_NO, QK_BOOT, KC_TRNS, KC_NO,   KC_NO,  KC_NO, KC_NO, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [5] = LAYOUT_split_3x5_2(
    KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_F1,  KC_F2, KC_F3, KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8, KC_F9, KC_F10,
    KC_F11, KC_NO, KC_NO, QK_BOOT, KC_TRNS, KC_NO,   KC_NO,  KC_NO, KC_NO, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )

};
