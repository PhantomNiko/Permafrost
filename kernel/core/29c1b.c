#include "functions.h"
#define local_48 (*(int (*)[14])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29c1b
 */

void recovered_29c1b(byte param_1,uint param_2,char param_3)

{
  unsigned char frame[120];

  int *piVar1;
  undefined4 uVar2;
  
  if (0x41 < param_2 && param_3 == '\x01') {
    piVar1 = recovered_29cae(param_1,0x41,param_2 - 0x41,0xffffffff,1,0);
    if ((piVar1 != (int *)0x0) && (piVar1[7] == 1)) {
      piVar1[8] = 1;
    }
  }
  piVar1 = recovered_29cae(param_1,0,param_2,0,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = recovered_29d3c((uint)param_1,param_2,local_48,'\x01');
    if ((char)uVar2 != '\0') {
      piVar1[6] = local_48[0];
    }
  }
  return;
}

