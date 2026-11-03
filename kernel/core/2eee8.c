#include "functions.h"
#undef DAT_000570b0
#define DAT_000570b0 (*(uint8_t *)(0x570b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2eee8
 */

int recovered_2eee8(double param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;
  uint uVar2;

  sVar1 = -0x8000;
  if ((-1.0 < param_1) && (sVar1 = 0x7fff, param_1 < 1.0)) {
    uVar2 = recovered_21c18(param_1 * *(double *)(&DAT_000570b0 + (uint)(param_1 < 0.0) * 8));
    sVar1 = (short)uVar2;
  }
  return (int)sVar1;
}
