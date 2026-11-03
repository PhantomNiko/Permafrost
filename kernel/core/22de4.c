#include "functions.h"
#undef DAT_0000623c
#define DAT_0000623c (*(uint8_t *)(0x623cU))
#undef _DAT_0000623c
#define _DAT_0000623c (*(code * *)(0x623cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22de4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_22de4(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_2308a(0x3c);
  if (((char)uVar1 == '\0') || (_DAT_0000623c == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_0000623c)(param_1);
  }
  return uVar1;
}
