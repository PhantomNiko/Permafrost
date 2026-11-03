#include "functions.h"
#undef DAT_0004f1cc
#define DAT_0004f1cc (*(char *)(0x4f1ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x244bd
 */

void recovered_244bd(char param_1)

{
  unsigned char frame[64];

  byte bVar1;
  
  if (DAT_0004f1cc == '\x01') {
    if (param_1 == '\n') {
      recovered_244bd('\r');
    }
    do {
      bVar1 = in(0x3fd);
    } while ((bVar1 & 0x20) == 0);
    out(0x3f8,param_1);
  }
  return;
}

