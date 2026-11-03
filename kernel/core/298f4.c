#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x298f4
 */

float10 FUN_000298f4(int param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;

  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0x76)) {
    sVar1 = *(short *)(param_1 + 0x76);
  }
  return (float10)sVar1;
}
