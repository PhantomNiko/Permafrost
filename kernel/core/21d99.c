#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00042534
#define DAT_00042534 (*(uint8_t *)(0x42534U))
#undef DAT_00042733
#define DAT_00042733 (*(uint8_t *)(0x42733U))
#undef DAT_000475ed
#define DAT_000475ed (*(byte *)(0x475edU))
#undef DAT_00047e80
#define DAT_00047e80 (*(char *)(0x47e80U))
#undef DAT_00047e88
#define DAT_00047e88 (*(byte *)(0x47e88U))
#undef DAT_00047e89
#define DAT_00047e89 (*(uint8_t *)(0x47e89U))
#undef DAT_0004b490
#define DAT_0004b490 (*(uint32_t *)(0x4b490U))
#undef DAT_0004b494
#define DAT_0004b494 (*(uint *)(0x4b494U))
#undef DAT_0004b498
#define DAT_0004b498 (*(int *)(0x4b498U))
#undef DAT_0004b49c
#define DAT_0004b49c (*(char *)(0x4b49cU))
#undef DAT_0005c7ac
#define DAT_0005c7ac (*(uint *)(0x5c7acU))
#undef DAT_0005c7b0
#define DAT_0005c7b0 (*(uint *)(0x5c7b0U))
#undef DAT_0005c7b4
#define DAT_0005c7b4 (*(int *)(0x5c7b4U))
#undef DAT_0005c7b8
#define DAT_0005c7b8 (*(char *)(0x5c7b8U))
#undef DAT_0005c7bc
#define DAT_0005c7bc (*(byte *)(0x5c7bcU))
#undef DAT_0005c7bd
#define DAT_0005c7bd (*(uint8_t *)(0x5c7bdU))
#undef DAT_0005c7be
#define DAT_0005c7be (*(uint8_t *)(0x5c7beU))
#undef DAT_0005c7c0
#define DAT_0005c7c0 (*(uint8_t *)(0x5c7c0U))
#undef DAT_0005c8c0
#define DAT_0005c8c0 (*(uint16_t *)(0x5c8c0U))
#undef DAT_0005c8c2
#define DAT_0005c8c2 (*(uint8_t *)(0x5c8c2U))
#undef DAT_0007cfc0
#define DAT_0007cfc0 (*(uint8_t * *)(0x7cfc0U))
#undef DAT_0007cfc4
#define DAT_0007cfc4 (*(uint8_t * *)(0x7cfc4U))
#undef DAT_0007cfc8
#define DAT_0007cfc8 (*(int *)(0x7cfc8U))
#undef DAT_0007cfcc
#define DAT_0007cfcc (*(char *)(0x7cfccU))
#undef DAT_0007cfd0
#define DAT_0007cfd0 (*(uint8_t * *)(0x7cfd0U))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_24c (*(char (*)[544])(frame + 16))
#define local_2c (*(undefined * *)(frame + 560))
#define local_28 (*(uint *)(frame + 564))
#define local_24 (*(uint *)(frame + 568))
#define local_20 (*(uint *)(frame + 572))
#define local_1c (*(uint *)(frame + 576))
#define local_18 (*(undefined * *)(frame + 580))
#define local_14 (*(undefined * *)(frame + 584))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d99
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_21d99(void)

