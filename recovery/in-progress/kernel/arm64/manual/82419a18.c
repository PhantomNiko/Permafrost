/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define dStack_38 (*(double *)(frame + 40))
#define dStack_40 (*(double *)(frame + 32))
#define dStack_50 (*(double *)(frame + 16))
#define lStack_48 (*(long *)(frame + 24))
void recovered_82419a18(long *param_1,double *param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  double *pdVar1;
  double dVar2;

  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    recovered_82419978(param_1,param_2);
    return;
  }
  pdVar1 = (double *)(param_1 + 6);
  if ((*pdVar1 != *param_2) || ((double)param_1[7] != param_2[1])) {
    lStack_48 = param_1[7];
    dStack_50 = *pdVar1;
    dStack_38 = param_2[1];
    dStack_40 = *param_2;
    recovered_82419f3c(param_1,&dStack_50);
    dVar2 = *param_2;
    param_1[7] = (long)param_2[1];
    *pdVar1 = dVar2;
  }
  recovered_82419ecc((long)param_1,param_2);
  return;
}
