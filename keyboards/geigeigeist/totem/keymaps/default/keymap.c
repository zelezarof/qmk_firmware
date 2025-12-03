#include QMK_KEYBOARD_H

enum totem_layers {
    QWERTY = SAFE_RAGE,
    LOWER,
    UPPER,
    ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT(
                 KC_Q,               KC_W,                KC_E,               KC_R,               KC_T,       KC_Y,    KC_U,               KC_I,               KC_O,               KC_P,
                 MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S),  MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G,       KC_H,    MT(MOD_RSFT, KC_J), MT(MOD_LCTL, KC_K), MT(MOD_LALT, KC_L), MT(MOD_LGUI, KC_SCLN),
        KC_Q,    KC_Z,               KC_X,                KC_C,               KC_V,               KC_B,       KC_N,    KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,               KC_P,
                                                          KC_DEL,             LT(LOWER, KC_TAB),      KC_SPC,     KC_ENT,  LT(UPPER, KC_ESC),      KC_BSPC

    ),
    [LOWER] = LAYOUT(
                 KC_CAPS,            KC_NUM,             KC_UP,              KC_EQL,             KC_LCBR,    KC_RCBR, KC_P7,               KC_P8,              KC_P9,              KC_PPLS,
                 KC_QUOT,            KC_LEFT,            KC_DOWN,            KC_RGHT,            KC_LBRC,    KC_RBRC, KC_P4,               KC_P5,              KC_P6,              KC_MINS,
        XXXXXXX, KC_END,             KC_PGUP,            C(KC_S),            KC_PGDN,            KC_LPRN,    KC_RPRN, KC_P1,               KC_P2,              KC_P3,              KC_PAST,               _______,
                                                                             _______,            _______,    _______, _______,             MO(ADJUST),              KC_P0
    ),
    [UPPER] = LAYOUT(
                 KC_EXLM,            KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC, KC_AMPR,          RALT(KC_U), RALT(KC_3), KC_BSLS,
                 RALT(KC_A),         RALT(KC_F), RALT(KC_S), RALT(KC_G), XXXXXXX,    XXXXXXX, LSFT(RALT(KC_4)), RALT(KC_5), RALT(KC_4), RALT(KC_O),
        XXXXXXX, LSFT(KC_GRV),       KC_TILD,    RALT(KC_C), XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,          XXXXXXX,    DM_REC1,    DM_RSTP,    DM_PLY1,
                                           _______,    MO(ADJUST),      _______,    _______, _______,          _______
    ),
    [ADJUST] = LAYOUT(
                 QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12,
                 DB_TOGG, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,
        XXXXXXX,  CG_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F10,  KC_F13,
                                   _______, _______, _______,    _______, _______, _______
    )
};
