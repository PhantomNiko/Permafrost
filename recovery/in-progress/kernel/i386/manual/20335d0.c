/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c5577 (*(uint8_t *)(0x20c5577U))
#define DAT_020c748d (*(uint8_t *)(0x20c748dU))
#define DAT_020cc214 (*(uint8_t *)(0x20cc214U))
#define DAT_020cc259 (*(uint8_t *)(0x20cc259U))
#define DAT_020cc323 (*(uint8_t *)(0x20cc323U))
#define DAT_020cc336 (*(uint8_t *)(0x20cc336U))
#define DAT_020cc344 (*(uint8_t *)(0x20cc344U))
#define DAT_020cc347 (*(uint8_t *)(0x20cc347U))
#define DAT_020cc34a (*(uint8_t *)(0x20cc34aU))
#define DAT_020cc355 (*(uint8_t *)(0x20cc355U))
#define DAT_020cc358 (*(uint8_t *)(0x20cc358U))
#define DAT_020cc533 (*(uint8_t *)(0x20cc533U))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6b (*(uint8_t volatile *)(0x20d9d6bU))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define str_020c4cf0 (*(char (*)[1])(0x20c4cf0U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc1dc (*(char (*)[1])(0x20cc1dcU))
#define str_020cc217 (*(char (*)[1])(0x20cc217U))
#define str_020cc23d (*(char (*)[1])(0x20cc23dU))
#define str_020cc25c (*(char (*)[1])(0x20cc25cU))
#define str_020cc263 (*(char (*)[1])(0x20cc263U))
#define str_020cc26e (*(char (*)[1])(0x20cc26eU))
#define str_020cc294 (*(char (*)[1])(0x20cc294U))
#define str_020cc2b1 (*(char (*)[1])(0x20cc2b1U))
#define str_020cc2c5 (*(char (*)[1])(0x20cc2c5U))
#define str_020cc2dc (*(char (*)[1])(0x20cc2dcU))
#define str_020cc2ee (*(char (*)[1])(0x20cc2eeU))
#define str_020cc30b (*(char (*)[1])(0x20cc30bU))
#define str_020cc328 (*(char (*)[1])(0x20cc328U))
#define str_020cc32e (*(char (*)[1])(0x20cc32eU))
#define str_020cc33a (*(char (*)[1])(0x20cc33aU))
#define str_020cc34d (*(char (*)[1])(0x20cc34dU))
#define str_020cc51e (*(char (*)[1])(0x20cc51eU))
#define str_020cc527 (*(char (*)[1])(0x20cc527U))
#define str_020cc535 (*(char (*)[1])(0x20cc535U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define str_020de0ec (*(char volatile (*)[1])(0x20de0ecU))
#define local_60c (*(int *)(frame + 3956))
#define local_5f8 (*(char (*)[241])(frame + 3976))
#define abStack_235 (*(byte (*)[5])(frame + 4939))
#define local_507 (*(char (*)[241])(frame + 4217))
#define local_416 (*(char (*)[241])(frame + 4458))
#define local_325 (*(char (*)[240])(frame + 4699))
#define local_230 (*(char *)(frame + 4944))
#define local_22f (*(char *)(frame + 4945))
#define local_22e (*(char *)(frame + 4946))
#define local_34 (*(uint *)(frame + 5452))
#define local_30 (*(uint *)(frame + 5456))
#define local_27 (*(char (*)[3])(frame + 5465))
#define local_24 (*(uint * *)(frame + 5468))
#define local_20 (*(uint *)(frame + 5472))
#define local_1c (*(uint *)(frame + 5476))
#define local_18 (*(uint * *)(frame + 5480))
#define local_14 (*(char * *)(frame + 5484))
#define in_stack_ffffeab4 (*(uint *)(frame + 52))
#define local_1540 (*(char (*)[1928])(frame + 64))
#define local_db8 (*(char (*)[384])(frame + 1992))
#define local_c38 (*(char (*)[64])(frame + 2376))
#define local_bf8 (*(byte (*)[512])(frame + 2440))
#define local_9f8 (*(char (*)[512])(frame + 2952))
#define local_7f8 (*(char (*)[492])(frame + 3464))


int recovered_20335d0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[5536] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  char *pcVar18;

  local_14 = in_EDX;
  recovered_2001b70(local_5f8,str_020c4cf0,0xf1);
  pf_varargs_20044f0__4_(local_325,0xf1,&DAT_020c5119,0x20d9e14);
  local_18 = (uint *)0x0;
  local_20 = 0;
