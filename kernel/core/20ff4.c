#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20ff4
 */

int recovered_20ff4(int param_1)

{
  unsigned char frame[64];

  int iVar1;

  iVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + iVar1) == '\0') break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
