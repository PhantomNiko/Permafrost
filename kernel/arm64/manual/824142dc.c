/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_824142dc(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 != 0) {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 + 1;
      if (0x1f < uVar1) break;
    } while ((1 << (ulong)(uVar1 & 0x1f) & param_2) == 0);
    uVar2 = 0;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar2 = uVar2 + (uVar3 & 1);
    }
    uVar3 = 0xffffffff;
    if (uVar2 < 0x1f) {
      uVar3 = ~(-1 << (ulong)(uVar2 & 0x1f));
    }
    if (uVar3 != 0) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (((param_2 & param_1) >> (ulong)(uVar1 & 0x1f)) * 0xff + (uVar3 >> 1)) / uVar3;
      }
      return uVar2;
    }
  }
  return 0;
}
