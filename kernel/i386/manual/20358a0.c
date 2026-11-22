/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc5e3 (*(char (*)[1])(0x20cc5e3U))
#define str_020cc608 (*(char (*)[1])(0x20cc608U))
#define str_020cc612 (*(char (*)[1])(0x20cc612U))
#define str_020cc61c (*(char (*)[1])(0x20cc61cU))
#define str_020cc638 (*(char (*)[1])(0x20cc638U))
#define str_020cc651 (*(char (*)[1])(0x20cc651U))
#define str_020cc668 (*(char (*)[1])(0x20cc668U))
#define str_020cc68b (*(char (*)[1])(0x20cc68bU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_17e0 (*(char (*)[3856])(frame + 32))
#define local_8d0 (*(char (*)[488])(frame + 3888))
#define local_6e8 (*(byte *)(frame + 4376))
#define local_6e4 (*(int *)(frame + 4380))
#define local_6d5 (*(char (*)[241])(frame + 4395))
#define local_5e4 (*(char (*)[488])(frame + 4636))
#define local_3fc (*(uint *)(frame + 5124))
#define uStack_17 (*(undefined3 *)(frame + 6121))
#define local_3f8 (*(int *)(frame + 5128))
#define local_3ec (*(char (*)[241])(frame + 5140))
#define local_2fb (*(undefined2 (*)[120])(frame + 5381))
#define local_20b (*(char *)(frame + 5621))
#define local_20a (*(char (*)[241])(frame + 5622))
#define local_119 (*(char (*)[241])(frame + 5863))
#define local_28 (*(undefined4 *)(frame + 6104))
#define local_24 (*(int *)(frame + 6108))
#define local_20 (*(uint *)(frame + 6112))
#define local_1c (*(int *)(frame + 6116))
#define local_18 (*(byte *)(frame + 6120))
#define local_14 (*(char * *)(frame + 6124))


undefined4 recovered_20358a0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[6176] __attribute__((aligned(16))) = {0};

  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  undefined4 extraout_ECX = 0;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  char *pcVar15;

  local_20 = 0;
  local_1c = 0;
  uStack_17 = 0;
  local_14 = in_EDX;
  bVar2 = 0;
