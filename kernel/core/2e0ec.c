#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e0ec
 */

bool recovered_2e0ec(int param_1)

{
  unsigned char frame[64];

  char cVar1;
  int iVar2;

  if ((param_1 == 0) || (iVar2 = 0, *(short *)(param_1 + 0x1fe) != -0x55ab)) {
    return false;
  }
  for (; (iVar2 != 0x40 &&
         (((cVar1 = *(char *)(param_1 + 0x1c2 + iVar2), cVar1 == -0x12 || (cVar1 == '\0')) ||
          (*(int *)(param_1 + 0x1ca + iVar2) == 0)))); iVar2 = iVar2 + 0x10) {
  }
  return iVar2 != 0x40;
}
