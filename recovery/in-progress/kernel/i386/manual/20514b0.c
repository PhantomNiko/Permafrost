/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208f820 (*(uint8_t *)(0x20c5acfU))
#define DAT_0208f825 (*(uint8_t *)(0x20c5ad4U))
#define local_14 (*(char * *)(frame + 828))
#define local_159 (*(char (*)[241])(frame + 503))
#define local_18 (*(ulong *)(frame + 824))
#define local_1c (*(uint *)(frame + 820))
#define local_20 (*(uint *)(frame + 816))
#define local_24 (*(int *)(frame + 812))
#define local_24a (*(char (*)[241])(frame + 262))
#define local_28 (*(int *)(frame + 808))
#define local_2c (*(ulong * *)(frame + 804))
#define local_30 (*(int *)(frame + 800))
#define local_33b (*(char (*)[241])(frame + 21))
#define local_34 (*(int *)(frame + 796))
#define local_37 (*(char (*)[3])(frame + 793))
#define local_3f (*(char (*)[8])(frame + 785))
#define local_44 (*(int *)(frame + 780))
#define local_48 (*(uint *)(frame + 776))
#define local_4c (*(uint *)(frame + 772))
#define local_50 (*(void * *)(frame + 768))
#define local_54 (*(char * *)(frame + 764))
#define local_58 (*(ulong *)(frame + 760))
#define local_68 (*(char (*)[16])(frame + 744))
uint recovered_20514b0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[880] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  undefined4 in_EAX = 0;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  void *left;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  if (incoming_edx < 2) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  local_28 = incoming_ecx + 0x214;
  local_24 = -incoming_edx;
  local_50 = (void *)(incoming_ecx + 0x1ea);
  local_4c = 1;
  local_34 = 0;
  local_48 = 0;
  local_44 = incoming_ecx;
  local_20 = incoming_edx;
LAB_02049703:
  local_2c = (ulong *)(local_44 + local_4c * 0x20c);
  local_14 = (char *)(local_44 + 8 + local_4c * 0x20c);
  local_30 = 0;
