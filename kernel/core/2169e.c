#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2169e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_2169e(double value,int *exponent)

{
  unsigned char frame[64] = {0};

  double dVar1;
  int iVar2;

  if (exponent != (int *)0x0) {
    *exponent = 0;
  }
  if ((value != 0.0) || (dVar1 = 0.0, NAN(value))) {
    dVar1 = value;
    if (value < -value) {
      dVar1 = -value;
    }
    iVar2 = 0;
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_00056810) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_00056810)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (exponent != (int *)0x0) {
      *exponent = iVar2;
    }
    if (value < 0.0) {
      dVar1 = -dVar1;
    }
  }
  return dVar1;
}
