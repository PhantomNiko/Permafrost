/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82466da8(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_82400b14((void *)param_1,0,0x44);
    recovered_82400928((void *)param_1,(void *)param_2,8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 4) {
      *(undefined4 *)(param_1 + 0x34 + lVar1) = *(undefined4 *)(param_2 + 0x34 + lVar1);
    }
  }
  return;
}
