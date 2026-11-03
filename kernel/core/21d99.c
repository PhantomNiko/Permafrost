#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_0003f184
#define DAT_0003f184 (*(uint8_t *)(0x3f184U))
#undef DAT_0003f339
#define DAT_0003f339 (*(uint8_t *)(0x3f339U))
#undef DAT_000445dc
#define DAT_000445dc (*(byte *)(0x445dcU))
#undef DAT_00054e2c
#define DAT_00054e2c (*(byte *)(0x54e2cU))
#undef DAT_00054e2d
#define DAT_00054e2d (*(char *)(0x54e2dU))
#undef DAT_00054e2e
#define DAT_00054e2e (*(uint8_t *)(0x54e2eU))
#undef DAT_00057324
#define DAT_00057324 (*(uint32_t *)(0x57324U))
#undef DAT_00057328
#define DAT_00057328 (*(uint *)(0x57328U))
#undef DAT_0005732c
#define DAT_0005732c (*(int *)(0x5732cU))
#undef DAT_00057330
#define DAT_00057330 (*(char *)(0x57330U))
#undef DAT_00058434
#define DAT_00058434 (*(uint *)(0x58434U))
#undef DAT_00058438
#define DAT_00058438 (*(uint *)(0x58438U))
#undef DAT_0005843c
#define DAT_0005843c (*(int *)(0x5843cU))
#undef DAT_00058440
#define DAT_00058440 (*(char *)(0x58440U))
#undef DAT_00058444
#define DAT_00058444 (*(byte *)(0x58444U))
#undef DAT_00058445
#define DAT_00058445 (*(uint8_t *)(0x58445U))
#undef DAT_00058446
#define DAT_00058446 (*(uint8_t *)(0x58446U))
#undef DAT_00058448
#define DAT_00058448 (*(uint8_t *)(0x58448U))
#undef DAT_00058548
#define DAT_00058548 (*(uint16_t *)(0x58548U))
#undef DAT_0005854a
#define DAT_0005854a (*(uint8_t *)(0x5854aU))
#undef DAT_00078c48
#define DAT_00078c48 (*(uint8_t * *)(0x78c48U))
#undef DAT_00078c4c
#define DAT_00078c4c (*(uint8_t * *)(0x78c4cU))
#undef DAT_00078c50
#define DAT_00078c50 (*(int *)(0x78c50U))
#undef DAT_00078c54
#define DAT_00078c54 (*(char *)(0x78c54U))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_12c (*(char (*)[256])(frame + 16))
#define local_2c (*(undefined * *)(frame + 272))
#define local_28 (*(uint *)(frame + 276))
#define local_24 (*(uint *)(frame + 280))
#define local_20 (*(uint *)(frame + 284))
#define local_1c (*(uint *)(frame + 288))
#define local_18 (*(undefined * *)(frame + 292))
#define local_14 (*(undefined * *)(frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d99
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_21d99(void)

