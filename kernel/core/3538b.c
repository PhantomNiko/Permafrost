#include "functions.h"
#undef DAT_000493af
#define DAT_000493af (*(uint8_t *)(0x493afU))
#undef DAT_0004986d
#define DAT_0004986d (*(uint8_t *)(0x4986dU))
#undef DAT_000498a1
#define DAT_000498a1 (*(uint8_t *)(0x498a1U))
#undef DAT_000498d3
#define DAT_000498d3 (*(uint8_t *)(0x498d3U))
#undef DAT_00084088
#define DAT_00084088 (*(int *)(0x84088U))
#undef DAT_0008408c
#define DAT_0008408c (*(int *)(0x8408cU))
#undef str_00049879
#define str_00049879 (*(char (*)[1])(0x49879U))
#undef str_000498a3
#define str_000498a3 (*(char (*)[1])(0x498a3U))
#undef str_000498d7
#define str_000498d7 (*(char (*)[1])(0x498d7U))
#undef str_000498f4
#define str_000498f4 (*(char (*)[1])(0x498f4U))
#undef str_00049901
#define str_00049901 (*(char (*)[1])(0x49901U))
#undef str_00049924
#define str_00049924 (*(char (*)[1])(0x49924U))
#undef str_00049938
#define str_00049938 (*(char (*)[1])(0x49938U))
#undef str_0004995b
#define str_0004995b (*(char (*)[1])(0x4995bU))
#undef str_0004997b
#define str_0004997b (*(char (*)[1])(0x4997bU))
#undef str_0004998a
#define str_0004998a (*(char (*)[1])(0x4998aU))
#undef str_000499a7
#define str_000499a7 (*(char (*)[1])(0x499a7U))
#undef str_000499bb
#define str_000499bb (*(char (*)[1])(0x499bbU))
#undef str_000499e1
#define str_000499e1 (*(char (*)[1])(0x499e1U))
#undef str_00049a0c
#define str_00049a0c (*(char (*)[1])(0x49a0cU))
#undef str_00049a2f
#define str_00049a2f (*(char (*)[1])(0x49a2fU))
#undef str_00049a40
#define str_00049a40 (*(char (*)[1])(0x49a40U))
#undef str_00049a55
#define str_00049a55 (*(char (*)[1])(0x49a55U))
#undef str_00049a7e
#define str_00049a7e (*(char (*)[1])(0x49a7eU))
#undef str_00049a92
#define str_00049a92 (*(char (*)[1])(0x49a92U))
#undef str_00049aeb
#define str_00049aeb (*(char (*)[1])(0x49aebU))
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
 * Address: 0x3538b
 */

char recovered_3538b(uint *param_1,uint *param_2)

