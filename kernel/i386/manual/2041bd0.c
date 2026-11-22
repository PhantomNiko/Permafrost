/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0214aff8 (*(uint8_t volatile *)(0x214aff8U))
#define DAT_0214aff9 (*(uint8_t volatile *)(0x214aff9U))
#define DAT_0214affa (*(uint8_t volatile *)(0x214affaU))
#define DAT_0214affd (*(uint8_t volatile *)(0x214affdU))
#define DAT_0214affe (*(uint8_t volatile *)(0x214affeU))
#define DAT_0214afff (*(uint8_t volatile *)(0x214afffU))
#define DAT_0214b000 (*(uint32_t volatile *)(0x214b000U))
#define DAT_0214b004 (*(uint8_t volatile *)(0x214b004U))
#define DAT_0214b008 (*(uint8_t volatile *)(0x214b008U))
#define DAT_0214b00c (*(uint32_t volatile *)(0x214b00cU))
#define DAT_0214b010 (*(uint8_t volatile *)(0x214b010U))
#define DAT_0214b014 (*(uint8_t volatile *)(0x214b014U))
#define DAT_0214b020 (*(uint8_t volatile *)(0x214b020U))
#define Ram0214b004 (*(uint32_t volatile *)(0x214b004U))
#define Ram0214b008 (*(uint32_t volatile *)(0x214b008U))
#define Ram0214b010 (*(uint32_t volatile *)(0x214b010U))
#define Ram0214b014 (*(uint32_t volatile *)(0x214b014U))
#define str_020d67d7 (*(char (*)[1])(0x20d67d7U))
#define str_020d67ec (*(char (*)[1])(0x20d67ecU))
#define str_020d680d (*(char (*)[1])(0x20d680dU))
#define str_020d6823 (*(char (*)[1])(0x20d6823U))
#define str_020d683c (*(char (*)[1])(0x20d683cU))
#define str_020d6856 (*(char (*)[1])(0x20d6856U))
#define str_020d6861 (*(char (*)[1])(0x20d6861U))
#define str_020d687a (*(char (*)[1])(0x20d687aU))
#define local_13e (*(char *)(frame + 66))
#define local_13d (*(char *)(frame + 67))
#define local_13c (*(char *)(frame + 68))
#define local_13b (*(char *)(frame + 69))
#define local_90 (*(int (*)[20])(frame + 240))
#define local_40 (*(uint *)(frame + 320))
#define local_3c (*(int *)(frame + 324))
#define local_38 (*(int *)(frame + 328))
#define local_34 (*(int *)(frame + 332))
#define local_30 (*(uint *)(frame + 336))
#define local_28 (*(uint *)(frame + 344))
#define local_24 (*(int *)(frame + 348))
#define local_20 (*(int *)(frame + 352))
#define local_1c (*(int *)(frame + 356))
#define local_18 (*(uint *)(frame + 360))
#define out (*(int * *)(frame + 20))
#define local_150 (*(int *)(frame + 48))
#define local_14c (*(uint *)(frame + 52))
#define local_140 (*(char *)(frame + 64))
#define local_13f (*(char *)(frame + 65))


