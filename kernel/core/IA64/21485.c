#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21485
 */

int FUN_00021485(int param_1,char *param_2)

{
  unsigned char frame[64];

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_21460(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
