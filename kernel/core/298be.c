#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x298be
 */

float10 FUN_000298be(int param_1)

{
  unsigned char frame[64] = {0};

  return (float10)*(short *)(param_1 + 0x72);
}
