/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_207baa0(long param_1,long param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;

  if ((param_2 == 0 || param_1 == 0) || (uVar10 = (ulong)*(uint *)(param_1 + 0x4f0), uVar10 == 0)) {
    return 0;
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x4f8);
  if ((uVar12 == 0) || (lVar2 = *(long *)(param_1 + 0x30), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x38);
    uVar3 = 0;
    if (uVar10 <= uVar11) {
      lVar1 = (ulong)*(byte *)(param_1 + 4) * 4 + 0xc;
      uVar9 = *(uint *)(param_1 + 0x4f4);
      uVar7 = (ulong)uVar9;
      if ((ulong)((int)lVar1 * uVar9) <= uVar11 - uVar10) {
        uVar3 = 0;
        if ((uVar12 <= uVar11) && ((ulong)*(uint *)(param_1 + 0x4fc) <= uVar11 - uVar12)) {
          if (uVar9 != 0) {
            pbVar13 = (byte *)(uVar10 + lVar2 + 0xf);
            uVar10 = 0;
            do {
              if (*(char *)(param_1 + 5) == '\x01') {
                uVar3 = *(uint *)(pbVar13 + -0xf);
                uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18;
                bVar8 = pbVar13[-0xb];
                if (*(char *)(param_1 + 4) == '\0') {
                  uVar9 = (uint)pbVar13[-4] |
                          (uint)pbVar13[-5] << 8 |
                          (uint)pbVar13[-6] << 0x10 | (uint)pbVar13[-7] << 0x18;
LAB_02054570:
                  uVar11 = (ulong)uVar9;
                }
                else {
                  uVar11 = (ulong)*pbVar13 |
                           (ulong)pbVar13[-1] << 8 |
                           (ulong)pbVar13[-2] << 0x10 |
                           (ulong)pbVar13[-3] << 0x18 |
                           (ulong)pbVar13[-4] << 0x20 |
                           (ulong)pbVar13[-5] << 0x28 |
                           (ulong)pbVar13[-6] << 0x30 | (ulong)pbVar13[-7] << 0x38;
                }
              }
              else {
                uVar3 = *(uint *)(pbVar13 + -0xf);
                bVar8 = pbVar13[-0xb];
                if (*(char *)(param_1 + 4) == '\0') {
                  uVar9 = *(uint *)(pbVar13 + -7);
                  goto LAB_02054570;
                }
                uVar11 = *(ulong *)(pbVar13 + -7);
              }
              if ((((bVar8 & 1) != 0 && bVar8 < 0x20) && ((bVar8 & 0xe) != 0)) &&
                 (uVar3 < *(uint *)(param_1 + 0x4fc))) {
                iVar4 = recovered_2002eb0((char *)((ulong)uVar3 + uVar12 + lVar2),(char *)param_2);
                if (iVar4 == 0) {
                  if ((bVar8 & 0xe) == 0xe) {
                    uVar11 = uVar11 + *(uint *)(param_1 + 8);
                  }
                  uVar5 = (undefined7)((ulong)param_3 >> 8);
                  if (uVar11 >> 0x20 == 0) {
                    *param_3 = (int)uVar11;
                    bVar8 = 1;
                    bVar6 = 1;
                  }
                  else {
                    bVar8 = 1;
                    bVar6 = 0;
                  }
                  goto LAB_020545dc;
                }
                uVar7 = (ulong)*(uint *)(param_1 + 0x4f4);
              }
              uVar10 = uVar10 + 1;
              pbVar13 = pbVar13 + lVar1;
            } while (uVar10 < uVar7);
          }
          bVar6 = (byte)uVar7;
          bVar8 = 0;
          uVar5 = 0;
LAB_020545dc:
          uVar3 = (uint)CONCAT71(uVar5,bVar8 & bVar6);
        }
      }
    }
  }
  return uVar3;
}
