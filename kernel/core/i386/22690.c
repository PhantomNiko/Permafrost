#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22690
 */

int recovered_22690(char *path,uint *out)

{
  unsigned char frame[72];

  undefined4 uVar1;
  uint uVar2;
  int iVar3;

  local_18 = 0;
  local_14 = 0;
  iVar3 = 0;
  if (out != (uint *)0x0 && path != (char *)0x0) {
    uVar1 = recovered_22705((int)path,&local_18,&local_14);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_22772((int)path);
      if (uVar2 != 0xffffffff) {
        *out = local_18;
        out[1] = local_14;
        out[2] = *(uint *)(DAT_0004ce10 + 0xfc + uVar2 * 0x108);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}
