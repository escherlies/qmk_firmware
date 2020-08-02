#include QMK_KEYBOARD_H

#define lalt KC_LALT
#define lctl KC_LCTL
#define lsft KC_LSFT
#define ralt KC_RALT
#define rctl KC_RCTL
#define rsft KC_RSFT
#define lgui KC_LGUI

#define bspc KC_BSPC
#define caps KC_CAPS
#define comm KC_COMM
#define scln KC_SCLN
#define slsh KC_SLSH
#define spc KC_SPC
#define tab KC_TAB
#define del KC_DEL
#define dot KC_DOT
#define ent KC_ENT
#define mins KC_MINS
#define quot KC_QUOT
#define esc KC_ESC

#define  down  KC_DOWN
#define  home  KC_HOME
#define  end   KC_END
#define  up    KC_UP
#define  pgdn  KC_PGDN
#define  pgup  KC_PGUP
#define  left  KC_LEFT
#define  rght  KC_RGHT
#define  ins   KC_INS

#define mute KC_MUTE
#define mnxt KC_MNXT
#define mply KC_MPLY
#define mprv KC_MPRV
#define vold KC_VOLD
#define volu KC_VOLU

#define ____ KC_TRNS
#define xxxx KC_NO


enum shifted_symbols {
  // ASCII
  ampr = SAFE_RANGE,
  astr,
  at,
  bsls,
  circ,
  dlr,
  eql,
  exlm,
  grv,
  hash,
  lbrc,
  lcbr,
  lprn,
  perc,
  pipe,
  plus,
  rbrc,
  rcbr,
  rprn,
  tild,
  unds,
  lt,
  gt,
  coln,
  dquo
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x12(
    esc  , KC_1, KC_2, KC_3, KC_4 , KC_5, KC_6 , KC_7 , KC_8, KC_9, KC_0, bspc,
    tab  , KC_Q, KC_W, KC_F, KC_P , KC_B, KC_J , KC_L , KC_U, KC_Y, scln, lbrc,
    bspc , KC_A, KC_R, KC_S, KC_T , KC_G, KC_M , KC_N , KC_E, KC_I, KC_O, ent,
    lsft , KC_Z, KC_X, KC_C, KC_D , KC_V, KC_K , KC_H , comm, dot , slsh, rsft,
    MO(5), lctl, lalt, lgui, MO(4), spc , MO(3), MO(4), left, down, up  , rght
  ),

  [1] = LAYOUT_ortho_5x12(
    ____, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, ____,
    ____, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, ____,
    ____, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, scln, ____,
    ____, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, comm, dot , slsh, ____,
    ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____
  ),

  [2] = LAYOUT_ortho_5x12(
    TO(0), ____, ____, ____, ____, ____, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, ____, ____,
    ____,  ____, ____, ____, ____, ____, KC_P7  , KC_P8  , KC_P9  , KC_PPLS, ____, ____,
    ____,  ____, ____, ____, ____, ____, KC_P4  , KC_P5  , KC_P6  , KC_PCMM, ____, ____,
    ____,  ____, ____, ____, ____, ____, KC_P1  , KC_P2  , KC_P3  , KC_PEQL, ____, ____,
    ____,  ____, ____, ____, ____, ____, KC_P0  , KC_P0  , KC_PDOT, KC_ENT , ____, ____
  ),

  [3] = LAYOUT_ortho_5x12(
    ____, ____, ____, ____, ____,  ____, ____, ____, ____, ____, ____, ____,
    ____, ____, ____, ____, ____,  ____, esc , home, up  , pgup, ins , ____,
    ____, ____, ____, ____, ____,  ____, bspc, left, down, rght, tab , ____,
    ____, ____, ____, ____, ____,  ____, ____, end , ____, pgdn, del , ____,
    ____, ____, ____, ____, MO(4), ____, ____, ____, mply, vold, volu, mnxt
  ),

  [4] = LAYOUT_ortho_5x12(
    ____, KC_1, KC_2, KC_3, KC_4 , KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, ____,
    ____, at  , perc, plus, astr , circ, ____, lbrc, ampr, unds, rbrc, ____,
    ____, lt  , mins, eql , gt   , hash, pipe, lprn, quot, coln, rprn, ____,
    ____, grv , tild, slsh, exlm , bsls, dlr , lcbr, dquo, eql , rcbr, ____,
    ____, ____, ____, ____, MO(3), ____, ____, ____, ____, ____, ____, ____
  ),

  [5] = LAYOUT_ortho_5x12(
    KC_F12, KC_F1, KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10, KC_F11,
    xxxx  , RESET, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, xxxx  , del,
    xxxx  , xxxx , xxxx   , AU_ON  , AU_OFF , AG_NORM, AG_SWAP, TO(0)  , TO(1)  , TO(2)  , xxxx  , xxxx,
    xxxx  , xxxx , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , DF(0)  , DF(1)  , xxxx   , xxxx  , xxxx,
    xxxx  , xxxx , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx  , xxxx
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
          case ampr: SEND_STRING("&");  break;
          case astr: SEND_STRING("*");  break;
          case at:   SEND_STRING("@");  break;
          case bsls: SEND_STRING("\\"); break;
          case circ: SEND_STRING("^");  break;
          case dlr:  SEND_STRING("$");  break;
          case eql:  SEND_STRING("=");  break;
          case exlm: SEND_STRING("!");  break;
          case grv:  SEND_STRING("`");  break;
          case hash: SEND_STRING("#");  break;
          case lbrc: SEND_STRING("[");  break;
          case lcbr: SEND_STRING("{");  break;
          case lprn: SEND_STRING("(");  break;
          case perc: SEND_STRING("%");  break;
          case pipe: SEND_STRING("|");  break;
          case plus: SEND_STRING("+");  break;
          case rbrc: SEND_STRING("]");  break;
          case rcbr: SEND_STRING("}");  break;
          case rprn: SEND_STRING(")");  break;
          case tild: SEND_STRING("~");  break;
          case unds: SEND_STRING("_");  break;
          case lt:   SEND_STRING("<");  break;
          case gt:   SEND_STRING(">");  break;
          case coln: SEND_STRING(":");  break;
          case dquo: SEND_STRING("\""); break;
        }
    }

    return true;
}
