/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined8 recovered_20627e0(uint *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (in_EDX == 0) {
    uVar1 = *in_ECX;
    uVar2 = in_ECX[1];
    return CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                    uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
    ;
  }
  return *(undefined8 *)in_ECX;
}
