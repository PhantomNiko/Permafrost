/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_205cbe0(int incoming_ecx,uint incoming_edx,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_4 != (uint *)0x0 && (param_3 != (uint *)0x0 && incoming_ecx != 0)) {
    uVar10 = *param_3;
    uVar3 = 0;
    if (incoming_edx <= uVar10) {
      return 0;
    }
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar10 = uVar10 + 1;
      *param_3 = uVar10;
      bVar1 = *(byte *)(incoming_ecx + -1 + uVar10);
      uVar7 = CONCAT11(bVar1,bVar1) & 0xffffff7f;
      if ((0x3f < uVar4) && ((char)uVar7 != '\0')) {
        return 0;
      }
      bVar2 = (byte)uVar4 & 0x1f;
      uVar8 = (bVar1 & 0x7f) << ((byte)uVar4 & 0x1f);
      uVar5 = (bVar2 == 0 ? 0 : (0 << bVar2 | (bVar1 & 0x7f) >> 0x20 - bVar2));
      uVar9 = uVar8;
      if ((uVar4 & 0x20) != 0) {
        uVar9 = 0;
        uVar5 = uVar8;
      }
      uVar6 = uVar6 | uVar9;
      uVar3 = uVar3 | uVar5;
      if (-1 < (char)(uVar7 >> 8)) {
        *param_4 = uVar6;
        param_4[1] = uVar3;
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      uVar4 = uVar4 + 7;
    } while ((1 - incoming_edx) + uVar10 != 1);
  }
  return 0;
}
