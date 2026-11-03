#include "functions.h"
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(undefined4 *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
#define local_30 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b252
 */

void recovered_2b252(int *param_1,double *param_2)

{
  unsigned char frame[96] = {0};

  int iVar1;

  if ((char)param_1[3] == '\0') {
    recovered_2b1ac(param_1,param_2);
    return;
  }
  if ((*(double *)(param_1 + 8) == *param_2) && (!NAN(*(double *)(param_1 + 8)) && !NAN(*param_2)))
  {
    if ((*(double *)(param_1 + 10) == param_2[1]) &&
       (!NAN(*(double *)(param_1 + 10)) && !NAN(param_2[1]))) goto LAB_0002b2d4;
  }
  local_24 = param_1[0xb];
  local_28 = param_1[10];
  local_30 = param_1[8];
  local_2c = param_1[9];
  local_20 = *(undefined4 *)param_2;
  local_1c = *(undefined4 *)((int)param_2 + 4);
  local_18 = *(undefined4 *)(param_2 + 1);
  local_14 = *(undefined4 *)((int)param_2 + 0xc);
  recovered_2b748(param_1,&local_30);
  param_1[0xb] = *(int *)((int)param_2 + 0xc);
  param_1[10] = *(int *)(param_2 + 1);
  iVar1 = *(int *)param_2;
  param_1[9] = *(int *)((int)param_2 + 4);
  param_1[8] = iVar1;
LAB_0002b2d4:
  FUN_0002b6e8((int)param_1,param_2);
  return;
}
