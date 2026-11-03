#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x229e9
 */

int recovered_229e9(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; param_2 != iVar3; iVar3 = iVar3 + 1) {
        uVar2 = recovered_22a56(param_4);
        if (uVar2 == 0xffffffff) {
          return iVar1;
        }
        *(char *)(param_1 + iVar3) = (char)uVar2;
      }
      param_1 = param_1 + param_2;
    }
    iVar1 = param_3;
  }
  return iVar1;
}
