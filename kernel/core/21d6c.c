#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d6c
 */

int recovered_21d6c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char cVar2;

  cVar2 = (char)param_1;
  if ((byte)(cVar2 - 0x30U) < 10) {
    iVar1 = param_1 + -0x30;
  }
  else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    iVar1 = param_1 + -0x57;
  }
  else {
    iVar1 = param_1 + -0x37;
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      iVar1 = -1;
    }
  }
  return iVar1;
}
