/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c012c (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_020c790c (*(uint32_t volatile *)(0x223daf0U))
#define DAT_020c7910 (*(uint32_t volatile *)(0x223daf4U))
#define DAT_020c7914 (*(uint32_t volatile *)(0x223daf8U))
#define DAT_020c7918 (*(uint8_t volatile *)(0x223dafcU))
undefined4 recovered_2071bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  switch((uintptr_t)(param_3)) {
  case 0:
  case 0xf:
  case 0x10:
  case 0x18:
  case 0x20:
    DAT_020c790c = param_1;
    DAT_020c7910 = param_2;
    DAT_020c7914 = param_3;
    DAT_020c7918 = 0;
    recovered_200b180(param_1,param_2,param_3,0);
    DAT_020c012c = 0;
    uVar1 = 1;
  }
  return uVar1;
}
