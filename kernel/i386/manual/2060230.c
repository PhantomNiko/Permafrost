/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



uint recovered_2060230(byte *in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((7 < in_EDX && in_ECX != (byte *)0x0) &&
     ((in_ECX[3] & 0xfffffffe |
      (uint)in_ECX[2] << 8 | (uint)in_ECX[1] << 0x10 | (uint)*in_ECX << 0x18) == 0xcafebabe)) {
    uVar1 = *(uint *)(in_ECX + 4);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (0x40 < uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
