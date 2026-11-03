#include "functions.h"
#undef DAT_00006238
#define DAT_00006238 (*(uint8_t *)(0x6238U))
#undef _DAT_00006238
#define _DAT_00006238 (*(code * *)(0x6238U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22e99
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_22e99(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_2308a(0x38);
  if (((char)uVar1 == '\0') || (_DAT_00006238 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006238)(param_1,param_2,param_3);
  }
  return uVar1;
}
