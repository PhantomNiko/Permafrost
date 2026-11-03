#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x46111
 */

uint recovered_46111(int *container,char *text)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    text = &DAT_00057364;
  }
  iVar1 = recovered_214de((int)text);
  uVar2 = recovered_37787(container,(int)text,iVar1);
  return uVar2;
}
