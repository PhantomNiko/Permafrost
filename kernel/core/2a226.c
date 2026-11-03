#include "functions.h"
#define local_20 (*(uint *)(frame + 40))
#define uStack_38 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a226
 */

undefined4 recovered_2a226(int param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
               uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,uint *param_11
               )

{
  unsigned char frame[104];

  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;

  if (param_1 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x1fe) != -0x55ab) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x13);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  uVar7 = (uint)*(byte *)(param_1 + 0xd);
  uVar8 = (uint)*(ushort *)(param_1 + 0x11);
  local_20 = (uint)*(ushort *)(param_1 + 0x16);
  if (local_20 == 0) {
    local_20 = *(uint *)(param_1 + 0x24);
    bVar6 = local_20 != 0 && uVar8 == 0;
  }
  else {
    bVar6 = false;
  }
  if (*(byte *)(param_1 + 0xd) == 0 || *(short *)(param_1 + 0xb) != 0x200) {
    return 0;
  }
  uVar2 = *(ushort *)(param_1 + 0xe);
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((uVar3 == 0 || local_20 == 0) || ((bVar1 == 0 || uVar2 == 0) || (uVar7 - 1 & uVar7) != 0)) {
    return 0;
  }
  if (param_2 != 0 && param_2 < uVar3) {
    return 0;
  }
  uVar4 = uVar8 * 0x20 + 0x1ff >> 9;
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  uVar4 = local_20 * bVar1 + (uint)uVar2 + uVar4;
  uVar5 = uVar3 - uVar4;
  if (uVar3 < uVar4 || uVar5 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar5 = uVar5 / uVar7;
  if (bVar6) {
LAB_0002a346:
    if (uVar4 < 2 || uVar8 != 0) {
      return 0;
    }
    uStack_38 = 4;
  }
  else {
    if (uVar5 < 0xff5) {
      uStack_38 = 2;
    }
    else {
      if (0xfff4 < uVar5) goto LAB_0002a346;
      uStack_38 = 3;
    }
    if (uVar8 == 0) {
      return 0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x200;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)uVar2;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)bVar1;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = local_20;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar8;
  }
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar4;
  }
  if (param_10 != (uint *)0x0) {
    *param_10 = uVar3;
  }
  if (param_11 != (uint *)0x0) {
    *param_11 = uVar5;
  }
  return uStack_38;
}
