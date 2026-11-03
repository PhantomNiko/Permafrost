#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x214f9
 */

int recovered_214f9(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + iVar2);
    if ((bVar1 == 0) || (bVar1 != *(byte *)(param_2 + iVar2))) break;
    iVar2 = iVar2 + 1;
  }
  return (uint)bVar1 - (uint)*(byte *)(param_2 + iVar2);
}
