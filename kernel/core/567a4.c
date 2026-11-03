#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x567a4
 */

undefined4 recovered_567a4(int param_1,char *param_2)

{
  unsigned char frame[68] = {0};

  bool bVar1;
  undefined4 uVar2;

  local_14 = 0;
  uVar2 = 0;
  if (param_2 != (char *)0x0 && param_1 != 0) {
    bVar1 = recovered_45ddb((int *)param_1,&local_14);
    if (bVar1) {
      recovered_22362(param_2,0xf1,&DAT_00057391,local_14);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  recovered_21203(local_14);
  return uVar2;
}
