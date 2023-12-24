#### Source my userspace
SRC += shanec80.c
#SRC += features/achordion.c
#SRC += features/custom_shift_keys.c
SRC += features/select_word.c
#SRC += features/sentence_case.c


#### RGB Stuff  (currently n/a)
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  # Include my fancy rgb functions source here
  SRC += cool_rgb_stuff.c
endif



