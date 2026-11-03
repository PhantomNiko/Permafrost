#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20d5a
 */

int FUN_00020d5a(int param_1,char *param_2)

{
  unsigned char frame[64];

  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_20d35(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

