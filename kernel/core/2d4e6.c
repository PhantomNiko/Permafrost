#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d4e6
 */

uint recovered_2d4e6(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined1 *puVar2;

  puVar2 = &DAT_00057364;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_2;
  }
  uVar1 = recovered_29b55((int)puVar2,param_2[1]);
  return uVar1;
}
