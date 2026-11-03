#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x214b6
 */

int FUN_000214b6(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}
