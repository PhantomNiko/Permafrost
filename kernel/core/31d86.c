#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 16))
#define local_10 (*(undefined4 *)(frame + 20))
#define local_c (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31d86
 */

bool recovered_31d86(int *param_1,int *param_2)

{
  unsigned char frame[68];

  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  if (param_2 == (int *)0x0) {
    return false;
  }
  *param_2 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = recovered_31dd8(param_1,(int)&local_14,0);
  if ((char)uVar1 == '\0') {
    recovered_20dfd(local_c);
    bVar3 = false;
  }
  else {
    puVar2 = recovered_27d35(&local_14);
    *param_2 = (int)puVar2;
    bVar3 = puVar2 != (undefined1 *)0x0;
  }
  return bVar3;
}

