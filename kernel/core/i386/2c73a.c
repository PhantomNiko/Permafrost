#include "functions.h"
#undef DAT_000617c8
#define DAT_000617c8 (*(byte *)(0x617c8U))
#undef DAT_0008206c
#define DAT_0008206c (*(char *)(0x8206cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c73a
 */

undefined4 recovered_2c73a(char *param_1)

{
  unsigned char frame[64];

  byte bVar1;
  char cVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((param_1 != (char *)0x0) && ((DAT_000617c8 & 1) != 0)) {
    do {
      bVar1 = in(0x3fd);
      if ((bVar1 & 1) == 0) {
        return 0;
      }
      cVar2 = in(0x3f8);
    } while ((DAT_0008206c == '\x01') && (DAT_0008206c = '\0', cVar2 == '\n'));
    *param_1 = cVar2;
    uVar3 = 1;
  }
  return uVar3;
}
