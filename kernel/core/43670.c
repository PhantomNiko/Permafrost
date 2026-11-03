#include "functions.h"
#undef DAT_0005841a
#define DAT_0005841a (*(uint8_t *)(0x5841aU))
#undef DAT_000588d8
#define DAT_000588d8 (*(uint8_t *)(0x588d8U))
#undef DAT_0005890c
#define DAT_0005890c (*(uint8_t *)(0x5890cU))
#undef DAT_0005893e
#define DAT_0005893e (*(uint8_t *)(0x5893eU))
#undef DAT_00093914
#define DAT_00093914 (*(int *)(0x93914U))
#undef DAT_00093918
#define DAT_00093918 (*(int *)(0x93918U))
#undef str_000588e4
#define str_000588e4 (*(char (*)[1])(0x588e4U))
#undef str_0005890e
#define str_0005890e (*(char (*)[1])(0x5890eU))
#undef str_00058942
#define str_00058942 (*(char (*)[1])(0x58942U))
#undef str_0005895f
#define str_0005895f (*(char (*)[1])(0x5895fU))
#undef str_0005896c
#define str_0005896c (*(char (*)[1])(0x5896cU))
#undef str_0005898f
#define str_0005898f (*(char (*)[1])(0x5898fU))
#undef str_000589a3
#define str_000589a3 (*(char (*)[1])(0x589a3U))
#undef str_000589c6
#define str_000589c6 (*(char (*)[1])(0x589c6U))
#undef str_000589e6
#define str_000589e6 (*(char (*)[1])(0x589e6U))
#undef str_000589f5
#define str_000589f5 (*(char (*)[1])(0x589f5U))
#undef str_00058a12
#define str_00058a12 (*(char (*)[1])(0x58a12U))
#undef str_00058a26
#define str_00058a26 (*(char (*)[1])(0x58a26U))
#undef str_00058a4c
#define str_00058a4c (*(char (*)[1])(0x58a4cU))
#undef str_00058a77
#define str_00058a77 (*(char (*)[1])(0x58a77U))
#undef str_00058a9a
#define str_00058a9a (*(char (*)[1])(0x58a9aU))
#undef str_00058aab
#define str_00058aab (*(char (*)[1])(0x58aabU))
#undef str_00058ac0
#define str_00058ac0 (*(char (*)[1])(0x58ac0U))
#undef str_00058ae9
#define str_00058ae9 (*(char (*)[1])(0x58ae9U))
#undef str_00058afd
#define str_00058afd (*(char (*)[1])(0x58afdU))
#undef str_00058b56
#define str_00058b56 (*(char (*)[1])(0x58b56U))
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
#define local_bc (*(int *)(frame + 108))
#define local_b4 (*(byte * *)(frame + 116))
#define local_b0 (*(uint (*)[18])(frame + 120))
#define local_68 (*(byte ** *)(frame + 192))
#define local_64 (*(int *)(frame + 196))
#define local_60 (*(byte ** *)(frame + 200))
#define local_5c (*(undefined4 *)(frame + 204))
#define local_58 (*(undefined4 *)(frame + 208))
#define local_54 (*(undefined4 *)(frame + 212))
#define local_50 (*(undefined4 *)(frame + 216))
#define local_4c (*(undefined4 *)(frame + 220))
#define local_48 (*(undefined4 *)(frame + 224))
#define local_44 (*(uint * *)(frame + 228))
#define local_40 (*(uint *)(frame + 232))
#define local_3c (*(uint (*)[2])(frame + 236))
#define local_34 (*(float *)(frame + 244))
#define local_30 (*(int *)(frame + 248))
#define local_2c (*(undefined4 *)(frame + 252))
#define local_28 (*(undefined4 *)(frame + 256))
#define local_24 (*(int *)(frame + 260))
#define local_20 (*(int *)(frame + 264))
#define local_1c (*(undefined4 *)(frame + 268))
#define local_18 (*(uint * *)(frame + 272))
#define local_14 (*(byte * *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43670
 */

char recovered_43670(uint *param_1,uint *param_2)

