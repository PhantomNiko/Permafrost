#include "functions.h"
#undef DAT_0005c7a8
#define DAT_0005c7a8 (*(char *)(0x5c7a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d4c
 */

void recovered_28d4c(char param_1)

{
  unsigned char frame[64];

  byte bVar1;

  if (DAT_0005c7a8 == '\x01') {
    if (param_1 == '\n') {
      recovered_28d4c('\r');
    }
    do {
      bVar1 = in(0x3fd);
    } while ((bVar1 & 0x20) == 0);
    out(0x3f8,param_1);
  }
  return;
}
