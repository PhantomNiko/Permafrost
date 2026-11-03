#include "functions.h"
#undef DAT_0004712e
#define DAT_0004712e (*(uint8_t *)(0x4712eU))
#undef DAT_000475e8
#define DAT_000475e8 (*(uint8_t *)(0x475e8U))
#undef DAT_0004761c
#define DAT_0004761c (*(uint8_t *)(0x4761cU))
#undef DAT_0004764e
#define DAT_0004764e (*(uint8_t *)(0x4764eU))
#undef str_000475f4
#define str_000475f4 (*(char (*)[1])(0x475f4U))
#undef str_0004761e
#define str_0004761e (*(char (*)[1])(0x4761eU))
#undef str_00047652
#define str_00047652 (*(char (*)[1])(0x47652U))
#undef str_0004766f
#define str_0004766f (*(char (*)[1])(0x4766fU))
#undef str_0004767c
#define str_0004767c (*(char (*)[1])(0x4767cU))
#undef str_0004769f
#define str_0004769f (*(char (*)[1])(0x4769fU))
#undef str_000476b3
#define str_000476b3 (*(char (*)[1])(0x476b3U))
#undef str_000476d6
#define str_000476d6 (*(char (*)[1])(0x476d6U))
#undef str_000476f6
#define str_000476f6 (*(char (*)[1])(0x476f6U))
#undef str_00047705
#define str_00047705 (*(char (*)[1])(0x47705U))
#undef str_00047722
#define str_00047722 (*(char (*)[1])(0x47722U))
#undef str_00047736
#define str_00047736 (*(char (*)[1])(0x47736U))
#undef str_00047761
#define str_00047761 (*(char (*)[1])(0x47761U))
#undef str_00047784
#define str_00047784 (*(char (*)[1])(0x47784U))
#undef str_00047795
#define str_00047795 (*(char (*)[1])(0x47795U))
#undef str_000477aa
#define str_000477aa (*(char (*)[1])(0x477aaU))
#undef str_000477d3
#define str_000477d3 (*(char (*)[1])(0x477d3U))
#undef str_000477e7
#define str_000477e7 (*(char (*)[1])(0x477e7U))
#undef str_00047840
#define str_00047840 (*(char (*)[1])(0x47840U))
#define local_48 (*(undefined4 *)(frame + 224))
#define local_44 (*(undefined4 *)(frame + 228))
#define local_40 (*(byte * *)(frame + 232))
#define local_3c (*(int *)(frame + 236))
#define local_38 (*(float *)(frame + 240))
#define local_34 (*(int *)(frame + 244))
#define local_30 (*(undefined4 *)(frame + 248))
#define local_2c (*(undefined4 *)(frame + 252))
#define local_28 (*(int *)(frame + 256))
#define local_24 (*(int *)(frame + 260))
#define local_20 (*(undefined4 *)(frame + 264))
#define local_1c (*(int *)(frame + 268))
#define local_18 (*(uint * *)(frame + 272))
#define local_14 (*(byte * *)(frame + 276))
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
#define local_b0 (*(byte * *)(frame + 120))
#define local_ac (*(uint (*)[17])(frame + 124))
#define local_68 (*(uint * *)(frame + 192))
#define local_64 (*(byte ** *)(frame + 196))
#define local_60 (*(int *)(frame + 200))
#define local_5c (*(byte ** *)(frame + 204))
#define local_58 (*(undefined4 *)(frame + 208))
#define local_54 (*(undefined4 *)(frame + 212))
#define local_50 (*(undefined4 *)(frame + 216))
#define local_4c (*(undefined4 *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33abf
 */

