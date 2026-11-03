#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24f5c
 */

bool recovered_24f5c(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64];

  int iVar1;
  undefined1 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  puVar2 = &DAT_0002ca9c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_24f9e((int)puVar2,param_3);
  if (iVar1 != 0) {
    recovered_24daf(param_1);
    *param_1 = 3;
    param_1[3] = iVar1;
  }
  return iVar1 != 0;
}

