/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209f260(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  undefined8 extraout_RAX = 0;

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = recovered_2000ad0(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    recovered_205ec00((undefined8 *)param_1);
    *param_1 = 7;
    *(undefined4 **)(param_1 + 10) = puVar2;
    uVar1 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  return uVar1;
}
