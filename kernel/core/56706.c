#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56706
 */

undefined8 recovered_56706(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = *param_1;
  uVar2 = param_1[1];
  return CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                  uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
}
