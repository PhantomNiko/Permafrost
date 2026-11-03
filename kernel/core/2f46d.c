#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00057288
#define DAT_00057288 (*(uint8_t *)(0x57288U))
#undef DAT_000576ac
#define DAT_000576ac (*(uint8_t *)(0x576acU))
#undef DAT_0005d769
#define DAT_0005d769 (*(byte *)(0x5d769U))
#undef DAT_0005e720
#define DAT_0005e720 (*(char *)(0x5e720U))
#undef DAT_0005e721
#define DAT_0005e721 (*(uint8_t *)(0x5e721U))
#undef DAT_0005e928
#define DAT_0005e928 (*(byte *)(0x5e928U))
#undef DAT_00061d3c
#define DAT_00061d3c (*(uint32_t *)(0x61d3cU))
#undef DAT_00061d40
#define DAT_00061d40 (*(uint *)(0x61d40U))
#undef DAT_00061d44
#define DAT_00061d44 (*(int *)(0x61d44U))
#undef DAT_00061d48
#define DAT_00061d48 (*(char *)(0x61d48U))
#undef DAT_00073058
#define DAT_00073058 (*(uint *)(0x73058U))
#undef DAT_0007305c
#define DAT_0007305c (*(uint *)(0x7305cU))
#undef DAT_00073060
#define DAT_00073060 (*(int *)(0x73060U))
#undef DAT_00073064
#define DAT_00073064 (*(char *)(0x73064U))
#undef DAT_00073068
#define DAT_00073068 (*(byte *)(0x73068U))
#undef DAT_00073069
#define DAT_00073069 (*(byte *)(0x73069U))
#undef DAT_0007306a
#define DAT_0007306a (*(uint8_t *)(0x7306aU))
#undef DAT_0007306c
#define DAT_0007306c (*(uint8_t *)(0x7306cU))
#undef DAT_0007316c
#define DAT_0007316c (*(uint16_t *)(0x7316cU))
#undef DAT_0007316e
#define DAT_0007316e (*(uint8_t *)(0x7316eU))
#undef DAT_0009386c
#define DAT_0009386c (*(uint8_t * *)(0x9386cU))
#undef DAT_00093870
#define DAT_00093870 (*(uint8_t * *)(0x93870U))
#undef DAT_00093874
#define DAT_00093874 (*(int *)(0x93874U))
#undef DAT_00093878
#define DAT_00093878 (*(char *)(0x93878U))
#undef DAT_0009387c
#define DAT_0009387c (*(uint8_t * *)(0x9387cU))
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
 * Address: 0x2f46d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_2f46d(void)

