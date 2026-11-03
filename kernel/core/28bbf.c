#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28bbf
 */

void * recovered_28bbf(int param_1,int param_2)

{
  unsigned char frame[64];

  void *pvVar1;

  pvVar1 = recovered_20df4(param_2 + 1);
  if (pvVar1 != (void *)0x0) {
    if (param_1 != 0 && param_2 != 0) {
      recovered_20f42((int)pvVar1,param_1,param_2);
    }
    *(undefined1 *)((int)pvVar1 + param_2) = 0;
  }
  return pvVar1;
}
