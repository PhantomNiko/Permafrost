/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2023f10(int *incoming_ecx,uint incoming_edx,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0x18 < incoming_edx) {
    return 0;
  }
  uVar4 = incoming_ecx[5];
  if (uVar4 < incoming_edx) {
    uVar2 = incoming_ecx[2];
    uVar7 = uVar2;
    if (uVar2 <= (uint)incoming_ecx[1]) {
      uVar7 = incoming_ecx[1];
    }
    do {
      uVar2 = uVar2 + 1;
      if (uVar2 - uVar7 == 1) break;
      incoming_ecx[2] = uVar2;
      bVar3 = *(byte *)(*incoming_ecx + -1 + uVar2);
      bVar1 = (byte)uVar4 & 0x1f;
      uVar5 = (uint)bVar3 << ((byte)uVar4 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << bVar1 | (uint)(bVar3 >> 0x20 - bVar1);
      if ((uVar4 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      incoming_ecx[3] = incoming_ecx[3] | uVar6;
      incoming_ecx[4] = incoming_ecx[4] | uVar8;
      uVar4 = uVar4 + 8;
      incoming_ecx[5] = uVar4;
    } while (uVar4 < incoming_edx);
  }
  uVar2 = 0;
  if (incoming_edx <= uVar4) {
    bVar3 = (byte)incoming_edx;
    uVar7 = (uint)incoming_ecx[4] >> (bVar3 & 0x1f);
    uVar4 = 0;
    if ((incoming_edx & 0x20) == 0) {
      uVar4 = uVar7;
    }
    if ((incoming_edx & 0x20) == 0) {
      uVar7 = (uint)incoming_ecx[3] >> (bVar3 & 0x1f) | incoming_ecx[4] << 0x20 - (bVar3 & 0x1f);
    }
    if ((incoming_edx & 0x20) == 0) {
      uVar2 = -1 << (bVar3 & 0x1f);
    }
    *param_3 = incoming_ecx[3] & ~uVar2;
    incoming_ecx[4] = uVar4;
    incoming_ecx[3] = uVar7;
    incoming_ecx[5] = incoming_ecx[5] - incoming_edx;
    uVar2 = CONCAT31((int3)(incoming_edx >> 8),1);
  }
  return uVar2;
}
