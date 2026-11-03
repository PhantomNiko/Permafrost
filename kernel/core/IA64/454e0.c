#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x454e0
 */

int recovered_454e0(int *container,uint value)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_35219(local_34,value);
  bVar1 = recovered_2c3e2(container);
  if (bVar1) {
    uVar2 = recovered_2ca43(container,0x47853,(int)local_34);
    uVar3 = recovered_26052(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_26052(container);
  }
  return 0;
}
