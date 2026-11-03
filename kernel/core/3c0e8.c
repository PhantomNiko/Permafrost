#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c0e8
 */

void recovered_3c0e8(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  if ((param_1 != 0) && (recovered_213af(param_1,0,0xd), param_2 != 0)) {
    iVar1 = 0xc;
    do {
      iVar2 = iVar1;
      if (iVar2 == 0) break;
      iVar1 = iVar2 + -1;
    } while (*(char *)(param_2 + -1 + iVar2) == '\0');
    recovered_21348(param_1,param_2,iVar2);
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  return;
}
