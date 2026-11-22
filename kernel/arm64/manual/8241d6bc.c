/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df18 (*(double *)(0x824730b0U))
int recovered_8241d6bc(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  long lVar2;
  double dVar3;

  if (param_1 <= -1.0) {
    sVar1 = -0x8000;
  }
  else if (1.0 <= param_1) {
    sVar1 = 0x7fff;
  }
  else {
    dVar3 = 32768.0;
    if (0.0 <= param_1) {
      dVar3 = DAT_4044df18;
    }
    lVar2 = recovered_8240153c(dVar3 * param_1);
    sVar1 = (short)lVar2;
  }
  return (int)sVar1;
}
