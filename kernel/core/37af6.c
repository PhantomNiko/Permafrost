#include "functions.h"
#define local_14 (*(int (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37af6
 */

bool recovered_37af6(int *param_1,int *param_2)

{
  unsigned char frame[68];

  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;

  if (param_2 == (int *)0x0) {
    return false;
  }
  *param_2 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  uVar1 = recovered_37b48(param_1,local_14,0);
  if ((char)uVar1 == '\0') {
    recovered_21203(local_14[2]);
    bVar3 = false;
  }
  else {
    puVar2 = recovered_29d27(local_14);
    *param_2 = (int)puVar2;
    bVar3 = puVar2 != (undefined1 *)0x0;
  }
  return bVar3;
}
