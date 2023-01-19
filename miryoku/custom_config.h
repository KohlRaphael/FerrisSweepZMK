// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp RA(NUMBER_8),  &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RA(NUMBER_9),  U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LS(DE_COMM),   &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp LS(NUMBER_0),  U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp LS(EQUAL),     &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp RA(MINUS),     U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp SLASH,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp RA(NUMBER_7),  &kp LS(NUMBER_6),  &kp LS(RBKT),      &kp LPAR,          &kp RA(NUMBER_0),  U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LS(PERIOD),    &kp LS(NUMBER_4),  &kp LS(NUMBER_5),  &kp CRRT,          &kp RBKT,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp RA(RBKT),      &kp LS(NUMBER_1),  &kp RA(Q),         &kp HASH,          &kp RA(NUHS),      U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LS(NUMBER_8),  &kp LS(NUMBER_9),  &kp LS(SLASH),     U_NA,              U_NA,              U_NA,              U_NP,              U_NP
