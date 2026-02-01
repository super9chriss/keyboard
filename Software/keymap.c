#include QMK_KEYBOARD_H


#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k68, k69, k610, k611, k612, k613, k614, k615, k1216, k1217, k1218, k1219, \
    k10, k11, k12, k13, k14, k15, k16, k17, k78, k79, k710, k711, k712, k713, k714, k1316, k1317, k1318, k1319, \
    k20, k21, k22, k23, k24, k25, k26, k27, k88, k89, k810, k811, k812, k813, k814, k1416, k1417, k1418, k1419, \
    k30, k31, k32, k33, k34, k35, k36, k37, k98, k99, k910, k911, k912, k913, k1516, k1517, k1518, \
    k40, k41, k42, k43, k44, k45, k46, k47, k108, k109, k1010, k1011, k1012, k1013, k1616, k1617, k1618, k1619, \
    k50, k51, k52, k53, k118, k119, k1110, k1111, k1112, k1113, k1114, k1716, k1717 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k50, k51, k52, k53, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k68, k69, k610, k611, k612, k613, k614, k615, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k78, k79, k710, k711, k712, k713, k714, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k88, k89, k810, k811, k812, k813, k814, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k98, k99, k910, k911, k912, k913, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k108, k109, k1010, k1011, k1012, k1013, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k118, k119, k1110, k1111, k1112, k1113, k1114, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1216, k1217, k1218, k1219 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1316, k1317, k1318, k1319 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1416, k1417, k1418, k1419 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1516, k1517, k1518, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1616, k1617, k1618, k1619 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k1716, k1717, KC_NO, KC_NO } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(

        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,      KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_DEL,  KC_F13,     KC_INS,  KC_F20,  KC_F9,   KC_LOCK,

        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,       KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PGUP,            KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,

        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,       KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,            KC_P7,   KC_P8,   KC_P9,   KC_PPLS,

        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,       KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,                     KC_P4,   KC_P5,   KC_P6,

        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,       KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,                      KC_P1,   KC_P2,   KC_P3,   KC_PENT,

        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI, KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,                                              KC_P0,   KC_PDOT
    )
};