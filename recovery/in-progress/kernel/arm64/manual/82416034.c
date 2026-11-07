/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82416034(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_8240fa98(param_2 << 4);
    lVar2 = 0;
    uVar4 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar5 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)((long)pvVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)((long)pvVar1 + lVar2) = uVar5;
      lVar2 = lVar2 + 0x10;
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}
