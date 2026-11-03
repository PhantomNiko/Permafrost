#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25d03
 */

uint recovered_25d03(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}