undefined4 recovered_2041bd0(char *in_ECX)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;

  out = &local_150;
  recovered_2001e00(out,0,0xc0);
  iVar6 = recovered_203caa0(out);
  pcVar10 = str_020d67d7;
  if (((((iVar6 == 0) || ((local_14c & 1) == 0)) || (pcVar10 = str_020d67ec, (local_14c & 4) == 0))
      || (pcVar10 = str_020d680d, (local_14c & 2) == 0)) ||
     ((((local_140 == '\0' && (local_13f == '\0')) &&
       ((local_13e == '\0' && ((local_13d == '\0' && (local_13c == '\0')))))) &&
      (pcVar10 = str_020d6823, local_13b == '\0')))) goto LAB_02041c64;
  cVar1 = DAT_0214aff8;
  if ((cVar1 == '\x01') && (iVar6 = recovered_2001ff0(&DAT_0214affa,&local_140,6), iVar6 != 0)) {
    recovered_2001e00(&DAT_0214aff8,0,0xe8);
  }
  recovered_2001b70(&DAT_0214b020,out,0xc0);
  pvVar7 = recovered_2001b70(&DAT_0214affa,&local_140,6);
  cVar1 = DAT_0214aff8;
  if (cVar1 != '\0') {
    return CONCAT31((int3)((uint)pvVar7 >> 8),1);
  }
  recovered_2001e00(&local_28,0,0x18);
  recovered_2001e00(&local_40,0,0x18);
  recovered_2001e00(out,0,0x50);
  recovered_2001e00(local_90,0,0x50);
  DAT_0214aff9 = 1;
  uVar8 = recovered_20081a0();
  bVar2 = DAT_0214affd;
  bVar3 = DAT_0214affe;
  bVar4 = DAT_0214afff;
  Ram0214b014 = ((uint)bVar4 << 8 | (bVar3 ^ uVar8) << 0x10 ^ (uint)bVar2 << 0x18) ^ 0x574e4554;
  bVar5 = recovered_20bc6b0(0x214aff8,1,0,0);
  if (!bVar5) {
LAB_02041f10:
    pcVar10 = str_020d683c;
    goto LAB_02041c64;
  }
  uVar9 = recovered_20bc850(0x214aff8,2,&local_28,out);
  if ((char)uVar9 == '\0') {
    bVar5 = recovered_20bc6b0(0x214aff8,1,0,0);
    if (!bVar5) goto LAB_02041f10;
    uVar9 = recovered_20bc850(0x214aff8,2,&local_28,out);
    if ((char)uVar9 == '\0') {
      bVar5 = recovered_20bc6b0(0x214aff8,1,0,0);
      if (!bVar5) goto LAB_02041f10;
      recovered_20bc850(0x214aff8,2,&local_28,out);
    }
  }
  if (local_28 == 0) {
    pcVar10 = str_020d6856;
    goto LAB_02041f35;
  }
  bVar5 = recovered_20bc6b0(0x214aff8,3,local_28,local_18);
  if (!bVar5) {
LAB_02041f1d:
    pcVar10 = str_020d6861;
LAB_02041c64:
    pf_varargs_20044f0___(in_ECX,0x80,pcVar10);
    return 0;
  }
  uVar9 = recovered_20bc850(0x214aff8,5,&local_40,local_90);
  if ((char)uVar9 == '\0') {
    bVar5 = recovered_20bc6b0(0x214aff8,3,local_28,local_18);
    if (!bVar5) goto LAB_02041f1d;
    recovered_20bc850(0x214aff8,5,&local_40,local_90);
  }
  if (local_40 != 0) {
    DAT_0214b000 = local_40;
    if (local_3c == 0) {
      local_3c = local_24;
    }
    Ram0214b004 = local_3c;
    if (local_38 != 0) {
      local_20 = local_38;
    }
    Ram0214b008 = local_20;
    if (local_34 == 0) {
      local_34 = local_1c;
    }
    DAT_0214b00c = local_34;
    if (local_30 == 0) {
      local_30 = local_18;
    }
    Ram0214b010 = local_30;
    DAT_0214aff8 = 1;
    return CONCAT31((int3)(local_30 >> 8),1);
  }
  pcVar10 = str_020d687a;
  out = local_90;
LAB_02041f35:
  recovered_20bcd10(in_ECX,(uint)pcVar10,out);
  return 0;
}
#undef DAT_0214aff8
#undef DAT_0214aff9
#undef DAT_0214affa
#undef DAT_0214affd
#undef DAT_0214affe
#undef DAT_0214afff
#undef DAT_0214b000
#undef DAT_0214b004
#undef DAT_0214b008
#undef DAT_0214b00c
#undef DAT_0214b010
#undef DAT_0214b014
#undef DAT_0214b020
#undef Ram0214b004
#undef Ram0214b008
#undef Ram0214b010
#undef Ram0214b014
#undef str_020d67d7
#undef str_020d67ec
#undef str_020d680d
#undef str_020d6823
#undef str_020d683c
#undef str_020d6856
#undef str_020d6861
#undef str_020d687a
#undef local_13e
#undef local_13d
#undef local_13c
#undef local_13b
#undef local_90
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef out
#undef local_150
#undef local_14c
#undef local_140
#undef local_13f
