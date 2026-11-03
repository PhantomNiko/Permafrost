#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00057288
#define DAT_00057288 (*(uint8_t *)(0x57288U))
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_000576ac
#define DAT_000576ac (*(uint8_t *)(0x576acU))
#undef DAT_000577ec
#define DAT_000577ec (*(uint8_t *)(0x577ecU))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
#undef DAT_0005e721
#define DAT_0005e721 (*(uint8_t *)(0x5e721U))
#undef DAT_0005e722
#define DAT_0005e722 (*(uint8_t *)(0x5e722U))
#undef DAT_00073054
#define DAT_00073054 (*(char *)(0x73054U))
#undef DAT_0009387c
#define DAT_0009387c (*(uint8_t * * *)(0x9387cU))
#undef DAT_000938f8
#define DAT_000938f8 (*(uint8_t *)(0x938f8U))
#undef PTR_DAT_00057c87
#define PTR_DAT_00057c87 (*(void * *)(0x57c87U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_18 (*(undefined4 *)(frame + 548))
#define local_12 (*(char *)(frame + 554))
#define local_11 (*(byte *)(frame + 555))
#define local_22c (*(char (*)[512])(frame + 16))
#define local_2c (*(uint *)(frame + 528))
#define local_28 (*(uint *)(frame + 532))
#define local_24 (*(uint *)(frame + 536))
#define local_20 (*(undefined ** *)(frame + 540))
#define local_1c (*(char * *)(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30251
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_30251(char *param_1,uint param_2,undefined **param_3,byte param_4,char param_5)

{
  unsigned char frame[604] = {0};

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
  ppuVar5 = (undefined **)&DAT_00057288;
  if (param_3 != (undefined **)0x0) {
    ppuVar5 = param_3;
  }
  local_28 = 0x1ff;
  if (param_2 - 1 < 0x1ff) {
    local_28 = param_2 - 1;
  }
  local_18 = DAT_0009387c;
  *param_1 = '\0';
  uVar7 = 0;
  DAT_0005e721 = 0;
  uVar2 = _DAT_0000046c / 9;
  local_11 = param_4;
  DAT_0009387c = ppuVar5;
  local_24 = param_2;
  local_1c = param_1;
  recovered_2f46d();
  if ((DAT_00073054 == '\x01') && (*(char *)ppuVar5 != '\0')) {
    recovered_37719((char *)ppuVar5);
  }
  uVar2 = uVar2 ^ 1;
  local_11 = local_11 ^ 1;
  local_2c = uVar2;
  local_20 = ppuVar5;
LAB_000302ec:
  local_12 = '\0';
  uVar3 = recovered_3aafb(&local_12);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00020023();
    if ((short)uVar3 == 0) goto LAB_000303cc;
    cVar1 = (char)uVar3;
    if ((cVar1 == '\r') || (uVar4 = (ushort)((uint)uVar3 >> 8) & 0xff, uVar4 == 0x1c)) {
      (&DAT_0005e721)[uVar7] = 0;
      recovered_22362(local_22c,0x200,&DAT_00057391,&DAT_0005e721);
      goto LAB_000304eb;
    }
    if (cVar1 == '\x1b' || uVar4 == 1) {
      DAT_0005e721 = 0;
      uVar6 = 0;
      if (uVar7 == 0 && local_11 == 0) {
        *local_1c = '\0';
        DAT_0009387c = (undefined **)local_18;
        recovered_2f46d();
        return 0;
      }
    }
    else {
      if ((cVar1 == '\b' || uVar4 == 0xe) && (uVar7 != 0)) {
        (&DAT_0005e720)[uVar7] = 0;
        uVar6 = uVar7 - 1;
        goto LAB_0003046a;
      }
      if ((0x5e < (byte)(cVar1 - 0x20U)) || (local_28 <= uVar7)) goto LAB_000302ec;
      (&DAT_0005e721)[uVar7] = cVar1;
      (&DAT_0005e722)[uVar7] = 0;
      uVar6 = uVar7 + 1;
    }
  }
  else if (local_12 == '\x1b') {
    if (uVar7 == 0 && local_11 == 0) {
      recovered_37719(&DAT_000577ec);
      DAT_0005e721 = 0;
      *local_1c = '\0';
      DAT_0009387c = (undefined **)local_18;
      recovered_2f46d();
      return 0;
    }
    DAT_0005e721 = 0;
    recovered_37719(&DAT_000577ec);
    uVar6 = 0;
    ppuVar5 = local_20;
    if (*(char *)local_20 != '\0') goto LAB_000303c2;
  }
  else {
    if ((local_12 == '\r') || (local_12 == '\n')) {
      if (local_12 == '\r') {
        DAT_000938f8 = 1;
      }
      (&DAT_0005e721)[uVar7] = 0;
      recovered_22362(local_22c,0x200,&DAT_00057391,&DAT_0005e721);
      recovered_37719(&DAT_000577ec);
LAB_000304eb:
      if ((param_5 != '\0') && (local_22c[0] != '\0')) {
        if (*(char *)local_20 == '\0') {
          recovered_3018f(local_22c);
        }
        else {
          recovered_307b4(&DAT_000576ac,local_20,local_22c);
        }
      }
      DAT_0005e721 = 0;
      DAT_0009387c = (undefined **)local_18;
      recovered_2f46d();
      recovered_22362(local_1c,local_24,&DAT_00057391,local_22c);
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    if ((local_12 == '\b' || local_12 == '\x7f') && (uVar7 != 0)) {
      (&DAT_0005e720)[uVar7] = 0;
      uVar6 = uVar7 - 1;
      ppuVar5 = &PTR_DAT_00057c87;
LAB_000303c2:
      recovered_37719((char *)ppuVar5);
    }
    else {
      if ((0x5e < (byte)(local_12 - 0x20U)) || (local_28 <= uVar7)) goto LAB_000302ec;
      uVar6 = uVar7 + 1;
      (&DAT_0005e721)[uVar7] = local_12;
      (&DAT_0005e722)[uVar7] = 0;
      recovered_378c8(local_12);
    }
  }
LAB_0003046a:
  uVar2 = _DAT_0000046c / 9;
  uVar7 = uVar6;
  goto LAB_00030478;
LAB_000303cc:
  uVar2 = _DAT_0000046c / 9;
  if ((((uVar2 & 1) == 0 ^ (byte)local_2c) & 1) != 0) {
LAB_00030478:
    uVar2 = uVar2 ^ 1;
    recovered_2f46d();
    local_2c = uVar2;
  }
  goto LAB_000302ec;
}
