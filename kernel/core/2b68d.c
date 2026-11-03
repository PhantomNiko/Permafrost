#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b68d
 */

uint recovered_2b68d(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0002ca9c;
  }
  iVar1 = recovered_20ccf((int)param_2);
  uVar2 = recovered_2b6be(param_1,(int)param_2,iVar1);
  return uVar2;
}

