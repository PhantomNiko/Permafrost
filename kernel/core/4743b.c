#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4743b
 */

int recovered_4743b(int *container,uint value)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  recovered_36bce(local_34,value);
  bVar1 = recovered_2c430(container);
  if (bVar1) {
    uVar2 = recovered_2cacf(container,0x49afe,(int)local_34);
    uVar3 = recovered_25fea(local_34);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_25fea(container);
  }
  return 0;
}
