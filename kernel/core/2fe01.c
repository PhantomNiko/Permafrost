#include "functions.h"
#undef DAT_0003ff07
#define DAT_0003ff07 (*(uint8_t *)(0x3ff07U))
#undef DAT_000403c1
#define DAT_000403c1 (*(uint8_t *)(0x403c1U))
#undef DAT_000403f5
#define DAT_000403f5 (*(uint8_t *)(0x403f5U))
#undef DAT_00040427
#define DAT_00040427 (*(uint8_t *)(0x40427U))
#undef str_000403cd
#define str_000403cd (*(char (*)[1])(0x403cdU))
#undef str_000403f7
#define str_000403f7 (*(char (*)[1])(0x403f7U))
#undef str_0004042b
#define str_0004042b (*(char (*)[1])(0x4042bU))
#undef str_00040448
#define str_00040448 (*(char (*)[1])(0x40448U))
#undef str_00040455
#define str_00040455 (*(char (*)[1])(0x40455U))
#undef str_00040478
#define str_00040478 (*(char (*)[1])(0x40478U))
#undef str_0004048c
#define str_0004048c (*(char (*)[1])(0x4048cU))
#undef str_000404af
#define str_000404af (*(char (*)[1])(0x404afU))
#undef str_000404cf
#define str_000404cf (*(char (*)[1])(0x404cfU))
#undef str_000404de
#define str_000404de (*(char (*)[1])(0x404deU))
#undef str_000404fb
#define str_000404fb (*(char (*)[1])(0x404fbU))
#undef str_0004050f
#define str_0004050f (*(char (*)[1])(0x4050fU))
#undef str_0004053a
#define str_0004053a (*(char (*)[1])(0x4053aU))
#undef str_0004055d
#define str_0004055d (*(char (*)[1])(0x4055dU))
#undef str_0004056e
#define str_0004056e (*(char (*)[1])(0x4056eU))
#undef str_00040583
#define str_00040583 (*(char (*)[1])(0x40583U))
#undef str_000405ac
#define str_000405ac (*(char (*)[1])(0x405acU))
#undef str_000405c0
#define str_000405c0 (*(char (*)[1])(0x405c0U))
#undef str_00040619
#define str_00040619 (*(char (*)[1])(0x40619U))
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
#define pbVar15 (*(byte * *)(frame + 16))
#define local_60 (*(int *)(frame + 200))
#define pcVar16 (*(char * *)(frame + 20))
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
 * Address: 0x2fe01
 */

