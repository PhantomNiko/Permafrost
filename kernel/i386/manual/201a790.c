/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208e4e4 (*(char (*)[1])(0x20c520eU))
undefined4 recovered_201a790(byte *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (incoming_edx < 0x12) {
    return 0;
  }
  if (((0x19 < incoming_edx) &&
      (iVar4 = recovered_2001ff0(incoming_ecx + (incoming_edx - 0x12),str_0208e4e4,0x11), iVar4 == 0
      )) && ((incoming_ecx + incoming_edx)[-1] == 0)) {
    return CONCAT31((int3)((uint)(incoming_ecx + incoming_edx) >> 8),1);
  }
  bVar1 = incoming_ecx[1];
  if (bVar1 < 2) {
    bVar2 = incoming_ecx[2];
    uVar7 = (uint)bVar2;
    if (((byte)(bVar2 - 0xb) < 0xfe && (byte)(bVar2 - 4) < 0xfd) && bVar2 != 0xb) {
      return 0;
    }
    if (*(short *)(incoming_ecx + 0xc) == 0) {
      return 0;
    }
    if (*(short *)(incoming_ecx + 0xe) == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(incoming_ecx + 5);
    if (bVar1 != 0 || uVar3 == 0) {
      uVar5 = (uint)incoming_ecx[0x10];
      if (bVar1 == 1) {
        if (uVar3 == 0) {
          return 0;
        }
        uVar6 = incoming_ecx[7] - 0xf;
        if (0x11 < uVar6) {
          return 0;
        }
        if ((0x20203U >> (uVar6 & 0x1f) & 1) == 0) {
          return 0;
        }
      }
      if (7 < bVar2) {
        uVar7 = uVar7 - 8;
      }
      if (uVar7 == 3) {
        if ((uVar5 != 0x10) && (uVar5 != 8)) {
          return 0;
        }
      }
      else if (uVar7 == 2) {
        if (0x11 < uVar5 - 0xf) {
          return 0;
        }
        if ((0x20203U >> (uVar5 - 0xf & 0x1f) & 1) == 0) {
          return 0;
        }
      }
      else if (((uVar7 == 1) && (uVar5 != 8)) && (uVar5 != 0x10)) {
        return 0;
      }
      if (bVar1 == 1) {
        iVar4 = (incoming_ecx[7] + 7 >> 3) * (uint)uVar3;
      }
      else {
        iVar4 = 0;
      }
      uVar7 = *incoming_ecx + 0x12 + iVar4;
      return CONCAT31((int3)(uVar7 >> 8),uVar7 < incoming_edx);
    }
  }
  return 0;
}
