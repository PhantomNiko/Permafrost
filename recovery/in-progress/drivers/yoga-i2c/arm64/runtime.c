/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x438cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008000;
}

#undef DAT_10008000

#undef DAT_10003c80
#define DAT_10003c80 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10003c88
#define DAT_10003c88 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10003cd0
#define DAT_10003cd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10003ce0
#define DAT_10003ce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10003d0c
#define DAT_10003d0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10003d40
#define DAT_10003d40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef DAT_10003e95
#define DAT_10003e95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x838cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8394U)))
#undef DAT_1000c00c
#define DAT_1000c00c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8398U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef DAT_1000c028
#define DAT_1000c028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83b4U)))
#undef DAT_1000c040
#define DAT_1000c040 (*(uint *)(((uintptr_t)pf_module_state + 0x83ccU)))
#undef DAT_1000c048
#define DAT_1000c048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83d4U)))
#undef DAT_1000c050
#define DAT_1000c050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83dcU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint *)(((uintptr_t)pf_module_state + 0x83e4U)))
#undef DAT_1000c05c
#define DAT_1000c05c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83e8U)))
#undef DAT_1000c060
#define DAT_1000c060 (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_1000c06c
#define DAT_1000c06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83f8U)))
#undef DAT_1000c070
#define DAT_1000c070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83fcU)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8420U)))
#undef DAT_1000c098
#define DAT_1000c098 (*(int *)(((uintptr_t)pf_module_state + 0x8424U)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8428U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8474U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8478U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint16_t *)(((uintptr_t)pf_module_state + 0x847aU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x847cU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8484U)))
#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84a0U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84a4U)))
#undef DAT_1000c11c
#define DAT_1000c11c (*(int *)(((uintptr_t)pf_module_state + 0x84a8U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84bcU)))
#undef DAT_1000c134
#define DAT_1000c134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84c0U)))
#undef DAT_1000c136
#define DAT_1000c136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x84c2U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84c4U)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84ccU)))
#undef DAT_1000c148
#define DAT_1000c148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84d4U)))
#undef DAT_1000c152
#define DAT_1000c152 (*(ushort *)(((uintptr_t)pf_module_state + 0x84deU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(int *)(((uintptr_t)pf_module_state + 0x84ecU)))
#undef DAT_1000c168
#define DAT_1000c168 (*(uint *)(((uintptr_t)pf_module_state + 0x84f4U)))
#undef DAT_1000c16c
#define DAT_1000c16c (*(uint *)(((uintptr_t)pf_module_state + 0x84f8U)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84fcU)))
#undef DAT_1000c178
#define DAT_1000c178 (*(uint *)(((uintptr_t)pf_module_state + 0x8504U)))
#undef DAT_1000c17c
#define DAT_1000c17c (*(uint *)(((uintptr_t)pf_module_state + 0x8508U)))
#undef DAT_1000c180
#define DAT_1000c180 (*(uint *)(((uintptr_t)pf_module_state + 0x850cU)))
#undef DAT_1000c184
#define DAT_1000c184 (*(uint *)(((uintptr_t)pf_module_state + 0x8510U)))
#undef DAT_1000c188
#define DAT_1000c188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8514U)))
#undef DAT_1000c190
#define DAT_1000c190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x851cU)))
#undef DAT_1000c1a8
#define DAT_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8534U)))
#undef DAT_1000c238
#define DAT_1000c238 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85c4U)))
#undef UNK_10003cd8
#define UNK_10003cd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef UNK_10003ce8
#define UNK_10003ce8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef UNK_1000c004
#define UNK_1000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#undef UNK_1000c030
#define UNK_1000c030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83bcU)))
#undef UNK_1000c038
#define UNK_1000c038 (*(uint *)(((uintptr_t)pf_module_state + 0x83c4U)))
#undef UNK_1000c03c
#define UNK_1000c03c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83c8U)))
#undef UNK_1000c06e
#define UNK_1000c06e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x83faU)))
#undef _DAT_10003cd0
#define _DAT_10003cd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef _DAT_10003ce0
#define _DAT_10003ce0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000c00c
#define _DAT_1000c00c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8398U)))
#undef _DAT_1000c094
#define _DAT_1000c094 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8420U)))
#undef _DAT_1000c09c
#define _DAT_1000c09c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8428U)))
#undef str_10003e96
#define str_10003e96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_10003ea7
#define str_10003ea7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_10003eb8
#define str_10003eb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x244U)))
#undef str_10003ecc
#define str_10003ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#undef str_10003ed5
#define str_10003ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x261U)))
#undef str_10003ee3
#define str_10003ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_10003eec
#define str_10003eec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x278U)))
#undef str_10003efd
#define str_10003efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10003f09
#define str_10003f09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x295U)))
#undef str_10003f18
#define str_10003f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10003f26
#define str_10003f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10003f41
#define str_10003f41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10003f5f
#define str_10003f5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#undef str_10003f92
#define str_10003f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_10003fa8
#define str_10003fa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x334U)))
#undef uRam0000000010003cd8
#define uRam0000000010003cd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef uRam0000000010003ce8
#define uRam0000000010003ce8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef uRam000000001000c004
#define uRam000000001000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#undef uRam000000001000c030
#define uRam000000001000c030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83bcU)))
#undef uRam000000001000c038
#define uRam000000001000c038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83c4U)))
#undef uRam000000001000c03c
#define uRam000000001000c03c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83c8U)))
#undef uRam000000001000c06e
#define uRam000000001000c06e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x83faU)))
#define uStack_80 (*(ulong *)(pf_stack_frame + 1072))
#define uStack_70 (*(ulong *)(pf_stack_frame + 1088))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 1096))
#define local_a0 (*(ulong *)(pf_stack_frame + 1040))
#define local_98 (*(ulong *)(pf_stack_frame + 1048))
#define local_88 (*(ulong *)(pf_stack_frame + 1064))
#define local_78 (*(ulong *)(pf_stack_frame + 1080))
#define acStack_4a0 (*(char (*)[1184])(pf_stack_frame + 16))
#define uStack_90 (*(ulong *)(pf_stack_frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;

  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api != 0x54584b57) || (*(int *)((long)api + 4) != 1100000)) ||
     (*(uint *)((long)api + 8) < 0xf8)) {
    return 0;
  }
  DAT_1000c020 = 0;
  DAT_1000c000 = 0;
  DAT_1000c018 = api;
  recovered_10000d48((undefined1 *)&DAT_1000c0e8,0x48);
  recovered_10000d48((undefined1 *)&DAT_1000c068,0x40);
  recovered_10000d48((undefined1 *)&DAT_1000c130,0x78);
  recovered_10000d48((undefined1 *)&DAT_1000c1a8,0x90);
  recovered_10000d48((undefined1 *)&DAT_1000c238,0x90);
  recovered_10000d48((undefined1 *)&DAT_1000c028,0x20);
  recovered_10000d48((undefined1 *)&DAT_1000c048,0x20);
  uRam000000001000c004 = 0;
  DAT_1000c008 = 0;
  _DAT_1000c00c = 0;
  recovered_10000d60(acStack_4a0,0x400,&DAT_10003e95);
  uVar11 = recovered_10000d70(api,0x100000,0x60000,&uStack_70);
  if ((int)uVar11 == 0) {
    return 0;
  }
  if (uStack_70 == 0) {
    return 0;
  }
  uVar11 = recovered_10000d70(api,0xf100000,0x2000,&local_88);
  if (((((int)uVar11 != 0) && (local_88 != 0)) &&
      ((cVar8 = recovered_10000e1c(&DAT_1000c1a8,(uint *)&DAT_10003d0c,uStack_70,local_88),
       cVar8 != '\0' &&
       ((uVar11 = recovered_10000d70(api,0xb80000,0x4000,&local_78), (int)uVar11 != 0 &&
        (local_78 != 0)))))) && (uVar11 = recovered_10001134(((uintptr_t)pf_module_state+0x8534U),local_78), (int)uVar11 != 0)
     ) {
    DAT_1000c0ec = 0x3a;
    DAT_1000c0ee = 1;
    DAT_1000c0f0 = local_78;
    DAT_1000c114 = (undefined4)DAT_10003c80;
    DAT_1000c118 = (undefined4)((ulong)DAT_10003c80 >> 0x20);
    DAT_1000c11c = 6;
    bVar9 = recovered_100011e4(local_78,0x3a,1,(short *)&DAT_1000c0f8,((uintptr_t)pf_module_state+0x8474U),((uintptr_t)pf_module_state+0x83f4U),0);
    uVar6 = uRam0000000010003cd8;
    uVar11 = _DAT_10003cd0;
    if ((bVar9) && (DAT_1000c0e8 = 1, DAT_1000c11c == 0)) {
      DAT_1000c118 = (undefined4)DAT_10003c88;
      DAT_1000c11c = (int)((ulong)DAT_10003c88 >> 0x20);
    }
    DAT_1000c06c = 0x2c;
    uRam000000001000c06e = 0x20;
    DAT_1000c070 = local_78;
    _DAT_1000c09c = uRam0000000010003cd8;
    _DAT_1000c094 = _DAT_10003cd0;
    bVar9 = recovered_100011e4(local_78,0x2c,0x20,(short *)((uintptr_t)pf_module_state+0x8404U),((uintptr_t)pf_module_state+0x8474U),((uintptr_t)pf_module_state+0x83f4U),0);
    if (bVar9) {
      DAT_1000c068 = 1;
      if (DAT_1000c098 == DAT_1000c09c) {
        _DAT_1000c09c = uVar6;
        _DAT_1000c094 = uVar11;
      }
    }
  }
  if (DAT_1000c0e8 == 0 && DAT_1000c068 == 0) {
    recovered_10001d9c(&DAT_1000c1a8);
  }
  uVar11 = recovered_10000d70(api,0xf120000,0x2000,&uStack_90);
  if ((((((int)uVar11 == 0) || (uStack_90 == 0)) ||
       (uVar11 = recovered_10000d70(api,0xf130000,0x1000,&local_98), (int)uVar11 == 0)) ||
      ((local_98 == 0 ||
       (uVar11 = recovered_10000d70(api,0xf133000,0x1000,&local_a0), uVar7 = local_a0,
       (int)uVar11 == 0)))) || (local_a0 == 0)) {
LAB_10000804:
    if ((DAT_1000c130 == 0) && (iVar10 = recovered_10001d9c(&DAT_1000c238), iVar10 != 0)) {
      recovered_100023b0(&DAT_1000c048);
      recovered_100023b0(&DAT_1000c028);
    }
  }
  else {
    uStack_68 = 0;
    bVar9 = recovered_10003050(local_a0,0,(long)&uStack_68 + 4);
    if ((!bVar9) || (bVar9 = recovered_10003050(uVar7,4,(long)&uStack_68), !bVar9))
    goto LAB_10000804;
    DAT_1000c048 = 1;
    DAT_1000c050 = uVar7;
    DAT_1000c058 = PF_PART4(uStack_68, 4);
    DAT_1000c05c = (undefined4)uStack_68;
    DAT_1000c060 = (PF_PART4(uStack_68, 4) & 0x800) << 1 | PF_PART4(uStack_68, 4) & 0xffffddc0;
    uStack_68 = CONCAT44(DAT_1000c060,(undefined4)uStack_68);
    bVar9 = recovered_10003088(uVar7,0);
    if (!bVar9) {
LAB_100007f8:
      piVar12 = &DAT_1000c048;
LAB_10000800:
      recovered_100023b0(piVar12);
      goto LAB_10000804;
    }
    recovered_100030b8(DAT_1000c018);
    bVar9 = recovered_10003050(uVar7,0,(long)&uStack_68 + 4);
    uVar7 = local_98;
    if ((!bVar9) || (((DAT_1000c060 ^ PF_PART4(uStack_68, 4)) & 0x323f) != 0)) goto LAB_100007f8;
    uStack_68 = 0;
    if (((local_98 == 0) || (bVar9 = recovered_10003050(local_98,0,(long)&uStack_68 + 4), !bVar9))
       || (bVar9 = recovered_10003050(uVar7,4,(long)&uStack_68), !bVar9)) goto LAB_10000804;
    DAT_1000c028 = 1;
    uRam000000001000c030 = uVar7;
    uRam000000001000c038 = PF_PART4(uStack_68, 4);
    uRam000000001000c03c = (undefined4)uStack_68;
    uVar16 = 0x3c0;
    if ((uStack_68 & 0x80000000000) != 0) {
      uVar16 = 0x13c0;
    }
    DAT_1000c040 = uVar16 | PF_PART4(uStack_68, 4) & 0xfffffc03;
    uStack_68 = CONCAT44(DAT_1000c040,(undefined4)uStack_68) | 2;
    bVar9 = recovered_10003088(uVar7,4);
    if ((!bVar9) || (bVar9 = recovered_10003088(uVar7,0), !bVar9)) {
LAB_10000bb8:
      piVar12 = &DAT_1000c028;
      goto LAB_10000800;
    }
    recovered_100030b8(DAT_1000c018);
    bVar9 = recovered_10003050(uVar7,0,(long)&uStack_68 + 4);
    if (((!bVar9) ||
        ((bVar9 = recovered_10003050(uVar7,4,(long)&uStack_68), !bVar9 ||
         (((DAT_1000c040 ^ PF_PART4(uStack_68, 4)) & 0x13fc) != 0)))) || (((byte)uStack_68 >> 1 & 1) == 0))
    goto LAB_10000bb8;
    cVar8 = recovered_10000e1c(&DAT_1000c238,(uint *)&DAT_10003d40,uStack_70,uStack_90);
    if ((((cVar8 == '\0') ||
         (uVar11 = recovered_10000d70(api,0xa80000,0x4000,&uStack_80), (int)uVar11 == 0)) ||
        (uStack_80 == 0)) || (uVar11 = recovered_10001134(((uintptr_t)pf_module_state+0x85c4U),uStack_80), (int)uVar11 == 0))
    goto LAB_10000804;
    recovered_1000237c(api,20000);
    DAT_1000c134 = 0x14;
    DAT_1000c136 = 1;
    DAT_1000c138 = uStack_80;
    DAT_1000c140 = local_a0;
    bVar9 = recovered_100011e4(uStack_80,0x14,1,(short *)&DAT_1000c148,0,0,((uintptr_t)pf_module_state+0x84bcU));
    if (!bVar9) goto LAB_10000804;
    uVar16 = DAT_1000c160 + 2;
    iVar10 = DAT_1000c152 - uVar16;
    uVar1 = iVar10 * 8;
    if (DAT_1000c152 < uVar16 || iVar10 == 0) {
      uVar1 = 0;
    }
    if ((PF_PART4(DAT_1000c170, 4) != 0) &&
       (uVar1 < (uint)DAT_1000c170 || uVar1 - (uint)DAT_1000c170 < PF_PART4(DAT_1000c170, 4))) {
      DAT_1000c170 = 0;
    }
    if (((DAT_1000c152 <= uVar16) || (DAT_1000c16c == 0)) ||
       ((((-(DAT_1000c17c == 0) & (byte)_DAT_10003ce0) +
          (-(DAT_1000c184 == 0) & (byte)((ulong)_DAT_10003ce0 >> 0x20)) +
          (-((int)DAT_1000c188 == 0) & (byte)uRam0000000010003ce8) +
          (-((int)((ulong)DAT_1000c188 >> 0x20) == 0) & (byte)((ulong)uRam0000000010003ce8 >> 0x20))
         & 0xf) != 0 ||
        (((uVar1 < DAT_1000c168 || uVar1 - DAT_1000c168 < DAT_1000c16c ||
          (uVar1 < DAT_1000c178 || uVar1 - DAT_1000c178 < DAT_1000c17c)) ||
         (uVar1 < DAT_1000c180 || uVar1 - DAT_1000c180 < DAT_1000c184)))))) goto LAB_10000804;
    DAT_1000c190 = 1;
    DAT_1000c130 = 1;
  }
  if (((DAT_1000c0e8 == 0) && (DAT_1000c068 == 0)) && (DAT_1000c130 == 0)) {
LAB_10000844:
    recovered_100024f0();
    uVar11 = recovered_10002558(api);
    return (uint)uVar11;
  }
  if ((((DAT_1000c0e8 == 0) || (*(int *)api != 0x54584b57)) || (*(uint *)((long)api + 8) < 0xa8)) ||
     ((*(uint *)((long)api + 0xa4) == 0 ||
      (iVar10 = (*(code *)(ulong)*(uint *)((long)api + 0xa4))(recovered_1000264c,3,str_10003e96),
      iVar10 == 0)))) {
    bVar2 = 0;
    DAT_1000c0e8 = 0;
    bVar9 = true;
  }
  else {
    bVar9 = false;
    bVar2 = 1;
  }
  if (((DAT_1000c068 == 0) || (*(uint *)((long)api + 0x20) == 0)) ||
     (iVar10 = (*(code *)(ulong)*(uint *)((long)api + 0x20))(recovered_100028a8,2,str_10003ea7),
     iVar10 == 0)) {
    bVar3 = 0;
    DAT_1000c068 = 0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    bVar3 = 1;
  }
  if (((DAT_1000c130 == 0) || (*(uint *)((long)api + 0x20) == 0)) ||
     (iVar10 = (*(code *)(ulong)*(uint *)((long)api + 0x20))(recovered_10002a4c,1,str_10003eb8),
     iVar10 == 0)) {
    DAT_1000c130 = 0;
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bool)(bVar9 & bVar4)) {
    recovered_10001d9c(&DAT_1000c1a8);
  }
  if (bVar5) {
    iVar10 = recovered_10001d9c(&DAT_1000c238);
    if (iVar10 != 0) {
      recovered_100023b0(&DAT_1000c048);
      recovered_100023b0(&DAT_1000c028);
    }
    if ((bool)(bVar9 & bVar4)) goto LAB_10000844;
  }
  if ((!(bool)(bVar3 | bVar2)) && (DAT_1000c1a8 != 0)) {
    DAT_1000c000 = DAT_1000c000 | 1;
  }
  if (bVar5) {
    if (DAT_1000c238 != 0) {
      DAT_1000c000 = DAT_1000c000 | 2;
    }
    if (DAT_1000c028 != 0) {
      DAT_1000c000 = DAT_1000c000 | 4;
    }
    if (DAT_1000c048 != 0) {
      DAT_1000c000 = DAT_1000c000 | 8;
    }
  }
  recovered_10002558(api);
  if (bVar9) {
    if (bVar4) goto LAB_100009f4;
LAB_10000a2c:
    pcVar15 = str_10003ee3;
    if (acStack_4a0[0] != '\0') {
      pcVar15 = str_10003ed5;
    }
    recovered_10002ca8((long)acStack_4a0,0x400,pcVar15);
    if (!bVar5) goto LAB_10000a48;
LAB_100009f8:
    uVar16 = *(uint *)((long)api + 0xc);
    if (uVar16 == 0) goto LAB_10000aa4;
    pcVar13 = str_10003f09;
    pcVar14 = str_10003f18;
    pcVar15 = acStack_4a0;
  }
  else {
    recovered_10000d60(acStack_4a0,0x400,str_10003ecc);
    if (!bVar4) goto LAB_10000a2c;
LAB_100009f4:
    if (bVar5) goto LAB_100009f8;
LAB_10000a48:
    pcVar15 = str_10003efd;
    if (acStack_4a0[0] != '\0') {
      pcVar15 = str_10003eec;
    }
    recovered_10002ca8((long)acStack_4a0,0x400,pcVar15);
    if (*(uint *)((long)api + 0xc) == 0) goto LAB_10000aa4;
    (*(code *)(ulong)*(uint *)((long)api + 0xc))(str_10003f09,str_10003f18,acStack_4a0);
    uVar16 = *(uint *)((long)api + 0xc);
    if (uVar16 == 0) goto LAB_10000aa4;
    pcVar13 = str_10003f26;
    pcVar14 = str_10003f41;
    pcVar15 = str_10003f5f;
  }
  (*(code *)(ulong)uVar16)(pcVar13,pcVar14,pcVar15);
