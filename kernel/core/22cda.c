#include "functions.h"
#undef PTR_DAT_0005d000
#define PTR_DAT_0005d000 (*(uint8_t * *)(0x5d000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22cda
 */

undefined4 recovered_22cda(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = recovered_22e99(param_1 + 1,param_1[0x3e],param_1[0x40]);
    if (iVar1 == 0) {
      *(undefined4 *)PTR_DAT_0005d000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
  }
  return uVar2;
}
