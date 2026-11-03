#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26f41
 */

uint recovered_26f41(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = 1;
  uVar5 = 0;
  for (uVar1 = 0; uVar4 = param_2 - uVar1, uVar1 <= param_2 && uVar4 != 0; uVar1 = uVar1 + uVar4) {
    if (0x15af < uVar4) {
      uVar4 = 0x15b0;
    }
    for (uVar2 = 0; uVar4 != uVar2; uVar2 = uVar2 + 1) {
      uVar3 = uVar3 + *(byte *)(param_1 + uVar1 + uVar2);
      uVar5 = uVar5 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar5 = uVar5 % 0xfff1;
  }
  return uVar3 | uVar5 << 0x10;
}