LAB_10000aa4:
  if (!bVar9) {
    recovered_10002cec(0xb,recovered_10002de0,str_10003f92);
  }
  if (!bVar4) {
    recovered_10002cec(10,recovered_10002e8c,str_10003fa8);
  }
  if (!bVar5) {
    recovered_10002cec(9,recovered_10002f38,str_10003f41);
  }
  return 1;
}

#undef DAT_10003c80
#undef DAT_10003c88
#undef DAT_10003cd0
#undef DAT_10003ce0
#undef DAT_10003d0c
#undef DAT_10003d40
#undef DAT_10003e95
#undef DAT_1000c000
#undef DAT_1000c008
#undef DAT_1000c00c
#undef DAT_1000c018
#undef DAT_1000c020
#undef DAT_1000c028
#undef DAT_1000c040
#undef DAT_1000c048
#undef DAT_1000c050
#undef DAT_1000c058
#undef DAT_1000c05c
#undef DAT_1000c060
#undef DAT_1000c068
#undef DAT_1000c06c
#undef DAT_1000c070
#undef DAT_1000c094
#undef DAT_1000c098
#undef DAT_1000c09c
#undef DAT_1000c0e8
#undef DAT_1000c0ec
#undef DAT_1000c0ee
#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c114
#undef DAT_1000c118
#undef DAT_1000c11c
#undef DAT_1000c130
#undef DAT_1000c134
#undef DAT_1000c136
#undef DAT_1000c138
#undef DAT_1000c140
#undef DAT_1000c148
#undef DAT_1000c152
#undef DAT_1000c160
#undef DAT_1000c168
#undef DAT_1000c16c
#undef DAT_1000c170
#undef DAT_1000c178
#undef DAT_1000c17c
#undef DAT_1000c180
#undef DAT_1000c184
#undef DAT_1000c188
#undef DAT_1000c190
#undef DAT_1000c1a8
#undef DAT_1000c238
#undef UNK_10003cd8
#undef UNK_10003ce8
#undef UNK_1000c004
#undef UNK_1000c030
#undef UNK_1000c038
#undef UNK_1000c03c
#undef UNK_1000c06e
#undef _DAT_10003cd0
#undef _DAT_10003ce0
#undef _DAT_1000c00c
#undef _DAT_1000c094
#undef _DAT_1000c09c
#undef str_10003e96
#undef str_10003ea7
#undef str_10003eb8
#undef str_10003ecc
#undef str_10003ed5
#undef str_10003ee3
#undef str_10003eec
#undef str_10003efd
#undef str_10003f09
#undef str_10003f18
#undef str_10003f26
#undef str_10003f41
#undef str_10003f5f
#undef str_10003f92
#undef str_10003fa8
#undef uRam0000000010003cd8
#undef uRam0000000010003ce8
#undef uRam000000001000c004
#undef uRam000000001000c030
#undef uRam000000001000c038
#undef uRam000000001000c03c
#undef uRam000000001000c06e
#undef uStack_80
#undef uStack_70
#undef uStack_68
#undef local_a0
#undef local_98
#undef local_88
#undef local_78
#undef acStack_4a0
#undef uStack_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d48
 */

