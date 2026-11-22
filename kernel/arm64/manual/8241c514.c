/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241c514(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_8240fa98(param_2 * 0x38);
    lVar3 = 0;
    for (uVar4 = 0; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
      lVar2 = *param_1;
      *(undefined4 *)((long)pvVar1 + lVar3) = *(undefined4 *)(lVar2 + lVar3);
      recovered_824189f8((undefined8 *)((undefined4 *)((long)pvVar1 + lVar3) + 2),
                         (undefined8 *)((undefined4 *)(lVar2 + lVar3) + 2));
      recovered_82416778((undefined8 *)(*param_1 + lVar3 + 0x20));
      lVar3 = lVar3 + 0x38;
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}
