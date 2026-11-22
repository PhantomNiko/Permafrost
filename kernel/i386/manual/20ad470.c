/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20ad470(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar6;
  uint uVar5;

  if (incoming_ecx == (char *)0x0) {
    return true;
  }
  cVar3 = *incoming_ecx;
  if (cVar3 != '\0') {
    pcVar1 = incoming_ecx;
    do {
      pcVar1 = pcVar1 + 1;
      if ((((9 < (byte)(cVar3 - 0x30U)) &&
           (uVar4 = CONCAT11(cVar3,cVar3) & 0xdfff, bVar6 = (char)(uVar4 >> 8) + 0xbf, 0x19 < bVar6)
           ) && (uVar5 = CONCAT11(bVar6,(char)uVar4) & 0xff, 1 < uVar5 - 0x2d)) && (uVar5 != 0x5f))
      {
        return false;
      }
      cVar3 = *pcVar1;
    } while (cVar3 != '\0');
  }
  uVar2 = recovered_2002270(incoming_ecx);
  return uVar2 < 0x40;
}
