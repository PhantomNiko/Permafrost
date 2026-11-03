#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_0004619c
#define DAT_0004619c (*(uint8_t *)(0x4619cU))
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_0004639b
#define DAT_0004639b (*(uint8_t *)(0x4639bU))
#undef DAT_000464db
#define DAT_000464db (*(uint8_t *)(0x464dbU))
#undef DAT_000502b0
#define DAT_000502b0 (*(uint8_t *)(0x502b0U))
#undef DAT_000502b1
#define DAT_000502b1 (*(uint8_t *)(0x502b1U))
#undef DAT_000617c8
#define DAT_000617c8 (*(char *)(0x617c8U))
#undef DAT_00081ff0
#define DAT_00081ff0 (*(uint8_t * * *)(0x81ff0U))
#undef DAT_0008206c
#define DAT_0008206c (*(char *)(0x8206cU))
#undef PTR_DAT_000469b3
#define PTR_DAT_000469b3 (*(void * *)(0x469b3U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_224 (*(char (*)[512])(frame + 16))
#define local_24 (*(uint *)(frame + 528))
#define local_20 (*(char * *)(frame + 532))
#define local_1c (*(undefined4 *)(frame + 536))
#define local_18 (*(uint *)(frame + 540))
#define local_11 (*(byte *)(frame + 547))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22e2d
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_22e2d(char *param_1,uint param_2,undefined **param_3,byte param_4,char param_5)

{
  unsigned char frame[596];

  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined **ppuVar8;
  uint uVar9;
  bool bVar10;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  ppuVar8 = (undefined **)&DAT_0004619c;
  if (param_3 != (undefined **)0x0) {
    ppuVar8 = param_3;
  }
  uVar9 = 0x1ff;
  if (param_2 - 1 < 0x1ff) {
    uVar9 = param_2 - 1;
  }
  local_1c = DAT_00081ff0;
  uVar7 = 0;
  *param_1 = '\0';
  DAT_000502b0 = 0;
  local_18 = _DAT_0000046c / 9;
  local_11 = param_4;
  DAT_00081ff0 = ppuVar8;
  local_24 = param_2;
  local_20 = param_1;
  recovered_2219f();
  if ((DAT_000617c8 == '\x01') && (*(char *)ppuVar8 != '\0')) {
    recovered_29c1a((char *)ppuVar8);
  }
  local_11 = local_11 ^ 1;
LAB_00022eb9:
  if (DAT_000617c8 == '\x01') {
    do {
      bVar1 = in(0x3fd);
      if ((bVar1 & 1) == 0) goto LAB_00022f02;
      cVar2 = in(0x3f8);
      if (DAT_0008206c != '\x01') {
        if (cVar2 != '\n') {
          if (cVar2 == '\x1b') goto LAB_00023004;
          if (cVar2 != '\r') goto LAB_00022fb2;
        }
        if (cVar2 != '\r') goto LAB_000230ae;
        goto LAB_000230a7;
      }
      DAT_0008206c = '\0';
    } while (cVar2 == '\n');
    if (cVar2 == '\x1b') {
LAB_00023004:
      if (uVar7 == 0 && local_11 == 0) {
        recovered_29c1a(&DAT_000464db);
        DAT_000502b0 = 0;
        *local_20 = '\0';
        DAT_00081ff0 = (undefined **)local_1c;
        recovered_2219f();
        return 0;
      }
      DAT_000502b0 = 0;
      recovered_29c1a(&DAT_000464db);
      uVar7 = 0;
      if (*(char *)ppuVar8 != '\0') {
        ppuVar6 = ppuVar8;
        goto LAB_0002302c;
      }
    }
    else {
      if (cVar2 == '\r') goto LAB_000230a7;
LAB_00022fb2:
      if ((cVar2 == '\x7f' || cVar2 == '\b') && uVar7 != 0) {
        *(undefined1 *)(uVar7 + 0x502af) = 0;
        uVar7 = uVar7 - 1;
        ppuVar6 = &PTR_DAT_000469b3;
LAB_0002302c:
        recovered_29c1a((char *)ppuVar6);
      }
      else {
        if ((0x5e < (byte)(cVar2 - 0x20U)) || (uVar9 <= uVar7)) goto LAB_00022eb9;
        local_18 = uVar7 + 1;
        (&DAT_000502b0)[uVar7] = cVar2;
        (&DAT_000502b1)[uVar7] = 0;
        recovered_29dc9(cVar2);
        uVar7 = local_18;
      }
    }
  }
  else {
LAB_00022f02:
    uVar3 = FUN_00020023();
    if ((short)uVar3 == 0) goto LAB_00022f7d;
    cVar2 = (char)uVar3;
    if ((cVar2 == '\r') || (uVar5 = (ushort)((uint)uVar3 >> 8) & 0xff, uVar5 == 0x1c)) {
      (&DAT_000502b0)[uVar7] = 0;
      recovered_21de7(local_224,0x200,&DAT_00046398,&DAT_000502b0);
      goto LAB_000230de;
    }
    if ((cVar2 == '\x1b') || (uVar5 == 1)) {
      bVar10 = uVar7 == 0;
      DAT_000502b0 = 0;
      uVar7 = 0;
      if (bVar10 && local_11 == 0) {
        *local_20 = '\0';
        DAT_00081ff0 = (undefined **)local_1c;
        recovered_2219f();
        return 0;
      }
    }
    else {
      if ((uVar5 == 0xe || cVar2 == '\b') && uVar7 != 0) {
        *(undefined1 *)(uVar7 + 0x502af) = 0;
        uVar7 = uVar7 - 1;
        goto LAB_00023031;
      }
      if ((0x5e < (byte)(cVar2 - 0x20U)) || (uVar9 <= uVar7)) goto LAB_00022eb9;
      (&DAT_000502b0)[uVar7] = cVar2;
      (&DAT_000502b1)[uVar7] = 0;
      uVar7 = uVar7 + 1;
    }
  }
LAB_00023031:
  uVar4 = _DAT_0000046c / 9;
  goto LAB_0002303d;
LAB_00022f7d:
  uVar4 = _DAT_0000046c / 9;
  if ((((byte)uVar4 ^ (byte)local_18) & 1) != 0) {
LAB_0002303d:
    local_18 = uVar4;
    recovered_2219f();
  }
  goto LAB_00022eb9;
LAB_000230a7:
  DAT_0008206c = '\x01';
LAB_000230ae:
  (&DAT_000502b0)[uVar7] = 0;
  recovered_21de7(local_224,0x200,&DAT_00046398,&DAT_000502b0);
  recovered_29c1a(&DAT_000464db);
LAB_000230de:
  if ((param_5 != '\0') && (local_224[0] != '\0')) {
    if (*(char *)ppuVar8 == '\0') {
      recovered_22d6b(local_224);
    }
    else {
      recovered_233b7(&DAT_0004639b,ppuVar8,local_224);
    }
  }
  DAT_000502b0 = 0;
  DAT_00081ff0 = (undefined **)local_1c;
  recovered_2219f();
  recovered_21de7(local_20,local_24,&DAT_00046398,local_224);
  return CONCAT31((int3)(uVar7 >> 8),1);
}