LAB_020358c7:
  do {
    uVar1 = uStack_17;
    do {
      uStack_17 = uVar1;
      local_18 = bVar2;
      if (in_ECX == (byte *)0x0) {
        in_ECX = &DAT_020c5084;
      }
      else {
        for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
        }
      }
      local_119[0] = '\0';
      bVar2 = *in_ECX;
      uVar10 = (uint)bVar2;
      if ((uVar10 != 0x22) && (uVar10 != 0x27)) {
        if (uVar10 != 0) {
          uVar11 = uVar10;
          uVar10 = 0;
          goto joined_r0x02035916;
        }
LAB_02035a96:
        pcVar5 = local_14;
        if (local_1c != 0) {
          uVar14 = 1;
          iVar4 = 0;
          goto LAB_02035ad2;
        }
        if (param_3 == 0 || local_14 == (char *)0x0) {
          return 0;
        }
        if ((*local_14 != '\0') && (uVar8 = recovered_2002270(local_14), uVar8 + 1 < param_3)) {
          pcVar13 = pcVar5 + uVar8;
          pcVar13[0] = '\n';
          pcVar13[1] = '\0';
        }
        uVar8 = recovered_2002270(pcVar5);
        if (param_3 <= uVar8 + 1) {
          return 0;
        }
        local_14 = local_14 + uVar8;
        cVar9 = 'm';
        iVar4 = 0;
        goto LAB_02035ec0;
      }
      bVar2 = in_ECX[1];
      uVar11 = (uint)bVar2;
      in_ECX = in_ECX + 1;
joined_r0x02035916:
      if (bVar2 == 0) {
        uVar3 = 0;
      }
      else {
        in_ECX = in_ECX + 1;
        uVar3 = 0;
        do {
          if (uVar10 == 0) {
            if ((uVar11 - 9 < 0x18) && ((0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0)) break;
          }
          else if (uVar10 == (int)(char)uVar11) goto LAB_02035991;
          if (uVar3 + 1 < 0xf1) {
            local_119[uVar3] = (char)uVar11;
            uVar3 = uVar3 + 1;
          }
          bVar2 = *in_ECX;
          uVar11 = (uint)bVar2;
          in_ECX = in_ECX + 1;
        } while (bVar2 != 0);
        in_ECX = in_ECX + -1;
      }
LAB_02035991:
      local_119[uVar3] = '\0';
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
      if (uVar3 == 0) goto LAB_02035a96;
      iVar4 = recovered_20022a0(local_119,str_020c7213);
      pcVar5 = local_14;
      if (iVar4 == 0) {
        if (param_3 == 0 || local_14 == (char *)0x0) {
          return 1;
        }
        if ((*local_14 != '\0') && (uVar8 = recovered_2002270(local_14), uVar8 + 1 < param_3)) {
          (pcVar5 + uVar8)[0] = '\n';
          (pcVar5 + uVar8)[1] = '\0';
        }
        uVar8 = recovered_2002270(pcVar5);
        if (param_3 <= uVar8 + 1) {
          return 1;
        }
        cVar9 = 'u';
        iVar4 = 0;
        goto LAB_02035e40;
      }
      iVar4 = recovered_20022a0(local_119,str_020cc608);
      if (iVar4 == 0) {
        local_20 = 1;
        bVar2 = local_18;
        goto LAB_020358c7;
      }
      iVar4 = recovered_20022a0(local_119,str_020cc612);
      pcVar5 = local_14;
      bVar2 = 1;
      uVar1 = (int3)((uint)extraout_ECX >> 8);
    } while (iVar4 == 0);
    if ((local_119[0] != '-') || (local_119[1] == '\0')) {
      if (local_1c == 0x10) {
        if (param_3 == 0 || local_14 == (char *)0x0) {
          return 0;
        }
        if ((*local_14 != '\0') && (uVar8 = recovered_2002270(local_14), uVar8 + 1 < param_3)) {
          pcVar13 = pcVar5 + uVar8;
          pcVar13[0] = '\n';
          pcVar13[1] = '\0';
        }
        uVar8 = recovered_2002270(pcVar5);
        if (param_3 <= uVar8 + 1) {
          return 0;
        }
        local_14 = local_14 + uVar8;
        cVar9 = 'm';
        iVar4 = 0;
        goto LAB_02035f5a;
      }
      iVar4 = local_1c * 0xf1;
      local_1c = local_1c + 1;
      pf_varargs_20044f0__4_(local_17e0 + iVar4,0xf1,&DAT_020c5119,(uint)local_119);
      bVar2 = local_18;
      goto LAB_020358c7;
    }
    pcVar5 = local_119 + 1;
    bVar2 = local_18;
    while( true ) {
      for (; cVar9 = *pcVar5, cVar9 == 'p'; pcVar5 = pcVar5 + 1) {
        local_20 = 1;
      }
      if (cVar9 != 'v') break;
      bVar2 = 1;
      pcVar5 = pcVar5 + 1;
    }
    if (cVar9 != '\0') {
      pf_varargs_202ecc0__4_(local_14,param_3,str_020cc61c,(int)cVar9);
      return 0;
    }
  } while( true );
