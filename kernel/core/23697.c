#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23697
 */

bool FUN_00023697(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((param_1 - 9U < 0x18) && ((0x80001bU >> (param_1 - 9U & 0x1f) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}
