#include "functions.h"
/* Pooka's Free Software License. */
bool recovered_205a8a0(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;

  uVar1 = *(uint *)(in_ECX + 0x10);
  uVar3 = 0x60000000 - uVar1;
  if (0xfff < uVar3) {
    uVar3 = 0x1000;
  }
  bVar6 = true;
  if (uVar1 < 0x60000000) {
    pbVar5 = (byte *)(*(uint *)(in_ECX + 0x1c) + uVar1);
    if (pbVar5 != (byte *)0x0) {
      uVar4 = 0;
      do {
        uVar2 = in_ECX >> 4 ^ uVar4 ^ uVar1 ^ *(uint *)(in_ECX + 0x1c);
        bVar6 = (byte)((byte)(uVar2 >> 0x18) ^ (byte)uVar2 ^
                       (byte)(uVar2 >> 0x10) ^ (byte)(uVar2 >> 8) ^ *pbVar5) == 0xa5;
        if (!bVar6) {
          return bVar6;
        }
        pbVar5 = pbVar5 + 1;
        bVar7 = uVar3 * 0x21 - 0x21 != uVar4;
        uVar4 = uVar4 + 0x21;
      } while (bVar7);
    }
  }
  return bVar6;
}
