#include "functions.h"
#define local_1c (*(undefined4 *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define local_14 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 20))
#define local_2c (*(undefined4 *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 28))
#define local_24 (*(undefined4 *)(frame + 32))
#define local_20 (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b3b9
 */

undefined4 recovered_2b3b9(int *param_1,int param_2,int param_3)

{
  unsigned char frame[100];

  bool bVar1;
  undefined4 uVar2;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  bVar1 = recovered_2b464(&local_34,param_3);
  if (bVar1) {
    uVar2 = recovered_2b41e(param_1,param_2,(int)&local_34);
  }
  else {
    uVar2 = 0;
  }
  recovered_2aec1(&local_34);
  return uVar2;
}
