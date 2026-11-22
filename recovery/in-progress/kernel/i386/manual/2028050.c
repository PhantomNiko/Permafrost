/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_0213072c (*(uint32_t volatile *)(0x213072cU))
#define DAT_02130730 (*(uint32_t volatile *)(0x2130730U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_02130860 (*(uint8_t volatile *)(0x2130860U))
#define str_020c518b (*(char (*)[1])(0x20c518bU))
#define str_020c52a9 (*(char (*)[1])(0x20c52a9U))
#define str_020c59c7 (*(char (*)[1])(0x20c59c7U))
#define str_020c59f6 (*(char (*)[1])(0x20c59f6U))
#define str_020c5a0e (*(char (*)[1])(0x20c5a0eU))
#define str_020c5a21 (*(char (*)[1])(0x20c5a21U))
#define str_020c5a35 (*(char (*)[1])(0x20c5a35U))
#define str_020c5a47 (*(char (*)[1])(0x20c5a47U))
#define str_020c5a60 (*(char (*)[1])(0x20c5a60U))
#define str_020c5a73 (*(char (*)[1])(0x20c5a73U))
#define str_020c5a89 (*(char (*)[1])(0x20c5a89U))
#define str_020c5aa3 (*(char (*)[1])(0x20c5aa3U))
#define str_020c5ab7 (*(char (*)[1])(0x20c5ab7U))
#define local_231 (*(uchar (*)[241])(frame + 31))
#define local_140 (*(undefined1 (*)[244])(frame + 272))
#define local_4c (*(void * *)(frame + 516))
#define local_44 (*(uint *)(frame + 524))
#define local_3c (*(uint *)(frame + 532))
#define local_38 (*(undefined4 *)(frame + 536))
#define local_30 (*(void * *)(frame + 544))
#define local_2c (*(char * *)(frame + 548))
#define local_28 (*(uint *)(frame + 552))
#define local_24 (*(char * *)(frame + 556))
#define local_20 (*(void * *)(frame + 560))
#define local_1c (*(uint *)(frame + 564))
#define local_18 (*(void * *)(frame + 568))
#define local_14 (*(char * *)(frame + 572))


