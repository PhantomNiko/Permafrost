#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27298
 */

undefined4 * recovered_27298(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  recovered_272e8(param_1 + 0x10,param_2 + 0x10);
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}
