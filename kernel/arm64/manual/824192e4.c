/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_61 (*(undefined1 *)(frame + 31))
int * recovered_824192e4(int *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int *extraout_x0 = 0;
  int *extraout_x0_00 = 0;
  int *extraout_x0_01 = 0;
  int *piVar9;
  long lVar10;
  int iVar11;
  int *in_x8;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 in_d0;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;

  recovered_824189e8((undefined8 *)in_x8);
  *(undefined8 *)(in_x8 + 4) = in_d0;
  piVar9 = extraout_x0;
  if ((*(long *)(param_1 + 2) != 0) && (*(char *)((long)param_1 + 0x19) == '\x01')) {
    dVar18 = recovered_824010dc(*(double *)(param_1 + 0x10));
    dVar19 = recovered_824010f8(*(double *)(param_1 + 0x12));
    dVar20 = recovered_824010dc(*(double *)(param_1 + 0x14));
    dVar21 = recovered_824010f8(*(double *)(param_1 + 0x16));
    uVar1 = ((int)dVar19 - (int)dVar18) + 2;
    uVar2 = ((int)dVar21 - (int)dVar20) + 2;
    piVar9 = extraout_x0_00;
    if (0 < (int)uVar1 && 0 < (int)uVar2) {
      iVar4 = (int)dVar18 + -1;
      iVar3 = (int)dVar21 + 1;
      *in_x8 = iVar4;
      in_x8[1] = iVar3;
      in_x8[2] = uVar1;
      in_x8[3] = uVar2;
      uStack_61 = 0;
      recovered_824142d4((long *)(in_x8 + 6),(ulong)uVar2 * (ulong)uVar1,&uStack_61);
      piVar9 = extraout_x0_01;
      for (uVar12 = 0; uVar12 != uVar2; uVar12 = uVar12 + 1) {
        for (uVar13 = 0; uVar13 != uVar1; uVar13 = uVar13 + 1) {
          iVar14 = 0;
          dVar18 = 0.0;
          for (iVar15 = 0; iVar15 != 4; iVar15 = iVar15 + 1) {
            dVar19 = ((double)iVar3 - (double)(uVar12 & 0xffffffff)) + -0.125 + dVar18 * -0.25;
            dVar20 = 0.0;
            for (iVar16 = 0; iVar16 != 4; iVar16 = iVar16 + 1) {
              iVar17 = 0;
              pdVar5 = (double *)(*(long *)param_1 + 0x10);
              for (lVar10 = *(long *)(param_1 + 2) << 5; lVar10 != 0; lVar10 = lVar10 + -0x20) {
                dVar21 = pdVar5[-1];
                dVar22 = pdVar5[1];
                if (dVar21 != dVar22) {
                  bVar6 = false;
                  bVar7 = true;
                  bVar8 = false;
                  if (dVar21 <= dVar19) {
                    bVar6 = false;
                    bVar7 = false;
                    bVar8 = true;
                    if (!NAN(dVar22) && !NAN(dVar19)) {
                      bVar6 = dVar22 < dVar19;
                      bVar7 = dVar22 == dVar19;
                      bVar8 = false;
                    }
                  }
                  if (bVar7 || bVar6 != bVar8) {
                    bVar6 = false;
                    bVar7 = true;
                    if (dVar19 < dVar21) {
                      bVar6 = false;
                      bVar7 = true;
                      if (!NAN(dVar22) && !NAN(dVar19)) {
                        bVar6 = dVar22 == dVar19;
                        bVar7 = dVar19 <= dVar22;
                      }
                    }
                    if (bVar7 && !bVar6) goto LAB_40413764;
                    iVar11 = -1;
                  }
                  else {
                    iVar11 = 1;
                  }
                  if (pdVar5[-2] + ((dVar19 - dVar21) * (*pdVar5 - pdVar5[-2])) / (dVar22 - dVar21)
                      <= (double)iVar4 + (double)(uVar13 & 0xffffffff) + 0.125 + dVar20 * 0.25) {
                    iVar11 = 0;
                  }
                  iVar17 = iVar11 + iVar17;
                }
LAB_40413764:
                pdVar5 = pdVar5 + 4;
              }
              if (iVar17 != 0) {
                iVar14 = iVar14 + 1;
              }
              dVar20 = dVar20 + 1.0;
              piVar9 = (int *)0x0;
            }
            dVar18 = dVar18 + 1.0;
          }
          *(char *)(*(long *)(in_x8 + 6) + uVar12 * uVar1 + uVar13) = (char)((iVar14 * 0xff) / 0x10)
          ;
        }
      }
    }
  }
  return piVar9;
}
