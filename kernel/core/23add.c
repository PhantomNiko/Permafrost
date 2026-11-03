#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23add
 */

uint recovered_23add(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;

  bVar2 = 0;
  uVar1 = 0;
  for (iVar3 = 0; param_2 != iVar3; iVar3 = iVar3 + 1) {
    uVar1 = uVar1 | (uint)*(byte *)(param_1 + iVar3) << (bVar2 & 0x1f);
    bVar2 = bVar2 + 8;
  }
  return uVar1;
}
