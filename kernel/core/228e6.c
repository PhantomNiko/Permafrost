#include "functions.h"
#undef DAT_00006234
#define DAT_00006234 (*(uint8_t *)(0x6234U))
#undef _DAT_00006234
#define _DAT_00006234 (*(code * *)(0x6234U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x228e6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_228e6(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_2308a(0x34);
  if (((char)uVar1 == '\0') || (_DAT_00006234 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006234)(param_1,param_2);
  }
  return uVar1;
}
