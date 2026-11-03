#include "functions.h"
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22ecc
 */

undefined4 FUN_00022ecc(int param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[76] = {0};

  int iVar1;
  void *pvVar2;

  if (param_3 != (int *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_213af((int)&local_1c,0,0xc);
    iVar1 = recovered_228e6(param_1,&local_1c);
    if (iVar1 != 0) {
      pvVar2 = recovered_211fa(local_18 + (uint)(local_18 == 0));
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      iVar1 = 0;
      if (local_18 != 0) {
        recovered_21348((int)pvVar2,local_1c,local_18);
        iVar1 = local_18;
      }
      *param_2 = pvVar2;
      *param_3 = iVar1;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}
