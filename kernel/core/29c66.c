#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29c66
 */

void * recovered_29c66(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_23162(param_1 << 2);
  }
  return pvVar1;
}