LAB_0203362a:
  local_1c = local_20;
  if (local_20 < 9) {
    local_1c = 8;
  }
LAB_02033655:
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  local_416[0] = '\0';
  bVar2 = *in_ECX;
  uVar12 = (uint)bVar2;
  if ((uVar12 != 0x22) && (uVar12 != 0x27)) {
    if (uVar12 != 0) {
      uVar14 = uVar12;
      uVar12 = 0;
      goto joined_r0x02033693;
    }
LAB_02033c03:
    puVar7 = local_18;
    if (local_18 == (uint *)0x0) {
      puVar7 = recovered_2001650(0x8264);
      pcVar6 = local_14;
      if (puVar7 == (uint *)0x0) {
        if (param_3 == 0 || local_14 == (char *)0x0) goto LAB_0203484e;
        if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
          (pcVar6 + uVar11)[0] = '\n';
          (pcVar6 + uVar11)[1] = '\0';
        }
        uVar11 = recovered_2002270(pcVar6);
        if (param_3 <= uVar11 + 1) goto LAB_0203484e;
        pcVar6 = pcVar6 + uVar11;
        cVar13 = 'm';
        iVar5 = 0;
        goto LAB_02034830;
      }
      recovered_2001e00(puVar7,0,0x8264);
    }
    local_18 = puVar7;
    uVar8 = recovered_205dfd0(local_5f8,(char *)(puVar7 + 2),&local_34);
    if (((char)uVar8 == '\0') && (iVar5 = recovered_20022a0(local_5f8,str_020cc2dc), iVar5 == 0)) {
      pf_varargs_20044f0__4_(local_5f8,0xf1,&DAT_020c5119,0x20cc2e5);
    }
    uVar8 = recovered_205dfd0(local_5f8,(char *)(puVar7 + 2),&local_34);
    pcVar6 = local_14;
    puVar7 = local_18;
    if ((byte)(local_34 == 0 | local_30 == 0 | (byte)uVar8 ^ 1) != 1) {
      *local_18 = local_34;
      local_18[1] = local_30;
      recovered_2072620((int)local_18,&DAT_020cc323,&DAT_020c5577,0,'\0','\0');
      recovered_2072620((int)puVar7,str_020cc328,str_020cc32e,0,'\0','\0');
      recovered_2072620((int)puVar7,&DAT_020cc336,str_020cc33a,0,'\0','\0');
      recovered_2072620((int)puVar7,&DAT_020cc344,str_020cc33a,0,'\0','\0');
      pcVar6 = (char *)0x0;
      recovered_2072620((int)puVar7,&DAT_020cc347,&DAT_020cc34a,0,'\0','\0');
      uVar12 = *puVar7;
      uVar14 = puVar7[1];
      if (uVar14 == 0 || uVar12 == 0) goto LAB_02034292;
      local_24 = puVar7 + 0x154c;
      local_1c = 0;
      goto LAB_02033e80;
    }
    if (param_3 == 0 || local_14 == (char *)0x0) goto LAB_02033d2e;
    if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
      (pcVar6 + uVar11)[0] = '\n';
      (pcVar6 + uVar11)[1] = '\0';
    }
    uVar11 = recovered_2002270(pcVar6);
    if (param_3 <= uVar11 + 1) goto LAB_02033d2e;
    cVar13 = 'm';
    iVar5 = 0;
    goto LAB_02033d10;
  }
  bVar2 = in_ECX[1];
  uVar14 = (uint)bVar2;
  in_ECX = in_ECX + 1;
