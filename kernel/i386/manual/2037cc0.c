/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020d9ff6 (*(uint8_t volatile *)(0x20d9ff6U))
#define DAT_020da0e7 (*(uint8_t volatile *)(0x20da0e7U))
#define Ram020d9d6a (*(uint16_t volatile *)(0x20d9d6aU))
#define str_020c70e3 (*(char (*)[1])(0x20c70e3U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc97f (*(char (*)[1])(0x20cc97fU))
#define str_020cc990 (*(char (*)[1])(0x20cc990U))
#define str_020cc9a8 (*(char (*)[1])(0x20cc9a8U))
#define str_020cc9c3 (*(char (*)[1])(0x20cc9c3U))
#define str_020cc9e9 (*(char (*)[1])(0x20cc9e9U))
#define str_020cca0a (*(char (*)[1])(0x20cca0aU))
#define str_020cca34 (*(char (*)[1])(0x20cca34U))
#define str_020cca4c (*(char (*)[1])(0x20cca4cU))
#define str_020cca5d (*(char (*)[1])(0x20cca5dU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define format (*(char * *)(frame + 28))
#define local_5de (*(char (*)[241])(frame + 50))
#define local_4ed (*(char (*)[241])(frame + 291))
#define local_3fc (*(char (*)[488])(frame + 532))
#define local_214 (*(byte *)(frame + 1020))
#define local_210 (*(int *)(frame + 1024))
#define local_202 (*(char (*)[241])(frame + 1038))
#define local_111 (*(char (*)[241])(frame + 1279))
#define local_20 (*(void * *)(frame + 1520))
#define local_1c (*(uint *)(frame + 1524))
#define local_18 (*(byte *)(frame + 1528))
#define local_14 (*(char * *)(frame + 1532))


undefined4 recovered_2037cc0(byte *in_ECX_00,char *in_EDX,uint param_3)

{
  unsigned char frame[1584] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;

  local_202[0] = '\0';
  local_14 = in_EDX;
  do {
    if (in_ECX_00 == (byte *)0x0) {
      in_ECX_00 = &DAT_020c5084;
    }
    else {
      for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
      }
    }
    local_111[0] = '\0';
    bVar1 = *in_ECX_00;
    uVar6 = (uint)bVar1;
    if ((uVar6 != 0x22) && (uVar6 != 0x27)) {
      if (uVar6 != 0) {
        uVar7 = uVar6;
        uVar6 = 0;
        goto joined_r0x02037d23;
      }
LAB_02037f2f:
      pcVar9 = local_14;
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
        (pcVar9 + uVar4)[0] = '\n';
        (pcVar9 + uVar4)[1] = '\0';
      }
      uVar4 = recovered_2002270(pcVar9);
      if (param_3 <= uVar4 + 1) {
        return 0;
      }
      pcVar9 = pcVar9 + uVar4;
      cVar5 = 'n';
      iVar3 = 0;
      goto LAB_02037f90;
    }
    bVar1 = in_ECX_00[1];
    uVar7 = (uint)bVar1;
    in_ECX_00 = in_ECX_00 + 1;
