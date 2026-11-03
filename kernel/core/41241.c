#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41241
 */

uint recovered_41241(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0xffffffff;
  for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
    uVar3 = uVar3 ^ *(byte *)(param_1 + iVar2);
    iVar1 = 8;
    while (bVar4 = iVar1 != 0, iVar1 = iVar1 + -1, bVar4) {
      uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
    }
  }
  return ~uVar3;
}
