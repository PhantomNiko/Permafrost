#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x320bc
 */

uint recovered_320bc(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0003f254;
  }
  iVar1 = recovered_20ff4((int)param_2);
  uVar2 = recovered_27c7c(param_1,(int)param_2,iVar1);
  return uVar2;
}
