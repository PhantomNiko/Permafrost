/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20a9b60(byte *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (incoming_edx == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  do {
    uVar1 = *incoming_ecx ^ uVar1;
    uVar3 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar2 = (int)(uVar1 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar3 >> 1;
    uVar1 = (int)(uVar2 << 0x1a) >> 0x1f & 0xedb88320U ^
            (int)(uVar3 << 0x1a) >> 0x1f & 0x76dc4190U ^
            (int)(uVar1 << 0x1a) >> 0x1f & 0x3b6e20c8U ^
            (int)(uVar1 << 0x1b) >> 0x1f & 0x1db71064U ^
            (int)(uVar1 << 0x1c) >> 0x1f & 0xedb8832U ^ (int)(uVar1 << 0x1d) >> 0x1f & 0x76dc419U ^
            uVar2 >> 6;
    incoming_ecx = incoming_ecx + 1;
    incoming_edx = incoming_edx + -1;
  } while (incoming_edx != 0);
  return ~uVar1;
}
