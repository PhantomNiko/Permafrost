#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x361b8
 */

uint recovered_361b8(int *container,char *text)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    text = &DAT_0004627c;
  }
  iVar1 = recovered_213fa((int)text);
  uVar2 = recovered_29c88(container,(int)text,iVar1);
  return uVar2;
}
