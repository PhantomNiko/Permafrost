#include "functions.h"
#undef DAT_0005d7a0
#define DAT_0005d7a0 (*(uint8_t *)(0x5d7a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2360d
 */

bool recovered_2360d(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;

  if (param_2 == (undefined4 *)0x0) {
    return true;
  }
  do {
    puVar5 = param_1;
    if (puVar5 == param_2) {
      return puVar5 != (undefined4 *)0x0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      return false;
    }
    iVar3 = puVar5[1];
    iVar4 = param_2[1];
    if (iVar4 == 0 || iVar3 == 0) {
      if (iVar3 == iVar4) {
        return true;
      }
    }
    else {
      iVar6 = 0;
      do {
        cVar1 = *(char *)(iVar3 + iVar6);
        cVar2 = *(char *)(iVar4 + iVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) {
            return true;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (cVar1 == cVar2);
    }
    param_1 = (undefined4 *)0x0;
    if ((undefined *)*puVar5 == &DAT_0005d7a0) {
      param_1 = (undefined4 *)puVar5[2];
    }
  } while( true );
}
