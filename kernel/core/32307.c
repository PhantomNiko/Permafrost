#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32307
 */

int recovered_32307(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_297af(param_1,param_2);
    if (-1 < (int)uVar1) {
      iVar2 = *(int *)(param_1 + 0xc) + uVar1 * 0x28 + 4;
    }
  }
  return iVar2;
}

