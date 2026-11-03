#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31157
 */

undefined4 * recovered_31157(undefined4 *param_1,int param_2)

{
  unsigned char frame[64];

  undefined4 uVar1;
  
  recovered_285a4(param_1);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x3f800000;
  }
  *param_1 = 5;
  param_1[1] = param_2;
  param_1[2] = uVar1;
  return param_1;
}

