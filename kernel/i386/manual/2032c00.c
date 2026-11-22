/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ec530 (*(uint8_t volatile *)(0x21ec530U))
#define DAT_021ec532 (*(uint8_t volatile *)(0x21ec532U))
#define DAT_021ed084 (*(uint8_t volatile *)(0x21ed084U))
#define DAT_021ed088 (*(uint8_t volatile *)(0x21ed088U))
#define DAT_021ed08c (*(uint8_t volatile *)(0x21ed08cU))
#define DAT_021ed090 (*(uint8_t volatile *)(0x21ed090U))
#define DAT_021ed094 (*(uint8_t volatile *)(0x21ed094U))
#define DAT_021ed098 (*(uint8_t volatile *)(0x21ed098U))
#define DAT_021ed09c (*(uint8_t volatile *)(0x21ed09cU))
#define DAT_021ed0a0 (*(uint8_t volatile *)(0x21ed0a0U))
#define DAT_021ed0a4 (*(uint8_t volatile *)(0x21ed0a4U))
#define DAT_021ed0a8 (*(uint8_t volatile *)(0x21ed0a8U))
#define DAT_021ed0ac (*(uint8_t volatile *)(0x21ed0acU))
#define DAT_021ed0b0 (*(uint8_t volatile *)(0x21ed0b0U))
#define DAT_021ed0b4 (*(uint8_t volatile *)(0x21ed0b4U))
#define DAT_021ed0b8 (*(uint8_t volatile *)(0x21ed0b8U))
#define DAT_021ed0bc (*(uint8_t volatile *)(0x21ed0bcU))
#define DAT_021ed0c0 (*(uint8_t volatile *)(0x21ed0c0U))
#define DAT_021ed3c0 (*(uint8_t volatile *)(0x21ed3c0U))
#define DAT_021ed6c0 (*(uint8_t volatile *)(0x21ed6c0U))
#define DAT_021ed800 (*(uint8_t volatile *)(0x21ed800U))
#define DAT_021ed804 (*(uint8_t volatile *)(0x21ed804U))
#define DAT_021ed808 (*(uint8_t volatile *)(0x21ed808U))
#define DAT_021ed80c (*(uint8_t volatile *)(0x21ed80cU))
#define DAT_021ed810 (*(uint32_t volatile *)(0x21ed810U))
#define DAT_02238ef4 (*(uint32_t volatile *)(0x2238ef4U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020caeba (*(char (*)[1])(0x20caebaU))
#define str_020caede (*(char (*)[1])(0x20caedeU))
#define str_020caef8 (*(char (*)[1])(0x20caef8U))
#define local_10d (*(char (*)[241])(frame + 19))
#define local_1c (*(int *)(frame + 260))
#define local_18 (*(int *)(frame + 264))
#define local_14 (*(char * *)(frame + 268))


int recovered_2032c00(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  void *data;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  int *piVar10;

  local_1c = 1;
  local_18 = 0;
  local_14 = in_EDX;
LAB_02032c20:
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  local_10d[0] = '\0';
  bVar1 = *in_ECX;
  uVar5 = (uint)bVar1;
  if ((uVar5 != 0x22) && (uVar5 != 0x27)) {
    if (uVar5 != 0) {
      uVar7 = uVar5;
      uVar5 = 0;
      goto joined_r0x02032c63;
    }
LAB_02032f0c:
    if (local_1c == 0 || local_18 != 0) {
      return local_1c;
    }
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 0;
    }
    if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
      (local_14 + uVar4)[0] = '\n';
      (local_14 + uVar4)[1] = '\0';
    }
    uVar4 = recovered_2002270(local_14);
    if (param_3 <= uVar4 + 1) {
      return 0;
    }
    cVar9 = 'k';
    pcVar8 = str_020caef8;
    iVar3 = 0;
    goto LAB_02032f90;
  }
  bVar1 = in_ECX[1];
  uVar7 = (uint)bVar1;
  in_ECX = in_ECX + 1;