{
  unsigned char frame[328] = {0};

  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte ***pppbVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ushort in_FPUControlWord = pf_fpu_control();
  byte *pbVar15;
  char *pcVar16;

  uVar6 = recovered_3f8b8((int)param_1,0x588d8);
  if ((char)uVar6 == '\0') {
    uVar6 = recovered_3f8b8((int)param_1,0x58906);
    if ((char)uVar6 != '\0') {
      local_3c[0] = 0;
      local_3c[1] = 0;
      local_34 = 0.0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      cVar4 = recovered_43670(param_1,local_3c);
      if (cVar4 == '\0') {
        return '\0';
      }
      uVar6 = recovered_4177c((int *)local_3c);
      recovered_44a7c(local_b0 + 9,(uint)(byte)((byte)uVar6 ^ 1));
      iVar9 = 9;
      puVar10 = local_b0 + 9;
LAB_00043758:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar10;
        puVar10 = puVar10 + 1;
        param_2 = param_2 + 1;
      }
      recovered_3352a(local_3c);
      return cVar4;
    }
    uVar7 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_44 = param_2;
    local_18 = param_1;
    if (uVar7 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_3b7e1(*(int *)(uVar2 + uVar7 * 4),0x58908);
      if ((char)iVar9 != '\0') {
        local_18[2] = uVar7 + 1;
        if ((((((uVar1 <= uVar7 + 1) ||
               (pbVar15 = *(byte **)(uVar2 + 4 + uVar7 * 4), pbVar15 == (byte *)0x0)) ||
              (uVar7 = (uint)*pbVar15, uVar7 == 0)) ||
             ((pbVar15[1] == 0 &&
              (((uVar7 - 0x25 < 0x17 && ((0x4005f1U >> (uVar7 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar7 - 0x5c < 3 || (uVar7 == 0x7d)))))))) ||
            ((((iVar9 = recovered_3b7fc((int)pbVar15,0x582be), (char)iVar9 != '\0' ||
               (iVar9 = recovered_3b7fc((int)pbVar15,0x582c9), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_3b7fc((int)pbVar15,0x582c2), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_3b7fc((int)pbVar15,0x582ce), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_3b7fc((int)pbVar15,0x588b6), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_3b7fc((int)pbVar15,0x588bc), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_214f9((int)pbVar15,0x588b9), iVar9 == 0 ||
                (iVar9 = recovered_214f9((int)pbVar15,0x588c0), iVar9 == 0)))) ||
              (iVar9 = recovered_214f9((int)pbVar15,0x588c3), iVar9 == 0)))))) ||
           (((iVar9 = recovered_214f9((int)pbVar15,0x588c6), iVar9 == 0 ||
             (iVar9 = recovered_214f9((int)pbVar15,0x588c9), iVar9 == 0)) ||
            ((iVar9 = recovered_214f9((int)pbVar15,0x588cc), iVar9 == 0 ||
             (((iVar9 = recovered_214f9((int)pbVar15,0x588d0), iVar9 == 0 ||
               (iVar9 = recovered_214f9((int)pbVar15,0x588ce), iVar9 == 0)) ||
              (iVar9 = recovered_214f9((int)pbVar15,0x588d3), iVar9 == 0)))))))) {
          *local_44 = 0;
          local_44[1] = 0;
          local_44[2] = 0;
          local_44[3] = 0;
          local_44[4] = 0;
          local_44[5] = 0;
          local_44[6] = 0;
          local_44[7] = 0;
          local_44[8] = 0;
          return '\x01';
        }
        local_3c[0] = 0;
        local_3c[1] = 0;
        local_34 = 0.0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        cVar4 = recovered_43670(local_18,local_3c);
        if (cVar4 == '\0') {
          return '\0';
        }
        uVar6 = recovered_4177c((int *)local_3c);
        puVar10 = local_b0 + 9;
        recovered_44a7c(puVar10,(uint)(byte)((byte)uVar6 ^ 1));
        iVar9 = 9;
        param_2 = local_44;
        goto LAB_00043758;
      }
    }
    puVar10 = local_18;
    uVar6 = recovered_3f8b8((int)local_18,0x5890c);
    if ((char)uVar6 != '\0') {
      local_3c[0] = 0;
      local_3c[1] = 0;
      local_34 = 0.0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      cVar4 = recovered_43670(puVar10,local_3c);
      if (cVar4 == '\0') {
        return '\0';
      }
      if (local_24 == 0 || local_3c[0] != 7) {
        if (local_20 == 0 || local_3c[0] != 8) {
          if (local_30 == 0 || local_3c[0] != 3) {
            recovered_3352a(local_3c);
            pcVar16 = str_0005890e;
            pbVar15 = &DAT_0005890c;
            goto LAB_0004494a;
          }
          iVar9 = recovered_214de(local_30);
        }
        else {
          iVar9 = recovered_44aa6(local_20);
        }
      }
      else {
        iVar9 = *(int *)(local_24 + 8);
      }
      puVar10 = local_b0 + 9;
      recovered_419dd(puVar10,iVar9);
      iVar9 = 9;
      param_2 = local_44;
      goto LAB_00043aec;
    }
    if (local_44 == (uint *)0x0) {
      return '\0';
    }
    uVar7 = puVar10[2];
    if (uVar7 < *(uint *)puVar10[1]) {
      uVar1 = ((uint *)puVar10[1])[2];
      puVar10[2] = uVar7 + 1;
      pbVar15 = *(byte **)(uVar1 + uVar7 * 4);
      local_3c[0] = 0;
      local_3c[1] = 0;
      local_34 = 0.0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      iVar9 = recovered_214f9((int)pbVar15,0x583f5);
      local_14 = pbVar15;
      if (iVar9 == 0) {
        uVar6 = recovered_428c6(puVar10,local_3c);
        if ((char)uVar6 == '\0') {
          return '\0';
        }
        uVar6 = recovered_3f8b8((int)puVar10,0x5841a);
        if ((char)uVar6 != '\0') goto LAB_00043f0b;
        recovered_3352a(local_3c);
        pcVar16 = str_0005895f;
        pbVar15 = &DAT_0005841a;
      }
      else {
        iVar9 = recovered_214f9((int)pbVar15,0x58399);
        if (iVar9 == 0) {
          bVar5 = recovered_41490(local_3c);
          if (!bVar5) {
            pcVar16 = str_0005896c;
            goto LAB_000441f9;
          }
          uVar6 = recovered_3f8b8((int)puVar10,0x5839b);
          if ((char)uVar6 != '\0') goto LAB_00043f0b;
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
            uVar6 = recovered_428c6(puVar10,puVar12);
            if ((char)uVar6 == '\0') goto LAB_000441d4;
            uVar6 = recovered_4276d(local_24,(int)puVar12);
            recovered_3352a(puVar12);
            if ((char)uVar6 == '\0') {
              recovered_3352a(local_3c);
              pcVar16 = str_0005896c;
              goto LAB_00044947;
            }
            uVar6 = recovered_3f8b8((int)puVar10,0x5839b);
            if ((char)uVar6 != '\0') goto LAB_00043e24;
            uVar6 = recovered_3f8b8((int)puVar10,0x58471);
          } while ((char)uVar6 != '\0');
          recovered_3352a(local_3c);
          pcVar16 = str_0005898f;
LAB_00044947:
          pbVar15 = local_14;
        }
        else {
          iVar9 = recovered_214f9((int)pbVar15,0x58881);
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
            bVar5 = recovered_41490(local_b0 + 9);
            if ((!bVar5) || (bVar5 = recovered_3a72d(local_b0), !bVar5)) {
LAB_00044929:
              recovered_3352a(local_b0 + 9);
              recovered_3352a(local_b0);
              pcVar16 = str_000589a3;
              goto LAB_00044947;
            }
            local_f0 = local_b0 + 6;
            local_ec = local_b0 + 7;
            local_e8 = local_b0 + 8;
            uVar6 = recovered_3f8b8((int)puVar10,0x58883);
            if ((char)uVar6 == '\0') {
              local_40 = 0;
              local_bc = 0;
              do {
                if (*(uint *)puVar10[1] <= puVar10[2]) {
                  recovered_3352a(local_b0 + 9);
                  recovered_3352a(local_b0);
                  pcVar16 = str_000589c6;
                  goto LAB_00043b1f;
                }
                iVar9 = recovered_214f9(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x58399);
                if (iVar9 == 0) {
                  local_68 = (byte **)0x0;
                  local_64 = 0;
                  local_60 = (byte **)0x0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
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
                  uVar6 = recovered_428c6(puVar10,(uint *)&local_68);
                  if ((char)uVar6 != '\0') {
                    uVar6 = recovered_3f8b8((int)puVar10,0x5839b);
                    if ((char)uVar6 == '\0') {
                      recovered_3352a(&local_68);
                      recovered_3352a(&local_e4);
                      recovered_3352a(local_b0 + 9);
                      recovered_3352a(local_b0);
                      pcVar16 = str_000589e6;
                      uVar7 = *puVar10;
                      pbVar15 = local_b4;
                      goto LAB_0004494c;
                    }
                    uVar6 = recovered_3f8b8((int)puVar10,0x589f3);
                    if (((char)uVar6 == '\0') &&
                       (uVar6 = recovered_3f8b8((int)local_18,0x5872b), (char)uVar6 == '\0')) {
                      recovered_3352a(&local_68);
                      recovered_3352a(&local_e4);
                      recovered_3352a(local_b0 + 9);
                      recovered_3352a(local_b0);
                      pcVar16 = str_000589f5;
                      pbVar15 = local_b4;
                      goto LAB_00044a35;
                    }
                    if (((local_40 & 1) != 0 || local_bc == 0) ||
                       (uVar6 = recovered_44aeb(*local_18,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)local_b4), (char)uVar6 != '\0')) {
                      puVar10 = local_18;
                      uVar6 = recovered_428c6(local_18,(uint *)&local_e4);
                      if (((char)uVar6 != '\0') &&
                         (uVar6 = recovered_44b74(*puVar10,(int *)local_b0,(int *)&local_68,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar6 != '\0')) {
                        recovered_3352a(&local_68);
                        uVar7 = recovered_3352a(&local_e4);
                        local_40 = CONCAT31((int3)(uVar7 >> 8),1);
                        goto LAB_000446e9;
                      }
                    }
                  }
LAB_00044a01:
                  recovered_3352a(&local_68);
                  pppbVar11 = &local_e4;
LAB_00044a0f:
                  recovered_3352a(pppbVar11);
                  recovered_3352a(local_b0 + 9);
                  puVar10 = local_b0;
                  goto LAB_000441d7;
                }
                if ((puVar10[2] + 1 < *(uint *)puVar10[1]) &&
                   ((iVar9 = recovered_214f9(*(int *)(((uint *)puVar10[1])[2] + 4 + puVar10[2] * 4),
                                             0x589f3), iVar9 == 0 ||
                    (iVar9 = recovered_214f9(*(int *)(*(int *)(puVar10[1] + 8) + 4 + puVar10[2] * 4)
                                             ,0x5872b), iVar9 == 0)))) {
                  local_68 = (byte **)0x0;
                  local_64 = 0;
                  local_60 = (byte **)0x0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
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
                  iVar9 = *(int *)(puVar10[1] + 8);
                  uVar7 = puVar10[2];
                  puVar10[2] = uVar7 + 1;
                  pbVar15 = *(byte **)(iVar9 + uVar7 * 4);
                  if (pbVar15 == (byte *)0x0) goto LAB_00044a01;
                  local_68 = (byte **)0x0;
                  local_64 = 0;
                  local_60 = (byte **)0x0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  bVar5 = recovered_44c66((char *)pbVar15);
                  if (bVar5) {
                    uVar7 = recovered_44c9f((int)pbVar15,(uint *)&local_68);
                    if ((char)uVar7 == '\0') {
                      pcVar16 = str_00058b56;
                      goto LAB_000449ee;
                    }
                  }
                  else {
                    uVar6 = recovered_44cfa((int)pbVar15,&local_64);
                    if ((char)uVar6 == '\0') {
                      iVar9 = recovered_44ed0((char *)pbVar15);
                      if (((char)iVar9 == '\0') ||
                         (uVar6 = recovered_3ac4a((int)pbVar15,(float *)&local_60),
                         (char)uVar6 == '\0')) {
                        iVar9 = recovered_3b7fc((int)pbVar15,0x58a63);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_3b7fc((int)pbVar15,0x58a68);
                          if ((char)iVar9 == '\0') {
                            uVar7 = recovered_3f81c(pbVar15);
                            if ((char)uVar7 == '\0') {
                              pcVar16 = str_00058afd;
                            }
                            else {
                              uVar7 = recovered_3aa15((uint *)&local_68,(char *)pbVar15);
                              if ((char)uVar7 != '\0') goto LAB_0004465e;
                              pcVar16 = str_000589a3;
                            }
LAB_000449ee:
                            recovered_3f39b((uint)local_b4,(char *)pbVar15,pcVar16);
                            goto LAB_00044a01;
                          }
                          recovered_44a7c(&local_68,0);
                        }
                        else {
                          recovered_44a7c(&local_68,1);
                        }
                      }
                      else {
                        local_68 = (byte **)0x2;
                        local_c0 = in_FPUControlWord | 0xc00;
                        local_64 = (int)ROUND(pf_bits_float((uintptr_t)local_60));
                      }
                    }
                    else {
                      local_68 = (byte **)0x1;
                      local_60 = (byte **)(uintptr_t)pf_float_bits((float)local_64);
                    }
                  }
LAB_0004465e:
                  puVar10 = local_18;
                  local_18[2] = local_18[2] + 1;
                  if (((((local_40 & 1) == 0 && local_bc != 0) &&
                       (uVar6 = recovered_44aeb(*local_18,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)pbVar15), (char)uVar6 == '\0')) ||
                      (uVar6 = recovered_428c6(puVar10,(uint *)&local_e4), (char)uVar6 == '\0')) ||
                     (uVar6 = recovered_44b74(*puVar10,(int *)local_b0,(int *)&local_68,
                                              (int)&local_e4,(char *)pbVar15), (char)uVar6 == '\0'))
                  goto LAB_00044a01;
                  recovered_3352a(&local_68);
                  uVar7 = recovered_3352a(&local_e4);
                  local_40 = CONCAT31((int3)(uVar7 >> 8),1);
                }
                else {
                  local_68 = (byte **)0x0;
                  local_64 = 0;
                  local_60 = (byte **)0x0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  uVar6 = recovered_428c6(puVar10,(uint *)&local_68);
                  if ((char)uVar6 == '\0') {
LAB_0004484e:
                    pppbVar11 = &local_68;
                    goto LAB_00044a0f;
                  }
                  local_bc = local_bc + 1;
                  if ((local_40 & 1) == 0) {
                    uVar6 = recovered_4276d(local_b0[0xf],(int)&local_68);
                    if ((char)uVar6 == '\0') {
                      recovered_3352a(&local_68);
                      goto LAB_00044929;
                    }
                  }
                  else {
                    recovered_419dd(&local_e4,local_bc);
                    uVar6 = recovered_44b74(*puVar10,(int *)local_b0,(int *)&local_e4,(int)&local_68
                                            ,(char *)local_14);
                    if ((char)uVar6 == '\0') goto LAB_0004484e;
                  }
                  recovered_3352a(&local_68);
                }
LAB_000446e9:
                uVar6 = recovered_3f8b8((int)puVar10,0x58883);
                if ((char)uVar6 != '\0') break;
                uVar6 = recovered_3f8b8((int)puVar10,0x58471);
                if ((char)uVar6 == '\0') {
                  recovered_3352a(local_b0 + 9);
                  recovered_3352a(local_b0);
                  pcVar16 = str_00058a12;
                  goto LAB_00044947;
                }
                uVar6 = recovered_3f8b8((int)puVar10,0x58883);
              } while ((char)uVar6 == '\0');
              recovered_3352a(local_3c);
              if ((local_40 & 1) != 0) goto LAB_00043db6;
              puVar10 = local_b0 + 9;
              puVar12 = local_3c;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              local_b0[9] = 0;
              puVar8 = local_b0 + 10;
              puVar10 = local_b0 + 0xb;
              puVar12 = local_b0 + 0xc;
              puVar13 = local_b0 + 0xd;
              puVar14 = local_b0 + 0xe;
              local_f0 = local_b0 + 0xf;
              local_ec = local_b0 + 0x10;
              local_e8 = local_b0 + 0x11;
            }
            else {
              recovered_3352a(local_3c);
LAB_00043db6:
              puVar10 = local_b0;
              puVar12 = local_3c;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              local_b0[0] = 0;
              puVar8 = local_b0 + 1;
              puVar10 = local_b0 + 2;
              puVar12 = local_b0 + 3;
              puVar13 = local_b0 + 4;
              puVar14 = local_b0 + 5;
            }
            *puVar8 = 0;
            *puVar10 = 0;
            *puVar12 = 0;
            *puVar13 = 0;
            *puVar14 = 0;
            *local_f0 = 0;
            *local_ec = 0;
            *local_e8 = 0;
            recovered_3352a(local_b0 + 9);
            recovered_3352a(local_b0);
LAB_00043e21:
            puVar10 = local_18;
LAB_00043e24:
            pbVar15 = local_14;
LAB_00043f0b:
            do {
              while( true ) {
                if (*(uint *)puVar10[1] <= puVar10[2]) goto LAB_000441ff;
                iVar9 = recovered_214f9(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x58399);
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
                uVar6 = recovered_428c6(puVar10,local_b0 + 9);
                if ((char)uVar6 == '\0') goto LAB_000441d4;
                uVar6 = recovered_3f8b8((int)puVar10,0x5839b);
                if ((char)uVar6 == '\0') {
                  recovered_3352a(local_b0 + 9);
                  recovered_3352a(local_3c);
                  pcVar16 = str_000589e6;
                  goto LAB_000441f9;
                }
                iVar9 = recovered_44f21((int *)local_3c,(int *)(local_b0 + 9),local_b0);
                local_40 = CONCAT31(PF_PART3(local_40, 1),(char)iVar9);
                recovered_3352a(local_b0 + 9);
                recovered_3352a(local_3c);
                if ((char)local_40 == '\0') {
                  pcVar16 = str_00058aab;
                  goto LAB_00044947;
                }
                recovered_3352a(local_3c);
                puVar10 = local_b0;
                puVar12 = local_3c;
                for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar12 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar12 + 1;
                }
                pbVar15 = local_14;
                puVar10 = local_18;
              }
              iVar9 = recovered_214f9(*(int *)(*(int *)(puVar10[1] + 8) + puVar10[2] * 4),0x583f5);
              if (iVar9 != 0) {
LAB_000441ff:
                puVar10 = local_44;
                recovered_3352a(local_44);
                puVar12 = local_3c;
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
              local_68 = (byte **)0x0;
              local_64 = 0;
              local_60 = (byte **)0x0;
              puVar10[2] = puVar10[2] + 1;
              uVar6 = recovered_3f8b8((int)puVar10,0x5841a);
              if ((char)uVar6 == '\0') {
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
                  uVar6 = recovered_428c6(puVar10,local_b0);
                  if ((char)uVar6 == '\0') {
                    recovered_3352a(local_b0);
                    recovered_3f876((uint *)&local_68);
                    goto LAB_000441d4;
                  }
                  if (puVar10[2] < *(uint *)puVar10[1]) {
                    iVar9 = recovered_214f9(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),
                                            0x5841a);
                    bVar5 = iVar9 == 0;
                  }
                  else {
                    bVar5 = false;
                  }
                  cVar4 = recovered_451c7((int *)&local_68,(int *)local_b0,bVar5);
                  recovered_3352a(local_b0);
                  if (cVar4 == '\0') {
                    recovered_3f876((uint *)&local_68);
                    recovered_3352a(local_3c);
                    pcVar16 = str_00058ac0;
                    goto LAB_000441f9;
                  }
                  uVar6 = recovered_3f8b8((int)puVar10,0x5841a);
                  if ((char)uVar6 != '\0') break;
                  uVar6 = recovered_3f8b8((int)puVar10,0x58471);
                  if ((char)uVar6 == '\0') {
                    recovered_3f876((uint *)&local_68);
                    recovered_3352a(local_3c);
                    pcVar16 = str_00058ae9;
                    goto LAB_000441f9;
                  }
                }
              }
              uVar7 = recovered_45240((byte **)*puVar10,(int *)local_3c,local_60,local_68,
                                      local_b0 + 9);
              recovered_3f876((uint *)&local_68);
              if ((char)uVar7 == '\0') {
                recovered_3352a(local_b0 + 9);
LAB_000441d4:
                puVar10 = local_3c;
LAB_000441d7:
                recovered_3352a(puVar10);
                return '\0';
              }
              recovered_3352a(local_3c);
              recovered_3352a(local_3c);
              puVar10 = local_b0 + 9;
              puVar12 = local_3c;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              pbVar15 = local_14;
              puVar10 = local_18;
            } while( true );
          }
          iVar9 = recovered_214f9((int)pbVar15,0x5841c);
          pbVar3 = local_14;
          if (iVar9 == 0) {
            if (DAT_00093914 == 0) {
LAB_00043ee7:
              local_3c[0] = 0;
              local_3c[1] = 0;
              local_34 = 0.0;
              local_30 = 0;
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              local_20 = 0;
              local_1c = 0;
              goto LAB_00043f0b;
            }
            uVar6 = recovered_44bfc((int)local_3c,*(int *)(DAT_00093918 + -8 + DAT_00093914 * 8),
                                    *(int *)(DAT_00093918 + -4 + DAT_00093914 * 8));
            pbVar15 = pbVar3;
            if ((char)uVar6 != '\0') goto LAB_00043f0b;
            pcVar16 = str_00058a26;
          }
          else {
            bVar5 = recovered_44c66((char *)pbVar15);
            if (!bVar5) {
              iVar9 = recovered_3b7e1((int)pbVar15,0x58a63);
              if ((char)iVar9 != '\0') {
                recovered_44a7c(local_3c,1);
                goto LAB_00043f0b;
              }
              iVar9 = recovered_3b7e1((int)pbVar15,0x58a68);
              if ((char)iVar9 != '\0') {
                recovered_44a7c(local_3c,0);
                goto LAB_00043f0b;
              }
              iVar9 = recovered_3b7e1((int)pbVar15,0x58908);
              if ((((char)iVar9 != '\0') ||
                  (iVar9 = recovered_3b7e1((int)pbVar15,0x58a6e), (char)iVar9 != '\0')) ||
                 (iVar9 = recovered_3b7e1((int)pbVar15,0x58a73), (char)iVar9 != '\0'))
              goto LAB_00043ee7;
              uVar6 = recovered_44cfa((int)pbVar15,(int *)(local_3c + 1));
              if ((char)uVar6 != '\0') {
                local_3c[0] = 1;
                local_34 = (float)(int)local_3c[1];
                puVar10 = local_18;
                goto LAB_00043f0b;
              }
              local_b0[9] = 0;
              uVar6 = recovered_44e70((int)pbVar15,(int *)(local_b0 + 9));
              if ((char)uVar6 == '\0') {
                iVar9 = recovered_44ed0((char *)local_14);
                if (((char)iVar9 == '\0') ||
                   (uVar6 = recovered_3ac4a((int)local_14,&local_34), (char)uVar6 == '\0')) {
                  uVar7 = recovered_3f81c(local_14);
                  if ((char)uVar7 == '\0') {
                    pcVar16 = str_00058a9a;
                    pbVar15 = local_14;
LAB_00044a35:
                    uVar7 = *local_18;
                    goto LAB_0004494c;
                  }
                  uVar6 = recovered_41411((int)local_14,(int)local_3c);
                  if ((char)uVar6 == '\0') {
                    iVar9 = recovered_3aeef((int)local_14);
                    if ((char)iVar9 == '\0') {
                      local_3c[0] = 0;
                      local_3c[1] = 0;
                      local_34 = 0.0;
                      local_30 = 0;
                      local_2c = 0;
                      local_28 = 0;
                      local_24 = 0;
                      local_20 = 0;
                      local_1c = 0;
                    }
                    else {
                      uVar6 = recovered_3ae80((int)local_3c,(int)local_14);
                      if ((char)uVar6 == '\0') {
                        pcVar16 = str_00058a77;
                        pbVar15 = local_14;
                        goto LAB_00044a35;
                      }
                    }
                  }
                }
                else {
                  local_3c[0] = 2;
                  local_be = in_FPUControlWord | 0xc00;
                  local_3c[1] = (uint)ROUND(local_34);
                }
              }
              else {
                recovered_44eb3(local_3c,local_b0[9]);
              }
              goto LAB_00043e21;
            }
            uVar7 = recovered_44c9f((int)pbVar15,local_3c);
            if ((char)uVar7 != '\0') goto LAB_00043f0b;
            pcVar16 = str_00058a4c;
          }
LAB_000441f9:
        }
      }
    }
    else {
      pcVar16 = str_00058942;
LAB_00043b1f:
      pbVar15 = &DAT_0005893e;
    }
LAB_0004494a:
    uVar7 = *puVar10;
LAB_0004494c:
    recovered_3f39b(uVar7,(char *)pbVar15,pcVar16);
    return '\0';
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_34 = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  cVar4 = recovered_43670(param_1,local_3c);
  if (cVar4 == '\0') {
    return '\0';
  }
  if (local_3c[0] == 1) {
LAB_000436dd:
    recovered_419dd(local_b0 + 9,-local_3c[1]);
  }
  else {
    if (local_3c[0] != 2) {
      if (local_3c[0] != 5) {
        recovered_3352a(local_3c);
        pcVar16 = str_000588e4;
        uVar7 = *param_1;
        pbVar15 = &DAT_000588d8;
        goto LAB_0004494c;
      }
      goto LAB_000436dd;
    }
    recovered_3acca(local_b0 + 9,-local_34);
  }
  iVar9 = 9;
  puVar10 = local_b0 + 9;
LAB_00043aec:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar10;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  }
  recovered_3352a(local_3c);
  return '\x01';
}
