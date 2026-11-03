#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21466
 */

bool FUN_00021466(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}
