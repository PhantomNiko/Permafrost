#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27ff5
 */

void recovered_27ff5(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  
  recovered_20fa9(param_1,0x20,0xb);
  if (param_2 != 0) {
    for (uVar1 = 0; (uVar1 < 0xb && (*(char *)(param_2 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
      *(char *)(param_1 + uVar1) = *(char *)(param_2 + uVar1);
    }
  }
  return;
}

