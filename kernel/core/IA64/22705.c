#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22705
 */

undefined4 recovered_22705(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  undefined4 uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 != 0)) &&
     (DAT_0004ce90 != '\0')) {
    uVar2 = recovered_22772(param_1);
    if ((uVar2 == 0xffffffff) ||
       ((DAT_0004ce10 != 0 && ((*(byte *)(DAT_0004ce10 + 0xfc + uVar2 * 0x108) & 2) != 0)))) {
      uVar1 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(DAT_0004ce10 + 0xf4 + uVar2 * 0x108);
      uVar1 = *(undefined4 *)(DAT_0004ce10 + 0xf8 + uVar2 * 0x108);
      *param_3 = uVar1;
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar1;
}
