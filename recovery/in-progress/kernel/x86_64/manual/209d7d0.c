/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
uint recovered_209d7d0(int param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;

  if (param_1 - 1U < 2) {
    lVar1 = DAT_020e60e0;
    uVar2 = DAT_020e60f0;
    uVar2 = DAT_020e60f0;
    lVar3 = DAT_020e60f0;
    plVar5 = (long *)(lVar1 * 0x18 + lVar3 + -0x18);
    if (plVar5 != (long *)0x0 && lVar1 != 0) {
      uVar4 = recovered_20df440(plVar5,param_2,(long)param_3);
      return uVar4;
    }
  }
  uVar4 = recovered_20a0540(param_2,param_3);
  return uVar4;
}
