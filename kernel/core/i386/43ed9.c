#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43ed9
 */

uint recovered_43ed9(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  byte bVar3;

  uVar1 = 0;
  if (1 < param_3) {
    if (param_2 == 5) {
      uVar1 = *(uint *)(param_1 + param_3 * 4) & 0xfffffff;
    }
    else if (param_2 == 4) {
      uVar1 = (uint)*(ushort *)(param_1 + param_3 * 2);
    }
    else if (param_2 == 3) {
      iVar2 = param_1 + (param_3 >> 1);
      bVar3 = *(byte *)(param_3 + iVar2);
      if ((param_3 & 1) == 0) {
        uVar1 = (*(byte *)(iVar2 + 1 + param_3) & 0xf) << 8;
      }
      else {
        bVar3 = bVar3 >> 4;
        uVar1 = (uint)*(byte *)(iVar2 + 1 + param_3) << 4;
      }
      uVar1 = uVar1 | bVar3;
    }
  }
  return uVar1;
}
