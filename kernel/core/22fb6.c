#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22fb6
 */

int FUN_00022fb6(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;

  iVar3 = param_1 + -1;
  do {
    bVar4 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      return 0;
    }
    iVar1 = iVar3 + 1;
    pcVar2 = (char *)(iVar3 + 1);
    iVar3 = iVar1;
  } while (*pcVar2 != param_2);
  return iVar1;
}
