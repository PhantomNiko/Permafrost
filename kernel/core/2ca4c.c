#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ca4c
 */

void recovered_2ca4c(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 * 0x18;
  while( true ) {
    iVar1 = iVar1 + -0x18;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) break;
    recovered_2ca80((undefined4 *)(*param_1 + iVar1));
  }
  param_1[1] = 0;
  return;
}
