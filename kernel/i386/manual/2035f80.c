/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc6a9 (*(char (*)[1])(0x20cc6a9U))
#define str_020cc6c4 (*(char (*)[1])(0x20cc6c4U))
#define str_020cc6d0 (*(char (*)[1])(0x20cc6d0U))
#define str_020cc6ec (*(char (*)[1])(0x20cc6ecU))
#define str_020cc705 (*(char (*)[1])(0x20cc705U))
#define str_020cc721 (*(char (*)[1])(0x20cc721U))
#define str_020cc744 (*(char (*)[1])(0x20cc744U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_1213 (*(char (*)[3856])(frame + 29))
#define local_303 (*(char (*)[241])(frame + 3885))
#define local_212 (*(byte (*)[241])(frame + 4126))
#define local_121 (*(byte (*)[241])(frame + 4367))
#define local_30 (*(undefined1 (*)[12])(frame + 4608))
#define local_24 (*(uint *)(frame + 4620))
#define local_20 (*(int *)(frame + 4624))
#define local_19 (*(char *)(frame + 4631))
#define local_18 (*(char * *)(frame + 4632))
#define local_14 (*(undefined4 *)(frame + 4636))
#define in_stack_ffffede0 (*(byte * *)(frame + 16))
#define vararg0 (*(byte * *)(frame + 16))


undefined4 recovered_2035f80(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[4688] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 extraout_ECX = 0;
  char cVar9;
  uint uVar10;
  char *pcVar11;

  local_20 = 0;
  local_24 = 0;
  local_18 = in_EDX;
  do {
    uVar10 = local_24;
    vararg0 = in_stack_ffffede0;
LAB_02035fa2:
    do {
      if (in_ECX == (byte *)0x0) {
        in_ECX = &DAT_020c5084;
      }
      else {
        for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
        }
      }
      local_121[0] = 0;
      bVar2 = *in_ECX;
      uVar8 = (uint)bVar2;
      local_24 = uVar10;
      if ((uVar8 != 0x22) && (uVar8 != 0x27)) {
        if (uVar8 != 0) {
          uVar10 = uVar8;
          uVar8 = 0;
          goto joined_r0x02035ff3;
        }
LAB_0203617f:
        pcVar11 = local_18;
        local_19 = param_3 == 0 || local_18 == (char *)0x0;
        if (local_20 != 0) {
          local_14 = 1;
          iVar4 = 0;
          goto LAB_020361bc;
        }
        if ((bool)local_19) {
          return 0;
        }
        local_14 = 0;
        if ((*local_18 != '\0') && (uVar7 = recovered_2002270(local_18), uVar7 + 1 < param_3)) {
          (pcVar11 + uVar7)[0] = '\n';
          (pcVar11 + uVar7)[1] = '\0';
        }
        uVar7 = recovered_2002270(pcVar11);
        if (param_3 <= uVar7 + 1) {
          return local_14;
        }
        pcVar11 = pcVar11 + uVar7;
        cVar9 = 't';
        iVar4 = 0;
        goto LAB_02036430;
      }
      bVar2 = in_ECX[1];
      uVar10 = (uint)bVar2;
      in_ECX = in_ECX + 1;
joined_r0x02035ff3:
      if (bVar2 == 0) {
        uVar3 = 0;
      }
      else {
        in_ECX = in_ECX + 1;
        uVar3 = 0;
        do {
          if (uVar8 == 0) {
            if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) break;
          }
          else if (uVar8 == (int)(char)(byte)uVar10) goto LAB_02036071;
          if (uVar3 + 1 < 0xf1) {
            local_121[uVar3] = (byte)uVar10;
            uVar3 = uVar3 + 1;
          }
          bVar2 = *in_ECX;
          uVar10 = (uint)bVar2;
          in_ECX = in_ECX + 1;
        } while (bVar2 != 0);
        in_ECX = in_ECX + -1;
      }
LAB_02036071:
      in_stack_ffffede0 = local_121;
      local_121[uVar3] = 0;
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
      if (uVar3 == 0) goto LAB_0203617f;
      iVar4 = recovered_20022a0((char *)in_stack_ffffede0,str_020c7213);
      pcVar11 = local_18;
      if (iVar4 == 0) {
        local_14 = 1;
        if (param_3 == 0 || local_18 == (char *)0x0) {
          return 1;
        }
        if ((*local_18 != '\0') && (uVar7 = recovered_2002270(local_18), uVar7 + 1 < param_3)) {
          (pcVar11 + uVar7)[0] = '\n';
          (pcVar11 + uVar7)[1] = '\0';
        }
        uVar7 = recovered_2002270(pcVar11);
        if (param_3 <= uVar7 + 1) {
          return local_14;
        }
        cVar9 = 'u';
        iVar4 = 0;
        goto LAB_020363b0;
      }
      iVar4 = recovered_20022a0((char *)in_stack_ffffede0,str_020cc6c4);
      pcVar11 = local_18;
      uVar10 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    } while (iVar4 == 0);
    if ((local_121[0] == 0x2d) && (local_121[1] != '\0')) {
      pbVar5 = local_121;
      uVar10 = local_24;
      do {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
        if (bVar2 < 99) {
          if (bVar2 != 0x61) goto LAB_02036110;
LAB_020360f5:
          uVar10 = (uint)CONCAT21((short)(uVar10 >> 0x10),(char)uVar10) << 8;
        }
        else {
          uVar10 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11(1,(char)uVar10));
          if (bVar2 != 99) {
            if (bVar2 == 0x6d) goto LAB_020360f5;
            goto LAB_02036153;
          }
        }
        uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)(uVar10 >> 8));
      } while( true );
    }
    if (local_20 == 0x10) goto LAB_02036453;
    iVar4 = local_20 * 0xf1;
    local_20 = local_20 + 1;
    pf_varargs_20044f0__4_(local_1213 + iVar4,0xf1,&DAT_020c5119,(uint)in_stack_ffffede0);
  } while( true );
