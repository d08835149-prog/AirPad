#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_VSCODE = SAFE_RANGE,
    KC_NOTEPAD,
    KC_DISCORD,
    KC_EXPLORER
};

static const char *last_action = "READY";

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case KC_CALC:
            last_action = "CALCULATOR";
            break;

        case KC_VOLU:
            last_action = "VOLUME +";
            break;

        case KC_VOLD:
            last_action = "VOLUME -";
            break;

        case KC_PSCR:
            last_action = "SCREENSHOT";
            break;

        case C(KC_C):
            last_action = "COPY";
            break;

        case C(KC_V):
            last_action = "PASTE";
            break;

        case C(KC_Z):
            last_action = "UNDO";
            break;

        case C(KC_Y):
            last_action = "REDO";
            break;

        case KC_M:
            last_action = "YT MUTE";
            break;

        case KC_K:
            last_action = "YT PLAY/PAUSE";
            break;

        case S(KC_P):
            last_action = "YT PREVIOUS";
            break;

        case S(KC_N):
            last_action = "YT NEXT";
            break;

        case KC_VSCODE:
            last_action = "VS CODE";
            SEND_STRING(SS_LGUI("r"));
            wait_ms(300);
            SEND_STRING("code");
            tap_code(KC_ENTER);
            return false;

        case KC_NOTEPAD:
            last_action = "NOTEPAD";
            SEND_STRING(SS_LGUI("r"));
            wait_ms(300);
            SEND_STRING("notepad");
            tap_code(KC_ENTER);
            return false;

        case KC_DISCORD:
            last_action = "DISCORD";
            SEND_STRING(SS_LGUI("r"));
            wait_ms(300);
            SEND_STRING("discord");
            tap_code(KC_ENTER);
            return false;

        case KC_EXPLORER:
            last_action = "EXPLORER";
            tap_code16(G(KC_E));
            return false;
    }

    return true;
}

bool oled_task_user(void) {
    oled_write_ln("AIRPAD", false);
    oled_write_ln("", false);
    oled_write_ln(last_action, false);
    return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_CALC,       KC_VOLU,       KC_VOLD,       KC_PSCR,
        C(KC_C),       C(KC_V),       KC_VSCODE,     KC_NOTEPAD,
        KC_DISCORD,    KC_EXPLORER,   C(KC_Z),       C(KC_Y),
        KC_M,          KC_K,          S(KC_P),       S(KC_N)
    )
};
