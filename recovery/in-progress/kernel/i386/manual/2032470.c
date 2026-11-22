/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c7928 (*(uint8_t *)(0x20c7928U))
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c7906 (*(char (*)[1])(0x20c7906U))
#define str_020c792b (*(char (*)[1])(0x20c792bU))
#define str_020c793c (*(char (*)[1])(0x20c793cU))
#define str_020c794c (*(char (*)[1])(0x20c794cU))
#define str_020c7955 (*(char (*)[1])(0x20c7955U))
#define str_020c7974 (*(char (*)[1])(0x20c7974U))
#define str_020c7989 (*(char (*)[1])(0x20c7989U))
#define str_020c79a4 (*(char (*)[1])(0x20c79a4U))
#define str_020c79c0 (*(char (*)[1])(0x20c79c0U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define in_stack_ffffe930 (*(int * *)(frame + 16))
#define local_16c0 (*(undefined1 (*)[4])(frame + 32))
#define local_16bc (*(uint *)(frame + 36))
#define local_1588 (*(char (*)[1632])(frame + 344))
#define local_f28 (*(undefined1 (*)[2961])(frame + 1976))
#define local_397 (*(char (*)[241])(frame + 4937))
#define local_2a6 (*(int (*)[60])(frame + 5178))
#define local_1b5 (*(char (*)[160])(frame + 5419))
#define local_115 (*(char (*)[241])(frame + 5579))
#define local_24 (*(int *)(frame + 5820))
#define local_20 (*(int *)(frame + 5824))
#define local_1c (*(uint *)(frame + 5828))
#define local_18 (*(char * *)(frame + 5832))
#define local_11 (*(byte *)(frame + 5839))


