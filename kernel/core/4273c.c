#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4273c
 */

uint recovered_4273c(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00057364;
  }
  uVar1 = recovered_214de((int)param_2);
  uVar1 = recovered_426a9(param_1,param_2,uVar1);
  return uVar1;
}
