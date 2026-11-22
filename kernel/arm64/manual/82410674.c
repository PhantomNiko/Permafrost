/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_4044e423 (*(char (*)[1])(0x82473b28U))
bool recovered_82410674(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;

  if (param_2 < 0x12) {
    return false;
  }
  if (((0x19 < param_2) &&
      (iVar5 = recovered_82400bb4(param_1 + (param_2 - 0x12),str_4044e423,0x11), iVar5 == 0)) &&
     (param_1[param_2 - 1] == 0)) {
    return true;
  }
  bVar1 = param_1[1];
  if (bVar1 < 2) {
    uVar7 = (uint)param_1[2];
    if ((((uVar7 == 0xb || 0xfffffffd < uVar7 - 0xb) || 0xfffffffc < uVar7 - 4) &&
        *(short *)(param_1 + 0xc) != 0) && *(short *)(param_1 + 0xe) != 0) {
      uVar4 = *(ushort *)(param_1 + 5);
      bVar2 = param_1[7];
      bVar3 = param_1[0x10];
      if ((bVar1 != 0) || (uVar4 == 0)) {
        if (bVar1 == 1) {
          if (uVar4 == 0) {
            return false;
          }
          if (0x20 < bVar2) {
            return false;
          }
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x101018000U) == 0) {
            return false;
          }
        }
        uVar8 = (uint)param_1[2];
        uVar7 = uVar8 - 8;
        if (uVar8 < 8) {
          uVar7 = uVar8;
        }
        if (uVar7 == 3) {
          if (bVar3 != 0x10 && bVar3 != 8) {
            return false;
          }
        }
        else if (uVar7 == 2) {
          if (0x20 < bVar3) {
            return false;
          }
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x101018000U) == 0) {
            return false;
          }
        }
        else if ((uVar7 == 1 && bVar3 != 8) && bVar3 != 0x10) {
          return false;
        }
        lVar6 = ((ulong)bVar2 + 7 >> 3) * (ulong)uVar4;
        if (bVar1 != 1) {
          lVar6 = 0;
        }
        return (ulong)*param_1 + lVar6 + 0x12 < param_2;
      }
    }
  }
  return false;
}
