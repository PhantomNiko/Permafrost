/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20d35d0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;
  byte bVar3;

  if (param_1 == (byte *)0x0) {
    return '\x01';
  }
  bVar3 = *param_1;
  if (bVar3 != 0) {
    pbVar1 = param_1;
    do {
      pbVar1 = pbVar1 + 1;
      if (((9 < (byte)(bVar3 - 0x30U)) && (0x19 < (byte)((bVar3 & 0xdf) + 0xbf))) &&
         ((0x32 < bVar3 - 0x2d || ((0x4000000000003U >> ((ulong)(bVar3 - 0x2d) & 0x3f) & 1) == 0))))
      {
        return '\0';
      }
      bVar3 = *pbVar1;
    } while (bVar3 != 0);
  }
  uVar2 = recovered_2002e80((char *)param_1);
  return uVar2 < 0x40;
}
