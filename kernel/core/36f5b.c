#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
#undef DAT_00084198
#define DAT_00084198 (*(uint8_t *)(0x84198U))
#undef DAT_0008419c
#define DAT_0008419c (*(int * *)(0x8419cU))
#undef DAT_000841a0
#define DAT_000841a0 (*(uint8_t *)(0x841a0U))
#undef DAT_000841a4
#define DAT_000841a4 (*(uint8_t *)(0x841a4U))
#undef DAT_000841a8
#define DAT_000841a8 (*(uint8_t *)(0x841a8U))
#undef DAT_000841ac
#define DAT_000841ac (*(uint32_t *)(0x841acU))
#undef DAT_000841b0
#define DAT_000841b0 (*(uint32_t *)(0x841b0U))
#undef DAT_000841b4
#define DAT_000841b4 (*(uint32_t *)(0x841b4U))
#undef _DAT_000841a0
#define _DAT_000841a0 (*(uint32_t *)(0x841a0U))
#undef _DAT_000841a4
#define _DAT_000841a4 (*(uint32_t *)(0x841a4U))
#undef _DAT_000841a8
#define _DAT_000841a8 (*(uint32_t *)(0x841a8U))
#undef str_0004921a
#define str_0004921a (*(char (*)[1])(0x4921aU))
#undef str_000492f9
#define str_000492f9 (*(char (*)[1])(0x492f9U))
#undef str_00049302
#define str_00049302 (*(char (*)[1])(0x49302U))
#undef str_00049b1a
#define str_00049b1a (*(char (*)[1])(0x49b1aU))
#undef str_00049b41
#define str_00049b41 (*(char (*)[1])(0x49b41U))
#undef str_00049b6d
#define str_00049b6d (*(char (*)[1])(0x49b6dU))
#undef str_00049ba2
#define str_00049ba2 (*(char (*)[1])(0x49ba2U))
#undef str_00049bfd
#define str_00049bfd (*(char (*)[1])(0x49bfdU))
#undef str_00049c28
#define str_00049c28 (*(char (*)[1])(0x49c28U))
#undef str_00049c49
#define str_00049c49 (*(char (*)[1])(0x49c49U))
#undef str_0004d0c7
#define str_0004d0c7 (*(char (*)[1])(0x4d0c7U))
#undef str_0004d12c
#define str_0004d12c (*(char (*)[1])(0x4d12cU))
#undef str_0004d16c
#define str_0004d16c (*(char (*)[1])(0x4d16cU))
#undef str_0004d199
#define str_0004d199 (*(char (*)[1])(0x4d199U))
#define format (*(char * *)(frame + 20))
#define pcStack_148 (*(char * *)(frame + 32))
#define uStack_144 (*(undefined4 *)(frame + 36))
#define local_14c (*(uint *)(frame + 28))
#define local_128 (*(byte * *)(frame + 64))
#define local_124 (*(undefined1 * *)(frame + 68))
#define local_120 (*(undefined4 *)(frame + 72))
#define local_11c (*(undefined4 *)(frame + 76))
#define local_118 (*(undefined4 *)(frame + 80))
#define local_114 (*(undefined4 *)(frame + 84))
#define local_110 (*(undefined4 *)(frame + 88))
#define local_10c (*(undefined4 *)(frame + 92))
#define local_108 (*(int * *)(frame + 96))
#define local_88 (*(uint (*)[9])(frame + 224))
#define local_64 (*(byte * *)(frame + 260))
#define local_60 (*(byte * *)(frame + 264))
#define local_5c (*(undefined4 *)(frame + 268))
#define local_58 (*(int *)(frame + 272))
#define local_54 (*(float *)(frame + 276))
#define local_50 (*(char * *)(frame + 280))
#define local_4c (*(int *)(frame + 284))
#define local_48 (*(uint *)(frame + 288))
#define local_44 (*(uint **** *)(frame + 292))
#define local_40 (*(byte * *)(frame + 296))
#define local_3a (*(ushort *)(frame + 302))
#define local_38 (*(void * *)(frame + 304))
#define local_34 (*(uint ***** *)(frame + 308))
#define local_2c (*(byte * *)(frame + 316))
#define local_28 (*(byte ** *)(frame + 320))
#define local_24 (*(int * *)(frame + 324))
#define local_20 (*(byte ** *)(frame + 328))
#define local_1c (*(byte ** *)(frame + 332))
#define local_18 (*(byte ** *)(frame + 336))
#define local_14 (*(byte ** *)(frame + 340))
#define near_token (*(uint ***** *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36f5b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_36f5b(byte **param_1,int *param_2,byte **param_3,byte **param_4,uint *param_5)

