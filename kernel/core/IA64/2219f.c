#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_0004619c
#define DAT_0004619c (*(uint8_t *)(0x4619cU))
#undef DAT_0004639b
#define DAT_0004639b (*(uint8_t *)(0x4639bU))
#undef DAT_0004c5fd
#define DAT_0004c5fd (*(byte *)(0x4c5fdU))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(char *)(0x4ce94U))
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(byte *)(0x4ce9cU))
#undef DAT_000502b0
#define DAT_000502b0 (*(uint8_t *)(0x502b0U))
#undef DAT_000504b0
#define DAT_000504b0 (*(uint32_t *)(0x504b0U))
#undef DAT_000504b4
#define DAT_000504b4 (*(uint *)(0x504b4U))
#undef DAT_000504b8
#define DAT_000504b8 (*(int *)(0x504b8U))
#undef DAT_000504bc
#define DAT_000504bc (*(char *)(0x504bcU))
#undef DAT_000617cc
#define DAT_000617cc (*(uint *)(0x617ccU))
#undef DAT_000617d0
#define DAT_000617d0 (*(uint *)(0x617d0U))
#undef DAT_000617d4
#define DAT_000617d4 (*(int *)(0x617d4U))
#undef DAT_000617d8
#define DAT_000617d8 (*(char *)(0x617d8U))
#undef DAT_000617dc
#define DAT_000617dc (*(byte *)(0x617dcU))
#undef DAT_000617dd
#define DAT_000617dd (*(uint8_t *)(0x617ddU))
#undef DAT_000617de
#define DAT_000617de (*(uint8_t *)(0x617deU))
#undef DAT_000617e0
#define DAT_000617e0 (*(uint8_t *)(0x617e0U))
#undef DAT_000618e0
#define DAT_000618e0 (*(uint16_t *)(0x618e0U))
#undef DAT_000618e2
#define DAT_000618e2 (*(uint8_t *)(0x618e2U))
#undef DAT_00081fe0
#define DAT_00081fe0 (*(uint8_t * *)(0x81fe0U))
#undef DAT_00081fe4
#define DAT_00081fe4 (*(uint8_t * *)(0x81fe4U))
#undef DAT_00081fe8
#define DAT_00081fe8 (*(int *)(0x81fe8U))
#undef DAT_00081fec
#define DAT_00081fec (*(char *)(0x81fecU))
#undef DAT_00081ff0
#define DAT_00081ff0 (*(uint8_t * *)(0x81ff0U))
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
 * Address: 0x2219f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_2219f(void)

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

  uVar4 = DAT_000504b4;
  local_28 = _DAT_0000046c / 9;
  if (DAT_0004ce94 == '\x01') {
    if ((DAT_0004ce9c & 1) == 0) goto LAB_0002249f;
    if ((DAT_000617d8 == '\x01') && (DAT_000504bc == '\x01')) {
      iVar3 = (int)((ulonglong)DAT_000617d0 * (ulonglong)DAT_000617cc);
      lVar2 = (ulonglong)DAT_000617d0 * (ulonglong)DAT_000617cc + -0x40000000;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if (iVar3 != 0 && (iVar5 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar5 + 1U)) {
        recovered_21348(DAT_000504b8,DAT_000617d4,iVar3 << 2);
      }
      puVar9 = &DAT_0004619c;
      if (DAT_00081ff0 != (undefined *)0x0) {
        puVar9 = DAT_00081ff0;
      }
      recovered_21de7(local_24c,0x220,&DAT_0004639b,puVar9,&DAT_000502b0);
      iVar3 = DAT_000504b4 - 0x18;
      if ((int)DAT_000504b4 < 0x19) {
        iVar3 = 0;
      }
      uVar4 = iVar3 - 4;
      if (iVar3 < 5) {
        uVar4 = 0;
      }
      iVar5 = 0x18;
      if ((int)(DAT_000504b4 - uVar4) < 0x18) {
        iVar5 = DAT_000504b4 - uVar4;
      }
      recovered_28d70(&DAT_000504b0,0,uVar4,DAT_000504b0,iVar5,0,0,0);
      recovered_28d21(8,iVar3,local_24c,DAT_000617dc,DAT_000617dd,DAT_000617de);
      if ((local_28 & 1) == 0) {
        iVar5 = recovered_213fa((int)local_24c);
        recovered_28d70(&DAT_000504b0,iVar5 * 8 + 8,iVar3 + 0xd,8,2,DAT_000617dc,DAT_000617dd,
                        DAT_000617de);
      }
      recovered_28e22(0);
      recovered_28e4c();
      return extraout_EAX;
    }
  }
  else if ((DAT_0004ce9c & 1) == 0) goto LAB_0002249f;
  if ((DAT_000617d8 == '\x01') && (DAT_000504bc == '\x01')) {
    uVar6 = DAT_000504b0 - 0x30;
    if (DAT_000504b0 < 0x31) {
      uVar6 = DAT_000504b0;
    }
    puVar9 = (undefined *)(DAT_000504b4 >> 4);
    columns = 1;
    if (7 < uVar6) {
      columns = uVar6 >> 3;
    }
    recovered_29dfc(columns);
    lVar2 = (ulonglong)DAT_000617d0 * (ulonglong)DAT_000617cc + -0x40000000;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar3 = (int)((ulonglong)DAT_000617d0 * (ulonglong)DAT_000617cc) << 2;
    if (iVar5 != -1 || iVar5 + 1U < (uint)((uint)lVar2 < 0xc0000001)) {
      iVar3 = 0;
    }
    recovered_21348(DAT_000504b8,DAT_000617d4,iVar3);
    local_18 = DAT_00081fe0 + -(int)puVar9;
    if (DAT_00081fe0 < puVar9) {
      local_18 = (undefined *)0x0;
    }
    local_1c = 0;
    if (uVar4 < 0x10) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_1c = (int)puVar9 - (int)DAT_00081fe0;
      if (puVar9 < DAT_00081fe0) {
        local_1c = 0;
      }
      local_1c = local_1c >> 1;
      if (puVar9 <= DAT_00081fe0) {
        local_1c = 0;
      }
    }
    puVar7 = DAT_00081fe0 + -(int)local_18;
    if (DAT_00081fe0 < local_18) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar9 <= puVar7) {
      puVar7 = puVar9;
    }
    puVar9 = &DAT_000617e0 + (int)local_18 * 0x104;
    iVar3 = local_1c << 4;
    local_14 = puVar7;
    while (bVar11 = puVar7 != (undefined *)0x0, puVar7 = puVar7 + -1, bVar11) {
      local_24 = (uint)*(ushort *)(puVar9 + 0x100);
      iVar5 = 0x18;
      if ((puVar9[0x102] == '\x01') && (iVar5 = (int)(DAT_000504b0 + local_24 * -8) / 2, iVar5 < 1))
      {
        iVar5 = 0;
      }
      local_20 = (uint)DAT_000617dc;
      local_2c = puVar9;
      recovered_29010(iVar5,iVar3,(int)puVar9,local_24,DAT_000617dc,DAT_000617dd,DAT_000617de);
      puVar9 = puVar9 + 0x104;
      iVar3 = iVar3 + 0x10;
    }
    if ((((local_28 & 1) == 0) && (DAT_00081fec == '\x01')) &&
       (DAT_00081fe4 < local_14 + (int)local_18 && local_18 <= DAT_00081fe4)) {
      recovered_28d70(&DAT_000504b0,DAT_00081fe8 * 8 + 0x18,
                      (int)(DAT_00081fe4 + (local_1c - (int)local_18)) * 0x10 | 0xd,8,2,DAT_000617dc
                      ,DAT_000617dd,DAT_000617de);
    }
    recovered_28e22(0);
    recovered_28e4c();
    return extraout_EAX_01;
  }
