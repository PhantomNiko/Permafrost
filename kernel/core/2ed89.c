#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ed89
 */

undefined4 recovered_2ed89(short param_1,ushort param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if (param_1 == 3) {
    uVar2 = param_2 - 0x20;
    uVar1 = uVar2 & 0xffdf;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar2 = param_2 - 8;
    uVar1 = uVar2 & 0xffe7;
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar1 == 0);
}