{
  unsigned char frame[636];

  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint extraout_EAX_01 = 0;
  uint columns;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  bool bVar11;

  uVar4 = DAT_0004b494;
  local_28 = _DAT_0000046c / 9;
  if (DAT_00047e80 == '\x01') {
    if ((DAT_00047e88 & 1) == 0) goto LAB_00022099;
    if ((DAT_0005c7b8 == '\x01') && (DAT_0004b49c == '\x01')) {
      iVar3 = (int)((ulonglong)DAT_0005c7b0 * (ulonglong)DAT_0005c7ac);
      lVar2 = (ulonglong)DAT_0005c7b0 * (ulonglong)DAT_0005c7ac + -0x40000000;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if (iVar3 != 0 && (iVar5 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar5 + 1U)) {
        recovered_20f42(DAT_0004b498,DAT_0005c7b4,iVar3 << 2);
      }
      puVar9 = &DAT_00042534;
      if (DAT_0007cfd0 != (undefined *)0x0) {
        puVar9 = DAT_0007cfd0;
      }
      recovered_219e1(local_24c,0x220,&DAT_00042733,puVar9,&DAT_00047e89);
      iVar3 = DAT_0004b494 - 0x18;
      if ((int)DAT_0004b494 < 0x19) {
        iVar3 = 0;
      }
      uVar4 = iVar3 - 4;
      if (iVar3 < 5) {
        uVar4 = 0;
      }
      iVar5 = 0x18;
      if ((int)(DAT_0004b494 - uVar4) < 0x18) {
        iVar5 = DAT_0004b494 - uVar4;
      }
      recovered_27e4c(&DAT_0004b490,0,uVar4,DAT_0004b490,iVar5,0,0,0);
      recovered_27dfd(8,iVar3,local_24c,DAT_0005c7bc,DAT_0005c7bd,DAT_0005c7be);
      if ((local_28 & 1) == 0) {
        iVar5 = recovered_20ff4((int)local_24c);
        recovered_27e4c(&DAT_0004b490,iVar5 * 8 + 8,iVar3 + 0xd,8,2,DAT_0005c7bc,DAT_0005c7bd,
                        DAT_0005c7be);
      }
      recovered_27efb(0);
      recovered_27f25();
      return extraout_EAX;
    }
  }
  else if ((DAT_00047e88 & 1) == 0) goto LAB_00022099;
  if ((DAT_0005c7b8 == '\x01') && (DAT_0004b49c == '\x01')) {
    uVar6 = DAT_0004b490 - 0x30;
    if (DAT_0004b490 < 0x31) {
      uVar6 = DAT_0004b490;
    }
    puVar9 = (undefined *)(DAT_0004b494 >> 4);
    columns = 1;
    if (7 < uVar6) {
      columns = uVar6 >> 3;
    }
    recovered_28d7f(columns);
    lVar2 = (ulonglong)DAT_0005c7b0 * (ulonglong)DAT_0005c7ac + -0x40000000;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar3 = (int)((ulonglong)DAT_0005c7b0 * (ulonglong)DAT_0005c7ac) << 2;
    if (iVar5 != -1 || iVar5 + 1U < (uint)((uint)lVar2 < 0xc0000001)) {
      iVar3 = 0;
    }
    recovered_20f42(DAT_0004b498,DAT_0005c7b4,iVar3);
    local_18 = DAT_0007cfc0 + -(int)puVar9;
    if (DAT_0007cfc0 < puVar9) {
      local_18 = (undefined *)0x0;
    }
    local_1c = 0;
    if (uVar4 < 0x10) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_1c = (int)puVar9 - (int)DAT_0007cfc0;
      if (puVar9 < DAT_0007cfc0) {
        local_1c = 0;
      }
      local_1c = local_1c >> 1;
      if (puVar9 <= DAT_0007cfc0) {
        local_1c = 0;
      }
    }
    puVar7 = DAT_0007cfc0 + -(int)local_18;
    if (DAT_0007cfc0 < local_18) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar9 <= puVar7) {
      puVar7 = puVar9;
    }
    puVar9 = &DAT_0005c7c0 + (int)local_18 * 0x104;
    iVar3 = local_1c << 4;
    local_14 = puVar7;
    while (bVar11 = puVar7 != (undefined *)0x0, puVar7 = puVar7 + -1, bVar11) {
      local_24 = (uint)*(ushort *)(puVar9 + 0x100);
      iVar5 = 0x18;
      if ((puVar9[0x102] == '\x01') && (iVar5 = (int)(DAT_0004b490 + local_24 * -8) / 2, iVar5 < 1))
      {
        iVar5 = 0;
      }
      local_20 = (uint)DAT_0005c7bc;
      local_2c = puVar9;
      recovered_280ea(iVar5,iVar3,(int)puVar9,local_24,DAT_0005c7bc,DAT_0005c7bd,DAT_0005c7be);
      puVar9 = puVar9 + 0x104;
      iVar3 = iVar3 + 0x10;
    }
    if ((((local_28 & 1) == 0) && (DAT_0007cfcc == '\x01')) &&
       (DAT_0007cfc4 < local_14 + (int)local_18 && local_18 <= DAT_0007cfc4)) {
      recovered_27e4c(&DAT_0004b490,DAT_0007cfc8 * 8 + 0x18,
                      (int)(DAT_0007cfc4 + (local_1c - (int)local_18)) * 0x10 | 0xd,8,2,DAT_0005c7bc
                      ,DAT_0005c7bd,DAT_0005c7be);
    }
    recovered_27efb(0);
    recovered_27f25();
    return extraout_EAX_01;
  }
