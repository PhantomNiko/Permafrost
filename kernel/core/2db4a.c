#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2db4a
 */

longdouble recovered_2db4a(int param_1)

{
  unsigned char frame[64] = {0};

  float10 extraout_ST0 = 0;

  recovered_2b2f4((int *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x90) = 0;
  return (longdouble)(double)extraout_ST0;
}
