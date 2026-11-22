/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a2e68 (*(uint8_t *)(0x20ec75dU))
#define DAT_020a40e0 (*(uint8_t *)(0x20f48a1U))
#define DAT_020a40e3 (*(uint8_t *)(0x20f48a4U))
#define DAT_020a40e6 (*(uint8_t *)(0x20f48a7U))
#define DAT_020a40e9 (*(uint8_t *)(0x20f48aaU))
#define DAT_020a40eb (*(uint8_t *)(0x20f48acU))
#define DAT_020a40ed (*(uint8_t *)(0x20f48aeU))
#define DAT_020a40f0 (*(uint8_t *)(0x20f48b1U))
#define DAT_020a40f3 (*(uint8_t *)(0x20f48b4U))
#define DAT_020a40f5 (*(uint8_t *)(0x20f3f5aU))
#define DAT_020a40f7 (*(uint8_t *)(0x20f3995U))
#define DAT_020a40f9 (*(uint8_t *)(0x20f3d4cU))
#define DAT_020a40fb (*(uint8_t *)(0x20f48b6U))
#define DAT_020a40fd (*(uint8_t *)(0x20f48b8U))
#define local_38 (*(undefined8 * *)(frame + 56))
#define local_40 (*(ulong *)(frame + 48))
#define local_48 (*(uint * *)(frame + 40))
#define local_58 (*(ulong (*)[2])(frame + 24))
#define str_020ab1db (*(char (*)[1])(0x20fc856U))
#define str_020ab205 (*(char (*)[1])(0x20fc880U))
#define str_020ab22d (*(char (*)[1])(0x20fc8a8U))
#define str_020ab252 (*(char (*)[1])(0x20fc8cdU))
#define str_020ab263 (*(char (*)[1])(0x20fc8deU))
#define str_020ab28b (*(char (*)[1])(0x20fc906U))
uint recovered_20a25e0(int *param_1,byte *param_2,uint *param_3,uint *param_4,undefined8 *param_5,
                      undefined8 in_R9)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uchar uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *text;
  ulong uVar7;
  ulong uVar8;
  void *out;
  char *pcVar9;
  float fVar10;
  float fVar11;

  if (param_5 == (undefined8 *)0x0 || (param_4 == (uint *)0x0 || param_3 == (uint *)0x0)) {
    return 0;
  }
  local_38 = param_5;
  iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f3);
  if (iVar4 == 0) {
    uVar5 = *param_3;
    if ((uVar5 == 3) || (uVar6 = *param_4, uVar6 == 3)) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_48 = (uint *)0x0;
      uVar2 = recovered_20a8f50((int *)param_3,(long *)local_58,0);
      if (uVar2 == '\0') {
        recovered_2000bb0(local_48);
LAB_020650cf:
        text = (uint *)0x0;
      }
      else {
        text = local_48;
        if (local_48 == (uint *)0x0) {
          text = recovered_2000ad0(1);
          if (text == (uint *)0x0) goto LAB_020650cf;
          *(undefined1 *)text = 0;
        }
        local_58[0] = 0;
        local_58[1] = 0;
        local_48 = (uint *)0x0;
        uVar2 = recovered_20a8f50((int *)param_4,(long *)local_58,0);
        if (uVar2 != '\0') {
          param_4 = local_48;
          if (local_48 == (uint *)0x0) {
            param_4 = recovered_2000ad0(1);
            if (param_4 == (uint *)0x0) goto LAB_020651d2;
            *(undefined1 *)param_4 = 0;
          }
          uVar7 = recovered_2002e80((char *)text);
          uVar8 = recovered_2002e80((char *)param_4);
          local_40 = uVar7;
          out = recovered_2000ad0(uVar8 + uVar7 + 1);
          uVar7 = local_40;
          if (out == (void *)0x0) {
            recovered_2000bb0(text);
            recovered_2000bb0(param_4);
            pcVar9 = str_020ab1db;
            goto LAB_020651eb;
          }
          recovered_2001410(out,text,local_40);
          recovered_2001410((void *)((long)out + uVar7),param_4,uVar8 + 1);
          puVar1 = local_38;
          recovered_205ec00(local_38);
          *puVar1 = 3;
          puVar1[2] = out;
          recovered_2000bb0(text);
          recovered_2000bb0(param_4);
          goto LAB_02065454;
        }
        recovered_2000bb0(local_48);
      }
LAB_020651d2:
      recovered_2000bb0(text);
      recovered_2000bb0((void *)0x0);
      pcVar9 = str_020ab1db;
    }
    else {
      if ((((uVar5 < 6) && ((0x26U >> (uVar5 & 0x1f) & 1) != 0)) && (uVar6 < 6)) &&
         ((0x26U >> (uVar6 & 0x1f) & 1) != 0)) {
        if (uVar5 == 2) {
          fVar11 = pf_bits_float((uint32_t)param_3[2]);
          if ((uVar6 == 1) || (uVar6 == 5)) {
            fVar10 = (float)(int)param_4[1];
          }
          else {
            fVar10 = 0.0;
            if (uVar6 == 2) goto LAB_020653f9;
          }
LAB_020653ff:
          fVar11 = fVar11 + fVar10;
          iVar4 = (int)fVar11;
          *(undefined4 *)local_38 = 2;
        }
        else {
          if (uVar6 == 2) {
            if ((uVar5 == 1) || (uVar5 == 5)) {
              fVar11 = (float)(int)param_3[1];
            }
            else {
              fVar11 = 0.0;
              if (uVar5 == 2) {
                fVar11 = pf_bits_float((uint32_t)param_3[2]);
              }
            }
LAB_020653f9:
            fVar10 = pf_bits_float((uint32_t)param_4[2]);
            goto LAB_020653ff;
          }
          iVar4 = param_4[1] + param_3[1];
          fVar11 = (float)iVar4;
          *(undefined4 *)local_38 = 1;
        }
        *(int *)((long)local_38 + 4) = iVar4;
        *(float *)(local_38 + 1) = fVar11;
        local_38[2] = 0;
        local_38[3] = 0;
        local_38[4] = 0;
        local_38[5] = 0;
        local_38[6] = 0;
        local_38[7] = 0;
        goto LAB_02065454;
      }
      pcVar9 = str_020ab205;
    }
