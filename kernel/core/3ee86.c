#include "functions.h"
#define local_8 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ee86
 */

uint recovered_3ee86(int *param_1,undefined4 param_2)

{
  unsigned char frame[64];

  uint uVar1;

  local_8 = param_2;
  uVar1 = recovered_27c7c(param_1,(int)&local_8,4);
  return uVar1;
}