{
  unsigned char frame[392];

  byte *pbVar1;
  char cVar2;
  int *piVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  uint *puVar10;
  byte **ppbVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte *pbVar17;
  ushort in_FPUControlWord = pf_fpu_control();
  char *pcVar18;

  local_44 = (uint ****)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_40 = (byte *)0x0;
  if (((param_5 == (uint *)0x0 || param_2 == (int *)0x0) || (*param_2 != 9)) ||
     (iVar6 = param_2[8], iVar6 == 0)) {
    pcVar18 = str_00049b1a;
LAB_00036fe6:
    near_token = (uint *****)0x0;
  }
  else {
    ppbVar16 = (byte **)0x0;
    local_24 = param_2;
    if (*(char *)(iVar6 + 0xb) == '\x01') {
      local_18 = (byte **)0x0;
      if (param_4 == (byte **)0x0) {
        ppbVar16 = (byte **)0x0;
      }
      else {
        bVar5 = recovered_381ba((uint *)(iVar6 + 0x14),(uint *)param_3);
        ppbVar16 = (byte **)CONCAT31(extraout_var,bVar5);
      }
      local_14 = (byte **)((uint)(byte)((byte)ppbVar16 ^ 1) + (int)param_4);
      if (local_14 == (byte **)0x0) {
        local_14 = (byte **)0x0;
        ppbVar16 = (byte **)0x0;
        goto LAB_000370d7;
      }
      local_28 = ppbVar16;
      ppbVar16 = recovered_211fa((int)local_14 * 0x24);
      if (ppbVar16 != (byte **)0x0) {
        ppbVar15 = ppbVar16 + 8;
        ppbVar11 = local_14;
        while (bVar5 = ppbVar11 != (byte **)0x0, ppbVar11 = (byte **)((int)ppbVar11 + -1), bVar5) {
          ppbVar15[-8] = (byte *)0x0;
          ppbVar15[-7] = (byte *)0x0;
          ppbVar15[-6] = (byte *)0x0;
          ppbVar15[-5] = (byte *)0x0;
          ppbVar15[-4] = (byte *)0x0;
          ppbVar15[-3] = (byte *)0x0;
          ppbVar15[-2] = (byte *)0x0;
          ppbVar15[-1] = (byte *)0x0;
          *ppbVar15 = (byte *)0x0;
          ppbVar15 = ppbVar15 + 9;
        }
        iVar6 = 0;
        local_18 = ppbVar16;
        if ((char)local_28 != '\0') {
LAB_00037095:
          ppbVar16 = local_18 + iVar6 * 9;
          local_1c = param_1;
          while (bVar5 = param_4 != (byte **)0x0, param_4 = (byte **)((int)param_4 + -1), bVar5) {
            uVar7 = recovered_2c5b3((uint *)ppbVar16,(uint *)param_3);
            ppbVar11 = local_18;
            if ((char)uVar7 == '\0') {
              recovered_38294((int)local_18,(int)local_14);
              recovered_21203((int)ppbVar11);
              pcVar18 = str_00049b41;
              goto LAB_0003748c;
            }
            param_3 = param_3 + 9;
            ppbVar16 = ppbVar16 + 9;
          }
          param_1 = local_1c;
          ppbVar16 = local_18;
          goto LAB_000370d7;
        }
        uVar7 = recovered_2c5b3((uint *)ppbVar16,(uint *)(local_24[8] + 0x14));
        ppbVar16 = local_18;
        if ((char)uVar7 != '\0') {
          iVar6 = 1;
          goto LAB_00037095;
        }
        recovered_38294((int)local_18,(int)local_14);
LAB_000375b9:
        recovered_21203((int)ppbVar16);
      }
      pcVar18 = str_00049b41;
      goto LAB_00036fe6;
    }
    local_14 = param_4;
    local_18 = param_3;
LAB_000370d7:
    ppbVar11 = local_14;
    piVar3 = (int *)local_24[8];
    if (piVar3[1] == 2) {
      local_5c = 0;
      local_58 = 0;
      local_54 = 0.0;
      local_50 = (char *)0x0;
      local_4c = 0;
      local_48 = 0;
      near_token = (uint *****)str_000492f9;
      if ((uint *****)piVar3[3] != (uint *****)0x0) {
        near_token = (uint *****)piVar3[3];
      }
      if (piVar3[0x13] == 0) {
        local_20 = ppbVar16;
        recovered_38294((int)ppbVar16,(int)local_14);
        recovered_21203((int)ppbVar16);
        pcVar18 = str_00049b6d;
      }
      else {
        local_38 = (void *)0x0;
        local_34 = near_token;
        local_20 = ppbVar16;
        recovered_213af((int)&local_128,0,0xa0);
        ppbVar16 = local_14;
        if (local_14 == (byte **)0x0) {
LAB_000375ce:
          pvVar9 = local_38;
          local_18 = (byte **)(**(code **)(local_24[8] + 0x4c))
                                        (local_38,local_14,&local_5c,&local_128,0xa0);
          ppbVar16 = local_20;
          recovered_21203((int)pvVar9);
          recovered_38294((int)ppbVar16,(int)local_14);
          recovered_21203((int)ppbVar16);
          if (local_18 != (byte **)0x0) {
            switch((uintptr_t)(local_5c)) {
            case 0:
              puVar10 = param_5;
LAB_0003763e:
              recovered_25fea(puVar10);
              *param_5 = 0;
              param_5[1] = 0;
              param_5[2] = 0;
              param_5[3] = 0;
              param_5[4] = 0;
              param_5[5] = 0;
              param_5[6] = 0;
              param_5[7] = 0;
              param_5[8] = 0;
              goto LAB_000378f4;
            case 1:
              recovered_25fea(param_5);
              recovered_336f8(&local_14c,local_58);
              break;
            case 2:
              recovered_25fea(param_5);
              recovered_2c9cd(&local_14c,local_54);
              break;
            case 3:
              pcVar18 = &DAT_0004851c;
              if (local_50 != (char *)0x0) {
                pcVar18 = local_50;
              }
              uVar8 = recovered_2c718(param_5,pcVar18);
              return uVar8;
            case 4:
              uVar8 = recovered_2c749(param_5,local_4c,local_48);
              return uVar8;
            case 5:
              recovered_25fea(param_5);
              recovered_36797(&local_14c,(uint)(local_58 != 0));
              break;
            case 6:
              recovered_25fea(param_5);
              recovered_36bce(&local_14c,local_58);
              break;
            default:
              pcVar18 = str_0004d12c;
              near_token = local_34;
              goto LAB_00037305;
            }
            puVar10 = &local_14c;
            iVar6 = 9;
            goto LAB_000378f2;
          }
          pcVar18 = &DAT_00048638;
        }
        else {
          pvVar9 = recovered_211fa((int)local_14 * 0x18);
          ppbVar11 = local_20;
          if (pvVar9 != (void *)0x0) {
            puVar10 = (uint *)((int)pvVar9 + 0x14);
            ppbVar11 = local_18 + 5;
            while (bVar5 = ppbVar16 != (byte **)0x0, ppbVar16 = (byte **)((int)ppbVar16 + -1),
                  local_38 = pvVar9, bVar5) {
              puVar10[-5] = 0;
              puVar10[-4] = 0;
              puVar10[-3] = 0;
              puVar10[-2] = 0;
              puVar10[-1] = 0;
              *puVar10 = 0;
              local_1c = param_1;
              if (local_18 == (byte **)0x0) {
LAB_0003797b:
                recovered_21203((int)local_38);
                ppbVar11 = local_20;
                recovered_38294((int)local_20,(int)local_14);
                goto LAB_0003799a;
              }
              puVar10[-4] = 0;
              puVar10[-2] = 0;
              *puVar10 = 0;
              switch((uintptr_t)(ppbVar11[-5])) {
              case 0x0:
                goto switchD_000371f8_caseD_0;
              case 0x1:
                pbVar17 = ppbVar11[-4];
                local_2c = (byte *)0x0;
                pbVar1 = (byte *)(uintptr_t)pf_float_bits((float)(int)pbVar17);
                local_60 = pbVar17;
                break;
              case 0x2:
                pbVar1 = ppbVar11[-3];
                local_3a = in_FPUControlWord | 0xc00;
                pbVar17 = (byte *)(int)ROUND(pf_bits_float((uintptr_t)pbVar1));
                local_2c = (byte *)0x0;
                local_64 = pbVar17;
                break;
              case 0x3:
                local_2c = ppbVar11[-2];
                if (local_2c == (byte *)0x0) {
                  local_2c = &DAT_0004851c;
                }
                pbVar17 = (byte *)0x0;
                goto LAB_0003729f;
              case 0x4:
                pbVar12 = ppbVar11[-1];
                pbVar14 = *ppbVar11;
                pbVar17 = (byte *)0x0;
                pbVar1 = (byte *)0x0;
                local_2c = (byte *)0x0;
                goto LAB_000372a5;
              case 0x5:
                pbVar1 = (byte *)0x0;
                if (ppbVar11[-4] != (byte *)0x0) {
                  pbVar1 = (byte *)0x3f800000;
                }
                pbVar17 = (byte *)(uint)(ppbVar11[-4] != (byte *)0x0);
                local_2c = (byte *)0x0;
                break;
              case 0x6:
                pbVar17 = ppbVar11[-4];
                local_2c = (byte *)0x0;
LAB_0003729f:
                pbVar1 = (byte *)0x0;
                break;
              default:
                recovered_310b6((uint)param_1,(char *)local_34,str_0004d0c7);
                goto LAB_0003797b;
              }
              pbVar12 = (byte *)0x0;
              pbVar14 = (byte *)0x0;
LAB_000372a5:
              puVar10[-5] = (uint)ppbVar11[-5];
              puVar10[-4] = (uint)pbVar17;
              puVar10[-3] = (uint)pbVar1;
              puVar10[-2] = (uint)local_2c;
              puVar10[-1] = (uint)pbVar12;
              *puVar10 = (uint)pbVar14;
              local_28 = ppbVar11;
switchD_000371f8_caseD_0:
              puVar10 = puVar10 + 6;
              ppbVar11 = ppbVar11 + 9;
            }
            local_1c = param_1;
            goto LAB_000375ce;
          }
          recovered_38294((int)local_20,(int)ppbVar16);
          recovered_21203((int)ppbVar11);
          pcVar18 = str_00049ba2;
        }
        near_token = local_34;
      }
    }
    else {
      if (piVar3[1] == 1) {
        ppbVar15 = (byte **)&DAT_0004851c;
        if ((byte **)piVar3[4] != (byte **)0x0) {
          ppbVar15 = (byte **)piVar3[4];
        }
        uVar8 = recovered_382b6(param_1,ppbVar15,local_18,local_14,param_5);
        recovered_38294((int)ppbVar16,(int)ppbVar11);
        recovered_21203((int)ppbVar16);
        return uVar8;
      }
      if ((local_14 == (byte **)0x0) || ((char)piVar3[2] == '\0')) {
        if (*(char *)((int)piVar3 + 9) == '\x01') {
          recovered_448de();
          *piVar3 = *piVar3 + 1;
          _DAT_000841a0 = 0;
          _DAT_000841a4 = 0;
          _DAT_000841a8 = 0;
          DAT_000841ac = 0;
          DAT_000841b0 = 0;
          DAT_000841b4 = 0;
          DAT_0008419c = piVar3;
          uVar8 = recovered_4748a(0x84198,0,piVar3[0x11]);
          if ((char)uVar8 == '\0') {
            recovered_448de();
            pcVar18 = str_00049302;
            if ((char *)piVar3[3] != (char *)0x0) {
              pcVar18 = (char *)piVar3[3];
            }
            recovered_310b6((uint)param_1,pcVar18,str_0004d16c);
            uVar8 = 0;
            goto LAB_000379cf;
          }
          pcVar18 = (char *)piVar3[3];
          local_20 = ppbVar16;
          local_1c = param_1;
          if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) {
LAB_000373ca:
            ppbVar16 = local_18;
            for (ppbVar11 = (byte **)0x0; ppbVar15 = (byte **)piVar3[0xf], ppbVar11 < ppbVar15;
                ppbVar11 = (byte **)((int)ppbVar11 + 1)) {
              local_128 = (byte *)0x0;
              local_124 = (undefined1 *)0x0;
              local_120 = 0;
              local_11c = 0;
              local_118 = 0;
              local_114 = 0;
              local_110 = 0;
              local_10c = 0;
              local_108 = (int *)0x0;
              ppbVar15 = &local_128;
              if (ppbVar11 < local_14) {
                ppbVar15 = ppbVar16;
              }
              uVar7 = recovered_47509((int *)&DAT_000841a0,*(int *)(piVar3[0xe] + (int)ppbVar11 * 4)
                                      ,(int)ppbVar15);
              if ((char)uVar7 == '\0') {
                recovered_448de();
                format = str_0004d16c;
                pcVar18 = *(char **)(piVar3[0xe] + (int)ppbVar11 * 4);
                goto LAB_000379bf;
              }
              ppbVar16 = ppbVar16 + 9;
            }
            if (*(char *)((int)piVar3 + 10) == '\x01') {
              ppbVar16 = (byte **)((int)local_14 - (int)ppbVar15);
              if (local_14 < ppbVar15) {
                ppbVar16 = (byte **)0x0;
              }
              ppbVar11 = local_18 + (int)ppbVar15 * 9;
              if (local_14 <= ppbVar15) {
                ppbVar11 = (byte **)0x0;
              }
              uVar7 = recovered_4759a(&DAT_000841ac,(int)ppbVar11,(int)ppbVar16);
              if ((char)uVar7 == '\0') {
                recovered_448de();
                pcVar18 = str_00049302;
                if ((char *)piVar3[3] != (char *)0x0) {
                  pcVar18 = (char *)piVar3[3];
                }
                format = str_0004d199;
                goto LAB_000379bf;
              }
            }
            DAT_00084198 = 1;
            recovered_25fea(param_5);
            *param_5 = 0;
            param_5[1] = 0;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            param_5[8] = 0;
            uVar8 = CONCAT31((int3)((uint)ppbVar16 >> 8),1);
          }
          else {
            local_124 = (undefined1 *)0x0;
            local_120 = 0;
            local_11c = 0;
            local_118 = 0;
            local_114 = 0;
            local_110 = 0;
            local_10c = 0;
            local_128 = (byte *)0x9;
            *piVar3 = *piVar3 + 1;
            local_108 = piVar3;
            uVar7 = recovered_47509((int *)&DAT_000841a0,(int)pcVar18,(int)&local_128);
            recovered_25fea(&local_128);
            if ((char)uVar7 != '\0') goto LAB_000373ca;
            recovered_448de();
            format = str_0004d16c;
            pcVar18 = (char *)piVar3[3];
LAB_000379bf:
            recovered_310b6((uint)local_1c,pcVar18,format);
            uVar8 = 0;
          }
          ppbVar16 = local_20;
LAB_000379cf:
          recovered_38294((int)ppbVar16,(int)local_14);
          recovered_21203((int)ppbVar16);
          return uVar8;
        }
        uVar7 = recovered_41341();
        piVar3 = local_24;
        if ((char)uVar7 == '\0') {
          recovered_38294((int)ppbVar16,(int)local_14);
          goto LAB_000375b9;
        }
        pcVar18 = *(char **)(local_24[8] + 0xc);
        if (((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) &&
           (uVar7 = recovered_413e8((int)pcVar18,(int)local_24), (char)uVar7 == '\0')) {
          recovered_41426();
          recovered_38294((int)ppbVar16,(int)local_14);
          recovered_21203((int)ppbVar16);
          pcVar18 = str_00049b41;
          near_token = *(uint ******)(piVar3[8] + 0xc);
          goto LAB_00036fe8;
        }
        ppbVar15 = (byte **)0x0;
        ppbVar11 = local_18;
        local_1c = param_1;
        while( true ) {
          iVar6 = local_24[8];
          ppbVar13 = *(byte ***)(iVar6 + 0x3c);
          if (ppbVar13 <= ppbVar15) break;
          ppbVar13 = (byte **)0x0;
          if (ppbVar15 < local_14) {
            ppbVar13 = ppbVar11;
          }
          local_128 = (byte *)0x0;
          local_124 = (undefined1 *)0x0;
          local_120 = 0;
          local_11c = 0;
          local_118 = 0;
          local_114 = 0;
          local_110 = 0;
          local_10c = 0;
          local_108 = (int *)0x0;
          if (ppbVar13 == (byte **)0x0) {
            ppbVar13 = &local_128;
          }
          uVar7 = recovered_413e8(*(int *)(*(int *)(iVar6 + 0x38) + (int)ppbVar15 * 4),(int)ppbVar13
                                 );
          if ((char)uVar7 == '\0') {
            recovered_41426();
            recovered_38294((int)ppbVar16,(int)local_14);
            recovered_21203((int)ppbVar16);
            near_token = *(uint ******)(*(int *)(local_24[8] + 0x38) + (int)ppbVar15 * 4);
            pcVar18 = str_00049c28;
            goto LAB_0003748e;
          }
          ppbVar15 = (byte **)((int)ppbVar15 + 1);
          ppbVar11 = ppbVar11 + 9;
        }
        cVar2 = *(char *)(iVar6 + 10);
        param_1 = (byte **)CONCAT31((int3)((uint)ppbVar15 >> 8),cVar2);
        if (cVar2 == '\x01') {
          ppbVar11 = local_18 + (int)ppbVar13 * 9;
          iVar6 = (int)local_14 - (int)ppbVar13;
          bVar5 = iVar6 == 0;
          if (local_14 < ppbVar13) {
            iVar6 = 0;
          }
          if (local_14 < ppbVar13 || bVar5) {
            ppbVar11 = (byte **)0x0;
          }
          uVar7 = recovered_41449((int)ppbVar11,iVar6);
          if ((char)uVar7 == '\0') {
            recovered_41426();
            recovered_38294((int)ppbVar16,(int)local_14);
            recovered_21203((int)ppbVar16);
            pcVar18 = str_00049c49;
LAB_0003748c:
            near_token = (uint *****)0x0;
LAB_0003748e:
            ppbVar11 = local_1c;
            goto LAB_00036fe9;
          }
          iVar6 = local_24[8];
        }
        near_token = &local_44;
        ppbVar11 = &local_40;
        uVar8 = recovered_2e66f(*(int *)(iVar6 + 0x40),*(uint ******)(iVar6 + 0x44),(uint *)ppbVar11
                                ,near_token,local_88);
        if ((char)uVar8 == '\0') {
          uStack_144 = 0x37949;
          recovered_25fea(local_88);
          if (cVar2 != '\0') {
            uStack_144 = 0x37952;
            recovered_414d7();
          }
          uStack_144 = 0x37957;
          recovered_41426();
          uStack_144 = 0x37961;
          recovered_38294((int)ppbVar16,(int)local_14);
LAB_0003799a:
          recovered_21203((int)ppbVar11);
          return 0;
        }
        if (cVar2 != '\0') {
          uStack_144 = 0x3776b;
          recovered_414d7();
        }
        uStack_144 = 0x37770;
        recovered_41426();
        uStack_144 = 0x3777a;
        recovered_38294((int)ppbVar16,(int)local_14);
        pcVar18 = (char *)0x37783;
        recovered_21203((int)ppbVar16);
        if (local_44 == (uint ****)0x1) {
          local_128 = local_40;
          local_124 = &DAT_0004851c;
          if (local_40 < *(byte **)(local_24[8] + 0x44)) {
            puVar4 = *(undefined1 **)(*(int *)(local_24[8] + 0x40) + (int)local_40 * 4);
            local_124 = &DAT_0004851c;
            if (puVar4 != (undefined1 *)0x0) {
              local_124 = puVar4;
            }
          }
          uStack_144 = 0x377cf;
          recovered_25fea(local_88);
          pcStack_148 = str_0004921a;
          local_14c = 0;
          goto LAB_00036fe9;
        }
        if (((uint)local_44 & 0xfffffffe) != 2) {
          puVar10 = local_88;
          goto LAB_0003763e;
        }
        uStack_144 = 0x37a1e;
        recovered_25fea(param_5);
        uStack_144 = 9;
        iVar6 = 9;
        puVar10 = local_88;
LAB_000378f2:
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_5 = *puVar10;
          puVar10 = puVar10 + 1;
          param_5 = param_5 + 1;
        }
LAB_000378f4:
        return CONCAT31((int3)((uint)param_1 >> 8),1);
      }
      recovered_38294((int)ppbVar16,(int)local_14);
      recovered_21203((int)ppbVar16);
      near_token = (uint *****)str_000492f9;
      if (*(uint ******)(local_24[8] + 0xc) != (uint *****)0x0) {
        near_token = *(uint ******)(local_24[8] + 0xc);
      }
      pcVar18 = str_00049bfd;
LAB_00037305:
    }
  }
LAB_00036fe8:
  ppbVar11 = param_1;
LAB_00036fe9:
  recovered_310b6((uint)ppbVar11,(char *)near_token,pcVar18);
  return 0;
}