LAB_020651eb:
    uVar5 = 0;
    pf_varargs_205eb00___(param_1,(char *)param_2,pcVar9);
  }
  else {
    iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f5);
    if (((((iVar4 == 0) || (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f7), iVar4 == 0))
         || (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a2e68), iVar4 == 0)) ||
        ((iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f9), iVar4 == 0 ||
         (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40fb), iVar4 == 0)))) ||
       (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40fd), iVar4 == 0)) {
      uVar5 = *param_3;
      if (((5 < uVar5) || ((0x26U >> (uVar5 & 0x1f) & 1) == 0)) ||
         ((uVar6 = *param_4, 5 < uVar6 || ((0x26U >> (uVar6 & 0x1f) & 1) == 0)))) {
        pcVar9 = str_020ab22d;
LAB_02065020:
        uVar5 = 0;
LAB_02065023:
        pf_varargs_205eb00__8_(param_1,(char *)param_2,pcVar9,(ulonglong)param_2);
        return uVar5;
      }
      if ((uVar5 == 1) || (uVar5 == 5)) {
        fVar11 = (float)(int)param_3[1];
      }
      else {
        fVar11 = 0.0;
        if (uVar5 == 2) {
          fVar11 = pf_bits_float((uint32_t)param_3[2]);
        }
      }
      if ((uVar6 == 1) || (uVar6 == 5)) {
        fVar10 = (float)(int)param_4[1];
LAB_0206506b:
        local_40 = CONCAT44(PF_PART4(local_40, 4),fVar10);
      }
      else {
        local_40 = local_40 & 0xffffffff00000000;
        if (uVar6 == 2) {
          fVar10 = pf_bits_float((uint32_t)param_4[2]);
          goto LAB_0206506b;
        }
      }
      iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a2e68);
      if (((iVar4 == 0) || (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f9), iVar4 == 0))
         || (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40fb), iVar4 == 0)) {
        if ((pf_bits_float((uint32_t)local_40) == 0.0) && (!NAN(pf_bits_float((uint32_t)local_40)))) {
          pcVar9 = str_020ab252;
          goto LAB_020651eb;
        }
      }
      iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40fd);
      if (iVar4 == 0) {
        fVar11 = recovered_20041d0(fVar11,pf_bits_float((uint32_t)local_40));
      }
      else {
        iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f9);
        if (iVar4 == 0) {
          uVar5 = (uint)(fVar11 / pf_bits_float((uint32_t)local_40));
LAB_02065230:
          fVar11 = (float)(int)uVar5;
          *(undefined4 *)local_38 = 1;
          goto LAB_0206543d;
        }
        iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a2e68);
        if (iVar4 == 0) {
          fVar11 = fVar11 / pf_bits_float((uint32_t)local_40);
        }
        else {
          if ((*param_3 != 2) && (*param_4 != 2)) {
            iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f5);
            if (iVar4 != 0) {
              iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f7);
              uVar5 = param_3[1];
              uVar6 = param_4[1];
              *(undefined4 *)local_38 = 1;
              if (iVar4 == 0) {
                iVar4 = uVar6 * uVar5;
                *(int *)((long)local_38 + 4) = iVar4;
              }
              else {
                iVar4 = (int)uVar5 % (int)uVar6;
                *(int *)((long)local_38 + 4) = iVar4;
              }
              *(float *)(local_38 + 1) = (float)iVar4;
              local_38[2] = 0;
              local_38[3] = 0;
              local_38[4] = 0;
              local_38[5] = 0;
              local_38[6] = 0;
              local_38[7] = 0;
              goto LAB_02065454;
            }
            uVar5 = param_3[1] - param_4[1];
            goto LAB_02065230;
          }
          iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f5);
          if (iVar4 == 0) {
            fVar11 = fVar11 - pf_bits_float((uint32_t)local_40);
          }
          else {
            iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f7);
            if (iVar4 == 0) {
              fVar11 = fVar11 * pf_bits_float((uint32_t)local_40);
            }
            else {
              fVar11 = recovered_2003fd0(fVar11,pf_bits_float((uint32_t)local_40));
            }
          }
        }
      }
      uVar5 = (uint)fVar11;
      *(undefined4 *)local_38 = 2;
    }
    else {
      iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e0);
      if (((iVar4 != 0) && (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e3), iVar4 != 0))
         && (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e6), iVar4 != 0)) {
        iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e9);
        if (((iVar4 != 0) && (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40eb), iVar4 != 0))
           && ((iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40ed), iVar4 != 0 &&
               (iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40f0), iVar4 != 0)))) {
          pcVar9 = str_020ab28b;
          goto LAB_02065020;
        }
        local_58[0] = local_58[0] & 0xffffffff00000000;
        uVar5 = recovered_20bf8d0((int *)param_3,param_4,(undefined4 *)local_58);
        if ((char)uVar5 == '\0') {
          pcVar9 = str_020ab263;
          goto LAB_02065023;
        }
        iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e9);
        if (iVar4 == 0) {
          uVar6 = (uint)local_58[0] >> 0x1f;
          if ((int)(uint)local_58[0] < 0) goto LAB_020654c9;
LAB_020654b9:
          fVar11 = 0.0;
        }
        else {
          iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40eb);
          if (iVar4 != 0) {
            iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40ed);
            *(undefined4 *)local_38 = 5;
            if (iVar4 == 0) {
              uVar6 = (uint)((int)(uint)local_58[0] < 1);
              if ((int)(uint)local_58[0] < 1) goto LAB_020654ea;
            }
            else {
              uVar6 = (uint)(-1 < (int)(uint)local_58[0]);
              if (-1 < (int)(uint)local_58[0]) {
LAB_020654ea:
                fVar11 = DAT_020a1570;
                goto LAB_020654f2;
              }
            }
            fVar11 = 0.0;
            goto LAB_020654f2;
          }
          uVar6 = (uint)(0 < (int)(uint)local_58[0]);
          if ((int)(uint)local_58[0] < 1) goto LAB_020654b9;
LAB_020654c9:
          fVar11 = DAT_020a1570;
        }
        *(undefined4 *)local_38 = 5;
LAB_020654f2:
        *(uint *)((long)local_38 + 4) = uVar6;
        *(float *)(local_38 + 1) = fVar11;
        local_38[2] = 0;
        local_38[3] = 0;
        local_38[4] = 0;
        local_38[5] = 0;
        local_38[6] = 0;
        local_38[7] = 0;
        return uVar5;
      }
      uVar5 = recovered_20a9b70(param_3,param_4);
      iVar4 = recovered_2002eb0((char *)param_2,&DAT_020a40e0);
      bVar3 = iVar4 != 0 ^ (byte)uVar5;
      uVar5 = (uint)bVar3;
      if (bVar3 == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = DAT_020a1570;
      }
      *(undefined4 *)local_38 = 5;
    }
LAB_0206543d:
    *(uint *)((long)local_38 + 4) = uVar5;
    *(float *)(local_38 + 1) = fVar11;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
LAB_02065454:
    uVar5 = (uint)CONCAT71((int7)((ulong)param_4 >> 8),1);
  }
  return uVar5;
}