void recovered_10000d48(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d60
 */

void recovered_10000d60(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar2 = 0;
    do {
      pcVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    if (param_3 != (char *)0x0) {
      while( true ) {
        if (*param_3 == '\0' || param_2 <= uVar2) break;
        param_1[uVar2 - 1] = *param_3;
        uVar2 = uVar2 + 1;
        param_3 = param_3 + 1;
      }
      param_1[uVar2 - 1] = 0;
    }
  }
  return;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d70
 */

undefined8 recovered_10000d70(int *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  local_24 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_4 == (ulong *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54584b57) {
    if ((uint)param_1[2] < 0xbc) {
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
    }
    else if (param_1[0x2e] != 0) {
                    /* WARNING: Could not recover jumptable at 0x10000dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(param_2,0,param_3,param_4);
      return uVar2;
    }
    if (param_1[0x19] == 0) {
      return 0;
    }
    iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(param_2,0,param_3,&local_24);
    if (iVar1 != 0) {
      *param_4 = (ulong)local_24;
      return 1;
    }
  }
  return 0;
}

#undef local_24

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e1c
 */

undefined1 recovered_10000e1c(undefined4 *param_1,uint *param_2,long param_3,long param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if ((((((param_1 != (undefined4 *)0x0) && (param_2 != (uint *)0x0)) &&
        (bVar3 = recovered_10003050(param_3,(ulong)param_2[6],(long)&uStack_48), bVar3)) &&
       (((bVar3 = recovered_10003050(param_3,(ulong)param_2[7],(long)&uStack_60), bVar3 &&
         (bVar3 = recovered_10003050(param_3,(ulong)param_2[8],(long)&uStack_68 + 4), bVar3)) &&
        ((bVar3 = recovered_10003050(param_3,(ulong)param_2[9],(long)&uStack_68), bVar3 &&
         ((bVar3 = recovered_10003050(param_3,(ulong)param_2[5],(long)&uStack_48 + 4), bVar3 &&
          (bVar3 = recovered_10003050(param_3,(ulong)param_2[10],(long)&uStack_50 + 4), bVar3)))))))
       ) && (bVar3 = recovered_10003050(param_4,0,(long)&uStack_50), bVar3)) &&
     (((bVar3 = recovered_10003050(param_4,4,(long)&uStack_58), bVar3 &&
       (bVar3 = recovered_10003050(param_4,0x1000,(long)&uStack_58 + 4), bVar3)) &&
      (bVar3 = recovered_10003050(param_4,0x1004,(long)&uStack_60 + 4), bVar3)))) {
    *param_1 = 1;
    *(uint **)(param_1 + 2) = param_2;
    *(long *)(param_1 + 4) = param_3;
    *(long *)(param_1 + 6) = param_4;
    param_1[8] = (undefined4)uStack_48;
    param_1[9] = (undefined4)uStack_60;
    param_1[10] = PF_PART4(uStack_68, 4);
    param_1[0xb] = (undefined4)uStack_68;
    uVar2 = PF_PART4(uStack_50, 4);
    param_1[0xc] = PF_PART4(uStack_48, 4);
    param_1[0xd] = PF_PART4(uStack_50, 4);
    param_1[0xe] = (uint)uStack_50;
    param_1[0xf] = PF_PART4(uStack_58, 4);
    uVar1 = (undefined4)uStack_58;
    uVar4 = param_2[0xc];
    uVar5 = uVar4 | (uint)uStack_50 & 0xffffdc00;
    param_1[0x10] = (undefined4)uStack_58;
    param_1[0x11] = PF_PART4(uStack_60, 4);
    uVar6 = uVar5 | 0x2003;
    uVar4 = uVar4 | PF_PART4(uStack_58, 4) & 0xffffdc00;
    uVar7 = uVar4 | 0x2003;
    uStack_58 = CONCAT44(uVar4,(undefined4)uStack_58) | 0x200300000000;
    uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),uVar5) | 0x2003;
    if ((uVar5 >> 0xb & 1) != 0) {
      uVar6 = uVar5 | 0x3003;
      uStack_50 = CONCAT44(uVar2,uVar5) | 0x3003;
    }
    if ((uVar4 >> 0xb & 1) != 0) {
      uVar7 = uVar4 | 0x3003;
      uStack_58 = CONCAT44(uVar4,uVar1) | 0x300300000000;
    }
    param_1[0x12] = uVar6;
    param_1[0x13] = uVar7;
    bVar3 = recovered_10003088(param_3,(ulong)param_2[6]);
    if (((bVar3) && (bVar3 = recovered_10003088(param_3,(ulong)param_2[7]), bVar3)) &&
       ((bVar3 = recovered_10003088(param_3,(ulong)param_2[8]), bVar3 &&
        ((bVar3 = recovered_10003088(param_3,(ulong)param_2[9]), bVar3 &&
         (bVar3 = recovered_10003088(param_3,(ulong)param_2[5]), bVar3)))))) {
      iVar8 = 500;
      do {
        bVar3 = recovered_10003050(param_3,(ulong)param_2[5],(long)&uStack_48 + 4);
        if (!bVar3) goto LAB_10001108;
        if ((uStack_48 & 0x100000000) == 0) goto LAB_10001004;
        recovered_1000237c(DAT_1000c018,1);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
LAB_10001004:
      if ((((PF_PART4(uStack_48, 4) & 1) == 0) &&
          (bVar3 = recovered_10003050(param_3,(ulong)param_2[10],(long)&uStack_50 + 4), bVar3)) &&
         (bVar3 = recovered_10003088(param_3,(ulong)param_2[10]), bVar3)) {
        recovered_100030b8(DAT_1000c018);
        bVar3 = recovered_100030e8(param_3,(ulong)*param_2);
        if (((((bVar3) && (bVar3 = recovered_100030e8(param_3,(ulong)param_2[1]), bVar3)) &&
             ((param_2[2] == 0 || (bVar3 = recovered_100030e8(param_3,(ulong)param_2[2]), bVar3))))
            && ((param_2[3] == 0 || (bVar3 = recovered_100030e8(param_3,(ulong)param_2[3]), bVar3)))
            ) && ((bVar3 = recovered_100030e8(param_3,(ulong)param_2[4]), bVar3 &&
                  ((bVar3 = recovered_10003088(param_4,0), bVar3 &&
                   (bVar3 = recovered_10003088(param_4,0x1000), bVar3)))))) {
          recovered_100030b8(DAT_1000c018);
          uVar4 = 0x23ff;
          if ((param_1[0x12] & 0x800) != 0) {
            uVar4 = 0x33ff;
          }
          uVar5 = 0x23ff;
          if ((param_1[0x13] & 0x800) != 0) {
            uVar5 = 0x33ff;
          }
          bVar3 = recovered_10003050(param_3,(ulong)param_2[10],(long)&uStack_50 + 4);
          if (((((bVar3) && ((param_2[0xb] & (PF_PART4(uStack_50, 4) ^ 0xffffffff)) == 0)) &&
               (bVar3 = recovered_10003050(param_4,0,(long)&uStack_50), bVar3)) &&
              ((bVar3 = recovered_10003050(param_4,0x1000,(long)&uStack_58 + 4), bVar3 &&
               (((param_1[0x12] ^ (uint)uStack_50) & uVar4) == 0)))) &&
             (((param_1[0x13] ^ PF_PART4(uStack_58, 4)) & uVar5) == 0)) {
            return 1;
          }
        }
      }
    }
LAB_10001108:
    recovered_10001d9c(param_1);
  }
  return 0;
}

#undef DAT_1000c018
#undef uStack_68
#undef uStack_60
#undef uStack_58
#undef uStack_50
#undef uStack_48

#undef DAT_10003d74
#define DAT_10003d74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001134
 */

undefined8 recovered_10001134(long param_1,long param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  long lVar3;

  local_44 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    lVar3 = 0;
    *(long *)(param_1 + 0x50) = param_2;
    lVar2 = param_1 + 100;
    do {
      if (lVar3 == 0x28) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        uVar1 = recovered_10003150(DAT_1000c018,param_2 + 0x68,(long)&local_44);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        if (PF_PART1(local_44, 1) == '\x03') {
          *(undefined4 *)(param_1 + 0x60) = 1;
          return 1;
        }
        return 0;
      }
      uVar1 = recovered_10003150(DAT_1000c018,
                                 (ulong)*(uint *)((long)&DAT_10003d74 + lVar3) + param_2,lVar2);
      lVar2 = lVar2 + 4;
      lVar3 = lVar3 + 4;
    } while ((int)uVar1 != 0);
  }
  return uVar1;
}

#undef DAT_10003d74
#undef DAT_1000c018
#undef local_44

#undef DAT_10003c90
#define DAT_10003c90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10003c98
#define DAT_10003c98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#define local_7c0 (*(undefined8 *)(pf_stack_frame + 1104))
#define uStack_7b0 (*(uint *)(pf_stack_frame + 1120))
#define uStack_7ac (*(uint *)(pf_stack_frame + 1124))
#define uStack_7a8 (*(uint *)(pf_stack_frame + 1128))
#define uStack_7a4 (*(uint *)(pf_stack_frame + 1132))
#define uStack_7a0 (*(uint *)(pf_stack_frame + 1136))
#define auStack_79c (*(ushort (*)[974])(pf_stack_frame + 1140))
#define iStack_59c (*(int *)(pf_stack_frame + 1652))
#define uStack_598 (*(undefined8 *)(pf_stack_frame + 1656))
#define aiStack_590 (*(int (*)[356])(pf_stack_frame + 1664))
#define aiStack_2d0 (*(int (*)[180])(pf_stack_frame + 2368))
#define auStack_2c8 (*(undefined8 (*)[89])(pf_stack_frame + 2376))
#define auStack_1d0 (*(uint (*)[116])(pf_stack_frame + 2624))
#define auStack_1c8 (*(ulong (*)[57])(pf_stack_frame + 2632))
#define auStack_1b8 (*(uint (*)[110])(pf_stack_frame + 2648))
#define uStack_f0 (*(uint *)(pf_stack_frame + 2848))
#define auStack_ec (*(uint (*)[59])(pf_stack_frame + 2852))
#define uStack_ac (*(uint *)(pf_stack_frame + 2916))
#define uStack_a8 (*(uint *)(pf_stack_frame + 2920))
#define uStack_a4 (*(uint *)(pf_stack_frame + 2924))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 2928))
#define iStack_bf4 (*(int *)(pf_stack_frame + 28))
#define uStack_be8 (*(uint *)(pf_stack_frame + 40))
#define uStack_be4 (*(uint *)(pf_stack_frame + 44))
#define local_7d0 (*(undefined8 *)(pf_stack_frame + 1088))
#define uStack_bd8 (*(uint *)(pf_stack_frame + 56))
#define abStack_bd0 (*(byte (*)[3024])(pf_stack_frame + 64))
#define local_7c8 (*(undefined8 *)(pf_stack_frame + 1096))
#define uStack_7b8 (*(uint *)(pf_stack_frame + 1112))
#define iStack_7b4 (*(int *)(pf_stack_frame + 1116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e4
 */

bool recovered_100011e4(long param_1,int param_2,undefined2 param_3,short *param_4,long param_5,
                       long param_6,long param_7)

{
  unsigned char pf_stack_frame[3120] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  ulong uVar27;
  int *piVar28;
  undefined8 *puVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  int *piVar34;
  ulong uVar35;

  bVar16 = recovered_10003218(param_1,param_2,param_3,(long)&local_7d0,0x1e);
  if (bVar16) {
    *param_4 = (short)local_7d0;
    param_4[1] = PF_PART2(local_7d0, 2);
    param_4[2] = PF_PART2(local_7d0, 4);
    param_4[3] = PF_PART2(local_7d0, 6);
    param_4[4] = (short)local_7c8;
    param_4[5] = PF_PART2(local_7c8, 2);
    *(int *)(param_4 + 6) = PF_PART4(local_7c8, 4);
    param_4[8] = (short)local_7c0;
    param_4[9] = PF_PART2(local_7c0, 2);
    if (((short)local_7d0 == 0x1e) && (PF_PART2(local_7d0, 2) == 0x100)) {
      if (PF_PART2(local_7d0, 4) - 0x401 < 0xfffffc00) {
        return false;
      }
      if (PF_PART2(local_7c8, 2) - 0x101 < 0xffffff00) {
        return false;
      }
      bVar16 = recovered_10003218(param_1,param_2,PF_PART2(local_7d0, 6),(long)abStack_bd0,
                                  (ulong)PF_PART2(local_7d0, 4));
      if (!bVar16) {
        return bVar16;
      }
      uVar7 = param_4[2];
      recovered_10000d48((undefined1 *)&local_7d0,0x734);
      uVar14 = DAT_10003c98;
      uVar13 = DAT_10003c90;
      uStack_be8 = uStack_7a4;
      uStack_be4 = uStack_7a8;
      uStack_bd8 = PF_PART4(local_7d0, 4);
      iStack_bf4 = iStack_59c;
      uVar35 = 0;
      uVar23 = (uint)local_7d0;
      uVar22 = uStack_7b8;
      iVar33 = iStack_7b4;
      iVar21 = PF_PART4(uStack_598, 4);
      uVar26 = uStack_7a0;
      uVar17 = uStack_f0;
switchD_100013f8_caseD_3:
      uVar18 = (uint)uVar35;
      if (uVar18 < uVar7) {
        uVar27 = uVar35 & 0xffffffff;
        bVar6 = abStack_bd0[uVar35 & 0xffffffff];
        uVar19 = (uint)(uVar27 + 1);
        if (bVar6 == 0xfe) {
          uVar35 = uVar27 + 1;
          if (uVar19 < uVar7) {
            uVar35 = (ulong)(uVar18 + abStack_bd0[uVar27 + 1] + 3);
          }
        }
        else {
          uVar18 = bVar6 & 3;
          uVar24 = 4;
          if (uVar18 != 3) {
            uVar24 = uVar18;
          }
          uVar19 = uVar24 + uVar19;
          uVar35 = (ulong)uVar19;
          if (uVar7 <= uVar19 && uVar19 != uVar7) goto LAB_10001c70;
          uVar18 = 0;
          uVar19 = 0;
          bVar11 = bVar6 >> 4;
          for (uVar32 = 0; uVar24 != uVar32; uVar32 = uVar32 + 1) {
            uVar19 = (uint)abStack_bd0[uVar32 + uVar27 + 1] << (ulong)(uVar18 & 0x1f) | uVar19;
            uVar18 = uVar18 + 8;
          }
          uVar18 = (uint)local_7c0;
          uVar15 = PF_PART4(local_7c0, 4);
          switch((uintptr_t)(bVar6 >> 2 & 3)) {
          case 0:
            if (bVar11 == 8) {
              if (uVar22 < 0x100) {
                if (((uint)local_7c0 < 0x801) && (PF_PART4(local_7c0, 4) < 0x801)) {
                  uVar8 = auStack_79c[uVar22];
                  uVar27 = (ulong)uVar8;
                  if ((uint)local_7c0 != 0) {
                    uVar24 = 0;
                    if ((local_7c0 & 0xffff) != 0) {
                      uVar24 = 0x800 / ((uint)local_7c0 & 0xffff);
                    }
                    if (uVar24 < PF_PART4(local_7c0, 4)) goto LAB_10001698;
                  }
                  iVar10 = PF_PART4(local_7c0, 4) * (uint)local_7c0;
                  if ((uint)uVar8 <= 0x800U - iVar10) {
                    uVar24 = (uint)(uVar8 >> 3);
                    if (((param_5 != 0) && (uStack_be4 != 0)) && ((uVar19 & 1) == 0)) {
                      if (((uVar19 >> 1 & 1) == 0) || (uVar23 != 7 || (uint)local_7c0 != 1)) {
                        if (((uVar19 >> 1 & 1) != 0) || (uVar23 != 7 || (uint)local_7c0 != 8))
                        goto LAB_1000187c;
                        uVar20 = PF_PART4(local_7c0, 4);
                        if (5 < PF_PART4(local_7c0, 4)) {
                          uVar20 = 6;
                        }
                        *(uint *)(param_5 + 0x30) = uVar24;
                        *(uint *)(param_5 + 0x34) = uVar20;
                      }
                      else {
                        *(uint *)(param_5 + 0x2c) = uVar24;
                      }
                      if (uVar22 != 0) {
                        *(undefined4 *)(param_5 + 0x24) = 1;
                        *(char *)(param_5 + 0x28) = (char)uVar22;
                      }
                    }
LAB_1000187c:
                    if (((param_6 != 0) && (uStack_be8 != 0)) &&
                       (((uVar19 & 1) == 0 && ((uVar19 & 2) != 0)))) {
                      if (uVar23 == 9) {
                        *(uint *)(param_6 + 0x2c) = uVar24;
                      }
                      else {
                        if (((uVar23 != 1) || ((uVar19 >> 2 & 1) == 0)) || ((uint)local_7c0 == 0))
                        goto LAB_100019a4;
                        uVar24 = 0;
                        uVar25 = 1;
                        if (8 < (uint)local_7c0) {
                          uVar25 = 2;
                        }
                        for (; uVar15 != uVar24; uVar24 = uVar24 + 1) {
                          uVar20 = recovered_10003748((long)&local_7d0,uVar24);
                          uVar12 = (undefined4)(uVar27 >> 3);
                          if (uVar20 == 0x31) {
                            *(undefined4 *)(param_6 + 0x34) = uVar12;
LAB_10001964:
                            *(undefined4 *)(param_6 + 0x38) = uVar25;
                          }
                          else if (uVar20 == 0x30) {
                            *(undefined4 *)(param_6 + 0x30) = uVar12;
                            goto LAB_10001964;
                          }
                          uVar27 = (ulong)((int)uVar27 + uVar18);
                        }
                      }
                      if (uVar22 != 0) {
                        *(undefined4 *)(param_6 + 0x24) = 1;
                        *(char *)(param_6 + 0x28) = (char)uVar22;
                      }
                    }
LAB_100019a4:
                    if (((param_7 != 0) && (uVar26 != 0)) &&
                       (((uVar19 & 1) == 0 && ((uVar19 & 2) != 0)))) {
                      piVar34 = (int *)0x0;
                      piVar28 = piVar34;
                      if ((int)uStack_598 != 0) {
                        lVar31 = 0x10;
                        piVar28 = aiStack_590;
                        do {
                          if (((*piVar28 != 0) && (piVar28[1] == uVar22)) &&
                             (piVar28[2] == (int)uStack_598)) goto LAB_10001a30;
                          if (piVar34 == (int *)0x0 && *piVar28 == 0) {
                            piVar34 = piVar28;
                          }
                          piVar28 = piVar28 + 0xb;
                          lVar31 = lVar31 + -1;
                        } while (lVar31 != 0);
                        piVar28 = piVar34;
                        if (piVar34 != (int *)0x0) {
                          *piVar34 = 1;
                          piVar34[1] = uVar22;
                          piVar34[2] = (int)uStack_598;
                        }
                      }
LAB_10001a30:
                      uVar24 = 0;
                      uVar19 = uVar19 >> 2 & 1;
                      if (uVar23 != 1) {
                        uVar19 = 1;
                      }
                      for (; uVar24 != uVar15; uVar24 = uVar24 + 1) {
                        uVar20 = recovered_10003748((long)&local_7d0,uVar24);
                        iVar9 = (uint)uVar8 + uVar24 * uVar18;
                        if ((((uVar23 == 0xd) && (uVar20 == 0x42)) && (piVar28 != (int *)0x0)) &&
                           ((piVar28[4] == 0 && (uVar18 - 1 < 0x20)))) {
                          piVar28[3] = iVar9;
                          piVar28[4] = uVar18;
                        }
                        else if (((uVar23 == 0xd) && (uVar20 == 0x54)) &&
                                ((uStack_bd8 == 0 && ((uint)local_7c0 - 1 < 0x20)))) {
                          piVar30 = (int *)0x0;
                          lVar31 = 0x10;
                          piVar34 = aiStack_2d0;
                          do {
                            if ((*piVar34 != 0) && (piVar34[1] == uVar22)) goto LAB_10001b88;
                            if (piVar30 == (int *)0x0 && *piVar34 == 0) {
                              piVar30 = piVar34;
                            }
                            piVar34 = piVar34 + 4;
                            lVar31 = lVar31 + -1;
                          } while (lVar31 != 0);
                          if (piVar30 != (int *)0x0) {
                            *piVar30 = 1;
                            piVar30[1] = uVar22;
                            piVar34 = piVar30;
LAB_10001b88:
                            if (piVar34[3] == 0) {
                              piVar34[2] = iVar9;
                              piVar34[3] = (uint)local_7c0;
                            }
                          }
                        }
                        else if ((((uVar19 == 0) && ((uVar20 & 0xfffffffe) == 0x30)) &&
                                 (uStack_bd8 == 0)) &&
                                ((PF_PART4(local_7c8, 4) != 0 &&
                                 (0 < (int)local_7c8 && (uint)local_7c0 - 1 < 0x1f)))) {
                          if ((piVar28 == (int *)0x0) || (uVar20 != 0x30)) {
                            if (((piVar28 != (int *)0x0) && (uVar20 == 0x31)) && (piVar28[8] == 0))
                            {
                              piVar28[7] = iVar9;
                              piVar28[8] = (uint)local_7c0;
                              piVar28[10] = (int)local_7c8;
                            }
                          }
                          else if (piVar28[6] == 0) {
                            piVar28[5] = iVar9;
                            piVar28[6] = (uint)local_7c0;
                            piVar28[9] = (int)local_7c8;
                          }
                        }
                      }
                      if ((((piVar28 != (int *)0x0) && (*(int *)(param_7 + 0x2c) == 0)) &&
                          (iVar9 = piVar28[4], iVar9 != 0)) &&
                         (((iVar1 = piVar28[6], iVar1 != 0 && (iVar2 = piVar28[8], iVar2 != 0)) &&
                          ((iVar3 = piVar28[9], iVar3 != 0 && (iVar4 = piVar28[10], iVar4 != 0))))))
                      {
                        *(undefined4 *)(param_7 + 0x2c) = 1;
                        iVar5 = piVar28[1];
                        *(uint *)(param_7 + 0x30) = (uint)(iVar5 != 0);
                        *(char *)(param_7 + 0x34) = (char)iVar5;
                        *(int *)(param_7 + 0x38) = piVar28[3];
                        *(int *)(param_7 + 0x3c) = iVar9;
                        *(int *)(param_7 + 0x48) = piVar28[5];
                        *(int *)(param_7 + 0x4c) = iVar1;
                        *(int *)(param_7 + 0x50) = piVar28[7];
                        *(int *)(param_7 + 0x54) = iVar2;
                        *(int *)(param_7 + 0x58) = iVar3;
                        *(int *)(param_7 + 0x5c) = iVar4;
                      }
                    }
                    auStack_79c[uVar22] = uVar8 + (short)iVar10;
                    uStack_ac = 0;
                    uStack_a0 = 0;
                    break;
                  }
                }
LAB_10001698:
                auStack_79c[uVar22] = 0x800;
              }
            }
            else if (bVar11 == 0xc) {
              if (((int)uStack_598 != 0) && (iVar33 == iVar21)) {
                iVar21 = 0;
                uStack_598 = 0;
              }
              if (iVar33 != 0) {
                iVar33 = iVar33 + -1;
                iStack_7b4 = iVar33;
                if (iVar33 != 0) goto LAB_10001834;
              }
              iVar33 = 0;
              uVar26 = 0;
              uStack_be8 = 0;
              uStack_be4 = 0;
              uStack_7a8 = 0;
              uStack_7a4 = 0;
              uStack_7a0 = 0;
            }
            else if (bVar11 == 10) {
              uVar18 = recovered_10003748((long)&local_7d0,0);
              if (iVar33 == 0) {
                uStack_7b0 = uVar23;
                uStack_7ac = uVar18;
                uStack_be4 = -(uint)(uVar23 == (uint)uVar13);
                uVar27 = CONCAT44(-(uint)(uVar23 == (uint)((ulong)uVar13 >> 0x20)),uStack_be4) &
                         CONCAT44(-(uint)(uVar18 == (uint)((ulong)uVar14 >> 0x20)),
                                  -(uint)(uVar18 == (uint)uVar14));
                uStack_be4 = uStack_be4 & uVar18 == 6;
                uStack_7a8 = uStack_be4;
                uStack_7a4 = (uint)(uVar27 & 0x100000001);
                uStack_7a0 = (uint)((uVar27 & 0x100000001) >> 0x20);
                uStack_be8 = (uint)uVar27 & 1;
                uVar26 = (uint)(uVar27 >> 0x20) & 1;
              }
              iVar33 = iVar33 + 1;
              iStack_7b4 = iVar33;
              if ((((uVar26 != 0) && (uVar23 == 0xd)) && (uVar18 == 0x22)) && ((int)uStack_598 == 0)
                 ) {
                iStack_59c = 1;
                if (1 < iStack_bf4 + 1U) {
                  iStack_59c = iStack_bf4 + 1;
                }
                uStack_598 = CONCAT44(iVar33,iStack_59c);
                iVar21 = iVar33;
                iStack_bf4 = iStack_59c;
              }
            }
LAB_10001834:
            uStack_ac = 0;
            uStack_a0 = 0;
            break;
          case 1:
            if (0xf < bVar6) {
              switch((uintptr_t)(bVar11)) {
              case 1:
                uStack_bd8 = recovered_1000372c(uVar19,uVar24);
                local_7d0 = CONCAT44(uStack_bd8,(uint)local_7d0);
                goto switchD_100013f8_caseD_3;
              case 2:
                if ((int)uStack_bd8 < 0) {
                  uVar19 = recovered_1000372c(uVar19,uVar24);
                }
                local_7c8 = CONCAT44(1,uVar19);
              default:
                goto switchD_100013f8_caseD_3;
              case 7:
                local_7c0 = CONCAT44(PF_PART4(local_7c0, 4),uVar19);
                goto switchD_100013f8_caseD_3;
              case 8:
                if (0xff < uVar19) {
                  uVar19 = 0x100;
                }
                uStack_7b8 = uVar19;
                uVar22 = uVar19;
                goto switchD_100013f8_caseD_3;
              case 9:
                local_7c0 = CONCAT44(uVar19,(uint)local_7c0);
                goto switchD_100013f8_caseD_3;
              case 10:
                if (uVar17 < 8) {
                  uVar27 = (ulong)uVar17;
                  uVar17 = uVar17 + 1;
                  uStack_f0 = uVar17;
                  auStack_1d0[uVar27 * 7] = uVar23;
                  auStack_1d0[uVar27 * 7 + 1] = uStack_bd8;
                  *(ulong *)((long)auStack_1c8 + uVar27 * 0x1c + 8) = local_7c0;
                  *(undefined8 *)((long)auStack_1c8 + uVar27 * 0x1c) = local_7c8;
                  auStack_1b8[uVar27 * 7] = uVar22;
                  goto switchD_100013f8_caseD_3;
                }
                break;
              case 0xb:
                if (uVar17 != 0) {
                  uVar17 = uVar17 - 1;
                  uVar27 = (ulong)uVar17;
                  uStack_f0 = uVar17;
                  local_7d0 = *(undefined8 *)(auStack_1d0 + uVar27 * 7);
                  local_7c8 = *(undefined8 *)((long)auStack_1c8 + uVar27 * 0x1c);
                  local_7c0 = *(ulong *)((long)auStack_1c8 + uVar27 * 0x1c + 8);
                  uStack_7b8 = auStack_1b8[uVar27 * 7];
                  uStack_bd8 = (uint)((ulong)local_7d0 >> 0x20);
                  uVar23 = (uint)local_7d0;
                  uVar22 = auStack_1b8[uVar27 * 7];
                  goto switchD_100013f8_caseD_3;
                }
              }
              if (param_7 != 0) goto LAB_10001cdc;
              goto LAB_10001cf4;
            }
            local_7d0 = CONCAT44(PF_PART4(local_7d0, 4),uVar19);
            uVar23 = uVar19;
            break;
          case 2:
            if (bVar6 < 0x10) {
              uVar27 = (ulong)uStack_ac;
              if (uStack_ac < 0x10) {
                uStack_ac = uStack_ac + 1;
                auStack_ec[uVar27] = uVar19;
              }
            }
            else if (bVar11 == 2) {
              uStack_a4 = uVar19;
              uStack_a0 = 1;
            }
            else if (bVar11 == 1) {
              uStack_a8 = uVar19;
              uStack_a0 = 1;
            }
          }
        }
        goto switchD_100013f8_caseD_3;
      }
LAB_10001c70:
      if (param_7 != 0) {
        uVar26 = 0;
        if (*(int *)(param_7 + 0x30) != 0) {
          uVar26 = (uint)*(byte *)(param_7 + 0x34);
        }
        if (*(int *)(param_7 + 0x2c) != 0) {
          puVar29 = auStack_2c8;
          lVar31 = 0x10;
          do {
            if ((*(int *)(puVar29 + -1) != 0) && (*(uint *)((long)puVar29 + -4) == uVar26)) {
              *(undefined8 *)(param_7 + 0x40) = *puVar29;
              break;
            }
            puVar29 = puVar29 + 2;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
      }
      if ((param_7 != 0) && (uVar17 != 0 || iStack_7b4 != 0)) {
LAB_10001cdc:
        *(undefined8 *)(param_7 + 0x2c) = 0;
        *(undefined1 *)(param_7 + 0x34) = 0;
        *(undefined8 *)(param_7 + 0x40) = 0;
        *(undefined8 *)(param_7 + 0x38) = 0;
        *(undefined8 *)(param_7 + 0x50) = 0;
        *(undefined8 *)(param_7 + 0x48) = 0;
        *(undefined8 *)(param_7 + 0x58) = 0;
      }
LAB_10001cf4:
      bVar16 = recovered_1000379c(param_1,param_2,(uint)(ushort)param_4[8],8);
      if (bVar16) {
        recovered_1000237c(DAT_1000c018,1000);
        bVar16 = recovered_1000379c(param_1,param_2,(uint)(ushort)param_4[8],1);
        if (bVar16) {
          iVar33 = 100;
          do {
            recovered_1000237c(DAT_1000c018,10000);
            bVar16 = recovered_1000382c(param_1,param_2,(long)&local_7d0,2);
            if ((bVar16) && ((short)local_7d0 == 0)) {
              return true;
            }
            iVar33 = iVar33 + -1;
          } while (iVar33 != 0);
        }
      }
    }
  }
  return false;
}

#undef DAT_10003c90
#undef DAT_10003c98
#undef DAT_1000c018
#undef local_7c0
#undef uStack_7b0
#undef uStack_7ac
#undef uStack_7a8
#undef uStack_7a4
#undef uStack_7a0
#undef auStack_79c
#undef iStack_59c
#undef uStack_598
#undef aiStack_590
#undef aiStack_2d0
#undef auStack_2c8
#undef auStack_1d0
#undef auStack_1c8
#undef auStack_1b8
#undef uStack_f0
#undef auStack_ec
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_a0
#undef iStack_bf4
#undef uStack_be8
#undef uStack_be4
#undef local_7d0
#undef uStack_bd8
#undef abStack_bd0
#undef local_7c8
#undef uStack_7b8
#undef iStack_7b4

#undef DAT_10003d78
#define DAT_10003d78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x838cU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c1a8
#define DAT_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8534U)))
#undef DAT_1000c238
#define DAT_1000c238 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85c4U)))
#undef str_10003fec
#define str_10003fec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
#undef str_1000402c
#define str_1000402c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b8U)))
#undef str_1000406a
#define str_1000406a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_100040af
#define str_100040af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43bU)))
#undef str_100040ed
#define str_100040ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x479U)))
#undef str_10004134
#define str_10004134 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_10004181
#define str_10004181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50dU)))
#undef str_100041c2
#define str_100041c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54eU)))
#undef str_1000420b
#define str_1000420b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_58 (*(uint *)(pf_stack_frame + 40))
#define uStack_54 (*(uint *)(pf_stack_frame + 44))
#define local_70 (*(undefined8 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d9c
 */

ulong recovered_10001d9c(int *param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;

  if (param_1 == &DAT_1000c1a8) {
    bVar1 = false;
    uVar8 = 1;
LAB_10001dfc:
    bVar3 = false;
    lVar9 = *(long *)(param_1 + 2);
  }
  else {
    bVar1 = param_1 != &DAT_1000c238;
    uVar8 = (uint)(param_1 == &DAT_1000c238) << 1;
    if (param_1 != (int *)0x0) goto LAB_10001dfc;
    lVar9 = 0;
    bVar3 = true;
  }
  local_70 = 0;
  uStack_68 = 0;
  bVar7 = false;
  if (bVar3) {
    uVar4 = 1;
    goto joined_r0x100022e8;
  }
  uVar4 = 1;
  if ((*param_1 == 0) || (lVar9 == 0)) goto joined_r0x100022e8;
  if (param_1[0x17] != 0) {
    if (((param_1[0x16] == 0) || (*(long *)(param_1 + 0x14) == 0)) ||
       (uVar5 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x40,(long)&local_70 + 4
                                  ), (int)uVar5 == 0)) {
      pcVar6 = str_10003fec;
    }
    else {
      if ((local_70 & 0x100000000) != 0) {
        uVar4 = recovered_100031b8(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x604);
        if ((int)uVar4 == 0) goto LAB_100022e4;
        uVar10 = 0xffffffce;
        do {
          uVar10 = uVar10 + 0x32;
          if (0x270 < uVar10 >> 5) {
            if ((local_70 & 0x100000000) != 0) {
              pcVar6 = str_1000402c;
              goto LAB_10001ee0;
            }
            break;
          }
          recovered_1000237c(DAT_1000c018,0x32);
          uVar4 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x40,
                                     (long)&local_70 + 4);
          if ((int)uVar4 == 0) goto LAB_100022e4;
        } while ((local_70 & 0x100000000) != 0);
      }
      uVar4 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x610,(long)&local_70 + 4)
      ;
      if (((int)uVar4 == 0) ||
         (uVar4 = recovered_100031b8(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x618),
         (int)uVar4 == 0)) goto LAB_100022e4;
      recovered_100030b8(DAT_1000c018);
      uVar5 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x610,(long)&local_70 + 4)
      ;
      if (((int)uVar5 == 0) || (PF_PART4(local_70, 4) != 0)) {
        pcVar6 = str_1000406a;
      }
      else {
        lVar12 = 0;
        do {
          if (lVar12 + 10U < 2) {
            recovered_100030b8(DAT_1000c018);
            lVar12 = 0;
            goto LAB_10001f70;
          }
          uVar5 = recovered_100031b8(DAT_1000c018,
                                     *(long *)(param_1 + 0x14) +
                                     (ulong)*(uint *)(lVar12 * 4 + ((uintptr_t)pf_module_state+0x124U)));
          lVar12 = lVar12 + -1;
        } while ((int)uVar5 != 0);
        pcVar6 = str_100040af;
      }
    }
    goto LAB_10001ee0;
  }
LAB_1000202c:
  bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x1c));
  uVar4 = (ulong)bVar3;
  if (bVar3) {
    bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x20));
    uVar4 = (ulong)bVar3;
    if (bVar3) {
      bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x24));
      uVar4 = (ulong)bVar3;
      if (bVar3) {
        bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x18));
        uVar4 = (ulong)bVar3;
        if (bVar3) {
          uStack_68 = CONCAT44(param_1[0xc],(int)uStack_68) | 0x100000000;
          bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x14));
          uVar4 = (ulong)bVar3;
          if (bVar3) {
            iVar11 = 500;
            do {
              bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x14),
                                         (long)&uStack_68 + 4);
              uVar4 = (ulong)bVar3;
              if (!bVar3) goto LAB_100022e4;
              if ((uStack_68 & 0x100000000) == 0) goto LAB_100020d0;
              recovered_1000237c(DAT_1000c018,1);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
