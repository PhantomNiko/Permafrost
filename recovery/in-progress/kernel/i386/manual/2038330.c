/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020ccaf8 (*(uint8_t *)(0x20ccaf8U))
#define DAT_020ccb0c (*(uint8_t *)(0x20ccb0cU))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c7375 (*(char (*)[1])(0x20c7375U))
#define str_020cca8e (*(char (*)[1])(0x20cca8eU))
#define str_020ccabd (*(char (*)[1])(0x20ccabdU))
#define str_020ccad4 (*(char (*)[1])(0x20ccad4U))
#define str_020ccadd (*(char (*)[1])(0x20ccaddU))
#define str_020ccae5 (*(char (*)[1])(0x20ccae5U))
#define str_020ccafa (*(char (*)[1])(0x20ccafaU))
#define str_020ccb0f (*(char (*)[1])(0x20ccb0fU))
#define str_020ccb35 (*(char (*)[1])(0x20ccb35U))
#define str_020ccb50 (*(char (*)[1])(0x20ccb50U))
#define str_020ccb68 (*(char (*)[1])(0x20ccb68U))
#define str_020ccb7a (*(char (*)[1])(0x20ccb7aU))
#define str_020ccbcc (*(char (*)[1])(0x20ccbccU))
#define str_020ccbd4 (*(char (*)[1])(0x20ccbd4U))
#define str_020ccbda (*(char (*)[1])(0x20ccbdaU))
#define str_020ccbf7 (*(char (*)[1])(0x20ccbf7U))
#define str_020ccc0c (*(char (*)[1])(0x20ccc0cU))
#define str_020ccc23 (*(char (*)[1])(0x20ccc23U))
#define str_020ccc3a (*(char (*)[1])(0x20ccc3aU))
#define str_020ccc5f (*(char (*)[1])(0x20ccc5fU))
#define str_020ccc75 (*(char (*)[1])(0x20ccc75U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_6c7 (*(char (*)[241])(frame + 41))
#define local_5d6 (*(char (*)[241])(frame + 282))
#define local_4e5 (*(char (*)[241])(frame + 523))
#define local_3f4 (*(char (*)[241])(frame + 764))
#define local_303 (*(char (*)[241])(frame + 1005))
#define local_212 (*(byte (*)[5])(frame + 1246))
#define local_20d (*(char *)(frame + 1251))
#define local_20c (*(char *)(frame + 1252))
#define local_20b (*(char *)(frame + 1253))
#define local_121 (*(char (*)[6])(frame + 1487))
#define local_11b (*(char *)(frame + 1493))
#define local_11a (*(char *)(frame + 1494))
#define local_119 (*(char *)(frame + 1495))
#define local_118 (*(char *)(frame + 1496))
#define local_117 (*(char *)(frame + 1497))
#define local_116 (*(char *)(frame + 1498))
#define in_stack_fffff930 (*(char * *)(frame + 32))
#define local_115 (*(char *)(frame + 1499))
#define local_114 (*(char *)(frame + 1500))
#define local_113 (*(char *)(frame + 1501))
#define local_112 (*(char *)(frame + 1502))
#define local_111 (*(char *)(frame + 1503))
#define local_110 (*(char *)(frame + 1504))
#define local_30 (*(void * *)(frame + 1728))
#define local_2c (*(uint *)(frame + 1732))
#define local_28 (*(byte *)(frame + 1736))
#define local_24 (*(uint *)(frame + 1740))
#define local_20 (*(uint *)(frame + 1744))
#define local_1c (*(uint *)(frame + 1748))
#define local_18 (*(void * *)(frame + 1752))
#define local_14 (*(char * *)(frame + 1756))


