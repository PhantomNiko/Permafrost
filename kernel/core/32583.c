#include "functions.h"
#undef DAT_00043388
#define DAT_00043388 (*(uint8_t *)(0x43388U))
#undef DAT_00043842
#define DAT_00043842 (*(uint8_t *)(0x43842U))
#undef DAT_00043876
#define DAT_00043876 (*(uint8_t *)(0x43876U))
#undef DAT_000438a8
#define DAT_000438a8 (*(uint8_t *)(0x438a8U))
#undef str_0004384e
#define str_0004384e (*(char (*)[1])(0x4384eU))
#undef str_00043878
#define str_00043878 (*(char (*)[1])(0x43878U))
#undef str_000438ac
#define str_000438ac (*(char (*)[1])(0x438acU))
#undef str_000438c9
#define str_000438c9 (*(char (*)[1])(0x438c9U))
#undef str_000438d6
#define str_000438d6 (*(char (*)[1])(0x438d6U))
#undef str_000438f9
#define str_000438f9 (*(char (*)[1])(0x438f9U))
#undef str_0004390d
#define str_0004390d (*(char (*)[1])(0x4390dU))
#undef str_00043930
#define str_00043930 (*(char (*)[1])(0x43930U))
#undef str_00043950
#define str_00043950 (*(char (*)[1])(0x43950U))
#undef str_0004395f
#define str_0004395f (*(char (*)[1])(0x4395fU))
#undef str_0004397c
#define str_0004397c (*(char (*)[1])(0x4397cU))
#undef str_00043990
#define str_00043990 (*(char (*)[1])(0x43990U))
#undef str_000439bb
#define str_000439bb (*(char (*)[1])(0x439bbU))
#undef str_000439de
#define str_000439de (*(char (*)[1])(0x439deU))
#undef str_000439ef
#define str_000439ef (*(char (*)[1])(0x439efU))
#undef str_00043a04
#define str_00043a04 (*(char (*)[1])(0x43a04U))
#undef str_00043a2d
#define str_00043a2d (*(char (*)[1])(0x43a2dU))
#undef str_00043a41
#define str_00043a41 (*(char (*)[1])(0x43a41U))
#undef str_00043a9a
#define str_00043a9a (*(char (*)[1])(0x43a9aU))
#define local_f0 (*(uint * *)(frame + 56))
#define local_ec (*(uint * *)(frame + 60))
#define local_e8 (*(uint * *)(frame + 64))
#define local_e4 (*(byte ** *)(frame + 68))
#define local_e0 (*(undefined4 *)(frame + 72))
#define local_dc (*(undefined4 *)(frame + 76))
#define local_d8 (*(undefined4 *)(frame + 80))
#define local_d4 (*(undefined4 *)(frame + 84))
#define local_d0 (*(undefined4 *)(frame + 88))
#define local_cc (*(undefined4 *)(frame + 92))
#define local_c8 (*(undefined4 *)(frame + 96))
#define local_c4 (*(undefined4 *)(frame + 100))
#define local_c0 (*(ushort *)(frame + 104))
#define local_be (*(ushort *)(frame + 106))
#define local_b8 (*(uint *)(frame + 112))
#define local_b4 (*(byte * *)(frame + 116))
#define local_b0 (*(uint (*)[18])(frame + 120))
#define local_68 (*(uint * *)(frame + 192))
#define local_64 (*(byte ** *)(frame + 196))
#define local_60 (*(int *)(frame + 200))
#define local_5c (*(byte ** *)(frame + 204))
#define local_58 (*(undefined4 *)(frame + 208))
#define local_54 (*(undefined4 *)(frame + 212))
#define local_50 (*(undefined4 *)(frame + 216))
#define local_4c (*(undefined4 *)(frame + 220))
#define local_48 (*(undefined4 *)(frame + 224))
#define local_44 (*(undefined4 *)(frame + 228))
#define local_40 (*(uint (*)[2])(frame + 232))
#define local_38 (*(float *)(frame + 240))
#define local_34 (*(int *)(frame + 244))
#define local_30 (*(undefined4 *)(frame + 248))
#define local_2c (*(undefined4 *)(frame + 252))
#define local_28 (*(int *)(frame + 256))
#define local_24 (*(int *)(frame + 260))
#define local_20 (*(undefined4 *)(frame + 264))
#define local_1c (*(int *)(frame + 268))
#define local_18 (*(byte * *)(frame + 272))
#define local_14 (*(uint * *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32583
 */

