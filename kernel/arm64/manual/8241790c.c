/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241790c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_8240fa98(param_2 << 5);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_8241c71c((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_82417994(*param_1 + lVar2);
      lVar2 = lVar2 + 0x20;
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}
