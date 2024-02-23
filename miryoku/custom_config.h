// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "../miryoku/german-keymap.h"

//#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
//&kp Q,                &kp W,          &kp E,              &kp R,              &kp T,            &kp DE_Z,         &kp U,              &kp I,              &kp O,            &kp P,                  \
//U_MT(LGUI, A),        U_MT(LALT, S),  U_MT(LCTRL, D),     U_MT(LSHFT, F),     &kp G,              &kp H,            U_MT(LSHFT, J),     U_MT(LCTRL, K),     U_MT(LALT, L),    U_MT(LGUI, SQT),        \
//U_LT(U_BUTTON, DE_Y), U_MT(RALT, X),  &kp C,              &kp V,              &kp B,              &kp N,            &kp M,              &kp COMMA,          U_MT(RALT, DOT),  U_LT(U_BUTTON, SLASH),  \
//U_NP,                 U_NP,           U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPC),   U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,             U_NP

#define MIRYOKU_LAYER_BASE \
&kp P,                &kp O,          &kp DE_MINS,        &kp DE_COMM,        &kp Q,            &kp G,            &kp C,              &kp L,              &kp M,            &kp F,                  \
U_MT(LGUI, H),        U_MT(LALT, I),  U_MT(LCTRL, E),     U_MT(LSHFT, A),     &kp O,              &kp D,            U_MT(LSHFT, T),     U_MT(LCTRL, R),     U_MT(LALT, N),    U_MT(LGUI, S),        \
U_LT(U_BUTTON, K),    U_MT(RALT, Y),  &kp DE_DOT,         &kp DE_QUOT,        &kp X,              &kp J,            &kp V,              &kp W,              U_MT(RALT, B),    U_LT(U_BUTTON, Z),  \
U_NP,                 U_NP,           U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPC),   U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,             U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp DE_LBRC,  &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp DE_RBRC,   U_NA,   &u_to_U_BASE, &u_to_U_EXTRA,  &u_to_U_TAP,  U_BOOT,   \
&kp DE_SCLN,  &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp DE_EQL,    U_NA,   &kp LSHFT,    &kp LCTRL,      &kp LALT,     &kp LGUI, \
&kp DE_GRV,   &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp DE_BSLS,   U_NA,   &u_to_U_NUM,  &u_to_U_NAV,    &kp RALT,     U_NA,     \
U_NP,         U_NP,              &kp DE_DOT,        &kp NUM_0,         &kp DE_MINS,   U_NA,   U_NA,         U_NA,           U_NP,         U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp DE_LCBR,  &kp DE_AMPR,  &kp DE_ASTR,  &kp DE_LPRN,  &kp DE_RCBR,  U_NA,   &u_to_U_BASE,   &u_to_U_EXTRA,  &u_to_U_TAP,  U_BOOT,     \
&kp DE_COLN,  &kp DE_DLR,   &kp DE_PERC,  &kp DE_CIRC,  &kp DE_PLUS,  U_NA,   &kp LSHFT,      &kp LCTRL,      &kp LALT,     &kp LGUI,   \
&kp DE_TILD,  &kp DE_EXLM,  &kp DE_AT,    &kp DE_HASH,  &kp DE_PIPE,  U_NA,   &u_to_U_SYM,    &u_to_U_MOUSE,  &kp RALT,     U_NA,       \
U_NP,         U_NP,         &kp DE_LPRN,  &kp DE_RPRN,  &kp DE_UNDS,  U_NA,   U_NA,           U_NA,           U_NP,         U_NP
