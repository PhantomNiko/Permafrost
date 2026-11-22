/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a4d0 (*(uint32_t volatile *)(0x8248ad40U))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
undefined8 recovered_8240f600(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 uVar2;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_4045a4d0 = 0x16;
  }
  else {
    recovered_82400b14(&uStack_2c,0,0xc);
    uVar1 = recovered_8240ef90(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar1 = recovered_8240f69c(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_8240f5bc(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      uVar2 = 5;
    }
    DAT_4045a4d0 = uVar2;
  }
  return 0xffffffff;
}
