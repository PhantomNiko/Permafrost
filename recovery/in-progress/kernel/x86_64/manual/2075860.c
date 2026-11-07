/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2075860(long *param_1,short *param_2,long param_3,ulong param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uchar uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort uVar8;
  int iVar9;
  short *unaff_R13;
  long lVar10;
  ulong uVar11;

  if (((param_5 == 0 || param_2 == (short *)0x0) || (*param_2 != -0xcf6)) ||
     (uVar1 = param_2[1], 0x154 < uVar1)) {
LAB_0204f7ad:
    uVar5 = 0;
  }
  else {
    if (param_2[3] == 0) {
      if (uVar1 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (ulong)uVar8;
          uVar2 = param_2[uVar6 * 6 + 8];
          uVar11 = (ulong)uVar2;
          unaff_R13 = (short *)CONCAT71((int7)((ulong)unaff_R13 >> 8),
                                        param_2[uVar6 * 6 + 9] == 0 && -1 < (short)uVar2);
          if (param_2[uVar6 * 6 + 9] != 0 || -1 >= (short)uVar2) {
            return (uint)unaff_R13;
          }
          if (uVar11 != 0) {
            uVar7 = (ulong)*(uint *)(param_2 + uVar6 * 6 + 6);
            iVar9 = *(int *)(param_2 + uVar6 * 6 + 10);
            do {
              uVar4 = recovered_2075a60(param_1,iVar9,param_3,param_4,*(uint *)(param_1 + 1) * uVar7
                                       );
              if (uVar4 == '\0') goto LAB_0204f7ad;
              iVar9 = iVar9 + 1;
              uVar7 = uVar7 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          uVar8 = uVar8 + 1;
          if (uVar8 == uVar1) {
            return (uint)unaff_R13;
          }
        } while( true );
      }
    }
    else if (uVar1 != 0) {
      lVar10 = 0;
      do {
        if (*(short *)((long)param_2 + lVar10 + 0x14) != 0) {
          return 0;
        }
        iVar9 = *(int *)((long)param_2 + lVar10 + 0x10);
        if (iVar9 == 0) {
          return 0;
        }
        unaff_R13 = recovered_2000ad0((ulong)*(uint *)(param_1 + 1));
        if (unaff_R13 == (short *)0x0) goto LAB_0204f7ad;
        lVar3 = *param_1;
        if (lVar3 == 0) {
LAB_0204f95b:
          recovered_2000bb0(unaff_R13);
          goto LAB_0204f7ad;
        }
        uVar5 = *(uint *)(param_1 + 1);
        if ((((ulong)uVar5 < 0x200) || ((uVar5 & 0x1ff) != 0)) ||
           (uVar5 = recovered_206b1b0(*(byte *)(lVar3 + 4),
                                      (ulong)((uVar5 >> 9) * iVar9 + *(int *)(lVar3 + 8)),
                                      (long)unaff_R13,(ulong)uVar5), (char)uVar5 == '\0'))
        goto LAB_0204f95b;
        uVar5 = recovered_2075860(param_1,unaff_R13,param_3,param_4,param_5 + -1);
        recovered_2000bb0(unaff_R13);
        if ((char)uVar5 == '\0') goto LAB_0204f7ad;
        lVar10 = lVar10 + 0xc;
      } while ((ulong)uVar1 * 0xc != lVar10);
    }
    uVar5 = (uint)CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
  }
  return uVar5;
}
