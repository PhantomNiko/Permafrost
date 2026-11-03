#include "functions.h"
#undef DAT_00057024
#define DAT_00057024 (*(uint8_t *)(0x57024U))
#undef DAT_0005ce5c
#define DAT_0005ce5c (*(uint8_t *)(0x5ce5cU))
#undef LAB_0002888a
#define LAB_0002888a (*(uint8_t *)(0x2888aU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_fc (*(byte * *)(frame + 84))
#define local_f8 (*(uint *)(frame + 88))
#define local_f4 (*(undefined4 *)(frame + 92))
#define local_e0 (*(undefined4 *)(frame + 112))
#define local_d8 (*(void * *)(frame + 120))
#define local_d4 (*(int ** *)(frame + 124))
#define local_d0 (*(undefined4 * *)(frame + 128))
#define local_cc (*(undefined4 * *)(frame + 132))
#define local_c8 (*(uint *)(frame + 136))
#define local_c4 (*(undefined4 *)(frame + 140))
#define local_c0 (*(ushort *)(frame + 144))
#define local_be (*(ushort *)(frame + 146))
#define local_bc (*(byte * *)(frame + 148))
#define local_b8 (*(undefined4 * *)(frame + 152))
#define local_b4 (*(uint *)(frame + 156))
#define local_b0 (*(uint *)(frame + 160))
#define local_ac (*(int * *)(frame + 164))
#define local_a8 (*(uint *)(frame + 168))
#define local_a4 (*(double *)(frame + 172))
#define local_9c (*(int * *)(frame + 180))
#define local_98 (*(int *)(frame + 184))
#define local_8c (*(undefined4 *)(frame + 196))
#define local_88 (*(undefined4 *)(frame + 200))
#define local_74 (*(undefined * *)(frame + 220))
#define local_70 (*(undefined * *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
#define local_68 (*(undefined1 * *)(frame + 232))
#define local_64 (*(undefined1 * *)(frame + 236))
#define local_54 (*(int * *)(frame + 252))
#define local_50 (*(int * *)(frame + 256))
#define local_4c (*(int *)(frame + 260))
#define uStackY_140 (*(undefined4 *)(frame + 16))
#define local_48 (*(int *)(frame + 264))
#define local_44 (*(int *)(frame + 268))
#define local_40 (*(int *)(frame + 272))
#define local_3c (*(int * *)(frame + 276))
#define local_38 (*(void * *)(frame + 280))
#define local_34 (*(uint *)(frame + 284))
#define local_30 (*(int * *)(frame + 288))
#define local_2c (*(double *)(frame + 292))
#define local_24 (*(double *)(frame + 300))
#define local_1c (*(int * *)(frame + 308))
#define local_18 (*(byte * *)(frame + 312))
#define local_14 (*(uint * *)(frame + 316))
#define in_stack_00000018 (*(double *)(frame + 360))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27b0d
 */

byte * recovered_27b0d(int *param_1,byte *param_2,uint param_3,int *param_4,uint param_5)

