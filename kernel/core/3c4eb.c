#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c4eb
 */

void recovered_3c4eb(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((param_1 != 0) && (recovered_213af(param_1,0,0xd), param_2 != 0)) {
    uVar1 = recovered_214de(param_2);
    uVar2 = 0xc;
    if (uVar1 < 0xc) {
      uVar2 = uVar1;
    }
    recovered_21348(param_1,param_2,uVar2);
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return;
}
