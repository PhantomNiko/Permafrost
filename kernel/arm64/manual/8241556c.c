/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_8241556c(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar3 = 0;
  uVar4 = 1;
  for (uVar5 = 0; uVar1 = param_2 - uVar5, uVar5 <= param_2 && uVar1 != 0; uVar5 = uVar1 + uVar5) {
    if (0x15af < uVar1) {
      uVar1 = 0x15b0;
    }
    pbVar2 = (byte *)(param_1 + uVar5);
    for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = uVar4 + *pbVar2;
      uVar3 = uVar4 + uVar3;
      pbVar2 = pbVar2 + 1;
    }
    uVar4 = uVar4 % 0xfff1;
    uVar3 = uVar3 % 0xfff1;
  }
  return uVar4 | uVar3 << 0x10;
}
