#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x34457
 */

uint recovered_34457(int *param_1,char *param_2)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0004851c;
  }
  uVar1 = recovered_213fa((int)param_2);
  uVar1 = recovered_343c4(param_1,param_2,uVar1);
  return uVar1;
}
