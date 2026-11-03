#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5552c
 */

int recovered_5552c(int *container,uint value)

{
  unsigned char frame[100] = {0};

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_44eb3(local_34,value);
  bVar1 = recovered_3a72d(container);
  if (bVar1) {
    uVar2 = recovered_3adcc(container,0x58b69,(int)local_34);
    uVar3 = recovered_3352a(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_3352a(container);
  }
  return 0;
}
