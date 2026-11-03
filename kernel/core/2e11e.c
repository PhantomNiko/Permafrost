#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e11e
 */

float10 recovered_2e11e(int *param_1)

{
  unsigned char frame[64];

  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if ((iVar1 - 5U < 2) || (iVar1 == 1)) {
      fVar2 = (float10)param_1[1];
    }
    else if (iVar1 == 2) {
      return (float10)pf_bits_float((uint32_t)param_1[2]);
    }
  }
  return fVar2;
}

