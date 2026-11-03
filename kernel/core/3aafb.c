#include "functions.h"
#undef DAT_00073054
#define DAT_00073054 (*(byte *)(0x73054U))
#undef DAT_000938f8
#define DAT_000938f8 (*(char *)(0x938f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3aafb
 */

undefined4 recovered_3aafb(char *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  char cVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((param_1 != (char *)0x0) && ((DAT_00073054 & 1) != 0)) {
    do {
      bVar1 = in(0x3fd);
      if ((bVar1 & 1) == 0) {
        return 0;
      }
      cVar2 = in(0x3f8);
    } while ((DAT_000938f8 == '\x01') && (DAT_000938f8 = '\0', cVar2 == '\n'));
    *param_1 = cVar2;
    uVar3 = 1;
  }
  return uVar3;
}
