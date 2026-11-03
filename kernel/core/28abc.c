#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28abc
 */

void recovered_28abc(int *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  if (param_1 != (int *)0x0) {
    recovered_2991c(param_1 + 8);
    recovered_2991c(param_1 + 5);
    recovered_2dcbe(param_1 + 2);
    recovered_23194();
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  recovered_23194();
  return;
}
