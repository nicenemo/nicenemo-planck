#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(MEH_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, TO(1), ALL_T(KC_ESC), LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, LT(8,KC_ESC), LT(5,KC_SPC), LT(3,KC_TAB), LT(2,KC_ENT), LT(4,KC_BSPC), LT(7,KC_DEL), KC_RGUI, KC_RALT, KC_RCTL),
	[1] = LAYOUT_ortho_4x12(KC_TRNS, KC_X, KC_V, KC_L, KC_C, KC_W, KC_K, KC_H, KC_G, KC_F, KC_Q, TO(1), KC_TRNS, LGUI_T(KC_U), LALT_T(KC_I), LCTL_T(KC_A), LSFT_T(KC_E), KC_O, KC_S, RSFT_T(KC_N), RCTL_T(KC_R), RALT_T(KC_T), RGUI_T(KC_D), KC_Y, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_P, KC_Z, KC_B, KC_M, KC_COMM, KC_DOT, KC_J, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ortho_4x12(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_NUHS), KC_BSLS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, TO(6), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_ortho_4x12(KC_LCAP, KC_LNUM, KC_LSCR, KC_NO, KC_NO, KC_ACL2, KC_WBAK, KC_WHOM, KC_WSCH, KC_WFWD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WSCH, KC_NO, KC_ACL0, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_SCLN, KC_QUOT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WSTP, KC_ACL1, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WFAV, KC_WREF, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5, KC_TRNS),
	[4] = LAYOUT_ortho_4x12(KC_GRV, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS, KC_TILD, KC_EXLM, KC_LPRN, KC_RPRN, KC_PIPE, KC_TRNS, KC_NO, KC_P4, KC_P5, KC_P6, KC_PAST, KC_PSLS, KC_DLR, KC_QUES, KC_LCBR, KC_RCBR, KC_AT, KC_TRNS, KC_NLCK, KC_P1, KC_P2, KC_P3, KC_PCMM, KC_PDOT, KC_PERC, KC_CIRC, KC_LT, KC_GT, KC_TRNS, KC_HASH, KC_COLN, KC_DQUO, KC_UNDS, KC_P0, KC_PEQL, KC_ENT, KC_NO, MO(6), KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SCLN, KC_QUOT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_ortho_4x12(KC_NO, RESET, DEBUG, KC_NO, KC_NO, BL_DEC, BL_INC, RGB_M_T, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, BL_OFF, BL_ON, BL_TOGG, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, MU_OFF, MU_ON, KC_NO, KC_NO, KC_NO, RGB_SPD, RGB_SPI, RGB_TOG, RGB_HUD, RGB_SAD, RGB_SAI, KC_NO, MI_OFF, MI_ON, KC_BRID, KC_BRIU, KC_NO, RGB_RMOD, RGB_MOD, KC_TRNS, KC_NO, RGB_VAD, RGB_VAI, RGB_SAI),
	[7] = LAYOUT_ortho_4x12(KC_MYCM, KC_MSEL, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_PWR, KC_F17, KC_F18, KC_F19, KC_F23, KC_F24, KC_CALC, KC_MAIL, KC_F4, KC_F5, KC_F6, KC_SLCK, KC_SLEP, KC_F14, KC_F15, KC_F16, KC_F21, KC_F22, KC_TRNS, KC_MENU, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_WAKE, KC_F11, KC_F12, KC_F13, KC_HELP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F10, KC_TRNS, KC_TRNS, KC_F20, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_EJCT, KC_NO, KC_MFFD, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS)
};