LAB_02035ad2:
  recovered_2030400(local_17e0 + iVar4 * 0xf1,str_020d9e14,local_20a);
  pcVar5 = (char *)0x2035b03;
  uVar10 = recovered_2030680(local_20a,local_8d0);
  if ((char)uVar10 == '\0') {
    if ((local_20 & 1) == 0) {
      if ((local_20a[0] == '\0') || (iVar6 = recovered_20022a0(local_20a,&DAT_020c5359), iVar6 == 0)
         ) {
        pcVar13 = str_020c6ac7;
      }
      else {
        pcVar5 = local_20a;
        pcVar13 = str_020c6d20;
      }
      pf_varargs_20044f0__4_(local_5e4,0xf1,pcVar13,(uint)pcVar5);
      iVar6 = DAT_020d9d5c;
      uVar10 = recovered_202bc40(iVar6,local_5e4);
      pcVar5 = str_020cc68b;
      uVar12 = uVar14;
      if ((uVar10 & 1) == 0) {
        pcVar5 = str_020cc668;
        uVar12 = 0;
      }
      bVar2 = ~(byte)uVar10 | local_18;
    }
    else {
      local_28 = uVar14;
      iVar6 = recovered_20022a0(local_20a,&DAT_020c5359);
      if (iVar6 != 0) {
        local_2fb[0] = 0x2f;
        pcVar5 = &local_20b;
        do {
          cVar9 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
        } while (cVar9 == '/');
        if (cVar9 != '\0') {
          local_24 = iVar4;
          do {
            pcVar13 = pcVar5 + -1;
            uVar10 = 0;
            while ((cVar9 != '\0' && (cVar9 != '/'))) {
              if (uVar10 + 1 < 0xf1) {
                local_3ec[uVar10] = cVar9;
                uVar10 = uVar10 + 1;
              }
              pcVar15 = pcVar5 + 1;
              pcVar5 = pcVar5 + 1;
              pcVar13 = pcVar13 + 1;
              cVar9 = *pcVar15;
            }
            local_3ec[uVar10] = '\0';
            do {
              pcVar5 = pcVar13 + 1;
              pcVar13 = pcVar13 + 1;
            } while (*pcVar5 == '/');
            if (local_3ec[0] != '\0') {
              iVar6 = recovered_20022a0((char *)local_2fb,&DAT_020c5359);
              if ((iVar6 != 0) && (uVar8 = recovered_2002270((char *)local_2fb), uVar8 + 1 < 0xf1))
              {
                *(undefined2 *)((int)local_2fb + uVar8) = 0x2f;
              }
              uVar8 = recovered_2002270((char *)local_2fb);
              uVar7 = recovered_2002270(local_3ec);
              if (0xffffff0e < (uVar8 - 0xf0) + uVar7) {
                uVar8 = recovered_2002270((char *)local_2fb);
                uVar7 = recovered_2002270(local_3ec);
                pcVar5 = (char *)local_2fb;
                recovered_2001b70((void *)((int)local_2fb + uVar8),local_3ec,uVar7 + 1);
                pcVar15 = (char *)0x2035d8f;
                uVar10 = recovered_2030680(pcVar5,local_5e4);
                if ((char)uVar10 == '\0') {
                  if (((char)local_2fb[0] == '\0') ||
                     (iVar4 = recovered_20022a0(pcVar5,&DAT_020c5359), iVar4 == 0)) {
                    pcVar5 = pcVar15;
                    pcVar15 = str_020c6ac7;
                  }
                  else {
                    pcVar15 = str_020c6d20;
                  }
                  pf_varargs_20044f0__4_(local_6d5,0xf1,pcVar15,(uint)pcVar5);
                  iVar4 = local_24;
                  iVar6 = DAT_020d9d5c;
                  uVar10 = recovered_202bc40(iVar6,local_6d5);
                }
                else {
                  iVar4 = local_24;
                  if (local_3f8 == 2) goto LAB_02035c62;
                  uVar10 = local_3fc & 2;
                }
                if (uVar10 != 0) goto LAB_02035c62;
              }
              uVar12 = 0;
              pcVar5 = str_020cc668;
              goto LAB_02035ab0;
            }
LAB_02035c62:
            cVar9 = *pcVar13;
            pcVar5 = pcVar13;
          } while (cVar9 != '\0');
        }
      }
      pcVar5 = str_020cc68b;
      uVar12 = local_28;
      uVar14 = local_28;
      bVar2 = local_18;
    }
    if ((bVar2 & 1) != 0) goto LAB_02035ab0;
  }
  else {
    uVar12 = 0;
    pcVar5 = str_020cc668;
    if (((local_20 & 1) == 0) || ((local_6e4 != 2 && ((local_6e8 & 2) == 0)))) {
LAB_02035ab0:
      pf_varargs_202ecc0__4_(local_14,param_3,pcVar5,(uint)local_20a);
      uVar14 = uVar12;
    }
  }
  iVar4 = iVar4 + 1;
  if (iVar4 == local_1c) {
    return uVar14;
  }
  goto LAB_02035ad2;
  while (uVar10 = iVar4 + uVar8 + 2, iVar4 = iVar6, uVar10 < param_3) {
LAB_02035ec0:
    local_14[iVar4] = cVar9;
    cVar9 = str_020cc651[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
  }
  goto LAB_02035eda;
  while (uVar10 = iVar4 + uVar8 + 2, iVar4 = iVar6, uVar10 < param_3) {
LAB_02035e40:
    pcVar5[iVar4 + uVar8] = cVar9;
    cVar9 = str_020cc5e3[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
  }
  pcVar5[iVar6 + uVar8] = '\0';
  return 1;
  while (uVar10 = iVar4 + uVar8 + 2, iVar4 = iVar6, uVar10 < param_3) {
LAB_02035f5a:
    local_14[iVar4] = cVar9;
    cVar9 = str_020cc638[iVar4 + 1];
    iVar6 = iVar4 + 1;
    if (cVar9 == '\0') break;
  }
LAB_02035eda:
  local_14[iVar6] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020cc5e3
#undef str_020cc608
#undef str_020cc612
#undef str_020cc61c
#undef str_020cc638
#undef str_020cc651
#undef str_020cc668
#undef str_020cc68b
#undef str_020d9e14
#undef local_17e0
#undef local_8d0
#undef local_6e8
#undef local_6e4
#undef local_6d5
#undef local_5e4
#undef local_3fc
#undef uStack_17
#undef local_3f8
#undef local_3ec
#undef local_2fb
#undef local_20b
#undef local_20a
#undef local_119
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
