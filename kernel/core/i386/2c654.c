#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c654
 */

uint recovered_2c654(uint *value,char *text)

{
  unsigned char frame[64];

  uint uVar1;

  if (text == (char *)0x0) {
    text = &DAT_00046264;
  }
  uVar1 = recovered_213fa((int)text);
  uVar1 = recovered_2c6f8(value,text,uVar1);
  return uVar1;
}
