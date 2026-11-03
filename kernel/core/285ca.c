#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x285ca
 */

bool recovered_285ca(undefined4 *param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  puVar1 = recovered_20ae5(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    recovered_24daf(param_1);
    *param_1 = 8;
    param_1[7] = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}

