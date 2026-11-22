/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_824368f8(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_82436964(param_1,param_4);
  uVar2 = recovered_82436964(param_2,param_6);
  uVar3 = recovered_82436964(param_3,param_8);
  return uVar2 << (ulong)(param_7 & 0x1f) | uVar1 << (ulong)(param_5 & 0x1f) |
         uVar3 << (ulong)(param_9 & 0x1f);
}