joined_r0x02033693:
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    in_ECX = in_ECX + 1;
    uVar4 = 0;
    do {
      if (uVar12 == 0) {
        if ((uVar14 - 9 < 0x18) && ((0x80001fU >> (uVar14 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar12 == (int)(char)uVar14) goto LAB_02033711;
      if (uVar4 + 1 < 0xf1) {
        local_416[uVar4] = (char)uVar14;
        uVar4 = uVar4 + 1;
      }
      bVar2 = *in_ECX;
      uVar14 = (uint)bVar2;
      in_ECX = in_ECX + 1;
    } while (bVar2 != 0);
    in_ECX = in_ECX + -1;
  }
LAB_02033711:
  local_416[uVar4] = '\0';
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  if (uVar4 == 0) goto LAB_02033c03;
  iVar5 = recovered_20022a0(local_416,str_020c7213);
  if ((iVar5 == 0) || (iVar5 = recovered_20022a0(local_416,&DAT_020c748d), iVar5 == 0)) {
    pcVar6 = local_14;
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
      (pcVar6 + uVar11)[0] = '\n';
      (pcVar6 + uVar11)[1] = '\0';
    }
    uVar11 = recovered_2002270(pcVar6);
    if (param_3 <= uVar11 + 1) {
      return 1;
    }
    cVar13 = 'u';
    iVar5 = 0;
    goto LAB_02033be0;
  }
  iVar5 = recovered_20022a0(local_416,&DAT_020cc214);
  if (iVar5 == 0) {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    abStack_235[1] = 0;
    bVar2 = *in_ECX;
    uVar12 = (uint)bVar2;
    if ((uVar12 != 0x22) && (uVar12 != 0x27)) {
      if (uVar12 != 0) {
        uVar14 = uVar12;
        uVar12 = 0;
        goto joined_r0x020338ab;
      }
LAB_0203432b:
      pcVar6 = local_14;
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
        (pcVar6 + uVar11)[0] = '\n';
        (pcVar6 + uVar11)[1] = '\0';
      }
      uVar11 = recovered_2002270(pcVar6);
      if (param_3 <= uVar11 + 1) {
        return 0;
      }
      cVar13 = 'm';
      iVar5 = 0;
      goto LAB_02034390;
    }
    bVar2 = in_ECX[1];
    uVar14 = (uint)bVar2;
    in_ECX = in_ECX + 1;
joined_r0x020338ab:
    if (bVar2 == 0) {
      uVar4 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar4 = 0;
      do {
        if (uVar12 == 0) {
          if ((uVar14 - 9 < 0x18) && ((0x80001fU >> (uVar14 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar12 == (int)(char)(byte)uVar14) goto LAB_020339d7;
        if (uVar4 + 1 < 0xf1) {
          abStack_235[uVar4 + 1] = (byte)uVar14;
          uVar4 = uVar4 + 1;
        }
        bVar2 = *in_ECX;
        uVar14 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_020339d7:
    abStack_235[uVar4 + 1] = 0;
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar4 == 0) goto LAB_0203432b;
    recovered_2030400((char *)(abStack_235 + 1),str_020d9e14,(char *)local_bf8);
    uVar12 = recovered_2030680((char *)local_bf8,local_7f8);
    if (((char)uVar12 == '\0') || ((local_60c != 2 && ((local_7f8[0x1e8] & 2U) == 0)))) {
      pf_varargs_202ecc0__4_(local_14,param_3,str_020cc23d,(uint)local_bf8);
      pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)local_325);
      return 0;
    }
    pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)local_bf8);
    cVar13 = DAT_020d9d6a;
    if (cVar13 == '\x01') {
      cVar13 = DAT_020d9f05;
      pcVar10 = str_020cc51e;
      if (cVar13 != '\0') {
        pcVar10 = &DAT_020d9f05;
      }
      pcVar6 = &DAT_020cc533;
      cVar13 = DAT_020d9d6b;
      if (cVar13 == '\0') {
        pcVar6 = &DAT_020c5084;
      }
      pcVar18 = str_020cc527;
    }
    else {
      cVar13 = str_020d9e14[0];
      pcVar6 = &DAT_020c5359;
      if (cVar13 != '\0') {
        pcVar6 = str_020d9e14;
      }
      cVar13 = DAT_020d9db4;
      pcVar10 = &DAT_020c531e;
      if (cVar13 != '\0') {
        pcVar10 = &DAT_020d9db4;
      }
      pcVar18 = str_020cc535;
    }
    pf_varargs_20044f0__4__4_(str_020de0ec,0x60,pcVar18,(uint)pcVar10,(uint)pcVar6);
    goto LAB_02033655;
  }
  iVar5 = recovered_20022a0(local_416,&DAT_020cc259);
  if (((iVar5 == 0) || (iVar5 = recovered_20022a0(local_416,str_020cc25c), iVar5 == 0)) ||
     (iVar5 = recovered_20022a0(local_416,str_020cc263), iVar5 == 0)) {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    local_5f8[0] = '\0';
    uVar12 = (uint)*in_ECX;
    if ((uVar12 == 0x22) || (uVar12 == 0x27)) {
      pbVar17 = in_ECX + 1;
      uVar4 = (uint)*pbVar17;
      in_ECX = in_ECX + 1;
      uVar14 = uVar12;
      if (*pbVar17 == 0) goto LAB_02033865;
LAB_020338c9:
      in_ECX = in_ECX + 1;
      uVar12 = 0;
      do {
        if (uVar14 == 0) {
          if ((uVar4 - 9 < 0x18) && ((0x80001fU >> (uVar4 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar14 == (int)(char)uVar4) goto LAB_02033931;
        if (uVar12 + 1 < 0xf1) {
          local_5f8[uVar12] = (char)uVar4;
          uVar12 = uVar12 + 1;
        }
        bVar2 = *in_ECX;
        uVar4 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
LAB_02033931:
      local_5f8[uVar12] = '\0';
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
      if (uVar12 != 0) goto LAB_02033655;
    }
    else if (uVar12 != 0) {
      uVar14 = 0;
      uVar4 = uVar12;
      if (*in_ECX != 0) goto LAB_020338c9;
LAB_02033865:
      uVar12 = 0;
      goto LAB_02033931;
    }
    pcVar6 = local_14;
    if (param_3 == 0 || local_14 == (char *)0x0) goto LAB_0203484e;
    if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
      (pcVar6 + uVar11)[0] = '\n';
      (pcVar6 + uVar11)[1] = '\0';
    }
    uVar11 = recovered_2002270(pcVar6);
    if (param_3 <= uVar11 + 1) goto LAB_0203484e;
    pcVar6 = pcVar6 + uVar11;
    cVar13 = 'm';
    iVar5 = 0;
    goto LAB_02033da0;
  }
  if ((local_416[0] == '-') && (local_416[1] != '\0')) {
    pf_varargs_202ecc0__4_(local_14,param_3,str_020cc294,(uint)local_416);
    goto LAB_0203484e;
  }
  pcVar6 = recovered_20024f0(local_416,'=');
  if (pcVar6 == (char *)0x0) {
    if (local_20 == local_1c) {
      recovered_202dd30(local_14,param_3,str_020cc2c5);
      if (local_18 != (uint *)0x0) {
        recovered_2001710(local_18);
      }
      pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)local_325);
      recovered_2035170();
      return 0;
    }
    iVar5 = local_20 * 0xf1;
    local_20 = local_20 + 1;
    pf_varargs_20044f0__4_(local_1540 + iVar5,0xf1,&DAT_020c5119,(uint)local_416);
    goto LAB_02033655;
  }
  if (local_18 == (uint *)0x0) {
    puVar7 = recovered_2001650(0x8264);
    if (puVar7 == (uint *)0x0) goto LAB_02034987;
    local_18 = puVar7;
    recovered_2001e00(puVar7,0,0x8264);
  }
  pf_varargs_20044f0__4_(local_7f8,0x200,&DAT_020c5119,(uint)local_416);
  bVar3 = recovered_2072420(local_7f8,(char *)local_bf8,(char *)(abStack_235 + 1),local_9f8);
  if (bVar3) {
    recovered_2072620((int)local_18,(char *)local_bf8,(char *)(abStack_235 + 1),0,'\0','\x01');
  }
  goto LAB_0203362a;
  while (uVar12 = iVar5 + uVar11 + 2, iVar5 = iVar9, uVar12 < param_3) {
LAB_02034830:
    pcVar6[iVar5] = cVar13;
    cVar13 = str_020cc2b1[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
  }
  goto LAB_0203484a;
  while (uVar12 = iVar5 + uVar11 + 2, iVar5 = iVar9, uVar12 < param_3) {
LAB_02033d10:
    pcVar6[iVar5 + uVar11] = cVar13;
    cVar13 = str_020cc2ee[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
  }
  pcVar6[iVar9 + uVar11] = '\0';
LAB_02033d2e:
  recovered_2001710(local_18);
  goto LAB_0203484e;
LAB_02034987:
  if (param_3 == 0 || local_14 == (char *)0x0) goto LAB_0203484e;
  if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
    (local_14 + uVar11)[0] = '\n';
    (local_14 + uVar11)[1] = '\0';
  }
  uVar11 = recovered_2002270(local_14);
  if (param_3 <= uVar11 + 1) goto LAB_0203484e;
  pcVar6 = local_14 + uVar11;
  cVar13 = 'm';
  iVar5 = 0;
  do {
    pcVar6[iVar5] = cVar13;
    cVar13 = str_020cc2b1[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
    uVar12 = iVar5 + uVar11 + 2;
    iVar5 = iVar9;
  } while (uVar12 < param_3);
  goto LAB_0203484a;
LAB_0203426e:
  puVar7 = local_18;
  while ((uVar12 = *puVar7, uVar12 != 0 && (uVar14 = puVar7[1], local_1c < uVar14))) {
LAB_02033e80:
    local_7f8[0] = '\0';
    uVar15 = 0;
    uVar4 = local_1c;
    do {
      uVar16 = uVar4;
      cVar13 = *(char *)(uVar12 + uVar16);
      if (cVar13 != '\r') {
        if (cVar13 == '\n') break;
        if (uVar15 + 1 < 0x200) {
          local_7f8[uVar15] = cVar13;
          uVar15 = uVar15 + 1;
        }
      }
      uVar4 = uVar16 + 1;
    } while (uVar16 + 1 < uVar14);
    local_7f8[uVar15] = '\0';
    pcVar6 = local_7f8;
    pbVar17 = abStack_235 + 1;
    pf_varargs_20044f0__4_((char *)pbVar17,0x200,&DAT_020c5119,(uint)pcVar6);
    iVar5 = 0;
    while (((uint)(abStack_235[iVar5 + 1]) - 9 < 5 || (abStack_235[iVar5 + 1] == 0x20))) {
      iVar5 = iVar5 + 1;
    }
    local_1c = uVar16 + 1;
    if (iVar5 != 0) {
      uVar11 = recovered_2002270((char *)(abStack_235 + iVar5 + 1));
      recovered_2001c30(pbVar17,abStack_235 + iVar5 + 1,uVar11 + 1);
    }
    uVar11 = recovered_2002270((char *)pbVar17);
    puVar7 = local_18;
    for (; (uVar11 != 0 && (((uint)(abStack_235[uVar11]) - 9 < 5 || (abStack_235[uVar11] == 0x20))));
        uVar11 = uVar11 - 1) {
      abStack_235[uVar11] = 0;
    }
    if (abStack_235[1] < 0x23) {
      if ((abStack_235[1] != 0) && (abStack_235[1] != 9)) goto LAB_020341c0;
    }
    else if (abStack_235[1] != 0x23) {
      if ((((((abStack_235[1] == 0x2e) && (abStack_235[2] == 'P')) && (abStack_235[3] == 'H')) &&
           ((abStack_235[4] == 'O' && (local_230 == 'N')))) && (local_22f == 'Y')) &&
         (local_22e == ':')) {
        uVar11 = recovered_2002270(str_020cc34d);
        pbVar17 = local_bf8;
        recovered_2073030((int)puVar7,(char *)(abStack_235 + uVar11 + 1),(char *)pbVar17,0x200,
                          &DAT_020c5084,&DAT_020c5084,&DAT_020c5084,&DAT_020c5084);
LAB_02034051:
        for (; ((uint)(*pbVar17) - 9U < 5U || (*pbVar17 == 0x20)); pbVar17 = pbVar17 + 1) {
        }
        local_9f8[0] = '\0';
        uVar12 = (uint)*pbVar17;
        if ((uVar12 == 0x22) || (uVar12 == 0x27)) {
          pbVar1 = pbVar17 + 1;
          uVar4 = (uint)*pbVar1;
          pbVar17 = pbVar17 + 1;
          uVar14 = uVar12;
          if (*pbVar1 != 0) goto LAB_02034092;
LAB_02034085:
          uVar12 = 0;
        }
        else {
          if (uVar12 == 0) goto LAB_0203426e;
          uVar14 = 0;
          uVar4 = uVar12;
          if (*pbVar17 == 0) goto LAB_02034085;
LAB_02034092:
          pbVar17 = pbVar17 + 1;
          uVar12 = 0;
          do {
            if (uVar14 == 0) {
              if ((uVar4 - 9 < 0x18) && ((0x80001fU >> (uVar4 - 9 & 0x1f) & 1) != 0)) break;
            }
            else if (uVar14 == (int)(char)uVar4) goto LAB_020340f7;
            if (uVar12 + 1 < 0xf1) {
              local_9f8[uVar12] = (char)uVar4;
              uVar12 = uVar12 + 1;
            }
            bVar2 = *pbVar17;
            uVar4 = (uint)bVar2;
            pbVar17 = pbVar17 + 1;
          } while (bVar2 != 0);
          pbVar17 = pbVar17 + -1;
        }
LAB_020340f7:
        local_9f8[uVar12] = '\0';
        for (; ((uint)(*pbVar17) - 9U < 5U || (*pbVar17 == 0x20)); pbVar17 = pbVar17 + 1) {
        }
        if (uVar12 == 0) goto LAB_0203426e;
        if (local_9f8[0] != '\0') {
          if (local_18[0x2098] == 0) {
            uVar12 = 0;
          }
          else {
            uVar14 = 0;
            puVar7 = local_24;
            do {
              iVar5 = recovered_20022a0((char *)puVar7,local_9f8);
              if (iVar5 == 0) goto LAB_02034051;
              uVar14 = uVar14 + 1;
              uVar12 = local_18[0x2098];
              puVar7 = (uint *)((int)puVar7 + 0xf1);
            } while (uVar14 < uVar12);
            if (0x2f < uVar12) goto LAB_02034051;
          }
          local_18[0x2098] = uVar12 + 1;
          pcVar6 = local_9f8;
          pf_varargs_20044f0__4_
                    ((char *)(uVar12 * 0xf1 + (int)local_24),0xf1,&DAT_020c5119,(uint)pcVar6);
        }
        goto LAB_02034051;
      }
LAB_020341c0:
      bVar3 = recovered_2072420((char *)pbVar17,local_db8,(char *)local_bf8,local_507);
      if (bVar3) {
        recovered_2073030((int)puVar7,(char *)local_bf8,local_9f8,0x180,&DAT_020c5084,&DAT_020c5084,
                          &DAT_020c5084,&DAT_020c5084);
        iVar5 = recovered_20022a0(local_507,&DAT_020cc355);
        iVar9 = recovered_20022a0(local_507,&DAT_020cc358);
        pcVar6 = (char *)0x0;
        recovered_2072620((int)puVar7,local_db8,local_9f8,iVar5 == 0,iVar9 == 0,'\0');
      }
    }
  }
LAB_02034292:
  uVar12 = local_20;
  if (local_20 == 0) {
    local_1540[0] = '\0';
    uVar12 = *puVar7;
    uVar14 = puVar7[1];
    if (uVar14 != 0 && uVar12 != 0) {
      uVar4 = 0;
      do {
        local_7f8[0] = '\0';
        uVar15 = 0;
        do {
          uVar16 = uVar4;
          cVar13 = *(char *)(uVar12 + uVar16);
          if (cVar13 != '\r') {
            if (cVar13 == '\n') break;
            if (uVar15 + 1 < 0x200) {
              local_7f8[uVar15] = cVar13;
              uVar15 = uVar15 + 1;
            }
          }
          uVar4 = uVar16 + 1;
        } while (uVar16 + 1 < uVar14);
        uVar4 = uVar16 + 1;
        local_7f8[uVar15] = '\0';
        pf_varargs_20044f0__4_((char *)(abStack_235 + 1),0x200,&DAT_020c5119,(uint)local_7f8);
        iVar5 = 0;
        while (((uint)(abStack_235[iVar5 + 1]) - 9 < 5 || (abStack_235[iVar5 + 1] == 0x20))) {
          iVar5 = iVar5 + 1;
        }
        if (iVar5 != 0) {
          uVar11 = recovered_2002270((char *)(abStack_235 + iVar5 + 1));
          recovered_2001c30(abStack_235 + 1,abStack_235 + iVar5 + 1,uVar11 + 1);
        }
        for (uVar11 = recovered_2002270((char *)(abStack_235 + 1));
            (uVar11 != 0 && (((uint)(abStack_235[uVar11]) - 9 < 5 || (abStack_235[uVar11] == 0x20))));
            uVar11 = uVar11 - 1) {
          abStack_235[uVar11] = 0;
        }
        if (((abStack_235[1] != 0) && (abStack_235[1] != 9)) && (abStack_235[1] != 0x23)) {
          pf_varargs_20044f0__4_(local_9f8,0x200,&DAT_020c5119,(uint)(abStack_235 + 1));
          bVar3 = recovered_2072420(local_9f8,local_c38,local_db8,local_27);
          if ((!bVar3) &&
             (pcVar6 = recovered_20024f0((char *)(abStack_235 + 1),':'), pcVar6 != (char *)0x0)) {
            *pcVar6 = '\0';
            pbVar17 = local_bf8;
            recovered_2073030((int)local_18,(char *)(abStack_235 + 1),(char *)pbVar17,0x200,
                              &DAT_020c5084,&DAT_020c5084,&DAT_020c5084,&DAT_020c5084);
LAB_02034591:
            for (; ((uint)(*pbVar17) - 9U < 5U || (*pbVar17 == 0x20)); pbVar17 = pbVar17 + 1) {
            }
            local_507[0] = '\0';
            uVar12 = (uint)*pbVar17;
            if ((uVar12 == 0x22) || (uVar12 == 0x27)) {
              pbVar1 = pbVar17 + 1;
              uVar15 = (uint)*pbVar1;
              pbVar17 = pbVar17 + 1;
              uVar14 = uVar12;
              if (*pbVar1 != 0) goto LAB_020345d2;
LAB_020345c5:
              uVar12 = 0;
            }
            else {
              if (uVar12 == 0) goto LAB_020346a0;
              uVar14 = 0;
              uVar15 = uVar12;
              if (*pbVar17 == 0) goto LAB_020345c5;
LAB_020345d2:
              pbVar17 = pbVar17 + 1;
              uVar12 = 0;
              do {
                if (uVar14 == 0) {
                  if ((uVar15 - 9 < 0x18) &&
                     (local_1c = uVar12, (0x80001fU >> (uVar15 - 9 & 0x1f) & 1) != 0)) break;
                }
                else if (uVar14 == (int)(char)uVar15) goto LAB_02034637;
                if (uVar12 + 1 < 0xf1) {
                  local_507[uVar12] = (char)uVar15;
                  uVar12 = uVar12 + 1;
                }
                bVar2 = *pbVar17;
                uVar15 = (uint)bVar2;
                pbVar17 = pbVar17 + 1;
              } while (bVar2 != 0);
              pbVar17 = pbVar17 + -1;
            }
LAB_02034637:
            local_507[uVar12] = '\0';
            for (; ((uint)(*pbVar17) - 9U < 5U || (*pbVar17 == 0x20)); pbVar17 = pbVar17 + 1) {
            }
            if (uVar12 == 0) goto LAB_020346a0;
            if ((local_507[0] != '.') &&
               (pcVar6 = recovered_20024f0(local_507,'%'), pcVar6 == (char *)0x0)) {
              pcVar6 = local_507;
              pf_varargs_20044f0__4_(local_1540,0xf1,&DAT_020c5119,(uint)pcVar6);
              uVar12 = 1;
              goto LAB_0203429d;
            }
            goto LAB_02034591;
          }
        }
LAB_020346a0:
        uVar12 = *local_18;
      } while ((uVar12 != 0) && (uVar14 = local_18[1], uVar4 < uVar14));
    }
    pcVar6 = local_14;
    iVar5 = 0;
    if (param_3 != 0 && local_14 != (char *)0x0) {
      if ((*local_14 != '\0') && (uVar11 = recovered_2002270(local_14), uVar11 + 1 < param_3)) {
        pcVar10 = pcVar6 + uVar11;
        pcVar10[0] = '\n';
        pcVar10[1] = '\0';
      }
      uVar11 = recovered_2002270(pcVar6);
      iVar5 = 0;
      if (uVar11 + 1 < param_3) {
        cVar13 = 'm';
        iVar5 = 0;
        do {
          local_14[iVar5 + uVar11] = cVar13;
          cVar13 = str_020cc30b[iVar5 + 1];
          iVar9 = iVar5 + 1;
          if (cVar13 == '\0') break;
          uVar12 = iVar5 + uVar11 + 2;
          iVar5 = iVar9;
        } while (uVar12 < param_3);
        local_14[iVar9 + uVar11] = '\0';
        iVar5 = 0;
      }
    }
  }
  else {
LAB_0203429d:
    uVar14 = 1;
    do {
      iVar5 = recovered_20727b0(local_18,(uint *)0x0,local_14,param_3,pcVar6,in_stack_ffffeab4);
      if (iVar5 == 0) break;
      bVar3 = uVar14 < uVar12;
      uVar14 = uVar14 + 1;
    } while (bVar3);
  }
  recovered_2001710(local_18);
  pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)local_325);
  cVar13 = DAT_020d9d6a;
  if (cVar13 == '\x01') {
    cVar13 = DAT_020d9f05;
    pcVar10 = str_020cc51e;
    if (cVar13 != '\0') {
      pcVar10 = &DAT_020d9f05;
    }
    pcVar6 = &DAT_020cc533;
    cVar13 = DAT_020d9d6b;
    if (cVar13 == '\0') {
      pcVar6 = &DAT_020c5084;
    }
    pcVar18 = str_020cc527;
  }
  else {
    cVar13 = str_020d9e14[0];
    pcVar6 = &DAT_020c5359;
    if (cVar13 != '\0') {
      pcVar6 = str_020d9e14;
    }
    cVar13 = DAT_020d9db4;
    pcVar10 = &DAT_020c531e;
    if (cVar13 != '\0') {
      pcVar10 = &DAT_020d9db4;
    }
    pcVar18 = str_020cc535;
  }
  pf_varargs_20044f0__4__4_(str_020de0ec,0x60,pcVar18,(uint)pcVar10,(uint)pcVar6);
  return iVar5;
  while (uVar12 = iVar5 + uVar11 + 2, iVar5 = iVar9, uVar12 < param_3) {
LAB_02033be0:
    pcVar6[iVar5 + uVar11] = cVar13;
    cVar13 = str_020cc1dc[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
  }
  pcVar6[iVar9 + uVar11] = '\0';
  return 1;
  while (uVar12 = iVar5 + uVar11 + 2, iVar5 = iVar9, uVar12 < param_3) {
LAB_02034390:
    pcVar6[iVar5 + uVar11] = cVar13;
    cVar13 = str_020cc217[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
  }
  pcVar6[iVar9 + uVar11] = '\0';
  return 0;
  while (uVar12 = iVar5 + uVar11 + 2, iVar5 = iVar9, uVar12 < param_3) {
LAB_02033da0:
    pcVar6[iVar5] = cVar13;
    cVar13 = str_020cc26e[iVar5 + 1];
    iVar9 = iVar5 + 1;
    if (cVar13 == '\0') break;
  }
LAB_0203484a:
  pcVar6[iVar9] = '\0';
LAB_0203484e:
  pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)local_325);
  cVar13 = DAT_020d9d6a;
  if (cVar13 == '\x01') {
    cVar13 = DAT_020d9f05;
    pcVar10 = str_020cc51e;
    if (cVar13 != '\0') {
      pcVar10 = &DAT_020d9f05;
    }
    pcVar6 = &DAT_020cc533;
    cVar13 = DAT_020d9d6b;
    if (cVar13 == '\0') {
      pcVar6 = &DAT_020c5084;
    }
    pcVar18 = str_020cc527;
  }
  else {
    cVar13 = str_020d9e14[0];
    pcVar6 = &DAT_020c5359;
    if (cVar13 != '\0') {
      pcVar6 = str_020d9e14;
    }
    cVar13 = DAT_020d9db4;
    pcVar10 = &DAT_020c531e;
    if (cVar13 != '\0') {
      pcVar10 = &DAT_020d9db4;
    }
    pcVar18 = str_020cc535;
  }
  pf_varargs_20044f0__4__4_(str_020de0ec,0x60,pcVar18,(uint)pcVar10,(uint)pcVar6);
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020c5577
#undef DAT_020c748d
#undef DAT_020cc214
#undef DAT_020cc259
#undef DAT_020cc323
#undef DAT_020cc336
#undef DAT_020cc344
#undef DAT_020cc347
#undef DAT_020cc34a
#undef DAT_020cc355
#undef DAT_020cc358
#undef DAT_020cc533
#undef DAT_020d9d6a
#undef DAT_020d9d6b
#undef DAT_020d9db4
#undef DAT_020d9f05
#undef str_020c4cf0
#undef str_020c7213
#undef str_020cc1dc
#undef str_020cc217
#undef str_020cc23d
#undef str_020cc25c
#undef str_020cc263
#undef str_020cc26e
#undef str_020cc294
#undef str_020cc2b1
#undef str_020cc2c5
#undef str_020cc2dc
#undef str_020cc2ee
#undef str_020cc30b
#undef str_020cc328
#undef str_020cc32e
#undef str_020cc33a
#undef str_020cc34d
#undef str_020cc51e
#undef str_020cc527
#undef str_020cc535
#undef str_020d9e14
#undef str_020de0ec
#undef local_60c
#undef local_5f8
#undef abStack_235
#undef local_507
#undef local_416
#undef local_325
#undef local_230
#undef local_22f
#undef local_22e
#undef local_34
#undef local_30
#undef local_27
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_ffffeab4
#undef local_1540
#undef local_db8
#undef local_c38
#undef local_bf8
#undef local_9f8
#undef local_7f8
