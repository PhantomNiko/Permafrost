#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_00082074
#define DAT_00082074 (*(uint *)(0x82074U))
#undef DAT_00082078
#define DAT_00082078 (*(int *)(0x82078U))
#undef DAT_00082190
#define DAT_00082190 (*(uint *)(0x82190U))
#undef str_00046f9f
#define str_00046f9f (*(char (*)[1])(0x46f9fU))
#undef str_0004707e
#define str_0004707e (*(char (*)[1])(0x4707eU))
#undef str_0004786f
#define str_0004786f (*(char (*)[1])(0x4786fU))
#undef str_00047896
#define str_00047896 (*(char (*)[1])(0x47896U))
#undef str_000478c2
#define str_000478c2 (*(char (*)[1])(0x478c2U))
#undef str_000478f7
#define str_000478f7 (*(char (*)[1])(0x478f7U))
#undef str_00047952
#define str_00047952 (*(char (*)[1])(0x47952U))
#undef str_0004797d
#define str_0004797d (*(char (*)[1])(0x4797dU))
#undef str_0004ad5e
#define str_0004ad5e (*(char (*)[1])(0x4ad5eU))
#undef str_0004adc3
#define str_0004adc3 (*(char (*)[1])(0x4adc3U))
#define local_14c (*(byte ******* *)(frame + 24))
#define local_148 (*(byte ***** *)(frame + 28))
#define local_144 (*(undefined4 *)(frame + 32))
#define local_140 (*(undefined4 *)(frame + 36))
#define local_13c (*(undefined4 *)(frame + 40))
#define local_138 (*(undefined4 *)(frame + 44))
#define local_134 (*(undefined4 *)(frame + 48))
#define local_130 (*(undefined4 *)(frame + 52))
#define local_12c (*(undefined4 *)(frame + 56))
#define local_ac (*(uint (*)[9])(frame + 184))
#define local_88 (*(uint (*)[9])(frame + 220))
#define local_64 (*(byte ******* *)(frame + 256))
#define local_60 (*(byte ******* *)(frame + 260))
#define local_5c (*(undefined4 *)(frame + 264))
#define local_58 (*(int *)(frame + 268))
#define local_54 (*(float *)(frame + 272))
#define local_50 (*(char * *)(frame + 276))
#define local_4c (*(int *)(frame + 280))
#define local_48 (*(uint *)(frame + 284))
#define local_44 (*(byte ***** *)(frame + 288))
#define local_40 (*(byte ******* *)(frame + 292))
#define local_3a (*(ushort *)(frame + 298))
#define local_38 (*(void * *)(frame + 300))
#define local_34 (*(byte ****** *)(frame + 304))
#define local_2c (*(byte ******* *)(frame + 312))
#define local_28 (*(byte ******* *)(frame + 316))
#define local_24 (*(byte ******** *)(frame + 320))
#define local_20 (*(byte ******** *)(frame + 324))
#define local_1c (*(byte ******** *)(frame + 328))
#define local_18 (*(byte ******** *)(frame + 332))
#define local_14 (*(byte ****** *)(frame + 336))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3552d
 */

uint recovered_3552d(byte **param_1,byte **param_2,byte **param_3,byte **param_4,uint *param_5)

