#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3aa46
 */

undefined4 recovered_3aa46(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  undefined4 uVar2;

  if (param_1 == (undefined4 *)0x0) {
LAB_0003aaad:
    uVar2 = 0;
  }
  else {
    pvVar1 = (void *)0x0;
    if (param_2 == 0 && param_3 != 0) {
      return 0;
    }
    if (param_3 != 0) {
      pvVar1 = recovered_211fa(param_3);
      if (pvVar1 == (void *)0x0) goto LAB_0003aaad;
      recovered_21348((int)pvVar1,param_2,param_3);
    }
    recovered_3352a(param_1);
    *param_1 = 4;
    param_1[4] = pvVar1;
    param_1[5] = param_3;
    uVar2 = CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
  return uVar2;
}
