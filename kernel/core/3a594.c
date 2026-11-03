#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a594
 */

uint recovered_3a594(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  undefined4 *puVar1;
  bool bVar2;

  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1;
    while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
      recovered_3a5c8(puVar1);
      puVar1 = puVar1 + 1;
    }
    in_EAX = recovered_21203((int)param_1);
  }
  return in_EAX;
}
