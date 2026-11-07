/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82419ecc(long param_1,double *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    dVar2 = param_2[1];
    dVar1 = *param_2;
    *(double *)(param_1 + 0x40) = dVar1;
    *(double *)(param_1 + 0x48) = dVar1;
    *(double *)(param_1 + 0x50) = dVar2;
    *(double *)(param_1 + 0x58) = dVar2;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return;
  }
  dVar1 = *param_2;
  if (*(double *)(param_1 + 0x40) <= *param_2) {
    dVar1 = *(double *)(param_1 + 0x40);
  }
  *(double *)(param_1 + 0x40) = dVar1;
  dVar1 = *param_2;
  if (*param_2 <= *(double *)(param_1 + 0x48)) {
    dVar1 = *(double *)(param_1 + 0x48);
  }
  *(double *)(param_1 + 0x48) = dVar1;
  dVar1 = param_2[1];
  if (*(double *)(param_1 + 0x50) <= param_2[1]) {
    dVar1 = *(double *)(param_1 + 0x50);
  }
  *(double *)(param_1 + 0x50) = dVar1;
  dVar1 = param_2[1];
  if (param_2[1] <= *(double *)(param_1 + 0x58)) {
    dVar1 = *(double *)(param_1 + 0x58);
  }
  *(double *)(param_1 + 0x58) = dVar1;
  return;
}
