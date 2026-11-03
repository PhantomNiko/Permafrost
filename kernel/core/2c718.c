#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c718
 */

uint recovered_2c718(uint *value,char *text)

{
  unsigned char frame[64];

  uint uVar1;

  if (text == (char *)0x0) {
    text = &DAT_0004851c;
  }
  uVar1 = recovered_213fa((int)text);
  uVar1 = recovered_2c7bc(value,text,uVar1);
  return uVar1;
}
