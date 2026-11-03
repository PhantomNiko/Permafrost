#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28bb5
 */

uint recovered_28bb5(undefined4 *param_1,int param_2)

{
  unsigned char frame[64];

  uint in_EAX = 0;
  undefined4 *puVar1;
  bool bVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1;
    while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
      recovered_28be9(puVar1);
      puVar1 = puVar1 + 1;
    }
    in_EAX = recovered_20dfd((int)param_1);
  }
  return in_EAX;
}