joined_r0x02032c63:
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    in_ECX = in_ECX + 1;
    uVar2 = 0;
    do {
      if (uVar5 == 0) {
        if ((uVar7 - 9 < 0x18) && ((0x80001fU >> (uVar7 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar5 == (int)(char)uVar7) goto LAB_02032ce1;
      if (uVar2 + 1 < 0xf1) {
        local_10d[uVar2] = (char)uVar7;
        uVar2 = uVar2 + 1;
      }
      bVar1 = *in_ECX;
      uVar7 = (uint)bVar1;
      in_ECX = in_ECX + 1;
    } while (bVar1 != 0);
    in_ECX = in_ECX + -1;
  }
LAB_02032ce1:
  local_10d[uVar2] = '\0';
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  if (uVar2 == 0) goto LAB_02032f0c;
  uVar5 = recovered_206e5a0(local_10d);
  iVar3 = recovered_20022a0(local_10d,str_020c7213);
  if (iVar3 != 0) {
    if ((int)uVar5 < 0) {
      pf_varargs_202ecc0__4_(local_14,param_3,str_020caede,(uint)local_10d);
      local_1c = 0;
    }
    else {
      iVar3 = uVar5 * 0x1328;
      data = (void *)DAT_02238ef4;
      if (data != (void *)0x0) {
        piVar10 = &DAT_02238ef4;
        do {
          if (*(undefined1 **)((int)data + 0x10) == &DAT_021ec4ec + iVar3) {
            *piVar10 = *(int *)((int)data + 0x14);
            *(undefined4 *)((int)data + 8) = 0;
            *(undefined4 *)((int)data + 0x14) = 0;
            recovered_2001710(data);
          }
          else {
            piVar10 = (int *)((int)data + 0x14);
          }
          data = (void *)*piVar10;
        } while (data != (void *)0x0);
      }
      recovered_2001710(*(void **)(&DAT_021ed084 + iVar3));
      recovered_2001710((void *)(&DAT_021ed810)[uVar5 * 0x4ca]);
      (&DAT_021ed810)[uVar5 * 0x4ca] = 0;
      recovered_2001710(*(void **)(&DAT_021ed80c + iVar3));
      *(undefined4 *)(&DAT_021ed80c + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed804 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed800 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed808 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed084 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed088 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed08c + iVar3) = 0;
      recovered_2001e00(&DAT_021ed0c0 + iVar3,0,0x300);
      recovered_2001e00(&DAT_021ed3c0 + iVar3,0,0x300);
      recovered_2001e00(&DAT_021ed6c0 + iVar3,0,0x140);
      *(undefined4 *)(&DAT_021ed09c + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed098 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0a4 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0a0 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0ac + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0a8 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0b4 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0b0 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed094 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed090 + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0bc + iVar3) = 0;
      *(undefined4 *)(&DAT_021ed0b8 + iVar3) = 0;
      (&DAT_021ec532)[iVar3] = 0;
      (&DAT_021ec530)[iVar3] = 0;
      (&DAT_021ec4ec)[iVar3] = 0;
      local_18 = local_18 + 1;
    }
    goto LAB_02032c20;
  }
  iVar3 = 1;
  if (param_3 == 0 || local_14 == (char *)0x0) {
    return 1;
  }
  if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
    (local_14 + uVar4)[0] = '\n';
    (local_14 + uVar4)[1] = '\0';
  }
  uVar4 = recovered_2002270(local_14);
  if (param_3 <= uVar4 + 1) {
    return 1;
  }
  cVar9 = 'u';
  pcVar8 = str_020caeba;
  do {
    pcVar8 = pcVar8 + 1;
    local_14[uVar4] = cVar9;
    cVar9 = *pcVar8;
    uVar6 = uVar4 + 1;
    if (cVar9 == '\0') break;
    uVar5 = uVar4 + 2;
    uVar4 = uVar6;
  } while (uVar5 < param_3);
LAB_0203302b:
  local_14[uVar6] = '\0';
  return iVar3;
  while (uVar5 = uVar4 + 2, uVar4 = uVar6, uVar5 < param_3) {
LAB_02032f90:
    pcVar8 = pcVar8 + 1;
    local_14[uVar4] = cVar9;
    cVar9 = *pcVar8;
    uVar6 = uVar4 + 1;
    if (cVar9 == '\0') break;
  }
  goto LAB_0203302b;
}
#undef DAT_020c5084
#undef DAT_021ec4ec
#undef DAT_021ec530
#undef DAT_021ec532
#undef DAT_021ed084
#undef DAT_021ed088
#undef DAT_021ed08c
#undef DAT_021ed090
#undef DAT_021ed094
#undef DAT_021ed098
#undef DAT_021ed09c
#undef DAT_021ed0a0
#undef DAT_021ed0a4
#undef DAT_021ed0a8
#undef DAT_021ed0ac
#undef DAT_021ed0b0
#undef DAT_021ed0b4
#undef DAT_021ed0b8
#undef DAT_021ed0bc
#undef DAT_021ed0c0
#undef DAT_021ed3c0
#undef DAT_021ed6c0
#undef DAT_021ed800
#undef DAT_021ed804
#undef DAT_021ed808
#undef DAT_021ed80c
#undef DAT_021ed810
#undef DAT_02238ef4
#undef str_020c7213
#undef str_020caeba
#undef str_020caede
#undef str_020caef8
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
