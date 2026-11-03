#include "functions.h"
#define local_14 (*(int (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b32b
 */

bool recovered_2b32b(int *param_1,undefined4 *param_2)

{
  unsigned char frame[68];

  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
  *param_2 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  uVar1 = recovered_2b37d(param_1,local_14,0);
  if ((char)uVar1 == '\0') {
    recovered_20aee(local_14[2]);
    bVar3 = false;
  }
  else {
    puVar2 = recovered_2b651(local_14);
    *param_2 = puVar2;
    bVar3 = puVar2 != (undefined1 *)0x0;
  }
  return bVar3;
}

