#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e535
 */

int recovered_3e535(int *container,uint value)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_3ce24(local_34,value);
  bVar1 = recovered_28c07(container);
  if (bVar1) {
    uVar2 = recovered_28cbe(container,0x4062c,(int)local_34);
    uVar3 = recovered_28761(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_28761(container);
  }
  return 0;
}
