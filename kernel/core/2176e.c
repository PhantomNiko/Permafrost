#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#define local_10c (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2176e
 */

uint recovered_2176e(char *param_1)

{
  unsigned char frame[316];

  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    uVar2 = recovered_2440f(&DAT_0002ca9c);
    return uVar2;
  }
  uVar2 = 0;
  while( true ) {
    do {
      pcVar3 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar3;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      local_10c[uVar2] = '\0';
      recovered_2440f(local_10c);
      uVar2 = 0;
    }
    else if (uVar2 + 1 < 0x100) {
      local_10c[uVar2] = cVar1;
      uVar2 = uVar2 + 1;
    }
  }
  local_10c[uVar2] = '\0';
  uVar2 = recovered_2440f(local_10c);
  return uVar2;
}

