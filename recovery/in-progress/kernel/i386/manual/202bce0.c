/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_0213072c (*(uint32_t volatile *)(0x213072cU))
#define DAT_02130730 (*(uint32_t volatile *)(0x2130730U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define local_111 (*(char (*)[241])(frame + 31))
#define local_20 (*(uint *)(frame + 272))
#define local_1c (*(uint *)(frame + 276))
#define local_18 (*(void * *)(frame + 280))
#define local_14 (*(uchar *)(frame + 284))
#define local_13 (*(uchar *)(frame + 285))
#define local_12 (*(uchar *)(frame + 286))
#define local_11 (*(byte *)(frame + 287))


uint recovered_202bce0(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  char *out;
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint incoming_edx_00;
  uint in_EDX;
  ulong count;
  uint uVar9;
  int iVar10;
  void *pvVar11;

  local_12 = '\0';
  local_11 = 0;
  if ((incoming_ecx == (char *)0x0) || (*incoming_ecx == '\0')) {
    bVar2 = DAT_021307dc;
    return (uint)bVar2;
  }
  recovered_202b260(incoming_ecx,&local_12,&local_11);
  if (local_12 == '\x01') {
    return (uint)local_11;
  }
  cVar3 = DAT_021307dc;
  if (cVar3 != '\x01') {
    return 0;
  }
  bVar2 = PF_PART1(DAT_02130758, 0);
  if ((bVar2 & 1) != 0) {
    return 0;
  }
  iVar10 = DAT_0213075c;
  if ((4 < iVar10 - 1U) && (iVar10 != 7)) {
    return 0;
  }
  cVar3 = *incoming_ecx;
  if (cVar3 != '\0') {
    count = 0;
    do {
      local_14 = '\0';
      local_13 = '\0';
      if (cVar3 == '/') {
        if (count - 0xf1 < 0xffffff10) {
          return 0;
        }
        recovered_2001b70(local_111,incoming_ecx,count);
        local_111[count] = '\0';
        recovered_202b260(local_111,&local_14,&local_13);
        if ((local_14 == '\x01') && (local_13 != '\x01')) {
          return 0;
        }
      }
      cVar3 = incoming_ecx[count + 1];
      count = count + 1;
    } while (cVar3 != '\0');
  }
  uVar6 = DAT_02130728;
  local_1c = uVar6 + 1;
  uVar9 = DAT_0213072c;
  if (uVar9 < local_1c) {
    uVar6 = DAT_02130730;
    if (uVar6 != 0 && uVar6 < local_1c) {
      return 0;
    }
    uVar8 = 0x10;
    if (uVar9 != 0) {
      uVar8 = uVar9;
    }
    for (; uVar8 < local_1c; uVar8 = uVar8 * 2) {
      if ((int)uVar8 < 0) {
        uVar8 = local_1c;
        break;
      }
    }
    uVar9 = uVar8;
    if (uVar6 <= uVar8) {
      uVar9 = uVar6;
    }
    if (uVar6 == 0) {
      uVar9 = uVar8;
    }
    pvVar11 = (void *)DAT_02130724;
    local_18 = recovered_2001860(pvVar11,uVar9 * 0x110);
    if (local_18 == (void *)0x0) {
      return 0;
    }
    uVar6 = DAT_0213072c;
    iVar10 = uVar9 - uVar6;
    local_20 = uVar9;
    if (uVar6 <= uVar9 && iVar10 != 0) {
      pvVar11 = (void *)((int)local_18 + uVar6 * 0x110);
      do {
        recovered_2001e00(pvVar11,0,0x110);
        pvVar11 = (void *)((int)pvVar11 + 0x110);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    DAT_02130724 = local_18;
    DAT_0213072c = local_20;
    if (local_20 < local_1c) {
      return 0;
    }
    uVar6 = DAT_02130728;
    local_1c = uVar6 + 1;
  }
  else {
    local_18 = (void *)DAT_02130724;
  }
  DAT_02130728 = local_1c;
  iVar10 = uVar6 * 0x110;
  out = (char *)((int)local_18 + iVar10);
  local_1c = uVar6;
  recovered_2001e00(out,0,0x110);
  pf_varargs_20044f0__4_(out,0xf1,&DAT_020c5119,(uint)incoming_ecx);
  *(undefined4 *)((int)local_18 + iVar10 + 0xfc) = 2;
  *(undefined1 *)((int)local_18 + iVar10 + 0x10c) = 1;
  uVar4 = recovered_204d260(local_1c,incoming_edx_00);
  if (uVar4 == '\0') {
    recovered_2001e00(out,0,0x110);
    uVar1 = DAT_02130728;
    iVar10 = DAT_02130728;
    DAT_02130728 = iVar10 + -1;
    uVar1 = DAT_02130728;
    uVar1 = DAT_02130728;
    uVar1 = DAT_02130728;
  }
  else {
    iVar10 = DAT_0213075c;
    if (iVar10 == 2) {
      uVar6 = recovered_2052bd0();
      cVar3 = (char)uVar6;
    }
    else {
      bVar5 = recovered_204cfa0();
      if (bVar5) {
        pbVar7 = recovered_204dd80(0);
        cVar3 = (char)pbVar7;
      }
      else {
        uVar6 = recovered_203e3a0(in_EDX);
        cVar3 = (char)uVar6;
      }
    }
    if (cVar3 != '\0') {
      return CONCAT31((int3)((uint)out >> 8),1);
    }
    recovered_2001e00(out,0,0x110);
    uVar1 = DAT_02130728;
    iVar10 = DAT_02130728;
    DAT_02130728 = iVar10 + -1;
    uVar1 = DAT_02130728;
    uVar1 = DAT_02130728;
    uVar1 = DAT_02130728;
    recovered_204d520();
  }
  return 0;
}
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_0213072c
#undef DAT_02130730
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_021307dc
#undef local_111
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_13
#undef local_12
#undef local_11
