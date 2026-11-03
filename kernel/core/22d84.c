#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d84
 */

uint FUN_00022d84(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0xffffffff || param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
    *(undefined1 *)(param_2 + 0x114) = 0;
  }
  return uVar1;
}
