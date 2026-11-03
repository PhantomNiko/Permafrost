#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a70d
 */

uint recovered_2a70d(byte *param_1)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_1 == (byte *)0x0) {
    return 0x811c9dc5;
  }
  uVar1 = 0x811c9dc5;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    uVar1 = (uVar1 ^ *param_1) * 0x1000193;
  }
  return uVar1;
}