char recovered_33abf(uint *param_1,uint *param_2)

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
  byte **ppbVar11;
  byte ***pppbVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  byte **ppbVar16;
  ushort in_FPUControlWord = pf_fpu_control();
  byte *pbVar17;
  char *pcVar18;

  uVar5 = recovered_31428((int)param_1,0x475e8);
  if ((char)uVar5 == '\0') {
    uVar5 = recovered_31428((int)param_1,0x47616);
    if ((char)uVar5 != '\0') {
      local_40 = (byte *)0x0;
      local_3c = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      cVar3 = recovered_33abf(param_1,(uint *)&local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      uVar5 = recovered_31b29((int *)&local_40);
      recovered_34e4c(local_ac + 8,(uint)(byte)((byte)uVar5 ^ 1));
      iVar9 = 9;
      puVar7 = local_ac + 8;
LAB_00033ba7:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar7;
        puVar7 = puVar7 + 1;
        param_2 = param_2 + 1;
      }
      recovered_26052(&local_40);
      return cVar3;
    }
    uVar6 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_68 = param_2;
    local_18 = param_1;
    if (uVar6 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_2d3d6(*(int *)(uVar2 + uVar6 * 4),0x47618);
      if ((char)iVar9 != '\0') {
        local_18[2] = uVar6 + 1;
        if ((((((uVar1 <= uVar6 + 1) ||
               (pbVar17 = *(byte **)(uVar2 + 4 + uVar6 * 4), pbVar17 == (byte *)0x0)) ||
              (uVar6 = (uint)*pbVar17, uVar6 == 0)) ||
             ((pbVar17[1] == 0 &&
              (((uVar6 - 0x25 < 0x17 && ((0x4005f1U >> (uVar6 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar6 - 0x5c < 3 || (uVar6 == 0x7d)))))))) ||
            ((((iVar9 = recovered_2d3f1((int)pbVar17,0x46fd8), (char)iVar9 != '\0' ||
               (iVar9 = recovered_2d3f1((int)pbVar17,0x46fe3), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_2d3f1((int)pbVar17,0x46fdc), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_2d3f1((int)pbVar17,0x46fe8), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_2d3f1((int)pbVar17,0x475c6), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_2d3f1((int)pbVar17,0x475cc), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_21415((int)pbVar17,0x475c9), iVar9 == 0 ||
                (iVar9 = recovered_21415((int)pbVar17,0x475d0), iVar9 == 0)))) ||
              (iVar9 = recovered_21415((int)pbVar17,0x475d3), iVar9 == 0)))))) ||
           (((iVar9 = recovered_21415((int)pbVar17,0x475d6), iVar9 == 0 ||
             (iVar9 = recovered_21415((int)pbVar17,0x475d9), iVar9 == 0)) ||
            ((iVar9 = recovered_21415((int)pbVar17,0x475dc), iVar9 == 0 ||
             (((iVar9 = recovered_21415((int)pbVar17,0x475e0), iVar9 == 0 ||
               (iVar9 = recovered_21415((int)pbVar17,0x475de), iVar9 == 0)) ||
              (iVar9 = recovered_21415((int)pbVar17,0x475e3), iVar9 == 0)))))))) {
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
        local_40 = (byte *)0x0;
        local_3c = 0;
        local_38 = 0.0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        cVar3 = recovered_33abf(local_18,(uint *)&local_40);
        if (cVar3 == '\0') {
          return '\0';
        }
        uVar5 = recovered_31b29((int *)&local_40);
        puVar7 = local_ac + 8;
        recovered_34e4c(puVar7,(uint)(byte)((byte)uVar5 ^ 1));
        iVar9 = 9;
        param_2 = local_68;
        goto LAB_00033ba7;
      }
    }
    puVar7 = local_18;
    uVar5 = recovered_31428((int)local_18,0x4761c);
    if ((char)uVar5 != '\0') {
      local_40 = (byte *)0x0;
      local_3c = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      cVar3 = recovered_33abf(puVar7,(uint *)&local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      if (local_28 == 0 || local_40 != (byte *)0x7) {
        if (local_24 == 0 || local_40 != (byte *)0x8) {
          if (local_34 == 0 || local_40 != (byte *)0x3) {
            recovered_26052(&local_40);
            pcVar18 = str_0004761e;
            pbVar17 = &DAT_0004761c;
            goto LAB_00034d70;
          }
          iVar9 = recovered_213fa(local_34);
        }
        else {
          iVar9 = recovered_34e76(local_24);
        }
      }
      else {
        iVar9 = *(int *)(local_28 + 8);
      }
      puVar7 = local_ac + 8;
      recovered_31b91(puVar7,iVar9);
      iVar9 = 9;
      param_2 = local_68;
      goto LAB_00033f22;
    }
    if (local_68 == (uint *)0x0) {
      return '\0';
    }
    uVar6 = puVar7[2];
    if (uVar6 < *(uint *)puVar7[1]) {
      uVar1 = ((uint *)puVar7[1])[2];
      puVar7[2] = uVar6 + 1;
      pbVar17 = *(byte **)(uVar1 + uVar6 * 4);
      local_40 = (byte *)0x0;
      local_3c = 0;
      local_38 = 0.0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar9 = recovered_21415((int)pbVar17,0x47109);
      local_14 = pbVar17;
      if (iVar9 == 0) {
        uVar5 = recovered_32d15(puVar7,(uint *)&local_40);
        if ((char)uVar5 == '\0') {
          return '\0';
        }
        uVar5 = recovered_31428((int)puVar7,0x4712e);
        if ((char)uVar5 != '\0') goto LAB_00034303;
        recovered_26052(&local_40);
        pcVar18 = str_0004766f;
        pbVar17 = &DAT_0004712e;
      }
      else {
        iVar9 = recovered_21415((int)pbVar17,0x470ad);
        if (iVar9 != 0) {
          iVar9 = recovered_21415((int)pbVar17,0x47591);
          if (iVar9 == 0) {
            local_ac[8] = 0;
            local_ac[9] = 0;
            local_ac[10] = 0;
            local_ac[0xb] = 0;
            local_ac[0xc] = 0;
            local_ac[0xd] = 0;
            local_ac[0xe] = 0;
            local_ac[0xf] = 0;
            local_ac[0x10] = 0;
            local_b0 = (byte *)0x0;
            local_ac[0] = 0;
            local_ac[1] = 0;
            local_ac[2] = 0;
            local_ac[3] = 0;
            local_ac[4] = 0;
            local_ac[5] = 0;
            local_ac[6] = 0;
            local_ac[7] = 0;
            bVar4 = recovered_3183d(local_ac + 8);
            if ((!bVar4) || (bVar4 = recovered_2c3e2(&local_b0), !bVar4)) {
LAB_00034d4f:
              recovered_26052(local_ac + 8);
              recovered_26052(&local_b0);
              pcVar18 = str_000476b3;
              goto LAB_00034d6d;
            }
            local_f0 = local_ac + 5;
            local_ec = local_ac + 6;
            local_e8 = local_ac + 7;
            uVar5 = recovered_31428((int)puVar7,0x47593);
            if ((char)uVar5 == '\0') {
              iVar9 = 0;
              local_b8 = 0;
              do {
                if (*(uint *)puVar7[1] <= puVar7[2]) {
                  recovered_26052(local_ac + 8);
                  recovered_26052(&local_b0);
                  pcVar18 = str_000476d6;
                  goto LAB_00033f55;
                }
                iVar8 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + puVar7[2] * 4),0x470ad);
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
                  local_b4 = *(byte **)(*(int *)(puVar7[1] + 8) + puVar7[2] * 4);
                  puVar7[2] = puVar7[2] + 1;
                  local_1c = iVar9;
                  uVar5 = recovered_32d15(puVar7,(uint *)&local_64);
                  if ((char)uVar5 != '\0') {
                    uVar5 = recovered_31428((int)puVar7,0x470af);
                    if ((char)uVar5 == '\0') {
                      recovered_26052(&local_64);
                      recovered_26052(&local_e4);
                      recovered_26052(local_ac + 8);
                      recovered_26052(&local_b0);
                      pcVar18 = str_000476f6;
                      uVar6 = *puVar7;
                      pbVar17 = local_b4;
                      goto LAB_00034d72;
                    }
                    uVar5 = recovered_31428((int)puVar7,0x47703);
                    if (((char)uVar5 == '\0') &&
                       (uVar5 = recovered_31428((int)local_18,0x4743b), (char)uVar5 == '\0')) {
                      recovered_26052(&local_64);
                      recovered_26052(&local_e4);
                      recovered_26052(local_ac + 8);
                      recovered_26052(&local_b0);
                      pcVar18 = str_00047705;
                      pbVar17 = local_b4;
                      goto LAB_00034dcd;
                    }
                    if ((!((local_b8 & 1) == 0 && local_1c != 0)) ||
                       (uVar5 = recovered_34ebb(*local_18,(int *)&local_b0,(int *)(local_ac + 8),
                                                (char *)local_b4), (char)uVar5 != '\0')) {
                      puVar7 = local_18;
                      uVar5 = recovered_32d15(local_18,(uint *)&local_e4);
                      if (((char)uVar5 != '\0') &&
                         (uVar5 = recovered_34f44(*puVar7,(int *)&local_b0,(int *)&local_64,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar5 != '\0')) {
                        recovered_26052(&local_64);
                        uVar6 = recovered_26052(&local_e4);
                        local_b8 = CONCAT31((int3)(uVar6 >> 8),1);
                        goto LAB_00034aba;
                      }
                    }
                  }
LAB_00034dec:
                  recovered_26052(&local_64);
                  pppbVar12 = &local_e4;
LAB_00034dfa:
                  recovered_26052(pppbVar12);
                  recovered_26052(local_ac + 8);
                  ppbVar11 = &local_b0;
                  goto LAB_00034598;
                }
                if ((puVar7[2] + 1 < *(uint *)puVar7[1]) &&
                   ((iVar8 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + 4 + puVar7[2] * 4),
                                             0x47703), iVar8 == 0 ||
                    (iVar8 = recovered_21415(*(int *)(*(int *)(puVar7[1] + 8) + 4 + puVar7[2] * 4),
                                             0x4743b), iVar8 == 0)))) {
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
                  local_b4 = (byte *)*puVar7;
                  iVar8 = *(int *)(puVar7[1] + 8);
                  uVar6 = puVar7[2];
                  puVar7[2] = uVar6 + 1;
                  pbVar17 = *(byte **)(iVar8 + uVar6 * 4);
                  local_1c = iVar9;
                  if (pbVar17 == (byte *)0x0) goto LAB_00034dec;
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  bVar4 = recovered_34fcc((char *)pbVar17);
                  if (bVar4) {
                    uVar6 = recovered_35005((int)pbVar17,(uint *)&local_64);
                    if ((char)uVar6 == '\0') {
                      pcVar18 = str_00047840;
                      goto LAB_00034dd9;
                    }
                  }
                  else {
                    uVar5 = recovered_35060((int)pbVar17,&local_60);
                    if ((char)uVar5 == '\0') {
                      iVar9 = recovered_35236((char *)pbVar17);
                      if (((char)iVar9 == '\0') ||
                         (uVar5 = recovered_2c8c1((int)pbVar17,(float *)&local_5c),
                         (char)uVar5 == '\0')) {
                        iVar9 = recovered_2d3f1((int)pbVar17,0x4774d);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_2d3f1((int)pbVar17,0x47752);
                          if ((char)iVar9 == '\0') {
                            uVar6 = recovered_3138c(pbVar17);
                            if ((char)uVar6 == '\0') {
                              pcVar18 = str_000477e7;
                            }
                            else {
                              uVar6 = recovered_2c6ca((uint *)&local_64,(char *)pbVar17);
                              if ((char)uVar6 != '\0') goto LAB_00034a29;
                              pcVar18 = str_000476b3;
                            }
LAB_00034dd9:
                            recovered_30f0b((uint)local_b4,(char *)pbVar17,pcVar18);
                            goto LAB_00034dec;
                          }
                          recovered_34e4c(&local_64,0);
                        }
                        else {
                          recovered_34e4c(&local_64,1);
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
LAB_00034a29:
                  puVar7 = local_18;
                  local_18[2] = local_18[2] + 1;
                  if (((((local_b8 & 1) == 0 && local_1c != 0) &&
                       (uVar5 = recovered_34ebb(*local_18,(int *)&local_b0,(int *)(local_ac + 8),
                                                (char *)pbVar17), (char)uVar5 == '\0')) ||
                      (uVar5 = recovered_32d15(puVar7,(uint *)&local_e4), (char)uVar5 == '\0')) ||
                     (uVar5 = recovered_34f44(*puVar7,(int *)&local_b0,(int *)&local_64,
                                              (int)&local_e4,(char *)pbVar17), (char)uVar5 == '\0'))
                  goto LAB_00034dec;
                  recovered_26052(&local_64);
                  uVar6 = recovered_26052(&local_e4);
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
                  uVar5 = recovered_32d15(puVar7,(uint *)&local_64);
                  if ((char)uVar5 == '\0') {
LAB_00034c46:
                    pppbVar12 = &local_64;
                    goto LAB_00034dfa;
                  }
                  local_1c = iVar9 + 1;
                  if ((local_b8 & 1) == 0) {
                    uVar5 = recovered_32bbc(local_ac[0xe],(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      recovered_26052(&local_64);
                      goto LAB_00034d4f;
                    }
                  }
                  else {
                    recovered_31b91(&local_e4,local_1c);
                    uVar5 = recovered_34f44(*puVar7,(int *)&local_b0,(int *)&local_e4,(int)&local_64
                                            ,(char *)local_14);
                    if ((char)uVar5 == '\0') goto LAB_00034c46;
                  }
                  recovered_26052(&local_64);
                }
LAB_00034aba:
                iVar9 = local_1c;
                uVar5 = recovered_31428((int)puVar7,0x47593);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_31428((int)puVar7,0x47181);
                if ((char)uVar5 == '\0') {
                  recovered_26052(local_ac + 8);
                  recovered_26052(&local_b0);
                  pcVar18 = str_00047722;
                  goto LAB_00034d6d;
                }
                uVar5 = recovered_31428((int)puVar7,0x47593);
              } while ((char)uVar5 == '\0');
              recovered_26052(&local_40);
              if ((local_b8 & 1) != 0) goto LAB_000341ec;
              puVar7 = local_ac + 8;
              ppbVar11 = &local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *ppbVar11 = (byte *)*puVar7;
                puVar7 = puVar7 + 1;
                ppbVar11 = ppbVar11 + 1;
              }
              local_ac[8] = 0;
              puVar7 = local_ac + 9;
              puVar10 = local_ac + 10;
              puVar13 = local_ac + 0xb;
              puVar14 = local_ac + 0xc;
              puVar15 = local_ac + 0xd;
              local_f0 = local_ac + 0xe;
              local_ec = local_ac + 0xf;
              local_e8 = local_ac + 0x10;
            }
            else {
              recovered_26052(&local_40);
LAB_000341ec:
              ppbVar11 = &local_b0;
              ppbVar16 = &local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *ppbVar16 = *ppbVar11;
                ppbVar11 = ppbVar11 + 1;
                ppbVar16 = ppbVar16 + 1;
              }
              local_b0 = (byte *)0x0;
              puVar7 = local_ac;
              puVar10 = local_ac + 1;
              puVar13 = local_ac + 2;
              puVar14 = local_ac + 3;
              puVar15 = local_ac + 4;
            }
            *puVar7 = 0;
            *puVar10 = 0;
            *puVar13 = 0;
            *puVar14 = 0;
            *puVar15 = 0;
            *local_f0 = 0;
            *local_ec = 0;
            *local_e8 = 0;
            recovered_26052(local_ac + 8);
            recovered_26052(&local_b0);
          }
          else {
            bVar4 = recovered_34fcc((char *)pbVar17);
            if (bVar4) {
              uVar6 = recovered_35005((int)pbVar17,(uint *)&local_40);
              if ((char)uVar6 != '\0') goto LAB_00034303;
              pcVar18 = str_00047736;
              goto LAB_000345ba;
            }
            iVar9 = recovered_2d3d6((int)pbVar17,0x4774d);
            if ((char)iVar9 != '\0') {
              recovered_34e4c(&local_40,1);
              goto LAB_00034303;
            }
            iVar9 = recovered_2d3d6((int)pbVar17,0x47752);
            if ((char)iVar9 != '\0') {
              recovered_34e4c(&local_40,0);
              goto LAB_00034303;
            }
            iVar9 = recovered_2d3d6((int)pbVar17,0x47618);
            if ((((char)iVar9 != '\0') ||
                (iVar9 = recovered_2d3d6((int)pbVar17,0x47758), (char)iVar9 != '\0')) ||
               (iVar9 = recovered_2d3d6((int)pbVar17,0x4775d), (char)iVar9 != '\0')) {
              local_40 = (byte *)0x0;
              local_3c = 0;
              local_38 = 0.0;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              local_20 = 0;
              goto LAB_00034303;
            }
            uVar5 = recovered_35060((int)pbVar17,&local_3c);
            if ((char)uVar5 != '\0') {
              local_40 = (byte *)0x1;
              local_38 = (float)local_3c;
              goto LAB_00034303;
            }
            local_ac[8] = 0;
            uVar5 = recovered_351d6((int)pbVar17,(int *)(local_ac + 8));
            if ((char)uVar5 == '\0') {
              iVar9 = recovered_35236((char *)local_14);
              if (((char)iVar9 == '\0') ||
                 (uVar5 = recovered_2c8c1((int)local_14,&local_38), (char)uVar5 == '\0')) {
                uVar6 = recovered_3138c(local_14);
                if ((char)uVar6 == '\0') {
                  pcVar18 = str_00047784;
                  pbVar17 = local_14;
LAB_00034dcd:
                  uVar6 = *local_18;
                  goto LAB_00034d72;
                }
                uVar5 = recovered_317be((int)local_14,(int)&local_40);
                if ((char)uVar5 == '\0') {
                  iVar9 = recovered_2caf8((int)local_14);
                  if ((char)iVar9 == '\0') {
                    local_40 = (byte *)0x0;
                    local_3c = 0;
                    local_38 = 0.0;
                    local_34 = 0;
                    local_30 = 0;
                    local_2c = 0;
                    local_28 = 0;
                    local_24 = 0;
                    local_20 = 0;
                  }
                  else {
                    uVar5 = recovered_2ca89((int)&local_40,(int)local_14);
                    if ((char)uVar5 == '\0') {
                      pcVar18 = str_00047761;
                      pbVar17 = local_14;
                      goto LAB_00034dcd;
                    }
                  }
                }
              }
              else {
                local_40 = (byte *)0x2;
                local_be = in_FPUControlWord | 0xc00;
                local_3c = (int)ROUND(local_38);
              }
            }
            else {
              recovered_35219(&local_40,local_ac[8]);
            }
          }
          puVar7 = local_18;
LAB_0003425a:
          pbVar17 = local_14;
LAB_00034303:
          do {
            while( true ) {
              if (*(uint *)puVar7[1] <= puVar7[2]) goto LAB_000345c0;
              iVar9 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + puVar7[2] * 4),0x470ad);
              if (iVar9 != 0) break;
              local_ac[8] = 0;
              local_ac[9] = 0;
              local_ac[10] = 0;
              local_ac[0xb] = 0;
              local_ac[0xc] = 0;
              local_ac[0xd] = 0;
              local_ac[0xe] = 0;
              local_ac[0xf] = 0;
              local_ac[0x10] = 0;
              local_b0 = (byte *)0x0;
              local_ac[0] = 0;
              local_ac[1] = 0;
              local_ac[2] = 0;
              local_ac[3] = 0;
              local_ac[4] = 0;
              local_ac[5] = 0;
              local_ac[6] = 0;
              local_ac[7] = 0;
              puVar7[2] = puVar7[2] + 1;
              uVar5 = recovered_32d15(puVar7,local_ac + 8);
              if ((char)uVar5 == '\0') goto LAB_00034595;
              uVar5 = recovered_31428((int)puVar7,0x470af);
              if ((char)uVar5 == '\0') {
                recovered_26052(local_ac + 8);
                recovered_26052(&local_40);
                pcVar18 = str_000476f6;
                goto LAB_000345ba;
              }
              iVar9 = recovered_35287((int *)&local_40,(int *)(local_ac + 8),(uint *)&local_b0);
              local_1c = CONCAT31(PF_PART3(local_1c, 1),(char)iVar9);
              recovered_26052(local_ac + 8);
              recovered_26052(&local_40);
              if ((char)local_1c == '\0') {
                pcVar18 = str_00047795;
                goto LAB_00034d6d;
              }
              recovered_26052(&local_40);
              ppbVar11 = &local_b0;
              ppbVar16 = &local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *ppbVar16 = *ppbVar11;
                ppbVar11 = ppbVar11 + 1;
                ppbVar16 = ppbVar16 + 1;
              }
              pbVar17 = local_14;
              puVar7 = local_18;
            }
            iVar9 = recovered_21415(*(int *)(*(int *)(puVar7[1] + 8) + puVar7[2] * 4),0x47109);
            if (iVar9 != 0) {
LAB_000345c0:
              puVar7 = local_68;
              recovered_26052(local_68);
              ppbVar11 = &local_40;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar7 = (uint)*ppbVar11;
                ppbVar11 = ppbVar11 + 1;
                puVar7 = puVar7 + 1;
              }
              return '\x01';
            }
            local_ac[8] = 0;
            local_ac[9] = 0;
            local_ac[10] = 0;
            local_ac[0xb] = 0;
            local_ac[0xc] = 0;
            local_ac[0xd] = 0;
            local_ac[0xe] = 0;
            local_ac[0xf] = 0;
            local_ac[0x10] = 0;
            local_64 = (byte **)0x0;
            local_60 = 0;
            local_5c = (byte **)0x0;
            puVar7[2] = puVar7[2] + 1;
            uVar5 = recovered_31428((int)puVar7,0x4712e);
            if ((char)uVar5 == '\0') {
              while( true ) {
                local_b0 = (byte *)0x0;
                local_ac[0] = 0;
                local_ac[1] = 0;
                local_ac[2] = 0;
                local_ac[3] = 0;
                local_ac[4] = 0;
                local_ac[5] = 0;
                local_ac[6] = 0;
                local_ac[7] = 0;
                uVar5 = recovered_32d15(puVar7,(uint *)&local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_26052(&local_b0);
                  recovered_313e6((uint *)&local_64);
                  goto LAB_00034595;
                }
                uVar5 = recovered_3146c((int *)&local_64,(int)&local_b0);
                recovered_26052(&local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_313e6((uint *)&local_64);
                  recovered_26052(&local_40);
                  pcVar18 = str_000477aa;
                  goto LAB_000345ba;
                }
                uVar5 = recovered_31428((int)puVar7,0x4712e);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_31428((int)puVar7,0x47181);
                if ((char)uVar5 == '\0') {
                  recovered_313e6((uint *)&local_64);
                  recovered_26052(&local_40);
                  pcVar18 = str_000477d3;
                  goto LAB_000345ba;
                }
              }
            }
            uVar6 = recovered_3552d((byte **)*puVar7,&local_40,local_5c,local_64,local_ac + 8);
            recovered_313e6((uint *)&local_64);
            if ((char)uVar6 == '\0') {
              recovered_26052(local_ac + 8);
LAB_00034595:
              ppbVar11 = &local_40;
LAB_00034598:
              recovered_26052(ppbVar11);
              return '\0';
            }
            recovered_26052(&local_40);
            recovered_26052(&local_40);
            puVar7 = local_ac + 8;
            ppbVar11 = &local_40;
            for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
              *ppbVar11 = (byte *)*puVar7;
              puVar7 = puVar7 + 1;
              ppbVar11 = ppbVar11 + 1;
            }
            pbVar17 = local_14;
            puVar7 = local_18;
          } while( true );
        }
        bVar4 = recovered_3183d(&local_40);
        if (bVar4) {
          uVar5 = recovered_31428((int)puVar7,0x470af);
          if ((char)uVar5 != '\0') goto LAB_00034303;
          puVar10 = local_ac + 8;
          do {
            local_ac[8] = 0;
            local_ac[9] = 0;
            local_ac[10] = 0;
            local_ac[0xb] = 0;
            local_ac[0xc] = 0;
            local_ac[0xd] = 0;
            local_ac[0xe] = 0;
            local_ac[0xf] = 0;
            local_ac[0x10] = 0;
            uVar5 = recovered_32d15(puVar7,puVar10);
            if ((char)uVar5 == '\0') goto LAB_00034595;
            uVar5 = recovered_32bbc(local_28,(int)puVar10);
            recovered_26052(puVar10);
            if ((char)uVar5 == '\0') {
              recovered_26052(&local_40);
              pcVar18 = str_0004767c;
              goto LAB_00034d6d;
            }
            uVar5 = recovered_31428((int)puVar7,0x470af);
            if ((char)uVar5 != '\0') goto LAB_0003425a;
            uVar5 = recovered_31428((int)puVar7,0x47181);
          } while ((char)uVar5 != '\0');
          recovered_26052(&local_40);
          pcVar18 = str_0004769f;
LAB_00034d6d:
          pbVar17 = local_14;
        }
        else {
          pcVar18 = str_0004767c;
LAB_000345ba:
        }
      }
    }
    else {
      pcVar18 = str_00047652;
LAB_00033f55:
      pbVar17 = &DAT_0004764e;
    }
LAB_00034d70:
    uVar6 = *puVar7;
LAB_00034d72:
    recovered_30f0b(uVar6,(char *)pbVar17,pcVar18);
    return '\0';
  }
  local_40 = (byte *)0x0;
  local_3c = 0;
  local_38 = 0.0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  cVar3 = recovered_33abf(param_1,(uint *)&local_40);
  if (cVar3 == '\0') {
    return '\0';
  }
  if (local_40 == (byte *)0x1) {
LAB_00033b2c:
    recovered_31b91(local_ac + 8,-local_3c);
  }
  else {
    if (local_40 != (byte *)0x2) {
      if (local_40 != (byte *)0x5) {
        recovered_26052(&local_40);
        pcVar18 = str_000475f4;
        uVar6 = *param_1;
        pbVar17 = &DAT_000475e8;
        goto LAB_00034d72;
      }
      goto LAB_00033b2c;
    }
    recovered_2c941(local_ac + 8,-local_38);
  }
  iVar9 = 9;
  puVar7 = local_ac + 8;
LAB_00033f22:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  recovered_26052(&local_40);
  return '\x01';
}
