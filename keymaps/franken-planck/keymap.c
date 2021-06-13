#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LALT, TO(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), LSFT_T(KC_G), KC_LGUI, KC_RGUI, RSFT_T(KC_H), RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN, LSFT_T(KC_GRV), KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_APP, KC_B, KC_N, KC_M, KC_SLSH, RSFT_T(KC_QUOT), LT(8,KC_AT), ALL_T(KC_ESC), LT(3,KC_TAB), LT(5,KC_DEL), KC_SPC, KC_SPC, KC_ENT, KC_ENT, LT(4,KC_BSPC), LT(2,KC_COMM), KC_DOT, LT(7,KC_HASH)),
	[1] = LAYOUT_ortho_4x12(KC_X, KC_V, KC_L, KC_C, KC_W, KC_TRNS, TO(0), KC_K, KC_H, KC_G, KC_F, KC_Q, KC_U, LCTL_T(KC_I), LALT(KC_A), LGUI_T(KC_E), LSFT_T(KC_O), KC_TRNS, KC_TRNS, RSFT_T(KC_S), RGUI_T(KC_N), RALT_T(KC_R), RCTL_T(KC_T), KC_D, KC_LSFT, KC_NO, KC_NO, KC_P, KC_Z, KC_TRNS, KC_TRNS, KC_B, KC_M, KC_J, KC_TRNS, RSFT_T(KC_Y), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ortho_4x12(KC_EXLM, KC_LPRN, KC_RPRN, KC_PERC, KC_GRV, KC_CIRC, KC_AMPR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_LCBR, KC_RCBR, KC_CIRC, KC_EQL, KC_CIRC, KC_QUES, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, KC_NO, KC_HASH, KC_LBRC, KC_RBRC, KC_AMPR, KC_PIPE, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AT, KC_LT, KC_GT, KC_TAB, KC_DEL, KC_ASTR, KC_DLR, KC_NO, TO(6), KC_NO, KC_CAPS, KC_NO),
	[3] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCAP, KC_LNUM, KC_LSCR, KC_NO, KC_WSCH, KC_WSTP, KC_WBAK, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WFWD, KC_LSFT, KC_APP, KC_WFAV, KC_ACL0, KC_ACL1, KC_ACL2, KC_WHOM, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_WSCH, KC_LSFT, KC_LALT, KC_NO, KC_WFAV, KC_WREF, KC_SPC, KC_ENT, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5),
	[4] = LAYOUT_ortho_4x12(KC_EXLM, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS, KC_BSLS, KC_PSCR, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_PMNS, KC_4, KC_5, KC_6, KC_PPLS, KC_CIRC, KC_QUES, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, KC_NO, KC_PDOT, KC_1, KC_2, KC_3, KC_PCMM, KC_PERC, KC_DLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COLN, KC_DQUO, KC_UNDS, KC_0, KC_PEQL, KC_TILD, KC_GRV, MO(6), KC_NO, KC_CAPS, KC_NO, KC_NO),
	[5] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_AGIN, KC_UNDO, KC_CAPS, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_ortho_4x12(KC_NO, RESET, DEBUG, KC_NO, KC_NO, BL_DEC, BL_INC, RGB_M_T, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, BL_OFF, BL_ON, BL_TOGG, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, MU_OFF, MU_ON, RGB_RMOD, RGB_MOD, KC_NO, RGB_SPD, RGB_SPI, RGB_TOG, RGB_HUD, RGB_SAD, RGB_SAI, KC_NO, MI_OFF, MI_ON, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, RGB_SAI),
	[7] = LAYOUT_ortho_4x12(KC_MYCM, KC_MSEL, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_PWR, KC_F17, KC_F18, KC_F19, KC_F23, KC_F24, KC_CALC, LCTL_T(KC_MAIL), LALT_T(KC_F4), LGUI_T(KC_F6), LSFT_T(KC_F6), KC_SLCK, KC_SLEP, RSFT_T(KC_F14), RGUI_T(KC_F15), RALT_T(KC_F16), RCTL_T(KC_F21), KC_F22, KC_NO, KC_MENU, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_WAKE, KC_F11, KC_F12, KC_F13, KC_HELP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_NO, KC_NO, KC_F20, KC_NO, KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_EJCT, KC_PAUS, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_NO, KC_NO, KC_NO)
};

