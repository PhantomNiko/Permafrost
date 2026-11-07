/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82419f3c(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar3 = 4;
    if (uVar5 != 0) {
      uVar3 = uVar5 << 1;
    }
    if (uVar5 < uVar3) {
      pvVar4 = recovered_8240fa98(uVar3 << 5);
      lVar6 = 0;
      for (lVar7 = param_1[1]; lVar7 != 0; lVar7 = lVar7 + -1) {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        puVar2 = (undefined8 *)(*param_1 + lVar6);
        uVar10 = *puVar2;
        uVar9 = puVar2[3];
        uVar8 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar10;
        puVar1[3] = uVar9;
        puVar1[2] = uVar8;
        lVar6 = lVar6 + 0x20;
      }
      recovered_8240facc((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar3;
      uVar5 = param_1[1];
    }
  }
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x20);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  param_1[1] = param_1[1] + 1;
  return;
}
