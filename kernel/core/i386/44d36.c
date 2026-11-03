#include "functions.h"
#undef DAT_0004c600
#define DAT_0004c600 (*(uint *)(0x4c600U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44d36
 */

void recovered_44d36(int param_1)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  if (param_1 != 0) {
    uVar1 = 0;
    iVar2 = 0;
    uVar4 = DAT_0004c600;
    for (iVar3 = 0; iVar3 != 0x10; iVar3 = iVar3 + 1) {
      if (iVar2 == 0) {
        uVar1 = uVar4 * 0x19660d + 0x3c6ef35f;
        iVar2 = 4;
        uVar4 = uVar1;
        DAT_0004c600 = uVar1;
      }
      *(char *)(param_1 + iVar3) = (char)uVar1;
      uVar1 = uVar1 >> 8;
      iVar2 = iVar2 + -1;
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf | 0x40;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f | 0x80;
  }
  return;
}