{
  unsigned char frame[368] = {0};

  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  int *piVar21;
  byte **ppbVar22;
  byte *pbVar23;
  bool bVar24;
  ushort in_FPUControlWord = pf_fpu_control();
  float10 fVar25;

  local_6c = (undefined1 *)((int)(uintptr_t)(frame + 336) + -4);
  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 336) + -0x13c);
  local_74 = PTR_LAB_0005d040;
  local_70 = &DAT_0005ce5c;
  local_68 = &LAB_0002888a;
  recovered_234cb(&local_8c);
  pbVar19 = (byte *)0x0;
  if (((param_1 != (int *)0x0) && (param_2 != (byte *)0x0)) && (*param_1 != 0)) {
    if (*param_2 == 0) {
      local_88 = 0xffffffff;
      local_bc = recovered_23162(0x18);
      local_88 = 1;
      local_18 = local_bc;
      recovered_28984((undefined4 *)local_bc);
      pbVar19 = local_18;
    }
    else {
      local_cc = (undefined4 *)0x0;
      local_c8 = 0;
      local_c4 = 0;
      local_88 = 2;
      recovered_289b8((int *)&local_cc);
      local_fc = (byte *)0x0;
      local_f8 = 0;
      local_f4 = 0;
LAB_00027bb5:
      piVar5 = (int *)(uint)*param_2;
      if (piVar5 != (int *)0x0) {
        local_18 = param_2 + 1;
        if (-1 < (char)*param_2) {
          local_88 = 3;
          local_50 = piVar5;
          recovered_2dcf4((int *)&local_fc,&local_50);
          param_2 = local_18;
          goto LAB_00027bb5;
        }
        local_50 = (int *)0xfffd;
        if (((uint)piVar5 & 0xffffffe0) == 0xc0) {
          local_50 = (int *)((uint)piVar5 & 0x1f);
          uStackY_140 = 1;
        }
        else if (((uint)piVar5 & 0xfffffff0) == 0xe0) {
          local_50 = (int *)((uint)piVar5 & 0xf);
          uStackY_140 = 2;
        }
        else {
          if (((uint)piVar5 & 0xfffffff8) != 0xf0) {
            local_9c = (int *)0xfffd;
            local_88 = 4;
            recovered_2dcf4((int *)&local_fc,&local_9c);
            param_2 = local_18;
            goto LAB_00027bb5;
          }
          local_50 = (int *)((uint)piVar5 & 7);
          uStackY_140 = 3;
        }
        for (iVar11 = 0; uStackY_140 != iVar11; iVar11 = iVar11 + 1) {
          if ((local_18[iVar11] & 0xffffffc0) != 0x80) {
            local_9c = (int *)0xfffd;
            local_88 = 5;
            recovered_2dcf4((int *)&local_fc,&local_9c);
            param_2 = local_18;
            goto LAB_00027bb5;
          }
          local_50 = (int *)((int)local_50 << 6 | local_18[iVar11] & 0x3f);
        }
        local_2c = pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),uStackY_140));
        local_88 = 6;
        recovered_2de68((int *)&local_fc,&local_50);
        param_2 = local_18 + (int)PF_PART4(local_2c, 0);
        goto LAB_00027bb5;
      }
      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_fc));
      local_2c = pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),local_f8 << 2));
      for (pbVar19 = (byte *)0x0; PF_PART4(local_2c, 0) != pbVar19; pbVar19 = pbVar19 + 4) {
        local_50 = *(int **)(pbVar19 + (int)PF_PART4(local_24, 0));
        if (local_50 != (int *)0xd) {
          local_18 = pbVar19;
          if (local_50 == (int *)0xa) {
            local_88 = 7;
            recovered_289b8((int *)&local_cc);
            pbVar19 = local_18;
          }
          else {
            local_88 = 8;
            recovered_2de68(local_cc + local_c8 * 3 + -3,&local_50);
            pbVar19 = local_18;
          }
        }
      }
      local_f8 = 0;
      recovered_23194();
      if (local_c8 == 0) {
        local_88 = 9;
        recovered_289b8((int *)&local_cc);
      }
      local_50 = (int *)0x0;
      local_4c = 0;
      local_48 = 0;
      local_88 = 10;
      recovered_28a02((int *)&local_50,local_c8);
      puVar12 = local_cc + local_c8 * 3;
      local_18 = (byte *)0x1;
      uVar13 = 0;
      puVar6 = local_cc;
      while (puVar6 != puVar12) {
        local_d0 = puVar6;
        local_54 = param_1;
        if ((int *)*param_1 == (int *)0x0) {
          local_d8 = (void *)0x0;
          local_40 = 1;
          local_44 = 1;
          uVar9 = 0;
          local_b0 = 0;
        }
        else {
          local_2c = (double)(float)param_1[1];
          local_88 = 0xc;
          fVar25 = (float10)(**(code **)(*(int *)*param_1 + 0x10))();
          local_2c = (double)((float10)local_2c / fVar25);
          local_d4 = &local_54;
          local_88 = 0xd;
          fVar25 = (float10)(**(code **)(*(int *)*local_54 + 0x14))();
          local_88 = 0xe;
          iVar11 = recovered_2dd34(&local_d4,(double)((float10)local_2c * fVar25));
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          local_88 = 0xf;
          fVar25 = (float10)(**(code **)(*(int *)*local_54 + 0x14))();
          local_24 = (double)fVar25;
          local_88 = 0x10;
          fVar25 = (float10)(**(code **)(*(int *)*local_54 + 0x18))();
          local_a4 = (double)fVar25;
          local_88 = 0x11;
          fVar25 = (float10)(**(code **)(*(int *)*local_54 + 0x1c))();
          local_88 = 0x12;
          iVar7 = recovered_2dd34(&local_d4,
                                  (double)((float10)local_2c *
                                          ((float10)local_a4 + (float10)local_24 + fVar25)));
          if (iVar7 < 2) {
            iVar7 = 1;
          }
          puVar15 = (undefined4 *)*local_d0;
          puVar6 = puVar15 + local_d0[1];
          local_a4 = 0.0;
          local_ac = (int *)0x0;
          local_38 = (void *)0x0;
          local_34 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_40 = 0;
          local_30 = (int *)0x0;
          local_1c = (int *)0x0;
          local_2c = pf_bits_double((pf_double_bits(local_2c) & 0xffffffff00000000));
          local_b4 = 0;
          local_44 = iVar7;
          while (piVar5 = local_54, puVar15 != puVar6) {
            local_9c = (int *)*puVar15;
            piVar4 = local_54 + 2;
            local_b8 = puVar15;
            iVar8 = recovered_2dd88(piVar4,(int *)&local_9c);
            local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),iVar8));
            if (iVar8 == piVar5[3] * 0x28 + piVar5[2]) {
              local_24 = (double)pf_bits_float((uintptr_t)piVar5[1]);
              local_88 = 0x14;
              local_14 = piVar5;
              local_3c = piVar4;
              (**(code **)(*(int *)*piVar5 + 0x10))();
              local_88 = 0x15;
              (**(code **)(*(int *)*local_14 + 0xc))();
              iVar8 = recovered_2dd88(local_3c,(int *)&local_9c);
              uVar9 = local_14[3];
              local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),iVar8));
              if (iVar8 == uVar9 * 0x28 + local_14[2]) {
                if ((local_14[6] == 0) ||
                   (piVar5 = local_14, (uint)(local_14[6] * 3) < uVar9 * 4 + 4)) {
                  uVar20 = uVar9 * 2 + 2;
                  uVar3 = 8;
                  uVar14 = uVar9 * 2;
                  if (uVar9 < 4) {
                    uVar14 = uVar3;
                  }
                  if (uVar14 <= uVar20) {
                    uVar14 = uVar20;
                  }
                  do {
                    uVar9 = uVar3;
                    uVar3 = uVar9 * 2;
                  } while (uVar9 < uVar14);
                  local_88 = 0x16;
                  local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),local_14 + 5));
                  recovered_29b7e(local_14 + 5,uVar9,(undefined4 *)&DAT_00057024);
                  local_88 = 0x17;
                  recovered_29b7e(local_14 + 8,local_14[3],(undefined4 *)&DAT_00057024);
                  piVar5 = local_14;
                  piVar4 = local_3c;
                  for (uVar9 = 0; uVar9 < (uint)local_14[6]; uVar9 = uVar9 + 1) {
                    *(undefined4 *)(*(uint32_t *)(uintptr_t)PF_PART4(local_24, 0) + uVar9 * 4) = 0xffffffff;
                  }
                  for (uVar20 = 0; uVar9 = piVar5[3], uVar20 < uVar9; uVar20 = uVar20 + 1) {
                    recovered_2ddf2((int)piVar4,uVar20);
                  }
                }
                if (uVar9 == piVar5[4]) {
                  uVar20 = uVar9 * 2;
                  if (uVar9 == 0) {
                    uVar20 = 4;
                  }
                  if (uVar9 < uVar20) {
                    local_88 = 0x18;
                    pvVar10 = recovered_23162(uVar20 * 0x28);
                    local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),pvVar10));
                    iVar8 = 0x1c;
                    uVar9 = 0;
                    while( true ) {
                      piVar5 = local_14;
                      piVar4 = local_3c;
                      if ((uint)local_14[3] <= uVar9) break;
                      iVar16 = *local_3c;
                      *(undefined4 *)((int)PF_PART4(local_24, 0) + -0x1c + iVar8) =
                           *(undefined4 *)(iVar16 + iVar8 + -0x1c);
                      recovered_29d62((undefined4 *)((int)PF_PART4(local_24, 0) + iVar8 + -0x18),
                                      (undefined4 *)(iVar16 + iVar8 + -0x18));
                      recovered_2de18((undefined4 *)(*piVar4 + iVar8));
                      iVar8 = iVar8 + 0x28;
                      uVar9 = uVar9 + 1;
                    }
                    recovered_23194();
                    piVar5[2] = (int)PF_PART4(local_24, 0);
                    piVar5[4] = uVar20;
                    uVar9 = piVar5[3];
                  }
                }
                puVar15 = (undefined4 *)(piVar5[2] + uVar9 * 0x28);
                *puVar15 = local_9c;
                recovered_29d62(puVar15 + 1,&local_fc);
                piVar5[3] = piVar5[3] + 1;
                local_88 = 0x19;
                recovered_29c88(piVar5 + 8,(undefined4 *)&DAT_00057024);
                piVar5 = local_14;
                recovered_2ddf2((int)local_3c,local_14[3] + -1);
                local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),piVar5[2] + piVar5[3] * 0x28 + -0x28));
              }
              local_e0 = 0;
              recovered_23194();
            }
            local_88 = 0x1a;
            fVar25 = recovered_217e7(local_a4);
            local_c0 = in_FPUControlWord | 0xc00;
            local_14 = (int *)(*(int *)((int)PF_PART4(local_24, 0) + 4) + (int)ROUND(fVar25));
            local_3c = (int *)(iVar11 - *(int *)((int)PF_PART4(local_24, 0) + 8));
            if (local_34 == local_a8) {
              local_a8 = local_34 * 2;
              if (local_34 == 0) {
                local_a8 = 4;
              }
              if (local_34 < local_a8) {
                local_88 = 0x1b;
                pvVar10 = recovered_23162(local_a8 * 0xc);
                iVar8 = 0;
                uVar9 = local_34;
                while( true ) {
                  bVar24 = uVar9 == 0;
                  uVar9 = uVar9 - 1;
                  if (bVar24) break;
                  *(undefined4 *)((int)pvVar10 + iVar8 + 8) =
                       *(undefined4 *)((int)PF_PART4(local_2c, 0) + 8 + iVar8);
                  uVar2 = *(undefined4 *)((int)PF_PART4(local_2c, 0) + iVar8);
                  *(undefined4 *)((int)pvVar10 + iVar8 + 4) =
                       *(undefined4 *)((int)PF_PART4(local_2c, 0) + 4 + iVar8);
                  *(undefined4 *)((int)pvVar10 + iVar8) = uVar2;
                  iVar8 = iVar8 + 0xc;
                }
                recovered_23194();
                local_b0 = local_a8;
                local_2c = pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),pvVar10));
                local_38 = pvVar10;
              }
              else {
                local_a8 = local_34;
              }
            }
            iVar16 = local_34 * 0xc;
            *(int *)((int)PF_PART4(local_2c, 0) + iVar16) = (int)PF_PART4(local_24, 0) + 4;
            *(int **)((int)PF_PART4(local_2c, 0) + 4 + iVar16) = local_14;
            *(int **)((int)PF_PART4(local_2c, 0) + 8 + iVar16) = local_3c;
            iVar8 = *(int *)((int)PF_PART4(local_24, 0) + 0xc);
            if (iVar8 < 1) {
              iVar8 = (int)PF_PART4(local_24, 0);
            }
            else {
              iVar18 = *(int *)((int)PF_PART4(local_24, 0) + 0x10);
              if (0 < iVar18) {
                if ((local_b4 & 1) == 0) {
                  local_40 = iVar8 + (int)local_14;
                  local_44 = iVar18 + (int)local_3c;
                  local_b4 = CONCAT31((int3)((uint)iVar16 >> 8),1);
                  local_1c = local_14;
                  local_30 = local_3c;
                }
                else {
                  if ((int)local_14 < (int)local_1c) {
                    local_1c = local_14;
                  }
                  if ((int)local_3c < (int)local_30) {
                    local_30 = local_3c;
                  }
                  if (local_40 <= iVar8 + (int)local_14) {
                    local_40 = iVar8 + (int)local_14;
                  }
                  if (local_44 <= iVar18 + (int)local_3c) {
                    local_44 = iVar18 + (int)local_3c;
                  }
                  local_b4 = CONCAT31((int3)((uint)local_44 >> 8),1);
                }
              }
              iVar8 = (int)PF_PART4(local_24, 0);
            }
            local_a4 = local_a4 + *(double *)(iVar8 + 0x14);
            local_34 = local_34 + 1;
            local_ac = local_ac + 3;
            puVar15 = local_b8 + 1;
          }
          local_88 = 0x13;
          fVar25 = recovered_21828(local_a4);
          local_be = in_FPUControlWord | 0xc00;
          iVar11 = (int)ROUND(fVar25);
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          iVar8 = -(int)local_1c;
          if (iVar8 < 1) {
            iVar8 = 0;
          }
          iVar16 = -(int)local_30;
          if (iVar16 < 1) {
            iVar16 = 0;
          }
          local_40 = local_40 + iVar8;
          if (local_40 < iVar11 + iVar8) {
            local_40 = iVar11 + iVar8;
          }
          iVar11 = local_44 + iVar16;
          if (local_44 + iVar16 < iVar7 + iVar16) {
            iVar11 = iVar7 + iVar16;
          }
          local_44 = iVar11 + (uint)(iVar11 == 0);
          pvVar10 = local_38;
          for (piVar5 = local_ac; piVar5 != (int *)0x0; piVar5 = piVar5 + -3) {
            *(int *)((int)pvVar10 + 4) = *(int *)((int)pvVar10 + 4) + iVar8;
            *(int *)((int)pvVar10 + 8) = *(int *)((int)pvVar10 + 8) + iVar16;
            pvVar10 = (void *)((int)pvVar10 + 0xc);
          }
          local_d8 = local_38;
          uVar9 = local_34;
        }
        iVar11 = local_4c;
        if (local_4c == local_48) {
          uVar20 = local_4c * 2;
          if (local_4c == 0) {
            uVar20 = 4;
          }
          local_88 = 0x1c;
          local_34 = uVar9;
          recovered_28a02((int *)&local_50,uVar20);
          iVar11 = local_4c;
          uVar9 = local_34;
        }
        piVar5 = local_50;
        local_50[iVar11 * 5 + 1] = local_44;
        local_50[iVar11 * 5] = local_40;
        local_50[iVar11 * 5 + 2] = (int)local_d8;
        local_50[iVar11 * 5 + 3] = uVar9;
        local_50[iVar11 * 5 + 4] = local_b0;
        local_4c = iVar11 + 1;
        recovered_23194();
        pbVar19 = (byte *)piVar5[iVar11 * 5];
        if ((int)local_18 <= (int)pbVar19) {
          local_18 = pbVar19;
        }
        uVar13 = uVar13 + piVar5[iVar11 * 5 + 1];
        puVar6 = local_d0 + 3;
      }
      local_34 = 1;
      if (1 < (int)uVar13) {
        local_34 = uVar13;
      }
      local_b8 = (undefined4 *)(local_34 * (int)local_18);
      local_fc = (byte *)((uint)local_fc & 0xffffff00);
      local_88 = 0xb;
      recovered_2de34(&local_9c);
      local_ac = local_50 + local_4c * 5;
      piVar5 = local_50;
      piVar4 = (int *)0x0;
      while( true ) {
        piVar21 = piVar4;
        piVar17 = piVar5;
        if (piVar17 == local_ac) break;
        piVar5 = (int *)piVar17[2];
        local_30 = piVar5 + piVar17[3] * 3;
        for (; piVar5 != local_30; piVar5 = piVar5 + 3) {
          iVar11 = *piVar5;
          if (((iVar11 != 0) && (0 < *(int *)(iVar11 + 8))) &&
             (iVar7 = *(int *)(iVar11 + 0xc), 0 < iVar7)) {
            local_a4 = pf_bits_double(CONCAT44(PF_PART4(local_a4, 4),piVar5));
            local_14 = piVar21;
            for (iVar8 = 0; iVar8 < iVar7; iVar8 = iVar8 + 1) {
              if ((uint)((int)piVar21 + piVar5[2] + iVar8) < local_34) {
                iVar7 = (piVar5[2] + (int)local_14) * (int)local_18;
                local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),iVar7));
                for (iVar16 = 0; iVar16 < *(int *)(iVar11 + 8); iVar16 = iVar16 + 1) {
                  iVar18 = iVar16 + piVar5[1];
                  if (((-1 < iVar18) && (iVar18 < (int)local_18)) &&
                     (bVar1 = *(byte *)(iVar16 + *(int *)(iVar11 + 8) * iVar8 +
                                                 *(int *)(iVar11 + 0x18)), bVar1 != 0)) {
                    iVar11 = iVar7 + piVar5[1];
                    *(byte *)((int)local_9c + iVar16 + iVar11) =
                         (char)(((uint)(byte)~bVar1 *
                                (uint)*(byte *)((int)local_9c + iVar16 + iVar11)) / 0xff) + bVar1;
                    iVar11 = *piVar5;
                  }
                }
                iVar7 = *(int *)(iVar11 + 0xc);
                iVar16 = iVar8;
              }
              else {
                iVar16 = iVar7;
              }
              local_2c = pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),iVar16));
              local_14 = (int *)((int)local_14 + 1);
            }
          }
        }
        piVar5 = piVar17 + 5;
        piVar4 = (int *)((int)piVar21 + piVar17[1]);
        local_3c = piVar17;
        local_1c = piVar21;
      }
      uVar13 = 0xff;
      if (param_3 < 0xff) {
        uVar13 = param_3;
      }
      if ((int)param_3 < 0) {
        uVar13 = 0;
      }
      local_a4 = pf_bits_double(CONCAT44(PF_PART4(local_a4, 4),uVar13));
      local_14 = (int *)0xff;
      if (param_4 < (int *)0xff) {
        local_14 = param_4;
      }
      if ((int)param_4 < 0) {
        local_14 = (int *)0x0;
      }
      uVar13 = 0xff;
      if (param_5 < 0xff) {
        uVar13 = param_5;
      }
      if ((int)param_5 < 0) {
        uVar13 = 0;
      }
      local_24 = pf_bits_double(CONCAT44(PF_PART4(local_24, 4),uVar13));
      local_88 = 0x1d;
      local_1c = (int *)recovered_21c18(in_stack_00000018);
      local_88 = 0x1e;
      uVar13 = recovered_2318b();
      local_2c = pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),uVar13));
      piVar5 = (int *)0xff;
      if ((int)local_1c < 0xff) {
        piVar5 = local_1c;
      }
      if ((int)piVar5 < 1) {
        piVar5 = (int *)0x0;
      }
      local_1c = local_9c;
      for (iVar11 = 0; local_98 != iVar11; iVar11 = iVar11 + 1) {
        bVar1 = *(byte *)((int)local_9c + iVar11);
        *(char *)(uVar13 + iVar11 * 4) = SUB81(local_a4,0);
        *(char *)(uVar13 + 1 + iVar11 * 4) = (char)local_14;
        *(char *)(uVar13 + 2 + iVar11 * 4) = SUB81(local_24,0);
        *(char *)(uVar13 + 3 + iVar11 * 4) = (char)(((uint)bVar1 * (int)piVar5 & 0xffff) / 0xff);
      }
      local_88 = 0x1f;
      recovered_28984(&local_fc);
      local_fc = local_18;
      local_f8 = local_34;
      local_f4 = PF_PART4(local_2c, 0);
      local_88 = 0x20;
      pbVar19 = recovered_23162(0x18);
      ppbVar22 = &local_fc;
      pbVar23 = pbVar19;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(byte **)pbVar23 = *ppbVar22;
        ppbVar22 = ppbVar22 + 1;
        pbVar23 = pbVar23 + 4;
      }
      local_98 = 0;
      recovered_23194();
      recovered_28a82(&local_50);
      recovered_2ded2((int *)&local_cc);
    }
  }
  recovered_234e0(&local_8c);
  return pbVar19;
}
