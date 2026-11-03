#include "functions.h"
#undef DAT_00056d18
#define DAT_00056d18 (*(uint32_t *)(0x56d18U))
#undef DAT_00056d34
#define DAT_00056d34 (*(uint32_t *)(0x56d34U))
#undef DAT_00056d50
#define DAT_00056d50 (*(uint32_t *)(0x56d50U))
#undef DAT_00056d6c
#define DAT_00056d6c (*(uint32_t *)(0x56d6cU))
#undef DAT_0005cd9c
#define DAT_0005cd9c (*(uint8_t *)(0x5cd9cU))
#undef LAB_0002526c
#define LAB_0002526c (*(uint8_t *)(0x2526cU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_148 (*(undefined4 *)(frame + 580))
#define local_144 (*(undefined4 *)(frame + 584))
#define local_140 (*(undefined4 *)(frame + 588))
#define local_13c (*(undefined4 *)(frame + 592))
#define local_138 (*(undefined4 *)(frame + 596))
#define local_134 (*(undefined4 *)(frame + 600))
#define local_130 (*(void * *)(frame + 604))
#define local_12c (*(byte * *)(frame + 608))
#define local_128 (*(byte * *)(frame + 612))
#define local_124 (*(uint *)(frame + 616))
#define local_120 (*(int *)(frame + 620))
#define local_11c (*(int *)(frame + 624))
#define local_118 (*(byte * *)(frame + 628))
#define local_110 (*(uint *)(frame + 636))
#define local_10c (*(byte * (*)[2])(frame + 640))
#define local_104 (*(uint *)(frame + 648))
#define local_100 (*(uint *)(frame + 652))
#define local_fc (*(byte * *)(frame + 656))
#define local_f8 (*(byte * *)(frame + 660))
#define local_f4 (*(uint *)(frame + 664))
#define local_f0 (*(char *)(frame + 668))
#define local_ef (*(char *)(frame + 669))
#define local_ec (*(byte * *)(frame + 672))
#define local_e8 (*(int *)(frame + 676))
#define local_e4 (*(uint *)(frame + 680))
#define local_e0 (*(undefined4 *)(frame + 684))
#define local_dc (*(ushort * *)(frame + 688))
#define local_d8 (*(uint *)(frame + 692))
#define local_d4 (*(undefined4 *)(frame + 696))
#define local_d0 (*(void * *)(frame + 700))
#define local_cc (*(byte * *)(frame + 704))
#define local_c8 (*(byte * *)(frame + 708))
#define local_c4 (*(byte * *)(frame + 712))
#define local_c0 (*(undefined4 *)(frame + 716))
#define local_bc (*(undefined4 *)(frame + 720))
#define local_b8 (*(uint *)(frame + 724))
#define local_b4 (*(undefined4 *)(frame + 728))
#define local_b0 (*(undefined4 *)(frame + 732))
#define local_9c (*(undefined * *)(frame + 752))
#define local_98 (*(undefined * *)(frame + 756))
#define local_94 (*(undefined1 * *)(frame + 760))
#define local_90 (*(undefined1 * *)(frame + 764))
#define local_8c (*(undefined1 * *)(frame + 768))
#define local_7c (*(int *)(frame + 784))
#define local_78 (*(uint *)(frame + 788))
#define local_74 (*(undefined4 *)(frame + 792))
#define local_70 (*(uint *)(frame + 796))
#define local_6c (*(uint *)(frame + 800))
#define local_68 (*(byte * *)(frame + 804))
#define local_64 (*(uint *)(frame + 808))
#define local_60 (*(undefined2 *)(frame + 812))
#define local_5c (*(byte * *)(frame + 816))
#define local_58 (*(uint *)(frame + 820))
#define local_50 (*(byte * *)(frame + 828))
#define local_4c (*(byte * *)(frame + 832))
#define local_48 (*(undefined4 *)(frame + 836))
#define local_44 (*(undefined4 *)(frame + 840))
#define local_40 (*(uint *)(frame + 844))
#define local_3c (*(byte * *)(frame + 848))
#define local_38 (*(undefined4 *)(frame + 852))
#define local_34 (*(undefined4 *)(frame + 856))
#define local_30 (*(uint *)(frame + 860))
#define local_2c (*(byte * *)(frame + 864))
#define local_28 (*(byte * *)(frame + 868))
#define local_24 (*(uint * *)(frame + 872))
#define local_20 (*(byte * *)(frame + 876))
#define local_1c (*(byte * *)(frame + 880))
#define local_18 (*(byte * *)(frame + 884))
#define local_14 (*(byte * *)(frame + 888))
#define aiStackY_37c (*(int (*)[128])(frame + 16))
#define abStack_152 (*(byte (*)[10])(frame + 570))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23b42
 */

/* WARNING: Type propagation algorithm not settling */