uint recovered_2028050(int incoming_ecx,void *incoming_edx,int param_3)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uchar uVar7;
  char *pcVar8;
  char *pcVar9;
  uint count;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;
  undefined3 uVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;

  DAT_02130860 = 0;
  if (((incoming_ecx == 0) || (cVar5 = DAT_021307dc, cVar5 == '\0')) ||
     (incoming_edx == (void *)0x0 && param_3 != 0)) {
    pcVar8 = str_020c59c7;
    goto LAB_02028175;
  }
  bVar4 = PF_PART1(DAT_02130758, 0);
  if ((bVar4 & 1) != 0) {
    pcVar8 = str_020c59f6;
    goto LAB_02028175;
  }
  local_30 = incoming_edx;
  recovered_202a060(incoming_ecx,local_231);
  if (local_231[0] == '\0') {
    pcVar8 = str_020c52a9;
    goto LAB_02028175;
  }
  bVar6 = recovered_204cfa0();
  pvVar14 = (void *)0x0;
  local_28 = CONCAT31(PF_PART3(local_28, 1),bVar6);
  uVar10 = extraout_EDX;
  if (param_3 != 0 && !bVar6) {
    pvVar14 = recovered_2001650(param_3);
    if (pvVar14 == (void *)0x0) {
      pcVar8 = str_020c518b;
      goto LAB_02028175;
    }
    recovered_2001b70(pvVar14,local_30,param_3);
    uVar10 = extraout_EDX_00;
  }
  local_18 = pvVar14;
  pcVar8 = (char *)recovered_202af10(local_231,uVar10);
  recovered_2001e00(local_140,0,0x110);
  if (pcVar8 == (char *)0xffffffff) {
    pcVar2 = (char *)DAT_02130728;
    pcVar9 = pcVar2 + 1;
    pcVar3 = (char *)DAT_0213072c;
    if (pcVar3 < pcVar9) {
      pcVar2 = (char *)DAT_02130730;
      local_14 = pcVar9;
      if (pcVar2 == (char *)0x0 || pcVar9 <= pcVar2) {
        pcVar12 = (char *)0x10;
        if (pcVar3 != (char *)0x0) {
          pcVar12 = pcVar3;
        }
        for (; pcVar12 < pcVar9; pcVar12 = (char *)((int)pcVar12 * 2)) {
          if ((int)pcVar12 < 0) {
            pcVar12 = pcVar9;
            break;
          }
        }
        pcVar9 = pcVar12;
        if (pcVar2 <= pcVar12) {
          pcVar9 = pcVar2;
        }
        if (pcVar2 == (char *)0x0) {
          pcVar9 = pcVar12;
        }
        pvVar14 = (void *)DAT_02130724;
        pvVar14 = recovered_2001860(pvVar14,(int)pcVar9 * 0x110);
        if (pvVar14 != (void *)0x0) {
          pcVar2 = (char *)DAT_0213072c;
          iVar16 = (int)pcVar9 - (int)pcVar2;
          local_2c = pcVar9;
          local_24 = pcVar8;
          local_20 = pvVar14;
          if (pcVar2 <= pcVar9 && iVar16 != 0) {
            pvVar14 = (void *)((int)pvVar14 + (int)pcVar2 * 0x110);
            do {
              recovered_2001e00(pvVar14,0,0x110);
              pvVar14 = (void *)((int)pvVar14 + 0x110);
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          DAT_02130724 = local_20;
          DAT_0213072c = local_2c;
          if (local_14 <= local_2c) {
            pcVar2 = (char *)DAT_02130728;
            pcVar9 = pcVar2 + 1;
            pvVar14 = local_20;
            goto LAB_02028230;
          }
        }
      }
      recovered_2001710(local_18);
      pcVar8 = str_020c5a0e;
      goto LAB_02028175;
    }
    pvVar14 = (void *)DAT_02130724;
    local_24 = pcVar8;
LAB_02028230:
    pcVar8 = pcVar2;
    DAT_02130728 = pcVar9;
    recovered_2001e00((void *)((int)pcVar8 * 0x110 + (int)pvVar14),0,0x110);
    iVar16 = DAT_02130724;
    pcVar9 = local_24;
  }
  else {
    iVar16 = DAT_02130724;
    recovered_2001b70(local_140,(void *)((int)pcVar8 * 0x110 + iVar16),0x110);
    if ((local_44 & 2) != 0) {
      recovered_2001710(local_18);
      pcVar8 = str_020c5a21;
      goto LAB_02028175;
    }
    pcVar9 = pcVar8;
    if ((local_44 & 1) != 0) {
      recovered_2001710(local_18);
      pcVar8 = str_020c5a35;
      goto LAB_02028175;
    }
  }
  local_20 = (void *)CONCAT31(PF_PART3(local_20, 1),param_3 == 0);
  iVar15 = (int)pcVar8 * 0x110;
  local_14 = (char *)(iVar16 + iVar15);
  local_2c = pcVar8;
  local_24 = pcVar9;
  pf_varargs_20044f0__4_(local_14,0xf1,&DAT_020c5119,(uint)local_231);
  pcVar9 = local_24;
  pcVar8 = local_2c;
  *(void **)(iVar16 + 0xf4 + iVar15) = local_18;
  *(int *)(iVar16 + 0xf8 + iVar15) = param_3;
  *(undefined4 *)(iVar16 + 0xfc + iVar15) = 0;
  *(uint *)(iVar16 + 0x104 + iVar15) = local_3c;
  *(undefined4 *)(iVar16 + 0x108 + iVar15) = local_38;
  *(byte *)(iVar16 + 0x10c + iVar15) = (byte)local_28 ^ 1 | (byte)local_20;
  if (local_24 == (char *)0xffffffff) {
    uVar7 = recovered_204d260((uint)local_2c,incoming_edx_00);
    if (uVar7 == '\0') {
      recovered_2001710(local_18);
      recovered_2001e00(local_14,0,0x110);
      uVar1 = DAT_02130728;
      iVar16 = DAT_02130728;
      DAT_02130728 = iVar16 + -1;
      uVar1 = DAT_02130728;
      uVar1 = DAT_02130728;
      uVar1 = DAT_02130728;
      pcVar8 = str_020c5a47;
      goto LAB_02028175;
    }
  }
  pvVar14 = local_18;
  uVar13 = (undefined3)((uint)pcVar9 >> 8);
  if ((byte)local_28 == 0) {
    iVar16 = DAT_0213075c;
    if (iVar16 == 2) {
      uVar10 = recovered_204ebf0((int)local_14,(uint)pcVar8,pcVar9 == (char *)0xffffffff);
      if ((char)uVar10 == '\0') {
        recovered_2001710(pvVar14);
        if (pcVar9 == (char *)0xffffffff) {
          recovered_2001e00(local_14,0,0x110);
          uVar1 = DAT_02130728;
          iVar16 = DAT_02130728;
          DAT_02130728 = iVar16 + -1;
          uVar1 = DAT_02130728;
          uVar1 = DAT_02130728;
          uVar1 = DAT_02130728;
          recovered_204d520();
          pcVar8 = str_020c5aa3;
        }
        else {
          recovered_2001b70(local_14,local_140,0x110);
          pcVar8 = str_020c5aa3;
        }
        goto LAB_02028175;
      }
    }
    else {
      uVar10 = recovered_203e3a0((uint)pcVar8);
      if ((char)uVar10 == '\0') {
        recovered_2001710(pvVar14);
        if (pcVar9 == (char *)0xffffffff) {
          recovered_2001e00(local_14,0,0x110);
          uVar1 = DAT_02130728;
          iVar16 = DAT_02130728;
          DAT_02130728 = iVar16 + -1;
          uVar1 = DAT_02130728;
          uVar1 = DAT_02130728;
          uVar1 = DAT_02130728;
          recovered_204d520();
          pcVar8 = str_020c5ab7;
        }
        else {
          recovered_2001b70(local_14,local_140,0x110);
          pcVar8 = str_020c5ab7;
        }
        goto LAB_02028175;
      }
    }
    if (local_4c == (void *)0x0 || pcVar9 == (char *)0xffffffff) {
      return CONCAT31(uVar13,1);
    }
  }
  else {
    if (((param_3 == 0) || (uVar10 = DAT_02130748, uVar10 == 0)) || (-uVar10 < (uint)param_3)) {
      local_1c = 0;
      count = 0;
    }
    else {
      local_28 = ((param_3 - 1U) + uVar10) / uVar10;
      local_1c = 0;
      count = 0;
      if (!CARRY4(param_3 - 1U,uVar10)) {
        uVar10 = recovered_204d3b0();
        count = local_28;
        if (uVar10 < local_28) {
          recovered_2001710(local_18);
          if (pcVar9 == (char *)0xffffffff) {
            recovered_2001e00(local_14,0,0x110);
            uVar1 = DAT_02130728;
            iVar16 = DAT_02130728;
            DAT_02130728 = iVar16 + -1;
            uVar1 = DAT_02130728;
            uVar1 = DAT_02130728;
            uVar1 = DAT_02130728;
            recovered_204d520();
            pcVar8 = str_020c5a60;
          }
          else {
            recovered_2001b70(local_14,local_140,0x110);
            pcVar8 = str_020c5a60;
          }
          goto LAB_02028175;
        }
        uVar10 = recovered_204d6c0(local_28,&local_1c);
        if (((char)uVar10 == '\0') ||
           (uVar10 = recovered_204d8e0(local_1c,local_30,param_3,count), (char)uVar10 == '\0')) {
          recovered_204dbc0(local_1c);
          recovered_2001710(local_18);
          if (pcVar9 == (char *)0xffffffff) {
            recovered_2001e00(local_14,0,0x110);
            uVar1 = DAT_02130728;
            iVar16 = DAT_02130728;
            DAT_02130728 = iVar16 + -1;
            uVar1 = DAT_02130728;
            uVar1 = DAT_02130728;
            uVar1 = DAT_02130728;
            recovered_204d520();
            pcVar8 = str_020c5a73;
          }
          else {
            recovered_2001b70(local_14,local_140,0x110);
            pcVar8 = str_020c5a73;
          }
          goto LAB_02028175;
        }
      }
    }
    *(uint *)(local_14 + 0x104) = local_1c;
    *(uint *)(local_14 + 0x108) = count;
    pbVar11 = recovered_204dd80((int)local_231);
    if ((char)pbVar11 == '\0') {
      recovered_204dbc0(local_1c);
      recovered_2001710(local_18);
      if (pcVar9 == (char *)0xffffffff) {
        recovered_2001e00(local_14,0,0x110);
        uVar1 = DAT_02130728;
        iVar16 = DAT_02130728;
        DAT_02130728 = iVar16 + -1;
        uVar1 = DAT_02130728;
        uVar1 = DAT_02130728;
        uVar1 = DAT_02130728;
        recovered_204d520();
        pcVar8 = str_020c5a89;
      }
      else {
        recovered_2001b70(local_14,local_140,0x110);
        pcVar8 = str_020c5a89;
      }
LAB_02028175:
      pf_varargs_20044f0__4_(&DAT_02130860,0x80,&DAT_020c5119,(uint)pcVar8);
      return 0;
    }
    if (pcVar9 == (char *)0xffffffff) {
      return 0xffffff01;
    }
    recovered_204dbc0(local_3c);
    recovered_204e8f0();
    if (local_4c == (void *)0x0) {
      return CONCAT31(uVar13,1);
    }
  }
  recovered_2001710(local_4c);
  return CONCAT31(uVar13,1);
}
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_0213072c
#undef DAT_02130730
#undef DAT_02130748
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_021307dc
#undef DAT_02130860
#undef str_020c518b
#undef str_020c52a9
#undef str_020c59c7
#undef str_020c59f6
#undef str_020c5a0e
#undef str_020c5a21
#undef str_020c5a35
#undef str_020c5a47
#undef str_020c5a60
#undef str_020c5a73
#undef str_020c5a89
#undef str_020c5aa3
#undef str_020c5ab7
#undef local_231
#undef local_140
#undef local_4c
#undef local_44
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
