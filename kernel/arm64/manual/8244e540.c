/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244e540(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 uVar2;

  if ((param_1 == (undefined4 *)0x0) ||
     (puVar1 = recovered_82400744(0x20), puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    recovered_8243166c((undefined8 *)param_1);
    *param_1 = 8;
    *(undefined4 **)(param_1 + 0xc) = puVar1;
  }
  return uVar2;
}
