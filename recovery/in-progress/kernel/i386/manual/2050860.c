/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))


void recovered_2050860(uint cluster,uint value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;

  iVar3 = DAT_021307a4;
  if (1 < cluster && iVar3 != 0) {
    iVar8 = DAT_0213075c;
    uVar5 = (undefined1)value;
    bVar6 = (byte)(value >> 8);
    if (iVar8 == 5) {
      uVar1 = *(undefined4 *)(iVar3 + cluster * 4);
      *(undefined1 *)(iVar3 + cluster * 4) = uVar5;
      *(byte *)(iVar3 + 1 + cluster * 4) = bVar6;
      *(char *)(iVar3 + 2 + cluster * 4) = (char)(value >> 0x10);
      *(byte *)(iVar3 + 3 + cluster * 4) =
           (byte)(value >> 0x18) & 0xf | (byte)((uint)uVar1 >> 0x18) & 0xf0;
    }
    else if (iVar8 == 4) {
      *(short *)(iVar3 + cluster * 2) = (short)value;
    }
    else if (iVar8 == 3) {
      iVar8 = (cluster >> 1) + cluster;
      if ((cluster & 1) == 0) {
        *(undefined1 *)(iVar3 + iVar8) = uVar5;
        *(byte *)(iVar3 + 1 + iVar8) = bVar6 & 0xf | *(byte *)(iVar3 + 1 + iVar8) & 0xf0;
      }
      else {
        uVar7 = CONCAT11(uVar5,*(undefined1 *)(iVar3 + iVar8)) & 0xff0f;
        *(byte *)(iVar3 + iVar8) = (char)(uVar7 >> 8) << 4 | (byte)uVar7;
        *(char *)(iVar3 + 1 + iVar8) = (char)(value >> 4);
      }
    }
  }
  iVar3 = DAT_021307a4;
  uVar2 = DAT_02130740;
  if ((iVar3 == 0 || cluster < 2) || uVar2 == 0) {
    return;
  }
  iVar3 = DAT_0213075c;
  if (iVar3 == 4) {
    uVar9 = cluster * 2 + 1;
    uVar4 = cluster * 2;
  }
  else if (iVar3 == 3) {
    uVar4 = (cluster >> 1) + cluster;
    uVar9 = (cluster >> 1) + 1 + cluster;
  }
  else {
    uVar9 = cluster * 4 + 3;
    uVar4 = cluster << 2;
  }
  recovered_2050a30(uVar4 / uVar2);
  uVar2 = DAT_02130740;
  recovered_2050a30(uVar9 / uVar2);
  return;
}
#undef DAT_02130740
#undef DAT_0213075c
#undef DAT_021307a4
