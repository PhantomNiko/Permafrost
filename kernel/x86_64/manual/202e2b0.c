/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202e2b0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *data;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar8 = 4;
    if (uVar5 != 0) {
      uVar8 = uVar5 * 2;
    }
    if (uVar5 < uVar8) {
      pvVar4 = recovered_201cb00(uVar8 << 4);
      data = (void *)*param_1;
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          uVar6 = 0;
        }
        else {
          lVar7 = 0x10;
          uVar6 = 0;
          do {
            puVar1 = (undefined8 *)((long)data + lVar7 + -0x10);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar4 + lVar7 + -0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            uVar3 = ((undefined8 *)((long)data + lVar7))[1];
            *(undefined8 *)((long)pvVar4 + lVar7) = *(undefined8 *)((long)data + lVar7);
            ((undefined8 *)((long)pvVar4 + lVar7))[1] = uVar3;
            uVar6 = uVar6 + 2;
            lVar7 = lVar7 + 0x20;
          } while ((uVar5 & 0xfffffffffffffffe) != uVar6);
        }
        if ((uVar5 & 1) != 0) {
          puVar1 = (undefined8 *)((long)data + uVar6 * 0x10);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar4 + uVar6 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
        }
      }
      recovered_201cb60(data);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar8;
      uVar5 = param_1[1];
    }
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  param_1[1] = param_1[1] + 1;
  return;
}
