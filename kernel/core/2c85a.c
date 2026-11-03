#include "functions.h"
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c85a
 */

undefined4 recovered_2c85a(int param_1,int param_2)

{
  unsigned char frame[68];

  bool bVar1;
  undefined4 uVar2;
  
  local_14 = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_1 != 0) {
    bVar1 = recovered_2b32b((int *)param_1,&local_14);
    if (bVar1) {
      recovered_216bc((char *)param_2,0xf1,&DAT_0002cb77,local_14);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  recovered_20aee(local_14);
  return uVar2;
}