LAB_100020d0:
            if ((PF_PART4(uStack_68, 4) & 1) == 0) {
              bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x1c),
                                         (long)&uStack_68);
              if (((((bVar3) && ((int)uStack_68 == param_1[9])) &&
                   (bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x20)
                                               ,(long)&uStack_68), bVar3)) &&
                  (((int)uStack_68 == param_1[10] &&
                   (bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x24)
                                               ,(long)&uStack_68), bVar3)))) &&
                 (((int)uStack_68 == param_1[0xb] &&
                  ((bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x18)
                                               ,(long)&uStack_68), bVar3 &&
                   ((int)uStack_68 == param_1[8])))))) {
                uStack_60 = 0;
                if (*(long *)(param_1 + 6) == 0) {
LAB_10002358:
                  recovered_100038b0(DAT_1000c018,str_1000420b);
LAB_10002368:
                  uVar4 = 0;
                }
                else {
                  uStack_54 = param_1[0x12] & 0xfffffdc3;
                  uStack_58 = param_1[0x13] & 0xfffffdc3;
                  bVar3 = recovered_10003088(*(long *)(param_1 + 6),0);
                  if ((!bVar3) ||
                     (bVar3 = recovered_10003088(*(long *)(param_1 + 6),0x1000), !bVar3))
                  goto LAB_10002358;
                  recovered_100030b8(DAT_1000c018);
                  bVar3 = recovered_10003088(*(long *)(param_1 + 6),4);
                  if ((!bVar3) ||
                     (bVar3 = recovered_10003088(*(long *)(param_1 + 6),0x1004), !bVar3))
                  goto LAB_10002358;
                  recovered_100030b8(DAT_1000c018);
                  bVar3 = recovered_10003088(*(long *)(param_1 + 6),0);
                  if ((!bVar3) ||
                     (bVar3 = recovered_10003088(*(long *)(param_1 + 6),0x1000), !bVar3))
                  goto LAB_10002358;
                  recovered_100030b8(DAT_1000c018);
                  bVar3 = recovered_10003050(*(long *)(param_1 + 6),0,(long)&uStack_54);
                  if ((!bVar3) ||
                     ((((bVar3 = recovered_10003050(*(long *)(param_1 + 6),4,(long)&uStack_60 + 4),
                        !bVar3 || (bVar3 = recovered_10003050(*(long *)(param_1 + 6),0x1000,
                                                              (long)&uStack_58), !bVar3)) ||
                       (bVar3 = recovered_10003050(*(long *)(param_1 + 6),0x1004,(long)&uStack_60),
                       !bVar3)) ||
                      (((uStack_54 != param_1[0xe] || (uStack_58 != param_1[0xf])) ||
                       ((((param_1[0x10] ^ PF_PART4(uStack_60, 4)) >> 1 & 1) != 0 ||
                        (((param_1[0x11] ^ (uint)uStack_60) >> 1 & 1) != 0))))))))
                  goto LAB_10002358;
                  bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x28),
                                             (long)&local_70);
                  uVar4 = (ulong)bVar3;
                  if (bVar3) {
                    bVar3 = recovered_10003088(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x28)
                                              );
                    uVar4 = (ulong)bVar3;
                    if (!bVar3) goto LAB_1000236c;
                    recovered_100030b8(DAT_1000c018);
                    bVar3 = recovered_10003050(*(long *)(param_1 + 4),(ulong)*(uint *)(lVar9 + 0x28)
                                               ,(long)&local_70);
                    uVar4 = (ulong)bVar3;
                    if (!bVar3) goto LAB_1000236c;
                    if (((param_1[0xd] ^ (uint)local_70) & *(uint *)(lVar9 + 0x2c)) == 0) {
                      bVar7 = false;
                      *param_1 = 0;
                      param_1[0x18] = 0;
                      param_1[0x16] = 0;
                      param_1[0x17] = 0;
                      param_1[0x14] = 0;
                      param_1[0x15] = 0;
                      uVar4 = 1;
                      goto joined_r0x100022e8;
                    }
                    goto LAB_10002368;
                  }
                }
