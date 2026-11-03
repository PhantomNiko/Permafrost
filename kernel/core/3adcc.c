#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3adcc
 */

undefined4 recovered_3adcc(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  undefined4 uVar2;

  if ((((param_1 != (int *)0x0) && (*param_1 == 8)) && (param_3 != 0)) &&
     ((param_2 != 0 && (param_1[7] != 0)))) {
    puVar1 = (uint *)recovered_3a77f(param_1[7],param_2,'\x01');
    if (puVar1 != (uint *)0x0) {
      uVar2 = recovered_3a8b0(puVar1,(uint *)param_3);
      return uVar2;
    }
  }
  return 0;
}
