#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27ad0
 */

void recovered_27ad0(int *param_1,float param_2)

{
  unsigned char frame[64] = {0};

  float fVar1;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    fVar1 = 1.0;
    if (1.0 < param_2) {
      fVar1 = param_2;
    }
    param_1[1] = (int)fVar1;
    recovered_2dcbe(param_1 + 2);
    param_1[9] = 0;
    param_1[6] = 0;
  }
  return;
}