LAB_1000236c:
                bVar7 = true;
                goto joined_r0x100022e8;
              }
              pcVar6 = str_100041c2;
            }
            else {
              pcVar6 = str_10004181;
            }
LAB_10001ee0:
            recovered_100038b0(DAT_1000c018,pcVar6);
            uVar4 = 0;
          }
        }
      }
    }
  }
LAB_100022e4:
  bVar7 = true;
joined_r0x100022e8:
  if (!bVar1) {
    if (bVar7) {
      DAT_1000c000 = DAT_1000c000 | uVar8;
    }
    else {
      DAT_1000c000 = DAT_1000c000 & (uVar8 ^ 0xffffffff);
    }
  }
  return uVar4;
  while( true ) {
    lVar2 = lVar12 + 0x68;
    lVar12 = lVar12 + 4;
    if ((int)uStack_68 != *(int *)((long)param_1 + lVar2)) break;
LAB_10001f70:
    if (lVar12 == 0x24) {
      uVar4 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x610,(long)&local_70 + 4)
      ;
      if (((int)uVar4 == 0) ||
         (uVar4 = recovered_100031b8(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x618),
         (int)uVar4 == 0)) goto LAB_100022e4;
      recovered_100030b8(DAT_1000c018);
      uVar5 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x610,(long)&local_70 + 4)
      ;
      uVar4 = 0;
      bVar7 = true;
      if (((int)uVar5 == 0) || (PF_PART4(local_70, 4) != 0)) goto joined_r0x100022e8;
      uVar4 = recovered_100031b8(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x614);
      if ((int)uVar4 == 0) goto LAB_100022e4;
      recovered_100030b8(DAT_1000c018);
      uVar5 = recovered_10003150(DAT_1000c018,*(long *)(param_1 + 0x14) + 0x614,(long)&uStack_68);
      if (((int)uVar5 != 0) && ((int)uStack_68 == param_1[0x19])) goto LAB_1000202c;
      pcVar6 = str_10004134;
      goto LAB_10001ee0;
    }
    uVar5 = recovered_10003150(DAT_1000c018,
                               *(long *)(param_1 + 0x14) +
                               (ulong)*(uint *)((long)&DAT_10003d78 + lVar12),(long)&uStack_68);
    if ((int)uVar5 == 0) break;
  }
  pcVar6 = str_100040ed;
  goto LAB_10001ee0;
}

#undef DAT_10003d78
#undef DAT_1000c000
#undef DAT_1000c018
#undef DAT_1000c1a8
#undef DAT_1000c238
#undef str_10003fec
#undef str_1000402c
#undef str_1000406a
#undef str_100040af
#undef str_100040ed
#undef str_10004134
#undef str_10004181
#undef str_100041c2
#undef str_1000420b
#undef uStack_68
#undef uStack_60
#undef uStack_58
#undef uStack_54
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000237c
 */

void recovered_1000237c(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100023a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x838cU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c028
#define DAT_1000c028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83b4U)))
#undef DAT_1000c048
#define DAT_1000c048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83d4U)))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b0
 */

void recovered_100023b0(int *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;

  if (param_1 == &DAT_1000c028) {
    bVar1 = false;
    uVar3 = 4;
LAB_10002414:
    local_48 = 0;
    bVar2 = false;
    if (*param_1 != 0) {
      if ((*(long *)(param_1 + 2) != 0) &&
         (bVar2 = recovered_10003088(*(long *)(param_1 + 2),0), bVar2)) {
        recovered_100030b8(DAT_1000c018);
        bVar2 = recovered_10003088(*(long *)(param_1 + 2),4);
        if (bVar2) {
          recovered_100030b8(DAT_1000c018);
          bVar2 = recovered_10003088(*(long *)(param_1 + 2),0);
          if (bVar2) {
            recovered_100030b8(DAT_1000c018);
            bVar2 = recovered_10003050(*(long *)(param_1 + 2),0,(long)&local_48 + 4);
            if ((((bVar2) &&
                 (bVar2 = recovered_10003050(*(long *)(param_1 + 2),4,(long)&local_48), bVar2)) &&
                (PF_PART4(local_48, 4) == param_1[4])) && (((param_1[5] ^ (uint)local_48) >> 1 & 1) == 0))
            {
              *param_1 = 0;
              if (bVar1) {
                return;
              }
              goto LAB_100024cc;
            }
          }
        }
      }
      bVar2 = true;
    }
  }
  else {
    bVar1 = param_1 != &DAT_1000c048;
    uVar3 = (uint)(param_1 == &DAT_1000c048) << 3;
    if (param_1 != (int *)0x0) goto LAB_10002414;
    bVar2 = false;
  }
  if (bVar1) {
    return;
  }
  if (bVar2) {
    DAT_1000c000 = DAT_1000c000 | uVar3;
    return;
  }
LAB_100024cc:
  DAT_1000c000 = DAT_1000c000 & (uVar3 ^ 0xffffffff);
  return;
}

#undef DAT_1000c000
#undef DAT_1000c018
#undef DAT_1000c028
#undef DAT_1000c048
#undef local_48

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x838cU)))
#undef DAT_1000c028
#define DAT_1000c028 (*(int *)(((uintptr_t)pf_module_state + 0x83b4U)))
#undef DAT_1000c048
#define DAT_1000c048 (*(int *)(((uintptr_t)pf_module_state + 0x83d4U)))
#undef DAT_1000c1a8
#define DAT_1000c1a8 (*(int *)(((uintptr_t)pf_module_state + 0x8534U)))
#undef DAT_1000c238
#define DAT_1000c238 (*(int *)(((uintptr_t)pf_module_state + 0x85c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

void recovered_100024f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000c1a8 != 0) {
    DAT_1000c000 = DAT_1000c000 | 1;
  }
  if (DAT_1000c238 != 0) {
    DAT_1000c000 = DAT_1000c000 | 2;
  }
  if (DAT_1000c028 != 0) {
    DAT_1000c000 = DAT_1000c000 | 4;
  }
  if (DAT_1000c048 != 0) {
    DAT_1000c000 = DAT_1000c000 | 8;
  }
  return;
}

#undef DAT_1000c000
#undef DAT_1000c028
#undef DAT_1000c048
#undef DAT_1000c1a8
#undef DAT_1000c238

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x838cU)))
#undef str_10004248
#define str_10004248 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d4U)))
#undef str_10004269
#define str_10004269 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#undef str_10004273
#define str_10004273 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_1000427f
#define str_1000427f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60bU)))
#undef str_10004289
#define str_10004289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_10004298
#define str_10004298 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x624U)))
#undef str_100042ab
#define str_100042ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_100042de
#define str_100042de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_10004321
#define str_10004321 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6adU)))
#undef str_10004342
#define str_10004342 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ceU)))
#define auStack_430 (*(undefined1 (*)[1072])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002558
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_10002558(int *param_1)

