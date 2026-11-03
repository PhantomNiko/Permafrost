#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38a53
 */

bool recovered_38a53(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 5) {
    bVar1 = param_2 < 0xffffff8;
  }
  else if (param_1 == 4) {
    bVar1 = param_2 < 0xfff8;
  }
  else {
    if (param_1 != 3) {
      return true;
    }
    bVar1 = param_2 < 0xff8;
  }
  return !bVar1;
}