char recovered_2fe01(uint *param_1,int *param_2)

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
  
  uVar5 = recovered_2d75e((int)param_1,0x403c1);
  if ((char)uVar5 == '\0') {
    uVar5 = recovered_2d75e((int)param_1,0x403ef);
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
      cVar3 = recovered_2fe01(param_1,(int *)local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      uVar5 = recovered_2de6b((int *)local_40);
      recovered_31157(local_b0 + 9,(uint)(byte)((byte)uVar5 ^ 1));
      iVar9 = 9;
      puVar10 = local_b0 + 9;
LAB_0002fee9:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar10;
        puVar10 = puVar10 + 1;
        param_2 = param_2 + 1;
      }
      recovered_28761(local_40);
      return cVar3;
    }
    uVar6 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_68 = (uint *)param_2;
    local_14 = param_1;
    if (uVar6 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_29600(*(int *)(uVar2 + uVar6 * 4),0x403f1);
      if ((char)iVar9 != '\0') {
        local_14[2] = uVar6 + 1;
        if ((((((uVar1 <= uVar6 + 1) ||
               (pbVar15 = *(byte **)(uVar2 + 4 + uVar6 * 4), pbVar15 == (byte *)0x0)) ||
              (uVar6 = (uint)*pbVar15, uVar6 == 0)) ||
             ((pbVar15[1] == 0 &&
              (((uVar6 - 0x25 < 0x17 && ((0x4005f1U >> (uVar6 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar6 - 0x5c < 3 || (uVar6 == 0x7d)))))))) ||
            ((((iVar9 = recovered_2961b((int)pbVar15,0x3fdb1), (char)iVar9 != '\0' ||
               (iVar9 = recovered_2961b((int)pbVar15,0x3fdbc), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_2961b((int)pbVar15,0x3fdb5), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_2961b((int)pbVar15,0x3fdc1), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_2961b((int)pbVar15,0x4039f), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_2961b((int)pbVar15,0x403a5), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_2100f((int)pbVar15,0x403a2), iVar9 == 0 ||
                (iVar9 = recovered_2100f((int)pbVar15,0x403a9), iVar9 == 0)))) ||
              (iVar9 = recovered_2100f((int)pbVar15,0x403ac), iVar9 == 0)))))) ||
           (((iVar9 = recovered_2100f((int)pbVar15,0x403af), iVar9 == 0 ||
             (iVar9 = recovered_2100f((int)pbVar15,0x403b2), iVar9 == 0)) ||
            ((iVar9 = recovered_2100f((int)pbVar15,0x403b5), iVar9 == 0 ||
             (((iVar9 = recovered_2100f((int)pbVar15,0x403b9), iVar9 == 0 ||
               (iVar9 = recovered_2100f((int)pbVar15,0x403b7), iVar9 == 0)) ||
              (iVar9 = recovered_2100f((int)pbVar15,0x403bc), iVar9 == 0)))))))) {
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
        cVar3 = recovered_2fe01(local_14,(int *)local_40);
        if (cVar3 == '\0') {
          return '\0';
        }
        uVar5 = recovered_2de6b((int *)local_40);
        puVar10 = local_b0 + 9;
        recovered_31157(puVar10,(uint)(byte)((byte)uVar5 ^ 1));
        iVar9 = 9;
        param_2 = (int *)local_68;
        goto LAB_0002fee9;
      }
    }
    puVar10 = local_14;
    uVar5 = recovered_2d75e((int)local_14,0x403f5);
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
      cVar3 = recovered_2fe01(puVar10,(int *)local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      if (local_28 == 0 || local_40[0] != 7) {
        if (local_24 == 0 || local_40[0] != 8) {
          if (local_34 == 0 || local_40[0] != 3) {
            recovered_28761(local_40);
            pcVar16 = str_000403f7;
            pbVar15 = &DAT_000403f5;
            goto LAB_000310f0;
          }
          iVar9 = recovered_20ff4(local_34);
        }
        else {
          iVar9 = recovered_31181(local_24);
        }
      }
      else {
        iVar9 = *(int *)(local_28 + 8);
      }
      puVar10 = local_b0 + 9;
      recovered_2ded3(puVar10,iVar9);
      iVar9 = 9;
      param_2 = (int *)local_68;
      goto LAB_00030264;
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
      iVar9 = recovered_2100f((int)pbVar15,0x3fee2);
      local_18 = pbVar15;
      if (iVar9 == 0) {
        uVar5 = recovered_2f057(puVar10,local_40);
        if ((char)uVar5 == '\0') {
          return '\0';
        }
        uVar5 = recovered_2d75e((int)puVar10,0x3ff07);
        if ((char)uVar5 != '\0') goto LAB_00030e3b;
        recovered_28761(local_40);
        pcVar16 = str_00040448;
        pbVar15 = &DAT_0003ff07;
      }
      else {
        iVar9 = recovered_2100f((int)pbVar15,0x3fe86);
        if (iVar9 != 0) {
          iVar9 = recovered_2100f((int)pbVar15,0x4036a);
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
            bVar4 = recovered_2db7f(local_b0 + 9);
            if ((!bVar4) || (bVar4 = recovered_28c07(local_b0), !bVar4)) {
LAB_00030d5c:
              recovered_28761(local_b0 + 9);
              recovered_28761(local_b0);
              pcVar16 = str_0004048c;
              goto LAB_00030d7a;
            }
            local_f0 = local_b0 + 6;
            local_ec = local_b0 + 7;
            local_e8 = local_b0 + 8;
            uVar5 = recovered_2d75e((int)puVar10,0x4036c);
            if ((char)uVar5 == '\0') {
              iVar9 = 0;
              local_b8 = 0;
              do {
                if (*(uint *)puVar10[1] <= puVar10[2]) {
                  recovered_28761(local_b0 + 9);
                  recovered_28761(local_b0);
                  pcVar16 = str_000404af;
                  goto LAB_00030297;
                }
                iVar8 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x3fe86);
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
                  uVar5 = recovered_2f057(puVar10,(uint *)&local_64);
                  if ((char)uVar5 != '\0') {
                    uVar5 = recovered_2d75e((int)puVar10,0x3fe88);
                    if ((char)uVar5 == '\0') {
                      recovered_28761(&local_64);
                      recovered_28761(&local_e4);
                      recovered_28761(local_b0 + 9);
                      recovered_28761(local_b0);
                      pcVar16 = str_000404cf;
                      uVar6 = *puVar10;
                      pbVar15 = local_b4;
                      goto LAB_000310f2;
                    }
                    uVar5 = recovered_2d75e((int)puVar10,0x404dc);
                    if (((char)uVar5 == '\0') &&
                       (uVar5 = recovered_2d75e((int)local_14,0x40214), (char)uVar5 == '\0')) {
                      recovered_28761(&local_64);
                      recovered_28761(&local_e4);
                      recovered_28761(local_b0 + 9);
                      recovered_28761(local_b0);
                      pcVar16 = str_000404de;
                      pbVar15 = local_b4;
                      goto LAB_00030db9;
                    }
                    if ((!((local_b8 & 1) == 0 && local_1c != 0)) ||
                       (uVar5 = recovered_311c6(*local_14,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)local_b4), (char)uVar5 != '\0')) {
                      puVar10 = local_14;
                      uVar5 = recovered_2f057(local_14,(uint *)&local_e4);
                      if (((char)uVar5 != '\0') &&
                         (uVar5 = recovered_3124f(*puVar10,(int *)local_b0,(int *)&local_64,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar5 != '\0')) {
                        recovered_28761(&local_64);
                        uVar6 = recovered_28761(&local_e4);
                        local_b8 = CONCAT31((int3)(uVar6 >> 8),1);
                        goto LAB_00030b28;
                      }
                    }
                  }
LAB_00030ddb:
                  recovered_28761(&local_64);
                  pppbVar11 = &local_e4;
LAB_00030de9:
                  recovered_28761(pppbVar11);
                  recovered_28761(local_b0 + 9);
                  puVar10 = local_b0;
                  goto LAB_000310d0;
                }
                if ((puVar10[2] + 1 < *(uint *)puVar10[1]) &&
                   ((iVar8 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + 4 + puVar10[2] * 4),
                                             0x404dc), iVar8 == 0 ||
                    (iVar8 = recovered_2100f(*(int *)(*(int *)(puVar10[1] + 8) + 4 + puVar10[2] * 4)
                                             ,0x40214), iVar8 == 0)))) {
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
                  if (pbVar15 == (byte *)0x0) goto LAB_00030ddb;
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  bVar4 = recovered_312d7((char *)pbVar15);
                  if (bVar4) {
                    uVar5 = recovered_31310((int)pbVar15,(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      pcVar16 = str_00040619;
                      goto LAB_00030dc8;
                    }
                  }
                  else {
                    uVar5 = recovered_3136b((int)pbVar15,&local_60);
                    if ((char)uVar5 == '\0') {
                      iVar9 = recovered_314e1((char *)pbVar15);
                      if (((char)iVar9 == '\0') ||
                         (uVar5 = recovered_28864((int)pbVar15,(float *)&local_5c),
                         (char)uVar5 == '\0')) {
                        iVar9 = recovered_2961b((int)pbVar15,0x40526);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_2961b((int)pbVar15,0x4052b);
                          if ((char)iVar9 == '\0') {
                            uVar6 = recovered_2d6c2(pbVar15);
                            if ((char)uVar6 == '\0') {
                              pcVar16 = str_000405c0;
                            }
                            else {
                              uVar6 = recovered_285ce(&local_64,pbVar15);
                              if ((char)uVar6 != '\0') goto LAB_00030a97;
                              pcVar16 = str_0004048c;
                            }
LAB_00030dc8:
                            recovered_2d241((uint)local_b4,(char *)pbVar15,pcVar16);
                            goto LAB_00030ddb;
                          }
                          recovered_31157(&local_64,0);
                        }
                        else {
                          recovered_31157(&local_64,1);
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
LAB_00030a97:
                  puVar10 = local_14;
                  local_14[2] = local_14[2] + 1;
                  if (((((local_b8 & 1) == 0 && local_1c != 0) &&
                       (uVar5 = recovered_311c6(*local_14,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)pbVar15), (char)uVar5 == '\0')) ||
                      (uVar5 = recovered_2f057(puVar10,(uint *)&local_e4), (char)uVar5 == '\0')) ||
                     (uVar5 = recovered_3124f(*puVar10,(int *)local_b0,(int *)&local_64,
                                              (int)&local_e4,(char *)pbVar15), (char)uVar5 == '\0'))
                  goto LAB_00030ddb;
                  recovered_28761(&local_64);
                  uVar6 = recovered_28761(&local_e4);
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
                  uVar5 = recovered_2f057(puVar10,(uint *)&local_64);
                  if ((char)uVar5 == '\0') {
LAB_00030ca8:
                    pppbVar11 = &local_64;
                    goto LAB_00030de9;
                  }
                  local_1c = iVar9 + 1;
                  if ((local_b8 & 1) == 0) {
                    uVar5 = recovered_2eefe(local_b0[0xf],(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      recovered_28761(&local_64);
                      goto LAB_00030d5c;
                    }
                  }
                  else {
                    recovered_2ded3(&local_e4,local_1c);
                    uVar5 = recovered_3124f(*puVar10,(int *)local_b0,(int *)&local_e4,(int)&local_64
                                            ,(char *)local_18);
                    if ((char)uVar5 == '\0') goto LAB_00030ca8;
                  }
                  recovered_28761(&local_64);
                }
LAB_00030b28:
                iVar9 = local_1c;
                uVar5 = recovered_2d75e((int)puVar10,0x4036c);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_2d75e((int)puVar10,0x3ff5a);
                if ((char)uVar5 == '\0') {
                  recovered_28761(local_b0 + 9);
                  recovered_28761(local_b0);
                  pcVar16 = str_000404fb;
                  goto LAB_00030d7a;
                }
                uVar5 = recovered_2d75e((int)puVar10,0x4036c);
              } while ((char)uVar5 == '\0');
              recovered_28761(local_40);
              if ((local_b8 & 1) != 0) goto LAB_0003052e;
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
              recovered_28761(local_40);
LAB_0003052e:
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
            recovered_28761(local_b0 + 9);
            recovered_28761(local_b0);
LAB_00030599:
            puVar10 = local_14;
LAB_0003059c:
            pbVar15 = local_18;
          }
          else {
            bVar4 = recovered_312d7((char *)pbVar15);
            if (bVar4) {
              uVar5 = recovered_31310((int)pbVar15,(int)local_40);
              if ((char)uVar5 != '\0') goto LAB_00030e3b;
              pcVar16 = str_0004050f;
              goto LAB_000310ef;
            }
            iVar9 = recovered_29600((int)pbVar15,0x40526);
            if ((char)iVar9 == '\0') {
              iVar9 = recovered_29600((int)pbVar15,0x4052b);
              if ((char)iVar9 == '\0') {
                iVar9 = recovered_29600((int)pbVar15,0x403f1);
                if ((((char)iVar9 != '\0') ||
                    (iVar9 = recovered_29600((int)pbVar15,0x40531), (char)iVar9 != '\0')) ||
                   (iVar9 = recovered_29600((int)pbVar15,0x40536), (char)iVar9 != '\0')) {
                  local_40[0] = 0;
                  local_40[1] = 0;
                  local_38 = 0.0;
                  local_34 = 0;
                  local_30 = 0;
                  local_2c = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0;
                  goto LAB_00030e3b;
                }
                uVar5 = recovered_3136b((int)pbVar15,(int *)(local_40 + 1));
                if ((char)uVar5 != '\0') {
                  local_40[0] = 1;
                  local_38 = (float)(int)local_40[1];
                  goto LAB_00030e3b;
                }
                iVar9 = recovered_314e1((char *)pbVar15);
                if (((char)iVar9 != '\0') &&
                   (uVar5 = recovered_28864((int)pbVar15,&local_38), (char)uVar5 != '\0')) {
                  local_40[0] = 2;
                  local_be = in_FPUControlWord | 0xc00;
                  local_40[1] = (uint)ROUND(local_38);
                  goto LAB_00031007;
                }
                uVar6 = recovered_2d6c2(pbVar15);
                pbVar15 = local_18;
                if ((char)uVar6 == '\0') {
                  pcVar16 = str_0004055d;
LAB_00030db9:
                  uVar6 = *local_14;
                  goto LAB_000310f2;
                }
                uVar5 = recovered_2daf4((int)local_18,(int)local_40);
                puVar10 = local_14;
                if ((char)uVar5 != '\0') goto LAB_00030e3b;
                iVar9 = recovered_28d73((int)pbVar15);
                pbVar15 = local_18;
                if ((char)iVar9 != '\0') {
                  bVar4 = recovered_28d04(local_40,(int)local_18);
                  puVar10 = local_14;
                  if (bVar4) goto LAB_00030e3b;
                  pcVar16 = str_0004053a;
                  goto LAB_000310ef;
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
                goto LAB_00030599;
              }
              iVar9 = 0;
            }
            else {
              iVar9 = 1;
            }
            recovered_31157(local_40,iVar9);
          }
LAB_00030e3b:
          do {
            while( true ) {
              if (*(uint *)puVar10[1] <= puVar10[2]) goto LAB_00031109;
              iVar9 = recovered_2100f(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x3fe86);
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
              uVar5 = recovered_2f057(puVar10,local_b0 + 9);
              if ((char)uVar5 == '\0') goto LAB_000310cd;
              uVar5 = recovered_2d75e((int)puVar10,0x3fe88);
              if ((char)uVar5 == '\0') {
                recovered_28761(local_b0 + 9);
                recovered_28761(local_40);
                pcVar16 = str_000404cf;
                goto LAB_000310ef;
              }
              uVar5 = recovered_31532((int *)local_40,(int *)(local_b0 + 9),local_b0);
              local_1c = CONCAT31(PF_PART3(local_1c, 1),(char)uVar5);
              recovered_28761(local_b0 + 9);
              recovered_28761(local_40);
              if ((char)local_1c == '\0') {
                pcVar16 = str_0004056e;
                goto LAB_00030d7a;
              }
              recovered_28761(local_40);
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
            iVar9 = recovered_2100f(*(int *)(*(int *)(puVar10[1] + 8) + puVar10[2] * 4),0x3fee2);
            if (iVar9 != 0) {
LAB_00031109:
              puVar10 = local_68;
              recovered_28761(local_68);
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
            uVar5 = recovered_2d75e((int)puVar10,0x3ff07);
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
                uVar5 = recovered_2f057(puVar10,local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_28761(local_b0);
                  recovered_2d71c((uint *)&local_64);
                  goto LAB_000310cd;
                }
                uVar5 = recovered_2d7a2((int *)&local_64,(int)local_b0);
                recovered_28761(local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_2d71c((uint *)&local_64);
                  recovered_28761(local_40);
                  pcVar16 = str_00040583;
                  goto LAB_000310ef;
                }
                uVar5 = recovered_2d75e((int)puVar10,0x3ff07);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_2d75e((int)puVar10,0x3ff5a);
                if ((char)uVar5 == '\0') {
                  recovered_2d71c((uint *)&local_64);
                  recovered_28761(local_40);
                  pcVar16 = str_000405ac;
                  goto LAB_000310ef;
                }
              }
            }
            uVar6 = recovered_317d8((byte **)*puVar10,(int *)local_40,local_5c,local_64,
                                    (int *)(local_b0 + 9));
            recovered_2d71c((uint *)&local_64);
            if ((char)uVar6 == '\0') {
              recovered_28761(local_b0 + 9);
LAB_000310cd:
              puVar10 = local_40;
LAB_000310d0:
              recovered_28761(puVar10);
              return '\0';
            }
            recovered_28761(local_40);
            recovered_28761(local_40);
            puVar10 = local_b0 + 9;
            puVar12 = local_40;
            for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            pbVar15 = local_18;
LAB_00031007:
            puVar10 = local_14;
          } while( true );
        }
        bVar4 = recovered_2db7f(local_40);
        if (bVar4) {
          uVar5 = recovered_2d75e((int)puVar10,0x3fe88);
          if ((char)uVar5 != '\0') goto LAB_00030e3b;
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
            uVar5 = recovered_2f057(puVar10,puVar12);
            if ((char)uVar5 == '\0') goto LAB_000310cd;
            uVar5 = recovered_2eefe(local_28,(int)puVar12);
            recovered_28761(puVar12);
            if ((char)uVar5 == '\0') {
              recovered_28761(local_40);
              pcVar16 = str_00040455;
              goto LAB_00030d7a;
            }
            uVar5 = recovered_2d75e((int)puVar10,0x3fe88);
            if ((char)uVar5 != '\0') goto LAB_0003059c;
            uVar5 = recovered_2d75e((int)puVar10,0x3ff5a);
          } while ((char)uVar5 != '\0');
          recovered_28761(local_40);
          pcVar16 = str_00040478;
LAB_00030d7a:
          pbVar15 = local_18;
        }
        else {
          pcVar16 = str_00040455;
LAB_000310ef:
        }
      }
    }
    else {
      pcVar16 = str_0004042b;
LAB_00030297:
      pbVar15 = &DAT_00040427;
    }
LAB_000310f0:
    uVar6 = *puVar10;
LAB_000310f2:
    recovered_2d241(uVar6,(char *)pbVar15,pcVar16);
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
  cVar3 = recovered_2fe01(param_1,(int *)local_40);
  if (cVar3 == '\0') {
    return '\0';
  }
  if (local_40[0] == 1) {
LAB_0002fe6e:
    recovered_2ded3(local_b0 + 9,-local_40[1]);
  }
  else {
    if (local_40[0] != 2) {
      if (local_40[0] != 5) {
        recovered_28761(local_40);
        pcVar16 = str_000403cd;
        uVar6 = *param_1;
        pbVar15 = &DAT_000403c1;
        goto LAB_000310f2;
      }
      goto LAB_0002fe6e;
    }
    recovered_288e4(local_b0 + 9,-local_38);
  }
  iVar9 = 9;
  puVar10 = local_b0 + 9;
LAB_00030264:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar10;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  }
  recovered_28761(local_40);
  return '\x01';
}

