#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3483e
 */

uint recovered_3483e(int *container,char *text)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    text = &DAT_00042614;
  }
  iVar1 = recovered_20ff4((int)text);
  uVar2 = recovered_28c0b(container,(int)text,iVar1);
  return uVar2;
}
