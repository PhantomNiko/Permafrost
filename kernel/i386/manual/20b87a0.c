/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fc8a (*(uint8_t *)(0x20cd287U))
#define DAT_0208fcaa (*(uint8_t *)(0x20cd2a7U))
#define local_14 (*(char * *)(frame + 204))
#define local_20 (*(uint (*)[3])(frame + 192))
#define local_24 (*(uint *)(frame + 188))
#define local_26 (*(ushort *)(frame + 186))
#define local_28 (*(ushort *)(frame + 184))
#define local_2a (*(ushort *)(frame + 182))
#define local_30 (*(int *)(frame + 176))
#define local_34 (*(int *)(frame + 172))
#define local_38 (*(int *)(frame + 168))
#define local_3c (*(int *)(frame + 164))
#define local_40 (*(int *)(frame + 160))
#define local_44 (*(int *)(frame + 156))
#define local_48 (*(undefined4 *)(frame + 152))
#define local_4c (*(undefined4 *)(frame + 148))
#define local_50 (*(undefined4 *)(frame + 144))
#define local_54 (*(undefined4 *)(frame + 140))
#define local_58 (*(undefined4 *)(frame + 136))
#define local_5c (*(undefined4 *)(frame + 132))
#define local_60 (*(float *)(frame + 128))
#define local_64 (*(int *)(frame + 124))
#define local_68 (*(ulong *)(frame + 120))
#define local_6c (*(undefined4 *)(frame + 116))
#define local_70 (*(undefined4 *)(frame + 112))
#define local_74 (*(undefined4 *)(frame + 108))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_80 (*(undefined4 *)(frame + 96))
#define local_84 (*(float *)(frame + 92))
#define local_88 (*(int *)(frame + 88))
#define local_8c (*(ulong *)(frame + 84))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_94 (*(undefined4 *)(frame + 76))
#define local_98 (*(undefined4 *)(frame + 72))
#define local_9c (*(undefined4 *)(frame + 68))
#define local_a0 (*(undefined4 *)(frame + 64))
#define local_a4 (*(undefined4 *)(frame + 60))
#define local_a8 (*(float *)(frame + 56))
#define local_ac (*(int *)(frame + 52))
#define local_b0 (*(ulong *)(frame + 48))
#define str_0208fcac (*(char (*)[1])(0x20cd2a9U))
#define str_0208fce2 (*(char (*)[1])(0x20cd2dfU))
#define str_0208fd05 (*(char (*)[1])(0x20cd302U))
#define str_02097270 (*(char (*)[1])(0x20d56ffU))
#define token (*(char * *)(frame + 24))
undefined4 recovered_20b87a0(int *incoming_ecx,uint *incoming_edx,int param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  float fVar2;
  uchar uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong incoming_edx_00;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  uint extraout_EDX_02 = 0;
  uint incoming_edx_02;
  uint incoming_edx_03;
  char cVar7;
  ushort uVar8;
  byte *pbVar9;
  ushort in_FPUControlWord = pf_fpu_control();
  ulonglong uVar10;
  char *pcVar11;

  local_20[0] = 0;
  local_24 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0.0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0.0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_8c = 1;
  local_88 = 1;
  local_84 = 1.0;
  if ((param_3 == 0 || (incoming_edx == (uint *)0x0 || incoming_ecx == (int *)0x0)) ||
     (*incoming_edx < 6)) {
LAB_02086259:
    pf_varargs_204ff60___(incoming_ecx,&DAT_0208fc8a,str_0208fcac);
    return 0;
  }
  pcVar11 = *(char **)(incoming_edx[2] + 4);
  if (((pcVar11 == (char *)0x0) || (cVar7 = *pcVar11, cVar7 == '\0')) ||
     (((uVar8 = CONCAT11(cVar7,cVar7) & 0xdfff, cVar7 = (char)uVar8,
       0x19 < (byte)((char)(uVar8 >> 8) + 0xbfU) && (cVar7 != '_')) && (cVar7 != '$'))))
  goto LAB_02086259;
  bVar1 = pcVar11[1];
  if (bVar1 != 0) {
    pbVar9 = (byte *)(pcVar11 + 2);
    do {
      if (((bVar1 != 0x2e) && (bVar1 != 0x24)) &&
         ((bVar1 != 0x5f && ((9 < (byte)(bVar1 - 0x30U) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))))))
         ) goto LAB_02086259;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
  }
  iVar4 = recovered_20022a0(*(char **)(incoming_edx[2] + 8),&DAT_0208fcaa);
  if ((iVar4 != 0) ||
     (uVar5 = recovered_207dc70(incoming_edx,3,0x20cd01aU,local_20), (char)uVar5 == '\0'))
  goto LAB_02086259;
  uVar3 = recovered_207de10((long)incoming_ecx,incoming_edx,3,local_20[0],&local_b0);
  incoming_edx_01 = extraout_EDX;
  if (uVar3 != '\0') {
    uVar5 = recovered_207dc70(incoming_edx,local_20[0] + 1,0x20cd01aU,&local_24);
    local_14 = (char *)(local_20[0] + 1);
    if ((char)uVar5 == '\0') {
      puVar6 = &local_68;
    }
    else {
      uVar3 = recovered_207de10((long)incoming_ecx,incoming_edx,(ulong)local_14,local_24,&local_68);
      incoming_edx_01 = extraout_EDX_00;
      if (uVar3 == '\0') goto LAB_020863d3;
      local_14 = (char *)(local_24 + 1);
      puVar6 = &local_8c;
    }
    uVar3 = recovered_207de10((long)incoming_ecx,incoming_edx,(ulong)local_14,*incoming_edx,puVar6);
    incoming_edx_01 = extraout_EDX_01;
    if (uVar3 != '\0') {
      if (((((local_b0 < 6) && ((0x26U >> (local_b0 & 0x1f) & 1) != 0)) && (local_68 < 6)) &&
          (((0x26U >> (local_68 & 0x1f) & 1) != 0 && (local_8c < 6)))) &&
         ((0x26U >> (local_8c & 0x1f) & 1) != 0)) {
        local_14 = *(char **)(incoming_edx[2] + 4);
        incoming_edx_00 = recovered_2002270(local_14);
        uVar10 = recovered_2074810(local_14,incoming_edx_00);
        incoming_edx_01 = (uint)(uVar10 >> 0x20);
        *(int *)(param_3 + 0x1c) = (int)uVar10;
        if ((int)uVar10 != 0) {
          if ((local_b0 - 5 < 2) || (local_b0 == 1)) {
            local_44 = local_ac;
            fVar2 = (float)local_ac;
          }
          else {
            fVar2 = 0.0;
            if (local_b0 == 2) {
              fVar2 = local_a8;
            }
          }
          local_2a = in_FPUControlWord | 0xc00;
          local_40 = (int)ROUND(fVar2);
          *(int *)(param_3 + 0x20) = local_40;
          if ((local_68 - 5 < 2) || (local_68 == 1)) {
            local_3c = local_64;
            fVar2 = (float)local_64;
          }
          else {
            fVar2 = 0.0;
            if (local_68 == 2) {
              fVar2 = local_60;
            }
          }
          local_28 = in_FPUControlWord | 0xc00;
          local_38 = (int)ROUND(fVar2);
          *(int *)(param_3 + 0x24) = local_38;
          if ((local_8c - 5 < 2) || (local_8c == 1)) {
            local_34 = local_88;
            fVar2 = (float)local_88;
          }
          else {
            fVar2 = 0.0;
            if (local_8c == 2) {
              fVar2 = local_84;
            }
          }
          local_26 = in_FPUControlWord | 0xc00;
          local_30 = (int)ROUND(fVar2);
          *(int *)(param_3 + 0x28) = local_30;
          if (local_30 != 0) {
            *(undefined2 *)(param_3 + 0x18) = 1;
            uVar5 = CONCAT31((int3)((uint)incoming_edx >> 8),1);
            goto LAB_020863d5;
          }
          pcVar11 = str_0208fd05;
          goto LAB_020863c5;
        }
        pcVar11 = str_02097270;
        token = *(char **)(incoming_edx[2] + 4);
      }
      else {
        pcVar11 = str_0208fce2;
LAB_020863c5:
        token = &DAT_0208fc8a;
      }
      pf_varargs_204ff60___(incoming_ecx,token,pcVar11);
      incoming_edx_01 = extraout_EDX_02;
    }
  }
LAB_020863d3:
  uVar5 = 0;
LAB_020863d5:
  recovered_2043a90(&local_b0,incoming_edx_01);
  recovered_2043a90(&local_68,incoming_edx_02);
  recovered_2043a90(&local_8c,incoming_edx_03);
  return uVar5;
}