LAB_00022099:
  recovered_28d7f(0x4c);
  local_24 = (uint)DAT_000475ed << 8;
  puVar10 = &DAT_000b8000;
  for (iVar3 = 0; iVar3 != 0x19; iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 != 0x50; iVar5 = iVar5 + 1) {
      *(ushort *)(puVar10 + iVar5 * 2) = (ushort)local_24 | 0x20;
    }
    puVar10 = puVar10 + 0xa0;
  }
  local_1c = 0x19 - (int)DAT_0007cfc0;
  if ((undefined *)0x19 < DAT_0007cfc0) {
    local_1c = 0;
  }
  local_1c = local_1c >> 1;
  local_14 = DAT_0007cfc0 + -0x19;
  if (DAT_0007cfc0 < (undefined *)0x19) {
    local_14 = (undefined *)0x0;
    puVar9 = DAT_0007cfc0;
  }
  else {
    local_1c = 0;
    puVar9 = (undefined *)0x19;
  }
  local_18 = DAT_0007cfc0 + -(int)local_14;
  if (DAT_0007cfc0 < local_14) {
    local_18 = (undefined *)0x0;
  }
  if ((undefined *)0x18 < local_18) {
    local_18 = (undefined *)0x19;
  }
  local_20 = local_1c * 0xa0 | 0xb8000;
  puVar9 = &DAT_0005c7c0 + (int)DAT_0007cfc0 * 0x104 + (int)puVar9 * -0x104;
  puVar7 = (undefined *)0x0;
  while (puVar8 = puVar7, puVar8 != local_18) {
    uVar1 = (&DAT_0005c8c0)[(int)(puVar8 + (int)local_14) * 0x82];
    if ((&DAT_0005c8c2)[(int)(puVar8 + (int)local_14) * 0x104] == '\0') {
      iVar3 = 2;
    }
    else {
      iVar3 = (0x4c - uVar1 >> 1) + 2;
      if (0x4b < uVar1) {
        iVar3 = 2;
      }
    }
    if (puVar8 + local_1c < (undefined *)0x19) {
      for (uVar4 = 0; (uVar4 < uVar1 && (iVar3 + uVar4 < 0x50)); uVar4 = uVar4 + 1) {
        *(ushort *)(local_20 + iVar3 * 2 + uVar4 * 2) =
             (ushort)(byte)puVar9[uVar4] | (ushort)local_24;
      }
    }
    local_20 = local_20 + 0xa0;
    puVar9 = puVar9 + 0x104;
    local_2c = puVar8;
    puVar7 = puVar8 + 1;
  }
  if ((((local_28 & 1) == 0) && (DAT_0007cfcc == '\x01')) &&
     (DAT_0007cfc4 < local_18 + (int)local_14 && local_14 <= DAT_0007cfc4)) {
    recovered_280b0((uint)(DAT_0007cfc4 + (local_1c - (int)local_14)),DAT_0007cfc8 + 2);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  recovered_27efb(iVar3);
  return extraout_EAX_00;
}
