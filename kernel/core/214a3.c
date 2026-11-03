#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x214a3
 */

bool FUN_000214a3(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}
