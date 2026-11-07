/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined2 recovered_207aa30(byte *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;

  if (((incoming_ecx == (byte *)0x0) || (bVar3 = *incoming_ecx, bVar3 == 0)) ||
     ((0x19 < (byte)((bVar3 & 0xdf) + 0xbf) && ((bVar3 != 0x5f && (bVar3 != 0x24)))))) {
    return 0;
  }
  bVar3 = incoming_ecx[1];
  if (bVar3 == 0) {
    return 1;
  }
  pbVar2 = incoming_ecx + 2;
  do {
    bVar4 = (byte)((bVar3 & 0xdf) + 0xbf) < 0x1a;
    bVar5 = (byte)(bVar3 - 0x30U) < 10;
    uVar1 = CONCAT11(bVar5,(bVar3 == 0x2e || bVar3 == 0x24) || ((bVar3 == 0x5f || bVar5) || bVar4));
    if ((bVar3 != 0x2e && bVar3 != 0x24) && ((bVar3 != 0x5f && !bVar5) && !bVar4)) {
      return uVar1;
    }
    bVar3 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar3 != 0);
  return uVar1;
}
