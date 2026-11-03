#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4212d
 */

byte * recovered_4212d(byte *param_1)

{
  unsigned char frame[64];

  while( true ) {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (0x17 < *param_1 - 9) break;
    if ((0x80001fU >> (*param_1 - 9 & 0x1f) & 1) == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  return param_1;
}
