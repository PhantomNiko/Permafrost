#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22fda
 */

int FUN_00022fda(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (param_3 == iVar2) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + iVar2);
    if (bVar1 != *(byte *)(param_2 + iVar2)) break;
    iVar2 = iVar2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)bVar1 - (uint)*(byte *)(param_2 + iVar2);
}
