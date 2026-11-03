#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ad2e
 */

uint recovered_2ad2e(uint *value,char *text)

{
  unsigned char frame[64];

  uint uVar1;

  if (text == (char *)0x0) {
    text = &DAT_00042614;
  }
  uVar1 = recovered_20ff4((int)text);
  uVar1 = recovered_2b08b(value,text,uVar1);
  return uVar1;
}
