<<<<<<< HEAD
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
=======
# READ ME - If you want...

    Still needs some fine tuning

## Keymap(s)
* QWERTY Base Layout
* Inspired by Miryoku
* GAMING Layer removes homerow mods, replaces Grave w/ Esc, etc
* vim inspired navigation on mouse and nav layers.


### Home Row mods
* Super Key on pinkies
* Alt on ring fingers
* Shift on middle fingers
* Control on index fingers
* Hold shifts for CAPS_WORD

## Hardware
* boardsource.xyz Lulu PCBs
* Sparkfun Pro Micro 2040 Controllers
* Holy Panda (55g) on the main F-keys
* Gateron Reds on the two outer columns
* XVX Keycaps (currently)





## Future inspiration to consider:


For context, I am running a 36 key chocofi with kailh light blue switches (20g). The nice thing about these switches is that combos are super easy to activate. My layout is pretty tricked out, but some of my favorites are:

    Enter (,+.), tab (x+c), and escape (a+z) as default layer combs. I have these keys accessible in other layers as well in non-combo form as well in case I need to hit enter or tab a bunch of times.

    Using homerow combos for some modifiers. d+f and j+k are command. s+f and l+f for alt/option. s+d+f or j+k+l for command+option (which is useful for block highlighting in iterm). I really disliked miryoku style homerow mods, felt they activated on accident way too often with my roll heavy typing style. Combos make that happen much less frequently for me.

    Shifted number symbols as vertical combos on my base layer. For example, ! (q+a), @ (w+s), # (e+d), etc. Laying out these symbols means I have more space to put the remaining symbols in desirable locations and I already have the muscle memory to know where they.

    All symbols required for directory navigation in linux are available on the default layer. ~ (q+w), / (o+l) and \ (p+').

    Symbols are laid out such that the most commons symbols for programming are easy to reach. ({[ are rfv and )}] is ujm. All open symbols are on left hand, all close symbols are on right hand, so I never have any confusion on where an open or close symbol is.

    Nav layer mirrors vim default mode. Useful if you're a vim addict like me. Pretty simple mappings like hjkl for arrow keys, y for copy, p for paste, u for undo, i for getting into default layer, etc.

    Meh on space key as a mod tap. Macos recently added native shortcuts, which are super useful for app switching. meh+i is iterm, meh+m is zoom, meh+k is chrome, meh+l is slack. I have a few other meh shortcuts combined with homerow.app and bettersnap tool as well.

    Capsword on double tap shift is super useful for writing bash scripts or SQL.

    Sticky layers are super helpful for inputting a single symbol. These still work as normal modifiers when held. Double tapping the sticky layer key toggles the layer in case you need to input a long string of numbers, symbols or do a lot of navigation operations. I also have a macro that allows sticky layers to function when you are already in a higher layer. This is helpful when I accidentally toggle the symbol layer, when I actually wanted the number layer.

    F-keys are holds on my standard 10-key number layout.

>>>>>>> dev0