{
  unsigned char frame[328];

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

  uVar6 = recovered_315d3((int)param_1,0x4986d);
  if ((char)uVar6 == '\0') {
    uVar6 = recovered_315d3((int)param_1,0x4989b);
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
      cVar4 = recovered_3538b(param_1,local_3c);
      if (cVar4 == '\0') {
        return '\0';
      }
      uVar6 = recovered_33497((int *)local_3c);
      recovered_36797(local_b0 + 9,(uint)(byte)((byte)uVar6 ^ 1));
      iVar9 = 9;
      puVar10 = local_b0 + 9;
LAB_00035473:
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *param_2 = *puVar10;
        puVar10 = puVar10 + 1;
        param_2 = param_2 + 1;
      }
      recovered_25fea(local_3c);
      return cVar4;
    }
    uVar7 = param_1[2];
    uVar1 = *(uint *)param_1[1];
    local_44 = param_2;
    local_18 = param_1;
    if (uVar7 < uVar1) {
      uVar2 = ((uint *)param_1[1])[2];
      iVar9 = recovered_2d4e4(*(int *)(uVar2 + uVar7 * 4),0x4989d);
      if ((char)iVar9 != '\0') {
        local_18[2] = uVar7 + 1;
        if ((((((uVar1 <= uVar7 + 1) ||
               (pbVar15 = *(byte **)(uVar2 + 4 + uVar7 * 4), pbVar15 == (byte *)0x0)) ||
              (uVar7 = (uint)*pbVar15, uVar7 == 0)) ||
             ((pbVar15[1] == 0 &&
              (((uVar7 - 0x25 < 0x17 && ((0x4005f1U >> (uVar7 - 0x25 & 0x1f) & 1) != 0)) ||
               ((uVar7 - 0x5c < 3 || (uVar7 == 0x7d)))))))) ||
            ((((iVar9 = recovered_2d4ff((int)pbVar15,0x49253), (char)iVar9 != '\0' ||
               (iVar9 = recovered_2d4ff((int)pbVar15,0x4925e), (char)iVar9 != '\0')) ||
              (iVar9 = recovered_2d4ff((int)pbVar15,0x49257), (char)iVar9 != '\0')) ||
             (((((iVar9 = recovered_2d4ff((int)pbVar15,0x49263), (char)iVar9 != '\0' ||
                 (iVar9 = recovered_2d4ff((int)pbVar15,0x4984b), (char)iVar9 != '\0')) ||
                (iVar9 = recovered_2d4ff((int)pbVar15,0x49851), (char)iVar9 != '\0')) ||
               ((iVar9 = recovered_21415((int)pbVar15,0x4984e), iVar9 == 0 ||
                (iVar9 = recovered_21415((int)pbVar15,0x49855), iVar9 == 0)))) ||
              (iVar9 = recovered_21415((int)pbVar15,0x49858), iVar9 == 0)))))) ||
           (((iVar9 = recovered_21415((int)pbVar15,0x4985b), iVar9 == 0 ||
             (iVar9 = recovered_21415((int)pbVar15,0x4985e), iVar9 == 0)) ||
            ((iVar9 = recovered_21415((int)pbVar15,0x49861), iVar9 == 0 ||
             (((iVar9 = recovered_21415((int)pbVar15,0x49865), iVar9 == 0 ||
               (iVar9 = recovered_21415((int)pbVar15,0x49863), iVar9 == 0)) ||
              (iVar9 = recovered_21415((int)pbVar15,0x49868), iVar9 == 0)))))))) {
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
        cVar4 = recovered_3538b(local_18,local_3c);
        if (cVar4 == '\0') {
          return '\0';
        }
        uVar6 = recovered_33497((int *)local_3c);
        puVar10 = local_b0 + 9;
        recovered_36797(puVar10,(uint)(byte)((byte)uVar6 ^ 1));
        iVar9 = 9;
        param_2 = local_44;
        goto LAB_00035473;
      }
    }
    puVar10 = local_18;
    uVar6 = recovered_315d3((int)local_18,0x498a1);
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
      cVar4 = recovered_3538b(puVar10,local_3c);
      if (cVar4 == '\0') {
        return '\0';
      }
      if (local_24 == 0 || local_3c[0] != 7) {
        if (local_20 == 0 || local_3c[0] != 8) {
          if (local_30 == 0 || local_3c[0] != 3) {
            recovered_25fea(local_3c);
            pcVar16 = str_000498a3;
            pbVar15 = &DAT_000498a1;
            goto LAB_00036665;
          }
          iVar9 = recovered_213fa(local_30);
        }
        else {
          iVar9 = recovered_367c1(local_20);
        }
      }
      else {
        iVar9 = *(int *)(local_24 + 8);
      }
      puVar10 = local_b0 + 9;
      recovered_336f8(puVar10,iVar9);
      iVar9 = 9;
      param_2 = local_44;
      goto LAB_00035807;
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
      iVar9 = recovered_21415((int)pbVar15,0x4938a);
      local_14 = pbVar15;
      if (iVar9 == 0) {
        uVar6 = recovered_345e1(puVar10,local_3c);
        if ((char)uVar6 == '\0') {
          return '\0';
        }
        uVar6 = recovered_315d3((int)puVar10,0x493af);
        if ((char)uVar6 != '\0') goto LAB_00035c26;
        recovered_25fea(local_3c);
        pcVar16 = str_000498f4;
        pbVar15 = &DAT_000493af;
      }
      else {
        iVar9 = recovered_21415((int)pbVar15,0x4932e);
        if (iVar9 == 0) {
          bVar5 = recovered_331ab(local_3c);
          if (!bVar5) {
            pcVar16 = str_00049901;
            goto LAB_00035f14;
          }
          uVar6 = recovered_315d3((int)puVar10,0x49330);
          if ((char)uVar6 != '\0') goto LAB_00035c26;
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
            uVar6 = recovered_345e1(puVar10,puVar12);
            if ((char)uVar6 == '\0') goto LAB_00035eef;
            uVar6 = recovered_34488(local_24,(int)puVar12);
            recovered_25fea(puVar12);
            if ((char)uVar6 == '\0') {
              recovered_25fea(local_3c);
              pcVar16 = str_00049901;
              goto LAB_00036662;
            }
            uVar6 = recovered_315d3((int)puVar10,0x49330);
            if ((char)uVar6 != '\0') goto LAB_00035b3f;
            uVar6 = recovered_315d3((int)puVar10,0x49406);
          } while ((char)uVar6 != '\0');
          recovered_25fea(local_3c);
          pcVar16 = str_00049924;
LAB_00036662:
          pbVar15 = local_14;
        }
        else {
          iVar9 = recovered_21415((int)pbVar15,0x49816);
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
            bVar5 = recovered_331ab(local_b0 + 9);
            if ((!bVar5) || (bVar5 = recovered_2c430(local_b0), !bVar5)) {
LAB_00036644:
              recovered_25fea(local_b0 + 9);
              recovered_25fea(local_b0);
              pcVar16 = str_00049938;
              goto LAB_00036662;
            }
            local_f0 = local_b0 + 6;
            local_ec = local_b0 + 7;
            local_e8 = local_b0 + 8;
            uVar6 = recovered_315d3((int)puVar10,0x49818);
            if ((char)uVar6 == '\0') {
              local_40 = 0;
              local_bc = 0;
              do {
                if (*(uint *)puVar10[1] <= puVar10[2]) {
                  recovered_25fea(local_b0 + 9);
                  recovered_25fea(local_b0);
                  pcVar16 = str_0004995b;
                  goto LAB_0003583a;
                }
                iVar9 = recovered_21415(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x4932e);
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
                  uVar6 = recovered_345e1(puVar10,(uint *)&local_68);
                  if ((char)uVar6 != '\0') {
                    uVar6 = recovered_315d3((int)puVar10,0x49330);
                    if ((char)uVar6 == '\0') {
                      recovered_25fea(&local_68);
                      recovered_25fea(&local_e4);
                      recovered_25fea(local_b0 + 9);
                      recovered_25fea(local_b0);
                      pcVar16 = str_0004997b;
                      uVar7 = *puVar10;
                      pbVar15 = local_b4;
                      goto LAB_00036667;
                    }
                    uVar6 = recovered_315d3((int)puVar10,0x49988);
                    if (((char)uVar6 == '\0') &&
                       (uVar6 = recovered_315d3((int)local_18,0x496c0), (char)uVar6 == '\0')) {
                      recovered_25fea(&local_68);
                      recovered_25fea(&local_e4);
                      recovered_25fea(local_b0 + 9);
                      recovered_25fea(local_b0);
                      pcVar16 = str_0004998a;
                      pbVar15 = local_b4;
                      goto LAB_00036750;
                    }
                    if (((local_40 & 1) != 0 || local_bc == 0) ||
                       (uVar6 = recovered_36806(*local_18,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)local_b4), (char)uVar6 != '\0')) {
                      puVar10 = local_18;
                      uVar6 = recovered_345e1(local_18,(uint *)&local_e4);
                      if (((char)uVar6 != '\0') &&
                         (uVar6 = recovered_3688f(*puVar10,(int *)local_b0,(int *)&local_68,
                                                  (int)&local_e4,(char *)local_b4),
                         (char)uVar6 != '\0')) {
                        recovered_25fea(&local_68);
                        uVar7 = recovered_25fea(&local_e4);
                        local_40 = CONCAT31((int3)(uVar7 >> 8),1);
                        goto LAB_00036404;
                      }
                    }
                  }
LAB_0003671c:
                  recovered_25fea(&local_68);
                  pppbVar11 = &local_e4;
LAB_0003672a:
                  recovered_25fea(pppbVar11);
                  recovered_25fea(local_b0 + 9);
                  puVar10 = local_b0;
                  goto LAB_00035ef2;
                }
                if ((puVar10[2] + 1 < *(uint *)puVar10[1]) &&
                   ((iVar9 = recovered_21415(*(int *)(((uint *)puVar10[1])[2] + 4 + puVar10[2] * 4),
                                             0x49988), iVar9 == 0 ||
                    (iVar9 = recovered_21415(*(int *)(*(int *)(puVar10[1] + 8) + 4 + puVar10[2] * 4)
                                             ,0x496c0), iVar9 == 0)))) {
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
                  if (pbVar15 == (byte *)0x0) goto LAB_0003671c;
                  local_68 = (byte **)0x0;
                  local_64 = 0;
                  local_60 = (byte **)0x0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  bVar5 = recovered_36981((char *)pbVar15);
                  if (bVar5) {
                    uVar7 = recovered_369ba((int)pbVar15,(uint *)&local_68);
                    if ((char)uVar7 == '\0') {
                      pcVar16 = str_00049aeb;
                      goto LAB_00036709;
                    }
                  }
                  else {
                    uVar6 = recovered_36a15((int)pbVar15,&local_64);
                    if ((char)uVar6 == '\0') {
                      iVar9 = recovered_36beb((char *)pbVar15);
                      if (((char)iVar9 == '\0') ||
                         (uVar6 = recovered_2c94d((int)pbVar15,(float *)&local_60),
                         (char)uVar6 == '\0')) {
                        iVar9 = recovered_2d4ff((int)pbVar15,0x499f8);
                        if ((char)iVar9 == '\0') {
                          iVar9 = recovered_2d4ff((int)pbVar15,0x499fd);
                          if ((char)iVar9 == '\0') {
                            uVar7 = recovered_31537(pbVar15);
                            if ((char)uVar7 == '\0') {
                              pcVar16 = str_00049a92;
                            }
                            else {
                              uVar7 = recovered_2c718((uint *)&local_68,(char *)pbVar15);
                              if ((char)uVar7 != '\0') goto LAB_00036379;
                              pcVar16 = str_00049938;
                            }
LAB_00036709:
                            recovered_310b6((uint)local_b4,(char *)pbVar15,pcVar16);
                            goto LAB_0003671c;
                          }
                          recovered_36797(&local_68,0);
                        }
                        else {
                          recovered_36797(&local_68,1);
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
LAB_00036379:
                  puVar10 = local_18;
                  local_18[2] = local_18[2] + 1;
                  if (((((local_40 & 1) == 0 && local_bc != 0) &&
                       (uVar6 = recovered_36806(*local_18,(int *)local_b0,(int *)(local_b0 + 9),
                                                (char *)pbVar15), (char)uVar6 == '\0')) ||
                      (uVar6 = recovered_345e1(puVar10,(uint *)&local_e4), (char)uVar6 == '\0')) ||
                     (uVar6 = recovered_3688f(*puVar10,(int *)local_b0,(int *)&local_68,
                                              (int)&local_e4,(char *)pbVar15), (char)uVar6 == '\0'))
                  goto LAB_0003671c;
                  recovered_25fea(&local_68);
                  uVar7 = recovered_25fea(&local_e4);
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
                  uVar6 = recovered_345e1(puVar10,(uint *)&local_68);
                  if ((char)uVar6 == '\0') {
LAB_00036569:
                    pppbVar11 = &local_68;
                    goto LAB_0003672a;
                  }
                  local_bc = local_bc + 1;
                  if ((local_40 & 1) == 0) {
                    uVar6 = recovered_34488(local_b0[0xf],(int)&local_68);
                    if ((char)uVar6 == '\0') {
                      recovered_25fea(&local_68);
                      goto LAB_00036644;
                    }
                  }
                  else {
                    recovered_336f8(&local_e4,local_bc);
                    uVar6 = recovered_3688f(*puVar10,(int *)local_b0,(int *)&local_e4,(int)&local_68
                                            ,(char *)local_14);
                    if ((char)uVar6 == '\0') goto LAB_00036569;
                  }
                  recovered_25fea(&local_68);
                }
LAB_00036404:
                uVar6 = recovered_315d3((int)puVar10,0x49818);
                if ((char)uVar6 != '\0') break;
                uVar6 = recovered_315d3((int)puVar10,0x49406);
                if ((char)uVar6 == '\0') {
                  recovered_25fea(local_b0 + 9);
                  recovered_25fea(local_b0);
                  pcVar16 = str_000499a7;
                  goto LAB_00036662;
                }
                uVar6 = recovered_315d3((int)puVar10,0x49818);
              } while ((char)uVar6 == '\0');
              recovered_25fea(local_3c);
              if ((local_40 & 1) != 0) goto LAB_00035ad1;
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
              recovered_25fea(local_3c);
LAB_00035ad1:
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
            recovered_25fea(local_b0 + 9);
            recovered_25fea(local_b0);
LAB_00035b3c:
            puVar10 = local_18;
LAB_00035b3f:
            pbVar15 = local_14;
LAB_00035c26:
            do {
              while( true ) {
                if (*(uint *)puVar10[1] <= puVar10[2]) goto LAB_00035f1a;
                iVar9 = recovered_21415(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),0x4932e);
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
                uVar6 = recovered_345e1(puVar10,local_b0 + 9);
                if ((char)uVar6 == '\0') goto LAB_00035eef;
                uVar6 = recovered_315d3((int)puVar10,0x49330);
                if ((char)uVar6 == '\0') {
                  recovered_25fea(local_b0 + 9);
                  recovered_25fea(local_3c);
                  pcVar16 = str_0004997b;
                  goto LAB_00035f14;
                }
                iVar9 = recovered_36c3c((int *)local_3c,(int *)(local_b0 + 9),local_b0);
                local_40 = CONCAT31(PF_PART3(local_40, 1),(char)iVar9);
                recovered_25fea(local_b0 + 9);
                recovered_25fea(local_3c);
                if ((char)local_40 == '\0') {
                  pcVar16 = str_00049a40;
                  goto LAB_00036662;
                }
                recovered_25fea(local_3c);
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
              iVar9 = recovered_21415(*(int *)(*(int *)(puVar10[1] + 8) + puVar10[2] * 4),0x4938a);
              if (iVar9 != 0) {
LAB_00035f1a:
                puVar10 = local_44;
                recovered_25fea(local_44);
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
              uVar6 = recovered_315d3((int)puVar10,0x493af);
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
                  uVar6 = recovered_345e1(puVar10,local_b0);
                  if ((char)uVar6 == '\0') {
                    recovered_25fea(local_b0);
                    recovered_31591((uint *)&local_68);
                    goto LAB_00035eef;
                  }
                  if (puVar10[2] < *(uint *)puVar10[1]) {
                    iVar9 = recovered_21415(*(int *)(((uint *)puVar10[1])[2] + puVar10[2] * 4),
                                            0x493af);
                    bVar5 = iVar9 == 0;
                  }
                  else {
                    bVar5 = false;
                  }
                  cVar4 = recovered_36ee2((int *)&local_68,(int *)local_b0,bVar5);
                  recovered_25fea(local_b0);
                  if (cVar4 == '\0') {
                    recovered_31591((uint *)&local_68);
                    recovered_25fea(local_3c);
                    pcVar16 = str_00049a55;
                    goto LAB_00035f14;
                  }
                  uVar6 = recovered_315d3((int)puVar10,0x493af);
                  if ((char)uVar6 != '\0') break;
                  uVar6 = recovered_315d3((int)puVar10,0x49406);
                  if ((char)uVar6 == '\0') {
                    recovered_31591((uint *)&local_68);
                    recovered_25fea(local_3c);
                    pcVar16 = str_00049a7e;
                    goto LAB_00035f14;
                  }
                }
              }
              uVar7 = recovered_36f5b((byte **)*puVar10,(int *)local_3c,local_60,local_68,
                                      local_b0 + 9);
              recovered_31591((uint *)&local_68);
              if ((char)uVar7 == '\0') {
                recovered_25fea(local_b0 + 9);
LAB_00035eef:
                puVar10 = local_3c;
LAB_00035ef2:
                recovered_25fea(puVar10);
                return '\0';
              }
              recovered_25fea(local_3c);
              recovered_25fea(local_3c);
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
          iVar9 = recovered_21415((int)pbVar15,0x493b1);
          pbVar3 = local_14;
          if (iVar9 == 0) {
            if (DAT_00084088 == 0) {
LAB_00035c02:
              local_3c[0] = 0;
              local_3c[1] = 0;
              local_34 = 0.0;
              local_30 = 0;
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              local_20 = 0;
              local_1c = 0;
              goto LAB_00035c26;
            }
            uVar6 = recovered_36917((int)local_3c,*(int *)(DAT_0008408c + -8 + DAT_00084088 * 8),
                                    *(int *)(DAT_0008408c + -4 + DAT_00084088 * 8));
            pbVar15 = pbVar3;
            if ((char)uVar6 != '\0') goto LAB_00035c26;
            pcVar16 = str_000499bb;
          }
          else {
            bVar5 = recovered_36981((char *)pbVar15);
            if (!bVar5) {
              iVar9 = recovered_2d4e4((int)pbVar15,0x499f8);
              if ((char)iVar9 != '\0') {
                recovered_36797(local_3c,1);
                goto LAB_00035c26;
              }
              iVar9 = recovered_2d4e4((int)pbVar15,0x499fd);
              if ((char)iVar9 != '\0') {
                recovered_36797(local_3c,0);
                goto LAB_00035c26;
              }
              iVar9 = recovered_2d4e4((int)pbVar15,0x4989d);
              if ((((char)iVar9 != '\0') ||
                  (iVar9 = recovered_2d4e4((int)pbVar15,0x49a03), (char)iVar9 != '\0')) ||
                 (iVar9 = recovered_2d4e4((int)pbVar15,0x49a08), (char)iVar9 != '\0'))
              goto LAB_00035c02;
              uVar6 = recovered_36a15((int)pbVar15,(int *)(local_3c + 1));
              if ((char)uVar6 != '\0') {
                local_3c[0] = 1;
                local_34 = (float)(int)local_3c[1];
                puVar10 = local_18;
                goto LAB_00035c26;
              }
              local_b0[9] = 0;
              uVar6 = recovered_36b8b((int)pbVar15,(int *)(local_b0 + 9));
              if ((char)uVar6 == '\0') {
                iVar9 = recovered_36beb((char *)local_14);
                if (((char)iVar9 == '\0') ||
                   (uVar6 = recovered_2c94d((int)local_14,&local_34), (char)uVar6 == '\0')) {
                  uVar7 = recovered_31537(local_14);
                  if ((char)uVar7 == '\0') {
                    pcVar16 = str_00049a2f;
                    pbVar15 = local_14;
LAB_00036750:
                    uVar7 = *local_18;
                    goto LAB_00036667;
                  }
                  uVar6 = recovered_3312c((int)local_14,(int)local_3c);
                  if ((char)uVar6 == '\0') {
                    iVar9 = recovered_2cbf2((int)local_14);
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
                      uVar6 = recovered_2cb83((int)local_3c,(int)local_14);
                      if ((char)uVar6 == '\0') {
                        pcVar16 = str_00049a0c;
                        pbVar15 = local_14;
                        goto LAB_00036750;
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
                recovered_36bce(local_3c,local_b0[9]);
              }
              goto LAB_00035b3c;
            }
            uVar7 = recovered_369ba((int)pbVar15,local_3c);
            if ((char)uVar7 != '\0') goto LAB_00035c26;
            pcVar16 = str_000499e1;
          }
LAB_00035f14:
        }
      }
    }
    else {
      pcVar16 = str_000498d7;
LAB_0003583a:
      pbVar15 = &DAT_000498d3;
    }
LAB_00036665:
    uVar7 = *puVar10;
LAB_00036667:
    recovered_310b6(uVar7,(char *)pbVar15,pcVar16);
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
  cVar4 = recovered_3538b(param_1,local_3c);
  if (cVar4 == '\0') {
    return '\0';
  }
  if (local_3c[0] == 1) {
LAB_000353f8:
    recovered_336f8(local_b0 + 9,-local_3c[1]);
  }
  else {
    if (local_3c[0] != 2) {
      if (local_3c[0] != 5) {
        recovered_25fea(local_3c);
        pcVar16 = str_00049879;
        uVar7 = *param_1;
        pbVar15 = &DAT_0004986d;
        goto LAB_00036667;
      }
      goto LAB_000353f8;
    }
    recovered_2c9cd(local_b0 + 9,-local_34);
  }
  iVar9 = 9;
  puVar10 = local_b0 + 9;
LAB_00035807:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *puVar10;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  }
  recovered_25fea(local_3c);
  return '\x01';
}