joined_r0x02037d23:
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      in_ECX_00 = in_ECX_00 + 1;
      uVar2 = 0;
      do {
        if (uVar6 == 0) {
          if ((uVar7 - 9 < 0x18) && ((0x80001fU >> (uVar7 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar6 == (int)(char)uVar7) goto LAB_02037d91;
        if (uVar2 + 1 < 0xf1) {
          local_111[uVar2] = (char)uVar7;
          uVar2 = uVar2 + 1;
        }
        bVar1 = *in_ECX_00;
        uVar7 = (uint)bVar1;
        in_ECX_00 = in_ECX_00 + 1;
      } while (bVar1 != 0);
      in_ECX_00 = in_ECX_00 + -1;
    }
LAB_02037d91:
    local_111[uVar2] = '\0';
    for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
    }
    if (uVar2 == 0) goto LAB_02037f2f;
    iVar3 = recovered_20022a0(local_111,str_020c7213);
    if (iVar3 == 0) goto LAB_02037fb4;
  } while ((local_111[0] == '-') && (local_111[1] != '\0'));
  pf_varargs_20044f0__4_(local_202,0xf1,&DAT_020c5119,(uint)local_111);
  while( true ) {
    for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
    }
    local_111[0] = '\0';
    bVar1 = *in_ECX_00;
    uVar6 = (uint)bVar1;
    if ((uVar6 != 0x22) && (uVar6 != 0x27)) break;
    bVar1 = in_ECX_00[1];
    uVar7 = (uint)bVar1;
    in_ECX_00 = in_ECX_00 + 1;
joined_r0x02037e53:
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      in_ECX_00 = in_ECX_00 + 1;
      uVar2 = 0;
      do {
        if (uVar6 == 0) {
          if ((uVar7 - 9 < 0x18) && ((0x80001fU >> (uVar7 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar6 == (int)(char)uVar7) goto LAB_02037eb7;
        if (uVar2 + 1 < 0xf1) {
          local_111[uVar2] = (char)uVar7;
          uVar2 = uVar2 + 1;
        }
        bVar1 = *in_ECX_00;
        uVar7 = (uint)bVar1;
        in_ECX_00 = in_ECX_00 + 1;
      } while (bVar1 != 0);
      in_ECX_00 = in_ECX_00 + -1;
    }
LAB_02037eb7:
    local_111[uVar2] = '\0';
    for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
    }
    if (uVar2 == 0) goto LAB_02038043;
    iVar3 = recovered_20022a0(local_111,str_020c7213);
    if (iVar3 == 0) goto LAB_02037fb4;
    if ((local_111[0] != '-') || (local_111[1] == '\0')) {
      pcVar9 = local_111;
      format = str_020cc990;
LAB_020380db:
      pf_varargs_202ecc0__4_(local_14,param_3,format,(uint)pcVar9);
      return 0;
    }
  }
  if (uVar6 != 0) {
    uVar7 = uVar6;
    uVar6 = 0;
    goto joined_r0x02037e53;
  }
LAB_02038043:
  bVar1 = recovered_205e0e0();
  pcVar9 = local_14;
  if (bVar1 == 0) {
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 0;
    }
    if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
      (pcVar9 + uVar4)[0] = '\n';
      (pcVar9 + uVar4)[1] = '\0';
    }
    uVar4 = recovered_2002270(pcVar9);
    if (param_3 <= uVar4 + 1) {
      return 0;
    }
    pcVar9 = pcVar9 + uVar4;
    cVar5 = 'n';
    iVar3 = 0;
    goto LAB_02038150;
  }
  recovered_2030400(local_202,str_020d9e14,&DAT_020d9f05);
  iVar3 = recovered_20022a0(&DAT_020d9f05,&DAT_020c5359);
  pcVar9 = local_14;
  if (iVar3 != 0) {
    pcVar9 = local_5de;
    recovered_205ec70(&DAT_020d9f05,pcVar9,local_4ed);
    uVar6 = recovered_2030680(pcVar9,local_3fc);
    if (((char)uVar6 == '\0') || ((local_210 != 2 && ((local_214 & 2) == 0)))) {
      format = str_020cca0a;
      goto LAB_020380db;
    }
    recovered_205e5b0(&DAT_020d9f05,&DAT_020d9ff6);
    recovered_2001e00(&local_20,0,0xc);
    DAT_020d9d70 = 0;
    DAT_020da0e7 = 0;
    iVar3 = DAT_020d9d5c;
    uVar6 = recovered_202ad00(iVar3,&DAT_020d9ff6,&local_20);
    pcVar9 = local_14;
    if (uVar6 != 0) {
      if ((local_18 & 2) != 0) {
        pcVar9 = &DAT_020d9f05;
        format = str_020cca34;
        goto LAB_020380db;
      }
      if (local_20 != (void *)0x0 && local_1c != 0) {
        uVar6 = local_1c;
        if (0x1ffe < local_1c) {
          uVar6 = 0x1fff;
        }
        recovered_2001b70(&DAT_020da0e7,local_20,uVar6);
        (&DAT_020da0e7)[uVar6] = 0;
        DAT_020d9d70 = uVar6;
        Ram020d9d6a = 1;
        recovered_202c9e0();
        pf_varargs_202ecc0__4_(pcVar9,param_3,str_020cca4c,0x20d9f05);
        if (0x1fff < local_1c) {
          recovered_202dd30(pcVar9,param_3,str_020cca5d);
        }
        goto LAB_020382f9;
      }
    }
    Ram020d9d6a = 1;
    recovered_202c9e0();
    pf_varargs_202ecc0__4_(pcVar9,param_3,str_020cca4c,0x20d9f05);
LAB_020382f9:
    recovered_202dd30(pcVar9,param_3,str_020c70e3);
    return 1;
  }
  if (param_3 == 0 || local_14 == (char *)0x0) {
    return 0;
  }
  if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
    (pcVar9 + uVar4)[0] = '\n';
    (pcVar9 + uVar4)[1] = '\0';
  }
  uVar4 = recovered_2002270(pcVar9);
  if (param_3 <= uVar4 + 1) {
    return 0;
  }
  pcVar9 = pcVar9 + uVar4;
  cVar5 = 'n';
  iVar3 = 0;
  do {
    pcVar9[iVar3] = cVar5;
    cVar5 = str_020cc9e9[iVar3 + 1];
    iVar8 = iVar3 + 1;
    if (cVar5 == '\0') break;
    uVar6 = iVar3 + uVar4 + 2;
    iVar3 = iVar8;
  } while (uVar6 < param_3);
