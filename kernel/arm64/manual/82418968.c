/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82418968(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar2 = recovered_8240fa98(param_2 * 0xc);
    lVar3 = 0;
    uVar5 = param_1[1];
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
      uVar1 = *(undefined4 *)((undefined8 *)(*param_1 + lVar3) + 1);
      *(undefined8 *)((long)pvVar2 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
      *(undefined4 *)((undefined8 *)((long)pvVar2 + lVar3) + 1) = uVar1;
      lVar3 = lVar3 + 0xc;
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = (long)pvVar2;
    param_1[2] = param_2;
  }
  return;
}