{
  unsigned char pf_stack_frame[1120] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;

  uVar2 = DAT_1000c000;
  if (DAT_1000c000 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10000d60(auStack_430,0x400,str_10004248);
    if ((uVar2 & 1) != 0) {
      recovered_10002ca8((long)auStack_430,0x400,str_10004269);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pcVar1 = str_1000427f;
      if ((uVar2 & 1) != 0) {
        pcVar1 = str_10004273;
      }
      recovered_10002ca8((long)auStack_430,0x400,pcVar1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      recovered_10002ca8((long)auStack_430,0x400,str_10004289);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      recovered_10002ca8((long)auStack_430,0x400,str_10004298);
    }
    recovered_10002ca8((long)auStack_430,0x400,str_100042ab);
    recovered_100038b0(param_1,str_100042de);
    if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
      (*(code *)(ulong)(uint)param_1[3])(str_10004321,str_10004342,auStack_430);
    }
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_1000c000
#undef str_10004248
#undef str_10004269
#undef str_10004273
#undef str_1000427f
#undef str_10004289
#undef str_10004298
#undef str_100042ab
#undef str_100042de
#undef str_10004321
#undef str_10004342
#undef auStack_430

#undef DAT_10003d9c
#define DAT_10003d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_10003d9d
#define DAT_10003d9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_10003d9e
#define DAT_10003d9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8394U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(int *)(((uintptr_t)pf_module_state + 0x8474U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(byte *)(((uintptr_t)pf_module_state + 0x8478U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x847cU)))
#undef DAT_1000c102
#define DAT_1000c102 (*(ushort *)(((uintptr_t)pf_module_state + 0x848eU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(int *)(((uintptr_t)pf_module_state + 0x8498U)))
#undef DAT_1000c110
#define DAT_1000c110 (*(char *)(((uintptr_t)pf_module_state + 0x849cU)))
#undef DAT_1000c114
#define DAT_1000c114 (*(uint *)(((uintptr_t)pf_module_state + 0x84a0U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint *)(((uintptr_t)pf_module_state + 0x84a4U)))
#undef DAT_1000c11c
#define DAT_1000c11c (*(uint *)(((uintptr_t)pf_module_state + 0x84a8U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84acU)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint *)(((uintptr_t)pf_module_state + 0x84b4U)))
#define uStack_160 (*(ushort *)(pf_stack_frame + 16))
#define cStack_15e (*(char *)(pf_stack_frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000264c
 */

uint recovered_1000264c(void)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 uVar13;

  recovered_1000329c(&DAT_1000c008);
  uVar8 = recovered_100038e4();
  if (uVar8 != 0) {
    DAT_1000c008 = 0;
    return uVar8;
  }
  if (DAT_1000c0e8 != 0) {
    if (DAT_1000c0f0 == 0) {
      DAT_1000c008 = 0;
      return 0;
    }
    bVar7 = recovered_1000382c(DAT_1000c0f0,(uint)DAT_1000c0ec,(long)&uStack_160,(ulong)DAT_1000c102
                              );
    if (!bVar7) {
      DAT_1000c008 = 0;
      return (uint)bVar7;
    }
    if (1 < uStack_160 && uStack_160 <= DAT_1000c102) {
      if (DAT_1000c10c == 0) {
        uVar8 = 2;
      }
      else {
        if (uStack_160 == 2) {
          DAT_1000c008 = 0;
          return 0;
        }
        if (cStack_15e != DAT_1000c110) {
          DAT_1000c008 = 0;
          return 0;
        }
        uVar8 = 3;
      }
      if ((DAT_1000c114 + uVar8 < (uint)uStack_160) &&
         (DAT_1000c118 + uVar8 + DAT_1000c11c <= (uint)uStack_160)) {
        lVar6 = (ulong)uVar8 - 0x160;
        bVar3 = *(byte *)((long)&uStack_160 + (ulong)DAT_1000c114 + lVar6 + 0x160);
        uVar10 = (uint)((bVar3 & 0x22) != 0);
        uVar8 = uVar10 << 0x10;
        if ((bVar3 & 0x11) != 0) {
          uVar8 = uVar10 << 0x10 | 0x20000;
        }
        if ((bVar3 & 0x88) != 0) {
          uVar8 = uVar8 | 0x40000;
        }
        if (uVar8 != DAT_1000c128) {
          DAT_1000c128 = uVar8;
          recovered_1000391c(uVar8 | 0x80000000);
        }
        uVar10 = 0;
        uVar9 = DAT_1000c11c;
        do {
          if (uVar9 <= uVar10) {
            uVar8 = DAT_1000c118;
            for (uVar11 = 0; uVar11 != 6; uVar11 = uVar11 + 1) {
              if (uVar11 < uVar9) {
                uVar13 = *(undefined1 *)((long)&uStack_160 + (ulong)uVar8 + lVar6 + 0x160);
              }
              else {
                uVar13 = 0;
              }
              (&DAT_1000c120)[uVar11] = uVar13;
              uVar8 = uVar8 + 1;
            }
            uVar8 = recovered_100038e4();
            DAT_1000c008 = 0;
            return uVar8;
          }
          bVar3 = *(byte *)((long)&uStack_160 + (ulong)(DAT_1000c118 + uVar10) + lVar6 + 0x160);
          if (1 < bVar3) {
            uVar11 = (ulong)uVar9;
            pbVar12 = &DAT_1000c120;
            do {
              if (uVar11 == 0) {
                if (bVar3 < 0x53) {
                  lVar5 = (ulong)bVar3 * 3;
                  if ((&DAT_10003d9c)[lVar5] != '\0' || (&DAT_10003d9e)[lVar5] != '\0') {
                    cVar2 = (&DAT_10003d9c)[lVar5];
                    if ((uVar8 & 0x10000) != 0) {
                      cVar2 = (&DAT_10003d9d)[lVar5];
                    }
                    uVar4 = CONCAT11((&DAT_10003d9e)[lVar5],cVar2) | uVar8;
                    if (uVar4 != 0) {
                      recovered_1000391c(uVar4);
                      uVar9 = DAT_1000c11c;
                    }
                  }
                }
                break;
              }
              bVar1 = *pbVar12;
              uVar11 = uVar11 - 1;
              pbVar12 = pbVar12 + 1;
            } while (bVar1 != bVar3);
          }
          uVar10 = uVar10 + 1;
        } while( true );
      }
    }
  }
  DAT_1000c008 = 0;
  return 0;
}

#undef DAT_10003d9c
#undef DAT_10003d9d
#undef DAT_10003d9e
#undef DAT_1000c008
#undef DAT_1000c0e8
#undef DAT_1000c0ec
#undef DAT_1000c0f0
#undef DAT_1000c102
#undef DAT_1000c10c
#undef DAT_1000c110
#undef DAT_1000c114
#undef DAT_1000c118
#undef DAT_1000c11c
#undef DAT_1000c120
#undef DAT_1000c128
#undef uStack_160
#undef cStack_15e

#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8394U)))
#undef DAT_1000c068
#define DAT_1000c068 (*(int *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_1000c06c
#define DAT_1000c06c (*(byte *)(((uintptr_t)pf_module_state + 0x83f8U)))
#undef DAT_1000c070
#define DAT_1000c070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83fcU)))
#undef DAT_1000c082
#define DAT_1000c082 (*(ushort *)(((uintptr_t)pf_module_state + 0x840eU)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(int *)(((uintptr_t)pf_module_state + 0x8418U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(char *)(((uintptr_t)pf_module_state + 0x841cU)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint *)(((uintptr_t)pf_module_state + 0x8420U)))
#undef DAT_1000c098
#define DAT_1000c098 (*(uint *)(((uintptr_t)pf_module_state + 0x8424U)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint *)(((uintptr_t)pf_module_state + 0x8428U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(int *)(((uintptr_t)pf_module_state + 0x842cU)))
#define uStack_130 (*(undefined2 *)(pf_stack_frame + 16))
#define cStack_12e (*(char *)(pf_stack_frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a8
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100028a8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;

  recovered_1000329c(&DAT_1000c008);
  if (param_1 == (undefined4 *)0x0) {
    DAT_1000c008 = 0;
    return false;
  }
  if (DAT_1000c068 == 0) {
    DAT_1000c008 = 0;
    return false;
  }
  if (DAT_1000c070 == 0) {
    DAT_1000c008 = 0;
    return false;
  }
  recovered_10000d48((undefined1 *)param_1,0x20);
  bVar8 = recovered_1000382c(DAT_1000c070,(uint)DAT_1000c06c,(long)&uStack_130,(ulong)DAT_1000c082);
  if (bVar8) {
    bVar8 = false;
    bVar7 = true;
    uVar12 = (uint)uStack_130;
    if (1 < uStack_130) {
      bVar7 = (uint)DAT_1000c082 <= (uint)uStack_130;
      bVar8 = uVar12 == DAT_1000c082;
    }
    if (!bVar7 || bVar8) {
      if (DAT_1000c08c == 0) {
        uVar10 = 2;
      }
      else {
        if (uVar12 == 2) {
          DAT_1000c008 = 0;
          return false;
        }
        if (cStack_12e != DAT_1000c090) {
          DAT_1000c008 = 0;
          return false;
        }
        uVar10 = 3;
      }
      uVar9 = (uint)uStack_130;
      if (DAT_1000c094 + uVar10 < uVar9) {
        if ((DAT_1000c0a0 + uVar10 + DAT_1000c098 <= uVar9) &&
           (uVar1 = DAT_1000c09c + DAT_1000c0a0 + uVar10, uVar1 < uVar9 || uVar1 == uVar12)) {
          lVar6 = (ulong)uVar10 - 0x130;
          bVar5 = *(byte *)((long)&uStack_130 + (ulong)DAT_1000c094 + lVar6 + 0x130);
          pcVar2 = (char *)((long)&uStack_130 + (ulong)DAT_1000c098 + lVar6 + 0x130);
          cVar4 = *pcVar2;
          if (DAT_1000c0a0 == 2) {
            iVar11 = (int)CONCAT11(pcVar2[1],cVar4);
            pbVar3 = (byte *)((long)&uStack_130 + (ulong)DAT_1000c09c + lVar6 + 0x130);
            uVar12 = (int)(short)((ushort)pbVar3[1] << 8) | (uint)*pbVar3;
          }
          else {
            iVar11 = (int)cVar4;
            uVar12 = (uint)*(char *)((long)&uStack_130 + (ulong)DAT_1000c09c + lVar6 + 0x130);
          }
          *param_1 = 2;
          param_1[4] = iVar11;
          param_1[5] = uVar12;
          if ((bVar5 & 1) != 0) {
            param_1[1] = param_1[1] | 1;
          }
          if ((bVar5 >> 1 & 1) != 0) {
            param_1[1] = param_1[1] | 2;
          }
          if ((bVar5 >> 2 & 1) != 0) {
            param_1[1] = param_1[1] | 4;
          }
          DAT_1000c008 = 0;
          return true;
        }
      }
    }
    DAT_1000c008 = 0;
    return false;
  }
  DAT_1000c008 = 0;
  return false;
}

#undef DAT_1000c008
#undef DAT_1000c068
#undef DAT_1000c06c
#undef DAT_1000c070
#undef DAT_1000c082
#undef DAT_1000c08c
#undef DAT_1000c090
#undef DAT_1000c094
#undef DAT_1000c098
#undef DAT_1000c09c
#undef DAT_1000c0a0
#undef uStack_130
#undef cStack_12e

#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8394U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(int *)(((uintptr_t)pf_module_state + 0x84bcU)))
#undef DAT_1000c134
#define DAT_1000c134 (*(byte *)(((uintptr_t)pf_module_state + 0x84c0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84c4U)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84ccU)))
#undef DAT_1000c152
#define DAT_1000c152 (*(ushort *)(((uintptr_t)pf_module_state + 0x84deU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(int *)(((uintptr_t)pf_module_state + 0x84ecU)))
#undef DAT_1000c164
#define DAT_1000c164 (*(char *)(((uintptr_t)pf_module_state + 0x84f0U)))
#undef DAT_1000c168
#define DAT_1000c168 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84f4U)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84fcU)))
#undef DAT_1000c178
#define DAT_1000c178 (*(uint *)(((uintptr_t)pf_module_state + 0x8504U)))
#undef DAT_1000c17c
#define DAT_1000c17c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8508U)))
#undef DAT_1000c184
#define DAT_1000c184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8510U)))
#undef DAT_1000c188
#define DAT_1000c188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8514U)))
#undef DAT_1000c190
#define DAT_1000c190 (*(int *)(((uintptr_t)pf_module_state + 0x851cU)))
#undef DAT_1000c194
#define DAT_1000c194 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8520U)))
#undef DAT_1000c198
#define DAT_1000c198 (*(uint *)(((uintptr_t)pf_module_state + 0x8524U)))
#undef DAT_1000c19c
#define DAT_1000c19c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8528U)))
#undef _DAT_1000c168
#define _DAT_1000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84f4U)))
#undef _DAT_1000c17c
#define _DAT_1000c17c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8508U)))
#define uStack_7c (*(uint *)(pf_stack_frame + 324))
#define auStack_70 (*(uint (*)[28])(pf_stack_frame + 336))
#define uStack_1b0 (*(uint *)(pf_stack_frame + 16))
#define uStack_1ac (*(ushort *)(pf_stack_frame + 20))
#define cStack_1aa (*(char *)(pf_stack_frame + 22))
#define auStack_ac (*(undefined1 (*)[172])(pf_stack_frame + 276))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 288))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 296))
#define uStack_90 (*(uint *)(pf_stack_frame + 304))
#define uStack_8c (*(undefined8 *)(pf_stack_frame + 308))
#define uStack_84 (*(undefined8 *)(pf_stack_frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002a4c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint128 auVar12;
  uint128 auVar13;

  recovered_1000329c(&DAT_1000c008);
  uStack_1b0 = 0;
  if (param_1 == (undefined4 *)0x0) {
    DAT_1000c008 = 0;
    return false;
  }
  if (DAT_1000c130 == 0) {
    DAT_1000c008 = 0;
    return false;
  }
  if (DAT_1000c190 == 0) {
    DAT_1000c008 = 0;
    return false;
  }
  if (DAT_1000c138 == 0) {
    DAT_1000c008 = 0;
    return false;
  }
  recovered_10000d48((undefined1 *)param_1,0x20);
  if (((DAT_1000c140 == 0) || (bVar4 = recovered_10003050(DAT_1000c140,4,(long)&uStack_1b0), !bVar4)
      ) || ((uStack_1b0 & 1) == 0)) {
    bVar4 = recovered_1000382c(DAT_1000c138,(uint)DAT_1000c134,(long)&uStack_1ac,(ulong)DAT_1000c152
                              );
    if (!bVar4) {
      DAT_1000c008 = 0;
      return bVar4;
    }
    bVar4 = false;
    bVar3 = true;
    uVar8 = (uint)uStack_1ac;
    if (1 < uStack_1ac) {
      bVar3 = (uint)DAT_1000c152 <= (uint)uStack_1ac;
      bVar4 = uVar8 == DAT_1000c152;
    }
    if (!bVar3 || bVar4) {
      if (DAT_1000c160 == 0) {
        lVar9 = 2;
      }
      else {
        if (uVar8 == 2) {
          DAT_1000c008 = 0;
          return false;
        }
        if (cStack_1aa != DAT_1000c164) {
          DAT_1000c008 = 0;
          return false;
        }
        lVar9 = 3;
      }
      lVar1 = (long)&uStack_1ac + lVar9;
      recovered_10000d48((undefined1 *)&uStack_a0,0x28);
      uStack_98 = DAT_1000c170;
      uStack_a0 = _DAT_1000c168;
      PF_PART4(auVar12, 4) = DAT_1000c184;
      PF_PART4(auVar12, 0) = DAT_1000c184;
      PF_PART4(auVar12, 8) = DAT_1000c184;
      PF_PART4(auVar12, 12) = DAT_1000c184;
      uStack_90 = DAT_1000c178;
      PF_PART4(auVar13, 8) = DAT_1000c184;
      PF_PART8(auVar13, 0) = _DAT_1000c17c;
      PF_PART4(auVar13, 12) = (undefined4)DAT_1000c188;
      auVar13 = NEON_ext(auVar13,auVar12,0xc,1);
      uStack_84 = CONCAT44(PF_PART4(auVar13, 4),(int)((ulong)_DAT_1000c17c >> 0x20));
      uStack_8c = CONCAT44(PF_PART4(auVar13, 0),(int)_DAT_1000c17c);
      uStack_7c = PF_PART4(DAT_1000c188, 4);
      recovered_10000d48(auStack_ac,0xc);
      uVar11 = PF_PART4(DAT_1000c19c, 4);
      uVar10 = (uint)DAT_1000c19c;
      uVar8 = uVar8 - (int)lVar9;
      auStack_70[0] = 0;
      auStack_70[1] = 0;
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      uVar5 = recovered_10003950(lVar1,uVar8,(uint)uStack_a0,PF_PART4(uStack_a0, 4),auStack_70 + 3);
      if ((int)uVar5 != 0) {
        uVar2 = PF_PART4(uStack_98, 4);
        if (PF_PART4(uStack_98, 4) == 0) {
          uVar7 = 0;
          uVar6 = 1;
        }
        else {
          uVar5 = recovered_10003950(lVar1,uVar8,(uint)uStack_98,PF_PART4(uStack_98, 4),auStack_70 + 2);
          uVar6 = (uint)((int)uVar5 == 0);
          uVar7 = (uint)(auStack_70[2] != 0);
        }
        uVar7 = (uint)(auStack_70[3] != 0) & (uVar6 | uVar7);
        if (uVar7 != 1) {
LAB_10002c78:
          DAT_1000c194 = 1;
          DAT_1000c198 = uVar7;
          PF_PART4(DAT_1000c19c, 0) = uVar10;
          PF_PART4(DAT_1000c19c, 4) = uVar11;
          *param_1 = 1;
          param_1[2] = uVar10;
          param_1[3] = uVar11;
          *(ulong *)(param_1 + 6) = CONCAT44(PF_PART4(DAT_1000c188, 4),(undefined4)DAT_1000c188);
          if (uVar7 == 0) {
            DAT_1000c008 = 0;
            return true;
          }
          param_1[1] = 1;
          DAT_1000c008 = 0;
          return true;
        }
        if ((uVar2 != 0 & uVar6) == 0) {
          uVar5 = recovered_10003950(lVar1,uVar8,uStack_90,(uint)uStack_8c,auStack_70 + 1);
          if ((int)uVar5 != 0) {
            uVar5 = recovered_10003950(lVar1,uVar8,(uint)uStack_84,PF_PART4(uStack_84, 4),auStack_70);
            if ((int)uVar5 != 0) {
              if ((auStack_70[1] <= PF_PART4(uStack_8c, 4)) &&
                 (uVar10 = auStack_70[1], uVar11 = auStack_70[0], auStack_70[0] <= uStack_7c))
              goto LAB_10002c78;
            }
          }
        }
      }
    }
  }
  DAT_1000c008 = 0;
  return false;
}

