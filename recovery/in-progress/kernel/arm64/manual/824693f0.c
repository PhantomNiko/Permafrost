/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define aiStack_220 (*(int (*)[128])(frame + 80))
#define auStack_258 (*(undefined8 (*)[7])(frame + 24))
undefined8 recovered_824693f0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((param_2 < 0xffffffbf) && (0x41 < (uint)param_3)) {
    uVar1 = recovered_8243843c(param_1,(ulong)(param_2 + 0x41),(long)aiStack_220,0x200);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = recovered_8246666c(aiStack_220,(uint)param_3,auStack_258);
    }
  }
  return uVar1;
}
