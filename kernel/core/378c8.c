#include "functions.h"
#undef DAT_00073054
#define DAT_00073054 (*(char *)(0x73054U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x378c8
 */

void recovered_378c8(char param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (DAT_00073054 == '\x01') {
    if (param_1 == '\n') {
      recovered_378c8('\r');
    }
    do {
      bVar1 = in(0x3fd);
    } while ((bVar1 & 0x20) == 0);
    out(0x3f8,param_1);
  }
  return;
}