{
  unsigned char frame[388];

  byte *pbVar1;
  byte *******pppppppbVar2;
  byte *****pppppbVar3;
  bool bVar4;
  undefined3 extraout_var = 0;
  byte ********ppppppppbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  uint *puVar10;
  byte ******ppppppbVar11;
  byte *******pppppppbVar12;
  byte ********ppppppppbVar13;
  undefined4 *puVar14;
  int iVar15;
  byte ******ppppppbVar16;
  byte *******pppppppbVar17;
  ushort in_FPUControlWord = pf_fpu_control();
  char *pcVar18;

  local_44 = (byte *****)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_40 = (byte *******)0x0;
  if (((param_5 == (uint *)0x0 || param_2 == (byte **)0x0) || (*param_2 != (byte *)0x9)) ||
     (pbVar1 = param_2[8], pbVar1 == (byte *)0x0)) {
    pcVar18 = str_0004786f;
    ppppppbVar11 = (byte ******)0x0;
    goto LAB_000355c1;
  }
  ppppppppbVar13 = (byte ********)0x0;
  local_1c = (byte ********)param_1;
  if (pbVar1[9] == 1) {
    local_18 = (byte ********)0x0;
    local_24 = (byte ********)param_2;
    if (param_4 == (byte **)0x0) {
      ppppppppbVar13 = (byte ********)0x0;
    }
    else {
      bVar4 = recovered_36546((uint *)(pbVar1 + 0x14),(uint *)param_3);
      ppppppppbVar13 = (byte ********)CONCAT31(extraout_var,bVar4);
    }
    ppppppbVar11 = (byte ******)((uint)(byte)((byte)ppppppppbVar13 ^ 1) + (int)param_4);
    if (ppppppbVar11 == (byte ******)0x0) {
      local_14 = (byte ******)0x0;
      ppppppppbVar13 = (byte ********)0x0;
LAB_000356ac:
      param_2 = (byte **)local_24;
      goto LAB_000356af;
    }
    local_18 = ppppppppbVar13;
    ppppppppbVar13 = recovered_211fa((int)ppppppbVar11 * 0x24);
    if (ppppppppbVar13 != (byte ********)0x0) {
      ppppppppbVar5 = ppppppppbVar13 + 8;
      ppppppbVar16 = ppppppbVar11;
      while (bVar4 = ppppppbVar16 != (byte ******)0x0,
            ppppppbVar16 = (byte ******)((int)ppppppbVar16 + -1), bVar4) {
        ppppppppbVar5[-8] = (byte *******)0x0;
        ppppppppbVar5[-7] = (byte *******)0x0;
        ppppppppbVar5[-6] = (byte *******)0x0;
        ppppppppbVar5[-5] = (byte *******)0x0;
        ppppppppbVar5[-4] = (byte *******)0x0;
        ppppppppbVar5[-3] = (byte *******)0x0;
        ppppppppbVar5[-2] = (byte *******)0x0;
        ppppppppbVar5[-1] = (byte *******)0x0;
        *ppppppppbVar5 = (byte *******)0x0;
        ppppppppbVar5 = ppppppppbVar5 + 9;
      }
      iVar6 = 0;
      local_14 = ppppppbVar11;
      if ((char)local_18 != '\0') {
LAB_0003566b:
        ppppppppbVar5 = ppppppppbVar13 + iVar6 * 9;
        local_18 = ppppppppbVar13;
        while (bVar4 = param_4 != (byte **)0x0, param_4 = (byte **)((int)param_4 + -1), bVar4) {
          uVar7 = recovered_2c565((uint *)ppppppppbVar5,(uint *)param_3);
          if ((char)uVar7 == '\0') {
            ppppppppbVar13 = local_18;
            goto LAB_00035c14;
          }
          ppppppppbVar5 = ppppppppbVar5 + 9;
          param_3 = param_3 + 9;
        }
        ppppppppbVar13 = local_18;
        goto LAB_000356ac;
      }
      uVar7 = recovered_2c565((uint *)ppppppppbVar13,(uint *)(local_24[8] + 5));
      if ((char)uVar7 != '\0') {
        iVar6 = 1;
        goto LAB_0003566b;
      }
      recovered_36620((int)ppppppppbVar13,(int)local_14);
LAB_00035c22:
      recovered_21203((int)ppppppppbVar13);
    }
    pcVar18 = str_00047896;
    ppppppbVar11 = (byte ******)0x0;
  }
  else {
    local_14 = (byte ******)param_4;
    local_18 = (byte ********)param_3;
LAB_000356af:
    ppppppbVar11 = local_14;
    param_1 = (byte **)local_1c;
    pppppppbVar2 = (byte *******)param_2[8];
    if (pppppppbVar2[1] != (byte ******)0x2) {
      if (pppppppbVar2[1] == (byte ******)0x1) {
        ppppppbVar16 = (byte ******)&DAT_0004627c;
        if (pppppppbVar2[4] != (byte ******)0x0) {
          ppppppbVar16 = pppppppbVar2[4];
        }
        local_20 = ppppppppbVar13;
        uVar8 = recovered_36642(local_1c,(byte **)ppppppbVar16,(byte **)local_18,(byte **)local_14,
                                param_5);
        ppppppppbVar13 = local_20;
        recovered_36620((int)local_20,(int)ppppppbVar11);
        recovered_21203((int)ppppppppbVar13);
        return uVar8;
      }
      if ((local_14 == (byte ******)0x0) || (*(byte *)(pppppppbVar2 + 2) == 0)) {
        iVar6 = DAT_00082078;
        local_20 = ppppppppbVar13;
        if (DAT_00082074 == DAT_00082190) {
          uVar8 = 4;
          if (DAT_00082074 != 0) {
            uVar8 = DAT_00082074 * 2;
          }
          iVar6 = recovered_21289(DAT_00082078,uVar8 * 0xc);
          if (iVar6 == 0) {
            ppppppppbVar13 = local_20;
LAB_00035c14:
            recovered_36620((int)ppppppppbVar13,(int)local_14);
            goto LAB_00035c22;
          }
          puVar14 = (undefined4 *)(DAT_00082190 * 0xc + iVar6 + 8);
          DAT_00082078 = iVar6;
          for (; DAT_00082190 < uVar8; DAT_00082190 = DAT_00082190 + 1) {
            puVar14[-2] = 0;
            puVar14[-1] = 0;
            *puVar14 = 0;
            puVar14 = puVar14 + 3;
          }
          DAT_00082190 = uVar8;
        }
        param_1 = (byte **)local_1c;
        recovered_4552f((int *)(DAT_00082074 * 0xc + iVar6));
        iVar6 = DAT_00082078;
        if (DAT_00082078 != 0) {
          iVar15 = DAT_00082074 * 0xc;
          *(undefined4 *)(DAT_00082078 + iVar15) = 0;
          *(undefined4 *)(iVar6 + 4 + iVar15) = 0;
          *(undefined4 *)(iVar6 + 8 + iVar15) = 0;
        }
        DAT_00082074 = DAT_00082074 + 1;
        ppppppbVar11 = *(byte *******)((int)param_2[8] + 0xc);
        if (((ppppppbVar11 == (byte ******)0x0) || (*(char *)ppppppbVar11 == '\0')) ||
           (uVar7 = recovered_3f5f3((int)ppppppbVar11,(int)param_2), (char)uVar7 != '\0')) {
          for (ppppppbVar11 = (byte ******)0x0; ppppppppbVar13 = local_18,
              pppppppbVar2 = (byte *******)param_2[8], ppppppbVar11 < pppppppbVar2[0xf];
              ppppppbVar11 = (byte ******)((int)ppppppbVar11 + 1)) {
            ppppppppbVar5 = (byte ********)0x0;
            if (ppppppbVar11 < local_14) {
              ppppppppbVar5 = local_18;
            }
            local_14c = (byte *******)0x0;
            local_148 = (byte *****)0x0;
            local_144 = 0;
            local_140 = 0;
            local_13c = 0;
            local_138 = 0;
            local_134 = 0;
            local_130 = 0;
            local_12c = 0;
            if (ppppppppbVar5 == (byte ********)0x0) {
              ppppppppbVar5 = &local_14c;
            }
            uVar7 = recovered_3f5f3((int)pppppppbVar2[0xe][(int)ppppppbVar11],(int)ppppppppbVar5);
            if ((char)uVar7 == '\0') {
              recovered_3f720();
              ppppppppbVar13 = local_20;
              recovered_36620((int)local_20,(int)local_14);
              recovered_21203((int)ppppppppbVar13);
              pcVar18 = str_0004797d;
              ppppppbVar11 = (byte ******)
                             (*(byte *******)((int)param_2[8] + 0x38))[(int)ppppppbVar11];
              goto LAB_00035c31;
            }
            local_18 = ppppppppbVar13 + 9;
          }
          ppppppbVar11 = &local_44;
          param_1 = (byte **)&local_40;
          uVar8 = recovered_2e561((int)pppppppbVar2[0x10],(uint ***********)pppppppbVar2[0x11],
                                  (int *)param_1,ppppppbVar11,local_88);
          if ((char)uVar8 == '\0') {
            local_144 = 0x35c44;
            recovered_26052(local_88);
            local_144 = 0x35c49;
            recovered_3f720();
LAB_00035daa:
            ppppppppbVar13 = local_20;
            local_144 = 0x35db7;
            recovered_36620((int)local_20,(int)local_14);
            recovered_21203((int)ppppppppbVar13);
            return 0;
          }
          local_144 = 0x35aa9;
          recovered_3f720();
          ppppppppbVar13 = local_20;
          local_144 = 0x35ab6;
          recovered_36620((int)local_20,(int)local_14);
          pcVar18 = (char *)0x35abf;
          recovered_21203((int)ppppppppbVar13);
          if (local_44 != (byte *****)0x2) {
            if (local_44 == (byte *****)0x1) {
              local_14c = local_40;
              local_148 = (byte *****)&DAT_0004627c;
              if (local_40 < *(byte ********)((int)param_2[8] + 0x44)) {
                pppppbVar3 = (*(byte *******)((int)param_2[8] + 0x40))[(int)local_40];
                local_148 = (byte *****)&DAT_0004627c;
                if (pppppbVar3 != (byte *****)0x0) {
                  local_148 = pppppbVar3;
                }
              }
              local_144 = 0x35b11;
              recovered_26052(local_88);
              local_148 = (byte *****)str_00046f9f;
              local_14c = (byte *******)0x0;
              goto LAB_000355c1;
            }
            puVar10 = local_88;
LAB_00035c9d:
            puVar14 = (undefined4 *)recovered_26052(puVar10);
            *param_5 = 0;
            param_5[1] = 0;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            param_5[8] = 0;
            goto LAB_00035d7f;
          }
          local_144 = 0x35c89;
          puVar14 = (undefined4 *)recovered_26052(param_5);
          iVar6 = 9;
          puVar10 = local_88;
LAB_00035d7d:
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_5 = *puVar10;
            puVar10 = puVar10 + 1;
            param_5 = param_5 + 1;
          }
LAB_00035d7f:
          return CONCAT31((int3)((uint)puVar14 >> 8),1);
        }
        recovered_3f720();
        ppppppppbVar13 = local_20;
        recovered_36620((int)local_20,(int)local_14);
        recovered_21203((int)ppppppppbVar13);
        pcVar18 = str_00047896;
        ppppppbVar11 = *(byte *******)((int)param_2[8] + 0xc);
      }
      else {
        local_20 = ppppppppbVar13;
        recovered_36620((int)ppppppppbVar13,(int)local_14);
        recovered_21203((int)ppppppppbVar13);
        ppppppbVar11 = (byte ******)str_0004707e;
        if (*(byte *******)((int)param_2[8] + 0xc) != (byte ******)0x0) {
          ppppppbVar11 = *(byte *******)((int)param_2[8] + 0xc);
        }
        pcVar18 = str_00047952;
      }
      goto LAB_000355c1;
    }
    local_5c = 0;
    local_58 = 0;
    local_54 = 0.0;
    local_50 = (char *)0x0;
    local_4c = 0;
    local_48 = 0;
    ppppppbVar11 = (byte ******)str_0004707e;
    if (pppppppbVar2[3] != (byte ******)0x0) {
      ppppppbVar11 = pppppppbVar2[3];
    }
    if (pppppppbVar2[0x13] == (byte ******)0x0) {
      recovered_36620((int)ppppppppbVar13,(int)local_14);
      recovered_21203((int)ppppppppbVar13);
      pcVar18 = str_000478c2;
      goto LAB_00035c31;
    }
    local_38 = (void *)0x0;
    local_34 = ppppppbVar11;
    local_20 = ppppppppbVar13;
    recovered_213af((int)&local_14c,0,0xa0);
    ppppppbVar11 = local_14;
    if (local_14 == (byte ******)0x0) {
LAB_00035b85:
      ppppppbVar11 = local_14;
      pvVar9 = local_38;
      local_18 = (byte ********)
                 (*(code *)*(byte *******)((int)param_2[8] + 0x4c))
                           (local_38,local_14,&local_5c,&local_14c,0xa0);
      recovered_21203((int)pvVar9);
      ppppppppbVar13 = local_20;
      recovered_36620((int)local_20,(int)ppppppbVar11);
      recovered_21203((int)ppppppppbVar13);
      if (local_18 != (byte ********)0x0) {
        switch((uintptr_t)(local_5c)) {
        case 0:
          puVar10 = param_5;
          goto LAB_00035c9d;
        case 1:
          recovered_26052(param_5);
          puVar14 = recovered_31b91(local_ac,local_58);
          break;
        case 2:
          recovered_26052(param_5);
          puVar14 = recovered_2c941(local_ac,local_54);
          break;
        case 3:
          pcVar18 = &DAT_0004627c;
          if (local_50 != (char *)0x0) {
            pcVar18 = local_50;
          }
          uVar8 = recovered_2c6ca(param_5,pcVar18);
          return uVar8;
        case 4:
          uVar8 = recovered_2c6fb(param_5,local_4c,local_48);
          return uVar8;
        case 5:
          recovered_26052(param_5);
          puVar14 = recovered_34e4c(local_ac,(uint)(local_58 != 0));
          break;
        case 6:
          recovered_26052(param_5);
          puVar14 = recovered_35219(local_ac,local_58);
          break;
        default:
          pcVar18 = str_0004adc3;
          param_1 = (byte **)local_1c;
          ppppppbVar11 = local_34;
          goto LAB_000355c1;
        }
        puVar10 = local_ac;
        iVar6 = 9;
        goto LAB_00035d7d;
      }
      pcVar18 = &DAT_00046398;
    }
    else {
      pvVar9 = recovered_211fa((int)local_14 * 0x18);
      ppppppppbVar13 = local_20;
      if (pvVar9 != (void *)0x0) {
        puVar10 = (uint *)((int)pvVar9 + 0x14);
        ppppppppbVar13 = local_18 + 5;
        while (bVar4 = ppppppbVar11 != (byte ******)0x0,
              ppppppbVar11 = (byte ******)((int)ppppppbVar11 + -1), local_38 = pvVar9, bVar4) {
          puVar10[-5] = 0;
          puVar10[-4] = 0;
          puVar10[-3] = 0;
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          if (local_18 == (byte ********)0x0) {
LAB_00035d9c:
            recovered_21203((int)local_38);
            goto LAB_00035daa;
          }
          puVar10[-4] = 0;
          puVar10[-2] = 0;
          *puVar10 = 0;
          switch((uintptr_t)(ppppppppbVar13[-5])) {
          case 0x0:
            goto switchD_000357d3_caseD_0;
          case 0x1:
            local_60 = ppppppppbVar13[-4];
            local_28 = (byte *******)0x0;
            pppppppbVar2 = (byte *******)(uintptr_t)pf_float_bits((float)(int)local_60);
            local_2c = local_60;
            break;
          case 0x2:
            pppppppbVar2 = ppppppppbVar13[-3];
            local_3a = in_FPUControlWord | 0xc00;
            local_64 = (byte *******)(int)ROUND(pf_bits_float((uintptr_t)pppppppbVar2));
            local_28 = (byte *******)0x0;
            local_2c = local_64;
            break;
          case 0x3:
            local_28 = ppppppppbVar13[-2];
            if (local_28 == (byte *******)0x0) {
              local_28 = (byte *******)&DAT_0004627c;
            }
            local_2c = (byte *******)0x0;
            goto LAB_0003588f;
          case 0x4:
            pppppppbVar12 = ppppppppbVar13[-1];
            pppppppbVar17 = *ppppppppbVar13;
            local_2c = (byte *******)0x0;
            pppppppbVar2 = (byte *******)0x0;
            local_28 = (byte *******)0x0;
            goto LAB_00035895;
          case 0x5:
            pppppppbVar2 = (byte *******)0x0;
            if (ppppppppbVar13[-4] != (byte *******)0x0) {
              pppppppbVar2 = (byte *******)0x3f800000;
            }
            local_2c = (byte *******)(uint)(ppppppppbVar13[-4] != (byte *******)0x0);
            local_28 = (byte *******)0x0;
            break;
          case 0x6:
            local_2c = ppppppppbVar13[-4];
            local_28 = (byte *******)0x0;
LAB_0003588f:
            pppppppbVar2 = (byte *******)0x0;
            break;
          default:
            recovered_30f0b((uint)local_1c,(char *)local_34,str_0004ad5e);
            goto LAB_00035d9c;
          }
          pppppppbVar12 = (byte *******)0x0;
          pppppppbVar17 = (byte *******)0x0;
LAB_00035895:
          puVar10[-5] = (uint)ppppppppbVar13[-5];
          puVar10[-4] = (uint)local_2c;
          puVar10[-3] = (uint)pppppppbVar2;
          puVar10[-2] = (uint)local_28;
          puVar10[-1] = (uint)pppppppbVar12;
          *puVar10 = (uint)pppppppbVar17;
          local_24 = ppppppppbVar13;
switchD_000357d3_caseD_0:
          puVar10 = puVar10 + 6;
          ppppppppbVar13 = ppppppppbVar13 + 9;
        }
        goto LAB_00035b85;
      }
      recovered_36620((int)local_20,(int)ppppppbVar11);
      recovered_21203((int)ppppppppbVar13);
      pcVar18 = str_000478f7;
    }
    ppppppbVar11 = local_34;
  }
LAB_00035c31:
  param_1 = (byte **)local_1c;
LAB_000355c1:
  recovered_30f0b((uint)param_1,(char *)ppppppbVar11,pcVar18);
  return 0;
}
