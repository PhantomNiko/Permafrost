#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20b68
 */

int recovered_20b68(int param_1,int param_2)

{
  unsigned char frame[64];

  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    puVar2 = recovered_207b2(param_2);
    return (int)puVar2;
  }
  if (param_2 == 0) {
    recovered_20aee(param_1);
  }
  else {
    recovered_2072e();
    uVar3 = param_2 + 0xfU & 0xfffffff0;
    puVar2 = (uint *)(param_1 + -0xc);
    if (uVar3 <= *(uint *)(param_1 + -0xc)) {
      recovered_20805(puVar2,uVar3);
      return param_1;
    }
    piVar1 = *(int **)(param_1 + -8);
    if (((piVar1 != (int *)0x0) && ((char)piVar1[2] == '\x01')) &&
       (uVar3 <= *(uint *)(param_1 + -0xc) + *piVar1 + 0xc)) {
      recovered_20b3d((int *)puVar2);
      recovered_20805(puVar2,uVar3);
      *(undefined1 *)(param_1 + -4) = 0;
      return param_1;
    }
    puVar2 = recovered_207b2(uVar3);
    if (puVar2 != (uint *)0x0) {
      if (*(uint *)(param_1 + -0xc) < uVar3) {
        uVar3 = *(uint *)(param_1 + -0xc);
      }
      recovered_20c1d((int)puVar2,param_1,uVar3);
      recovered_20aee(param_1);
      return (int)puVar2;
    }
  }
  return 0;
}