LAB_02049720:
  if (local_30 == 0) {
    cVar8 = *local_14;
    if (cVar8 != '\0') {
      pcVar9 = (char *)0x0;
      pcVar2 = local_14;
      do {
        if (cVar8 == '.') {
          pcVar9 = pcVar2;
        }
        else if (cVar8 == '\0') goto code_r0x020497a3;
        cVar8 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while( true );
    }
  }
  goto LAB_02049727;
code_r0x020497a3:
  if (pcVar9 == (char *)0x0) {
    uVar3 = 0;
    uVar10 = recovered_2002270(local_14);
  }
  else {
    uVar10 = (int)pcVar9 - (int)local_14;
    if ((uVar10 == 0) || (pcVar9[1] == '\0')) goto LAB_02049727;
    uVar3 = recovered_2002270(pcVar9 + 1);
  }
  local_1c = uVar3;
  if (3 < uVar3 || uVar10 - 9 < 0xfffffff8) {
LAB_02049727:
    pcVar9 = (char *)0x0;
    pcVar2 = local_14;
    do {
      if (*pcVar2 == '.') {
        pcVar9 = pcVar2;
      }
      else if (*pcVar2 == '\0') goto code_r0x0204973f;
      pcVar2 = pcVar2 + 1;
    } while( true );
  }
  local_18 = uVar10;
  recovered_2001e00(local_3f,0x20,0xb);
  uVar3 = 0;
  uVar11 = extraout_EDX_00;
  do {
    cVar8 = *(char *)(local_28 + uVar3);
    if ((byte)(cVar8 + 0x9fU) < 0x1a) {
      cVar8 = cVar8 + -0x20;
    }
    uVar4 = recovered_2051ec0((int)cVar8,uVar11);
    uVar10 = local_18;
    if ((char)uVar4 == '\0') goto LAB_02049727;
    local_3f[uVar3] = cVar8;
    uVar3 = uVar3 + 1;
    uVar11 = extraout_EDX_01;
  } while (uVar10 != uVar3);
  if (local_1c != 0) {
    uVar11 = 0;
    do {
      cVar8 = pcVar9[uVar11 + 1];
      if ((byte)(cVar8 + 0x9fU) < 0x1a) {
        cVar8 = cVar8 + -0x20;
      }
      uVar4 = recovered_2051ec0((int)cVar8,local_20);
      if ((char)uVar4 == '\0') goto LAB_02049727;
      local_37[uVar11] = cVar8;
      uVar11 = uVar11 + 1;
    } while (local_1c != uVar11);
  }
  goto LAB_02049a1a;
code_r0x0204973f:
  if (pcVar9 == (char *)0x0) {
    uVar11 = recovered_2002270(local_14);
    uVar3 = 0;
  }
  else {
    uVar11 = (int)pcVar9 - (int)local_14;
    uVar3 = recovered_2002270(pcVar9 + 1);
  }
  local_54 = pcVar9;
  if (uVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar10 = 0;
    uVar12 = 0;
    local_58 = uVar11;
    local_18 = uVar3;
    do {
      cVar8 = *(char *)(local_28 + uVar10);
      if ((byte)(cVar8 + 0x9fU) < 0x1a) {
        cVar8 = cVar8 + -0x20;
      }
      if ((cVar8 != ' ') && (cVar8 != '.')) {
        local_1c = uVar12 + 1;
        if (0xf0 < local_1c) {
          break;
        }
        uVar4 = recovered_2051ec0((int)cVar8,uVar11);
        if ((char)uVar4 == '\0') {
          cVar8 = '_';
        }
        local_159[uVar12] = cVar8;
        uVar3 = local_18;
        uVar11 = local_58;
        uVar12 = local_1c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  pcVar2 = local_54;
  bVar13 = local_54 != (char *)0x0;
  local_159[uVar12] = '\0';
  pcVar9 = &DAT_0208e2dc;
  if (bVar13) {
    pcVar9 = pcVar2 + 1;
  }
  if (uVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      cVar8 = *pcVar9;
      if ((byte)(cVar8 + 0x9fU) < 0x1a) {
        cVar8 = cVar8 + -0x20;
      }
      if ((cVar8 != ' ') && (cVar8 != '.')) {
        if (0xf0 < uVar12 + 1) break;
        local_1c = uVar12 + 1;
        local_18 = uVar3;
        uVar4 = recovered_2051ec0((int)cVar8,uVar11);
        if ((char)uVar4 == '\0') {
          cVar8 = '_';
        }
        local_24a[uVar12] = cVar8;
        uVar12 = local_1c;
        uVar3 = local_18;
        uVar11 = extraout_EDX;
      }
      pcVar9 = pcVar9 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  local_24a[uVar12] = '\0';
  if (local_159[0] == '\0') {
    pf_varargs_2003aa0___(local_159,0xf1,&DAT_0208f820);
  }
  pf_varargs_2003aa0__4_(local_68,0x10,&DAT_0208f825,local_30 + (uint)(local_30 == 0));
  uVar3 = recovered_2002270(local_68);
  if (uVar3 < 8) {
    uVar10 = -(uVar3 - 8);
  }
  else {
    uVar10 = 1;
  }
  uVar5 = recovered_2002270(local_159);
  if (uVar5 < uVar10) {
    uVar10 = recovered_2002270(local_159);
  }
  uVar10 = uVar10 + (uVar10 == 0);
  recovered_2001e00(local_3f,0x20,0xb);
  recovered_2001b70(local_3f,local_159,uVar10);
  if (8 - uVar10 <= uVar3) {
    uVar3 = 8 - uVar10;
  }
  recovered_2001b70(local_3f + uVar10,local_68,uVar3);
  uVar3 = recovered_2002270(local_24a);
  uVar10 = 3;
  if (uVar3 < 4) {
    uVar10 = recovered_2002270(local_24a);
  }
  recovered_2001b70(local_37,local_24a,uVar10);
LAB_02049a1a:
  local_18 = *local_2c;
  uVar12 = 1;
  bVar13 = false;
  iVar7 = local_24;
  uVar11 = local_20;
  left = local_50;
  do {
    if (local_34 + uVar12 != 2) {
      if (*(ulong *)((int)left + -0x1ea) == local_18) {
        iVar6 = recovered_2001ff0(left,local_3f,0xb);
        iVar7 = local_24;
        uVar11 = local_20;
        if (iVar6 == 0) break;
      }
    }
    bVar13 = uVar11 <= uVar12;
    iVar6 = iVar7 + 1 + uVar12;
    uVar12 = uVar12 + 1;
    left = (void *)((int)left + 0x20c);
  } while (iVar6 != 1);
  puVar1 = local_2c;
  if (bVar13) goto LAB_02049b60;
  local_30 = local_30 + 1;
  if (local_30 == 1000000) goto LAB_02049bc8;
  goto LAB_02049720;
LAB_02049b60:
  pcVar2 = (char *)((int)local_2c + 0x1ea);
  recovered_2001b70(pcVar2,local_3f,0xb);
  recovered_2051d70(pcVar2,local_33b);
  iVar7 = recovered_20022a0(local_33b,local_14);
  *(bool *)((int)puVar1 + 0x209) = iVar7 != 0;
  local_4c = local_4c + 1;
  local_28 = local_28 + 0x20c;
  local_34 = local_34 + -1;
  local_48 = CONCAT31((int3)((uint)puVar1 >> 8),local_20 <= local_4c);
  if (local_4c == local_20) {
    local_48 = CONCAT31((int3)(local_4c >> 8),1);
LAB_02049bc8:
    return local_48 & 0xffffff01;
  }
  goto LAB_02049703;
}
