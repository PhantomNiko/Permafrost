/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
undefined8 recovered_8244f838(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  uVar5 = 0;
  if (param_1 != (long *)0x0) {
    uVar2 = param_1[1];
    uVar6 = *param_1 + 1;
    if (uVar2 < uVar6) {
      uVar8 = 8;
      if (uVar2 != 0) {
        uVar8 = uVar2;
      }
      for (; uVar8 < uVar6; uVar8 = uVar8 << 1) {
        if ((long)uVar8 < 0) {
          uVar8 = uVar6;
          break;
        }
      }
      pvVar3 = recovered_82400820((void *)param_1[2],uVar8 << 3);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      for (uVar6 = param_1[1]; uVar6 < uVar8; uVar6 = uVar6 + 1) {
        *(undefined8 *)((long)pvVar3 + uVar6 * 8) = 0;
      }
      param_1[1] = uVar8;
      param_1[2] = (long)pvVar3;
    }
    puVar1 = &DAT_4044e204;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    lVar4 = recovered_8244a904((long)puVar1,param_3);
    uVar5 = 0;
    if (lVar4 != 0) {
      lVar7 = *param_1;
      *param_1 = lVar7 + 1;
      *(long *)(param_1[2] + lVar7 * 8) = lVar4;
      uVar5 = 1;
    }
  }
  return uVar5;
}
