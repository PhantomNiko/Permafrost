#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ba0b
 */

undefined4 recovered_2ba0b(int *param_1,int *param_2,int *param_3,char param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != (int *)0x0)) {
    if (*param_1 == 3) {
      if ((((*param_2 == 1) && (*param_3 == 3)) && (param_1[3] != 0)) && (param_3[3] != 0)) {
        uVar2 = recovered_20ccf(param_1[3]);
        if (param_2[1] < 1) {
          return 0;
        }
        if (uVar2 < (uint)param_2[1]) {
          return 0;
        }
        iVar3 = recovered_20ccf(param_3[3]);
        if (iVar3 == 1) {
          puVar1 = (undefined1 *)param_3[3];
          *(undefined1 *)(param_1[3] + -1 + param_2[1]) = *puVar1;
          return CONCAT31((int3)((uint)puVar1 >> 8),1);
        }
      }
    }
    else {
      puVar4 = (undefined4 *)recovered_2c11f(param_1,param_2,param_4);
      if (puVar4 != (undefined4 *)0x0) {
        uVar5 = recovered_25048(puVar4,param_3);
        return uVar5;
      }
    }
  }
  return 0;
}

