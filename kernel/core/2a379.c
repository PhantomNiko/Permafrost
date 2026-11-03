#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a379
 */

uint recovered_2a379(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint extraout_EAX = 0;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0004851c;
  }
  uVar1 = recovered_213fa((int)param_2);
  recovered_2a40d(param_1,(int)param_2,uVar1,param_3);
  return extraout_EAX;
}
