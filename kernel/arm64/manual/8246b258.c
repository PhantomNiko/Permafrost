/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246b258(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  uVar4 = param_1[2];
  if (param_2 <= uVar4) {
    return 1;
  }
  uVar6 = 8;
  if (uVar4 != 0) {
    uVar6 = uVar4;
  }
  do {
    if (param_2 <= uVar6) {
LAB_40449204:
      pvVar2 = recovered_82400820((void *)*param_1,uVar6 * 0x50);
      uVar3 = 0;
      if (pvVar2 != (void *)0x0) {
        uVar4 = param_1[2];
        lVar5 = uVar4 * 0x50;
        for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
          puVar1 = (undefined8 *)((long)pvVar2 + lVar5);
          puVar1[1] = 0;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          puVar1[3] = 0;
          puVar1[5] = 0;
          puVar1[7] = 0;
          puVar1[6] = 0;
          puVar1[8] = 0;
          *(undefined1 *)(puVar1 + 9) = 0;
          lVar5 = lVar5 + 0x50;
        }
        *param_1 = (long)pvVar2;
        param_1[2] = uVar6;
        uVar3 = 1;
      }
      return uVar3;
    }
    if ((long)uVar6 < 0) {
      uVar6 = param_2;
      goto LAB_40449204;
    }
    uVar6 = uVar6 << 1;
  } while( true );
}
