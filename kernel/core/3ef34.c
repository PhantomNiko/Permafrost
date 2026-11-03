#include "functions.h"
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ef34
 */

undefined4 recovered_3ef34(int param_1,char *param_2)

{
  unsigned char frame[68];

  bool bVar1;
  undefined4 uVar2;

  local_14 = 0;
  uVar2 = 0;
  if (param_2 != (char *)0x0 && param_1 != 0) {
    bVar1 = recovered_31d86((int *)param_1,&local_14);
    if (bVar1) {
      recovered_219e1(param_2,0xf1,&DAT_0003f336,local_14);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  recovered_20dfd(local_14);
  return uVar2;
}
