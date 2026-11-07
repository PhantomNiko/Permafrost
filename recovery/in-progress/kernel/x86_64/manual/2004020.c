/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define _DAT_020a14e0 (*(uint *)(0x20eaec0U))
#define uRam00000000020a14e4 (*(uint32_t *)(0x20eaec4U))
undefined8 recovered_2004020(float param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)param_1;
  if (param_1 < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam00000000020a14e4,
                             SUB84(dVar2,0) ^ _DAT_020a14e0));
  }
  iVar1 = 0;
  if (DAT_020a1468 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_020a1460;
      iVar1 = iVar1 + 1;
    } while (DAT_020a1468 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_020a1460)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam00000000020a14e4,_DAT_020a14e0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}
