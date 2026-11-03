#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d28
 */

byte recovered_28d28(char param_1)

{
  unsigned char frame[64];

  byte bVar1;
  char cVar2;

  bVar1 = param_1 - 0x30;
  if (9 < bVar1) {
    cVar2 = param_1 + -0x20;
    if (0x19 < (byte)(param_1 + 0x9fU)) {
      cVar2 = param_1;
    }
    bVar1 = cVar2 - 0x37;
  }
  return bVar1;
}