byte * recovered_23b42(int param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[940] = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  undefined2 uVar12;
  ushort uVar13;
  byte bVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  byte **ppbVar18;
  byte *pbVar19;
  byte *pbVar20;

  recovered_2538c(param_3,aiStackY_37c + 0x84);
  recovered_23194();
  local_8c = (undefined1 *)(aiStackY_37c + 0x80);
  local_9c = PTR_LAB_0005d040;
  local_98 = &DAT_0005cd9c;
  local_90 = &LAB_0002526c;
  local_94 = (undefined1 *)((int)(uintptr_t)(frame + 908) + -4);
  recovered_234cb(&local_b4);
  if (param_2 == 0 || param_1 == 0) {
    pbVar5 = (byte *)0x0;
  }
  else {
    local_b0 = 0xffffffff;
    recovered_2dea8(&local_11c,(undefined1 *)param_1,(undefined1 *)(param_2 + param_1));
    local_10c[0] = (byte *)0x0;
    local_10c[1] = (byte *)0x0;
    local_104 = 0;
    local_100 = 0;
    local_fc = (byte *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = (ushort *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = (void *)0x0;
    local_cc = (byte *)0x0;
    local_c8 = (byte *)0x0;
    local_14 = (byte *)0x0;
    local_148 = 0;
    local_144 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = (void *)0x0;
    local_12c = (byte *)0x0;
    local_128 = (byte *)0x0;
    piVar15 = aiStackY_37c + 0x84;
    ppbVar18 = local_10c;
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppbVar18 = (byte *)*piVar15;
      piVar15 = piVar15 + 1;
      ppbVar18 = ppbVar18 + 1;
    }
    recovered_253bc(&local_e8,&local_148);
    recovered_253bc(&local_dc,&local_13c);
    local_cc = (byte *)0x0;
    recovered_23194();
    local_d0 = local_130;
    local_130 = (void *)0x0;
    local_cc = local_12c;
    local_12c = (byte *)0x0;
    local_c8 = local_128;
    local_128 = (byte *)0x0;
    recovered_25400((int)(aiStackY_37c + 0x84));
    if ((byte *)0x7 < local_118) {
      local_b0 = 1;
      iVar10 = recovered_213fb(local_11c,0x56aec,8);
      if (iVar10 == 0) {
        local_1c = (byte *)0x8;
        while (pbVar11 = local_1c, pbVar5 = local_118, iVar10 = local_11c,
              local_1c + 0xc <= local_118) {
          pbVar4 = (byte *)recovered_25d03((uint *)(local_1c + local_11c));
          pbVar19 = pbVar11 + 8;
          if (pbVar5 + -(int)pbVar19 < pbVar4 + 4) goto LAB_00023d34;
          local_14 = pbVar11 + iVar10 + 4;
          puVar16 = (uint *)(pbVar19 + iVar10);
          local_18 = (byte *)recovered_25d03((uint *)(pbVar4 + (int)pbVar19 + iVar10));
          pbVar5 = (byte *)recovered_25d0c(0,(int)local_14,4);
          local_24 = puVar16;
          if (pbVar4 != (byte *)0x0) {
            pbVar5 = (byte *)recovered_25d0c((uint)pbVar5,(int)puVar16,(int)pbVar4);
          }
          if (pbVar5 != local_18) goto LAB_00023d34;
          local_1c = pbVar4 + (int)pbVar19 + 4;
          local_18 = pbVar4;
          if (local_f0 == '\0') {
            local_b0 = 2;
            iVar10 = recovered_213fb((int)local_14,0x5753e,4);
            puVar16 = local_24;
            local_14 = (byte *)0x0;
            if ((local_18 != (byte *)0xd) || (iVar10 != 0)) goto LAB_00023d3b;
            pbVar5 = (byte *)recovered_25d03(local_24);
            local_10c[0] = pbVar5;
            local_10c[1] = (byte *)recovered_25d03(puVar16 + 1);
            bVar14 = (byte)puVar16[2];
            local_104 = (uint)bVar14;
            local_100 = (uint)*(byte *)((int)puVar16 + 9);
            local_fc = (byte *)(uint)*(byte *)((int)puVar16 + 10);
            local_f8 = (byte *)(uint)*(byte *)((int)puVar16 + 0xb);
            local_f4 = (uint)(byte)puVar16[3];
            local_f0 = '\x01';
            local_14 = (byte *)0x0;
            local_20 = local_f8;
            local_18 = local_fc;
            if ((pbVar5 == (byte *)0x0) || (local_10c[1] == (byte *)0x0)) goto LAB_00023d3b;
            bVar3 = false;
            if (local_100 < 7) {
              if ((0x55U >> (local_100 & 0x1f) & 1) == 0) {
                if (local_100 != 3) goto LAB_00023fb1;
                bVar14 = bVar14 - 8;
              }
              else {
                bVar14 = bVar14 - 8 & 0xf7;
              }
              bVar3 = bVar14 == 0;
            }
LAB_00023fb1:
            local_14 = (byte *)0x0;
            if ((((!bVar3) || (*(byte *)((int)puVar16 + 10) != 0)) ||
                (*(byte *)((int)puVar16 + 0xb) != 0)) || (1 < (byte)puVar16[3])) goto LAB_00023d3b;
          }
          else {
            local_b0 = 3;
            iVar10 = recovered_213fb((int)local_14,0x57548,4);
            if (iVar10 == 0) {
              if (local_18 == (byte *)0x0) goto LAB_00023d34;
              local_14 = (byte *)0x0;
              if (((byte *)0x300 < local_18) || ((uint)local_18 % 3 != 0)) goto LAB_00023d3b;
              local_b0 = 4;
              recovered_25d8a(&local_e8,(undefined1 *)local_24,local_18 + (int)local_24);
            }
            else {
              local_b0 = 5;
              iVar10 = recovered_213fb((int)local_14,0x5754d,4);
              if (iVar10 == 0) {
                if ((local_18 != (byte *)0x2 && local_100 == 0) ||
                   (local_18 != (byte *)0x6 && local_100 == 2)) goto LAB_00023d34;
                if (local_100 == 3) {
                  local_14 = (byte *)0x0;
                  if ((byte *)(local_e4 / 3) < local_18) goto LAB_00023d3b;
                }
                else {
                  local_14 = (byte *)0x0;
                  if ((local_100 == 4) || (local_100 == 6)) goto LAB_00023d3b;
                }
                local_14 = (byte *)0x0;
                local_b0 = 6;
                recovered_25d8a((int *)&local_dc,(undefined1 *)local_24,local_18 + (int)local_24);
              }
              else {
                local_b0 = 7;
                iVar10 = recovered_213fb((int)local_14,0x57552,4);
                if (iVar10 == 0) {
                  if (local_18 != (byte *)0x0) {
                    pbVar5 = local_18;
                    if (local_cc == local_c8) {
                      pbVar11 = (byte *)((int)local_cc * 2);
                      if (local_cc == (byte *)0x0) {
                        pbVar11 = (byte *)0x4;
                      }
                      if (local_cc < pbVar11) {
                        local_b0 = 8;
                        local_14 = pbVar11;
                        pvVar6 = recovered_23162((int)pbVar11 * 8);
                        pbVar5 = local_18;
                        for (pbVar11 = (byte *)0x0; local_cc != pbVar11; pbVar11 = pbVar11 + 1) {
                          uVar9 = *(undefined4 *)((int)local_d0 + (int)pbVar11 * 8);
                          *(undefined4 *)((int)pvVar6 + (int)pbVar11 * 8 + 4) =
                               *(undefined4 *)((int)local_d0 + (int)pbVar11 * 8 + 4);
                          *(undefined4 *)((int)pvVar6 + (int)pbVar11 * 8) = uVar9;
                        }
                        recovered_23194();
                        local_c8 = local_14;
                        local_d0 = pvVar6;
                      }
                    }
                    *(uint **)((int)local_d0 + (int)local_cc * 8) = local_24;
                    *(byte **)((int)local_d0 + (int)local_cc * 8 + 4) = pbVar5;
                    local_cc = local_cc + 1;
                    local_ec = local_ec + (int)pbVar5;
                  }
                }
                else {
                  local_b0 = 9;
                  iVar10 = recovered_213fb((int)local_14,0x57543,4);
                  if (iVar10 == 0) {
                    if (local_18 == (byte *)0x0) {
                      local_ef = '\x01';
                      break;
                    }
                    goto LAB_00023d34;
                  }
                  if ((*local_14 & 0x20) == 0) goto LAB_00023d34;
                }
              }
            }
          }
        }
        if (local_f0 != '\x01') goto LAB_00023d34;
        local_14 = (byte *)0x0;
        if ((local_ef == '\x01') && (local_ec != (byte *)0x0)) {
          if ((local_100 == 3) && (local_e4 == 0)) goto LAB_00023d34;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = (byte *)0x0;
          local_64 = 0;
          local_60 = 0;
          pbVar5 = abStack_152 + -0xe;
          recovered_253bc(&local_7c,aiStackY_37c + 0x84);
          pbVar11 = pbVar5;
          puVar16 = &local_70;
          for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(byte *)puVar16 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            puVar16 = (uint *)((int)puVar16 + 1);
          }
          recovered_23194();
          if (local_100 == 0) {
            if (local_d8 != 0) {
              if (local_d8 != 2) goto LAB_00024393;
              local_70 = (uint)(ushort)(*local_dc << 8 | *local_dc >> 8);
              local_60 = CONCAT11(PF_PART1(local_60, 1),1);
            }
LAB_000243b7:
            pbVar11 = local_10c[0];
            local_c4 = (byte *)0x0;
            local_c0 = 0;
            local_bc = 0;
            if (local_f4 == 0) {
              puVar16 = (uint *)recovered_25f02((int)local_10c);
              if (((pbVar11 == (byte *)0x0) ||
                  ((int)(ZEXT48(pbVar11) * ZEXT48(puVar16) >> 0x20) == 0)) &&
                 ((pbVar11 == (byte *)0x0 ||
                  ((int)(ZEXT48(pbVar11) * ZEXT48(local_10c[1]) >> 0x20) == 0)))) {
                local_14 = pbVar11;
                local_24 = puVar16;
                if ((uint)((int)local_10c[1] * (int)pbVar11) < 0x40000000) {
                  local_b0 = 0xb;
                  recovered_25ec4((int *)&local_c4,(int)local_10c[1] * (int)pbVar11 * 4);
                  iVar10 = 0;
                  local_b0 = 0xc;
                  bVar3 = recovered_25f26(aiStackY_37c + 0x84,(int *)&local_d0);
                  if (bVar3) {
                    iVar17 = (int)local_24 * (int)local_14;
                    uVar7 = recovered_25f02((int)local_10c);
                    local_b8 = 1;
                    if (7 < uVar7) {
                      local_b8 = uVar7 + 7 >> 3;
                    }
                    local_b0 = 0xd;
                    local_24 = (uint *)(iVar17 + 7U >> 3);
                    recovered_274ba(&local_5c);
                    if ((local_100 == 6) && (local_104 == 8)) {
                      local_1c = (byte *)-(int)local_24;
                      local_18 = (byte *)0x0;
                      pbVar11 = (byte *)0x0;
                      do {
                        local_14 = pbVar11;
                        if (local_10c[1] <= pbVar11) {
                          pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),iVar10 == 0);
                          goto LAB_0002521a;
                        }
                        local_b0 = 0xe;
                        uVar9 = recovered_26b2a((int)(aiStackY_37c + 0x84),(int)local_5c,local_58);
                        if ((char)uVar9 == '\0') break;
                        pbVar11 = local_1c + (int)(local_c4 + (int)local_18);
                        if (local_14 == (byte *)0x0) {
                          pbVar11 = (byte *)0x0;
                        }
                        local_b0 = 0xf;
                        uVar9 = recovered_26b60((uint)*local_5c,(int)(local_c4 + (int)local_18),
                                                (uint)(local_5c + 1),(int)pbVar11,(uint)local_24,4);
                        pbVar11 = local_14 + 1;
                        local_18 = local_18 + (int)local_24;
                      } while ((char)uVar9 != '\0');
                      local_58 = 0;
                      recovered_23194();
                      goto LAB_00024c6e;
                    }
                    local_b0 = 0x10;
                    recovered_274ba(&local_4c);
                    local_b0 = 0x11;
                    recovered_274ba(&local_3c);
                    local_30 = 0;
                    local_14 = (byte *)0x0;
                    for (local_50 = (byte *)0x0; local_50 < local_10c[1]; local_50 = local_50 + 1) {
                      local_b0 = 0x12;
                      uVar9 = recovered_26b2a((int)(aiStackY_37c + 0x84),(int)local_5c,local_58);
                      pbVar5 = (byte *)0x0;
                      if ((char)uVar9 == '\0') goto switchD_00024dab_caseD_1;
                      if (((uint)local_14 & 1) != 0) {
                        pbVar5 = local_4c;
                      }
                      local_b0 = 0x13;
                      uVar9 = recovered_26b60((uint)*local_5c,(int)local_3c,(uint)(local_5c + 1),
                                              (int)pbVar5,(uint)local_24,local_b8);
                      if ((char)uVar9 == '\0') {
LAB_000251d8:
                        pbVar5 = (byte *)0x0;
                        goto switchD_00024dab_caseD_1;
                      }
                      pbVar5 = (byte *)0x0;
                      local_14 = local_3c;
                      local_18 = local_10c[0];
                      local_20 = local_c4;
                      switch((uintptr_t)(local_100)) {
                      case 0:
                        if (local_104 == 8) {
                          iVar17 = (int)local_10c[0] * local_30;
                          for (pbVar11 = (byte *)0x0; pbVar5 = (byte *)0x0, local_10c[0] != pbVar11;
                              pbVar11 = pbVar11 + 1) {
                            uVar13 = CONCAT11(~(byte)local_60 |
                                              local_70 !=
                                              (CONCAT11((byte)local_60,local_3c[(int)pbVar11]) &
                                              0xff),local_3c[(int)pbVar11]) & 0x1ff;
                            bVar14 = (byte)uVar13;
                            local_c4[(int)pbVar11 * 4 + iVar17] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] = -(char)(uVar13 >> 8);
                          }
                        }
                        else {
                          iVar17 = (int)local_10c[0] * local_30;
                          for (pbVar11 = (byte *)0x0; local_10c[0] != pbVar11; pbVar11 = pbVar11 + 1
                              ) {
                            uVar7 = (uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 2) << 8 |
                                                  *(ushort *)(local_3c + (int)pbVar11 * 2) >> 8);
                            bVar14 = (byte)((uVar7 * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)pbVar11 * 4 + iVar17] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] = bVar14;
                            uVar7 = CONCAT11(uVar7 != local_70,~(byte)local_60 | uVar7 != local_70)
                                    & 0xffffff01;
                            bVar14 = -(char)uVar7;
                            pbVar5 = (byte *)CONCAT31((int3)(uVar7 >> 8),bVar14);
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] = bVar14;
                          }
                        }
                        break;
                      default:
                        goto switchD_00024dab_caseD_1;
                      case 2:
                        if (local_104 == 8) {
                          iVar17 = (int)local_10c[0] * local_30;
                          local_14 = local_3c + 2;
                          for (pbVar11 = (byte *)0x0; local_10c[0] != pbVar11; pbVar11 = pbVar11 + 1
                              ) {
                            bVar14 = local_14[-2];
                            uVar12 = (undefined2)CONCAT31((uint3)bVar14,0xff);
                            if (((PF_PART1(local_60, 1) == 1) && (local_6c == (uint3)bVar14)) &&
                               (local_68 == (byte *)(uint)local_14[-1])) {
                              uVar12 = CONCAT11(bVar14,-(local_64 != *local_14));
                            }
                            local_c4[(int)pbVar11 * 4 + iVar17] = (byte)((ushort)uVar12 >> 8);
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] = local_14[-1];
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] = *local_14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] = (byte)uVar12;
                            local_14 = local_14 + 3;
                          }
                        }
                        else {
                          iVar17 = (int)local_10c[0] * local_30;
                          local_2c = local_c4 + iVar17 + 3;
                          local_14 = local_3c + 5;
                          for (local_1c = (byte *)0x0; local_10c[0] != local_1c;
                              local_1c = local_1c + 1) {
                            uVar7 = (uint)(ushort)(*(ushort *)(local_14 + -5) << 8 |
                                                  *(ushort *)(local_14 + -5) >> 8);
                            local_28 = (byte *)(uint)(ushort)(*(ushort *)(local_14 + -3) << 8 |
                                                             *(ushort *)(local_14 + -3) >> 8);
                            local_40 = (uint)(ushort)(*(ushort *)(local_14 + -1) << 8 |
                                                     *(ushort *)(local_14 + -1) >> 8);
                            local_20 = (byte *)CONCAT31(PF_PART3(local_20, 1),local_28 != local_68);
                            local_c4[(int)local_1c * 4 + iVar17] =
                                 (byte)((uVar7 * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)local_1c * 4 + iVar17 + 1] =
                                 (byte)(((int)local_28 * 0xff + 0x7fffU) / 0xffff);
                            local_c4[(int)local_1c * 4 + iVar17 + 2] =
                                 (byte)((local_40 * 0xff + 0x7fff) / 0xffff);
                            bVar14 = -((local_40 != local_64 || local_28 != local_68) |
                                      ~PF_PART1(local_60, 1) & 1 | uVar7 != local_6c);
                            pbVar5 = (byte *)((uint)bVar14 << 8);
                            local_2c[(int)local_1c * 4] = bVar14;
                            local_14 = local_14 + 6;
                          }
                        }
                        break;
                      case 3:
                        local_40 = local_78 >> 2;
                        local_20 = local_c4 + (int)local_10c[0] * local_30;
                        for (local_1c = (byte *)0x0; local_18 != local_1c; local_1c = local_1c + 1)
                        {
                          if (local_40 <= local_14[(int)local_1c]) goto LAB_000251d8;
                          local_b0 = 0x14;
                          recovered_21348((int)local_20,(uint)local_14[(int)local_1c] * 4 + local_7c
                                          ,4);
                          local_20 = local_20 + 4;
                        }
                        break;
                      case 4:
                        if (local_104 == 8) {
                          iVar17 = (int)local_10c[0] * local_30;
                          for (pbVar11 = (byte *)0x0; local_10c[0] != pbVar11; pbVar11 = pbVar11 + 1
                              ) {
                            bVar14 = local_3c[(int)pbVar11 * 2];
                            local_c4[(int)pbVar11 * 4 + iVar17] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] = local_3c[(int)pbVar11 * 2];
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] = local_3c[(int)pbVar11 * 2 + 1]
                            ;
                          }
                        }
                        else {
                          iVar17 = (int)local_10c[0] * local_30;
                          for (pbVar11 = (byte *)0x0; local_10c[0] != pbVar11; pbVar11 = pbVar11 + 1
                              ) {
                            uVar13 = *(ushort *)(local_3c + (int)pbVar11 * 4 + 2);
                            pbVar5 = (byte *)0xffff;
                            bVar14 = (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 4)
                                                            << 8 | *(ushort *)
                                                                    (local_3c + (int)pbVar11 * 4) >>
                                                                   8) * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)pbVar11 * 4 + iVar17] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] = bVar14;
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] =
                                 (byte)(((uint)(ushort)(uVar13 << 8 | uVar13 >> 8) * 0xff + 0x7fff)
                                       / 0xffff);
                          }
                        }
                        break;
                      case 6:
                        if (local_104 == 8) {
                          local_b0 = 0x15;
                          recovered_21348((int)(local_c4 + (int)local_50 * (int)local_10c[0] * 4),
                                          (int)local_3c,(int)local_10c[0] << 2);
                        }
                        else {
                          iVar17 = (int)local_10c[0] * local_30;
                          for (pbVar11 = (byte *)0x0; local_10c[0] != pbVar11; pbVar11 = pbVar11 + 1
                              ) {
                            pbVar5 = (byte *)0xffff;
                            local_c4[(int)pbVar11 * 4 + iVar17] =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 8) <<
                                                        8 | *(ushort *)(local_3c + (int)pbVar11 * 8)
                                                            >> 8) * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)pbVar11 * 4 + iVar17 + 1] =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 8 + 2)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar11 * 8 + 2) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)pbVar11 * 4 + iVar17 + 2] =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 8 + 4)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar11 * 8 + 4) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                            local_c4[(int)pbVar11 * 4 + iVar17 + 3] =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar11 * 8 + 6)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar11 * 8 + 6) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                          }
                        }
                      }
                      uVar2 = local_34;
                      uVar1 = local_44;
                      uVar9 = local_48;
                      pbVar11 = local_4c;
                      local_4c = local_3c;
                      local_3c = pbVar11;
                      local_48 = local_38;
                      local_38 = uVar9;
                      local_44 = local_34;
                      local_34 = uVar1;
                      local_30 = local_30 + 4;
                      local_14 = (byte *)CONCAT31((int3)((uint)uVar2 >> 8),1);
                    }
                    pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),iVar10 == 0);
