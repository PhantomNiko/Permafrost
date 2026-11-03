#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21450
 */

bool FUN_00021450(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}
