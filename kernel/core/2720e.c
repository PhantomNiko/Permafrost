#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2720e
 */

uint recovered_2720e(uint param_1,uint param_2)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_1 & 0xff;
  if (param_2 < 8) {
    return (((uVar1 << ((byte)param_2 & 0x1f)) - uVar1) + 0x7f) / 0xff;
  }
  return uVar1 << ((byte)param_2 - 8 & 0x1f);
}
