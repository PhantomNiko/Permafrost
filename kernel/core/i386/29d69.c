#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29d69
 */

bool recovered_29d69(char param_1)

{
  unsigned char frame[64];

  return ((byte)(param_1 + 0x9fU) < 6 || (byte)(param_1 - 0x30U) < 10) ||
         (byte)(param_1 + 0xbfU) < 6;
}
