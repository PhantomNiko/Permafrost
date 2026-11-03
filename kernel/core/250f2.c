#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x250f2
 */

undefined4 recovered_250f2(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  void *pvVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
LAB_00025159:
    uVar2 = 0;
  }
  else {
    pvVar1 = (void *)0x0;
    if (param_2 == 0 && param_3 != 0) {
      return 0;
    }
    if (param_3 != 0) {
      pvVar1 = recovered_20ae5(param_3);
      if (pvVar1 == (void *)0x0) goto LAB_00025159;
      recovered_20c1d((int)pvVar1,param_2,param_3);
    }
    recovered_24daf(param_1);
    *param_1 = 4;
    param_1[4] = pvVar1;
    param_1[5] = param_3;
    uVar2 = CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
  return uVar2;
}

