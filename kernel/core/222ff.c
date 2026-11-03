#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x222ff
 */

undefined4 recovered_222ff(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  undefined4 uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 != 0)) &&
     (DAT_00047e7c != '\0')) {
    uVar2 = recovered_2236c(param_1);
    if ((uVar2 == 0xffffffff) ||
       ((DAT_00047dfc != 0 && ((*(byte *)(DAT_00047dfc + 0xfc + uVar2 * 0x108) & 2) != 0)))) {
      uVar1 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(DAT_00047dfc + 0xf4 + uVar2 * 0x108);
      uVar1 = *(undefined4 *)(DAT_00047dfc + 0xf8 + uVar2 * 0x108);
      *param_3 = uVar1;
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar1;
}
