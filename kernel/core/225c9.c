#include "functions.h"
#undef DAT_00006244
#define DAT_00006244 (*(uint8_t *)(0x6244U))
#undef _DAT_00006244
#define _DAT_00006244 (*(code * *)(0x6244U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x225c9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_225c9(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_224df();
    uVar1 = recovered_2308a(0x44);
    if (((char)uVar1 != '\0') && (_DAT_00006244 != (code *)0x0)) {
      iVar2 = (*_DAT_00006244)(param_1,param_2,param_3,param_4);
      return iVar2 != 0;
    }
  }
  return false;
}
