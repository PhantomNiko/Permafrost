#include "functions.h"
#undef DAT_00045f30
#define DAT_00045f30 (*(uint8_t *)(0x45f30U))
#undef _DAT_00045f30
#define _DAT_00045f30 (*(float *)(0x45f30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_21570(double value,int *exponent)

{
  unsigned char frame[64];

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
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_00045f30) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_00045f30)); dVar1 = dVar1 + dVar1) {
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
