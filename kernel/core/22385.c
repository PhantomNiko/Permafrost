#include "functions.h"
#undef DAT_0005d7bc
#define DAT_0005d7bc (*(uint32_t *)(0x5d7bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22385
 */

void recovered_22385(int param_1,uint param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;

  piVar3 = (int *)(param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2 - ((int)piVar3 - param_1);
  if ((((uint)((int)piVar3 - param_1) <= param_2 && uVar2 != 0) && param_3 != (int *)0x0) &&
     (uVar2 = uVar2 & 0xfffffff0, 0x1c < uVar2)) {
    *piVar3 = uVar2 - 0xc;
    piVar3[1] = 0;
    *(undefined1 *)(piVar3 + 2) = 1;
    if (DAT_0005d7bc == 0) {
      puVar1 = &DAT_0005d7bc;
    }
    else {
      puVar1 = (undefined4 *)(*param_3 + 4);
    }
    *puVar1 = piVar3;
    *param_3 = (int)piVar3;
  }
  return;
}
