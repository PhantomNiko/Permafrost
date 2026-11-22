/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(uint *)(frame + 24))


undefined4 recovered_2041f60(char *in_ECX,uint *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (in_EDX == (uint *)0x0 || in_ECX == (char *)0x0) {
    return 0;
  }
  bVar5 = *in_ECX - 0x30;
  uVar6 = CONCAT11(*in_ECX,bVar5);
  uVar8 = 0;
  if (9 < bVar5) {
    return 0;
  }
  pcVar4 = in_ECX + 4;
  do {
    pcVar3 = pcVar4;
    uVar8 = ((uVar6 >> 8) - 0x30) + uVar8 * 10;
    if (0xff < uVar8) {
      return 0;
    }
    cVar1 = pcVar3[-3];
    bVar5 = (byte)uVar6;
    uVar6 = CONCAT11(cVar1,bVar5);
    pcVar4 = pcVar3 + 1;
  } while ((byte)(cVar1 - 0x30U) < 10);
  if (cVar1 == '.' && bVar5 < 10) {
    bVar5 = pcVar3[-2] - 0x30;
    uVar6 = CONCAT11(pcVar3[-2],bVar5);
    uVar9 = 0;
    if (9 < bVar5) {
      return 0;
    }
    do {
      pcVar3 = pcVar4;
      uVar9 = ((uVar6 >> 8) - 0x30) + uVar9 * 10;
      if (0xff < uVar9) {
        return 0;
      }
      cVar1 = pcVar3[-2];
      bVar5 = (byte)uVar6;
      uVar6 = CONCAT11(cVar1,bVar5);
      pcVar4 = pcVar3 + 1;
    } while ((byte)(cVar1 - 0x30U) < 10);
    if (cVar1 == '.' && bVar5 < 10) {
      bVar5 = pcVar3[-1] - 0x30;
      uVar7 = (uint)CONCAT11(bVar5,pcVar3[-1]);
      local_18 = 0;
      if (9 < bVar5) {
        return 0;
      }
      do {
        pcVar3 = pcVar4;
        local_18 = ((uVar7 & 0xff) - 0x30) + local_18 * 10;
        if (0xff < local_18) {
          return 0;
        }
        bVar2 = pcVar3[-1];
        uVar7 = (uint)bVar2;
        pcVar4 = pcVar3 + 1;
      } while ((byte)(bVar2 - 0x30U) < 10);
      if (bVar2 == 0x2e && bVar5 < 10) {
        bVar5 = *pcVar3 - 0x30;
        uVar6 = CONCAT11(bVar5,*pcVar3);
        uVar7 = 0;
        if (9 < bVar5) {
          return 0;
        }
        do {
          uVar7 = ((uVar6 & 0xff) - 0x30) + uVar7 * 10;
          if (0xff < uVar7) {
            return 0;
          }
          cVar1 = *pcVar4;
          uVar6 = CONCAT11(cVar1 - 0x30U,cVar1);
          pcVar4 = pcVar4 + 1;
        } while ((byte)(cVar1 - 0x30U) < 10);
        if (cVar1 == '\0' && bVar5 < 10) {
          *in_EDX = uVar9 * 0x10000 | uVar8 * 0x1000000 | local_18 * 0x100 | uVar7;
          return CONCAT31((int3)(uVar7 >> 8),1);
        }
      }
    }
  }
  return 0;
}
#undef local_18
