#include QMK_KEYBOARD_H

enum layers {
    BASE,  // default layer
    UTIL,  // util layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_mlg(
        KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS,
        KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MPLY,

        KC_LALT, KC_LGUI, KC_LSFT, KC_BSPC, KC_ENT, KC_SPC,

        KC_GRV,        KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB,        KC_Q, KC_W, KC_E, KC_R, KC_T,
        CTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G,
        MO(UTIL),      KC_Z, KC_X, KC_C, KC_V, KC_B

    ),

    [UTIL] = LAYOUT_mlg(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [UTIL] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif
