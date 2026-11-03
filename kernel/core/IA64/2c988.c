#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c988
 */

uint recovered_2c988(int *param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  uint uVar3;

  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      if (((*(char *)(*param_1 + 0x28 + iVar2) == '\x01') &&
          (iVar1 = *(int *)(*param_1 + iVar2), iVar1 != 0)) &&
         (iVar1 = recovered_21415(iVar1,param_2), iVar1 == 0)) {
        return uVar3;
      }
      iVar2 = iVar2 + 0x2c;
    }
  }
  return 0xffffffff;
}
