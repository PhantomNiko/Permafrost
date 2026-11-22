/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define dStack_30 (*(double *)(frame + 32))
#define lStack_28 (*(long *)(frame + 40))
#define lStack_38 (*(long *)(frame + 24))
#define local_40 (*(double *)(frame + 16))
void recovered_82419ab4(long *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};


  if ((char)param_1[3] == '\x01') {
    if (((double)param_1[6] != (double)param_1[4]) || ((double)param_1[7] != (double)param_1[5])) {
      lStack_38 = param_1[7];
      local_40 = (double)param_1[6];
      lStack_28 = param_1[5];
      dStack_30 = (double)param_1[4];
      recovered_82419f3c(param_1,&local_40);
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[7] = param_1[5];
  param_1[6] = param_1[4];
  return;
}