undefined4 recovered_2038330(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[1808] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  uint extraout_EDX = 0;
  void *bytes;
  int iVar13;
  char *pcVar14;

  local_14 = in_EDX;
  local_212[0] = 0;
  local_303[0] = '\0';
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
LAB_02038380:
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  local_121[0] = '\0';
  bVar2 = *in_ECX;
  uVar11 = (uint)bVar2;
  if ((uVar11 != 0x22) && (uVar11 != 0x27)) {
    if (uVar11 != 0) {
      uVar8 = uVar11;
      uVar11 = 0;
      goto joined_r0x020383c3;
    }
LAB_02038870:
    pcVar14 = local_14;
    if ((local_20 & 1) == 0) {
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (pcVar14 + uVar6)[0] = '\n';
        (pcVar14 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(pcVar14);
      if (param_3 <= uVar6 + 1) {
        return 0;
      }
      pcVar14 = pcVar14 + uVar6;
      cVar10 = 'w';
      iVar5 = 0;
      goto LAB_02038af0;
    }
    bVar2 = local_212[0];
    if (local_212[0] == 0x68) {
      if (local_212[1] == 't') {
        bVar2 = 0x68;
        if ((((local_20d == '/' && local_212[4] == ':') &&
             (local_212[3] == 'p' && local_212[2] == 't')) && local_20c == '/') ||
           (((((local_212[3] == 'p' && local_212[2] == 't') && local_212[4] == 's' &&
              (local_20d == ':')) && (local_20c == '/')) && (local_20b == '/')))) {
          if (param_3 == 0 || local_14 == (char *)0x0) {
            return 0;
          }
          if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
            (pcVar14 + uVar6)[0] = '\n';
            (pcVar14 + uVar6)[1] = '\0';
          }
          uVar6 = recovered_2002270(pcVar14);
          if (param_3 <= uVar6 + 1) {
            return 0;
          }
          cVar10 = 'w';
          iVar5 = 0;
          goto LAB_02038970;
        }
      }
    }
    else if (0x19 < (byte)((local_212[0] & 0xdf) + 0xbf)) goto LAB_02038be5;
    pbVar12 = local_212;
    goto LAB_02038bb1;
  }
  bVar2 = in_ECX[1];
  uVar8 = (uint)bVar2;
  in_ECX = in_ECX + 1;
joined_r0x020383c3:
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    in_ECX = in_ECX + 1;
    uVar4 = 0;
    do {
      if (uVar11 == 0) {
        if ((uVar8 - 9 < 0x18) && ((0x80001fU >> (uVar8 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar11 == (int)(char)uVar8) goto LAB_02038441;
      if (uVar4 + 1 < 0xf1) {
        local_121[uVar4] = (char)uVar8;
        uVar4 = uVar4 + 1;
      }
      bVar2 = *in_ECX;
      uVar8 = (uint)bVar2;
      in_ECX = in_ECX + 1;
    } while (bVar2 != 0);
    in_ECX = in_ECX + -1;
  }
LAB_02038441:
  pcVar9 = local_121;
  pcVar9[uVar4] = '\0';
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  if (uVar4 == 0) goto LAB_02038870;
  iVar5 = recovered_20022a0(pcVar9,str_020c7213);
  pcVar14 = local_14;
  if (iVar5 == 0) {
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
      (pcVar14 + uVar6)[0] = '\n';
      (pcVar14 + uVar6)[1] = '\0';
    }
    uVar6 = recovered_2002270(pcVar14);
    if (param_3 <= uVar6 + 1) {
      return 1;
    }
    pcVar14 = pcVar14 + uVar6;
    cVar10 = 'u';
    iVar5 = 0;
    goto LAB_020389f0;
  }
  iVar5 = recovered_20022a0(pcVar9,str_020c7375);
  pcVar14 = local_14;
  if (iVar5 == 0) {
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
      (pcVar14 + uVar6)[0] = '\n';
      (pcVar14 + uVar6)[1] = '\0';
    }
    uVar6 = recovered_2002270(pcVar14);
    if (param_3 <= uVar6 + 1) {
      return 1;
    }
    pcVar14 = pcVar14 + uVar6;
    cVar10 = 'w';
    iVar5 = 0;
    goto LAB_02038a70;
  }
  iVar5 = recovered_20022a0(pcVar9,str_020ccad4);
  if (iVar5 == 0) goto LAB_0203873d;
  iVar5 = recovered_20022a0(pcVar9,str_020ccadd);
  if (iVar5 == 0) {
    local_1c = 1;
    goto LAB_02038380;
  }
  if (((((local_121[0] == '-') && (local_121[1] == '-')) && (local_121[2] == 'o')) &&
      (((((local_121[3] == 'u' && (local_121[4] == 't')) &&
         ((local_121[5] == 'p' && ((local_11b == 'u' && (local_11a == 't')))))) &&
        (local_119 == '-')) &&
       ((((local_118 == 'd' && (local_117 == 'o')) && (local_116 == 'c')) &&
        ((local_115 == 'u' && (local_114 == 'm')))))))) &&
     (((local_113 == 'e' && ((local_112 == 'n' && (local_111 == 't')))) && (local_110 == '=')))) {
    uVar6 = recovered_2002270(str_020ccae5);
    in_stack_fffff930 = local_121 + uVar6;
    pf_varargs_20044f0__4_(local_303,0xf1,&DAT_020c5119,(uint)in_stack_fffff930);
    goto LAB_02038728;
  }
  iVar5 = recovered_20022a0(pcVar9,str_020ccafa);
  if ((iVar5 == 0) || (iVar5 = recovered_20022a0(pcVar9,&DAT_020ccb0c), iVar5 == 0)) {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    local_303[0] = '\0';
    uVar11 = (uint)*in_ECX;
    if ((uVar11 == 0x22) || (uVar11 == 0x27)) {
      pbVar12 = in_ECX + 1;
      uVar4 = (uint)*pbVar12;
      in_ECX = in_ECX + 1;
      uVar8 = uVar11;
      if (*pbVar12 != 0) goto LAB_02038689;
LAB_02038675:
      uVar11 = 0;
LAB_020386f1:
      local_303[uVar11] = '\0';
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
      if (uVar11 != 0) goto LAB_02038728;
    }
    else if (uVar11 != 0) {
      uVar8 = 0;
      uVar4 = uVar11;
      if (*in_ECX == 0) goto LAB_02038675;
LAB_02038689:
      in_ECX = in_ECX + 1;
      uVar11 = 0;
      do {
        if (uVar8 == 0) {
          if ((uVar4 - 9 < 0x18) && ((0x80001fU >> (uVar4 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar8 == (int)(char)uVar4) goto LAB_020386f1;
        if (uVar11 + 1 < 0xf1) {
          local_303[uVar11] = (char)uVar4;
          uVar11 = uVar11 + 1;
        }
        bVar2 = *in_ECX;
        uVar4 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
      goto LAB_020386f1;
    }
    pcVar14 = local_14;
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 0;
    }
    if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
      (pcVar14 + uVar6)[0] = '\n';
      (pcVar14 + uVar6)[1] = '\0';
    }
    uVar6 = recovered_2002270(pcVar14);
    if (param_3 <= uVar6 + 1) {
      return 0;
    }
    pcVar14 = pcVar14 + uVar6;
    cVar10 = 'w';
    iVar5 = 0;
    goto LAB_02038b70;
  }
  if ((local_121[0] == '-') && (local_121[1] != '\0')) {
    pcVar9 = local_121 + 2;
    uVar11 = extraout_EDX;
    do {
      bVar2 = pcVar9[-1];
      if (bVar2 < 0x71) {
        if (bVar2 != 0x53) goto code_r0x02038776;
      }
      else {
        uVar11 = CONCAT31((int3)(uVar11 >> 8),1);
        local_1c = uVar11;
        if (bVar2 != 0x71) goto LAB_02038f07;
      }
      pcVar9 = pcVar9 + 1;
    } while( true );
  }
  if ((local_20 & 1) == 0) {
    iVar5 = pf_varargs_20044f0__4_((char *)local_212,0xf1,&DAT_020c5119,(uint)pcVar9);
    local_20 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    in_stack_fffff930 = pcVar9;
    goto LAB_02038380;
  }
  pcVar14 = str_020ccb50;
LAB_02038f10:
  pf_varargs_202ecc0__4_(local_14,param_3,pcVar14,(uint)pcVar9);
  return 0;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_02038af0:
    pcVar14[iVar5] = cVar10;
    cVar10 = str_020ccb68[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
  goto LAB_02038b8a;
LAB_02038bb1:
  pbVar12 = pbVar12 + 1;
  bVar1 = *pbVar12;
  uVar11 = (uint)bVar1;
  if (uVar11 == 0) goto LAB_02038be5;
  if (uVar11 == 0x3a) {
    if (((bVar2 == 0x66) && (local_212[1] == 'i')) &&
       ((local_212[2] == 'l' && ((local_212[3] == 'e' && (local_212[4] == ':'))))))
    goto LAB_02038be9;
    pcVar9 = str_020ccbda;
    goto LAB_02038d6b;
  }
  if ((9 < (byte)(bVar1 - 0x30U)) &&
     (uVar3 = CONCAT11(bVar1,bVar2) & 0xdfff, bVar2 = (byte)uVar3,
     0x19 < (byte)((char)(uVar3 >> 8) + 0xbfU))) {
    if ((3 < uVar11 - 0x2b) || (uVar11 - 0x2b == 1)) goto LAB_02038be5;
  }
  goto LAB_02038bb1;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_020389f0:
    pcVar14[iVar5] = cVar10;
    cVar10 = str_020cca8e[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
  goto LAB_02038a8a;
LAB_0203873d:
  local_24 = 1;
  goto LAB_02038380;
code_r0x02038776:
  if (bVar2 == 0) goto LAB_02038380;
  if (bVar2 != 0x4f) {
LAB_02038f07:
    pcVar9 = (char *)(int)(char)bVar2;
    pcVar14 = str_020ccb35;
    goto LAB_02038f10;
  }
  if (*pcVar9 == '\0') {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    local_303[0] = '\0';
    uVar11 = (uint)*in_ECX;
    if ((uVar11 == 0x22) || (uVar11 == 0x27)) {
      uVar4 = (uint)in_ECX[1];
      in_ECX = in_ECX + 1;
      uVar8 = uVar11;
    }
    else {
      if (uVar11 == 0) goto LAB_02038f20;
      uVar8 = 0;
      uVar4 = uVar11;
    }
    if ((char)uVar4 == '\0') {
      uVar11 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar11 = 0;
      do {
        if (uVar8 == 0) {
          if ((uVar4 - 9 < 0x18) && ((0x80001fU >> (uVar4 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar8 == (int)(char)uVar4) goto LAB_02038839;
        if (uVar11 + 1 < 0xf1) {
          local_303[uVar11] = (char)uVar4;
          uVar11 = uVar11 + 1;
        }
        bVar2 = *in_ECX;
        uVar4 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_02038839:
    local_303[uVar11] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar11 == 0) {
LAB_02038f20:
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (local_14 + uVar6)[0] = '\n';
        (local_14 + uVar6)[1] = '\0';
      }
      pcVar14 = local_14;
      uVar6 = recovered_2002270(local_14);
      if (param_3 <= uVar6 + 1) {
        return 0;
      }
      pcVar14 = pcVar14 + uVar6;
      cVar10 = 'w';
      iVar5 = 0;
      goto LAB_02038f83;
    }
  }
  else {
    pf_varargs_20044f0__4_(local_303,0xf1,&DAT_020c5119,(uint)pcVar9);
    in_stack_fffff930 = pcVar9;
  }
LAB_02038728:
  iVar5 = recovered_20022a0(local_303,&DAT_020ccaf8);
  local_18 = (void *)CONCAT31((int3)((uint)iVar5 >> 8),iVar5 == 0);
  goto LAB_02038380;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_02038f83:
    pcVar14[iVar5] = cVar10;
    cVar10 = str_020ccb0f[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
  goto LAB_02038b8a;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_02038970:
    pcVar14[iVar5 + uVar6] = cVar10;
    cVar10 = str_020ccb7a[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
  pcVar14[iVar13 + uVar6] = '\0';
  return 0;
LAB_02038be5:
  if (bVar2 == 0x66) {
LAB_02038be9:
    pbVar12 = local_212;
    if ((((local_212[1] == 'i') && (local_212[2] == 'l')) && (local_212[3] == 'e')) &&
       (local_212[4] == ':')) {
      pcVar9 = str_020ccbcc;
      if (local_20c != '/' || local_20d != '/') {
        pcVar9 = str_020ccbd4;
      }
      uVar6 = recovered_2002270(pcVar9);
      pbVar12 = local_212 + uVar6;
    }
  }
  else {
    pbVar12 = local_212;
  }
  if (*pbVar12 == 0) {
    pcVar9 = str_020ccbf7;
  }
  else {
    recovered_2030400((char *)pbVar12,str_020d9e14,local_5d6);
    if ((local_5d6[0] == '\0') || (iVar5 = recovered_20022a0(local_5d6,&DAT_020c5359), iVar5 == 0))
    {
      pcVar9 = str_020c6ac7;
    }
    else {
      pcVar9 = str_020c6d20;
      in_stack_fffff930 = local_5d6;
    }
    pf_varargs_20044f0__4_(local_4e5,0xf1,pcVar9,(uint)in_stack_fffff930);
    recovered_2001e00(&local_30,0,0xc);
    iVar5 = DAT_020d9d5c;
    uVar11 = recovered_202ad00(iVar5,local_4e5,&local_30);
    if ((uVar11 == 0) || ((local_28 & 2) != 0)) {
      pf_varargs_202ecc0__4_(pcVar14,param_3,str_020ccc0c,(uint)local_5d6);
      return 0;
    }
    if ((local_24 & 1) != 0) {
      if ((local_1c & 1) == 0) {
        pf_varargs_202ecc0__4_(pcVar14,param_3,str_020ccc23,(uint)local_5d6);
        return 1;
      }
      return 1;
    }
    if (((uint)local_18 & 1) != 0) {
      local_18 = local_30;
      if (local_30 == (void *)0x0 || local_2c == 0) {
        return 1;
      }
      uVar11 = 0;
      do {
        cVar10 = *(char *)((int)local_18 + uVar11);
        local_3f4[1] = 0;
        if ((pcVar14 != (char *)0x0) &&
           (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3 && param_3 != 0)) {
          if (cVar10 != '\0') {
            pcVar9 = local_3f4;
            uVar7 = uVar6;
            do {
              pcVar9 = pcVar9 + 1;
              local_14[uVar7] = cVar10;
              cVar10 = *pcVar9;
              uVar6 = uVar7 + 1;
              if (cVar10 == '\0') break;
              uVar8 = uVar7 + 2;
              uVar7 = uVar6;
            } while (uVar8 < param_3);
          }
          local_14[uVar6] = '\0';
        }
        uVar11 = uVar11 + 1;
        pcVar14 = local_14;
        if (local_2c <= uVar11) {
          return 1;
        }
      } while( true );
    }
    if (local_303[0] == '\0') {
      pcVar9 = recovered_20743b0(local_5d6);
      pf_varargs_20044f0__4_(local_303,0xf1,&DAT_020c5119,(uint)pcVar9);
    }
    pcVar9 = local_3f4;
    recovered_2030400(local_303,str_020d9e14,pcVar9);
    iVar5 = recovered_20022a0(pcVar9,&DAT_020c5359);
    if (iVar5 != 0) {
      recovered_205e5b0(pcVar9,local_6c7);
      iVar5 = DAT_020d9d5c;
      bytes = (void *)0x0;
      if (local_2c != 0) {
        bytes = local_30;
      }
      uVar11 = recovered_202b490(iVar5,local_6c7,bytes,local_2c);
      if (uVar11 != 0) {
        if ((local_1c & 1) == 0) {
          pf_varargs_202ecc0__4__4_(local_14,param_3,str_020ccc75,(uint)pcVar9,local_2c);
        }
        return 1;
      }
      pcVar14 = str_020ccc5f;
      goto LAB_02038f10;
    }
    pcVar9 = str_020ccc3a;
  }
LAB_02038d6b:
  recovered_202dd30(pcVar14,param_3,pcVar9);
  return 0;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_02038a70:
    pcVar14[iVar5] = cVar10;
    cVar10 = str_020ccabd[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
LAB_02038a8a:
  pcVar14[iVar13] = '\0';
  return 1;
  while (uVar11 = iVar5 + uVar6 + 2, iVar5 = iVar13, uVar11 < param_3) {
LAB_02038b70:
    pcVar14[iVar5] = cVar10;
    cVar10 = str_020ccb0f[iVar5 + 1];
    iVar13 = iVar5 + 1;
    if (cVar10 == '\0') break;
  }
LAB_02038b8a:
  pcVar14[iVar13] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020ccaf8
#undef DAT_020ccb0c
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020c7375
#undef str_020cca8e
#undef str_020ccabd
#undef str_020ccad4
#undef str_020ccadd
#undef str_020ccae5
#undef str_020ccafa
#undef str_020ccb0f
#undef str_020ccb35
#undef str_020ccb50
#undef str_020ccb68
#undef str_020ccb7a
#undef str_020ccbcc
#undef str_020ccbd4
#undef str_020ccbda
#undef str_020ccbf7
#undef str_020ccc0c
#undef str_020ccc23
#undef str_020ccc3a
#undef str_020ccc5f
#undef str_020ccc75
#undef str_020d9e14
#undef local_6c7
#undef local_5d6
#undef local_4e5
#undef local_3f4
#undef local_303
#undef local_212
#undef local_20d
#undef local_20c
#undef local_20b
#undef local_121
#undef local_11b
#undef local_11a
#undef local_119
#undef local_118
#undef local_117
#undef local_116
#undef in_stack_fffff930
#undef local_115
#undef local_114
#undef local_113
#undef local_112
#undef local_111
#undef local_110
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
