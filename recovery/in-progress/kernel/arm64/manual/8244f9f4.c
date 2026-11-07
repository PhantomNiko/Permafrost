/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244f9f4(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 < param_2) {
      uVar6 = 4;
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      for (; uVar6 < param_2; uVar6 = uVar6 << 1) {
        if ((long)uVar6 < 0) {
          uVar6 = param_2;
          break;
        }
      }
      pvVar2 = recovered_82400820(*(void **)(param_1 + 0x18),uVar6 << 6);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      uVar4 = *(ulong *)(param_1 + 0x10);
      lVar5 = uVar4 << 6;
      for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        puVar1 = (undefined8 *)((long)pvVar2 + lVar5);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[5] = 0;
        lVar5 = lVar5 + 0x40;
        puVar1[7] = 0;
      }
      *(ulong *)(param_1 + 0x10) = uVar6;
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}
