/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20bd5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_2004700();
  if (param_5 != (uint *)0x0) {
    uVar2 = uVar1;
    if ((int)uVar1 < 1) {
      uVar2 = 0;
    }
    *param_5 = uVar2;
  }
  return ~uVar1 >> 0x1f;
}
