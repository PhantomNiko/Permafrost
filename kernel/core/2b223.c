#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b223
 */

double * recovered_2b223(double *param_1,double *param_2,double *param_3)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = *param_3;
  dVar2 = param_3[1];
  *param_1 = dVar1 * *param_2 + dVar2 * param_2[1] + param_2[4];
  param_1[1] = dVar1 * param_2[2] + dVar2 * param_2[3] + param_2[5];
  return param_1;
}
