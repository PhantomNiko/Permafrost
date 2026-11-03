#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d07
 */

void recovered_28d07(int param_1,int param_2,undefined1 *param_3,undefined1 param_4,undefined1 param_5,
               undefined1 param_6)

{
  unsigned char frame[64];

  int iVar1;
  undefined1 *puVar2;

  puVar2 = &DAT_0004851c;
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = recovered_213fa((int)puVar2);
  recovered_28ff6(param_1,param_2,(int)puVar2,iVar1,param_4,param_5,param_6);
  return;
}
