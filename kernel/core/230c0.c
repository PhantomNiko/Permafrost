#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x230c0
 */

void recovered_230c0(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x000230cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}
