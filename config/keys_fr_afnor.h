/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ @ │ à │ é │ è │ ê │ ( │ ) │ ' │ ' │ « │ » │ ' │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ - │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ / │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ . │ , │ : │ ; │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_AT   GRAVE // @
#define FR_AGRV N1    // à
#define FR_EACU N2    // é
#define FR_EGRV N3    // è
#define FR_ECIR N4    // ê
#define FR_LPRN N5    // (
#define FR_RPRN N6    // )
#define FR_LSQU N7    // '
#define FR_RSQU N8    // '
#define FR_LDAQ N9    // «
#define FR_RDAQ N0    // »
#define FR_QUOT MINUS // '
#define FR_DCIR EQUAL // ^ (dead)
// Row 2
#define FR_A    Q    // A
#define FR_Z    W    // Z
#define FR_E    E    // E
#define FR_R    R    // R
#define FR_T    T    // T
#define FR_Y    Y    // Y
#define FR_U    U    // U
#define FR_I    I    // I
#define FR_O    O    // O
#define FR_P    P    // P
#define FR_MINS LBKT // -
#define FR_PLUS RBKT // +
// Row 3
#define FR_Q    A    // Q
#define FR_S    S    // S
#define FR_D    D    // D
#define FR_F    F    // F
#define FR_G    G    // G
#define FR_H    H    // H
#define FR_J    J    // J
#define FR_K    K    // K
#define FR_L    L    // L
#define FR_M    SEMI // M
#define FR_SLSH SQT  // /
#define FR_ASTR NUHS // *
// Row 4
#define FR_LABK NUBS  // <
#define FR_W    Z     // W
#define FR_X    X     // X
#define FR_C    C     // C
#define FR_V    V     // V
#define FR_B    B     // B
#define FR_N    N     // N
#define FR_DOT  M     // .
#define FR_COMM COMMA // ,
#define FR_COLN DOT   // :
#define FR_SCLN FSLH  // ;

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ " │ ¨ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ – │ ± │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ \ │ ½ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ ! │ … │ = │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_HASH LS(FR_AT)   // #
#define FR_1    LS(FR_AGRV) // 1
#define FR_2    LS(FR_EACU) // 2
#define FR_3    LS(FR_EGRV) // 3
#define FR_4    LS(FR_ECIR) // 4
#define FR_5    LS(FR_LPRN) // 5
#define FR_6    LS(FR_RPRN) // 6
#define FR_7    LS(FR_LSQU) // 7
#define FR_8    LS(FR_RSQU) // 8
#define FR_9    LS(FR_LDAQ) // 9
#define FR_0    LS(FR_RDAQ) // 0
#define FR_DQUO LS(FR_QUOT) // "
#define FR_DIAE LS(FR_DCIR) // ¨ (dead)
// Row 2
#define FR_NDSH LS(FR_MINS) // –
#define FR_PLMN LS(FR_PLUS) // ±
// Row 3
#define FR_BSLS LS(FR_SLSH) // (backslash)
#define FR_HALF LS(FR_ASTR) // ½
// Row 4
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_DOT)  // ?
#define FR_EXLM LS(FR_COMM) // !
#define FR_ELLP LS(FR_COLN) // …
#define FR_EQL  LS(FR_SCLN) // =

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ˘ │ § │ ´ │ ` │ & │ [ │ ] │ ¯ │ _ │ " │ " │ ° │ ˇ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ æ │ £ │ € │ ® │ { │ } │ ù │ ˙ │ œ │ % │ − │ † │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ θ │ ß │ $ │ ¤ │ µ │ Eu│   │ ∕ │ | │ ∞ │ ÷ │ × │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≤ │ ʒ │ © │ ç │ ¸ │ − │ ~ │ ¿ │ ¡ │ · │ ≃ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_BREV RA(FR_AT)   // ˘ (dead)
#define FR_SECT RA(FR_AGRV) // §
#define FR_ACUT RA(FR_EACU) // ´ (dead)
#define FR_GRV  RA(FR_EGRV) // ` (dead)
#define FR_AMPR RA(FR_ECIR) // &
#define FR_LBRC RA(FR_LPRN) // [
#define FR_RBRC RA(FR_RPRN) // ]
#define FR_MACR RA(FR_LSQU) // ¯ (dead)
#define FR_UNDS RA(FR_RSQU) // _
#define FR_LDQU RA(FR_LDAQ) // "
#define FR_RDQU RA(FR_RDAQ) // "
#define FR_DEG  RA(FR_QUOT) // °
#define FR_CARN RA(FR_DCIR) // ˇ (dead)
// Row 2
#define FR_AE   RA(FR_A)    // æ
#define FR_PND  RA(FR_Z)    // £
#define FR_EURO RA(FR_E)    // €
#define FR_REGD RA(FR_R)    // ®
#define FR_LCBR RA(FR_T)    // {
#define FR_RCBR RA(FR_Y)    // }
#define FR_UGRV RA(FR_U)    // ù
#define FR_DOTA RA(FR_I)    // ˙ (dead)
#define FR_OE   RA(FR_O)    // œ
#define FR_PERC RA(FR_P)    // %
#define FR_MMNS RA(FR_MINS) // −
#define FR_DAGG RA(FR_PLUS) // †
// Row 3
#define FR_THET RA(FR_Q)    // θ
#define FR_SS   RA(FR_S)    // ß
#define FR_DLR  RA(FR_D)    // $
#define FR_CURR RA(FR_F)    // ¤ (dead monetary key)
#define FR_DGRK RA(FR_G)    // µ (dead Greek key)
#define FR_EU   RA(FR_H)    // Eu (dead European symbol key)
#define FR_DSLS RA(FR_K)    // ∕ (dead)
#define FR_PIPE RA(FR_L)    // |
#define FR_INFN RA(FR_M)    // ∞
#define FR_DIV  RA(FR_SLSH) // ÷
#define FR_MUL  RA(FR_ASTR) // ×
// Row 4
#define FR_LEQL RA(FR_LABK) // ≤
#define FR_EZH  RA(FR_W)    // ʒ
#define FR_COPY RA(FR_X)    // ©
#define FR_CCED RA(FR_C)    // ç
#define FR_CEDL RA(FR_V)    // ¸ (dead)
#define FR_DMNS RA(FR_B)    // − (dead)
#define FR_DTIL RA(FR_N)    // ~ (dead)
#define FR_IQUE RA(FR_DOT)  // ¿
#define FR_IEXL RA(FR_COMM) // ¡
#define FR_MDDT RA(FR_COLN) // ·
#define FR_AEQL RA(FR_SCLN) // ≃

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ̑  │   │   │   │   │ ˝ │ ̏  │   │ — │ ‹ │ › │ ˚ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │ ™ │   │   │ ̣  │   │ ‰ │ ‑ │ ‡ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │ ˍ │   │   │   │   │ √ │ ¼ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≥ │   │   │   │ ˛ │   │   │   │ ̦  │   │ ≠ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_IBRV LS(RA(FR_AT))   // ̑ (dead)
#define FR_DACU LS(RA(FR_LPRN)) // ˝ (dead)
#define FR_DGRV LS(RA(FR_RPRN)) // ̏ (dead)
#define FR_MDSH LS(RA(FR_RSQU)) // —
#define FR_LSAQ LS(RA(FR_LDAQ)) // ‹
#define FR_RSAQ LS(RA(FR_RDAQ)) // ›
#define FR_RNGA LS(RA(FR_QUOT)) // ˚ (dead)
// Row 2
#define FR_TM   LS(RA(FR_T))    // ™
#define FR_DOTB LS(RA(FR_I))    // ̣ (dead)
#define FR_PERM LS(RA(FR_P))    // ‰
#define FR_NBHY LS(RA(FR_MINS)) // ‑ (non-breaking hyphen)
#define FR_DDAG LS(RA(FR_PLUS)) // ‡
// Row 3
#define FR_MACB LS(RA(FR_H))    // ˍ (dead)
#define FR_SQRT LS(RA(FR_SLSH)) // √
#define FR_QRTR LS(RA(FR_ASTR)) // ¼
// Row 4
#define FR_GEQL LS(RA(FR_LABK)) // ≥
#define FR_OGON LS(RA(FR_V))    // ˛ (dead)
#define FR_DCMM LS(RA(FR_COMM)) // ̦ (dead)
#define FR_NEQL LS(RA(FR_SCLN)) // ≠