switchD_00024dab_caseD_1:
                    local_38 = 0;
                    recovered_23194();
                    local_48 = 0;
                    recovered_23194();
LAB_0002521a:
                    local_58 = 0;
                    recovered_23194();
                    recovered_26d50(aiStackY_37c + 0x84);
                    if ((char)pbVar5 != '\0') goto LAB_0002523c;
                  }
                  else {
LAB_00024c6e:
                    recovered_26d50(aiStackY_37c + 0x84);
                  }
                }
              }
LAB_00024c79:
              pbVar5 = (byte *)0x0;
            }
            else {
              if (((local_10c[0] != (byte *)0x0) &&
                  ((int)(ZEXT48(local_10c[0]) * ZEXT48(local_10c[1]) >> 0x20) != 0)) ||
                 (0x3fffffff < (uint)((int)local_10c[1] * (int)local_10c[0]))) goto LAB_00024c79;
              local_b0 = 0x16;
              recovered_25e64((int *)&local_c4,(int)local_10c[1] * (int)local_10c[0] * 4,
                              (undefined1 *)(aiStackY_37c + 0x84));
              uVar7 = 0;
              local_b0 = 0x17;
              bVar3 = recovered_25f26(aiStackY_37c + 0x84,(int *)&local_d0);
              if (!bVar3) goto LAB_00024c6e;
              uVar8 = recovered_25f02((int)local_10c);
              local_124 = 1;
              if (7 < uVar8) {
                local_124 = uVar8 + 7 >> 3;
              }
              for (iVar10 = 0; iVar10 != 7; iVar10 = iVar10 + 1) {
                local_2c = (byte *)(&DAT_00056d18)[iVar10];
                local_28 = (byte *)(&DAT_00056d34)[iVar10];
                local_18 = (byte *)(&DAT_00056d50)[iVar10];
                local_50 = (byte *)(&DAT_00056d6c)[iVar10];
                local_1c = (byte *)0x0;
                if (local_2c < local_10c[0]) {
                  local_1c = (byte *)((uint)(local_10c[0] + ~(uint)local_2c) / (uint)local_18 + 1);
                }
                if (local_28 < local_10c[1]) {
                  local_b8 = (uint)(local_10c[1] + ~(uint)local_28) / (uint)local_50 + 1;
                  if ((local_1c != (byte *)0x0) && (local_b8 != 0)) {
                    uVar8 = recovered_25f02((int)local_10c);
                    if ((int)(ZEXT48(local_1c) * (ulonglong)uVar8 >> 0x20) == 0) {
                      local_110 = uVar8 * (int)local_1c + 7 >> 3;
                      local_b0 = 0x18;
                      local_120 = iVar10;
                      recovered_274ba(&local_5c);
                      local_b0 = 0x19;
                      recovered_274ba(&local_4c);
                      local_b0 = 0x1a;
                      recovered_274ba(&local_3c);
                      local_2c = (byte *)((int)local_2c << 2);
                      local_28 = (byte *)((int)local_28 << 2);
                      local_50 = (byte *)((int)local_50 << 2);
                      local_18 = (byte *)((int)local_18 << 2);
                      local_14 = (byte *)0x0;
                      for (local_30 = 0; local_30 < local_b8; local_30 = local_30 + 1) {
                        local_b0 = 0x1b;
                        uVar9 = recovered_26b2a((int)(aiStackY_37c + 0x84),(int)local_5c,local_58);
                        if ((char)uVar9 == '\0') break;
                        pbVar11 = (byte *)0x0;
                        if (((uint)local_14 & 1) != 0) {
                          pbVar11 = local_4c;
                        }
                        local_b0 = 0x1c;
                        uVar7 = local_110;
                        uVar9 = recovered_26b60((uint)*local_5c,(int)local_3c,(uint)(local_5c + 1),
                                                (int)pbVar11,local_110,local_124);
                        if ((char)uVar9 == '\0') break;
                        local_14 = local_3c;
                        switch((uintptr_t)(local_100)) {
                        case 0:
                          if (local_104 == 8) {
                            pbVar11 = local_c4 + (int)local_2c +
                                      (int)local_10c[0] * (int)local_28 + 3;
                            for (pbVar4 = (byte *)0x0; local_1c != pbVar4; pbVar4 = pbVar4 + 1) {
                              bVar14 = local_3c[(int)pbVar4];
                              pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),local_70 != bVar14
                                                       );
                              pbVar11[-3] = bVar14;
                              pbVar11[-2] = bVar14;
                              pbVar11[-1] = bVar14;
                              *pbVar11 = -(~(byte)local_60 & 1 | local_70 != bVar14);
                              pbVar11 = pbVar11 + (int)local_18;
                            }
                          }
                          else {
                            pbVar11 = local_c4 + (int)local_2c +
                                      (int)local_10c[0] * (int)local_28 + 3;
                            for (pbVar4 = (byte *)0x0; local_1c != pbVar4; pbVar4 = pbVar4 + 1) {
                              uVar8 = (uint)(ushort)(*(ushort *)(local_3c + (int)pbVar4 * 2) << 8 |
                                                    *(ushort *)(local_3c + (int)pbVar4 * 2) >> 8);
                              bVar14 = (byte)((uVar8 * 0xff + 0x7fff) / 0xffff);
                              pbVar11[-3] = bVar14;
                              pbVar11[-2] = bVar14;
                              pbVar11[-1] = bVar14;
                              uVar8 = CONCAT31((int3)(CONCAT22((short)((uint)pbVar5 >> 0x10),
                                                               CONCAT11(uVar8 != local_70,
                                                                        (byte)local_60)) >> 8),
                                               ~(byte)local_60 | uVar8 != local_70) & 0xffffff01;
                              bVar14 = -(char)uVar8;
                              pbVar5 = (byte *)CONCAT31((int3)(uVar8 >> 8),bVar14);
                              *pbVar11 = bVar14;
                              pbVar11 = pbVar11 + (int)local_18;
                            }
                          }
                          break;
                        default:
                          goto switchD_0002465a_caseD_1;
                        case 2:
                          if (local_104 == 8) {
                            pbVar4 = local_c4 + (int)local_2c +
                                     (int)local_10c[0] * (int)local_28 + 3;
                            pbVar19 = local_3c + 2;
                            pbVar11 = local_1c;
                            while (bVar3 = pbVar11 != (byte *)0x0, pbVar11 = pbVar11 + -1, bVar3) {
                              bVar14 = pbVar19[-2];
                              uVar12 = (undefined2)CONCAT31((uint3)bVar14,0xff);
                              if (((PF_PART1(local_60, 1) == 1) && (local_6c == (uint3)bVar14)) &&
                                 (local_68 == (byte *)(uint)pbVar19[-1])) {
                                uVar12 = CONCAT11(bVar14,-(local_64 != *pbVar19));
                              }
                              pbVar4[-3] = (byte)((ushort)uVar12 >> 8);
                              pbVar4[-2] = pbVar19[-1];
                              pbVar4[-1] = *pbVar19;
                              *pbVar4 = (byte)uVar12;
                              pbVar4 = pbVar4 + (int)local_18;
                              pbVar19 = pbVar19 + 3;
                            }
                          }
                          else {
                            pbVar4 = local_c4 + (int)local_2c +
                                     (int)local_10c[0] * (int)local_28 + 3;
                            pbVar19 = local_3c + 5;
                            pbVar11 = local_1c;
                            while (bVar3 = pbVar11 != (byte *)0x0, pbVar11 = pbVar11 + -1, bVar3) {
                              uVar8 = (uint)(ushort)(*(ushort *)(pbVar19 + -5) << 8 |
                                                    *(ushort *)(pbVar19 + -5) >> 8);
                              pbVar20 = (byte *)(uint)(ushort)(*(ushort *)(pbVar19 + -3) << 8 |
                                                              *(ushort *)(pbVar19 + -3) >> 8);
                              local_40 = (uint)(ushort)(*(ushort *)(pbVar19 + -1) << 8 |
                                                       *(ushort *)(pbVar19 + -1) >> 8);
                              bVar14 = ~PF_PART1(local_60, 1) | uVar8 != local_6c;
                              local_24 = (uint *)CONCAT31(PF_PART3(local_24, 1),pbVar20 != local_68);
                              pbVar4[-3] = (byte)((uVar8 * 0xff + 0x7fff) / 0xffff);
                              pbVar4[-2] = (byte)(((int)pbVar20 * 0xff + 0x7fffU) / 0xffff);
                              pbVar4[-1] = (byte)((local_40 * 0xff + 0x7fff) / 0xffff);
                              uVar8 = CONCAT22((short)((uint)pbVar5 >> 0x10),
                                               CONCAT11((local_40 != local_64 || pbVar20 != local_68
                                                        ) | bVar14,bVar14)) & 0xffff01ff;
                              bVar14 = -(char)(uVar8 >> 8);
                              pbVar5 = (byte *)((uint)CONCAT21((short)(uVar8 >> 0x10),bVar14) << 8);
                              *pbVar4 = bVar14;
                              pbVar4 = pbVar4 + (int)local_18;
                              pbVar19 = pbVar19 + 6;
                              local_20 = pbVar11;
                            }
                          }
                          break;
                        case 3:
                          local_40 = local_78 >> 2;
                          puVar16 = (uint *)(local_c4 + (int)local_2c +
                                            (int)local_10c[0] * (int)local_28);
                          pbVar11 = (byte *)0x0;
                          while (local_1c != pbVar11) {
                            if (local_40 <= local_14[(int)pbVar11]) goto switchD_0002465a_caseD_1;
                            local_b0 = 0x1d;
                            uVar7 = 4;
                            local_24 = puVar16;
                            local_20 = pbVar11;
                            recovered_21348((int)puVar16,(uint)local_14[(int)pbVar11] * 4 + local_7c
                                            ,4);
                            puVar16 = (uint *)((int)local_24 + (int)local_18);
                            pbVar11 = local_20 + 1;
                          }
                          break;
                        case 4:
                          if (local_104 == 8) {
                            pbVar11 = local_c4 + (int)local_2c +
                                      (int)local_10c[0] * (int)local_28 + 3;
                            for (pbVar4 = (byte *)0x0; local_1c != pbVar4; pbVar4 = pbVar4 + 1) {
                              bVar14 = local_3c[(int)pbVar4 * 2];
                              pbVar11[-3] = bVar14;
                              pbVar11[-2] = bVar14;
                              pbVar11[-1] = local_3c[(int)pbVar4 * 2];
                              *pbVar11 = local_3c[(int)pbVar4 * 2 + 1];
                              pbVar11 = pbVar11 + (int)local_18;
                            }
                          }
                          else {
                            pbVar11 = local_c4 + (int)local_2c +
                                      (int)local_10c[0] * (int)local_28 + 3;
                            for (pbVar4 = (byte *)0x0; local_1c != pbVar4; pbVar4 = pbVar4 + 1) {
                              uVar13 = *(ushort *)(local_3c + (int)pbVar4 * 4 + 2);
                              pbVar5 = (byte *)0xffff;
                              bVar14 = (byte)(((uint)(ushort)(*(ushort *)
                                                               (local_3c + (int)pbVar4 * 4) << 8 |
                                                             *(ushort *)(local_3c + (int)pbVar4 * 4)
                                                             >> 8) * 0xff + 0x7fff) / 0xffff);
                              pbVar11[-3] = bVar14;
                              pbVar11[-2] = bVar14;
                              pbVar11[-1] = bVar14;
                              *pbVar11 = (byte)(((uint)(ushort)(uVar13 << 8 | uVar13 >> 8) * 0xff +
                                                0x7fff) / 0xffff);
                              pbVar11 = pbVar11 + (int)local_18;
                            }
                          }
                          break;
                        case 6:
                          if (local_104 == 8) {
                            puVar16 = (uint *)(local_c4 + (int)local_2c +
                                              (int)local_10c[0] * (int)local_28);
                            pbVar11 = local_1c;
                            while (pbVar11 != (byte *)0x0) {
                              local_b0 = 0x1e;
                              uVar7 = 4;
                              local_24 = puVar16;
                              local_20 = pbVar11 + -1;
                              recovered_21348((int)puVar16,(int)local_14,4);
                              local_14 = local_14 + 4;
                              puVar16 = (uint *)((int)local_24 + (int)local_18);
                              pbVar11 = local_20;
                            }
                          }
                          else {
                            pbVar11 = local_c4 + (int)local_2c +
                                      (int)local_10c[0] * (int)local_28 + 3;
                            for (pbVar4 = (byte *)0x0; local_1c != pbVar4; pbVar4 = pbVar4 + 1) {
                              pbVar5 = (byte *)0x7fff;
                              pbVar11[-3] = (byte)(((uint)(ushort)(*(ushort *)
                                                                    (local_3c + (int)pbVar4 * 8) <<
                                                                   8 | *(ushort *)
                                                                        (local_3c + (int)pbVar4 * 8)
                                                                       >> 8) * 0xff + 0x7fff) /
                                                  0xffff);
                              pbVar11[-2] = (byte)(((uint)(ushort)(*(ushort *)
                                                                    (local_3c + (int)pbVar4 * 8 + 2)
                                                                   << 8 | *(ushort *)
                                                                           (local_3c +
                                                                           (int)pbVar4 * 8 + 2) >> 8
                                                                  ) * 0xff + 0x7fff) / 0xffff);
                              pbVar11[-1] = (byte)(((uint)(ushort)(*(ushort *)
                                                                    (local_3c + (int)pbVar4 * 8 + 4)
                                                                   << 8 | *(ushort *)
                                                                           (local_3c +
                                                                           (int)pbVar4 * 8 + 4) >> 8
                                                                  ) * 0xff + 0x7fff) / 0xffff);
                              *pbVar11 = (byte)(((uint)(ushort)(*(ushort *)
                                                                 (local_3c + (int)pbVar4 * 8 + 6) <<
                                                                8 | *(ushort *)
                                                                     (local_3c + (int)pbVar4 * 8 + 6
                                                                     ) >> 8) * 0xff + 0x7fff) /
                                               0xffff);
                              pbVar11 = pbVar11 + (int)local_18;
                            }
                          }
                        }
                        uVar1 = local_44;
                        uVar9 = local_48;
                        pbVar11 = local_4c;
                        local_4c = local_3c;
                        local_3c = pbVar11;
                        local_48 = local_38;
                        local_38 = uVar9;
                        local_44 = local_34;
                        local_34 = uVar1;
                        local_28 = local_28 + (int)local_50;
                        local_14 = (byte *)CONCAT31((int3)((uint)local_50 >> 8),1);
                      }
switchD_0002465a_caseD_1:
                      local_38 = 0;
                      recovered_23194();
                      local_48 = 0;
                      recovered_23194();
                      local_58 = 0;
                      recovered_23194();
                      iVar10 = local_120;
                      if (local_b8 <= local_30) goto LAB_00024ab9;
                    }
                    goto LAB_00024c6e;
                  }
                }
