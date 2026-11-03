#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_00042534
#define DAT_00042534 (*(uint8_t *)(0x42534U))
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_00042733
#define DAT_00042733 (*(uint8_t *)(0x42733U))
#undef DAT_00042873
#define DAT_00042873 (*(uint8_t *)(0x42873U))
#undef DAT_00042cd7
#define DAT_00042cd7 (*(uint8_t *)(0x42cd7U))
#undef DAT_00047e88
#define DAT_00047e88 (*(uint8_t *)(0x47e88U))
#undef DAT_00047e89
#define DAT_00047e89 (*(uint8_t *)(0x47e89U))
#undef DAT_00047e8a
#define DAT_00047e8a (*(uint8_t *)(0x47e8aU))
#undef DAT_0005c7a8
#define DAT_0005c7a8 (*(char *)(0x5c7a8U))
#undef DAT_0007cfd0
#define DAT_0007cfd0 (*(char * *)(0x7cfd0U))
#undef DAT_0007cfd6
#define DAT_0007cfd6 (*(char *)(0x7cfd6U))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
#define local_20 (*(char * *)(frame + 532))
#define local_1c (*(undefined4 *)(frame + 536))
#define local_18 (*(uint *)(frame + 540))
#define local_11 (*(byte *)(frame + 547))
#define local_224 (*(char (*)[512])(frame + 16))
#define local_24 (*(uint *)(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22a27
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_22a27(char *param_1,uint param_2,char *param_3,byte param_4,char param_5)

{
  unsigned char frame[596];

  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  pcVar8 = &DAT_00042534;
  if (param_3 != (char *)0x0) {
    pcVar8 = param_3;
  }
  uVar9 = 0x1ff;
  if (param_2 - 1 < 0x1ff) {
    uVar9 = param_2 - 1;
  }
  local_1c = DAT_0007cfd0;
  uVar7 = 0;
  *param_1 = '\0';
  DAT_00047e89 = 0;
  local_18 = _DAT_0000046c / 9;
  local_11 = param_4;
  DAT_0007cfd0 = pcVar8;
  local_24 = param_2;
  local_20 = param_1;
  recovered_21d99();
  if ((DAT_0005c7a8 == '\x01') && (*pcVar8 != '\0')) {
    recovered_28b9d(pcVar8);
  }
  local_11 = local_11 ^ 1;
LAB_00022ab3:
  if (DAT_0005c7a8 == '\x01') {
    do {
      bVar1 = in(0x3fd);
      if ((bVar1 & 1) == 0) goto LAB_00022afc;
      cVar2 = in(0x3f8);
      if (DAT_0007cfd6 != '\x01') {
        if (cVar2 != '\n') {
          if (cVar2 == '\x1b') goto LAB_00022bfe;
          if (cVar2 != '\r') goto LAB_00022bac;
        }
        if (cVar2 != '\r') goto LAB_00022ca8;
        goto LAB_00022ca1;
      }
      DAT_0007cfd6 = '\0';
    } while (cVar2 == '\n');
    if (cVar2 == '\x1b') {
LAB_00022bfe:
      if (uVar7 == 0 && local_11 == 0) {
        recovered_28b9d(&DAT_00042873);
        DAT_00047e89 = 0;
        *local_20 = '\0';
        DAT_0007cfd0 = (char *)local_1c;
        recovered_21d99();
        return 0;
      }
      DAT_00047e89 = 0;
      recovered_28b9d(&DAT_00042873);
      uVar7 = 0;
      if (*pcVar8 != '\0') {
        pcVar6 = pcVar8;
        goto LAB_00022c26;
      }
    }
    else {
      if (cVar2 == '\r') goto LAB_00022ca1;
LAB_00022bac:
      if ((cVar2 == '\x7f' || cVar2 == '\b') && uVar7 != 0) {
        (&DAT_00047e88)[uVar7] = 0;
        uVar7 = uVar7 - 1;
        pcVar6 = &DAT_00042cd7;
LAB_00022c26:
        recovered_28b9d(pcVar6);
      }
      else {
        if ((0x5e < (byte)(cVar2 - 0x20U)) || (uVar9 <= uVar7)) goto LAB_00022ab3;
        local_18 = uVar7 + 1;
        (&DAT_00047e89)[uVar7] = cVar2;
        (&DAT_00047e8a)[uVar7] = 0;
        recovered_28d4c(cVar2);
        uVar7 = local_18;
      }
    }
  }
  else {
LAB_00022afc:
    uVar3 = FUN_00020023();
    if ((short)uVar3 == 0) goto LAB_00022b77;
    cVar2 = (char)uVar3;
    if ((cVar2 == '\r') || (uVar5 = (ushort)((uint)uVar3 >> 8) & 0xff, uVar5 == 0x1c)) {
      (&DAT_00047e89)[uVar7] = 0;
      recovered_219e1(local_224,0x200,&DAT_00042730,&DAT_00047e89);
      goto LAB_00022cd8;
    }
    if ((cVar2 == '\x1b') || (uVar5 == 1)) {
      bVar10 = uVar7 == 0;
      DAT_00047e89 = 0;
      uVar7 = 0;
      if (bVar10 && local_11 == 0) {
        *local_20 = '\0';
        DAT_0007cfd0 = (char *)local_1c;
        recovered_21d99();
        return 0;
      }
    }
    else {
      if ((uVar5 == 0xe || cVar2 == '\b') && uVar7 != 0) {
        (&DAT_00047e88)[uVar7] = 0;
        uVar7 = uVar7 - 1;
        goto LAB_00022c2b;
      }
      if ((0x5e < (byte)(cVar2 - 0x20U)) || (uVar9 <= uVar7)) goto LAB_00022ab3;
      (&DAT_00047e89)[uVar7] = cVar2;
      (&DAT_00047e8a)[uVar7] = 0;
      uVar7 = uVar7 + 1;
    }
  }
LAB_00022c2b:
  uVar4 = _DAT_0000046c / 9;
  goto LAB_00022c37;
LAB_00022b77:
  uVar4 = _DAT_0000046c / 9;
  if ((((byte)uVar4 ^ (byte)local_18) & 1) != 0) {
LAB_00022c37:
    local_18 = uVar4;
    recovered_21d99();
  }
  goto LAB_00022ab3;
LAB_00022ca1:
  DAT_0007cfd6 = '\x01';
LAB_00022ca8:
  (&DAT_00047e89)[uVar7] = 0;
  recovered_219e1(local_224,0x200,&DAT_00042730,&DAT_00047e89);
  recovered_28b9d(&DAT_00042873);
LAB_00022cd8:
  if ((param_5 != '\0') && (local_224[0] != '\0')) {
    if (*pcVar8 == '\0') {
      recovered_22965(local_224);
    }
    else {
      recovered_22fa2(&DAT_00042733,pcVar8,local_224);
    }
  }
  DAT_00047e89 = 0;
  DAT_0007cfd0 = (char *)local_1c;
  recovered_21d99();
  recovered_219e1(local_20,local_24,&DAT_00042730,local_224);
  return CONCAT31((int3)(uVar7 >> 8),1);
}
