#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3aa15
 */

uint recovered_3aa15(uint *value,char *text)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (text == (char *)0x0) {
    text = &DAT_00057364;
  }
  uVar1 = recovered_214de((int)text);
  uVar1 = recovered_3aab9(value,text,uVar1);
  return uVar1;
}
