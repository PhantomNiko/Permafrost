/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020cc90c (*(uint8_t *)(0x20cc90cU))
#define DAT_020cc929 (*(uint8_t *)(0x20cc929U))
#define DAT_020cc92c (*(uint8_t *)(0x20cc92cU))
#define DAT_020cc92f (*(uint8_t *)(0x20cc92fU))
#define DAT_020cc933 (*(uint8_t *)(0x20cc933U))
#define DAT_020cc937 (*(uint8_t *)(0x20cc937U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc8ec (*(char (*)[1])(0x20cc8ecU))
#define str_020cc90f (*(char (*)[1])(0x20cc90fU))
#define str_020cc93a (*(char (*)[1])(0x20cc93aU))
#define str_020cc955 (*(char (*)[1])(0x20cc955U))
#define local_b05 (*(char *)(frame + 27))
#define local_b04 (*(char (*)[2047])(frame + 28))
#define local_305 (*(byte (*)[512])(frame + 2075))
#define local_105 (*(char (*)[241])(frame + 2587))
#define local_14 (*(char * *)(frame + 2828))


undefined4 recovered_20376e0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[2880] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;

  local_14 = in_EDX;
  while( true ) {
    if (in_ECX == (byte *)0x0) {
      in_ECX = &DAT_020c5084;
    }
    else {
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
    }
    local_105[0] = '\0';
    bVar2 = *in_ECX;
    uVar9 = (uint)bVar2;
    if ((uVar9 != 0x22) && (uVar9 != 0x27)) break;
    bVar2 = in_ECX[1];
    uVar10 = (uint)bVar2;
    in_ECX = in_ECX + 1;
joined_r0x02037743:
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar3 = 0;
      do {
        if (uVar9 == 0) {
          if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar9 == (int)(char)uVar10) goto LAB_020377c1;
        if (uVar3 + 1 < 0xf1) {
          local_105[uVar3] = (char)uVar10;
          uVar3 = uVar3 + 1;
        }
        bVar2 = *in_ECX;
        uVar10 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_020377c1:
    local_105[uVar3] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar3 == 0) goto LAB_020378cb;
    iVar4 = recovered_20022a0(local_105,str_020c7213);
    pcVar11 = local_14;
    if (iVar4 == 0) {
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar5 = recovered_2002270(local_14), uVar5 + 1 < param_3)) {
        (pcVar11 + uVar5)[0] = '\n';
        (pcVar11 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar11);
      if (param_3 <= uVar5 + 1) {
        return 1;
      }
      cVar8 = 'u';
      iVar4 = 0;
      goto LAB_020379a0;
    }
    iVar4 = recovered_20022a0(local_105,&DAT_020cc90c);
    if (iVar4 == 0) goto LAB_020379d1;
    iVar4 = recovered_20022a0(local_105,&DAT_020cc929);
    if ((((iVar4 != 0) && (iVar4 = recovered_20022a0(local_105,&DAT_020cc92c), iVar4 != 0)) &&
        (iVar4 = recovered_20022a0(local_105,&DAT_020cc92f), iVar4 != 0)) &&
       ((iVar4 = recovered_20022a0(local_105,&DAT_020cc933), iVar4 != 0 &&
        (iVar4 = recovered_20022a0(local_105,&DAT_020cc937), iVar4 != 0)))) {
      if ((local_105[0] == '-') && (local_105[1] != '\0')) {
        pf_varargs_202ecc0__4_(local_14,param_3,str_020cc93a,(uint)local_105);
        return 0;
      }
      uVar7 = recovered_205db60(local_105,local_14,param_3);
      return uVar7;
    }
  }
  if (uVar9 != 0) {
    uVar10 = uVar9;
    uVar9 = 0;
    goto joined_r0x02037743;
  }
