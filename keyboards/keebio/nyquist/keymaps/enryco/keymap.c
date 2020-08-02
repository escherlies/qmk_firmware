#include QMK_KEYBOARD_H

#define a KC_A
#define b KC_B
#define c KC_C
#define d KC_D
#define e KC_E
#define f KC_F
#define g KC_G
#define h KC_H
#define i KC_I
#define j KC_J
#define k KC_K
#define l KC_L
#define m KC_M
#define n KC_N
#define o KC_O
#define p KC_P
#define q KC_Q
#define r KC_R
#define s KC_S
#define t KC_T
#define u KC_U
#define v KC_V
#define w KC_W
#define x KC_X
#define y KC_Y
#define z KC_Z

#define lalt KC_LALT
#define lctl KC_LCTL
#define lsft KC_LSFT
#define ralt KC_RALT
#define rctl KC_RCTL
#define rsft KC_RSFT
#define lgui KC_LGUI

#define n0 KC_0
#define n1 KC_1
#define n2 KC_2
#define n3 KC_3
#define n4 KC_4
#define n5 KC_5
#define n6 KC_6
#define n7 KC_7
#define n8 KC_8
#define n9 KC_9

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

#define f1 KC_F1
#define f2 KC_F2
#define f3 KC_F3
#define f4 KC_F4
#define f5 KC_F5
#define f6 KC_F6
#define f7 KC_F7
#define f8 KC_F8
#define f9 KC_F9
#define f10 KC_F10
#define f11 KC_F11
#define f12 KC_F12
#define f13 KC_F13
#define f14 KC_F14
#define f15 KC_F15
#define f16 KC_F16
#define f17 KC_F17
#define f18 KC_F18
#define f19 KC_F19
#define f20 KC_F20

#define mute KC_MUTE
#define mnxt KC_MNXT
#define mply KC_MPLY
#define mprv KC_MPRV
#define vold KC_VOLD
#define volu KC_VOLU

#define ____ KC_TRNS
#define xxxx KC_NO

#define  nlck  KC_NLCK
#define  psls  KC_PSLS
#define  past  KC_PAST
#define  pmns  KC_PMNS
#define  p7    KC_P7
#define  p8    KC_P8
#define  p9    KC_P9
#define  ppls  KC_PPLS
#define  p4    KC_P4
#define  p5    KC_P5
#define  p6    KC_P6
#define  pcmm  KC_PCMM
#define  p1    KC_P1
#define  p2    KC_P2
#define  p3    KC_P3
#define  peql  KC_PEQL
#define  p0    KC_P0
#define  p0    KC_P0
#define  pdot  KC_PDOT
#define  ent   KC_ENT

#define  ins   KC_INS



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
    esc  , n1  , n2  , n3  , n4 , n5  , n6  , n7   , n8  , n9  , n0  , bspc,
    tab  , q   , w   , f   , p  , b   , j   , l    , u   , y   , scln, lbrc,
    bspc , a   , r   , s   , t  , g   , m   , n    , e   , i   , o   , ent,
    lsft , z   , x   , c   , d  , v   , k   , h    , comm, dot , slsh, rsft, 
    MO(5), lctl, lalt, lgui, MO(4), spc, MO(3), MO(4), left, down, up  , rght
  ),

  [1] = LAYOUT_ortho_5x12(
    ____, n1  , n2  , n3  , n4 , n5  , n6  , n7   , n8  , n9  , n0  , ____,
    ____, q   , w   , e   , r  , t   , y   , u    , i   , o   , p   , ____,
    ____, a   , s   , d   , f  , g   , h   , j    , k   , l   , scln, ____,
    ____, z   , x   , c   , v  , b   , n   , m    , comm, dot , slsh, ____,
    ____, ____, ____, ____, ____, ____, ____, ____, ____, ____ , ____, ____
  ),

  [2] = LAYOUT_ortho_5x12(
    TO(0), ____, ____, ____, ____, ____, nlck, psls, past, pmns, ____, ____,
    ____, ____, ____, ____, ____, ____, p7  , p8  , p9  , ppls, ____, ____,
    ____, ____, ____, ____, ____, ____, p4  , p5  , p6  , pcmm, ____, ____,
    ____, ____, ____, ____, ____, ____, p1  , p2  , p3  , peql, ____, ____,
    ____, ____, ____, ____, ____, ____, p0  , p0  , pdot, ent , ____, ____
  ),

  [3] = LAYOUT_ortho_5x12(
    ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
    ____, ____, ____, ____, ____, ____, esc , home, up  , pgup, ins , ____,
    ____, ____, ____, ____, ____, ____, bspc, left, down, rght, tab , ____,
    ____, ____, ____, ____, ____, ____, ____, end , ____, pgdn, del , ____,
    ____, ____, ____, ____, MO(4), ____, ____, ____, mply, vold, volu, mnxt
  ),

  [4] = LAYOUT_ortho_5x12(
    ____, n1  , n2  , n3  , n4  , n5  , n6  , n7  , n8  , n9  , n0  , ____,
    ____, at  , perc, plus, astr, circ, ____, lbrc, ampr, unds, rbrc, ____,
    ____, lt  , mins , eql, gt  , hash, pipe, lprn, quot, coln, rprn, ____,
    ____, grv , tild, slsh, exlm, bsls, dlr , lcbr, dquo, eql , rcbr, ____,
    ____, ____, ____, ____, MO(3), ____, ____, ____, ____, ____, ____, ____
  ),

  [5] = LAYOUT_ortho_5x12(
    f12 , f1   , f2     , f3     , f4     , f5     , f6     , f7     , f8     , f9     , f10 , f11,
    xxxx, RESET, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, xxxx, del,
    xxxx, xxxx , xxxx   , AU_ON  , AU_OFF , AG_NORM, AG_SWAP, TO(0)  , TO(1)  , TO(2)  , xxxx, xxxx,
    xxxx, xxxx , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , DF(0)  , DF(1)  , xxxx   , xxxx, xxxx,
    xxxx, xxxx , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx   , xxxx, xxxx
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
