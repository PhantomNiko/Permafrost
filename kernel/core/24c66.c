#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24c66
 */

uint recovered_24c66(undefined4 *param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  undefined3 extraout_var = 0;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0002ca9c;
  }
  iVar2 = recovered_20ccf((int)param_2);
  bVar1 = recovered_24f5c(param_1,param_2,iVar2);
  return CONCAT31(extraout_var,bVar1);
}

