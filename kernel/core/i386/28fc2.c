#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28fc2
 */

undefined8 recovered_28fc2(uint param_1,uint param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0x18;
  if (param_1 < 0x18) {
    uVar1 = param_1;
  }
  uVar3 = 0x4f;
  if (param_2 < 0x4f) {
    uVar3 = param_2;
  }
  iVar2 = uVar1 * 0x50 + uVar3;
  out(0x3d4,0xe);
  out(0x3d5,(char)((uint)iVar2 >> 8));
  out(0x3d4,0xf);
  out(0x3d5,(char)iVar2);
  return CONCAT44(CONCAT22((short)(param_2 >> 0x10),0x3d5),iVar2);
}
