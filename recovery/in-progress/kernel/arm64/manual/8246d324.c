/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define iStack_24 (*(int *)(frame + 28))
void recovered_8246d324(long param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  iStack_24 = 0;
  if ((((*(byte *)(param_1 + 8) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x10) == 0)) &&
     (uVar2 = *(uint *)(param_1 + 0x14), uVar2 != 0)) {
    if (0xfff < uVar2) {
      uVar2 = 0x1000;
    }
    uVar1 = recovered_82402e80(*(int *)(param_1 + 0xc),0,uVar2,&iStack_24);
    if ((int)uVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
      *(int *)(param_1 + 0x18) = iStack_24;
      *(uint *)(param_1 + 0x1c) = uVar2;
    }
  }
  return;
}
