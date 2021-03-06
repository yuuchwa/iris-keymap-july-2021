#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define _NEO    0
#define _SYMBOL 1
#define _MEDIA  2
#define _GAME   3
#define _QWERTY 4


// keymap shortname
#define _CALC     KC_CALCULATOR
#define _B_UP     KC_BRIGHTNESS_UP
#define _B_DOWN   KC_BRIGHTNESS_DOWN
#define _MUTE     KC_AUDIO_MUTE
#define _V_UP     KC_AUDIO_VOL_UP
#define _V_DOWN   KC_AUDIO_VOL_DOWN

enum custom_keycodes {
//	SFT_LCK //tapdance declarations
    NEO = 0,
    SYMBOL,
    MEDIA,
    GAME,
    QWERTY,
    SFT_LCK //tapdance declaration
};

enum {
    TD_LAN_GAME,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LAN_GAME] = ACTION_TAP_DANCE_DOUBLE(TG(3), TG(4)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [_NEO] = LAYOUT(
      //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
          KC_ESC ,  DE_1  ,  DE_2  ,  DE_3  ,  DE_4  ,  DE_5  ,                             DE_6  ,  DE_7  ,  DE_8  ,  DE_9  ,  DE_0  , TG(2)  ,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
          KC_TAB ,  DE_X  ,  DE_V  ,  DE_L  ,  DE_C  ,  DE_W  ,                             DE_K  ,  DE_H  ,  DE_G  ,  DE_F  ,  DE_Q  , DE_SS,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤        
          KC_LSFT,  DE_U  ,  DE_I  ,  DE_A  ,  DE_E  ,  DE_O  ,                             DE_S  ,  DE_N  ,  DE_R  ,  DE_T  ,  DE_D  ,  DE_Y  ,
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
          KC_LCTL,  DE_UE ,  DE_OE ,  DE_AE ,  DE_P  ,  DE_Z  , RGB_TOG,          TG(3)  ,  DE_B  ,  DE_M , DE_COMM, DE_DOT ,  DE_J  , KC_LALT ,
      //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                        KC_LGUI , KC_SPC ,  MO(1) ,                   KC_ENT , KC_BSPC, KC_DEL
                                    // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
   ),

   [_SYMBOL] = LAYOUT(
      //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
          KC_ESC ,  KC_F1 ,  KC_F2 , KC_F3  , KC_F4  , KC_F5  ,                            KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_INS,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
          _______, _______, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,                            DE_EXLM, DE_LABK, DE_RABK, DE_EQL , DE_AMPR, KC_DEL,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
          _______, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,                            DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN,  DE_AT ,
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
          KC_LCTL, DE_HASH, DE_DLR , DE_PIPE, DE_TILD, DE_GRV , _______,          _______, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
      //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                         _______, _______, _______,                   _______, KC_UNDO, KC_AGAIN 
                                    // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
   ),

   [_MEDIA] = LAYOUT(
      //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
          _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
         _______, _______, _______, _______, _______, _______,                            _______,  _______, _______, _______ , _______, _______,  
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤          
          _______, _______, _______, _______, _______, _______,                            _______, KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, _______,  
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
          _______, _______, _______, _______, _______, _______, _______,          _______, _______, _MUTE  , _V_DOWN, _V_UP  , _______, _______,  
      //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          _______, _______, _______,                  _______, _______, _______       
                                    // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
   ),
    [_GAME] = LAYOUT(
      //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
          KC_ESC ,  DE_1  ,   DE_2  ,  DE_3  ,  DE_4  ,  DE_5  ,                            DE_6  ,  DE_7  ,  DE_8  ,  DE_9  ,  DE_0 ,  _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
          KC_TAB ,  DE_T  ,  DE_Q  ,  DE_W  ,  DE_E  ,  DE_R  ,                            _______, _______, _______, _______, _______, _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤           
           DE_U  , KC_LSFT,  DE_A  ,  DE_S  ,  DE_D  ,  DE_F  ,                            _______, _______, _______, _______, _______, _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
          DE_I   , KC_LCTL,  DE_Z  ,  DE_X  ,  DE_C  ,  DE_V  , RGB_TOG,        _______, _______, _______, _______, _______, _______, _______,
      //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                        KC_LALT , KC_SPC , DE_G   ,                   _______, _______, _______
                                    // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
   ),  
   [_QWERTY] = LAYOUT(
      //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
          KC_ESC ,  DE_1  ,  DE_2  ,  DE_3  ,  DE_4  ,  DE_5  ,                             DE_6  ,  DE_7  ,  DE_8  ,  DE_9  ,  DE_0 ,   TG(2) ,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
          KC_TAB ,  DE_Q  ,  DE_W  ,  DE_E  ,  DE_R  ,  DE_T  ,                             DE_Y  ,  DE_U  ,  DE_I  ,  DE_O  ,  DE_P  , _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤           
          KC_LSFT,  DE_A  ,  DE_S  ,  DE_D  ,  DE_F  ,  DE_G  ,                                   ,  DE_H  ,  DE_J  ,  DE_K  ,  DE_L  , _______,
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼───────┼────────┼────────┤
          KC_LCTL,  DE_Z  ,  DE_X  ,  DE_C  ,  DE_V  , _______, RGB_TOG,           TG(3) ,  DE_B  ,   DE_N ,  DE_M  , _______, _______, _______,
      //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                        KC_LALT , KC_SPC ,  MO(1) ,                   KC_ENT , KC_BSPC, KC_DEL
                                    // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
   ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case NEO:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_NEO);
      }
      return false;
      break;
    case SYMBOL:
      if (record->event.pressed) {
        layer_on(_SYMBOL);
        update_tri_layer(_SYMBOL, _MEDIA, _GAME);
      } else {
        layer_off(_SYMBOL);
        update_tri_layer(_SYMBOL, _MEDIA, _GAME);
      }
      return false;
      break;
    case MEDIA:
      if (record->event.pressed) {
        layer_on(_MEDIA);
        update_tri_layer(_SYMBOL, _MEDIA, _GAME);
      } else {
        layer_off(_MEDIA);
        update_tri_layer(_SYMBOL, _MEDIA, _GAME);
      }
      return false;
      break;
    case GAME:
      if (record->event.pressed) {
        layer_on(_GAME);
      } else {
        layer_off(_GAME);
      }
      return false;
      break;
  }
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

void keyboard_pre_init_user(void) {
    rgblight_sethsv_noeeprom(HSV_WHITE);
}

void keyboard_post_init_user(void) {
    rgblight_disable();
}
