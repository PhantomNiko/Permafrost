#include "functions.h"
#undef DAT_00006240
#define DAT_00006240 (*(uint8_t *)(0x6240U))
#undef DAT_0005d7c0
#define DAT_0005d7c0 (*(int *)(0x5d7c0U))
#undef _DAT_00006240
#define _DAT_00006240 (*(code * *)(0x6240U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2245d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2245d(byte param_1)

{
  unsigned char frame[568] = {0};

  int iVar1;
  undefined4 uVar2;

  if ((DAT_0005d7c0 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_0005d7c0 == 0) {
      iVar1 = 0;
    }
    else {
      recovered_21348((int)local_208,0x5d7c4,DAT_0005d7c0);
      iVar1 = DAT_0005d7c0;
    }
    local_208[iVar1] = 0;
    uVar2 = recovered_2308a(0x40);
    if (((char)uVar2 != '\0') && (_DAT_00006240 != (code *)0x0)) {
      (*_DAT_00006240)(local_208);
    }
    DAT_0005d7c0 = 0;
  }
  return;
}
