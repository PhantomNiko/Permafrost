#include "functions.h"
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x422d9
 */

undefined4 recovered_422d9(int param_1,char *param_2)

{
  unsigned char frame[68];

  bool bVar1;
  undefined4 uVar2;

  local_14 = 0;
  uVar2 = 0;
  if (param_2 != (char *)0x0 && param_1 != 0) {
    bVar1 = recovered_34508((int *)param_1,&local_14);
    if (bVar1) {
      recovered_219e1(param_2,0xf1,&DAT_00042730,local_14);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  recovered_20dfd(local_14);
  return uVar2;
}
