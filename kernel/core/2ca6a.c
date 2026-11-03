#include "functions.h"
#define local_24 (*(undefined4 *)(frame + 32))
#define local_20 (*(undefined4 *)(frame + 36))
#define local_1c (*(undefined4 *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define local_14 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 20))
#define local_2c (*(undefined4 *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ca6a
 */

undefined4 recovered_2ca6a(int *param_1,int param_2,int param_3)

{
  unsigned char frame[100];

  undefined4 uVar1;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = recovered_2cb83((int)&local_34,param_3);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_2cacf(param_1,param_2,(int)&local_34);
  }
  recovered_25fea(&local_34);
  return uVar1;
}
