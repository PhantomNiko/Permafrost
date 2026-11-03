#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00048438
#define DAT_00048438 (*(uint8_t *)(0x48438U))
#undef DAT_0004863b
#define DAT_0004863b (*(uint8_t *)(0x4863bU))
#undef DAT_0004e5fd
#define DAT_0004e5fd (*(byte *)(0x4e5fdU))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(char *)(0x4ee94U))
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(byte *)(0x4ee9cU))
#undef DAT_000522b0
#define DAT_000522b0 (*(uint8_t *)(0x522b0U))
#undef DAT_000524b0
#define DAT_000524b0 (*(uint32_t *)(0x524b0U))
#undef DAT_000524b4
#define DAT_000524b4 (*(uint *)(0x524b4U))
#undef DAT_000524b8
#define DAT_000524b8 (*(int *)(0x524b8U))
#undef DAT_000524bc
#define DAT_000524bc (*(char *)(0x524bcU))
#undef DAT_000637cc
#define DAT_000637cc (*(uint *)(0x637ccU))
#undef DAT_000637d0
#define DAT_000637d0 (*(uint *)(0x637d0U))
#undef DAT_000637d4
#define DAT_000637d4 (*(int *)(0x637d4U))
#undef DAT_000637d8
#define DAT_000637d8 (*(char *)(0x637d8U))
#undef DAT_000637dc
#define DAT_000637dc (*(byte *)(0x637dcU))
#undef DAT_000637dd
#define DAT_000637dd (*(uint8_t *)(0x637ddU))
#undef DAT_000637de
#define DAT_000637de (*(uint8_t *)(0x637deU))
#undef DAT_000637e0
#define DAT_000637e0 (*(uint8_t *)(0x637e0U))
#undef DAT_000638e0
#define DAT_000638e0 (*(uint16_t *)(0x638e0U))
#undef DAT_000638e2
#define DAT_000638e2 (*(uint8_t *)(0x638e2U))
#undef DAT_00083fe0
#define DAT_00083fe0 (*(uint8_t * *)(0x83fe0U))
#undef DAT_00083fe4
#define DAT_00083fe4 (*(uint8_t * *)(0x83fe4U))
#undef DAT_00083fe8
#define DAT_00083fe8 (*(int *)(0x83fe8U))
#undef DAT_00083fec
#define DAT_00083fec (*(char *)(0x83fecU))
#undef DAT_00083ff0
#define DAT_00083ff0 (*(uint8_t * *)(0x83ff0U))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_2c (*(undefined * *)(frame + 560))
#define local_28 (*(uint *)(frame + 564))
#define local_24 (*(uint *)(frame + 568))
#define local_20 (*(uint *)(frame + 572))
#define local_1c (*(uint *)(frame + 576))
#define local_18 (*(undefined * *)(frame + 580))
#define local_14 (*(undefined * *)(frame + 584))
#define local_24c (*(char (*)[544])(frame + 16))
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

  uVar4 = DAT_000524b4;
  local_28 = _DAT_0000046c / 9;
  if (DAT_0004ee94 == '\x01') {
    if ((DAT_0004ee9c & 1) == 0) goto LAB_0002249f;
    if ((DAT_000637d8 == '\x01') && (DAT_000524bc == '\x01')) {
      iVar3 = (int)((ulonglong)DAT_000637d0 * (ulonglong)DAT_000637cc);
      lVar2 = (ulonglong)DAT_000637d0 * (ulonglong)DAT_000637cc + -0x40000000;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if (iVar3 != 0 && (iVar5 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar5 + 1U)) {
        recovered_21348(DAT_000524b8,DAT_000637d4,iVar3 << 2);
      }
      puVar9 = &DAT_00048438;
      if (DAT_00083ff0 != (undefined *)0x0) {
        puVar9 = DAT_00083ff0;
      }
      recovered_21de7(local_24c,0x220,&DAT_0004863b,puVar9,&DAT_000522b0);
      iVar3 = DAT_000524b4 - 0x18;
      if ((int)DAT_000524b4 < 0x19) {
        iVar3 = 0;
      }
      uVar4 = iVar3 - 4;
      if (iVar3 < 5) {
        uVar4 = 0;
      }
      iVar5 = 0x18;
      if ((int)(DAT_000524b4 - uVar4) < 0x18) {
        iVar5 = DAT_000524b4 - uVar4;
      }
      recovered_28d56(&DAT_000524b0,0,uVar4,DAT_000524b0,iVar5,0,0,0);
      recovered_28d07(8,iVar3,local_24c,DAT_000637dc,DAT_000637dd,DAT_000637de);
      if ((local_28 & 1) == 0) {
        iVar5 = recovered_213fa((int)local_24c);
        recovered_28d56(&DAT_000524b0,iVar5 * 8 + 8,iVar3 + 0xd,8,2,DAT_000637dc,DAT_000637dd,
                        DAT_000637de);
      }
      recovered_28e08(0);
      recovered_28e32();
      return extraout_EAX;
    }
  }
  else if ((DAT_0004ee9c & 1) == 0) goto LAB_0002249f;
  if ((DAT_000637d8 == '\x01') && (DAT_000524bc == '\x01')) {
    uVar6 = DAT_000524b0 - 0x30;
    if (DAT_000524b0 < 0x31) {
      uVar6 = DAT_000524b0;
    }
    puVar9 = (undefined *)(DAT_000524b4 >> 4);
    columns = 1;
    if (7 < uVar6) {
      columns = uVar6 >> 3;
    }
    recovered_29de2(columns);
    lVar2 = (ulonglong)DAT_000637d0 * (ulonglong)DAT_000637cc + -0x40000000;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar3 = (int)((ulonglong)DAT_000637d0 * (ulonglong)DAT_000637cc) << 2;
    if (iVar5 != -1 || iVar5 + 1U < (uint)((uint)lVar2 < 0xc0000001)) {
      iVar3 = 0;
    }
    recovered_21348(DAT_000524b8,DAT_000637d4,iVar3);
    local_18 = DAT_00083fe0 + -(int)puVar9;
    if (DAT_00083fe0 < puVar9) {
      local_18 = (undefined *)0x0;
    }
    local_1c = 0;
    if (uVar4 < 0x10) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_1c = (int)puVar9 - (int)DAT_00083fe0;
      if (puVar9 < DAT_00083fe0) {
        local_1c = 0;
      }
      local_1c = local_1c >> 1;
      if (puVar9 <= DAT_00083fe0) {
        local_1c = 0;
      }
    }
    puVar7 = DAT_00083fe0 + -(int)local_18;
    if (DAT_00083fe0 < local_18) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar9 <= puVar7) {
      puVar7 = puVar9;
    }
    puVar9 = &DAT_000637e0 + (int)local_18 * 0x104;
    iVar3 = local_1c << 4;
    local_14 = puVar7;
    while (bVar11 = puVar7 != (undefined *)0x0, puVar7 = puVar7 + -1, bVar11) {
      local_24 = (uint)*(ushort *)(puVar9 + 0x100);
      iVar5 = 0x18;
      if ((puVar9[0x102] == '\x01') && (iVar5 = (int)(DAT_000524b0 + local_24 * -8) / 2, iVar5 < 1))
      {
        iVar5 = 0;
      }
      local_20 = (uint)DAT_000637dc;
      local_2c = puVar9;
      recovered_28ff6(iVar5,iVar3,(int)puVar9,local_24,DAT_000637dc,DAT_000637dd,DAT_000637de);
      puVar9 = puVar9 + 0x104;
      iVar3 = iVar3 + 0x10;
    }
    if ((((local_28 & 1) == 0) && (DAT_00083fec == '\x01')) &&
       (DAT_00083fe4 < local_14 + (int)local_18 && local_18 <= DAT_00083fe4)) {
      recovered_28d56(&DAT_000524b0,DAT_00083fe8 * 8 + 0x18,
                      (int)(DAT_00083fe4 + (local_1c - (int)local_18)) * 0x10 | 0xd,8,2,DAT_000637dc
                      ,DAT_000637dd,DAT_000637de);
    }
    recovered_28e08(0);
    recovered_28e32();
    return extraout_EAX_01;
  }