#undef DAT_1000c008
#undef DAT_1000c130
#undef DAT_1000c134
#undef DAT_1000c138
#undef DAT_1000c140
#undef DAT_1000c152
#undef DAT_1000c160
#undef DAT_1000c164
#undef DAT_1000c168
#undef DAT_1000c170
#undef DAT_1000c178
#undef DAT_1000c17c
#undef DAT_1000c184
#undef DAT_1000c188
#undef DAT_1000c190
#undef DAT_1000c194
#undef DAT_1000c198
#undef DAT_1000c19c
#undef _DAT_1000c168
#undef _DAT_1000c17c
#undef uStack_7c
#undef auStack_70
#undef uStack_1b0
#undef uStack_1ac
#undef cStack_1aa
#undef auStack_ac
#undef uStack_a0
#undef uStack_98
#undef uStack_90
#undef uStack_8c
#undef uStack_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca8
 */

void recovered_10002ca8(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if (param_1 != 0) {
    uVar2 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar2);
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    if (param_3 != (char *)0x0) {
      while( true ) {
        if (*param_3 == '\0' || param_2 <= uVar2) break;
        *(char *)(param_1 + -1 + uVar2) = *param_3;
        uVar2 = uVar2 + 1;
        param_3 = param_3 + 1;
      }
      *(undefined1 *)(param_1 + uVar2 + -1) = 0;
    }
  }
  return;
}


#undef DAT_10003ca0
#define DAT_10003ca0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef str_1000435c
#define str_1000435c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e8U)))
#undef str_1000436a
#define str_1000436a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f6U)))
#undef str_10004378
#define str_10004378 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x704U)))
#undef str_100043bb
#define str_100043bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x747U)))
#define uStack_1fc (*(undefined4 *)(pf_stack_frame + 36))
#define auStack_1e0 (*(undefined1 (*)[480])(pf_stack_frame + 64))
#define local_208 (*(undefined8 *)(pf_stack_frame + 24))
#define auStack_1a0 (*(undefined1 (*)[416])(pf_stack_frame + 128))
#define local_200 (*(int *)(pf_stack_frame + 32))
#define auStack_160 (*(undefined1 (*)[352])(pf_stack_frame + 192))
#define local_1f0 (*(undefined8 *)(pf_stack_frame + 48))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cec
 */

void recovered_10002cec(int param_1,undefined8 param_2,char *param_3)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_10000d48((undefined1 *)&local_208,0x1c8);
  local_208 = DAT_10003ca0;
  uStack_1fc = 0x13;
  local_200 = param_1;
  local_1f0 = param_2;
  recovered_10000d60(auStack_1e0,0x40,param_3);
  recovered_10000d60(auStack_1a0,0x40,str_1000435c);
  recovered_10000d60(auStack_160,0x60,str_1000436a);
  pcVar1 = str_10004378;
  if (param_1 != 9) {
    pcVar1 = str_100043bb;
  }
  recovered_10000d60(auStack_100,0xc0,pcVar1);
  if ((((DAT_1000c018 != (int *)0x0) && (*DAT_1000c018 == 0x54584b57)) &&
      (0xef < (uint)DAT_1000c018[2])) && (DAT_1000c018[0x3b] != 0)) {
    (*(code *)(ulong)(uint)DAT_1000c018[0x3b])(&local_208);
  }
  return;
}

#undef DAT_10003ca0
#undef DAT_1000c018
#undef str_1000435c
#undef str_1000436a
#undef str_10004378
#undef str_100043bb
#undef uStack_1fc
#undef auStack_1e0
#undef local_208
#undef auStack_1a0
#undef local_200
#undef auStack_160
#undef local_1f0
#undef auStack_100

#undef DAT_10003ca8
#define DAT_10003ca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10003cb0
#define DAT_10003cb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(int *)(((uintptr_t)pf_module_state + 0x8474U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(byte *)(((uintptr_t)pf_module_state + 0x8478U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(ushort *)(((uintptr_t)pf_module_state + 0x8486U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(ushort *)(((uintptr_t)pf_module_state + 0x848eU)))
#undef str_10003f92
#define str_10003f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_1000435c
#define str_1000435c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e8U)))
#undef str_100043f5
#define str_100043f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x781U)))
#undef str_100043fd
#define str_100043fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x789U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de0
 */

undefined8 recovered_10002de0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && (DAT_1000c0e8 != 0)) {
    recovered_10000d48((undefined1 *)param_1,500);
    *param_1 = DAT_10003ca8;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10003cb0;
    uVar1 = recovered_100039d8(DAT_1000c018);
    *(int *)(param_1 + 3) = (int)uVar1;
    uVar2 = (uint)DAT_1000c0fa;
    *(uint *)((long)param_1 + 0x44) = (uint)DAT_1000c0ec;
    *(uint *)(param_1 + 9) = uVar2;
    *(uint *)((long)param_1 + 0x4c) = (uint)DAT_1000c102;
    recovered_10000d60((undefined1 *)((long)param_1 + 0x54),0x40,str_10003f92);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x94),0x40,str_1000435c);
    recovered_10000d60((undefined1 *)((long)param_1 + 0xd4),0x60,str_100043f5);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x134),0xc0,str_100043fd);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10003ca8
#undef DAT_10003cb0
#undef DAT_1000c018
#undef DAT_1000c0e8
#undef DAT_1000c0ec
#undef DAT_1000c0fa
#undef DAT_1000c102
#undef str_10003f92
#undef str_1000435c
#undef str_100043f5
#undef str_100043fd

#undef DAT_10003ca8
#define DAT_10003ca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10003cb8
#define DAT_10003cb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c068
#define DAT_1000c068 (*(int *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_1000c06c
#define DAT_1000c06c (*(byte *)(((uintptr_t)pf_module_state + 0x83f8U)))
#undef DAT_1000c07a
#define DAT_1000c07a (*(ushort *)(((uintptr_t)pf_module_state + 0x8406U)))
#undef DAT_1000c082
#define DAT_1000c082 (*(ushort *)(((uintptr_t)pf_module_state + 0x840eU)))
#undef str_10003fa8
#define str_10003fa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x334U)))
#undef str_1000435c
#define str_1000435c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e8U)))
#undef str_100043f5
#define str_100043f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x781U)))
#undef str_1000442e
#define str_1000442e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e8c
 */

undefined8 recovered_10002e8c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && (DAT_1000c068 != 0)) {
    recovered_10000d48((undefined1 *)param_1,500);
    *param_1 = DAT_10003ca8;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10003cb8;
    uVar1 = recovered_100039d8(DAT_1000c018);
    *(int *)(param_1 + 3) = (int)uVar1;
    uVar2 = (uint)DAT_1000c07a;
    *(uint *)((long)param_1 + 0x44) = (uint)DAT_1000c06c;
    *(uint *)(param_1 + 9) = uVar2;
    *(uint *)((long)param_1 + 0x4c) = (uint)DAT_1000c082;
    recovered_10000d60((undefined1 *)((long)param_1 + 0x54),0x40,str_10003fa8);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x94),0x40,str_1000435c);
    recovered_10000d60((undefined1 *)((long)param_1 + 0xd4),0x60,str_100043f5);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x134),0xc0,str_1000442e);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10003ca8
#undef DAT_10003cb8
#undef DAT_1000c018
#undef DAT_1000c068
#undef DAT_1000c06c
#undef DAT_1000c07a
#undef DAT_1000c082
#undef str_10003fa8
#undef str_1000435c
#undef str_100043f5
#undef str_1000442e

#undef DAT_10003ca8
#define DAT_10003ca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10003cc0
#define DAT_10003cc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8394U)))
#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(int *)(((uintptr_t)pf_module_state + 0x84bcU)))
#undef DAT_1000c188
#define DAT_1000c188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8514U)))
#undef DAT_1000c190
#define DAT_1000c190 (*(int *)(((uintptr_t)pf_module_state + 0x851cU)))
#undef DAT_1000c194
#define DAT_1000c194 (*(int *)(((uintptr_t)pf_module_state + 0x8520U)))
#undef DAT_1000c198
#define DAT_1000c198 (*(int *)(((uintptr_t)pf_module_state + 0x8524U)))
#undef DAT_1000c19c
#define DAT_1000c19c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8528U)))
#undef str_10003f41
#define str_10003f41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_1000435c
#define str_1000435c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e8U)))
#undef str_100043f5
#define str_100043f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x781U)))
#undef str_10004467
#define str_10004467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f3U)))
#undef str_10004476
#define str_10004476 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x802U)))
#undef str_10004487
#define str_10004487 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x813U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f38
 */

undefined8 recovered_10002f38(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;

  uVar7 = 0;
  if (((param_1 != (undefined8 *)0x0) && (DAT_1000c130 != 0)) && (DAT_1000c190 != 0)) {
    recovered_1000329c(&DAT_1000c008);
    uVar5 = DAT_1000c19c;
    iVar4 = DAT_1000c198;
    iVar3 = DAT_1000c194;
    uVar7 = DAT_1000c188;
    DAT_1000c008 = 0;
    recovered_10000d48((undefined1 *)param_1,500);
    *param_1 = DAT_10003ca8;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10003cc0;
    uVar6 = recovered_100039d8(DAT_1000c018);
    *(int *)(param_1 + 3) = (int)uVar6;
    *(undefined8 *)((long)param_1 + 0x4c) = uVar7;
    *(undefined8 *)((long)param_1 + 0x44) = uVar5;
    recovered_10000d60((undefined1 *)((long)param_1 + 0x54),0x40,str_10003f41);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x94),0x40,str_1000435c);
    pcVar1 = str_100043f5;
    if (iVar4 != 0) {
      pcVar1 = str_10004467;
    }
    pcVar2 = str_10004476;
    if (iVar3 != 0) {
      pcVar2 = pcVar1;
    }
    recovered_10000d60((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar2);
    recovered_10000d60((undefined1 *)((long)param_1 + 0x134),0xc0,str_10004487);
    uVar7 = 1;
  }
  return uVar7;
}

#undef DAT_10003ca8
#undef DAT_10003cc0
#undef DAT_1000c008
#undef DAT_1000c018
#undef DAT_1000c130
#undef DAT_1000c188
#undef DAT_1000c190
#undef DAT_1000c194
#undef DAT_1000c198
#undef DAT_1000c19c
#undef str_10003f41
#undef str_1000435c
#undef str_100043f5
#undef str_10004467
#undef str_10004476
#undef str_10004487

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003050
 */

bool recovered_10003050(long param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar2 = recovered_10003150(DAT_1000c018,param_1 + (param_2 & 0xffffffff),param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}

#undef DAT_1000c018

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003088
 */

bool recovered_10003088(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    uVar2 = recovered_100031b8(DAT_1000c018,param_1 + (param_2 & 0xffffffff));
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}

#undef DAT_1000c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b8
 */

void recovered_100030b8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100030e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e8
 */

bool recovered_100030e8(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  iVar2 = 200;
  while( true ) {
    local_34 = 0;
    bVar1 = recovered_10003050(param_1,param_2,(long)&local_34);
    if (!bVar1) {
      return bVar1;
    }
    if (-1 < local_34) break;
    recovered_1000237c(DAT_1000c018,1);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return false;
    }
  }
  return true;
}

#undef DAT_1000c018
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

undefined8 recovered_10003150(int *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_3 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_3 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100031b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b8
 */

undefined8 recovered_100031b8(int *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100031e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef UNK_1000c004
#define UNK_1000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#undef uRam000000001000c004
#define uRam000000001000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#define local_42 (*(undefined2 *)(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003218
 */

bool recovered_10003218(long param_1,int param_2,undefined2 param_3,long param_4,ulong param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;

  bVar4 = false;
  if (param_1 != 0) {
    uVar1 = pf_read_daif();
    uVar2 = pf_read_daif();
    pf_write_daif(uVar2 | 0xc0);
    InstructionSynchronizationBarrier();
    local_42 = param_3;
    recovered_1000329c((int *)((uintptr_t)pf_module_state+0x8390U));
    DAT_1000c020 = param_1;
    bVar3 = recovered_100032c0();
    bVar4 = false;
    if (bVar3) {
      bVar3 = recovered_10003330(param_2,(long)&local_42,2,1);
      bVar4 = false;
      if (bVar3) {
        bVar4 = recovered_100033e0(param_2,param_4,param_5);
      }
    }
    DAT_1000c020 = 0;
    uRam000000001000c004 = 0;
    pf_write_daif(uVar1);
    InstructionSynchronizationBarrier();
  }
  return bVar4;
}

#undef DAT_1000c020
#undef UNK_1000c004
#undef uRam000000001000c004
#undef local_42

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000329c
 */

void recovered_1000329c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  bool bVar3;

  while( true ) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      { __typeof__(*param_1) pf_exclusive_expected = iVar1;
bVar3 = __atomic_compare_exchange_n(&(*param_1),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar2 = bVar3 ? 0 : 1;
}
    } while (cVar2 != '\0');
    if (iVar1 == 0) break;
    do {
    } while (*param_1 != 0);
  }
  return;
}


#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

bool recovered_100032c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  uVar2 = recovered_1000357c(0x40);
  if ((uVar2 & 1) != 0) {
    recovered_100035d0(0x604,2);
    uVar3 = 0;
    while (((uint)(uVar3 >> 5) < 0x271 && (uVar2 = recovered_1000357c(0x40), (uVar2 & 1) != 0))) {
      recovered_1000237c(DAT_1000c018,0x32);
      uVar3 = (ulong)((int)uVar3 + 0x32);
    }
  }
  uVar2 = recovered_1000357c(0x40);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar2 = recovered_1000357c(0x610);
    recovered_100035d0(0x618,(ulong)uVar2);
    recovered_10003638();
  }
  return bVar1;
}

#undef DAT_1000c018

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003330
 */

bool recovered_10003330(int param_1,long param_2,ulong param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;

  recovered_10003638();
  uVar1 = recovered_1000357c(0x610);
  recovered_100035d0(0x618,(ulong)uVar1);
  recovered_100035d0(0x26c,param_3);
  recovered_100035d0(0x600,(ulong)(param_1 << 9 | (uint)(param_4 != 0) << 2 | 0x8000000));
  uVar4 = 0;
  while ((uint)uVar4 < (uint)param_3) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = uVar4 & 0xffffffff;
    for (uVar1 = 0; uVar1 < 4 && uVar4 < (param_3 & 0xffffffff); uVar1 = uVar1 + 1) {
      uVar2 = (ulong)((uint)*(byte *)(param_2 + uVar4) << (ulong)(uVar3 & 0x1f) | (uint)uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 8;
    }
    recovered_100035d0(0x700,uVar2);
  }
  uVar4 = 0;
  while( true ) {
    if (0xc34 < (uint)(uVar4 >> 5)) {
      recovered_100035d0(0x604,2);
      recovered_1000237c(DAT_1000c018,1000);
      uVar1 = recovered_1000357c(0x610);
      recovered_100035d0(0x618,(ulong)uVar1);
      return false;
    }
    uVar1 = recovered_1000357c(0x610);
    if ((uVar1 & 0x342f) != 0) break;
    recovered_1000237c(DAT_1000c018,0x14);
    uVar4 = (ulong)((int)uVar4 + 0x14);
  }
  recovered_100035d0(0x618,(ulong)uVar1);
  return (uVar1 & 0x342e) == 0;
}

