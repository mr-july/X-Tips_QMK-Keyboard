#include QMK_KEYBOARD_H
#include "leds.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( //Alphabet
		KC_Q, KC_W, KC_E, KC_R, KC_T,                                 LCTL(KC_Z),        KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G,                                 LCTL(KC_V),        KC_H,  KC_J, KC_K, KC_L, KC_ENT,
		KC_Z, KC_X, KC_C, KC_V, KC_B,                                 LCTL(KC_C),        KC_N, KC_M, LT(3, KC_COMM), LT(4, KC_DOT), KC_BSPC,
		XXXXXXX, XXXXXXX, LCTL_T(KC_ESC), LT(1, KC_SPC), KC_LSFT,     LCTL(KC_X),        LALT_T(KC_TAB), LT(2, KC_SPC), LGUI_T(KC_DEL), XXXXXXX, XXXXXXX),

	[1] = LAYOUT( //Numpad and Punctuation
		KC_7, KC_8, KC_9, KC_PDOT, KC_PPLS,                           LCTL(KC_Y),        KC_PAST, KC_DLR, KC_COLN, KC_PIPE, KC_GRV,
		KC_4, KC_5, KC_6, KC_0, KC_PMNS,                              KC_ESC,            KC_PSLS, KC_HASH, KC_LCBR, KC_RCBR, KC_SCLN,
		KC_1, KC_2, KC_3, KC_BSPC, KC_EQL,                            KC_DEL,            KC_BSLS, KC_AMPR, KC_LABK, KC_RABK, KC_QUOT,
		XXXXXXX, XXXXXXX, KC_LCTL, TO(0), LSFT_T(KC_PENT),            KC_TAB,            KC_LALT, LGUI(KC_SPC), KC_LGUI, XXXXXXX, XXXXXXX),

	[2] = LAYOUT( //Punctuation and Arrow key
		KC_TILD, KC_PERC, KC_UNDS, KC_CIRC, KC_PLUS,                  LGUI(KC_EQL),      KC_ASTR, KC_HOME, KC_UP, KC_END, KC_PGUP,
		KC_AT, KC_DQUO, KC_EXLM, KC_QUES, KC_MINS,                    LGUI(KC_MINS),     KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
		KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_EQL,                   LGUI(KC_ESC),      KC_BSLS, MEH(KC_SLSH), KC_ESC, KC_TAB, KC_DEL,
		XXXXXXX, XXXXXXX, KC_RCTL, KC_CAPS, KC_RSFT,                  LGUI(KC_ESC),      KC_RALT, TO(0), KC_RGUI, XXXXXXX, XXXXXXX),

	[3] = LAYOUT( //Fn & Mouse & Media
		LCAG(KC_P), KC_F9, KC_F10, KC_F11, KC_F12,                    LCTL(KC_PLUS),     KC_VOLD, KC_VOLU, KC_INS, KC_APP, KC_NUM,
		LCAG(KC_ENT), KC_F5, KC_F6, KC_F7, KC_F8,                     LCTL(KC_MINS),     KC_MPRV,KC_MNXT, KC_PAUS, KC_PSCR, KC_SCRL,
		LCAG(KC_BSPC), KC_F1, KC_F2, KC_F3, KC_F4,                    LCTL(KC_0),        KC_MUTE, KC_MPLY, TO(0), RCS(KC_X), RCS(KC_O),
		XXXXXXX, XXXXXXX, KC_RCTL, TT(6), KC_RSFT,                    LGUI(KC_ESC),      KC_RALT, MO(5), KC_RGUI, XXXXXXX, XXXXXXX),

	[4] = LAYOUT( //App hotkeys
		MEH(KC_Q), MEH(KC_W), MEH(KC_E), MEH(KC_R), MEH(KC_T),        XXXXXXX,           MEH(KC_Y), MEH(KC_U), MEH(KC_I), MEH(KC_O), MEH(KC_P),
		MEH(KC_A), MEH(KC_S), MEH(KC_D), MEH(KC_F), MEH(KC_G),        XXXXXXX,           MEH(KC_H), MEH(KC_J), MEH(KC_K), MEH(KC_L), MEH(KC_ENT),
		MEH(KC_Z), MEH(KC_X), MEH(KC_C), MEH(KC_V), MEH(KC_B),        XXXXXXX,           MEH(KC_N), MEH(KC_M), MEH(KC_COMM), TO(0), MEH(KC_BSPC),
		XXXXXXX, XXXXXXX, RM_HUED, RM_HUEU, RM_NEXT,                  XXXXXXX,           RM_TOGG, RM_SPDD, RM_SPDU, XXXXXXX, XXXXXXX),

	[5] = LAYOUT( //KB Bootkey & Sys Reboot,Shutdown & Others
		RM_HUED, RM_HUEU, HYPR(KC_E), HYPR(KC_R), HYPR(KC_T),         XXXXXXX,           LALT(KC_F4), LALT(KC_TAB), MS_BTN1, MS_UP, MS_BTN2,
		RM_SPDD, RM_SPDU, HYPR(KC_D), HYPR(KC_F), HYPR(KC_G),         XXXXXXX,           LCTL(KC_W), LCTL(KC_T), MS_LEFT, MS_DOWN, MS_RGHT,
		RM_NEXT, RM_TOGG, HYPR(KC_C), HYPR(KC_V), HYPR(KC_B),         XXXXXXX,           RCS(KC_TAB), LCTL(KC_TAB), MS_BTN4, MS_BTN5, MS_BTN3,
		HYPR(KC_1), HYPR(KC_2), HYPR(KC_3), HYPR(KC_4), HYPR(KC_5),   XXXXXXX,           QK_BOOT, TO(0), MEH(KC_RBRC), XXXXXXX, XXXXXXX),

	[6] = LAYOUT( //KB Bootkey & Sys Reboot,Shutdown & Others
		LCAG(KC_Q), KC_F21, KC_F22, KC_F23, KC_F24,                   LCTL(KC_Z),        KC_PPLS, KC_P7, KC_P8, KC_P9, KC_PDOT,
		LCAG(KC_A), KC_F17, KC_F18, KC_F19, KC_F20,                   LCTL(KC_V),        KC_PMNS, KC_P4, KC_P5, KC_P6, KC_P0,
		LCAG(KC_Z), KC_F13, KC_F14, KC_F15, KC_F16,                   LCTL(KC_C),        KC_PAST, KC_P1, KC_P2, KC_P3, KC_BSPC,
		XXXXXXX, XXXXXXX, LCTL_T(KC_ESC), TO(0), LSFT_T(KC_TAB),      LCTL(KC_X),        LALT_T(KC_PSLS), LSFT_T(KC_SPC), KC_PENT, XXXXXXX, XXXXXXX)
};
