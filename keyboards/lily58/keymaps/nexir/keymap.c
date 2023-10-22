#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK = 0,
  _NAV,
  _SYMB,
};

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* COLEMAK
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  |  \   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | ESC  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |   =  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LCtrl | LGUI | Alt | /Space  /       \Enter \  |BackSP| Del  |RCtrl |
     *                   |       |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
	[_COLEMAK] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BACKSLASH,
        LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_LBRC, KC_RBRC, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_EQL,
        KC_LCTL, KC_LGUI, LALT_T(KC_SPC), LT(1,KC_SPC), LT(2,KC_ENT), KC_BSPC, KC_DEL, KC_RCTL
	),
	/* NAV
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   |      |      |      | /       /       \      \  |      |      |      |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
	[_NAV] = LAYOUT(
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,
	    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	/* SYMP
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   |      |      |      | /       /       \      \  |      |      |      |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
	[_SYMB] = LAYOUT(
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO,
	    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO,
	    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS
	)
};

/* TEMPLATE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 *
  [_TEMPLATE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
*/
/* clang-format on */




