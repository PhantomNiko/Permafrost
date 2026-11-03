#include "functions.h"
#undef DAT_0004ee10
#define DAT_0004ee10 (*(int *)(0x4ee10U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22705
 */

undefined4 recovered_22705(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 != 0)) &&
     (DAT_0004ee90 != '\0')) {
    iVar2 = recovered_22772((char *)param_1);
    if ((iVar2 == -1) ||
       ((DAT_0004ee10 != 0 && ((*(byte *)(DAT_0004ee10 + 0xfc + iVar2 * 0x108) & 2) != 0)))) {
      uVar1 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(DAT_0004ee10 + 0xf4 + iVar2 * 0x108);
      uVar1 = *(undefined4 *)(DAT_0004ee10 + 0xf8 + iVar2 * 0x108);
      *param_3 = uVar1;
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar1;
}
