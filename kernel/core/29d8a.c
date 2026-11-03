#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef DAT_00057028
#define DAT_00057028 (*(uint8_t *)(0x57028U))
#undef DAT_0005ceac
#define DAT_0005ceac (*(uint8_t *)(0x5ceacU))
#undef LAB_0002a994
#define LAB_0002a994 (*(uint8_t *)(0x2a994U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
#undef _DAT_00057028
#define _DAT_00057028 (*(float *)(0x57028U))
#define local_60 (*(undefined1 * *)(frame + 396))
#define local_5c (*(undefined1 * *)(frame + 400))
#define local_50 (*(char * *)(frame + 412))
#define local_4c (*(int *)(frame + 416))
#define local_48 (*(undefined4 *)(frame + 420))
#define local_44 (*(double *)(frame + 424))
#define local_3c (*(double * *)(frame + 432))
#define local_38 (*(int *)(frame + 436))
#define local_34 (*(int *)(frame + 440))
#define local_30 (*(undefined8 *)(frame + 444))
#define local_28 (*(uint *)(frame + 452))
#define local_24 (*(double *)(frame + 456))
#define local_1c (*(uint *)(frame + 464))
#define local_18 (*(undefined8 *)(frame + 468))
#define auStackY_1dc (*(undefined1 (*)[128])(frame + 16))
#define auStack_136 (*(undefined1 (*)[2])(frame + 182))
#define local_134 (*(byte (*)[16])(frame + 184))
#define local_124 (*(double *)(frame + 200))
#define local_11c (*(double *)(frame + 208))
#define local_114 (*(double *)(frame + 216))
#define local_10c (*(double *)(frame + 224))
#define local_104 (*(double *)(frame + 232))
#define local_fc (*(double *)(frame + 240))
#define local_f4 (*(double *)(frame + 248))
#define local_ec (*(double *)(frame + 256))
#define local_e4 (*(uint *)(frame + 264))
#define local_e0 (*(uint *)(frame + 268))
#define local_dc (*(int *)(frame + 272))
#define local_d8 (*(int *)(frame + 276))
#define local_d4 (*(uint *)(frame + 280))
#define local_cc (*(uint (*)[3])(frame + 288))
#define local_c0 (*(uint (*)[3])(frame + 300))
#define local_b4 (*(double *)(frame + 312))
#define local_aa (*(ushort *)(frame + 322))
#define local_a8 (*(ushort *)(frame + 324))
#define local_a6 (*(ushort *)(frame + 326))
#define local_a4 (*(ushort *)(frame + 328))
#define local_a2 (*(ushort *)(frame + 330))
#define local_a0 (*(ushort *)(frame + 332))
#define local_9e (*(ushort *)(frame + 334))
#define local_9c (*(short *)(frame + 336))
#define local_9a (*(short *)(frame + 338))
#define local_98 (*(short *)(frame + 340))
#define local_96 (*(short *)(frame + 342))
#define local_94 (*(int *)(frame + 344))
#define local_90 (*(uint *)(frame + 348))
#define local_8c (*(undefined4 *)(frame + 352))
#define local_88 (*(uint *)(frame + 356))
#define local_84 (*(undefined4 *)(frame + 360))
#define local_80 (*(undefined4 *)(frame + 364))
#define local_6c (*(undefined * *)(frame + 384))
#define local_68 (*(undefined * *)(frame + 388))
#define local_64 (*(undefined1 * *)(frame + 392))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29d8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_29d8a(uint param_1,int param_2,double *param_3,int *param_4,int param_5)

