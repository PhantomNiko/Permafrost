#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28a82
 */

void recovered_28a82(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 * 0x14;
  while( true ) {
    iVar1 = iVar1 + -0x14;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) break;
    recovered_28a68(*param_1 + iVar1);
  }
  param_1[1] = 0;
  recovered_23194();
  return;
}
