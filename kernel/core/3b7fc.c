#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3b7fc
 */

int recovered_3b7fc(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;

  iVar2 = 0;
  if (param_2 != 0 && param_1 != 0) {
    while( true ) {
      cVar4 = *(char *)(param_1 + iVar2);
      cVar1 = *(char *)(param_2 + iVar2);
      if ((cVar4 == '\0') || (cVar1 == '\0')) break;
      cVar3 = cVar4 + -0x20;
      if (0x19 < (byte)(cVar4 + 0x9fU)) {
        cVar3 = cVar4;
      }
      cVar4 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar4 = cVar1;
      }
      if (cVar3 != cVar4) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
    iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),cVar4 == '\0' && cVar1 == '\0');
  }
  return iVar2;
}
