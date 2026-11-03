#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28b0f
 */

uint recovered_28b0f(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *(uint *)(*param_1 + param_2);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}
