I wanted to attempt to mimic a Miryoku-like layout on the Lily58

Fortunatly, I found: 

https://github.com/HanLap/qmk_firmware/blob/0de5b3119c68fc93fe578ba920c9d6a91b96b21e/keyboards/moonlander/keymaps/smolboi_miryoku/

Basically everything I've done is a fork from this.

These are added to keymap.c


keymap.c   

#define MY_AGUI MT(MOD_LGUI, KC_A)
#define MY_SALT MT(MOD_LALT, KC_S)
#define MY_DSFT MT(MOD_LSFT, KC_D)
#define MY_FCTL MT(MOD_LCTL, KC_F)

#define MY_JCTL MT(MOD_RCTL, KC_J)
#define MY_KSFT MT(MOD_RSFT, KC_K)
#define MY_LALT MT(MOD_LALT, KC_L)
#define MY_CGUI MT(MOD_RGUI, KC_SCLN)

#define MY_ESC MT(MOD_LCTL, KC_ESCAPE)

#define TG_MEDI LT(MEDI, KC_ESC )
#define TG_NAV  LT(NAV , KC_SPC )
#define TG_MOUS LT(MOUS, KC_TAB )

#define TG_SYMB LT(SYMB, KC_ENT )
#define TG_NUM  LT(NUM , KC_BSPC)
#define TG_FUN  LT(FUN , KC_DEL )

#define TG_BUTN LT(BUTN, KC_Z   )
