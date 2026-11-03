#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x416d3
 */

undefined4 recovered_416d3(int *param_1,int *param_2,int *param_3,byte param_4)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != (int *)0x0)) {
    if (*param_1 == 3) {
      if ((((*param_2 == 1) && (*param_3 == 3)) && (param_1[3] != 0)) && (param_3[3] != 0)) {
        uVar2 = recovered_214de(param_1[3]);
        if (param_2[1] < 1) {
          return 0;
        }
        if (uVar2 < (uint)param_2[1]) {
          return 0;
        }
        iVar3 = recovered_214de(param_3[3]);
        if (iVar3 == 1) {
          puVar1 = (undefined1 *)param_3[3];
          *(undefined1 *)(param_1[3] + -1 + param_2[1]) = *puVar1;
          return CONCAT31((int3)((uint)puVar1 >> 8),1);
        }
      }
    }
    else {
      puVar4 = (uint *)recovered_414e6(param_1,param_2,param_4);
      if (puVar4 != (uint *)0x0) {
        uVar5 = recovered_3a8b0(puVar4,(uint *)param_3);
        return uVar5;
      }
    }
  }
  return 0;
}