LAB_02037fa9:
  pcVar9[iVar8] = '\0';
  return 0;
  while (uVar6 = iVar3 + uVar4 + 2, iVar3 = iVar8, uVar6 < param_3) {
LAB_02037f90:
    pcVar9[iVar3] = cVar5;
    cVar5 = str_020cc9a8[iVar3 + 1];
    iVar8 = iVar3 + 1;
    if (cVar5 == '\0') break;
  }
  goto LAB_02037fa9;
  while (uVar6 = iVar3 + uVar4 + 2, iVar3 = iVar8, uVar6 < param_3) {
LAB_02038150:
    pcVar9[iVar3] = cVar5;
    cVar5 = str_020cc9c3[iVar3 + 1];
    iVar8 = iVar3 + 1;
    if (cVar5 == '\0') break;
  }
  goto LAB_02037fa9;
LAB_02037fb4:
  pcVar9 = local_14;
  if (param_3 == 0 || local_14 == (char *)0x0) {
    return 1;
  }
  if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
    (pcVar9 + uVar4)[0] = '\n';
    (pcVar9 + uVar4)[1] = '\0';
  }
  uVar4 = recovered_2002270(pcVar9);
  if (param_3 <= uVar4 + 1) {
    return 1;
  }
  cVar5 = 'u';
  iVar3 = 0;
  do {
    pcVar9[iVar3 + uVar4] = cVar5;
    cVar5 = str_020cc97f[iVar3 + 1];
    iVar8 = iVar3 + 1;
    if (cVar5 == '\0') break;
    uVar6 = iVar3 + uVar4 + 2;
    iVar3 = iVar8;
  } while (uVar6 < param_3);
  pcVar9[iVar8 + uVar4] = '\0';
  return 1;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef DAT_020d9d6a
#undef DAT_020d9d70
#undef DAT_020d9f05
#undef DAT_020d9ff6
#undef DAT_020da0e7
#undef Ram020d9d6a
#undef str_020c70e3
#undef str_020c7213
#undef str_020cc97f
#undef str_020cc990
#undef str_020cc9a8
#undef str_020cc9c3
#undef str_020cc9e9
#undef str_020cca0a
#undef str_020cca34
#undef str_020cca4c
#undef str_020cca5d
#undef str_020d9e14
#undef format
#undef local_5de
#undef local_4ed
#undef local_3fc
#undef local_214
#undef local_210
#undef local_202
#undef local_111
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