LAB_020378cb:
  pcVar11 = local_14;
  if (param_3 == 0 || local_14 == (char *)0x0) {
    return 0;
  }
  if ((*local_14 != '\0') && (uVar5 = recovered_2002270(local_14), uVar5 + 1 < param_3)) {
    (pcVar11 + uVar5)[0] = '\n';
    (pcVar11 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar11);
  if (param_3 <= uVar5 + 1) {
    return 0;
  }
  cVar8 = 's';
  iVar4 = 0;
  do {
    pcVar11[iVar4 + uVar5] = cVar8;
    cVar8 = str_020cc955[iVar4 + 1];
    iVar1 = iVar4 + 1;
    if (cVar8 == '\0') break;
    uVar9 = iVar4 + uVar5 + 2;
    iVar4 = iVar1;
  } while (uVar9 < param_3);
  pcVar11[iVar1 + uVar5] = '\0';
  return 0;
  while (uVar9 = iVar4 + uVar5 + 2, iVar4 = iVar1, uVar9 < param_3) {
LAB_020379a0:
    pcVar11[iVar4 + uVar5] = cVar8;
    cVar8 = str_020cc8ec[iVar4 + 1];
    iVar1 = iVar4 + 1;
    if (cVar8 == '\0') break;
  }
  pcVar11[iVar1 + uVar5] = '\0';
  return 1;
LAB_020379d1:
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  local_305[0] = 0;
  uVar9 = (uint)*in_ECX;
  pcVar11 = local_14;
  if (uVar9 != 0) {
    if ((uVar9 == 0x22) || (uVar9 == 0x27)) {
      pbVar13 = in_ECX + 1;
      in_ECX = in_ECX + 1;
      uVar10 = uVar9;
      uVar9 = (uint)*pbVar13;
      if (*pbVar13 == 0) goto LAB_02037a64;
LAB_02037a06:
      uVar3 = 0;
      pbVar13 = in_ECX;
      do {
        in_ECX = pbVar13 + 1;
        if (uVar10 == 0) {
          if ((uVar9 - 9 < 0x18) && ((0x80001fU >> (uVar9 - 9 & 0x1f) & 1) != 0)) {
            in_ECX = pbVar13;
            break;
          }
        }
        else if (uVar10 == (int)(char)(byte)uVar9) break;
        if (uVar3 + 1 < 0x200) {
          local_305[uVar3] = (byte)uVar9;
          uVar3 = uVar3 + 1;
        }
        uVar9 = (uint)*in_ECX;
        pbVar13 = in_ECX;
      } while (*in_ECX != 0);
    }
    else {
      uVar10 = 0;
      if (*in_ECX != 0) goto LAB_02037a06;
LAB_02037a64:
      uVar3 = 0;
    }
    pcVar11 = local_14;
    local_305[uVar3] = 0;
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar3 != 0) {
      local_b05 = '\0';
      uVar9 = recovered_202ed80(local_305,&local_b05,0x800);
      if (uVar9 == 0) {
        if (local_b05 == '\0') {
          return 0;
        }
        if (param_3 == 0 || pcVar11 == (char *)0x0) {
          if (pcVar11 == (char *)0x0) {
            return 0;
          }
        }
        else if ((*pcVar11 != '\0') && (uVar5 = recovered_2002270(pcVar11), uVar5 + 1 < param_3)) {
          (pcVar11 + uVar5)[0] = '\n';
          (pcVar11 + uVar5)[1] = '\0';
        }
        uVar5 = recovered_2002270(pcVar11);
        if ((param_3 == 0 || pcVar11 == (char *)0x0) || param_3 <= uVar5 + 1) {
          return 0;
        }
        uVar7 = 0;
        if (local_b05 != '\0') {
          pcVar12 = local_b04;
          uVar6 = uVar5;
          do {
            pcVar11[uVar6] = local_b05;
            local_b05 = *pcVar12;
            uVar5 = uVar6 + 1;
            if (local_b05 == '\0') break;
            uVar9 = uVar6 + 2;
            pcVar12 = pcVar12 + 1;
            uVar6 = uVar5;
          } while (uVar9 < param_3);
        }
      }
      else {
        uVar7 = 1;
        if (local_b05 == '\0') {
          return 1;
        }
        if (param_3 == 0 || pcVar11 == (char *)0x0) {
          if (pcVar11 == (char *)0x0) {
            return 1;
          }
        }
        else if ((*pcVar11 != '\0') && (uVar5 = recovered_2002270(pcVar11), uVar5 + 1 < param_3)) {
          (pcVar11 + uVar5)[0] = '\n';
          (pcVar11 + uVar5)[1] = '\0';
        }
        uVar5 = recovered_2002270(pcVar11);
        if ((param_3 == 0 || pcVar11 == (char *)0x0) || param_3 <= uVar5 + 1) {
          return 1;
        }
        if (local_b05 != '\0') {
          pcVar12 = local_b04;
          uVar6 = uVar5;
          do {
            pcVar11[uVar6] = local_b05;
            local_b05 = *pcVar12;
            uVar5 = uVar6 + 1;
            if (local_b05 == '\0') break;
            uVar9 = uVar6 + 2;
            pcVar12 = pcVar12 + 1;
            uVar6 = uVar5;
          } while (uVar9 < param_3);
        }
      }
      goto LAB_02037caa;
    }
  }
  if (param_3 == 0 || pcVar11 == (char *)0x0) {
    return 0;
  }
  if ((*pcVar11 != '\0') && (uVar5 = recovered_2002270(pcVar11), uVar5 + 1 < param_3)) {
    (pcVar11 + uVar5)[0] = '\n';
    (pcVar11 + uVar5)[1] = '\0';
  }
  uVar6 = recovered_2002270(pcVar11);
  if (param_3 <= uVar6 + 1) {
    return 0;
  }
  cVar8 = 's';
  pcVar11 = str_020cc90f;
  uVar7 = 0;
  do {
    pcVar11 = pcVar11 + 1;
    local_14[uVar6] = cVar8;
    cVar8 = *pcVar11;
    uVar5 = uVar6 + 1;
    if (cVar8 == '\0') break;
    uVar9 = uVar6 + 2;
    uVar6 = uVar5;
  } while (uVar9 < param_3);
LAB_02037caa:
  local_14[uVar5] = '\0';
  return uVar7;
}
#undef DAT_020c5084
#undef DAT_020cc90c
#undef DAT_020cc929
#undef DAT_020cc92c
#undef DAT_020cc92f
#undef DAT_020cc933
#undef DAT_020cc937
#undef str_020c7213
#undef str_020cc8ec
#undef str_020cc90f
#undef str_020cc93a
#undef str_020cc955
#undef local_b05
#undef local_b04
#undef local_305
#undef local_105
#undef local_14
