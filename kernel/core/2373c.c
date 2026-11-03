#include "functions.h"
#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2373c
 */

ulonglong FUN_0002373c(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  for (pbVar7 = param_1; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + 1) {
    uVar3 = (uint)*pbVar7;
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_0002376e;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_0002376e:
  if (((char)uVar3 == '-') || (uVar3 == 0x2b)) {
    bVar8 = (char)uVar3 == '-';
    pbVar7 = pbVar7 + 1;
  }
  else {
    bVar8 = false;
  }
  if (param_3 == 0x10) {
    local_14 = 0x10;
    if ((*pbVar7 == 0x30) && ((pbVar7[1] | 0x20) == 0x78)) {
      pbVar7 = pbVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar7 == 0x30) {
      if ((pbVar7[1] | 0x20) == 0x78) {
        pbVar7 = pbVar7 + 2;
        uStack_20 = 0x10;
      }
      else {
        uStack_20 = 8;
      }
    }
    else {
      uStack_20 = 10;
    }
    local_14 = uStack_20;
  }
  else {
    local_14 = param_3;
  }
  iVar4 = 0;
  uVar1 = 0;
  while( true ) {
    iVar6 = (int)(uVar1 >> 0x20);
    uVar5 = (uint)pbVar7[iVar4];
    uVar3 = uVar5 - 0x30;
    if (9 < uVar3) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar3 = uVar5 - 0x57;
      }
      else {
        uVar3 = uVar5 - 0x37;
        if (0x19 < uVar5 - 0x41) {
          uVar3 = 0xffffffff;
        }
      }
    }
    if (((int)uVar3 < 0) || ((int)local_14 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_14 + CONCAT44(iVar6 * local_14,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    pbVar7 = pbVar7 + iVar4;
    if (iVar4 == 0) {
      pbVar7 = param_1;
    }
    *param_2 = pbVar7;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}