LAB_00024ab9:
              }
              recovered_26d50(aiStackY_37c + 0x84);
              if (uVar7 != 0) goto LAB_00024c79;
LAB_0002523c:
              *param_3 = local_10c[0];
              param_3[1] = local_10c[1];
              recovered_253bc(param_3 + 2,&local_c4);
              pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),1);
            }
            local_c0 = 0;
            recovered_23194();
          }
          else {
            if (local_100 == 2) {
              if (local_d8 != 0) {
                if (local_d8 != 6) goto LAB_00024393;
                local_6c = (uint)(ushort)(*local_dc << 8 | *local_dc >> 8);
                local_68 = (byte *)(uint)(ushort)(local_dc[1] << 8 | local_dc[1] >> 8);
                local_64 = (uint)(ushort)(local_dc[2] << 8 | local_dc[2] >> 8);
                local_60 = CONCAT11(1,(byte)local_60);
              }
              goto LAB_000243b7;
            }
            if (local_100 == 3) {
              local_14 = (byte *)(local_e4 / 3);
              pbVar5 = (byte *)0x0;
              if ((local_e4 != 0) && (local_e4 % 3 == 0)) {
                local_b0 = 10;
                recovered_25e64(&local_7c,(int)local_14 * 4,(undefined1 *)(aiStackY_37c + 0x84));
                iVar10 = 0;
                for (pbVar11 = (byte *)0x0; local_14 != pbVar11; pbVar11 = pbVar11 + 1) {
                  *(undefined1 *)(local_7c + (int)pbVar11 * 4) = *(undefined1 *)(local_e8 + iVar10);
                  *(undefined1 *)(local_7c + 1 + (int)pbVar11 * 4) =
                       *(undefined1 *)(local_e8 + 1 + iVar10);
                  *(undefined1 *)(local_7c + 2 + (int)pbVar11 * 4) =
                       *(undefined1 *)(local_e8 + 2 + iVar10);
                  iVar10 = iVar10 + 3;
                }
                for (uVar7 = 0; uVar7 < local_d8; uVar7 = uVar7 + 1) {
                  *(undefined1 *)(local_7c + 3 + uVar7 * 4) = *(undefined1 *)((int)local_dc + uVar7)
                  ;
                }
                goto LAB_000243b7;
              }
            }
            else {
              if (local_d8 == 0) goto LAB_000243b7;
LAB_00024393:
              pbVar5 = (byte *)0x0;
            }
          }
          local_78 = 0;
          local_14 = pbVar5;
          recovered_23194();
        }
      }
      else {
LAB_00023d34:
        local_14 = (byte *)0x0;
      }
    }
LAB_00023d3b:
    recovered_25400((int)local_10c);
    local_118 = (byte *)0x0;
    recovered_23194();
    pbVar5 = local_14;
  }
  recovered_234e0(&local_b4);
  return pbVar5;
}
