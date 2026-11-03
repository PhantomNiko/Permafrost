#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x277bd
 */

void recovered_277bd(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_0003f254;
  }
  uVar1 = recovered_20ff4((int)param_2);
  recovered_277fa(param_1,(int)param_2,uVar1,param_3);
  return;
}