{
  unsigned char frame[524] = {0};

  byte *pbVar1;
  char *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  double *pdVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  bool bVar21;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 492) + -4);
  local_5c = auStackY_1dc + 0x80;
  uVar20 = *(ushort *)(param_1 + 0x7a);
  local_6c = PTR_LAB_0005d040;
  local_68 = &DAT_0005ceac;
  local_60 = &LAB_0002a994;
  recovered_234cb(&local_84);
  if (((ushort)param_2 < uVar20) && ((uint)uVar20 < *(uint *)(param_1 + 0x84))) {
    uVar19 = *(uint *)(*(int *)(param_1 + 0x80) + param_2 * 4);
    uVar18 = *(uint *)(*(int *)(param_1 + 0x80) + 4 + param_2 * 4);
    if ((uVar19 <= uVar18) && ((uVar18 <= *(uint *)(param_1 + 0x44) && (uVar18 != uVar19)))) {
      iVar14 = *(int *)(param_1 + 0x40);
      local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14));
      uVar11 = iVar14 + uVar19;
      uVar13 = *(uint *)(param_1 + 8);
      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),uVar13));
      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar11));
      if (9 < uVar13 - uVar11 && uVar11 <= uVar13) {
        local_28 = *(uint *)(param_1 + 4);
        local_1c = param_1;
        if ((short)((ushort)*(byte *)(local_28 + uVar11) << 8) < 0) {
          if (param_5 < 0xc) {
            uVar11 = uVar11 + 10;
            local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14 + uVar18));
            local_dc = param_5 + 1;
            local_11c = (double)_DAT_00057028;
            while( true ) {
              uVar19 = local_1c;
              if ((uint)local_30 < uVar11) break;
              local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),uVar13));
              local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar11));
              if (uVar13 < uVar11) break;
              bVar21 = false;
              if (uVar13 - uVar11 < 4) goto LAB_00029df0;
              iVar14 = *(int *)(local_1c + 4);
              pbVar1 = (byte *)(iVar14 + uVar11);
              local_b4 = pf_bits_double(CONCAT44(PF_PART4(local_b4, 4),(uint)*pbVar1));
              bVar9 = *(byte *)(iVar14 + 1 + uVar11);
              local_28 = (uint)bVar9;
              uVar18 = uVar11 + 4;
              local_44 = pf_bits_double(CONCAT44(PF_PART4(local_44, 4),iVar14));
              uVar20 = *(ushort *)(iVar14 + 2 + uVar11);
              local_88 = CONCAT22(PF_PART2(local_88, 2),uVar20);
              if ((bVar9 & 1) == 0) {
                if (uVar13 < uVar18) break;
                bVar21 = false;
                if (uVar13 - uVar18 < 2) goto LAB_00029df0;
                if ((bVar9 & 2) == 0) break;
                uVar16 = (uint)*(char *)(iVar14 + 4 + uVar11);
                uVar18 = (uint)*(char *)(iVar14 + 5 + uVar11);
                uVar11 = uVar11 + 6;
              }
              else {
                if (uVar13 < uVar18) break;
                bVar21 = false;
                if (uVar13 - uVar18 < 4) goto LAB_00029df0;
                if ((bVar9 & 2) == 0) break;
                uVar16 = (int)(short)((ushort)*(byte *)(iVar14 + 4 + uVar11) << 8) |
                         (uint)*(byte *)(iVar14 + 5 + uVar11);
                uVar18 = (int)(short)((ushort)*(byte *)(iVar14 + 6 + uVar11) << 8) |
                         (uint)*(byte *)(iVar14 + 7 + uVar11);
                uVar11 = uVar11 + 8;
              }
              if ((bVar9 & 8) == 0) {
                if ((bVar9 & 0x40) == 0) {
                  if ((char)bVar9 < '\0') {
                    if (uVar11 <= uVar13) {
                      bVar21 = false;
                      if (7 < uVar13 - uVar11) {
                        uVar15 = *(ushort *)(iVar14 + 2 + uVar11);
                        local_9e = *(ushort *)(iVar14 + uVar11) << 8 |
                                   *(ushort *)(iVar14 + uVar11) >> 8;
                        dVar7 = local_11c * (double)(short)local_9e;
                        local_a4 = uVar15 << 8 | uVar15 >> 8;
                        local_44 = local_11c * (double)(short)local_a4;
                        uVar15 = *(ushort *)(iVar14 + 4 + uVar11);
                        local_a2 = uVar15 << 8 | uVar15 >> 8;
                        uVar15 = *(ushort *)(iVar14 + 6 + uVar11);
                        local_a0 = uVar15 << 8 | uVar15 >> 8;
                        uVar11 = uVar11 + 8;
                        dVar8 = local_11c * (double)(short)local_a2;
                        local_124 = local_11c * (double)(short)local_a0;
                        goto LAB_0002a035;
                      }
                      goto LAB_00029df0;
                    }
                    break;
                  }
                  local_124 = 1.0;
                  local_44 = 0.0;
                  dVar7 = local_124;
                  dVar8 = local_44;
                }
                else {
                  if (uVar13 < uVar11) break;
                  bVar21 = false;
                  if (uVar13 - uVar11 < 4) goto LAB_00029df0;
                  uVar15 = *(ushort *)(iVar14 + 2 + uVar11);
                  local_a6 = *(ushort *)(iVar14 + uVar11) << 8 | *(ushort *)(iVar14 + uVar11) >> 8;
                  dVar7 = local_11c * (double)(short)local_a6;
                  local_a8 = uVar15 << 8 | uVar15 >> 8;
                  local_124 = local_11c * (double)(short)local_a8;
                  uVar11 = uVar11 + 4;
                  local_44 = 0.0;
                  dVar8 = local_44;
                }
              }
              else {
                if (uVar13 < uVar11) break;
                bVar21 = false;
                if (uVar13 - uVar11 < 2) goto LAB_00029df0;
                local_aa = *(ushort *)(iVar14 + uVar11) << 8 | *(ushort *)(iVar14 + uVar11) >> 8;
                dVar7 = (double)(short)local_aa * (double)_DAT_00057028;
                uVar11 = uVar11 + 2;
                local_44 = 0.0;
                dVar8 = local_44;
                local_124 = dVar7;
LAB_0002a035:
              }
              local_18 = (double)(int)uVar16;
              local_24 = (double)(int)uVar18;
              if ((*pbVar1 & 8) != 0) {
                dVar3 = local_44 * local_24;
                local_24 = local_24 * local_124 + local_18 * dVar8;
                local_18 = local_18 * dVar7 + dVar3;
              }
              dVar3 = *param_3;
              dVar4 = param_3[1];
              local_114 = dVar3 * dVar7 + dVar8 * dVar4;
              local_10c = dVar3 * local_44 + local_124 * dVar4;
              dVar5 = param_3[3];
              dVar6 = param_3[2];
              local_104 = dVar7 * dVar6 + dVar8 * dVar5;
              local_fc = local_44 * dVar6 + local_124 * dVar5;
              local_f4 = dVar3 * local_18 + dVar4 * local_24 + param_3[4];
              local_ec = local_18 * dVar6 + local_24 * dVar5 + param_3[5];
              local_80 = 0xffffffff;
              local_e4 = uVar18;
              local_e0 = uVar16;
              bVar21 = recovered_29d8a(local_1c,(uint)(ushort)(uVar20 << 8 | uVar20 >> 8),&local_114
                                       ,param_4,local_dc);
              if (!bVar21) break;
              if ((pf_double_bits(local_b4) & 1) != 0) {
                uVar18 = *(uint *)(uVar19 + 8);
                if ((((uVar18 < uVar11) || (uVar18 - uVar11 < 2)) || (uVar18 < uVar11 + 2)) ||
                   (uVar20 = *(ushort *)(*(int *)(uVar19 + 4) + uVar11),
                   uVar13 = (uint)(ushort)(uVar20 << 8 | uVar20 >> 8),
                   uVar18 - (uVar11 + 2) < uVar13)) break;
                uVar11 = uVar11 + uVar13 + 2;
              }
              if ((local_28 & 0x20) == 0) goto LAB_00029dee;
              uVar13 = *(uint *)(uVar19 + 8);
            }
          }
        }
        else {
          uVar16 = (uint)CONCAT11(*(byte *)(local_28 + uVar11),
                                  *(undefined1 *)(local_28 + 1 + uVar11));
          if (uVar16 == 0) goto LAB_00029dee;
          bVar21 = true;
          if (uVar13 - uVar11 < uVar18 - uVar19) goto LAB_00029df0;
          uVar11 = uVar11 + 10;
          if (uVar11 <= uVar13) {
            local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar11));
            bVar21 = false;
            if (uVar13 - uVar11 < uVar16 * 2) goto LAB_00029df0;
            local_80 = 0xffffffff;
            recovered_2b384(&local_d8,uVar16);
            for (uVar18 = 0; local_d4 != uVar18; uVar18 = uVar18 + 1) {
              uVar20 = *(ushort *)
                        (*(int *)(local_1c + 4) + (uint)local_30 + uVar19 + 10 + uVar18 * 2);
              *(ushort *)(local_d8 + uVar18 * 2) = uVar20 << 8 | uVar20 >> 8;
            }
            uVar19 = (int)PF_PART4(local_24, 0) + local_d4 * 2;
            uVar18 = *(uint *)(local_1c + 8);
            if (uVar18 < uVar19 || uVar18 - uVar19 < 2) {
              bVar21 = false;
            }
            else {
              uVar11 = uVar19 + 2;
              bVar21 = false;
              if (uVar11 <= uVar18) {
                local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar11));
                uVar20 = *(ushort *)(*(int *)(local_1c + 4) + uVar19);
                uVar19 = (uint)(ushort)(uVar20 << 8 | uVar20 >> 8);
                local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),uVar19));
                if (uVar19 <= uVar18 - uVar11) {
                  local_94 = 0;
                  local_90 = 0;
                  local_8c = 0;
                  local_88 = *(ushort *)(local_d8 + -2 + local_d4 * 2) + 1;
                  local_80 = 1;
                  local_30 = (double)(CONCAT44(PF_PART4(local_30, 4),local_88) & 0xffffffff0000ffff);
                  recovered_29a7c(&local_94,local_88 & 0xffff);
                  local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + (int)PF_PART4(local_24, 0)));
                  while (local_90 < (uint)local_30) {
                    if (*(uint *)(local_1c + 8) <= (uint)local_18) {
LAB_0002a3bc:
                      bVar21 = false;
                      goto LAB_0002a53b;
                    }
                    local_114 = pf_bits_double(CONCAT71(PF_PART7(local_114, 1),
                                                 *(undefined1 *)
                                                  (*(int *)(local_1c + 4) + (uint)local_18)));
                    local_80 = 2;
                    recovered_2b424(&local_94,(undefined1 *)&local_114);
                    if ((pf_double_bits(local_114) & 8) == 0) {
                      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 1));
                    }
                    else {
                      if (*(uint *)(local_1c + 8) <= (uint)local_18 + 1) goto LAB_0002a3bc;
                      pcVar2 = (char *)(*(int *)(local_1c + 4) + 1 + (uint)local_18);
                      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 2));
                      cVar10 = *pcVar2;
                      while (cVar10 != '\0') {
                        local_24 = pf_bits_double(CONCAT71(PF_PART7(local_24, 1),cVar10 + -1));
                        local_80 = 3;
                        recovered_2b424(&local_94,(undefined1 *)&local_114);
                        cVar10 = PF_PART1(local_24, 0);
                      }
                    }
                  }
                  local_80 = 4;
                  recovered_2b468((int *)local_cc,(uint)local_30);
                  local_80 = 5;
                  recovered_2b468((int *)local_c0,(uint)local_30);
                  local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_94));
                  local_28 = local_cc[0];
                  sVar17 = 0;
                  for (iVar14 = 0; (uint)local_30 != iVar14; iVar14 = iVar14 + 1) {
                    bVar9 = *(byte *)(local_94 + iVar14);
                    if ((bVar9 & 2) == 0) {
                      if ((bVar9 & 0x10) == 0) {
                        bVar21 = false;
                        if ((*(uint *)(local_1c + 8) < (uint)local_18) ||
                           (*(uint *)(local_1c + 8) - (uint)local_18 < 2)) goto LAB_0002a511;
                        uVar20 = *(ushort *)(*(int *)(local_1c + 4) + (uint)local_18);
                        sVar17 = sVar17 + (uVar20 << 8 | uVar20 >> 8);
                        local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 2));
                      }
                    }
                    else {
                      if (*(uint *)(local_1c + 8) <= (uint)local_18) goto LAB_0002a50f;
                      uVar15 = (ushort)*(byte *)(*(int *)(local_1c + 4) + (uint)local_18);
                      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 1));
                      uVar20 = -uVar15;
                      if ((bVar9 & 0x10) != 0) {
                        uVar20 = uVar15;
                      }
                      sVar17 = sVar17 + uVar20;
                    }
                    *(short *)(local_cc[0] + iVar14 * 2) = sVar17;
                  }
                  local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_94));
                  local_28 = local_c0[0];
                  sVar17 = 0;
                  for (iVar14 = 0; (uint)local_30 != iVar14; iVar14 = iVar14 + 1) {
                    bVar9 = *(byte *)(local_94 + iVar14);
                    if ((bVar9 & 4) == 0) {
                      if ((bVar9 & 0x20) == 0) {
                        bVar21 = false;
                        if ((*(uint *)(local_1c + 8) < (uint)local_18) ||
                           (*(uint *)(local_1c + 8) - (uint)local_18 < 2)) goto LAB_0002a511;
                        uVar20 = *(ushort *)(*(int *)(local_1c + 4) + (uint)local_18);
                        sVar17 = sVar17 + (uVar20 << 8 | uVar20 >> 8);
                        local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 2));
                      }
                    }
                    else {
                      if (*(uint *)(local_1c + 8) <= (uint)local_18) goto LAB_0002a50f;
                      uVar15 = (ushort)*(byte *)(*(int *)(local_1c + 4) + (uint)local_18);
                      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),(uint)local_18 + 1));
                      uVar20 = -uVar15;
                      if ((bVar9 & 0x20) != 0) {
                        uVar20 = uVar15;
                      }
                      sVar17 = sVar17 + uVar20;
                    }
                    *(short *)(local_c0[0] + iVar14 * 2) = sVar17;
                  }
                  local_28 = 0;
                  local_b4 = (double)_DAT_00056810;
                  uVar19 = 0;
                  while (bVar21 = local_d4 <= uVar19, !bVar21) {
                    uVar20 = *(ushort *)(local_d8 + uVar19 * 2);
                    local_1c = (uint)uVar20;
                    if (local_1c < local_28) break;
                    local_44 = pf_bits_double(CONCAT44(PF_PART4(local_44, 4),uVar19));
                    if ((ushort)local_88 <= uVar20) break;
                    local_3c = (double *)0x0;
                    local_38 = 0;
                    local_34 = 0;
                    local_50 = (char *)0x0;
                    local_4c = 0;
                    local_48 = 0;
                    uVar19 = local_28;
                    while (uVar19 <= local_1c) {
                      local_9a = *(short *)(local_cc[0] + uVar19 * 2);
                      local_114 = (double)local_9a;
                      local_9c = *(short *)(local_c0[0] + uVar19 * 2);
                      local_10c = (double)local_9c;
                      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar19));
                      local_134[0] = *(byte *)(local_94 + uVar19) & 1;
                      local_80 = 6;
                      local_30 = local_10c;
                      local_18 = local_114;
                      recovered_2b160((int *)&local_3c,(undefined4 *)&local_114);
                      local_80 = 7;
                      recovered_2b59e((int *)&local_50,local_134);
                      uVar19 = (int)PF_PART4(local_24, 0) + 1;
                      uVar18 = uVar19;
                      if ((undefined4 *)local_1c == PF_PART4(local_24, 0)) {
                        uVar18 = local_28;
                      }
                      if ((local_134[0] == 0) && ((*(byte *)(local_94 + uVar18) & 1) == 0)) {
                        local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar19));
                        local_98 = *(short *)(local_cc[0] + uVar18 * 2);
                        local_96 = *(short *)(local_c0[0] + uVar18 * 2);
                        dVar7 = (local_18 + (double)local_98) * local_b4;
                        dVar8 = (local_30 + (double)local_96) * local_b4;
                        if (local_38 == local_34) {
                          uVar19 = local_38 * 2;
                          if (local_38 == 0) {
                            uVar19 = 4;
                          }
                          local_80 = 8;
                          local_30 = dVar8;
                          local_18 = dVar7;
                          recovered_2b528((int *)&local_3c,uVar19);
                          dVar7 = local_18;
                          dVar8 = local_30;
                        }
                        local_3c[local_38 * 2] = dVar7;
                        local_3c[local_38 * 2 + 1] = dVar8;
                        local_38 = local_38 + 1;
                        local_80 = 9;
                        recovered_2b63c((int *)&local_50,auStack_136 + -0xe);
                        uVar19 = (uint)PF_PART4(local_24, 0);
                      }
                    }
                    if (local_38 == 0) {
                      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_3c));
                    }
                    else {
                      if (*local_50 == '\x01') {
                        local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_3c));
                      }
                      else {
                        dVar7 = local_3c[local_38 * 2 + -2];
                        if (local_50[local_4c + -1] == '\x01') {
                          dVar8 = local_3c[local_38 * 2 + -1];
                        }
                        else {
                          dVar7 = (dVar7 + *local_3c) * local_b4;
                          dVar8 = (local_3c[local_38 * 2 + -1] + local_3c[1]) * local_b4;
                        }
                        if (local_38 == local_34) {
                          local_80 = 10;
                          local_24 = dVar7;
                          local_18 = dVar8;
                          recovered_2b528((int *)&local_3c,local_38 * 2);
                          dVar7 = local_24;
                          dVar8 = local_18;
                        }
                        local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_3c));
                        pdVar12 = local_3c + local_38 * 2;
                        iVar14 = local_38;
                        while (bVar21 = iVar14 != 0, iVar14 = iVar14 + -1, bVar21) {
                          *(undefined4 *)((int)pdVar12 + 0xc) = *(undefined4 *)((int)pdVar12 + -4);
                          *(undefined4 *)(pdVar12 + 1) = *(undefined4 *)(pdVar12 + -1);
                          *(undefined4 *)((int)pdVar12 + 4) = *(undefined4 *)((int)pdVar12 + -0xc);
                          *(undefined4 *)pdVar12 = *(undefined4 *)(pdVar12 + -2);
                          pdVar12 = pdVar12 + -2;
                        }
                        *local_3c = dVar7;
                        local_3c[1] = dVar8;
                        local_38 = local_38 + 1;
                        local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),local_38));
                        local_114 = pf_bits_double(CONCAT71(PF_PART7(local_114, 1),1));
                        local_80 = 0xb;
                        recovered_2b67e((int *)&local_50,(int)local_50,(undefined1 *)&local_114);
                        if ((uint)local_18 == 0) goto LAB_0002a966;
                      }
                      local_80 = 0xc;
                      recovered_2b160((int *)&local_3c,PF_PART4(local_24, 0));
                      local_114 = pf_bits_double(CONCAT71(PF_PART7(local_114, 1),1));
                      local_80 = 0xd;
                      recovered_2b63c((int *)&local_50,(undefined1 *)&local_114);
                      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_3c));
                      recovered_2b223(&local_114,param_3,local_3c);
                      local_80 = 0xe;
                      recovered_2b1ac(param_4,&local_114);
                      local_18 = pf_bits_double(CONCAT44(PF_PART4(local_18, 4),local_38));
                      iVar14 = 0;
                      while( true ) {
                        uVar19 = iVar14 + 1;
                        if ((uint)local_18 <= uVar19) break;
                        if (local_50[uVar19] == '\x01') {
                          recovered_2b223(&local_114,param_3,
                                          (double *)(uVar19 * 0x10 + (int)PF_PART4(local_24, 0)));
                          local_80 = 0xf;
                          local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar19));
                          recovered_2b252(param_4,&local_114);
                        }
                        else {
                          local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14 + 2U));
                          if ((uint)local_18 <= iVar14 + 2U) break;
                          recovered_2b223(&local_114,param_3,
                                          (double *)(iVar14 * 0x10 + (int)PF_PART4(local_24, 0)));
                          iVar14 = (int)PF_PART4(local_24, 0);
                          recovered_2b223((double *)local_134,param_3,
                                          (double *)(uVar19 * 0x10 + (int)PF_PART4(local_24, 0)));
                          recovered_2b223((double *)(auStack_136 + -0xe),param_3,
                                          (double *)((uint)local_30 * 0x10 + iVar14));
                          local_80 = 0x10;
                          recovered_2b7d0(param_4,&local_114,(double *)local_134,
                                          (double *)(auStack_136 + -0xe),0);
                        }
                        iVar14 = (uint)local_30;
                      }
                      local_80 = 0x11;
                      recovered_2b2f4(param_4);
                    }
LAB_0002a966:
                    uVar18 = local_1c + 1;
                    local_4c = 0;
                    recovered_23194();
                    local_38 = 0;
                    recovered_23194();
                    local_28 = uVar18;
                    uVar19 = PF_PART4(local_44, 0) + 1;
                  }
                  goto LAB_0002a511;
                }
              }
            }
            goto LAB_0002a556;
          }
        }
      }
      bVar21 = false;
      goto LAB_00029df0;
    }
  }
LAB_00029dee:
  bVar21 = true;
LAB_00029df0:
  recovered_234e0(&local_84);
  return bVar21;
LAB_0002a50f:
  local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_94));
  bVar21 = false;
LAB_0002a511:
  local_c0[1] = 0;
  recovered_23194();
  local_cc[1] = 0;
  recovered_23194();
LAB_0002a53b:
  local_90 = 0;
  recovered_23194();
LAB_0002a556:
  local_d4 = 0;
  recovered_23194();
  goto LAB_00029df0;
}
