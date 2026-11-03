#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29b55
 */

uint recovered_29b55(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = 0x811c9dc5;
  for (iVar2 = 0; param_2 != iVar2; iVar2 = iVar2 + 1) {
    uVar1 = (uVar1 ^ *(byte *)(param_1 + iVar2)) * 0x1000193;
  }
  return uVar1;
}
