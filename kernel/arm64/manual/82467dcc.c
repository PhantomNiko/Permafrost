/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82467dcc(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;

  uVar1 = 0xffffffff;
  for (lVar2 = 0; lVar2 != param_2; lVar2 = lVar2 + 1) {
    uVar1 = uVar1 ^ *(byte *)(param_1 + lVar2);
    lVar3 = 8;
    do {
      uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return ~uVar1;
}
