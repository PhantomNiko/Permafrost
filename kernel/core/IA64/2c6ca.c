#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c6ca
 */

uint recovered_2c6ca(uint *value,char *text)

{
  unsigned char frame[64];

  uint uVar1;

  if (text == (char *)0x0) {
    text = &DAT_0004627c;
  }
  uVar1 = recovered_213fa((int)text);
  uVar1 = recovered_2c76e(value,text,uVar1);
  return uVar1;
}
