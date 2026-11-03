#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x454c5
 */

int recovered_454c5(int *container,uint value)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_351e1(local_34,value);
  bVar1 = recovered_2c36c(container);
  if (bVar1) {
    uVar2 = recovered_2ca0b(container,0x477fe,(int)local_34);
    uVar3 = recovered_2603e(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_2603e(container);
  }
  return 0;
}