int recovered_2032470(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[5888] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;

  local_24 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = in_EDX;
LAB_020324a5:
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  local_115[0] = '\0';
  bVar2 = *in_ECX;
  uVar10 = (uint)bVar2;
  if ((uVar10 != 0x22) && (uVar10 != 0x27)) {
    if (uVar10 != 0) {
      uVar11 = uVar10;
      uVar10 = 0;
      goto joined_r0x020324e3;
    }
LAB_02032781:
    pcVar6 = local_18;
    iVar5 = local_24;
    if (local_24 == 0 || local_20 != 0) {
      return local_24;
    }
    if ((local_1c & 1) != 0) {
      return local_24;
    }
    if (param_3 == 0 || local_18 == (char *)0x0) {
      return local_24;
    }
    if ((*local_18 != '\0') && (uVar8 = recovered_2002270(local_18), uVar8 + 1 < param_3)) {
      (pcVar6 + uVar8)[0] = '\n';
      (pcVar6 + uVar8)[1] = '\0';
    }
    uVar8 = recovered_2002270(pcVar6);
    if (param_3 <= uVar8 + 1) {
      return iVar5;
    }
    cVar9 = 'k';
    iVar12 = 0;
    goto LAB_02032800;
  }
  bVar2 = in_ECX[1];
  uVar11 = (uint)bVar2;
  in_ECX = in_ECX + 1;
joined_r0x020324e3:
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    in_ECX = in_ECX + 1;
    uVar4 = 0;
    do {
      if (uVar10 == 0) {
        if ((uVar11 - 9 < 0x18) && ((0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar10 == (int)(char)uVar11) goto LAB_02032551;
      if (uVar4 + 1 < 0xf1) {
        local_115[uVar4] = (char)uVar11;
        uVar4 = uVar4 + 1;
      }
      bVar2 = *in_ECX;
      uVar11 = (uint)bVar2;
      in_ECX = in_ECX + 1;
    } while (bVar2 != 0);
    in_ECX = in_ECX + -1;
  }
LAB_02032551:
  local_115[uVar4] = '\0';
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  if (uVar4 == 0) goto LAB_02032781;
  local_11 = 0;
  iVar5 = recovered_20022a0(local_115,str_020c7213);
  pcVar6 = local_18;
  if (iVar5 != 0) {
    iVar5 = recovered_20022a0(local_115,&DAT_020c7928);
    if (iVar5 == 0) {
      local_1c = 1;
      goto LAB_020324a5;
    }
    pf_varargs_202ce90__4_(str_020c792b,(uint)local_115);
    recovered_2001e00(local_16c0,0,0x1328);
    local_1b5[0] = '\0';
    local_11 = 0;
    iVar5 = DAT_020d9d48;
    pcVar6 = str_020c7974;
    if ((iVar5 == 0) || (bVar2 = DAT_020d9d65, (bVar2 & 1) != 0)) {
LAB_02032741:
      pf_varargs_20044f0__4_(local_1b5,0xa0,&DAT_020c5119,(uint)pcVar6);
      in_stack_ffffe930 = (int *)pcVar6;
    }
    else {
      if (local_115[0] == '\0') {
        pcVar6 = str_020c7989;
        goto LAB_02032741;
      }
      pf_varargs_202ce90__4_(str_020c79a4,(uint)local_115);
      recovered_2030400(local_115,str_020d9e14,(char *)local_2a6);
      cVar9 = str_020d9e14[0];
      pcVar6 = &DAT_020c5359;
      if (cVar9 != '\0') {
        pcVar6 = str_020d9e14;
      }
      pf_varargs_202ce90__4__4_(str_020c79c0,(uint)local_2a6,(uint)pcVar6);
      if (((char)local_2a6[0] == '\0') ||
         (iVar5 = recovered_20022a0((char *)local_2a6,&DAT_020c5359), iVar5 == 0)) {
        pcVar6 = str_020c6ac7;
      }
      else {
        pcVar6 = str_020c6d20;
        in_stack_ffffe930 = local_2a6;
      }
      pf_varargs_20044f0__4_(local_397,0xf1,pcVar6,(uint)in_stack_ffffe930);
      puVar3 = (uint *)DAT_020d9d5c;
      uVar7 = recovered_2060420(local_2a6,local_397,puVar3,local_16c0,local_1b5,0xa0,&local_11);
      if ((char)uVar7 != '\0') {
        local_20 = local_20 + (uint)local_11;
        pcVar6 = local_115;
        if ((local_1c & 1) != 0) {
          if (local_1588[0] != '\0') {
            pcVar6 = local_1588;
          }
          pf_varargs_202ecc0__4__4__4_
                    (local_18,param_3,str_020c794c,local_16bc,(uint)pcVar6,(uint)local_f28);
        }
        goto LAB_020324a5;
      }
    }
    pf_varargs_202ecc0__4__4_(local_18,param_3,str_020c793c,(uint)local_115,(uint)local_1b5);
    local_24 = 0;
    goto LAB_020324a5;
  }
  if (param_3 != 0 && local_18 != (char *)0x0) {
    if ((*local_18 != '\0') && (uVar8 = recovered_2002270(local_18), uVar8 + 1 < param_3)) {
      (pcVar6 + uVar8)[0] = '\n';
      (pcVar6 + uVar8)[1] = '\0';
    }
    uVar8 = recovered_2002270(pcVar6);
    if (uVar8 + 1 < param_3) {
      cVar9 = 'u';
      iVar5 = 0;
      do {
        pcVar6[iVar5 + uVar8] = cVar9;
        cVar9 = str_020c7906[iVar5 + 1];
        iVar12 = iVar5 + 1;
        if (cVar9 == '\0') break;
        uVar10 = iVar5 + uVar8 + 2;
        iVar5 = iVar12;
      } while (uVar10 < param_3);
      pcVar6[iVar12 + uVar8] = '\0';
    }
  }
  return 1;
  while (uVar10 = iVar12 + uVar8 + 2, iVar12 = iVar1, uVar10 < param_3) {
LAB_02032800:
    pcVar6[iVar12 + uVar8] = cVar9;
    cVar9 = str_020c7955[iVar12 + 1];
    iVar1 = iVar12 + 1;
    if (cVar9 == '\0') break;
  }
  pcVar6[iVar1 + uVar8] = '\0';
  return iVar5;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c7928
#undef DAT_020d9d48
#undef DAT_020d9d5c
#undef DAT_020d9d65
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020c7906
#undef str_020c792b
#undef str_020c793c
#undef str_020c794c
#undef str_020c7955
#undef str_020c7974
#undef str_020c7989
#undef str_020c79a4
#undef str_020c79c0
#undef str_020d9e14
#undef in_stack_ffffe930
#undef local_16c0
#undef local_16bc
#undef local_1588
#undef local_f28
#undef local_397
#undef local_2a6
#undef local_1b5
#undef local_115
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
