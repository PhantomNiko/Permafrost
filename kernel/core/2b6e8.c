#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b6e8
 */

void FUN_0002b6e8(int param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  if (*(char *)(param_1 + 0xd) == '\0') {
    dVar1 = *param_2;
    *(double *)(param_1 + 0x38) = dVar1;
    *(double *)(param_1 + 0x30) = dVar1;
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x48) = dVar1;
    *(double *)(param_1 + 0x40) = dVar1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x30);
    if (*param_2 < *(double *)(param_1 + 0x30)) {
      dVar1 = *param_2;
    }
    *(double *)(param_1 + 0x30) = dVar1;
    dVar1 = *(double *)(param_1 + 0x38);
    if (*(double *)(param_1 + 0x38) < *param_2) {
      dVar1 = *param_2;
    }
    *(double *)(param_1 + 0x38) = dVar1;
    dVar1 = *(double *)(param_1 + 0x40);
    if (param_2[1] < *(double *)(param_1 + 0x40)) {
      dVar1 = param_2[1];
    }
    *(double *)(param_1 + 0x40) = dVar1;
    dVar1 = *(double *)(param_1 + 0x48);
    if (*(double *)(param_1 + 0x48) < param_2[1]) {
      dVar1 = param_2[1];
    }
    *(double *)(param_1 + 0x48) = dVar1;
  }
  return;
}
