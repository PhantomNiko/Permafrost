#include "functions.h"
#define local_1c (*(byte * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21c7a
 */

int FUN_00021c7a(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;

  local_14 = param_3;
  pbVar5 = param_1;
  while( true ) {
    bVar1 = *pbVar5;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar3 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar2 = pbVar5 + uVar3;
  if (param_3 == 0x10) {
    local_14 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar5[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar2 = pbVar5 + uVar3 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar2 == 0x30) {
      if ((pbVar5[uVar3 + 1] | 0x20) == 0x78) {
        pbVar2 = pbVar5 + uVar3 + 2;
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
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  local_1c = param_1;
  local_18 = 0;
  while( true ) {
    pbVar5 = pbVar2 + 1;
    uVar3 = recovered_21d6c((int)(char)*pbVar2);
    if (local_14 <= uVar3) break;
    local_18 = local_18 * local_14 + uVar3;
    pbVar2 = pbVar5;
    local_1c = pbVar5;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_1c;
  }
  iVar4 = -local_18;
  if (bVar1 != 0x2d) {
    iVar4 = local_18;
  }
  return iVar4;
}
