#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21289
 */

int recovered_21289(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;

  if (param_1 == 0) {
    puVar3 = recovered_20ec7(param_2);
    return (int)puVar3;
  }
  if (param_2 == 0) {
    recovered_21203(param_1);
  }
  else {
    recovered_20c94();
    uVar4 = param_2 + 0xfU & 0xfffffff0;
    puVar3 = (uint *)(param_1 + -0xc);
    uVar1 = *(uint *)(param_1 + -0xc);
    if (uVar4 <= uVar1) {
      recovered_20f1a(puVar3,uVar4);
      return param_1;
    }
    piVar2 = *(int **)(param_1 + -8);
    if (((piVar2 != (int *)0x0) &&
        (((int *)(param_1 + uVar1) == piVar2 & *(byte *)(piVar2 + 2)) == 1)) &&
       (uVar4 <= uVar1 + *piVar2 + 0xc)) {
      recovered_21252((int *)puVar3);
      recovered_20f1a(puVar3,uVar4);
      *(undefined1 *)(param_1 + -4) = 0;
      return param_1;
    }
    puVar3 = recovered_20ec7(uVar4);
    if (puVar3 != (uint *)0x0) {
      if (*(uint *)(param_1 + -0xc) < uVar4) {
        uVar4 = *(uint *)(param_1 + -0xc);
      }
      recovered_21348((int)puVar3,param_1,uVar4);
      recovered_21203(param_1);
      return (int)puVar3;
    }
  }
  return 0;
}
