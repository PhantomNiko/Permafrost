#include "functions.h"
#undef DAT_00088e5d
#define DAT_00088e5d (*(char *)(0x88e5dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27dbd
 */

void recovered_27dbd(char param_1)

{
  unsigned char frame[64];

  byte bVar1;
  
  if (DAT_00088e5d == '\x01') {
    if (param_1 == '\n') {
      recovered_27dbd('\r');
    }
    do {
      bVar1 = in(0x3fd);
    } while ((bVar1 & 0x20) == 0);
    out(0x3f8,param_1);
  }
  return;
}