LAB_020361bc:
  recovered_2030400(local_1213 + iVar4 * 0xf1,str_020d9e14,(char *)local_212);
  iVar6 = recovered_20022a0((char *)local_212,&DAT_020c5359);
  if (iVar6 == 0) {
    if (local_19 == '\0') {
      local_14 = 0;
      if ((*pcVar11 != '\0') && (uVar7 = recovered_2002270(pcVar11), uVar7 + 1 < param_3)) {
        (pcVar11 + uVar7)[0] = '\n';
        (pcVar11 + uVar7)[1] = '\0';
      }
      uVar7 = recovered_2002270(pcVar11);
      if (param_3 <= uVar7 + 1) goto LAB_020361b6;
      cVar9 = 't';
      iVar6 = 0;
      do {
        pcVar11[iVar6 + uVar7] = cVar9;
        cVar9 = str_020cc721[iVar6 + 1];
        iVar1 = iVar6 + 1;
        if (cVar9 == '\0') break;
        uVar10 = iVar6 + uVar7 + 2;
        iVar6 = iVar1;
      } while (uVar10 < param_3);
      pcVar11[iVar1 + uVar7] = '\0';
      local_14 = 0;
      goto LAB_020361b3;
    }
LAB_020362c6:
    local_14 = 0;
  }
  else {
    if ((local_212[0] == 0) ||
       (iVar6 = recovered_20022a0((char *)local_212,&DAT_020c5359), iVar6 == 0)) {
      pcVar11 = str_020c6ac7;
    }
    else {
      vararg0 = local_212;
      pcVar11 = str_020c6d20;
    }
    pf_varargs_20044f0__4_(local_303,0xf1,pcVar11,(uint)vararg0);
    recovered_2001e00(local_30,0,0xc);
    iVar6 = DAT_020d9d5c;
    uVar10 = recovered_202ad00(iVar6,local_303,local_30);
    if (uVar10 == 0 && (local_24 & 1) == 0) {
      vararg0 = (byte *)0x0;
      iVar6 = DAT_020d9d5c;
      uVar10 = recovered_202b490(iVar6,local_303,(void *)0x0,0);
      pcVar11 = local_18;
      if (uVar10 == 0) {
        vararg0 = local_212;
        pf_varargs_202ecc0__4_(local_18,param_3,str_020cc744,(uint)vararg0);
        goto LAB_020362c6;
      }
    }
    else {
LAB_020361b3:
      pcVar11 = local_18;
    }
  }
LAB_020361b6:
  iVar4 = iVar4 + 1;
  if (iVar4 == local_20) {
    return local_14;
  }
  goto LAB_020361bc;
LAB_02036110:
  if (bVar2 != 0) {
LAB_02036153:
    pf_varargs_202ecc0__4_(local_18,param_3,str_020cc6d0,(int)(char)bVar2);
    return 0;
  }
  goto LAB_02035fa2;
LAB_02036453:
  local_14 = 0;
  if (param_3 == 0 || local_18 == (char *)0x0) {
    return 0;
  }
  if ((*local_18 != '\0') && (uVar7 = recovered_2002270(local_18), uVar7 + 1 < param_3)) {
    (pcVar11 + uVar7)[0] = '\n';
    (pcVar11 + uVar7)[1] = '\0';
  }
  uVar7 = recovered_2002270(pcVar11);
  if (param_3 <= uVar7 + 1) {
    return local_14;
  }
  pcVar11 = pcVar11 + uVar7;
  cVar9 = 't';
  iVar4 = 0;
  while( true ) {
    pcVar11[iVar4] = cVar9;
    cVar9 = str_020cc6ec[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
    uVar10 = iVar4 + uVar7 + 2;
    iVar4 = iVar6;
    if (param_3 <= uVar10) break;
  }
  goto LAB_0203644a;
  while (uVar10 = iVar4 + uVar7 + 2, iVar4 = iVar6, uVar10 < param_3) {
LAB_020363b0:
    pcVar11[iVar4 + uVar7] = cVar9;
    cVar9 = str_020cc6a9[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
  }
  pcVar11[iVar6 + uVar7] = '\0';
  return local_14;
  while (uVar10 = iVar4 + uVar7 + 2, iVar4 = iVar6, uVar10 < param_3) {
LAB_02036430:
    pcVar11[iVar4] = cVar9;
    cVar9 = str_020cc705[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
  }
LAB_0203644a:
  pcVar11[iVar6] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020cc6a9
#undef str_020cc6c4
#undef str_020cc6d0
#undef str_020cc6ec
#undef str_020cc705
#undef str_020cc721
#undef str_020cc744
#undef str_020d9e14
#undef local_1213
#undef local_303
#undef local_212
#undef local_121
#undef local_30
#undef local_24
#undef local_20
#undef local_19
#undef local_18
#undef local_14
#undef in_stack_ffffede0
#undef vararg0
