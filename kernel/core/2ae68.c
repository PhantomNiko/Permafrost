#include "functions.h"
#undef PTR_DAT_0005d048
#define PTR_DAT_0005d048 (*(uint8_t * *)(0x5d048U))
#define local_e (*(undefined2 *)(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ae68
 */

int recovered_2ae68(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_2ae3e(param_1,param_2);
  if (iVar1 == param_1[1] * 8 + *param_1) {
    recovered_2af60((int)param_1);
    local_e = 0;
    recovered_2af9c(param_1,param_2,&local_e);
    recovered_29c88(param_1 + 6,(undefined4 *)PTR_DAT_0005d048);
    recovered_2afee(param_1,param_1[1] + -1);
    iVar1 = *param_1 + param_1[1] * 8 + -8;
  }
  return iVar1 + 4;
}
