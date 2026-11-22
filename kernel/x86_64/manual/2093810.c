/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d5918 (*(uint8_t volatile *)(0x21765a0U))
#define DAT_020de778 (*(uint32_t volatile *)(0x226c160U))
#define DAT_020de77c (*(uint32_t volatile *)(0x226c164U))
#define DAT_020de780 (*(uint32_t volatile *)(0x226c168U))
#define DAT_020de784 (*(uint8_t volatile *)(0x226c16cU))
uint recovered_2093810(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((param_3 < 0x21) && ((0x101018001U >> ((ulong)param_3 & 0x3f) & 1) != 0)) {
    DAT_020de778 = param_1;
    DAT_020de77c = param_2;
    DAT_020de780 = param_3;
    DAT_020de784 = param_4;
    recovered_200c210(param_1,param_2,param_3,param_4);
    DAT_020d5918 = 0;
    uVar1 = 1;
  }
  return uVar1;
}