LAB_0002249f:
  recovered_29dfc(0x4c);
  local_24 = (uint)DAT_0004c5fd << 8;
  puVar10 = &DAT_000b8000;
  for (iVar3 = 0; iVar3 != 0x19; iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 != 0x50; iVar5 = iVar5 + 1) {
      *(ushort *)(puVar10 + iVar5 * 2) = (ushort)local_24 | 0x20;
    }
    puVar10 = puVar10 + 0xa0;
  }
  local_1c = 0x19 - (int)DAT_00081fe0;
  if ((undefined *)0x19 < DAT_00081fe0) {
    local_1c = 0;
  }
  local_1c = local_1c >> 1;
  local_14 = DAT_00081fe0 + -0x19;
  if (DAT_00081fe0 < (undefined *)0x19) {
    local_14 = (undefined *)0x0;
    puVar9 = DAT_00081fe0;
  }
  else {
    local_1c = 0;
    puVar9 = (undefined *)0x19;
  }
  local_18 = DAT_00081fe0 + -(int)local_14;
  if (DAT_00081fe0 < local_14) {
    local_18 = (undefined *)0x0;
  }
  if ((undefined *)0x18 < local_18) {
    local_18 = (undefined *)0x19;
  }
  local_20 = local_1c * 0xa0 | 0xb8000;
  puVar9 = &DAT_000617e0 + (int)DAT_00081fe0 * 0x104 + (int)puVar9 * -0x104;
  puVar7 = (undefined *)0x0;
  while (puVar8 = puVar7, puVar8 != local_18) {
    uVar1 = (&DAT_000618e0)[(int)(puVar8 + (int)local_14) * 0x82];
    if ((&DAT_000618e2)[(int)(puVar8 + (int)local_14) * 0x104] == '\0') {
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
  if ((((local_28 & 1) == 0) && (DAT_00081fec == '\x01')) &&
     (DAT_00081fe4 < local_18 + (int)local_14 && local_14 <= DAT_00081fe4)) {
    recovered_28fd6((uint)(DAT_00081fe4 + (local_1c - (int)local_14)),DAT_00081fe8 + 2);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  recovered_28e22(iVar3);
  return extraout_EAX_00;
}
