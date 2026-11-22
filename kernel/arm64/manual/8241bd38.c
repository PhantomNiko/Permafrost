/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define dStack_68 (*(double *)(frame + 24))
undefined8 recovered_8241bd38(long *param_1,long *param_2,int param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  long lVar13;

  if (param_3 < 0x11) {
    uVar5 = 0;
    while (uVar7 = param_2[1], uVar5 < uVar7) {
      uVar9 = uVar5 + 1;
      lVar8 = *param_2;
      bVar2 = *(byte *)(lVar8 + uVar5);
      if (bVar2 == 0xc) {
        if (uVar7 <= uVar9) goto LAB_40415fe8;
        bVar2 = *(byte *)(lVar8 + uVar9);
        if ((1 < bVar2 - 0x10) && (bVar2 != 0x21)) {
          if ((bVar2 != 7) || ((ulong)param_1[3] < 4)) goto LAB_40415fe8;
          lVar8 = param_1[2] + param_1[3] * 8;
          lVar11 = *(long *)(lVar8 + -0x20);
          param_1[0x11] = lVar11;
          lVar13 = *(long *)(lVar8 + -0x18);
          param_1[0x12] = lVar13;
          param_1[0x13] = lVar11;
          param_1[0x14] = lVar13;
          *(undefined1 *)(param_1 + 0x16) = 0;
          param_1[0x15] = (long)(*(double *)(lVar8 + -0x10) * (double)param_1[1]);
        }
        param_1[3] = 0;
        uVar5 = uVar5 + 2;
      }
      else {
        uVar3 = (uint)bVar2;
        if (bVar2 < 0x20) {
          uVar4 = 0;
          switch((uintptr_t)((uint)bVar2)) {
          case 1:
          case 3:
            break;
          default:
            goto switchD_404160c8_caseD_2;
          case 4:
            if (param_1[3] != 0) {
              dVar12 = *(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x12];
              goto LAB_404161fc;
            }
            goto LAB_40415fe8;
          case 5:
            if (1 < (ulong)param_1[3]) {
              lVar8 = param_1[2] + param_1[3] * 8;
              dVar12 = *(double *)(lVar8 + -0x10);
              param_1[0x12] = (long)(*(double *)(lVar8 + -8) + (double)param_1[0x12]);
              param_1[0x11] = (long)(dVar12 + (double)param_1[0x11]);
              goto LAB_40416228;
            }
            goto LAB_40415fe8;
          case 6:
            if (param_1[3] != 0) {
              param_1[0x11] =
                   (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x11]);
              goto LAB_40416228;
            }
            goto LAB_40415fe8;
          case 7:
            if (param_1[3] == 0) goto LAB_40415fe8;
            param_1[0x12] =
                 (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x12]);
LAB_40416228:
            recovered_8241c1d4((long)param_1);
            break;
          case 9:
            recovered_8241c170((long)param_1);
            break;
          case 10:
            if (param_1[3] != 0) {
              uVar5 = recovered_8240153c(*(double *)(param_1[2] + param_1[3] * 8 + -8));
              param_1[3] = 0;
              if (-1 < (int)uVar5) {
                if ((uVar5 & 0x7fffffff) < *(ulong *)(*param_1 + 0x1830)) {
                  uVar4 = recovered_8241bd38(param_1,(long *)(*(long *)(*param_1 + 0x1828) +
                                                             (uVar5 & 0x7fffffff) * 0x18),
                                             param_3 + 1);
                  if ((int)uVar4 == 0) {
                    return uVar4;
                  }
                  if (*(char *)((long)param_1 + 0xb1) == '\x01') {
                    *(undefined1 *)((long)param_1 + 0xb1) = 0;
                  }
                  goto LAB_404162fc;
                }
              }
            }
            goto LAB_40415fe8;
          case 0xb:
            *(undefined1 *)((long)param_1 + 0xb1) = 1;
            break;
          case 0xd:
            if ((ulong)param_1[3] < 2) goto LAB_40415fe8;
            lVar8 = param_1[2] + param_1[3] * 8;
            lVar11 = *(long *)(lVar8 + -0x10);
            dVar12 = *(double *)(lVar8 + -8);
            param_1[0x11] = lVar11;
            param_1[0x12] = 0;
            param_1[0x13] = lVar11;
            param_1[0x14] = 0;
            *(undefined1 *)(param_1 + 0x16) = 0;
            param_1[0x15] = (long)(dVar12 * (double)param_1[1]);
            break;
          case 0xe:
            recovered_8241c170((long)param_1);
            *(undefined1 *)((long)param_1 + 0xb2) = 1;
            break;
          case 0x15:
            if ((ulong)param_1[3] < 2) goto LAB_40415fe8;
            lVar8 = param_1[2] + param_1[3] * 8;
            param_1[0x11] = (long)(*(double *)(lVar8 + -0x10) + (double)param_1[0x11]);
            dVar12 = *(double *)(lVar8 + -8) + (double)param_1[0x12];
LAB_404161fc:
            param_1[0x12] = (long)dVar12;
LAB_40416288:
            recovered_8241c194((long)param_1);
            break;
          case 0x16:
            if (param_1[3] != 0) {
              param_1[0x11] =
                   (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x11]);
              goto LAB_40416288;
            }
            goto LAB_40415fe8;
          }
          param_1[3] = 0;
LAB_404162fc:
          if (((*(byte *)((long)param_1 + 0xb2) & 1) != 0) ||
             (uVar5 = uVar9, (*(byte *)((long)param_1 + 0xb1) & 1) != 0)) break;
        }
        else {
          if (uVar3 - 0x20 < 0xd7) {
            iVar6 = bVar2 - 0x8b;
LAB_404160f4:
            dStack_68 = (double)iVar6;
            uVar10 = uVar9;
          }
          else {
            uVar10 = uVar9;
            if (uVar3 - 0xf7 < 4) {
              dStack_68 = 0.0;
              if (uVar9 < uVar7) {
                dStack_68 = (double)(CONCAT11(bVar2,*(undefined1 *)(lVar8 + uVar9)) - 0xf694);
                uVar10 = uVar5 + 2;
              }
            }
            else if (uVar3 - 0xfb < 4) {
              dStack_68 = 0.0;
              if (uVar9 < uVar7) {
                puVar1 = (undefined1 *)(lVar8 + uVar9);
                uVar9 = uVar5 + 2;
                iVar6 = 0xfa94 - (uint)CONCAT11(bVar2,*puVar1);
                goto LAB_404160f4;
              }
            }
            else {
              uVar10 = uVar5 + 5;
              if (uVar7 < uVar10) {
                dStack_68 = 0.0;
                uVar10 = uVar7;
              }
              else {
                uVar3 = recovered_82417a5c(param_2,uVar9);
                dStack_68 = (double)(int)uVar3 / 65536.0;
              }
            }
          }
          recovered_8241c220(param_1 + 2,&dStack_68);
          uVar5 = uVar10;
        }
      }
    }
    uVar4 = 1;
  }
  else {
LAB_40415fe8:
    uVar4 = 0;
  }
switchD_404160c8_caseD_2:
  return uVar4;
}
