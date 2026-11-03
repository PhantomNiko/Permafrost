#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2df92
 */

void * recovered_2df92(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_23162(param_1 * 0xc);
  }
  return pvVar1;
}
