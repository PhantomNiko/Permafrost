#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c6d8
 */

uint recovered_2c6d8(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0002ca9c;
  }
  uVar1 = recovered_20ccf((int)param_2);
  uVar1 = recovered_26e2b(param_1,param_2,uVar1);
  return uVar1;
}

