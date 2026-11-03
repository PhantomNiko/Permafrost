#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c579
 */

undefined4 __fastcall
recovered_2c579(uint *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar4;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = uVar4 + 1;
  if (uVar1 < uVar2) {
    uVar4 = 0x10;
    if (uVar1 != 0) {
      uVar4 = uVar1;
    }
    for (; uVar4 < uVar2; uVar4 = uVar4 * 2) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar2;
        break;
      }
    }
    uVar1 = recovered_20b68(param_1[2],uVar4 * 0xc);
    if (uVar1 == 0) {
      return 0;
    }
    param_1[2] = uVar1;
    param_1[1] = uVar4;
    uVar4 = *param_1;
    uVar2 = uVar4 + 1;
  }
  else {
    uVar1 = param_1[2];
  }
  iVar3 = uVar4 * 0xc;
  *(undefined1 *)(uVar1 + iVar3) = param_2;
  *(undefined4 *)(uVar1 + 4 + iVar3) = param_3;
  *(undefined4 *)(uVar1 + 8 + iVar3) = param_4;
  *param_1 = uVar2;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

