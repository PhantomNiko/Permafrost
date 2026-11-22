/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2028f70(uint param_1,uint param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    do {
      uVar2 = uVar2 + 1;
      if (0x1f < uVar2) break;
    } while ((1 << ((byte)uVar2 & 0x1f) & param_2) == 0);
    uVar3 = 0;
    uVar4 = param_2;
    do {
      uVar3 = uVar3 + (uVar4 & 1);
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
    uVar4 = ~(-1 << ((byte)uVar3 & 0x1f));
    if (0x1e < uVar3) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 != 0) {
      return (uchar)(((uVar4 >> 1) + ((param_2 & param_1) >> ((byte)uVar2 & 0x1f)) * 0xff) / uVar4);
    }
  }
  return '\0';
}
