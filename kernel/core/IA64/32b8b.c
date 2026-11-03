#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32b8b
 */

uint recovered_32b8b(int *param_1,char *param_2)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0004627c;
  }
  uVar1 = recovered_213fa((int)param_2);
  uVar1 = recovered_32af8(param_1,param_2,uVar1);
  return uVar1;
}