{
  unsigned char frame[348];

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
  
  uVar4 = DAT_00057328;
  local_28 = _DAT_0000046c / 9;
  if (DAT_00054e2d == '\x01') {
    if ((DAT_00054e2c & 1) == 0) goto LAB_0002208e;
    if ((DAT_00058440 == '\x01') && (DAT_00057330 == '\x01')) {
      iVar3 = (int)((ulonglong)DAT_00058438 * (ulonglong)DAT_00058434);
      lVar2 = (ulonglong)DAT_00058438 * (ulonglong)DAT_00058434 + -0x40000000;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if (iVar3 != 0 && (iVar5 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar5 + 1U)) {
        recovered_20f42(DAT_0005732c,DAT_0005843c,iVar3 << 2);
      }
      recovered_219e1(local_12c,0x100,&DAT_0003f339,&DAT_0003f184,&DAT_00054e2e);
      iVar3 = DAT_00057328 - 0x18;
      if ((int)DAT_00057328 < 0x19) {
        iVar3 = 0;
      }
      uVar4 = iVar3 - 4;
      if (iVar3 < 5) {
        uVar4 = 0;
      }
      iVar5 = 0x18;
      if ((int)(DAT_00057328 - uVar4) < 0x18) {
        iVar5 = DAT_00057328 - uVar4;
      }
      recovered_26695(&DAT_00057324,0,uVar4,DAT_00057324,iVar5,0,0,0);
      recovered_26646(8,iVar3,local_12c,DAT_00058444,DAT_00058445,DAT_00058446);
      if ((local_28 & 1) == 0) {
        iVar5 = recovered_20ff4((int)local_12c);
        recovered_26695(&DAT_00057324,iVar5 * 8 + 8,iVar3 + 0xd,8,2,DAT_00058444,DAT_00058445,
                        DAT_00058446);
      }
      recovered_26744(0);
      recovered_2676e();
      return extraout_EAX;
    }
  }
  else if ((DAT_00054e2c & 1) == 0) goto LAB_0002208e;
  if ((DAT_00058440 == '\x01') && (DAT_00057330 == '\x01')) {
    uVar6 = DAT_00057324 - 0x30;
    if (DAT_00057324 < 0x31) {
      uVar6 = DAT_00057324;
    }
    puVar9 = (undefined *)(DAT_00057328 >> 4);
    columns = 1;
    if (7 < uVar6) {
      columns = uVar6 >> 3;
    }
    recovered_27297(columns);
    lVar2 = (ulonglong)DAT_00058438 * (ulonglong)DAT_00058434 + -0x40000000;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar3 = (int)((ulonglong)DAT_00058438 * (ulonglong)DAT_00058434) << 2;
    if (iVar5 != -1 || iVar5 + 1U < (uint)((uint)lVar2 < 0xc0000001)) {
      iVar3 = 0;
    }
    recovered_20f42(DAT_0005732c,DAT_0005843c,iVar3);
    local_18 = DAT_00078c48 + -(int)puVar9;
    if (DAT_00078c48 < puVar9) {
      local_18 = (undefined *)0x0;
    }
    local_1c = 0;
    if (uVar4 < 0x10) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_1c = (int)puVar9 - (int)DAT_00078c48;
      if (puVar9 < DAT_00078c48) {
        local_1c = 0;
      }
      local_1c = local_1c >> 1;
      if (puVar9 <= DAT_00078c48) {
        local_1c = 0;
      }
    }
    puVar7 = DAT_00078c48 + -(int)local_18;
    if (DAT_00078c48 < local_18) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar9 <= puVar7) {
      puVar7 = puVar9;
    }
    puVar9 = &DAT_00058448 + (int)local_18 * 0x104;
    iVar3 = local_1c << 4;
    local_14 = puVar7;
    while (bVar11 = puVar7 != (undefined *)0x0, puVar7 = puVar7 + -1, bVar11) {
      local_24 = (uint)*(ushort *)(puVar9 + 0x100);
      iVar5 = 0x18;
      if ((puVar9[0x102] == '\x01') && (iVar5 = (int)(DAT_00057324 + local_24 * -8) / 2, iVar5 < 1))
      {
        iVar5 = 0;
      }
      local_20 = (uint)DAT_00058444;
      local_2c = puVar9;
      recovered_26933(iVar5,iVar3,(int)puVar9,local_24,DAT_00058444,DAT_00058445,DAT_00058446);
      puVar9 = puVar9 + 0x104;
      iVar3 = iVar3 + 0x10;
    }
    if ((((local_28 & 1) == 0) && (DAT_00078c54 == '\x01')) &&
       (DAT_00078c4c < local_14 + (int)local_18 && local_18 <= DAT_00078c4c)) {
      recovered_26695(&DAT_00057324,DAT_00078c50 * 8 + 0x18,
                      (int)(DAT_00078c4c + (local_1c - (int)local_18)) * 0x10 | 0xd,8,2,DAT_00058444
                      ,DAT_00058445,DAT_00058446);
    }
    recovered_26744(0);
    recovered_2676e();
    return extraout_EAX_01;
  }
LAB_0002208e:
  recovered_27297(0x4c);
  local_24 = (uint)DAT_000445dc << 8;
  puVar10 = &DAT_000b8000;
  for (iVar3 = 0; iVar3 != 0x19; iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 != 0x50; iVar5 = iVar5 + 1) {
      *(ushort *)(puVar10 + iVar5 * 2) = (ushort)local_24 | 0x20;
    }
    puVar10 = puVar10 + 0xa0;
  }
  local_1c = 0x19 - (int)DAT_00078c48;
  if ((undefined *)0x19 < DAT_00078c48) {
    local_1c = 0;
  }
  local_1c = local_1c >> 1;
  local_14 = DAT_00078c48 + -0x19;
  if (DAT_00078c48 < (undefined *)0x19) {
    local_14 = (undefined *)0x0;
    puVar9 = DAT_00078c48;
  }
  else {
    local_1c = 0;
    puVar9 = (undefined *)0x19;
  }
  local_18 = DAT_00078c48 + -(int)local_14;
  if (DAT_00078c48 < local_14) {
    local_18 = (undefined *)0x0;
  }
  if ((undefined *)0x18 < local_18) {
    local_18 = (undefined *)0x19;
  }
  local_20 = local_1c * 0xa0 | 0xb8000;
  puVar9 = &DAT_00058448 + (int)DAT_00078c48 * 0x104 + (int)puVar9 * -0x104;
  puVar7 = (undefined *)0x0;
  while (puVar8 = puVar7, puVar8 != local_18) {
    uVar1 = (&DAT_00058548)[(int)(puVar8 + (int)local_14) * 0x82];
    if ((&DAT_0005854a)[(int)(puVar8 + (int)local_14) * 0x104] == '\0') {
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
  if ((((local_28 & 1) == 0) && (DAT_00078c54 == '\x01')) &&
     (DAT_00078c4c < local_18 + (int)local_14 && local_14 <= DAT_00078c4c)) {
    recovered_268f9((uint)(DAT_00078c4c + (local_1c - (int)local_14)),DAT_00078c50 + 2);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  recovered_26744(iVar3);
  return extraout_EAX_00;
}

