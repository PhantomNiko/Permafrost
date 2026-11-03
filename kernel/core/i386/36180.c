#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36180
 */

uint recovered_36180(int *container,char *text)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    text = &DAT_00046264;
  }
  iVar1 = recovered_213fa((int)text);
  uVar2 = recovered_29c74(container,(int)text,iVar1);
  return uVar2;
}
