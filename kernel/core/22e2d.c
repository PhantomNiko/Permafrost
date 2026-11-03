#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00048438
#define DAT_00048438 (*(uint8_t *)(0x48438U))
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
#undef DAT_0004863b
#define DAT_0004863b (*(uint8_t *)(0x4863bU))
#undef DAT_0004877b
#define DAT_0004877b (*(uint8_t *)(0x4877bU))
#undef DAT_000522af
#define DAT_000522af (*(uint8_t *)(0x522afU))
#undef DAT_000522b0
#define DAT_000522b0 (*(uint8_t *)(0x522b0U))
#undef DAT_000522b1
#define DAT_000522b1 (*(uint8_t *)(0x522b1U))
#undef DAT_000637c8
#define DAT_000637c8 (*(char *)(0x637c8U))
#undef DAT_00083ff0
#define DAT_00083ff0 (*(uint8_t * * *)(0x83ff0U))
#undef DAT_0008406c
#define DAT_0008406c (*(uint8_t *)(0x8406cU))
#undef PTR_DAT_00048c16
#define PTR_DAT_00048c16 (*(void * *)(0x48c16U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_22c (*(char (*)[512])(frame + 16))
#define local_2c (*(uint *)(frame + 528))
#define local_28 (*(uint *)(frame + 532))
#define local_24 (*(uint *)(frame + 536))
#define local_20 (*(undefined ** *)(frame + 540))
#define local_1c (*(char * *)(frame + 544))
#define local_18 (*(undefined4 *)(frame + 548))
#define local_12 (*(char *)(frame + 554))
#define local_11 (*(byte *)(frame + 555))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22e2d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_22e2d(char *param_1,uint param_2,undefined **param_3,byte param_4,char param_5)

{
  unsigned char frame[604];

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined **ppuVar5;
  uint uVar6;
  uint uVar7;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  ppuVar5 = (undefined **)&DAT_00048438;
  if (param_3 != (undefined **)0x0) {
    ppuVar5 = param_3;
  }
  local_28 = 0x1ff;
  if (param_2 - 1 < 0x1ff) {
    local_28 = param_2 - 1;
  }
  local_18 = DAT_00083ff0;
  *param_1 = '\0';
  uVar7 = 0;
  DAT_000522b0 = 0;
  uVar2 = _DAT_0000046c / 9;
  local_11 = param_4;
  DAT_00083ff0 = ppuVar5;
  local_24 = param_2;
  local_1c = param_1;
  recovered_2219f();
  if ((DAT_000637c8 == '\x01') && (*(char *)ppuVar5 != '\0')) {
    recovered_29c00((char *)ppuVar5);
  }
  uVar2 = uVar2 ^ 1;
  local_11 = local_11 ^ 1;
  local_2c = uVar2;
  local_20 = ppuVar5;
LAB_00022ec8:
  local_12 = '\0';
  uVar3 = recovered_2c7fe(&local_12);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00020023();
    if ((short)uVar3 == 0) goto LAB_00022fa8;
    cVar1 = (char)uVar3;
    if ((cVar1 == '\r') || (uVar4 = (ushort)((uint)uVar3 >> 8) & 0xff, uVar4 == 0x1c)) {
      (&DAT_000522b0)[uVar7] = 0;
      recovered_21de7(local_22c,0x200,&DAT_00048638,&DAT_000522b0);
      goto LAB_000230c7;
    }
    if (cVar1 == '\x1b' || uVar4 == 1) {
      DAT_000522b0 = 0;
      uVar6 = 0;
      if (uVar7 == 0 && local_11 == 0) {
        *local_1c = '\0';
        DAT_00083ff0 = (undefined **)local_18;
        recovered_2219f();
        return 0;
      }
    }
    else {
      if ((cVar1 == '\b' || uVar4 == 0xe) && (uVar7 != 0)) {
        (&DAT_000522af)[uVar7] = 0;
        uVar6 = uVar7 - 1;
        goto LAB_00023046;
      }
      if ((0x5e < (byte)(cVar1 - 0x20U)) || (local_28 <= uVar7)) goto LAB_00022ec8;
      (&DAT_000522b0)[uVar7] = cVar1;
      (&DAT_000522b1)[uVar7] = 0;
      uVar6 = uVar7 + 1;
    }
  }
  else if (local_12 == '\x1b') {
    if (uVar7 == 0 && local_11 == 0) {
      recovered_29c00(&DAT_0004877b);
      DAT_000522b0 = 0;
      *local_1c = '\0';
      DAT_00083ff0 = (undefined **)local_18;
      recovered_2219f();
      return 0;
    }
    DAT_000522b0 = 0;
    recovered_29c00(&DAT_0004877b);
    uVar6 = 0;
    ppuVar5 = local_20;
    if (*(char *)local_20 != '\0') goto LAB_00022f9e;
  }
  else {
    if ((local_12 == '\r') || (local_12 == '\n')) {
      if (local_12 == '\r') {
        DAT_0008406c = 1;
      }
      (&DAT_000522b0)[uVar7] = 0;
      recovered_21de7(local_22c,0x200,&DAT_00048638,&DAT_000522b0);
      recovered_29c00(&DAT_0004877b);
LAB_000230c7:
      if ((param_5 != '\0') && (local_22c[0] != '\0')) {
        if (*(char *)local_20 == '\0') {
          recovered_22d6b(local_22c);
        }
        else {
          recovered_23390(&DAT_0004863b,local_20,local_22c);
        }
      }
      DAT_000522b0 = 0;
      DAT_00083ff0 = (undefined **)local_18;
      recovered_2219f();
      recovered_21de7(local_1c,local_24,&DAT_00048638,local_22c);
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    if ((local_12 == '\b' || local_12 == '\x7f') && (uVar7 != 0)) {
      (&DAT_000522af)[uVar7] = 0;
      uVar6 = uVar7 - 1;
      ppuVar5 = &PTR_DAT_00048c16;
LAB_00022f9e:
      recovered_29c00((char *)ppuVar5);
    }
    else {
      if ((0x5e < (byte)(local_12 - 0x20U)) || (local_28 <= uVar7)) goto LAB_00022ec8;
      uVar6 = uVar7 + 1;
      (&DAT_000522b0)[uVar7] = local_12;
      (&DAT_000522b1)[uVar7] = 0;
      recovered_29daf(local_12);
    }
  }
LAB_00023046:
  uVar2 = _DAT_0000046c / 9;
  uVar7 = uVar6;
  goto LAB_00023054;
LAB_00022fa8:
  uVar2 = _DAT_0000046c / 9;
  if ((((uVar2 & 1) == 0 ^ (byte)local_2c) & 1) != 0) {
LAB_00023054:
    uVar2 = uVar2 ^ 1;
    recovered_2219f();
    local_2c = uVar2;
  }
  goto LAB_00022ec8;
}
