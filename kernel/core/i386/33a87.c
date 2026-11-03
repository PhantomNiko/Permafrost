#include "functions.h"
#undef DAT_000470d9
#define DAT_000470d9 (*(uint8_t *)(0x470d9U))
#undef DAT_00047593
#define DAT_00047593 (*(uint8_t *)(0x47593U))
#undef DAT_000475c7
#define DAT_000475c7 (*(uint8_t *)(0x475c7U))
#undef DAT_000475f9
#define DAT_000475f9 (*(uint8_t *)(0x475f9U))
#undef str_0004759f
#define str_0004759f (*(char (*)[1])(0x4759fU))
#undef str_000475c9
#define str_000475c9 (*(char (*)[1])(0x475c9U))
#undef str_000475fd
#define str_000475fd (*(char (*)[1])(0x475fdU))
#undef str_0004761a
#define str_0004761a (*(char (*)[1])(0x4761aU))
#undef str_00047627
#define str_00047627 (*(char (*)[1])(0x47627U))
#undef str_0004764a
#define str_0004764a (*(char (*)[1])(0x4764aU))
#undef str_0004765e
#define str_0004765e (*(char (*)[1])(0x4765eU))
#undef str_00047681
#define str_00047681 (*(char (*)[1])(0x47681U))
#undef str_000476a1
#define str_000476a1 (*(char (*)[1])(0x476a1U))
#undef str_000476b0
#define str_000476b0 (*(char (*)[1])(0x476b0U))
#undef str_000476cd
#define str_000476cd (*(char (*)[1])(0x476cdU))
#undef str_000476e1
#define str_000476e1 (*(char (*)[1])(0x476e1U))
#undef str_0004770c
#define str_0004770c (*(char (*)[1])(0x4770cU))
#undef str_0004772f
#define str_0004772f (*(char (*)[1])(0x4772fU))
#undef str_00047740
#define str_00047740 (*(char (*)[1])(0x47740U))
#undef str_00047755
#define str_00047755 (*(char (*)[1])(0x47755U))
#undef str_0004777e
#define str_0004777e (*(char (*)[1])(0x4777eU))
#undef str_00047792
#define str_00047792 (*(char (*)[1])(0x47792U))
#undef str_000477eb
#define str_000477eb (*(char (*)[1])(0x477ebU))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33a87
 */

