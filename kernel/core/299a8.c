#include "functions.h"
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(int *)(frame + 20))
#define local_10 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x299a8
 */

int * recovered_299a8(int *param_1,int *param_2)

{
  unsigned char frame[72] = {0};

  int iVar1;
  int iVar2;

  if (param_1 != param_2) {
    recovered_29a3a(&local_18,param_2);
    iVar1 = *param_1;
    *param_1 = local_18;
    param_1[1] = local_14;
    iVar2 = param_1[2];
    param_1[2] = local_10;
    local_14 = 0;
    local_18 = iVar1;
    local_10 = iVar2;
    recovered_23194();
  }
  return param_1;
}