LAB_0002249f:
  recovered_29de2(0x4c);
  local_24 = (uint)DAT_0004e5fd << 8;
  puVar10 = &DAT_000b8000;
  for (iVar3 = 0; iVar3 != 0x19; iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 != 0x50; iVar5 = iVar5 + 1) {
      *(ushort *)(puVar10 + iVar5 * 2) = (ushort)local_24 | 0x20;
    }
    puVar10 = puVar10 + 0xa0;
  }
  local_1c = 0x19 - (int)DAT_00083fe0;
  if ((undefined *)0x19 < DAT_00083fe0) {
    local_1c = 0;
  }
  local_1c = local_1c >> 1;
  local_14 = DAT_00083fe0 + -0x19;
  if (DAT_00083fe0 < (undefined *)0x19) {
    local_14 = (undefined *)0x0;
    puVar9 = DAT_00083fe0;
  }
  else {
    local_1c = 0;
    puVar9 = (undefined *)0x19;
  }
  local_18 = DAT_00083fe0 + -(int)local_14;
  if (DAT_00083fe0 < local_14) {
    local_18 = (undefined *)0x0;
  }
  if ((undefined *)0x18 < local_18) {
    local_18 = (undefined *)0x19;
  }
  local_20 = local_1c * 0xa0 | 0xb8000;
  puVar9 = &DAT_000637e0 + (int)DAT_00083fe0 * 0x104 + (int)puVar9 * -0x104;
  puVar7 = (undefined *)0x0;
  while (puVar8 = puVar7, puVar8 != local_18) {
    uVar1 = (&DAT_000638e0)[(int)(puVar8 + (int)local_14) * 0x82];
    if ((&DAT_000638e2)[(int)(puVar8 + (int)local_14) * 0x104] == '\0') {
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
  if ((((local_28 & 1) == 0) && (DAT_00083fec == '\x01')) &&
     (DAT_00083fe4 < local_18 + (int)local_14 && local_14 <= DAT_00083fe4)) {
    recovered_28fbc((uint)(DAT_00083fe4 + (local_1c - (int)local_14)),DAT_00083fe8 + 2);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  recovered_28e08(iVar3);
  return extraout_EAX_00;
}
