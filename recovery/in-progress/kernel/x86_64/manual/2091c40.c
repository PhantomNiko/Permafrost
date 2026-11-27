/* Type1 floating context storage views; Pooka's Free Software License. */
#include "functions.h"
#undef DAT_02126640
#define DAT_02126640 (*(uint8_t volatile *)(0x2126640U))
#undef Ram0000000002126640
#define Ram0000000002126640 (*(uint64_t volatile *)(0x2126640U))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 32))
#define local_38 (*(long * *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2091c40
 */

ulong recovered_2091c40(long *param_1,long *param_2,int param_3)

{
  unsigned char pf_stack_frame[136] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  long lVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong in_RAX;
  void *pvVar14;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  long lVar15;
  ulong extraout_RAX_01;
  ulong uVar16;
  ulong extraout_RAX_02;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;

  if (param_3 < 0x11) {
    uVar17 = param_2[1];
    if (uVar17 != 0) {
      local_38 = param_1 + 5;
      uVar16 = 0;
      do {
        plVar13 = local_38;
        uVar20 = uVar16 + 1;
        lVar15 = *param_2;
        bVar6 = *(byte *)(lVar15 + uVar16);
        if (bVar6 == 0xc) {
          if (uVar20 < uVar17) {
            bVar6 = *(byte *)(lVar15 + 1 + uVar16);
            uVar17 = uVar16 + 2;
            in_RAX = 0;
            if ((1 < bVar6 - 0x10) && (bVar6 != 0x21)) {
              if (bVar6 != 7) {
                return 0;
              }
              uVar16 = param_1[3];
              if (uVar16 < 4) goto LAB_02091c56;
              lVar8 = param_1[2];
              lVar15 = *(long *)(lVar8 + -0x20 + uVar16 * 8);
              param_1[0x11] = lVar15;
              lVar4 = *(long *)(lVar8 + -0x18 + uVar16 * 8);
              param_1[0x12] = lVar4;
              param_1[0x13] = lVar15;
              param_1[0x14] = lVar4;
              *(undefined1 *)(param_1 + 0x16) = 0;
              param_1[0x15] = pf_double_bits((*(double *)(lVar8 + -0x10 + uVar16 * 8) * pf_bits_double(param_1[1])));
              in_RAX = 0;
            }
LAB_02091c93:
            param_1[3] = in_RAX;
            uVar16 = uVar17;
            goto LAB_02091c9a;
          }
          goto LAB_02091c56;
        }
        if (0x1f < bVar6) {
          if ((byte)(bVar6 - 0x20) < 0xd7) {
            dVar26 = (double)(int)(bVar6 - 0x8b);
            uVar17 = uVar20;
          }
          else if ((byte)(bVar6 + 9) < 4) {
            dVar26 = 0.0;
            bVar22 = uVar20 < uVar17;
            uVar17 = uVar20;
            if (bVar22) {
              uVar18 = uVar16 + 2;
              dVar26 = (double)(int)(CONCAT11(bVar6,*(undefined1 *)(lVar15 + 1 + uVar16)) - 0xf694);
              goto LAB_02091e34;
            }
          }
          else if ((byte)(bVar6 + 5) < 4) {
            dVar26 = 0.0;
            bVar22 = uVar20 < uVar17;
            uVar17 = uVar20;
            if (bVar22) {
              uVar18 = uVar16 + 2;
              dVar26 = (double)(int)(0xfa94 - (uint)CONCAT11(bVar6,*(undefined1 *)
                                                                    (lVar15 + 1 + uVar16)));
              goto LAB_02091e34;
            }
          }
          else {
            uVar18 = uVar16 + 5;
            dVar26 = 0.0;
            if (uVar18 <= uVar17) {
              uVar7 = *(uint *)(lVar15 + uVar20);
              dVar26 = pf_bits_double(Ram0000000002126640);
              dVar26 = (double)(int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                    | uVar7 << 0x18) * dVar26;
LAB_02091e34:
              uVar17 = uVar18;
            }
          }
          uVar16 = param_1[3];
          if (uVar16 == param_1[4]) {
            uVar20 = uVar16 * 2;
            if (uVar16 == 0) {
              uVar20 = 4;
            }
            if (uVar16 < uVar20) {
              pvVar14 = recovered_2072220(uVar20 * 8);
              pvVar9 = (void *)param_1[2];
              uVar16 = param_1[3];
              if (uVar16 != 0) {
                if (uVar16 < 4) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  if (0x1f < (ulong)((long)pvVar14 - (long)pvVar9)) {
                    uVar18 = uVar16 & 0xfffffffffffffffc;
                    uVar19 = 0;
                    do {
                      puVar1 = (undefined8 *)((long)pvVar9 + uVar19 * 8);
                      uVar10 = puVar1[1];
                      puVar2 = (undefined8 *)((long)pvVar9 + uVar19 * 8 + 0x10);
                      uVar11 = *puVar2;
                      uVar12 = puVar2[1];
                      puVar2 = (undefined8 *)((long)pvVar14 + uVar19 * 8);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar10;
                      puVar1 = (undefined8 *)((long)pvVar14 + uVar19 * 8 + 0x10);
                      *puVar1 = uVar11;
                      puVar1[1] = uVar12;
                      uVar19 = uVar19 + 4;
                    } while (uVar18 != uVar19);
                    if (uVar16 == uVar18) goto LAB_0209221c;
                  }
                }
                uVar21 = uVar16 & 3;
                uVar19 = uVar18;
                if (uVar21 != 0) {
                  do {
                    *(undefined8 *)((long)pvVar14 + uVar19 * 8) =
                         *(undefined8 *)((long)pvVar9 + uVar19 * 8);
                    uVar19 = uVar19 + 1;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                if (uVar18 - uVar16 < 0xfffffffffffffffd) {
                  do {
                    *(undefined8 *)((long)pvVar14 + uVar19 * 8) =
                         *(undefined8 *)((long)pvVar9 + uVar19 * 8);
                    *(undefined8 *)((long)pvVar14 + uVar19 * 8 + 8) =
                         *(undefined8 *)((long)pvVar9 + uVar19 * 8 + 8);
                    *(undefined8 *)((long)pvVar14 + uVar19 * 8 + 0x10) =
                         *(undefined8 *)((long)pvVar9 + uVar19 * 8 + 0x10);
                    *(undefined8 *)((long)pvVar14 + uVar19 * 8 + 0x18) =
                         *(undefined8 *)((long)pvVar9 + uVar19 * 8 + 0x18);
                    uVar19 = uVar19 + 4;
                  } while (uVar16 != uVar19);
                }
              }
LAB_0209221c:
              recovered_2072280(pvVar9);
              param_1[2] = (long)pvVar14;
              param_1[4] = uVar20;
              uVar16 = param_1[3];
            }
          }
          *(double *)(param_1[2] + uVar16 * 8) = dVar26;
          in_RAX = uVar16 + 1;
          goto LAB_02091c93;
        }
        in_RAX = 0;
        switch((uintptr_t)((uint)bVar6)) {
        case 1:
        case 3:
          break;
        default:
          goto switchD_02091d70_caseD_2;
        case 4:
          uVar17 = param_1[3];
          if (uVar17 != 0) {
            lVar15 = param_1[2];
            goto LAB_02091fb0;
          }
          goto LAB_02091c56;
        case 5:
          if (1 < (ulong)param_1[3]) {
            pdVar3 = (double *)(param_1[2] + -0x10 + param_1[3] * 8);
            dVar26 = pf_bits_double(param_1[0x11]) + *pdVar3;
            dVar25 = pf_bits_double(param_1[0x12]) + pdVar3[1];
            param_1[0x11] = pf_double_bits(dVar26);
            param_1[0x12] = pf_double_bits(dVar25);
            dVar5 = pf_bits_double(param_1[1]);
            uVar23 = SUB84(dVar5,0);
            uVar24 = (undefined4)(pf_double_bits(dVar5) >> 0x20);
            if ((char)param_1[0x16] == '\0') {
              PF_PART4(local_48, 8) = SUB84(dVar5 * pf_bits_double(param_1[0x14]),0);
              (*(double *)((uint8_t *)&(local_48)+0)) = dVar5 * pf_bits_double(param_1[0x13]);
              PF_PART4(local_48, 12) = (int)(pf_double_bits(dVar5 * pf_bits_double(param_1[0x14])) >> 0x20);
              recovered_208d3d0(local_38,(double *)local_48);
              *(undefined1 *)(param_1 + 0x16) = 1;
              dVar26 = pf_bits_double(param_1[0x11]);
              dVar25 = pf_bits_double(param_1[0x12]);
              uVar23 = (undefined4)param_1[1];
              uVar24 = (undefined4)((ulong)param_1[1] >> 0x20);
            }
            goto LAB_0209233a;
          }
          goto LAB_02091c56;
        case 6:
          if (param_1[3] == 0) goto LAB_02091c56;
          dVar26 = *(double *)(param_1[2] + -8 + param_1[3] * 8) + pf_bits_double(param_1[0x11]);
          param_1[0x11] = pf_double_bits(dVar26);
          dVar25 = pf_bits_double(param_1[1]);
          uVar23 = SUB84(dVar25,0);
          uVar24 = (undefined4)(pf_double_bits(dVar25) >> 0x20);
          if ((char)param_1[0x16] == '\0') {
            PF_PART4(local_48, 8) = SUB84(dVar25 * pf_bits_double(param_1[0x14]),0);
            (*(double *)((uint8_t *)&(local_48)+0)) = dVar25 * pf_bits_double(param_1[0x13]);
            PF_PART4(local_48, 12) = (int)(pf_double_bits(dVar25 * pf_bits_double(param_1[0x14])) >> 0x20);
            recovered_208d3d0(local_38,(double *)local_48);
            *(undefined1 *)(param_1 + 0x16) = 1;
            uVar23 = (undefined4)param_1[1];
            uVar24 = (undefined4)((ulong)param_1[1] >> 0x20);
            dVar26 = pf_bits_double(param_1[0x11]);
          }
          dVar25 = pf_bits_double(param_1[0x12]);
LAB_0209233a:
          dVar26 = pf_bits_double(CONCAT44(uVar24,uVar23)) * dVar26;
          dVar25 = pf_bits_double(CONCAT44(uVar24,uVar23)) * dVar25;
LAB_02092342:
          PF_PART4(local_48, 8) = SUB84(dVar25,0);
          (*(double *)((uint8_t *)&(local_48)+0)) = dVar26;
          PF_PART4(local_48, 12) = (int)(pf_double_bits(dVar25) >> 0x20);
          recovered_208d6d0(plVar13,(double *)local_48);
          in_RAX = extraout_RAX_02;
          break;
        case 7:
          if (param_1[3] != 0) {
            dVar25 = *(double *)(param_1[2] + -8 + param_1[3] * 8) + pf_bits_double(param_1[0x12]);
            param_1[0x12] = pf_double_bits(dVar25);
            dVar26 = pf_bits_double(param_1[1]);
            uVar23 = SUB84(dVar26,0);
            uVar24 = (undefined4)(pf_double_bits(dVar26) >> 0x20);
            if ((char)param_1[0x16] == '\0') {
              PF_PART4(local_48, 8) = SUB84(dVar26 * pf_bits_double(param_1[0x14]),0);
              (*(double *)((uint8_t *)&(local_48)+0)) = dVar26 * pf_bits_double(param_1[0x13]);
              PF_PART4(local_48, 12) = (int)(pf_double_bits(dVar26 * pf_bits_double(param_1[0x14])) >> 0x20);
              recovered_208d3d0(local_38,(double *)local_48);
              *(undefined1 *)(param_1 + 0x16) = 1;
              uVar23 = (undefined4)param_1[1];
              uVar24 = (undefined4)((ulong)param_1[1] >> 0x20);
              dVar25 = pf_bits_double(param_1[0x12]);
            }
            dVar26 = pf_bits_double(CONCAT44(uVar24,uVar23)) * pf_bits_double(param_1[0x11]);
            dVar25 = pf_bits_double(CONCAT44(uVar24,uVar23)) * dVar25;
            goto LAB_02092342;
          }
          goto LAB_02091c56;
        case 9:
          recovered_208d8b0(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          in_RAX = extraout_RAX;
          break;
        case 10:
          if (param_1[3] != 0) {
            lVar15 = recovered_20049f0(*(double *)(param_1[2] + -8 + param_1[3] * 8));
            param_1[3] = 0;
            if (-1 < (int)(uint)lVar15) {
              uVar17 = (ulong)((uint)lVar15 & 0x7fffffff);
              if ((uVar17 < *(ulong *)(*param_1 + 0x1830)) &&
                 (in_RAX = recovered_2091c40(param_1,(long *)(uVar17 * 0x18 +
                                                             *(long *)(*param_1 + 0x1828)),
                                             param_3 + 1), (char)in_RAX != '\0')) {
                if (*(char *)((long)param_1 + 0xb1) == '\x01') {
                  *(undefined1 *)((long)param_1 + 0xb1) = 0;
                }
                goto LAB_02092354;
              }
            }
          }
          goto LAB_02091c56;
        case 0xb:
          *(undefined1 *)((long)param_1 + 0xb1) = 1;
          break;
        case 0xd:
          in_RAX = param_1[3];
          if (in_RAX < 2) goto LAB_02091c56;
          lVar15 = *(long *)(param_1[2] + -0x10 + in_RAX * 8);
          dVar26 = *(double *)(param_1[2] + -8 + in_RAX * 8);
          param_1[0x11] = lVar15;
          param_1[0x12] = 0;
          param_1[0x13] = lVar15;
          param_1[0x14] = 0;
          *(undefined1 *)(param_1 + 0x16) = 0;
          param_1[0x15] = pf_double_bits((dVar26 * pf_bits_double(param_1[1])));
          break;
        case 0xe:
          recovered_208d8b0(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          *(undefined1 *)((long)param_1 + 0xb2) = 1;
          in_RAX = extraout_RAX_01;
          break;
        case 0x15:
          uVar17 = param_1[3];
          if (uVar17 < 2) goto LAB_02091c56;
          lVar15 = param_1[2];
          param_1[0x11] = pf_double_bits((*(double *)(lVar15 + -0x10 + uVar17 * 8) + pf_bits_double(param_1[0x11])));
LAB_02091fb0:
          param_1[0x12] = pf_double_bits((*(double *)(lVar15 + -8 + uVar17 * 8) + pf_bits_double(param_1[0x12])));
LAB_020920b8:
          recovered_208d8b0(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          (*(double *)((uint8_t *)&(local_48)+8)) = pf_bits_double(param_1[1]) * pf_bits_double(param_1[0x12]);
          (*(double *)((uint8_t *)&(local_48)+0)) = pf_bits_double(param_1[1]) * pf_bits_double(param_1[0x11]);
          recovered_208d3d0(plVar13,(double *)local_48);
          param_1[0x13] = param_1[0x11];
          param_1[0x14] = param_1[0x12];
          *(undefined1 *)(param_1 + 0x16) = 1;
          in_RAX = extraout_RAX_00;
          break;
        case 0x16:
          if (param_1[3] != 0) {
            param_1[0x11] = pf_double_bits((*(double *)(param_1[2] + -8 + param_1[3] * 8) + pf_bits_double(param_1[0x11])));
            goto LAB_020920b8;
          }
          goto LAB_02091c56;
        }
        param_1[3] = 0;
LAB_02092354:
        if ((*(char *)((long)param_1 + 0xb2) != '\0') ||
           (uVar16 = uVar20, *(char *)((long)param_1 + 0xb1) != '\0')) break;
LAB_02091c9a:
        uVar17 = param_2[1];
      } while (uVar16 < uVar17);
    }
    in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
  }
  else {
LAB_02091c56:
    in_RAX = 0;
  }
switchD_02091d70_caseD_2:
  return in_RAX;
}
