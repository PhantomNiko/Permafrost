#include "functions.h"
#undef DAT_000637c8
#define DAT_000637c8 (*(char *)(0x637c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29daf
 */

void recovered_29daf(char param_1)

{
  unsigned char frame[64];

  byte bVar1;

  if (DAT_000637c8 == '\x01') {
    if (param_1 == '\n') {
      recovered_29daf('\r');
    }
    do {
      bVar1 = in(0x3fd);
    } while ((bVar1 & 0x20) == 0);
    out(0x3f8,param_1);
  }
  return;
}
