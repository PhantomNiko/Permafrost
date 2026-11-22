/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2021270(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (incoming_edx == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar3 = uVar3 + 1;
    if (0x1f < uVar3) break;
  } while ((1 << ((byte)uVar3 & 0x1f) & incoming_edx) == 0);
  uVar2 = 0;
  uVar4 = incoming_edx;
  do {
    uVar2 = uVar2 + (uVar4 & 1);
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  uVar4 = 0xffffffff;
  if (uVar2 < 0x1f) {
    uVar4 = ~(-1 << ((byte)uVar2 & 0x1f));
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((uVar4 >> 1) + ((incoming_edx & incoming_ecx) >> ((byte)uVar3 & 0x1f)) * 0xff) / uVar4;
  }
  return uVar4;
}
