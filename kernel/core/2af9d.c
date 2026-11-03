#include "functions.h"
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2af9d
 */

undefined4 recovered_2af9d(int *param_1,int *param_2,int param_3)

{
  unsigned char frame[68];

  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  
  local_14 = 0;
  if (param_3 != 0 && (param_2 != (int *)0x0 && param_1 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 == 3) {
      if ((((*param_2 == 1) && (param_1[3] != 0)) && (uVar4 = param_2[1], 0 < (int)uVar4)) &&
         (uVar5 = recovered_20ccf(param_1[3]), uVar4 <= uVar5)) {
        bVar2 = recovered_24f5c((undefined4 *)param_3,(undefined1 *)(param_1[3] + param_2[1] + -1),1
                               );
        return CONCAT31(extraout_var,bVar2);
      }
    }
    else if (iVar1 == 8) {
      if ((param_1[7] == 0) || (bVar2 = recovered_288cc(param_2,&local_14), !bVar2)) {
        recovered_20aee(local_14);
      }
      else {
        uVar4 = recovered_2b750(param_1[7],local_14);
        recovered_20aee(local_14);
        if (-1 < (int)uVar4) {
          uVar3 = recovered_25048((undefined4 *)param_3,
                                  (undefined4 *)(*(int *)(param_1[7] + 0xc) + uVar4 * 0x24 + 4));
          return uVar3;
        }
      }
    }
    else if (((iVar1 == 7) && (*param_2 == 1)) &&
            ((iVar1 = param_1[6], iVar1 != 0 &&
             ((uVar4 = param_2[1], 0 < (int)uVar4 && (uVar4 <= *(uint *)(iVar1 + 4))))))) {
      uVar3 = recovered_25048((undefined4 *)param_3,
                              (undefined4 *)(*(int *)(iVar1 + 0xc) + uVar4 * 0x20 + -0x20));
      return uVar3;
    }
  }
  return 0;
}

