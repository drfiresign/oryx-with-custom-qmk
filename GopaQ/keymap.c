#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};



#define DUAL_FUNC_0 LT(1, KC_F16)
#define DUAL_FUNC_1 LT(1, KC_F15)
#define DUAL_FUNC_2 LT(12, KC_X)
#define DUAL_FUNC_3 LT(10, KC_L)
#define DUAL_FUNC_4 LT(11, KC_X)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_UNDS,        
    MEH_T(KC_ESCAPE),MT(MOD_LSFT, KC_A),MT(MOD_LGUI, KC_R),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_T),ALL_T(KC_D),                                    ALL_T(KC_H),    MT(MOD_RCTL, KC_N),MT(MOD_LALT, KC_E),MT(MOD_RGUI, KC_I),MT(MOD_RSFT, KC_O),MEH_T(KC_QUOTE),
    OSM(MOD_LSFT),  LT(8, KC_Z),    KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         LT(8, KC_SLASH),KC_BSLS,        
                                                    MO(3),          LT(4, KC_BSPC),                                 LT(4, KC_TAB),  LT(3, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LCTL, KC_F),ALL_T(KC_G),                                    KC_TRANSPARENT, MT(MOD_RCTL, KC_J),MT(MOD_LALT, KC_K),MT(MOD_RGUI, KC_L),MT(MOD_RSFT, KC_SCLN),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_N,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_AIM,                                  KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     TOGGLE_SCROLL,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,                                     LALT(KC_LEFT),  LALT(KC_RIGHT), DRAG_SCROLL,    NAVIGATOR_AIM,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1,     KC_HYPR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TOGGLE_SCROLL,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DRAG_SCROLL,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
                                                    KC_TRANSPARENT, DUAL_FUNC_0,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_EQUAL,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_PLUS,        KC_7,           KC_8,           KC_9,           KC_COLN,        KC_F12,         
    QK_LLCK,        MEH_T(KC_LBRC), MT(MOD_LGUI, KC_RBRC),DUAL_FUNC_1,    DUAL_FUNC_2,    ALL_T(KC_GRAVE),                                ALL_T(KC_MINUS),MT(MOD_RCTL, KC_4),MT(MOD_RALT, KC_5),MT(MOD_RGUI, KC_6),MEH_T(KC_DOT),  KC_DQUO,        
    CW_TOGG,        KC_LCBR,        KC_RCBR,        KC_CIRC,        KC_AMPR,        KC_ASTR,                                        KC_ASTR,        KC_1,           KC_2,           KC_3,           KC_QUES,        KC_PIPE,        
                                                    KC_TRANSPARENT, KC_DELETE,                                      KC_TRANSPARENT, KC_0
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(1),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(KC_LEFT),  LALT(KC_RIGHT), LCTL(KC_R),     KC_TRANSPARENT, DUAL_FUNC_3,    KC_MEDIA_PLAY_PAUSE,
    QK_LLCK,        KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   ALL_T(KC_DELETE),                                KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       DUAL_FUNC_4,    KC_AUDIO_MUTE,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(KC_TAB),   KC_PSCR
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_R,           KC_S,           KC_T,           KC_D,                                           KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_ENTER,       KC_TRANSPARENT,                                 KC_TAB,         KC_SPACE
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_N,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_ENTER,       KC_TRANSPARENT,                                 KC_TAB,         KC_SPACE
  ),
  [7] = LAYOUT_voyager(
    QK_STENO_BOLT,  STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,                                         STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         
    QK_STENO_GEMINI,STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,                                        STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    TO(0),          STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    STN_RES1,       STN_RES2,       KC_NO,          KC_NO,          STN_NC,         KC_NO,                                          KC_NO,          STN_NC,         KC_NO,          KC_NO,          STN_FN,         STN_PWR,        
                                                    STN_A,          STN_O,                                          STN_E,          STN_U
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,                                     KC_TRANSPARENT, DM_REC1,        DM_REC2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1,     KC_HYPR,                                        KC_TRANSPARENT, DM_PLY1,        DM_PLY2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_ENTER), DRAG_SCROLL,                                    KC_TRANSPARENT, LSFT(KC_ENTER), KC_TRANSPARENT, DM_RSTP,        KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_COMMA, KC_DOT, KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_COMMA, KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_2, KC_3, KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_6, KC_7, KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_W, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(LGUI(KC_V))),
    COMBO(combo1, LGUI(LSFT(KC_LBRC))),
    COMBO(combo2, LGUI(LSFT(KC_RBRC))),
    COMBO(combo3, LGUI(LSFT(KC_LBRC))),
    COMBO(combo4, LGUI(LSFT(KC_RBRC))),
    COMBO(combo5, TO(7)),
    COMBO(combo6, KC_ENTER),
    COMBO(combo7, RCTL(KC_ENTER)),
    COMBO(combo8, LCTL(KC_ENTER)),
    COMBO(combo9, KC_ENTER),
    COMBO(combo10, LALT(LGUI(KC_E))),
    COMBO(combo11, TG(5)),
    COMBO(combo12, TG(6)),
    COMBO(combo13, LALT(LGUI(LCTL(LSFT(KC_T))))),
    COMBO(combo14, LALT(LGUI(LCTL(LSFT(KC_E))))),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,135}, {0,255,135}, {0,255,135}, {0,255,135}, {0,0,0}, {0,0,0}, {0,0,0}, {218,123,87}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,135}, {0,255,135}, {0,255,135}, {0,255,135}, {0,0,0}, {0,0,0}, {0,0,0}, {218,123,87}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,136,73}, {154,136,73}, {154,136,73}, {154,136,73}, {0,0,0}, {0,0,0}, {0,0,0}, {73,72,148}, {73,72,148}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,136,73}, {154,136,73}, {154,136,73}, {154,136,73}, {0,0,0}, {0,0,0}, {0,0,0}, {73,72,148}, {73,72,148}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {218,123,87}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {200,218,204}, {218,191,201}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,123,87}, {0,0,0}, {0,0,0}, {200,218,204}, {200,218,204}, {200,218,204}, {218,123,87}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {218,123,87}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {36,39,220}, {36,39,220}, {36,39,220}, {36,39,220}, {36,39,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,204,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,39,220}, {36,39,220}, {36,39,220}, {36,39,220}, {36,39,220}, {36,39,220}, {23,237,142}, {24,218,251}, {24,218,251}, {24,218,251}, {23,237,142}, {36,39,220}, {23,237,142}, {24,218,251}, {24,218,251}, {24,218,251}, {23,237,142}, {23,237,142}, {23,237,142}, {24,218,251}, {24,218,251}, {24,218,251}, {23,237,142}, {23,237,142}, {0,0,0}, {36,67,200} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,191,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,135}, {163,210,114}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {73,72,148}, {0,0,0}, {24,218,251}, {24,218,251}, {24,218,251}, {24,218,251}, {218,83,143}, {0,219,230}, {217,121,130}, {218,123,87}, {218,123,87}, {217,121,130}, {0,198,145}, {0,225,145}, {0,0,0}, {0,0,0} },

    [5] = { {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {24,218,204}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233}, {0,255,233} },

    [6] = { {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {0,255,135}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255}, {163,208,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,218,204}, {218,83,143}, {218,83,143}, {218,83,143}, {24,218,204}, {0,255,233}, {24,218,204}, {10,218,204}, {10,218,204}, {10,218,204}, {24,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {89,83,143}, {89,83,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,218,204}, {218,83,143}, {218,83,143}, {218,83,143}, {218,83,143}, {218,83,143}, {24,218,204}, {10,218,204}, {10,218,204}, {10,218,204}, {10,218,204}, {10,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {89,83,143}, {89,83,143} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {200,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,123,87}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {199,72,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {199,72,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {239,178,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;
void pointing_device_init_user(void) {
  set_auto_mouse_enable(true);
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
  // All keys are not mouse keys when one shot auto mouse is enabled.
  return false;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          if (!is_layer_locked(4)) {
            layer_off(4);
          }
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_M))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_M))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F12)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F12)))));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(KC_X));
        } else {
          unregister_code16(RGUI(KC_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
