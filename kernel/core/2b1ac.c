#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b1ac
 */

longdouble recovered_2b1ac(int *param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  float10 extraout_ST0 = 0;

  if ((char)param_1[3] == '\x01') {
    if ((*(double *)(param_1 + 8) == *(double *)(param_1 + 4)) &&
       (!NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_1 + 4)))) {
      if ((*(double *)(param_1 + 10) == *(double *)(param_1 + 6)) &&
         (!NAN(*(double *)(param_1 + 10)) && !NAN(*(double *)(param_1 + 6)))) goto LAB_0002b1e5;
    }
    recovered_2b252(param_1,(double *)(param_1 + 4));
  }
LAB_0002b1e5:
  param_1[7] = *(int *)((int)param_2 + 0xc);
  param_1[6] = *(int *)(param_2 + 1);
  iVar1 = *(int *)param_2;
  param_1[5] = *(int *)((int)param_2 + 4);
  param_1[4] = iVar1;
  iVar1 = *(int *)((int)param_2 + 4);
  param_1[8] = *(int *)param_2;
  param_1[9] = iVar1;
  param_1[10] = *(int *)(param_2 + 1);
  param_1[0xb] = *(int *)((int)param_2 + 0xc);
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_0002b6e8((int)param_1,param_2);
  return (longdouble)(double)extraout_ST0;
}
