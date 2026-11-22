/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a26f3 (*(uint8_t *)(0x20ec517U))
#define str_020a26f6 (*(char (*)[1])(0x20ec51aU))
#define str_020a2703 (*(char (*)[1])(0x20ec527U))
#define str_020a270d (*(char (*)[1])(0x20ec531U))
#define str_020a2721 (*(char (*)[1])(0x20ece3cU))
#define str_020a272f (*(char (*)[1])(0x20ec545U))
#define str_020a2741 (*(char (*)[1])(0x20ec557U))
#define str_020a274d (*(char (*)[1])(0x20ec563U))
#define str_020a275e (*(char (*)[1])(0x20ec574U))
char * recovered_201c8b0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_020a26f3;
  default:
    return str_020a275e;
  case 2:
    return str_020a26f6;
  case 5:
    return str_020a2703;
  case 9:
    return str_020a270d;
  case 0xc:
    return str_020a2721;
  case 0xd:
    return str_020a272f;
  case 0x11:
    return str_020a2741;
  case 0x16:
    return str_020a274d;
  }
}
