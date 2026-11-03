#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x561ca
 */

undefined4 recovered_561ca(uint *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if (param_2 < 4 || param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = recovered_5624c(param_1);
  return CONCAT31((int3)((uVar2 & 0xfffffffe) >> 8),
                  (uVar2 & 0xfffffffe) == 0xcafebabe || (uVar1 & 0xfffffffe) == 0xfeedface);
}
