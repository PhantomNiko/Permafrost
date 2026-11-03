#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29d62
 */

void recovered_29d62(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  recovered_2b13a(param_1 + 6,param_2 + 6);
  return;
}