char recovered_33a87(uint *param_1,uint *param_2)

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

  uVar5 = recovered_313f0((int)param_1,0x47593);
  if ((char)uVar5 == '\0') {
    uVar5 = recovered_313f0((int)param_1,0x475c1);
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
      cVar3 = recovered_33a87(param_1,(uint *)&local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      uVar5 = recovered_31af1((int *)&local_40);
      recovered_34e14(local_ac + 8,(uint)(byte)((byte)uVar5 ^ 1));
      iVar9 = 9;
      puVar7 = local_ac + 8;
LAB_00033b6f:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar7;
        puVar7 = puVar7 + 1;
        param_2 = param_2 + 1;
      }
      recovered_2603e(&local_40);
      return cVar3;
    }
    uVar6 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_68 = param_2;
    local_18 = param_1;
    if (uVar6 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_2d39e(*(int *)(uVar2 + uVar6 * 4),0x475c3);
      if ((char)iVar9 != '\0') {
        local_18[2] = uVar6 + 1;
        if ((((((uVar1 <= uVar6 + 1) ||
               (pbVar17 = *(byte **)(uVar2 + 4 + uVar6 * 4), pbVar17 == (byte *)0x0)) ||
              (uVar6 = (uint)*pbVar17, uVar6 == 0)) ||
             ((pbVar17[1] == 0 &&
              (((uVar6 - 0x25 < 0x17 && ((0x4005f1U >> (uVar6 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar6 - 0x5c < 3 || (uVar6 == 0x7d)))))))) ||
            ((((iVar9 = recovered_2d3b9((int)pbVar17,0x46f83), (char)iVar9 != '\0' ||
               (iVar9 = recovered_2d3b9((int)pbVar17,0x46f8e), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_2d3b9((int)pbVar17,0x46f87), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_2d3b9((int)pbVar17,0x46f93), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_2d3b9((int)pbVar17,0x47571), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_2d3b9((int)pbVar17,0x47577), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_21415((int)pbVar17,0x47574), iVar9 == 0 ||
                (iVar9 = recovered_21415((int)pbVar17,0x4757b), iVar9 == 0)))) ||
              (iVar9 = recovered_21415((int)pbVar17,0x4757e), iVar9 == 0)))))) ||
           (((iVar9 = recovered_21415((int)pbVar17,0x47581), iVar9 == 0 ||
             (iVar9 = recovered_21415((int)pbVar17,0x47584), iVar9 == 0)) ||
            ((iVar9 = recovered_21415((int)pbVar17,0x47587), iVar9 == 0 ||
             (((iVar9 = recovered_21415((int)pbVar17,0x4758b), iVar9 == 0 ||
               (iVar9 = recovered_21415((int)pbVar17,0x47589), iVar9 == 0)) ||
              (iVar9 = recovered_21415((int)pbVar17,0x4758e), iVar9 == 0)))))))) {
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
        cVar3 = recovered_33a87(local_18,(uint *)&local_40);
        if (cVar3 == '\0') {
          return '\0';
        }
        uVar5 = recovered_31af1((int *)&local_40);
        puVar7 = local_ac + 8;
        recovered_34e14(puVar7,(uint)(byte)((byte)uVar5 ^ 1));
        iVar9 = 9;
        param_2 = local_68;
        goto LAB_00033b6f;
      }
    }
    puVar7 = local_18;
    uVar5 = recovered_313f0((int)local_18,0x475c7);
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
      cVar3 = recovered_33a87(puVar7,(uint *)&local_40);
      if (cVar3 == '\0') {
        return '\0';
      }
      if (local_28 == 0 || local_40 != (byte *)0x7) {
        if (local_24 == 0 || local_40 != (byte *)0x8) {
          if (local_34 == 0 || local_40 != (byte *)0x3) {
            recovered_2603e(&local_40);
            pcVar18 = str_000475c9;
            pbVar17 = &DAT_000475c7;
            goto LAB_00034d38;
          }
          iVar9 = recovered_213fa(local_34);
        }
        else {
          iVar9 = recovered_34e3e(local_24);
        }
      }
      else {
        iVar9 = *(int *)(local_28 + 8);
      }
      puVar7 = local_ac + 8;
      recovered_31b59(puVar7,iVar9);
      iVar9 = 9;
      param_2 = local_68;
      goto LAB_00033eea;
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
      iVar9 = recovered_21415((int)pbVar17,0x470b4);
      local_14 = pbVar17;
      if (iVar9 == 0) {
        uVar5 = recovered_32cdd(puVar7,(uint *)&local_40);
        if ((char)uVar5 == '\0') {
          return '\0';
        }
        uVar5 = recovered_313f0((int)puVar7,0x470d9);
        if ((char)uVar5 != '\0') goto LAB_000342cb;
        recovered_2603e(&local_40);
        pcVar18 = str_0004761a;
        pbVar17 = &DAT_000470d9;
      }
      else {
        iVar9 = recovered_21415((int)pbVar17,0x47058);
        if (iVar9 != 0) {
          iVar9 = recovered_21415((int)pbVar17,0x4753c);
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
            bVar4 = recovered_31805(local_ac + 8);
            if ((!bVar4) || (bVar4 = recovered_2c36c(&local_b0), !bVar4)) {
LAB_00034d17:
              recovered_2603e(local_ac + 8);
              recovered_2603e(&local_b0);
              pcVar18 = str_0004765e;
              goto LAB_00034d35;
            }
            local_f0 = local_ac + 5;
            local_ec = local_ac + 6;
            local_e8 = local_ac + 7;
            uVar5 = recovered_313f0((int)puVar7,0x4753e);
            if ((char)uVar5 == '\0') {
              iVar9 = 0;
              local_b8 = 0;
              do {
                if (*(uint *)puVar7[1] <= puVar7[2]) {
                  recovered_2603e(local_ac + 8);
                  recovered_2603e(&local_b0);
                  pcVar18 = str_00047681;
                  goto LAB_00033f1d;
                }
                iVar8 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + puVar7[2] * 4),0x47058);
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
                  uVar5 = recovered_32cdd(puVar7,(uint *)&local_64);
                  if ((char)uVar5 != '\0') {
                    uVar5 = recovered_313f0((int)puVar7,0x4705a);
                    if ((char)uVar5 == '\0') {
                      recovered_2603e(&local_64);
                      recovered_2603e(&local_e4);
                      recovered_2603e(local_ac + 8);
                      recovered_2603e(&local_b0);
                      pcVar18 = str_000476a1;
                      uVar6 = *puVar7;
                      pbVar17 = local_b4;
                      goto LAB_00034d3a;
                    }
                    uVar5 = recovered_313f0((int)puVar7,0x476ae);
                    if (((char)uVar5 == '\0') &&
                       (uVar5 = recovered_313f0((int)local_18,0x473e6), (char)uVar5 == '\0')) {
                      recovered_2603e(&local_64);
                      recovered_2603e(&local_e4);
                      recovered_2603e(local_ac + 8);
                      recovered_2603e(&local_b0);
                      pcVar18 = str_000476b0;
                      pbVar17 = local_b4;
                      goto LAB_00034d95;
                    }
                    if ((!((local_b8 & 1) == 0 && local_1c != 0)) ||
                       (uVar5 = recovered_34e83(*local_18,(int *)&local_b0,(int *)(local_ac + 8),
                                                (char *)local_b4), (char)uVar5 != '\0')) {
                      puVar7 = local_18;
                      uVar5 = recovered_32cdd(local_18,(uint *)&local_e4);
                      if (((char)uVar5 != '\0') &&
                         (uVar5 = recovered_34f0c(*puVar7,(int *)&local_b0,(int *)&local_64,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar5 != '\0')) {
                        recovered_2603e(&local_64);
                        uVar6 = recovered_2603e(&local_e4);
                        local_b8 = CONCAT31((int3)(uVar6 >> 8),1);
                        goto LAB_00034a82;
                      }
                    }
                  }
LAB_00034db4:
                  recovered_2603e(&local_64);
                  pppbVar12 = &local_e4;
LAB_00034dc2:
                  recovered_2603e(pppbVar12);
                  recovered_2603e(local_ac + 8);
                  ppbVar11 = &local_b0;
                  goto LAB_00034560;
                }
                if ((puVar7[2] + 1 < *(uint *)puVar7[1]) &&
                   ((iVar8 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + 4 + puVar7[2] * 4),
                                             0x476ae), iVar8 == 0 ||
                    (iVar8 = recovered_21415(*(int *)(*(int *)(puVar7[1] + 8) + 4 + puVar7[2] * 4),
                                             0x473e6), iVar8 == 0)))) {
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
                  if (pbVar17 == (byte *)0x0) goto LAB_00034db4;
                  local_64 = (byte **)0x0;
                  local_60 = 0;
                  local_5c = (byte **)0x0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  bVar4 = recovered_34f94((char *)pbVar17);
                  if (bVar4) {
                    uVar6 = recovered_34fcd((int)pbVar17,(uint *)&local_64);
                    if ((char)uVar6 == '\0') {
                      pcVar18 = str_000477eb;
                      goto LAB_00034da1;
                    }
                  }
                  else {
                    uVar5 = recovered_35028((int)pbVar17,&local_60);
                    if ((char)uVar5 == '\0') {
                      iVar9 = recovered_351fe((char *)pbVar17);
                      if (((char)iVar9 == '\0') ||
                         (uVar5 = recovered_2c889((int)pbVar17,(float *)&local_5c),
                         (char)uVar5 == '\0')) {
                        iVar9 = recovered_2d3b9((int)pbVar17,0x476f8);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_2d3b9((int)pbVar17,0x476fd);
                          if ((char)iVar9 == '\0') {
                            uVar6 = recovered_31354(pbVar17);
                            if ((char)uVar6 == '\0') {
                              pcVar18 = str_00047792;
                            }
                            else {
                              uVar6 = recovered_2c654((uint *)&local_64,(char *)pbVar17);
                              if ((char)uVar6 != '\0') goto LAB_000349f1;
                              pcVar18 = str_0004765e;
                            }
LAB_00034da1:
                            recovered_30ed3((uint)local_b4,(char *)pbVar17,pcVar18);
                            goto LAB_00034db4;
                          }
                          recovered_34e14(&local_64,0);
                        }
                        else {
                          recovered_34e14(&local_64,1);
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
LAB_000349f1:
                  puVar7 = local_18;
                  local_18[2] = local_18[2] + 1;
                  if (((((local_b8 & 1) == 0 && local_1c != 0) &&
                       (uVar5 = recovered_34e83(*local_18,(int *)&local_b0,(int *)(local_ac + 8),
                                                (char *)pbVar17), (char)uVar5 == '\0')) ||
                      (uVar5 = recovered_32cdd(puVar7,(uint *)&local_e4), (char)uVar5 == '\0')) ||
                     (uVar5 = recovered_34f0c(*puVar7,(int *)&local_b0,(int *)&local_64,
                                              (int)&local_e4,(char *)pbVar17), (char)uVar5 == '\0'))
                  goto LAB_00034db4;
                  recovered_2603e(&local_64);
                  uVar6 = recovered_2603e(&local_e4);
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
                  uVar5 = recovered_32cdd(puVar7,(uint *)&local_64);
                  if ((char)uVar5 == '\0') {
LAB_00034c0e:
                    pppbVar12 = &local_64;
                    goto LAB_00034dc2;
                  }
                  local_1c = iVar9 + 1;
                  if ((local_b8 & 1) == 0) {
                    uVar5 = recovered_32b84(local_ac[0xe],(int)&local_64);
                    if ((char)uVar5 == '\0') {
                      recovered_2603e(&local_64);
                      goto LAB_00034d17;
                    }
                  }
                  else {
                    recovered_31b59(&local_e4,local_1c);
                    uVar5 = recovered_34f0c(*puVar7,(int *)&local_b0,(int *)&local_e4,(int)&local_64
                                            ,(char *)local_14);
                    if ((char)uVar5 == '\0') goto LAB_00034c0e;
                  }
                  recovered_2603e(&local_64);
                }
LAB_00034a82:
                iVar9 = local_1c;
                uVar5 = recovered_313f0((int)puVar7,0x4753e);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_313f0((int)puVar7,0x4712c);
                if ((char)uVar5 == '\0') {
                  recovered_2603e(local_ac + 8);
                  recovered_2603e(&local_b0);
                  pcVar18 = str_000476cd;
                  goto LAB_00034d35;
                }
                uVar5 = recovered_313f0((int)puVar7,0x4753e);
              } while ((char)uVar5 == '\0');
              recovered_2603e(&local_40);
              if ((local_b8 & 1) != 0) goto LAB_000341b4;
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
              recovered_2603e(&local_40);
LAB_000341b4:
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
            recovered_2603e(local_ac + 8);
            recovered_2603e(&local_b0);
          }
          else {
            bVar4 = recovered_34f94((char *)pbVar17);
            if (bVar4) {
              uVar6 = recovered_34fcd((int)pbVar17,(uint *)&local_40);
              if ((char)uVar6 != '\0') goto LAB_000342cb;
              pcVar18 = str_000476e1;
              goto LAB_00034582;
            }
            iVar9 = recovered_2d39e((int)pbVar17,0x476f8);
            if ((char)iVar9 != '\0') {
              recovered_34e14(&local_40,1);
              goto LAB_000342cb;
            }
            iVar9 = recovered_2d39e((int)pbVar17,0x476fd);
            if ((char)iVar9 != '\0') {
              recovered_34e14(&local_40,0);
              goto LAB_000342cb;
            }
            iVar9 = recovered_2d39e((int)pbVar17,0x475c3);
            if ((((char)iVar9 != '\0') ||
                (iVar9 = recovered_2d39e((int)pbVar17,0x47703), (char)iVar9 != '\0')) ||
               (iVar9 = recovered_2d39e((int)pbVar17,0x47708), (char)iVar9 != '\0')) {
              local_40 = (byte *)0x0;
              local_3c = 0;
              local_38 = 0.0;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              local_20 = 0;
              goto LAB_000342cb;
            }
            uVar5 = recovered_35028((int)pbVar17,&local_3c);
            if ((char)uVar5 != '\0') {
              local_40 = (byte *)0x1;
              local_38 = (float)local_3c;
              goto LAB_000342cb;
            }
            local_ac[8] = 0;
            uVar5 = recovered_3519e((int)pbVar17,(int *)(local_ac + 8));
            if ((char)uVar5 == '\0') {
              iVar9 = recovered_351fe((char *)local_14);
              if (((char)iVar9 == '\0') ||
                 (uVar5 = recovered_2c889((int)local_14,&local_38), (char)uVar5 == '\0')) {
                uVar6 = recovered_31354(local_14);
                if ((char)uVar6 == '\0') {
                  pcVar18 = str_0004772f;
                  pbVar17 = local_14;
LAB_00034d95:
                  uVar6 = *local_18;
                  goto LAB_00034d3a;
                }
                uVar5 = recovered_31786((int)local_14,(int)&local_40);
                if ((char)uVar5 == '\0') {
                  iVar9 = recovered_2cac0((int)local_14);
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
                    uVar5 = recovered_2ca51((int)&local_40,(int)local_14);
                    if ((char)uVar5 == '\0') {
                      pcVar18 = str_0004770c;
                      pbVar17 = local_14;
                      goto LAB_00034d95;
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
              recovered_351e1(&local_40,local_ac[8]);
            }
          }
          puVar7 = local_18;
LAB_00034222:
          pbVar17 = local_14;
LAB_000342cb:
          do {
            while( true ) {
              if (*(uint *)puVar7[1] <= puVar7[2]) goto LAB_00034588;
              iVar9 = recovered_21415(*(int *)(((uint *)puVar7[1])[2] + puVar7[2] * 4),0x47058);
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
              uVar5 = recovered_32cdd(puVar7,local_ac + 8);
              if ((char)uVar5 == '\0') goto LAB_0003455d;
              uVar5 = recovered_313f0((int)puVar7,0x4705a);
              if ((char)uVar5 == '\0') {
                recovered_2603e(local_ac + 8);
                recovered_2603e(&local_40);
                pcVar18 = str_000476a1;
                goto LAB_00034582;
              }
              iVar9 = recovered_3524f((int *)&local_40,(int *)(local_ac + 8),(uint *)&local_b0);
              local_1c = CONCAT31(PF_PART3(local_1c, 1),(char)iVar9);
              recovered_2603e(local_ac + 8);
              recovered_2603e(&local_40);
              if ((char)local_1c == '\0') {
                pcVar18 = str_00047740;
                goto LAB_00034d35;
              }
              recovered_2603e(&local_40);
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
            iVar9 = recovered_21415(*(int *)(*(int *)(puVar7[1] + 8) + puVar7[2] * 4),0x470b4);
            if (iVar9 != 0) {
LAB_00034588:
              puVar7 = local_68;
              recovered_2603e(local_68);
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
            uVar5 = recovered_313f0((int)puVar7,0x470d9);
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
                uVar5 = recovered_32cdd(puVar7,(uint *)&local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_2603e(&local_b0);
                  recovered_313ae((uint *)&local_64);
                  goto LAB_0003455d;
                }
                uVar5 = recovered_31434((int *)&local_64,(int)&local_b0);
                recovered_2603e(&local_b0);
                if ((char)uVar5 == '\0') {
                  recovered_313ae((uint *)&local_64);
                  recovered_2603e(&local_40);
                  pcVar18 = str_00047755;
                  goto LAB_00034582;
                }
                uVar5 = recovered_313f0((int)puVar7,0x470d9);
                if ((char)uVar5 != '\0') break;
                uVar5 = recovered_313f0((int)puVar7,0x4712c);
                if ((char)uVar5 == '\0') {
                  recovered_313ae((uint *)&local_64);
                  recovered_2603e(&local_40);
                  pcVar18 = str_0004777e;
                  goto LAB_00034582;
                }
              }
            }
            uVar6 = recovered_354f5((byte **)*puVar7,&local_40,local_5c,local_64,local_ac + 8);
            recovered_313ae((uint *)&local_64);
            if ((char)uVar6 == '\0') {
              recovered_2603e(local_ac + 8);
LAB_0003455d:
              ppbVar11 = &local_40;
LAB_00034560:
              recovered_2603e(ppbVar11);
              return '\0';
            }
            recovered_2603e(&local_40);
            recovered_2603e(&local_40);
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
        bVar4 = recovered_31805(&local_40);
        if (bVar4) {
          uVar5 = recovered_313f0((int)puVar7,0x4705a);
          if ((char)uVar5 != '\0') goto LAB_000342cb;
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
            uVar5 = recovered_32cdd(puVar7,puVar10);
            if ((char)uVar5 == '\0') goto LAB_0003455d;
            uVar5 = recovered_32b84(local_28,(int)puVar10);
            recovered_2603e(puVar10);
            if ((char)uVar5 == '\0') {
              recovered_2603e(&local_40);
              pcVar18 = str_00047627;
              goto LAB_00034d35;
            }
            uVar5 = recovered_313f0((int)puVar7,0x4705a);
            if ((char)uVar5 != '\0') goto LAB_00034222;
            uVar5 = recovered_313f0((int)puVar7,0x4712c);
          } while ((char)uVar5 != '\0');
          recovered_2603e(&local_40);
          pcVar18 = str_0004764a;
LAB_00034d35:
          pbVar17 = local_14;
        }
        else {
          pcVar18 = str_00047627;
LAB_00034582:
        }
      }
    }
    else {
      pcVar18 = str_000475fd;
LAB_00033f1d:
      pbVar17 = &DAT_000475f9;
    }
LAB_00034d38:
    uVar6 = *puVar7;
LAB_00034d3a:
    recovered_30ed3(uVar6,(char *)pbVar17,pcVar18);
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
  cVar3 = recovered_33a87(param_1,(uint *)&local_40);
  if (cVar3 == '\0') {
    return '\0';
  }
  if (local_40 == (byte *)0x1) {
LAB_00033af4:
    recovered_31b59(local_ac + 8,-local_3c);
  }
  else {
    if (local_40 != (byte *)0x2) {
      if (local_40 != (byte *)0x5) {
        recovered_2603e(&local_40);
        pcVar18 = str_0004759f;
        uVar6 = *param_1;
        pbVar17 = &DAT_00047593;
        goto LAB_00034d3a;
      }
      goto LAB_00033af4;
    }
    recovered_2c909(local_ac + 8,-local_38);
  }
  iVar9 = 9;
  puVar7 = local_ac + 8;
LAB_00033eea:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  recovered_2603e(&local_40);
  return '\x01';
}
