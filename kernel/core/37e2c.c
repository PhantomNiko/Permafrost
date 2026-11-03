#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37e2c
 */

uint recovered_37e2c(int *container,char *text)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    text = &DAT_0004851c;
  }
  iVar1 = recovered_213fa((int)text);
  uVar2 = recovered_29c6e(container,(int)text,iVar1);
  return uVar2;
}
