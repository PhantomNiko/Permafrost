#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47509
 */

undefined4 recovered_47509(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;

  if (param_3 != 0 && (param_2 != 0 && param_1 != (int *)0x0)) {
    uVar1 = recovered_2ca14(param_1,param_2);
    if (-1 < (int)uVar1) {
      iVar3 = *param_1;
LAB_0004753b:
      uVar2 = recovered_2c5b3((uint *)(iVar3 + uVar1 * 0x2c + 4),(uint *)param_3);
      return uVar2;
    }
    uVar2 = recovered_476d9(param_1,param_1[1] + 1);
    if ((char)uVar2 != '\0') {
      iVar3 = recovered_213fa(param_2);
      pvVar4 = recovered_29c22(param_2,iVar3);
      if (pvVar4 != (void *)0x0) {
        iVar3 = *param_1;
        uVar1 = param_1[1];
        param_1[1] = uVar1 + 1;
        *(void **)(iVar3 + uVar1 * 0x2c) = pvVar4;
        *(undefined1 *)(iVar3 + 0x28 + uVar1 * 0x2c) = 1;
        goto LAB_0004753b;
      }
    }
  }
  return 0;
}
