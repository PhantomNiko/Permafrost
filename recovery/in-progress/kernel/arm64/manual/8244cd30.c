/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8244cd30(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  byte *pbVar4;
  byte *pbVar3;
  uint uVar5;

  bVar2 = false;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    if ((bVar1 == 0) ||
       (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf) && (bVar1 != 0x5f)) && (bVar1 != 0x24)))) {
      return false;
    }
    pbVar4 = param_1 + 1;
    do {
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar4;
      bVar2 = bVar1 == 0;
      if (bVar1 == 0) {
        return true;
      }
      uVar5 = (uint)bVar1;
      pbVar4 = pbVar3;
    } while (((uVar5 == 0x2e) || (uVar5 == 0x24)) ||
            ((bVar1 == 0x5f || uVar5 - 0x30 < 10) || (uVar5 & 0xffffffdf) - 0x41 < 0x1a));
  }
  return bVar2;
}
