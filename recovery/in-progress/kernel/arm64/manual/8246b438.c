/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246b438(undefined8 *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;

  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) {
    recovered_8246aa08(param_1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar1 = recovered_8246b258(param_1,param_2[1]);
    if ((int)uVar1 != 0) {
      lVar4 = 0;
      for (uVar5 = 0; uVar5 < (ulong)param_2[1]; uVar5 = uVar5 + 1) {
        lVar3 = *param_2;
        if (((*(char *)(lVar3 + lVar4 + 0x48) == '\x01') && (*(long *)(lVar3 + lVar4) != 0)) &&
           (uVar2 = recovered_8246b000(param_1,*(long *)(lVar3 + lVar4),lVar3 + lVar4 + 8),
           (uVar2 & 1) == 0)) {
          recovered_8246aa08(param_1);
          return 0;
        }
        lVar4 = lVar4 + 0x50;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
