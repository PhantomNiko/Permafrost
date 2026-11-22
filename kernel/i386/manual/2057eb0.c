/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_2057eb0(int *incoming_ecx,short *incoming_edx,int param_3,uint param_4,uint param_5,
                      int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  short *incoming_edx_00;
  undefined4 uVar8;
  short *psVar9;
  ushort uVar10;
  uint uVar11;

  if ((param_6 != 0 && incoming_edx != (short *)0x0) && (*incoming_edx == -0xcf6)) {
    uVar1 = incoming_edx[1];
    uVar11 = (uint)uVar1;
    if (uVar11 < 0x155) {
      if (incoming_edx[3] == 0) {
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            uVar11 = (uint)uVar10;
            uVar2 = incoming_edx[uVar11 * 6 + 8];
            bVar7 = incoming_edx[uVar11 * 6 + 9] == 0 && -1 < (short)uVar2;
            if (incoming_edx[uVar11 * 6 + 9] != 0 || -1 >= (short)uVar2) {
              return bVar7;
            }
            if (uVar2 != 0) {
              uVar5 = *(uint *)(incoming_edx + uVar11 * 6 + 6);
              iVar3 = *(int *)(incoming_edx + uVar11 * 6 + 10);
              uVar11 = 0;
              do {
                lVar6 = (ulonglong)(uVar11 + uVar5) * (ulonglong)(uint)incoming_ecx[1];
                uVar8 = recovered_20580b0(incoming_ecx,iVar3 + uVar11,param_3,param_4,param_5,
                                          (uint)lVar6,
                                          (uint)CARRY4(uVar11,uVar5) * incoming_ecx[1] +
                                          (int)((ulonglong)lVar6 >> 0x20));
                if ((char)uVar8 == '\0') {
                  return false;
                }
                uVar11 = uVar11 + 1;
              } while (uVar2 != uVar11);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar1);
          return bVar7;
        }
      }
      else if (uVar11 != 0) {
        psVar9 = incoming_edx + 10;
        do {
          if (*psVar9 != 0) {
            return false;
          }
          iVar3 = *(int *)(psVar9 + -2);
          if (iVar3 == 0) {
            return false;
          }
          incoming_edx_00 = recovered_2001650(incoming_ecx[1]);
          if (incoming_edx_00 == (short *)0x0) {
            return false;
          }
          iVar4 = *incoming_ecx;
          if ((((iVar4 == 0) || (uVar5 = incoming_ecx[1], uVar5 < 0x200)) || ((uVar5 & 0x1ff) != 0))
             || (uVar8 = recovered_204ed30((uint)*(byte *)(iVar4 + 4),
                                           (uVar5 >> 9) * iVar3 + *(int *)(iVar4 + 8),
                                           (int)incoming_edx_00,uVar5), (char)uVar8 == '\0')) {
            recovered_2001710(incoming_edx_00);
            return false;
          }
          bVar7 = recovered_2057eb0(incoming_ecx,incoming_edx_00,param_3,param_4,param_5,
                                    param_6 + -1);
          recovered_2001710(incoming_edx_00);
          if (!bVar7) {
            return false;
          }
          psVar9 = psVar9 + 6;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      return true;
    }
  }
  return false;
}
