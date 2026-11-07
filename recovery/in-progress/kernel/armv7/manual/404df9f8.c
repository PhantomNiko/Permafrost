/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define in_stack_00000000 (*(uint * *)(frame + 32))
uint recovered_404df9f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint extraout_r2 = 0;
  uint uVar2;

  uVar1 = recovered_40404c90();
  uVar2 = extraout_r2;
  if (in_stack_00000000 != (uint *)0x0) {
    uVar2 = uVar1 & ~((int)uVar1 >> 0x1f);
  }
  if (in_stack_00000000 != (uint *)0x0) {
    *in_stack_00000000 = uVar2;
  }
  return ~uVar1 >> 0x1f;
}
