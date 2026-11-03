#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d5bc
 */

uint recovered_2d5bc(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = 8;
  do {
    uVar1 = uVar2;
    bVar3 = uVar2 < param_1;
    uVar2 = uVar2 * 2;
  } while (bVar3);
  return uVar1;
}
