/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a1ff8 (*(double *)(0x20eb640U))
#define local_38 (*(long * *)(frame + 40))
#define local_48 (*(undefined1 (*)[16])(frame + 24))
uchar recovered_203b2d0(long *param_1,long *param_2,int param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  long lVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  void *data;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  uchar uVar13;
  void *pvVar14;
  ulonglong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;

  if (param_3 < 0x11) {
    uVar18 = param_2[1];
    if (uVar18 != 0) {
      local_38 = param_1 + 5;
      uVar16 = 0;
      do {
        plVar12 = local_38;
        uVar21 = uVar16 + 1;
        lVar17 = *param_2;
        bVar6 = *(byte *)(lVar17 + uVar16);
        if (bVar6 == 0xc) {
          if (uVar18 <= uVar21) goto LAB_02030cd6;
          bVar6 = *(byte *)(lVar17 + 1 + uVar16);
          uVar18 = uVar16 + 2;
          lVar17 = 0;
          if ((1 < bVar6 - 0x10) && (bVar6 != 0x21)) {
            if (bVar6 != 7) goto switchD_02030df0_caseD_2;
            uVar16 = param_1[3];
            if (uVar16 < 4) goto LAB_02030cd6;
            lVar8 = param_1[2];
            lVar17 = *(long *)(lVar8 + -0x20 + uVar16 * 8);
            param_1[0x11] = lVar17;
            lVar4 = *(long *)(lVar8 + -0x18 + uVar16 * 8);
            param_1[0x12] = lVar4;
            param_1[0x13] = lVar17;
            param_1[0x14] = lVar4;
            *(undefined1 *)(param_1 + 0x16) = 0;
            param_1[0x15] = (long)(*(double *)(lVar8 + -0x10 + uVar16 * 8) * (double)param_1[1]);
            lVar17 = 0;
          }
LAB_02030d13:
          param_1[3] = lVar17;
          uVar16 = uVar18;
          goto LAB_02030d1a;
        }
        if (0x1f < bVar6) {
          if ((byte)(bVar6 - 0x20) < 0xd7) {
            dVar27 = (double)(int)(bVar6 - 0x8b);
            uVar18 = uVar21;
          }
          else if ((byte)(bVar6 + 9) < 4) {
            dVar27 = 0.0;
            bVar23 = uVar21 < uVar18;
            uVar18 = uVar21;
            if (bVar23) {
              uVar19 = uVar16 + 2;
              dVar27 = (double)(int)(CONCAT11(bVar6,*(undefined1 *)(lVar17 + 1 + uVar16)) - 0xf694);
              goto LAB_02030eb4;
            }
          }
          else if ((byte)(bVar6 + 5) < 4) {
            dVar27 = 0.0;
            bVar23 = uVar21 < uVar18;
            uVar18 = uVar21;
            if (bVar23) {
              uVar19 = uVar16 + 2;
              dVar27 = (double)(int)(0xfa94 - (uint)CONCAT11(bVar6,*(undefined1 *)
                                                                    (lVar17 + 1 + uVar16)));
              goto LAB_02030eb4;
            }
          }
          else {
            uVar19 = uVar16 + 5;
            dVar27 = 0.0;
            if (uVar19 <= uVar18) {
              uVar7 = *(uint *)(lVar17 + uVar21);
              dVar27 = (double)(int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                    | uVar7 << 0x18) * _DAT_020a1ff8;
LAB_02030eb4:
              uVar18 = uVar19;
            }
          }
          uVar16 = param_1[3];
          if (uVar16 == param_1[4]) {
            uVar21 = uVar16 * 2;
            if (uVar16 == 0) {
              uVar21 = 4;
            }
            if (uVar16 < uVar21) {
              pvVar14 = recovered_201cb00(uVar21 * 8);
              data = (void *)param_1[2];
              uVar16 = param_1[3];
              if (uVar16 != 0) {
                if (uVar16 < 4) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 0;
                  if (0x1f < (ulong)((long)pvVar14 - (long)data)) {
                    uVar19 = uVar16 & 0xfffffffffffffffc;
                    uVar20 = 0;
                    do {
                      puVar1 = (undefined8 *)((long)data + uVar20 * 8);
                      uVar9 = puVar1[1];
                      puVar2 = (undefined8 *)((long)data + uVar20 * 8 + 0x10);
                      uVar10 = *puVar2;
                      uVar11 = puVar2[1];
                      puVar2 = (undefined8 *)((long)pvVar14 + uVar20 * 8);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar9;
                      puVar1 = (undefined8 *)((long)pvVar14 + uVar20 * 8 + 0x10);
                      *puVar1 = uVar10;
                      puVar1[1] = uVar11;
                      uVar20 = uVar20 + 4;
                    } while (uVar19 != uVar20);
                    if (uVar16 == uVar19) goto LAB_0203129c;
                  }
                }
                uVar22 = uVar16 & 3;
                uVar20 = uVar19;
                if (uVar22 != 0) {
                  do {
                    *(undefined8 *)((long)pvVar14 + uVar20 * 8) =
                         *(undefined8 *)((long)data + uVar20 * 8);
                    uVar20 = uVar20 + 1;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
                if (uVar19 - uVar16 < 0xfffffffffffffffd) {
                  do {
                    *(undefined8 *)((long)pvVar14 + uVar20 * 8) =
                         *(undefined8 *)((long)data + uVar20 * 8);
                    *(undefined8 *)((long)pvVar14 + uVar20 * 8 + 8) =
                         *(undefined8 *)((long)data + uVar20 * 8 + 8);
                    *(undefined8 *)((long)pvVar14 + uVar20 * 8 + 0x10) =
                         *(undefined8 *)((long)data + uVar20 * 8 + 0x10);
                    *(undefined8 *)((long)pvVar14 + uVar20 * 8 + 0x18) =
                         *(undefined8 *)((long)data + uVar20 * 8 + 0x18);
                    uVar20 = uVar20 + 4;
                  } while (uVar16 != uVar20);
                }
              }
LAB_0203129c:
              recovered_201cb60(data);
              param_1[2] = (long)pvVar14;
              param_1[4] = uVar21;
              uVar16 = param_1[3];
            }
          }
          *(double *)(param_1[2] + uVar16 * 8) = dVar27;
          lVar17 = uVar16 + 1;
          goto LAB_02030d13;
        }
        lVar17 = 0;
        switch((uintptr_t)((uint)bVar6)) {
        case 1:
        case 3:
          break;
        default:
          goto switchD_02030df0_caseD_2;
        case 4:
          uVar18 = param_1[3];
          if (uVar18 != 0) {
            lVar17 = param_1[2];
            goto LAB_02031030;
          }
          goto LAB_02030cd6;
        case 5:
          if (1 < (ulong)param_1[3]) {
            pdVar3 = (double *)(param_1[2] + -0x10 + param_1[3] * 8);
            dVar27 = (double)param_1[0x11] + *pdVar3;
            dVar26 = (double)param_1[0x12] + pdVar3[1];
            param_1[0x11] = (long)dVar27;
            param_1[0x12] = (long)dVar26;
            dVar5 = (double)param_1[1];
            uVar24 = SUB84(dVar5,0);
            uVar25 = (undefined4)((ulong)dVar5 >> 0x20);
            if ((char)param_1[0x16] == '\0') {
              PF_PART4(local_48, 8) = SUB84(dVar5 * (double)param_1[0x14],0);
              PF_PART8(local_48, 0) = dVar5 * (double)param_1[0x13];
              PF_PART4(local_48, 12) = (int)((ulong)(dVar5 * (double)param_1[0x14]) >> 0x20);
              recovered_2036a60(local_38,(double *)local_48);
              *(undefined1 *)(param_1 + 0x16) = 1;
              dVar27 = (double)param_1[0x11];
              dVar26 = (double)param_1[0x12];
              uVar24 = (undefined4)param_1[1];
              uVar25 = (undefined4)((ulong)param_1[1] >> 0x20);
            }
            goto LAB_020313ba;
          }
          goto LAB_02030cd6;
        case 6:
          if (param_1[3] == 0) goto LAB_02030cd6;
          dVar27 = *(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x11];
          param_1[0x11] = (long)dVar27;
          dVar26 = (double)param_1[1];
          uVar24 = SUB84(dVar26,0);
          uVar25 = (undefined4)((ulong)dVar26 >> 0x20);
          if ((char)param_1[0x16] == '\0') {
            PF_PART4(local_48, 8) = SUB84(dVar26 * (double)param_1[0x14],0);
            PF_PART8(local_48, 0) = dVar26 * (double)param_1[0x13];
            PF_PART4(local_48, 12) = (int)((ulong)(dVar26 * (double)param_1[0x14]) >> 0x20);
            recovered_2036a60(local_38,(double *)local_48);
            *(undefined1 *)(param_1 + 0x16) = 1;
            uVar24 = (undefined4)param_1[1];
            uVar25 = (undefined4)((ulong)param_1[1] >> 0x20);
            dVar27 = (double)param_1[0x11];
          }
          dVar26 = (double)param_1[0x12];
LAB_020313ba:
          dVar27 = pf_bits_double(CONCAT44(uVar25,uVar24)) * dVar27;
          dVar26 = pf_bits_double(CONCAT44(uVar25,uVar24)) * dVar26;
LAB_020313c2:
          PF_PART4(local_48, 8) = SUB84(dVar26,0);
          PF_PART8(local_48, 0) = dVar27;
          PF_PART4(local_48, 12) = (int)((ulong)dVar26 >> 0x20);
          recovered_2036d60(plVar12,(double *)local_48);
          break;
        case 7:
          if (param_1[3] != 0) {
            dVar26 = *(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x12];
            param_1[0x12] = (long)dVar26;
            dVar27 = (double)param_1[1];
            uVar24 = SUB84(dVar27,0);
            uVar25 = (undefined4)((ulong)dVar27 >> 0x20);
            if ((char)param_1[0x16] == '\0') {
              PF_PART4(local_48, 8) = SUB84(dVar27 * (double)param_1[0x14],0);
              PF_PART8(local_48, 0) = dVar27 * (double)param_1[0x13];
              PF_PART4(local_48, 12) = (int)((ulong)(dVar27 * (double)param_1[0x14]) >> 0x20);
              recovered_2036a60(local_38,(double *)local_48);
              *(undefined1 *)(param_1 + 0x16) = 1;
              uVar24 = (undefined4)param_1[1];
              uVar25 = (undefined4)((ulong)param_1[1] >> 0x20);
              dVar26 = (double)param_1[0x12];
            }
            dVar27 = pf_bits_double(CONCAT44(uVar25,uVar24)) * (double)param_1[0x11];
            dVar26 = pf_bits_double(CONCAT44(uVar25,uVar24)) * dVar26;
            goto LAB_020313c2;
          }
          goto LAB_02030cd6;
        case 9:
          recovered_2036f40(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          break;
        case 10:
          if (param_1[3] != 0) {
            uVar15 = recovered_2004540(*(double *)(param_1[2] + -8 + param_1[3] * 8));
            param_1[3] = 0;
            if (-1 < (int)(uint)uVar15) {
              uVar18 = (ulong)((uint)uVar15 & 0x7fffffff);
              if ((uVar18 < *(ulong *)(*param_1 + 0x1830)) &&
                 (uVar13 = recovered_203b2d0(param_1,(long *)(uVar18 * 0x18 +
                                                             *(long *)(*param_1 + 0x1828)),
                                             param_3 + 1), uVar13 != '\0')) {
                if (*(char *)((long)param_1 + 0xb1) == '\x01') {
                  *(undefined1 *)((long)param_1 + 0xb1) = 0;
                }
                goto LAB_020313d4;
              }
            }
          }
          goto LAB_02030cd6;
        case 0xb:
          *(undefined1 *)((long)param_1 + 0xb1) = 1;
          break;
        case 0xd:
          uVar18 = param_1[3];
          if (uVar18 < 2) goto LAB_02030cd6;
          lVar17 = *(long *)(param_1[2] + -0x10 + uVar18 * 8);
          dVar27 = *(double *)(param_1[2] + -8 + uVar18 * 8);
          param_1[0x11] = lVar17;
          param_1[0x12] = 0;
          param_1[0x13] = lVar17;
          param_1[0x14] = 0;
          *(undefined1 *)(param_1 + 0x16) = 0;
          param_1[0x15] = (long)(dVar27 * (double)param_1[1]);
          break;
        case 0xe:
          recovered_2036f40(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          *(undefined1 *)((long)param_1 + 0xb2) = 1;
          break;
        case 0x15:
          uVar18 = param_1[3];
          if (uVar18 < 2) goto LAB_02030cd6;
          lVar17 = param_1[2];
          param_1[0x11] = (long)(*(double *)(lVar17 + -0x10 + uVar18 * 8) + (double)param_1[0x11]);
LAB_02031030:
          param_1[0x12] = (long)(*(double *)(lVar17 + -8 + uVar18 * 8) + (double)param_1[0x12]);
LAB_02031138:
          recovered_2036f40(local_38);
          *(undefined1 *)(param_1 + 0x16) = 0;
          PF_PART8(local_48, 8) = (double)param_1[1] * (double)param_1[0x12];
          PF_PART8(local_48, 0) = (double)param_1[1] * (double)param_1[0x11];
          recovered_2036a60(plVar12,(double *)local_48);
          param_1[0x13] = param_1[0x11];
          param_1[0x14] = param_1[0x12];
          *(undefined1 *)(param_1 + 0x16) = 1;
          break;
        case 0x16:
          if (param_1[3] != 0) {
            param_1[0x11] =
                 (long)(*(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x11]);
            goto LAB_02031138;
          }
          goto LAB_02030cd6;
        }
        param_1[3] = 0;
LAB_020313d4:
        if ((*(char *)((long)param_1 + 0xb2) != '\0') ||
           (uVar16 = uVar21, *(char *)((long)param_1 + 0xb1) != '\0')) break;
LAB_02030d1a:
        uVar18 = param_2[1];
      } while (uVar16 < uVar18);
    }
    lVar17 = 1;
  }
  else {
LAB_02030cd6:
    lVar17 = 0;
  }
switchD_02030df0_caseD_2:
  return (uchar)lVar17;
}