#undef DAT_1000c018

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

bool recovered_100033e0(int param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;

  uVar6 = (uint)param_3;
  if (0xfffffbff < uVar6 - 0x401) {
    recovered_10003638();
    uVar4 = recovered_1000357c(0x610);
    recovered_100035d0(0x618,(ulong)uVar4);
    recovered_100035d0(0x270,param_3);
    recovered_100035d0(0x600,(ulong)(param_1 << 9 | 0x10000000));
    uVar9 = 0;
    for (iVar10 = 0; iVar10 != 5000; iVar10 = iVar10 + 1) {
      uVar5 = recovered_1000357c(0x610);
      uVar7 = (ulong)uVar5;
      uVar4 = recovered_1000357c(0x804);
      uVar4 = uVar4 & 0x1ffffff;
      while( true ) {
        bVar1 = uVar4 == 0;
        uVar4 = uVar4 - 1;
        if (bVar1 || uVar6 <= (uint)uVar9) break;
        uVar2 = recovered_1000357c(0x780);
        uVar3 = 0;
        uVar9 = uVar9 & 0xffffffff;
        for (uVar8 = 0; uVar8 < 4 && uVar9 < (param_3 & 0xffffffff); uVar8 = uVar8 + 1) {
          *(char *)(param_2 + uVar9) = (char)(uVar2 >> (ulong)(uVar3 & 0x1f));
          uVar9 = uVar9 + 1;
          uVar3 = uVar3 + 8;
        }
      }
      if ((uVar5 & 0x342e) != 0) goto LAB_100034f8;
      if ((uVar5 & 1) != 0) {
        uVar4 = recovered_1000357c(0x804);
        uVar4 = uVar4 & 0x1ffffff;
        while( true ) {
          bVar1 = uVar4 == 0;
          uVar4 = uVar4 - 1;
          if (bVar1 || uVar6 <= (uint)uVar9) break;
          uVar3 = recovered_1000357c(0x780);
          uVar8 = 0;
          uVar9 = uVar9 & 0xffffffff;
          for (uVar5 = 0; uVar5 < 4 && uVar9 < (param_3 & 0xffffffff); uVar5 = uVar5 + 1) {
            *(char *)(param_2 + uVar9) = (char)(uVar3 >> (ulong)(uVar8 & 0x1f));
            uVar9 = uVar9 + 1;
            uVar8 = uVar8 + 8;
          }
        }
        recovered_100035d0(0x618,uVar7);
        return (uint)uVar9 == uVar6;
      }
      recovered_100035d0(0x618,(ulong)(uVar5 & 0xc000000));
      if (uVar6 <= (uint)uVar9) {
        uVar9 = 0;
        while( true ) {
          if (0xc34 < (uint)(uVar9 >> 5)) {
            recovered_100035d0(0x604,2);
            recovered_1000237c(DAT_1000c018,1000);
            uVar6 = recovered_1000357c(0x610);
            recovered_100035d0(0x618,(ulong)uVar6);
            return false;
          }
          uVar6 = recovered_1000357c(0x610);
          if ((uVar6 & 0x342f) != 0) break;
          recovered_1000237c(DAT_1000c018,0x14);
          uVar9 = (ulong)((int)uVar9 + 0x14);
        }
        recovered_100035d0(0x618,(ulong)uVar6);
        return (uVar6 & 0x342e) == 0;
      }
      recovered_1000237c(DAT_1000c018,0x14);
    }
    recovered_100035d0(0x604,2);
    recovered_1000237c(DAT_1000c018,1000);
    uVar6 = recovered_1000357c(0x610);
    uVar7 = (ulong)uVar6;
LAB_100034f8:
    recovered_100035d0(0x618,uVar7);
  }
  return false;
}

#undef DAT_1000c018

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000357c
 */

undefined4 recovered_1000357c(ulong param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;

  local_14 = 0;
  if (DAT_1000c020 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = recovered_10003150(DAT_1000c018,DAT_1000c020 + (param_1 & 0xffffffff),(long)&local_14);
    uVar1 = 0;
    if ((int)uVar2 != 0) {
      uVar1 = local_14;
    }
  }
  return uVar1;
}

#undef DAT_1000c018
#undef DAT_1000c020
#undef local_14

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef DAT_1000c1a8
#define DAT_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8534U)))
#undef DAT_1000c1f8
#define DAT_1000c1f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8584U)))
#undef DAT_1000c238
#define DAT_1000c238 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85c4U)))
#undef DAT_1000c288
#define DAT_1000c288 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8614U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035d0
 */

ulong recovered_100035d0(ulong param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;

  lVar1 = DAT_1000c020;
  if (DAT_1000c020 == 0) {
    return param_1;
  }
  puVar3 = &DAT_1000c1a8;
  if ((DAT_1000c1a8 != 0 && DAT_1000c1f8 == DAT_1000c020) ||
     (puVar3 = &DAT_1000c238, DAT_1000c238 != 0 && DAT_1000c288 == DAT_1000c020)) {
    puVar3[0x17] = 1;
  }
  uVar2 = lVar1 + (param_1 & 0xffffffff);
  if ((DAT_1000c018 != (int *)0x0) && (*DAT_1000c018 == 0x54584b57)) {
    if ((0xc3 < (uint)DAT_1000c018[2]) && (DAT_1000c018[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100031e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_1000c018[0x30])(uVar2,4);
      return uVar2;
    }
    if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)DAT_1000c018[2])) && (DAT_1000c018[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_1000c018[0x1b])(uVar2,4,param_2);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_1000c018
#undef DAT_1000c020
#undef DAT_1000c1a8
#undef DAT_1000c1f8
#undef DAT_1000c238
#undef DAT_1000c288

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef DAT_1000c1a8
#define DAT_1000c1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8534U)))
#undef DAT_1000c1f8
#define DAT_1000c1f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8584U)))
#undef DAT_1000c238
#define DAT_1000c238 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85c4U)))
#undef DAT_1000c288
#define DAT_1000c288 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8614U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003638
 */

undefined8 recovered_10003638(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;

  recovered_100035d0(0x614,0);
  recovered_100035d0(600,0);
  recovered_100035d0(0x254,0);
  recovered_100035d0(0x260,0x7f8fe);
  recovered_100035d0(0x264,0xffefe);
  recovered_100035d0(0x284,0x7f8fe);
  recovered_100035d0(0x288,0xffefe);
  recovered_100035d0(0x7c,0);
  recovered_100035d0(0x48,0x21);
  lVar2 = DAT_1000c020;
  if (DAT_1000c020 == 0) {
    return 0x278;
  }
  puVar4 = &DAT_1000c1a8;
  if ((DAT_1000c1a8 != 0 && DAT_1000c1f8 == DAT_1000c020) ||
     (puVar4 = &DAT_1000c238, DAT_1000c238 != 0 && DAT_1000c288 == DAT_1000c020)) {
    puVar4[0x17] = 1;
  }
  uVar1 = lVar2 + 0x278;
  if ((DAT_1000c018 != (int *)0x0) && (*DAT_1000c018 == 0x54584b57)) {
    if ((0xc3 < (uint)DAT_1000c018[2]) && (DAT_1000c018[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100031e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(ulong)(uint)DAT_1000c018[0x30])(uVar1,4);
      return uVar3;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)DAT_1000c018[2])) && (DAT_1000c018[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(ulong)(uint)DAT_1000c018[0x1b])(uVar1,4,0x502c16);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_1000c018
#undef DAT_1000c020
#undef DAT_1000c1a8
#undef DAT_1000c1f8
#undef DAT_1000c238
#undef DAT_1000c288

#undef DAT_1000c018
#define DAT_1000c018 (*(int * *)(((uintptr_t)pf_module_state + 0x83a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a0
 */

bool recovered_100036a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (0xc34 < (uint)(uVar2 >> 5)) {
      recovered_100035d0(0x604,2);
      recovered_1000237c(DAT_1000c018,1000);
      uVar1 = recovered_1000357c(0x610);
      recovered_100035d0(0x618,(ulong)uVar1);
      return false;
    }
    uVar1 = recovered_1000357c(0x610);
    if ((uVar1 & 0x342f) != 0) break;
    recovered_1000237c(DAT_1000c018,0x14);
    uVar2 = (ulong)((int)uVar2 + 0x14);
  }
  recovered_100035d0(0x618,(ulong)uVar1);
  return (uVar1 & 0x342e) == 0;
}

#undef DAT_1000c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000372c
 */

int recovered_1000372c(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1;
  if (param_2 == 1) {
    iVar1 = (int)(char)param_1;
  }
  iVar2 = (int)(short)param_1;
  if (param_2 != 2) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003748
 */

uint recovered_10003748(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x724);
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x730) == 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x728);
    uVar1 = *(uint *)(param_1 + 0x72c) - uVar2;
    if (uVar2 <= *(uint *)(param_1 + 0x72c)) {
      if (param_2 <= uVar1) {
        uVar1 = param_2;
      }
      uVar2 = uVar1 + uVar2;
    }
    return uVar2;
  }
  if (param_2 < uVar2) {
    return *(uint *)(param_1 + 0x6e4 + (ulong)param_2 * 4);
  }
  return *(uint *)(param_1 + 0x6e4 + (ulong)(uVar2 - 1) * 4);
}


#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef UNK_1000c004
#define UNK_1000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#undef uRam000000001000c004
#define uRam000000001000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#define local_34 (*(undefined1 *)(pf_stack_frame + 28))
#define local_33 (*(undefined1 *)(pf_stack_frame + 29))
#define local_32 (*(undefined1 *)(pf_stack_frame + 30))
#define local_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000379c
 */

bool recovered_1000379c(long param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;

  local_34 = (undefined1)param_3;
  local_33 = (undefined1)((uint)param_3 >> 8);
  local_32 = 0;
  bVar3 = false;
  if (param_1 != 0) {
    uVar1 = pf_read_daif();
    uVar2 = pf_read_daif();
    pf_write_daif(uVar2 | 0xc0);
    InstructionSynchronizationBarrier();
    local_31 = param_4;
    recovered_1000329c((int *)((uintptr_t)pf_module_state+0x8390U));
    DAT_1000c020 = param_1;
    bVar3 = recovered_100032c0();
    if (bVar3) {
      bVar3 = recovered_10003330(param_2,(long)&local_34,4,0);
      DAT_1000c020 = 0;
      uRam000000001000c004 = 0;
      pf_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
    else {
      DAT_1000c020 = 0;
      uRam000000001000c004 = 0;
      pf_write_daif(uVar1);
      InstructionSynchronizationBarrier();
    }
  }
  return bVar3;
}

#undef DAT_1000c020
#undef UNK_1000c004
#undef uRam000000001000c004
#undef local_34
#undef local_33
#undef local_32
#undef local_31

#undef DAT_1000c020
#define DAT_1000c020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83acU)))
#undef UNK_1000c004
#define UNK_1000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
#undef uRam000000001000c004
#define uRam000000001000c004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8390U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000382c
 */

bool recovered_1000382c(long param_1,int param_2,long param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;

  if (param_1 != 0) {
    uVar1 = pf_read_daif();
    uVar2 = pf_read_daif();
    pf_write_daif(uVar2 | 0xc0);
    InstructionSynchronizationBarrier();
    recovered_1000329c((int *)((uintptr_t)pf_module_state+0x8390U));
    DAT_1000c020 = param_1;
    bVar3 = recovered_100032c0();
    if (bVar3) {
      bVar3 = recovered_100033e0(param_2,param_3,param_4);
      pf_write_daif(uVar1);
      InstructionSynchronizationBarrier();
      uRam000000001000c004 = 0;
      DAT_1000c020 = 0;
      return bVar3;
    }
    DAT_1000c020 = 0;
    uRam000000001000c004 = 0;
    pf_write_daif(uVar1);
    InstructionSynchronizationBarrier();
  }
  return false;
}

#undef DAT_1000c020
#undef UNK_1000c004
#undef uRam000000001000c004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b0
 */

void recovered_100038b0(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100038dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_1000c00c
#define DAT_1000c00c (*(uint *)(((uintptr_t)pf_module_state + 0x8398U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint *)(((uintptr_t)pf_module_state + 0x839cU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e4
 */

undefined4 recovered_100038e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = (ulong)DAT_1000c00c;
  if (DAT_1000c00c == DAT_1000c010) {
    return 0;
  }
  DAT_1000c00c = DAT_1000c00c + 1 & 0xf;
  return *(undefined4 *)(&DAT_1000c0a8 + uVar1 * 4);
}

#undef DAT_1000c00c
#undef DAT_1000c010
#undef DAT_1000c0a8

#undef DAT_1000c00c
#define DAT_1000c00c (*(uint *)(((uintptr_t)pf_module_state + 0x8398U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint *)(((uintptr_t)pf_module_state + 0x839cU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000391c
 */

void recovered_1000391c(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = DAT_1000c010 + 1 & 0xf;
  if (uVar1 != DAT_1000c00c) {
    *(undefined4 *)(&DAT_1000c0a8 + (ulong)DAT_1000c010 * 4) = param_1;
    DAT_1000c010 = uVar1;
  }
  return;
}

#undef DAT_1000c00c
#undef DAT_1000c010
#undef DAT_1000c0a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003950
 */

undefined8 recovered_10003950(long param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if (((param_2 >> 0x1d == 0) && (param_5 != (uint *)0x0)) && (0xffffffdf < param_4 - 0x21)) {
    if (param_2 * 8 < param_3 || param_2 * 8 - param_3 < param_4) {
      uVar2 = 0;
    }
    else {
      uVar1 = 0;
      uVar3 = 0;
      for (; param_4 != 0; param_4 = param_4 - 1) {
        uVar1 = -(*(byte *)(param_1 + (ulong)(param_3 >> 3)) >> (ulong)(param_3 & 7) & 1) &
                1 << (ulong)(uVar3 & 0x1f) | uVar1;
        uVar3 = uVar3 + 1;
        param_3 = param_3 + 1;
      }
      *param_5 = uVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d8
 */

undefined8 recovered_100039d8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     (param_1[0xb] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10003a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