char recovered_32583(uint *param_1,uint *param_2)

{
  unsigned char frame[328];

  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte ***pppbVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ushort in_FPUControlWord = pf_fpu_control();
  byte *pbVar15;
  char *pcVar16;

  uVar5 = recovered_2fee0((int)param_1,0x43842);
  if ((char)uVar5 == '\0') {
    uVar5 = recovered_2fee0((int)param_1,0x43870);
    if ((char)uVar5 != '\0') {
      local_40[0] = 0;
      local_40[1] = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      cVar3 = recovered_32583(param_1,local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      uVar5 = recovered_305ed((int *)local_40);
      recovered_338d9(local_b0 + 9,(uint)(byte)((byte)uVar5 ^ 1));
      iVar9 = 9;
      puVar10 = local_b0 + 9;
LAB_0003266b:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar10;
        puVar10 = puVar10 + 1;
        param_2 = param_2 + 1;
      }
      recovered_2aec1(local_40);
      return cVar3;
    }
    uVar6 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_68 = param_2;
    local_14 = param_1;
    if (uVar6 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_2bd88(*(int *)(uVar2 + uVar6 * 4),0x43872);
      if ((char)iVar9 != '\0') {
        local_14[2] = uVar6 + 1;
        if ((((((uVar1 <= uVar6 + 1) ||
               (pbVar15 = *(byte **)(uVar2 + 4 + uVar6 * 4), pbVar15 == (byte *)0x0)) ||
              (uVar6 = (uint)*pbVar15, uVar6 == 0)) ||
             ((pbVar15[1] == 0 &&
              (((uVar6 - 0x25 < 0x17 && ((0x4005f1U >> (uVar6 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar6 - 0x5c < 3 || (uVar6 == 0x7d)))))))) ||
            ((((iVar9 = recovered_2bda3((int)pbVar15,0x43232), (char)iVar9 != '\0' ||
               (iVar9 = recovered_2bda3((int)pbVar15,0x4323d), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_2bda3((int)pbVar15,0x43236), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_2bda3((int)pbVar15,0x43242), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_2bda3((int)pbVar15,0x43820), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_2bda3((int)pbVar15,0x43826), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_2100f((int)pbVar15,0x43823), iVar9 == 0 ||
                (iVar9 = recovered_2100f((int)pbVar15,0x4382a), iVar9 == 0)))) ||
              (iVar9 = recovered_2100f((int)pbVar15,0x4382d), iVar9 == 0)))))) ||
           (((iVar9 = recovered_2100f((int)pbVar15,0x43830), iVar9 == 0 ||
             (iVar9 = recovered_2100f((int)pbVar15,0x43833), iVar9 == 0)) ||
            ((iVar9 = recovered_2100f((int)pbVar15,0x43836), iVar9 == 0 ||
             (((iVar9 = recovered_2100f((int)pbVar15,0x4383a), iVar9 == 0 ||
               (iVar9 = recovered_2100f((int)pbVar15,0x43838), iVar9 == 0)) ||
              (iVar9 = recovered_2100f((int)pbVar15,0x4383d), iVar9 == 0)))))))) {
          *local_68 = 0;
          local_68[1] = 0;
          local_68[2] = 0;
          local_68[3] = 0;
          local_68[4] = 0;
          local_68[5] = 0;
          local_68[6] = 0;
          local_68[7] = 0;
          local_68[8] = 0;
          return '\x01';
        }
        local_40[0] = 0;
        local_40[1] = 0;
        local_38 = 0.0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        cVar3 = recovered_32583(local_14,local_40);
        if (cVar3 == '\0') {
          return '\0';
        }
        uVar5 = recovered_305ed((int *)local_40);
        puVar10 = local_b0 + 9;
        recovered_338d9(puVar10,(uint)(byte)((byte)uVar5 ^ 1));
        iVar9 = 9;
        param_2 = local_68;
        goto LAB_0003266b;
      }
    }
    puVar10 = local_14;
    uVar5 = recovered_2fee0((int)local_14,0x43876);
    if ((char)uVar5 != '\0') {
      local_40[0] = 0;
      local_40[1] = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      cVar3 = recovered_32583(puVar10,local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      if (local_28 == 0 || local_40[0] != 7) {
        if (local_24 == 0 || local_40[0] != 8) {
          if (local_34 == 0 || local_40[0] != 3) {
            recovered_2aec1(local_40);
            pcVar16 = str_00043878;
            pbVar15 = &DAT_00043876;
            goto LAB_00033872;
          }
          iVar9 = recovered_20ff4(local_34);
        }
        else {
          iVar9 = recovered_33903(local_24);
        }
      }
      else {
        iVar9 = *(int *)(local_28 + 8);
      }
      puVar10 = local_b0 + 9;
      recovered_30655(puVar10,iVar9);
      iVar9 = 9;
      param_2 = local_68;
      goto LAB_000329e6;
    }
    if (local_68 == (uint *)0x0) {
      return '\0';
    }
    uVar6 = puVar10[2];
    if (uVar6 < *(uint *)puVar10[1]) {
      uVar1 = ((uint *)puVar10[1])[2];
      puVar10[2] = uVar6 + 1;
      pbVar15 = *(byte **)(uVar1 + uVar6 * 4);
      local_40[0] = 0;
      local_40[1] = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar9 = recovered_2100f((int)pbVar15,0x43363);
      local_18 = pbVar15;
      if (iVar9 == 0) {
        uVar5 = recovered_317d9(puVar10,local_40);
        if ((char)uVar5 == '\0') {
          return '\0';
        }
        uVar5 = recovered_2fee0((int)puVar10,0x43388);
        if ((char)uVar5 != '\0') goto LAB_000335bd;
        recovered_2aec1(local_40);
        pcVar16 = str_000438c9;
        pbVar15 = &DAT_00043388;
      }
      else {
        iVar9 = recovered_2100f((int)pbVar15,0x43307);
        if (iVar9 != 0) {
          iVar9 = recovered_2100f((int)pbVar15,0x437eb);
          if (iVar9 == 0) {
            local_b0[9] = 0;
            local_b0[10] = 0;
            local_b0[0xb] = 0;
            local_b0[0xc] = 0;
            local_b0[0xd] = 0;
            local_b0[0xe] = 0;
            local_b0[0xf] = 0;
            local_b0[0x10] = 0;
            local_b0[0x11] = 0;
            local_b0[0] = 0;
            local_b0[1] = 0;
            local_b0[2] = 0;
            local_b0[3] = 0;
            local_b0[4] = 0;
            local_b0[5] = 0;
            local_b0[6] = 0;
            local_b0[7] = 0;
            local_b0[8] = 0;
            bVar4 = recovered_30301(local_b0 + 9);
            if ((!bVar4) || (bVar4 = recovered_2b367(local_b0), !bVar4)) {
LAB_000334de:
              recovered_2aec1(local_b0 + 9);
              recovered_2aec1(local_b0);
              pcVar16 = str_0004390d;
              goto LAB_000334fc;
            }
            local_f0 = local_b0 + 6;
            local_ec = local_b0 + 7;
            local_e8 = local_b0 + 8;
            uVar5 = recovered_2fee0((int)puVar10,0x437ed);
            if ((char)uVar5 == '\0') {
              iVar9 = 0;
              local_b8 = 0;
              do {
                if (*(uint *)puVar10[1] <= puVar10[2]) {
                  recovered_2aec1(local_b0 + 9);
                  recovered_2aec1(local_b0);
                  pcVar16 = str_00043930;
                  goto LAB_00032a19;
                }
                iVar8 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x43307);
                if (iVar8 == 0) {
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  local_e4 = (byte **)0x0;
                  local_e0 = 0;
                  local_dc = 0;
                  local_d8 = 0;
                  local_d4 = 0;
                  local_d0 = 0;
                  local_cc = 0;
                  local_c8 = 0;
                  local_c4 = 0;
                  local_b4 = *(byte **)(*(int *)(puVar10[1] + 8) + puVar10[2] * 4);
                  puVar10[2] = puVar10[2] + 1;
                  local_1c = iVar9;
                  uVar5 = recovered_317d9(puVar10,(uint *)&local_64);
                  if ((char)uVar5 != '\0') {
                    uVar5 = recovered_2fee0((int)puVar10,0x43309);
                    if ((char)uVar5 == '\0') {
                      recovered_2aec1(&local_64);
                      recovered_2aec1(&local_e4);
                      recovered_2aec1(local_b0 + 9);
                      recovered_2aec1(local_b0);
                      pcVar16 = str_00043950;
                      uVar6 = *puVar10;
                      pbVar15 = local_b4;
                      goto LAB_00033874;
                    }
                    uVar5 = recovered_2fee0((int)puVar10,0x4395d);
                    if (((char)uVar5 == '\0') &&
                       (uVar5 = recovered_2fee0((int)local_14,0x43695), (char)uVar5 == '\0')) {
                      recovered_2aec1(&local_64);
                      recovered_2aec1(&local_e4);
                      recovered_2aec1(local_b0 + 9);
                      recovered_2aec1(local_b0);
                      pcVar16 = str_0004395f;
                      pbVar15 = local_b4;
                      goto LAB_0003353b;
                    }
                    if ((!((local_b8 & 1) == 0 && local_1c != 0)) ||
                       (uVar5 = recovered_33948(*local_14,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)local_b4), (char)uVar5 != '\0')) {
                      puVar10 = local_14;
                      uVar5 = recovered_317d9(local_14,(uint *)&local_e4);
                      if (((char)uVar5 != '\0') &&
                         (uVar5 = recovered_339d1(*puVar10,(int *)local_b0,(int *)&local_64,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar5 != '\0')) {
                        recovered_2aec1(&local_64);
                        uVar6 = recovered_2aec1(&local_e4);
                        local_b8 = CONCAT31((int3)(uVar6 >> 8),1);
                        goto LAB_000332aa;
                      }
                    }
                  }
LAB_0003355d:
                  recovered_2aec1(&local_64);
                  pppbVar11 = &local_e4;
LAB_0003356b:
                  recovered_2aec1(pppbVar11);
                  recovered_2aec1(local_b0 + 9);
                  puVar10 = local_b0;
                  goto LAB_00033852;
                }
                if ((puVar10[2] + 1 < *(uint *)puVar10[1]) &&
                   ((iVar8 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + 4 + puVar10[2] * 4),
                                             0x4395d), iVar8 == 0 ||
                    (iVar8 = recovered_2100f(*(int *)(*(int *)(puVar10[1] + 8) + 4 + puVar10[2] * 4)
                                             ,0x43695), iVar8 == 0)))) {
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  local_e4 = (byte **)0x0;
                  local_e0 = 0;
                  local_dc = 0;
                  local_d8 = 0;
                  local_d4 = 0;
                  local_d0 = 0;
                  local_cc = 0;
                  local_c8 = 0;
                  local_c4 = 0;
                  local_b4 = (byte *)*puVar10;
                  iVar8 = *(int *)(puVar10[1] + 8);
                  uVar6 = puVar10[2];
                  puVar10[2] = uVar6 + 1;
                  pbVar15 = *(byte **)(iVar8 + uVar6 * 4);
                  local_1c = iVar9;
                  if (pbVar15 == (byte *)0x0) goto LAB_0003355d;
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  bVar4 = recovered_33a59((char *)pbVar15);
                  if (bVar4) {
                    uVar5 = recovered_33a92((int)pbVar15,(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      pcVar16 = str_00043a9a;
                      goto LAB_0003354a;
                    }
                  }
                  else {
                    uVar5 = recovered_33aed((int)pbVar15,&local_60);
                    if ((char)uVar5 == '\0') {
                      iVar9 = recovered_33c63((char *)pbVar15);
                      if (((char)iVar9 == '\0') ||
                         (uVar5 = recovered_2afc4((int)pbVar15,(float *)&local_5c),
                         (char)uVar5 == '\0')) {
                        iVar9 = recovered_2bda3((int)pbVar15,0x439a7);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_2bda3((int)pbVar15,0x439ac);
                          if ((char)iVar9 == '\0') {
                            uVar6 = recovered_2fe44(pbVar15);
                            if ((char)uVar6 == '\0') {
                              pcVar16 = str_00043a41;
                            }
                            else {
                              uVar6 = recovered_2ad2e((uint *)&local_64,(char *)pbVar15);
                              if ((char)uVar6 != '\0') goto LAB_00033219;
                              pcVar16 = str_0004390d;
                            }
LAB_0003354a:
                            recovered_2f9c3((uint)local_b4,(char *)pbVar15,pcVar16);
                            goto LAB_0003355d;
                          }
                          recovered_338d9(&local_64,0);
                        }
                        else {
                          recovered_338d9(&local_64,1);
                        }
                      }
                      else {
                        local_64 = (byte **)0x2;
                        local_c0 = in_FPUControlWord | 0xc00;
                        local_60 = (int)ROUND(pf_bits_float((uintptr_t)local_5c));
                      }
                    }
                    else {
                      local_64 = (byte **)0x1;
                      local_5c = (byte **)(uintptr_t)pf_float_bits((float)local_60);
                    }
                  }
LAB_00033219:
                  puVar10 = local_14;
                  local_14[2] = local_14[2] + 1;
                  if (((((local_b8 & 1) == 0 && local_1c != 0) &&
                       (uVar5 = recovered_33948(*local_14,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)pbVar15), (char)uVar5 == '\0')) ||
                      (uVar5 = recovered_317d9(puVar10,(uint *)&local_e4), (char)uVar5 == '\0')) ||
                     (uVar5 = recovered_339d1(*puVar10,(int *)local_b0,(int *)&local_64,
                                              (int)&local_e4,(char *)pbVar15), (char)uVar5 == '\0'))
                  goto LAB_0003355d;
                  recovered_2aec1(&local_64);
                  uVar6 = recovered_2aec1(&local_e4);
                  local_b8 = CONCAT31((int3)(uVar6 >> 8),1);
                }
                else {
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  uVar5 = recovered_317d9(puVar10,(uint *)&local_64);
                  if ((char)uVar5 == '\0') {
LAB_0003342a:
                    pppbVar11 = &local_64;
                    goto LAB_0003356b;
                  }
                  local_1c = iVar9 + 1;
                  if ((local_b8 & 1) == 0) {
                    uVar5 = recovered_31680(local_b0[0xf],(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      recovered_2aec1(&local_64);
                      goto LAB_000334de;
                    }
                  }
                  else {
                    recovered_30655(&local_e4,local_1c);
                    uVar5 = recovered_339d1(*puVar10,(int *)local_b0,(int *)&local_e4,(int)&local_64
                                            ,(char *)local_18);
                    if ((char)uVar5 == '\0') goto LAB_0003342a;
                  }
                  recovered_2aec1(&local_64);
                }
LAB_000332aa:
                iVar9 = local_1c;
                uVar5 = recovered_2fee0((int)puVar10,0x437ed);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_2fee0((int)puVar10,0x433db);
                if ((char)uVar5 == '\0') {
                  recovered_2aec1(local_b0 + 9);
                  recovered_2aec1(local_b0);
                  pcVar16 = str_0004397c;
                  goto LAB_000334fc;
                }
                uVar5 = recovered_2fee0((int)puVar10,0x437ed);
              } while ((char)uVar5 == '\0');
              recovered_2aec1(local_40);
              if ((local_b8 & 1) != 0) goto LAB_00032cb0;
              puVar10 = local_b0 + 9;
              puVar12 = local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              local_b0[9] = 0;
              puVar7 = local_b0 + 10;
              puVar10 = local_b0 + 0xb;
              puVar12 = local_b0 + 0xc;
              puVar13 = local_b0 + 0xd;
              puVar14 = local_b0 + 0xe;
              local_f0 = local_b0 + 0xf;
              local_ec = local_b0 + 0x10;
              local_e8 = local_b0 + 0x11;
            }
            else {
              recovered_2aec1(local_40);
LAB_00032cb0:
              puVar10 = local_b0;
              puVar12 = local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              local_b0[0] = 0;
              puVar7 = local_b0 + 1;
              puVar10 = local_b0 + 2;
              puVar12 = local_b0 + 3;
              puVar13 = local_b0 + 4;
              puVar14 = local_b0 + 5;
            }
            *puVar7 = 0;
            *puVar10 = 0;
            *puVar12 = 0;
            *puVar13 = 0;
            *puVar14 = 0;
            *local_f0 = 0;
            *local_ec = 0;
            *local_e8 = 0;
            recovered_2aec1(local_b0 + 9);
            recovered_2aec1(local_b0);
LAB_00032d1b:
            puVar10 = local_14;
LAB_00032d1e:
            pbVar15 = local_18;
          }
          else {
            bVar4 = recovered_33a59((char *)pbVar15);
            if (bVar4) {
              uVar5 = recovered_33a92((int)pbVar15,(int)local_40);
              if ((char)uVar5 != '\0') goto LAB_000335bd;
              pcVar16 = str_00043990;
              goto LAB_00033871;
            }
            iVar9 = recovered_2bd88((int)pbVar15,0x439a7);
            if ((char)iVar9 == '\0') {
              iVar9 = recovered_2bd88((int)pbVar15,0x439ac);
              if ((char)iVar9 == '\0') {
                iVar9 = recovered_2bd88((int)pbVar15,0x43872);
                if ((((char)iVar9 != '\0') ||
                    (iVar9 = recovered_2bd88((int)pbVar15,0x439b2), (char)iVar9 != '\0')) ||
                   (iVar9 = recovered_2bd88((int)pbVar15,0x439b7), (char)iVar9 != '\0')) {
                  local_40[0] = 0;
                  local_40[1] = 0;
                  local_38 = 0.0;
                  local_34 = 0;
                  local_30 = 0;
                  local_2c = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0;
                  goto LAB_000335bd;
                }
                uVar5 = recovered_33aed((int)pbVar15,(int *)(local_40 + 1));
                if ((char)uVar5 != '\0') {
                  local_40[0] = 1;
                  local_38 = (float)(int)local_40[1];
                  goto LAB_000335bd;
                }
                iVar9 = recovered_33c63((char *)pbVar15);
                if (((char)iVar9 != '\0') &&
                   (uVar5 = recovered_2afc4((int)pbVar15,&local_38), (char)uVar5 != '\0')) {
                  local_40[0] = 2;
                  local_be = in_FPUControlWord | 0xc00;
                  local_40[1] = (uint)ROUND(local_38);
                  goto LAB_00033789;
                }
                uVar6 = recovered_2fe44(pbVar15);
                pbVar15 = local_18;
                if ((char)uVar6 == '\0') {
                  pcVar16 = str_000439de;
LAB_0003353b:
                  uVar6 = *local_14;
                  goto LAB_00033874;
                }
                uVar5 = recovered_30276((int)local_18,(int)local_40);
                puVar10 = local_14;
                if ((char)uVar5 != '\0') goto LAB_000335bd;
                iVar9 = recovered_2b4d3((int)pbVar15);
                pbVar15 = local_18;
                if ((char)iVar9 != '\0') {
                  bVar4 = recovered_2b464(local_40,(int)local_18);
                  puVar10 = local_14;
                  if (bVar4) goto LAB_000335bd;
                  pcVar16 = str_000439bb;
                  goto LAB_00033871;
                }
                local_40[0] = 0;
                local_40[1] = 0;
                local_38 = 0.0;
                local_34 = 0;
                local_30 = 0;
                local_2c = 0;
                local_28 = 0;
                local_24 = 0;
                local_20 = 0;
                goto LAB_00032d1b;
              }
              iVar9 = 0;
            }
            else {
              iVar9 = 1;
            }
            recovered_338d9(local_40,iVar9);
          }
LAB_000335bd:
          do {
            while( true ) {
              if (*(uint *)puVar10[1] <= puVar10[2]) goto LAB_0003388b;
              iVar9 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x43307);
              if (iVar9 != 0) break;
              local_b0[9] = 0;
              local_b0[10] = 0;
              local_b0[0xb] = 0;
              local_b0[0xc] = 0;
              local_b0[0xd] = 0;
              local_b0[0xe] = 0;
              local_b0[0xf] = 0;
              local_b0[0x10] = 0;
              local_b0[0x11] = 0;
              local_b0[0] = 0;
              local_b0[1] = 0;
              local_b0[2] = 0;
              local_b0[3] = 0;
              local_b0[4] = 0;
              local_b0[5] = 0;
              local_b0[6] = 0;
              local_b0[7] = 0;
              local_b0[8] = 0;
              puVar10[2] = puVar10[2] + 1;
              uVar5 = recovered_317d9(puVar10,local_b0 + 9);
              if ((char)uVar5 == '\0') goto LAB_0003384f;
              uVar5 = recovered_2fee0((int)puVar10,0x43309);
              if ((char)uVar5 == '\0') {
                recovered_2aec1(local_b0 + 9);
                recovered_2aec1(local_40);
                pcVar16 = str_00043950;
                goto LAB_00033871;
              }
              uVar5 = recovered_33cb4((int *)local_40,(int *)(local_b0 + 9),local_b0);
              local_1c = CONCAT31(PF_PART3(local_1c, 1),(char)uVar5);
              recovered_2aec1(local_b0 + 9);
              recovered_2aec1(local_40);
              if ((char)local_1c == '\0') {
                pcVar16 = str_000439ef;
                goto LAB_000334fc;
              }
              recovered_2aec1(local_40);
              puVar10 = local_b0;
              puVar12 = local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              pbVar15 = local_18;
              puVar10 = local_14;
            }
            iVar9 = recovered_2100f(*(int *)(*(int *)(puVar10[1] + 8) + puVar10[2] * 4),0x43363);
            if (iVar9 != 0) {
LAB_0003388b:
              puVar10 = local_68;
              recovered_2aec1(local_68);
              puVar12 = local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar10 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar10 = puVar10 + 1;
              }
              return '\x01';
            }
            local_b0[9] = 0;
            local_b0[10] = 0;
            local_b0[0xb] = 0;
            local_b0[0xc] = 0;
            local_b0[0xd] = 0;
            local_b0[0xe] = 0;
            local_b0[0xf] = 0;
            local_b0[0x10] = 0;
            local_b0[0x11] = 0;
            local_64 = (byte **)0x0;
            local_60 = 0;
            local_5c = (byte **)0x0;
            puVar10[2] = puVar10[2] + 1;
            uVar5 = recovered_2fee0((int)puVar10,0x43388);
            if ((char)uVar5 == '\0') {
              while( true ) {
                local_b0[0] = 0;
                local_b0[1] = 0;
                local_b0[2] = 0;
                local_b0[3] = 0;
                local_b0[4] = 0;
                local_b0[5] = 0;
                local_b0[6] = 0;
                local_b0[7] = 0;
                local_b0[8] = 0;
                uVar5 = recovered_317d9(puVar10,local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_2aec1(local_b0);
                  recovered_2fe9e((uint *)&local_64);
                  goto LAB_0003384f;
                }
                uVar5 = recovered_2ff24((int *)&local_64,(int)local_b0);
                recovered_2aec1(local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_2fe9e((uint *)&local_64);
                  recovered_2aec1(local_40);
                  pcVar16 = str_00043a04;
                  goto LAB_00033871;
                }
                uVar5 = recovered_2fee0((int)puVar10,0x43388);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_2fee0((int)puVar10,0x433db);
                if ((char)uVar5 == '\0') {
                  recovered_2fe9e((uint *)&local_64);
                  recovered_2aec1(local_40);
                  pcVar16 = str_00043a2d;
                  goto LAB_00033871;
                }
              }
            }
            uVar6 = recovered_33f5a((byte **)*puVar10,(int *)local_40,local_5c,local_64,local_b0 + 9
                                   );
            recovered_2fe9e((uint *)&local_64);
            if ((char)uVar6 == '\0') {
              recovered_2aec1(local_b0 + 9);
LAB_0003384f:
              puVar10 = local_40;
LAB_00033852:
              recovered_2aec1(puVar10);
              return '\0';
            }
            recovered_2aec1(local_40);
            recovered_2aec1(local_40);
            puVar10 = local_b0 + 9;
            puVar12 = local_40;
            for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            pbVar15 = local_18;
LAB_00033789:
            puVar10 = local_14;
          } while( true );
        }
        bVar4 = recovered_30301(local_40);
        if (bVar4) {
          uVar5 = recovered_2fee0((int)puVar10,0x43309);
          if ((char)uVar5 != '\0') goto LAB_000335bd;
          puVar12 = local_b0 + 9;
          do {
            local_b0[9] = 0;
            local_b0[10] = 0;
            local_b0[0xb] = 0;
            local_b0[0xc] = 0;
            local_b0[0xd] = 0;
            local_b0[0xe] = 0;
            local_b0[0xf] = 0;
            local_b0[0x10] = 0;
            local_b0[0x11] = 0;
            uVar5 = recovered_317d9(puVar10,puVar12);
            if ((char)uVar5 == '\0') goto LAB_0003384f;
            uVar5 = recovered_31680(local_28,(int)puVar12);
            recovered_2aec1(puVar12);
            if ((char)uVar5 == '\0') {
              recovered_2aec1(local_40);
              pcVar16 = str_000438d6;
              goto LAB_000334fc;
            }
            uVar5 = recovered_2fee0((int)puVar10,0x43309);
            if ((char)uVar5 != '\0') goto LAB_00032d1e;
            uVar5 = recovered_2fee0((int)puVar10,0x433db);
          } while ((char)uVar5 != '\0');
          recovered_2aec1(local_40);
          pcVar16 = str_000438f9;
LAB_000334fc:
          pbVar15 = local_18;
        }
        else {
          pcVar16 = str_000438d6;
LAB_00033871:
        }
      }
    }
    else {
      pcVar16 = str_000438ac;
LAB_00032a19:
      pbVar15 = &DAT_000438a8;
    }
LAB_00033872:
    uVar6 = *puVar10;
LAB_00033874:
    recovered_2f9c3(uVar6,(char *)pbVar15,pcVar16);
    return '\0';
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_38 = 0.0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  cVar3 = recovered_32583(param_1,local_40);
  if (cVar3 == '\0') {
    return '\0';
  }
  if (local_40[0] == 1) {
LAB_000325f0:
    recovered_30655(local_b0 + 9,-local_40[1]);
  }
  else {
    if (local_40[0] != 2) {
      if (local_40[0] != 5) {
        recovered_2aec1(local_40);
        pcVar16 = str_0004384e;
        uVar6 = *param_1;
        pbVar15 = &DAT_00043842;
        goto LAB_00033874;
      }
      goto LAB_000325f0;
    }
    recovered_2b044(local_b0 + 9,-local_38);
  }
  iVar9 = 9;
  puVar10 = local_b0 + 9;
LAB_000329e6:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar10;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  }
  recovered_2aec1(local_40);
  return '\x01';
}
