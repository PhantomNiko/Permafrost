/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0000000040400054 (*(uint *)(0x82400054U))
#define _DAT_0000000040400058 (*(int *)(0x82400058U))
undefined8 recovered_82404d24(undefined8 param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = recovered_82402308();
    if (bVar1) {
      uVar2 = recovered_82403e04((uint)param_1,param_2);
      return uVar2;
    }
    _DAT_0000000040400058 = 0;
    _DAT_0000000040400054 = (uint)param_1;
    uVar3 = recovered_8240004c();
    uVar2 = 0;
    if (((int)uVar3 != 0) && (_DAT_0000000040400058 != 0)) {
      *param_2 = _DAT_0000000040400058;
      uVar2 = 1;
    }
  }
  return uVar2;
}
