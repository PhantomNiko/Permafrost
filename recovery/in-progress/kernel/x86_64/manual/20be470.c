/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20be470(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  if (*(long *)(param_1 + 8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      recovered_205ec00((undefined8 *)(*(long *)(param_1 + 0x18) + lVar3));
      lVar2 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar4 < *(ulong *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}
