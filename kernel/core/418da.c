#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x418da
 */

int recovered_418da(int *container,uint value)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_406b1(local_34,value);
  bVar1 = recovered_2b367(container);
  if (bVar1) {
    uVar2 = recovered_2b41e(container,0x43aad,(int)local_34);
    uVar3 = recovered_2aec1(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_2aec1(container);
  }
  return 0;
}
