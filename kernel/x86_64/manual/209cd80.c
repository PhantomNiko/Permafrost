/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_209cd80(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;

  if (((param_1 == (byte *)0x0) || (bVar2 = *param_1, bVar2 == 0)) ||
     ((0x19 < (byte)((bVar2 & 0xdf) + 0xbf) && ((bVar2 != 0x5f && (bVar2 != 0x24)))))) {
    return '\0';
  }
  bVar2 = param_1[1];
  if (bVar2 == 0) {
    return '\x01';
  }
  pbVar3 = param_1 + 2;
  do {
    bVar4 = (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a;
    bVar5 = (byte)(bVar2 - 0x30U) < 10;
    bVar1 = (bVar2 == 0x2e || bVar2 == 0x24) || ((bVar2 == 0x5f || bVar5) || bVar4);
    if ((bVar2 != 0x2e && bVar2 != 0x24) && ((bVar2 != 0x5f && !bVar5) && !bVar4)) {
      return bVar1;
    }
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  return bVar1;
}