{
  unsigned char frame[636] = {0};

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

  uVar4 = DAT_00061d40;
  local_28 = _DAT_0000046c / 9;
  if (DAT_0005e720 == '\x01') {
    if ((DAT_0005e928 & 1) == 0) goto LAB_0002f76d;
    if ((DAT_00073064 == '\x01') && (DAT_00061d48 == '\x01')) {
      iVar3 = (int)((ulonglong)DAT_0007305c * (ulonglong)DAT_00073058);
      lVar2 = (ulonglong)DAT_0007305c * (ulonglong)DAT_00073058 + -0x40000000;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if (iVar3 != 0 && (iVar5 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar5 + 1U)) {
        recovered_21348(DAT_00061d44,DAT_00073060,iVar3 << 2);
      }
      puVar9 = &DAT_00057288;
      if (DAT_0009387c != (undefined *)0x0) {
        puVar9 = DAT_0009387c;
      }
      recovered_22362(local_24c,0x220,&DAT_000576ac,puVar9,&DAT_0005e721);
      iVar3 = DAT_00061d40 - 0x18;
      if ((int)DAT_00061d40 < 0x19) {
        iVar3 = 0;
      }
      uVar4 = iVar3 - 4;
      if (iVar3 < 5) {
        uVar4 = 0;
      }
      iVar5 = 0x18;
      if ((int)(DAT_00061d40 - uVar4) < 0x18) {
        iVar5 = DAT_00061d40 - uVar4;
      }
      recovered_36877(&DAT_00061d3c,0,uVar4,DAT_00061d3c,iVar5,0,0,0);
      recovered_36828(8,iVar3,local_24c,DAT_00073068,DAT_00073069,DAT_0007306a);
      if ((local_28 & 1) == 0) {
        iVar5 = recovered_214de((int)local_24c);
        recovered_36877(&DAT_00061d3c,iVar5 * 8 + 8,iVar3 + 0xd,8,2,DAT_00073068,DAT_00073069,
                        DAT_0007306a);
      }
      recovered_36929(0);
      recovered_36953();
      return extraout_EAX;
    }
  }
  else if ((DAT_0005e928 & 1) == 0) goto LAB_0002f76d;
  if ((DAT_00073064 == '\x01') && (DAT_00061d48 == '\x01')) {
    uVar6 = DAT_00061d3c - 0x30;
    if (DAT_00061d3c < 0x31) {
      uVar6 = DAT_00061d3c;
    }
    puVar9 = (undefined *)(DAT_00061d40 >> 4);
    columns = 1;
    if (7 < uVar6) {
      columns = uVar6 >> 3;
    }
    recovered_378fb(columns);
    lVar2 = (ulonglong)DAT_0007305c * (ulonglong)DAT_00073058 + -0x40000000;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar3 = (int)((ulonglong)DAT_0007305c * (ulonglong)DAT_00073058) << 2;
    if (iVar5 != -1 || iVar5 + 1U < (uint)((uint)lVar2 < 0xc0000001)) {
      iVar3 = 0;
    }
    recovered_21348(DAT_00061d44,DAT_00073060,iVar3);
    local_18 = DAT_0009386c + -(int)puVar9;
    if (DAT_0009386c < puVar9) {
      local_18 = (undefined *)0x0;
    }
    local_1c = 0;
    if (uVar4 < 0x10) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_1c = (int)puVar9 - (int)DAT_0009386c;
      if (puVar9 < DAT_0009386c) {
        local_1c = 0;
      }
      local_1c = local_1c >> 1;
      if (puVar9 <= DAT_0009386c) {
        local_1c = 0;
      }
    }
    puVar7 = DAT_0009386c + -(int)local_18;
    if (DAT_0009386c < local_18) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar9 <= puVar7) {
      puVar7 = puVar9;
    }
    puVar9 = &DAT_0007306c + (int)local_18 * 0x104;
    iVar3 = local_1c << 4;
    local_14 = puVar7;
    while (bVar11 = puVar7 != (undefined *)0x0, puVar7 = puVar7 + -1, bVar11) {
      local_24 = (uint)*(ushort *)(puVar9 + 0x100);
      iVar5 = 0x18;
      if ((puVar9[0x102] == '\x01') && (iVar5 = (int)(DAT_00061d3c + local_24 * -8) / 2, iVar5 < 1))
      {
        iVar5 = 0;
      }
      local_20 = (uint)DAT_00073068;
      local_2c = puVar9;
      recovered_36b17(iVar5,iVar3,(int)puVar9,local_24,DAT_00073068,DAT_00073069,DAT_0007306a);
      puVar9 = puVar9 + 0x104;
      iVar3 = iVar3 + 0x10;
    }
    if ((((local_28 & 1) == 0) && (DAT_00093878 == '\x01')) &&
       (DAT_00093870 < local_14 + (int)local_18 && local_18 <= DAT_00093870)) {
      recovered_36877(&DAT_00061d3c,DAT_00093874 * 8 + 0x18,
                      (int)(DAT_00093870 + (local_1c - (int)local_18)) * 0x10 | 0xd,8,2,DAT_00073068
                      ,DAT_00073069,DAT_0007306a);
    }
    recovered_36929(0);
    recovered_36953();
    return extraout_EAX_01;
  }
LAB_0002f76d:
  recovered_378fb(0x4c);
  local_24 = (uint)DAT_0005d769 << 8;
  puVar10 = &DAT_000b8000;
  for (iVar3 = 0; iVar3 != 0x19; iVar3 = iVar3 + 1) {
    for (iVar5 = 0; iVar5 != 0x50; iVar5 = iVar5 + 1) {
      *(ushort *)(puVar10 + iVar5 * 2) = (ushort)local_24 | 0x20;
    }
    puVar10 = puVar10 + 0xa0;
  }
  local_1c = 0x19 - (int)DAT_0009386c;
  if ((undefined *)0x19 < DAT_0009386c) {
    local_1c = 0;
  }
  local_1c = local_1c >> 1;
  local_14 = DAT_0009386c + -0x19;
  if (DAT_0009386c < (undefined *)0x19) {
    local_14 = (undefined *)0x0;
    puVar9 = DAT_0009386c;
  }
  else {
    local_1c = 0;
    puVar9 = (undefined *)0x19;
  }
  local_18 = DAT_0009386c + -(int)local_14;
  if (DAT_0009386c < local_14) {
    local_18 = (undefined *)0x0;
  }
  if ((undefined *)0x18 < local_18) {
    local_18 = (undefined *)0x19;
  }
  local_20 = local_1c * 0xa0 | 0xb8000;
  puVar9 = &DAT_0007306c + (int)DAT_0009386c * 0x104 + (int)puVar9 * -0x104;
  puVar7 = (undefined *)0x0;
  while (puVar8 = puVar7, puVar8 != local_18) {
    uVar1 = (&DAT_0007316c)[(int)(puVar8 + (int)local_14) * 0x82];
    if ((&DAT_0007316e)[(int)(puVar8 + (int)local_14) * 0x104] == '\0') {
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
  if ((((local_28 & 1) == 0) && (DAT_00093878 == '\x01')) &&
     (DAT_00093870 < local_18 + (int)local_14 && local_14 <= DAT_00093870)) {
    recovered_36add((uint)(DAT_00093870 + (local_1c - (int)local_14)),DAT_00093874 + 2);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  recovered_36929(iVar3);
  return extraout_EAX_00;
}
