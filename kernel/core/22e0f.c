#include "functions.h"
#undef PTR_DAT_0005d000
#define PTR_DAT_0005d000 (*(uint8_t * *)(0x5d000U))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22e0f
 */

undefined4 FUN_00022e0f(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_0005d000 = 0x16;
  }
  else {
    recovered_213af((int)&local_1c,0,0xc);
    iVar1 = recovered_228e6(param_1,&local_1c);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_22e99(param_2,local_1c,local_18);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_22de4(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_0005d000 = uVar2;
  }
  return 0xffffffff;
}
