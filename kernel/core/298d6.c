#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x298d6
 */

float10 FUN_000298d6(int param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;
  short sVar2;

  sVar1 = (short)*(undefined4 *)(param_1 + 0x74);
  sVar2 = 0;
  if (0 < sVar1) {
    sVar2 = sVar1;
  }
  return (float10)sVar2;
}
