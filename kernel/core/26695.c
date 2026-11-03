#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26695
 */

void recovered_26695(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined1 param_6,
               undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_1 != (uint *)0x0) && ((char)param_1[3] == '\x01')) && (0 < param_5)) &&
     ((0 < param_4 && (param_1[2] != 0)))) {
    uVar3 = 0;
    if (0 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar2 = param_4 + param_2;
    uVar1 = param_5 + param_3;
    if (-1 < (int)(uVar2 | uVar1)) {
      uVar5 = 0;
      if (0 < (int)param_3) {
        uVar5 = param_3;
      }
      uVar4 = *param_1;
      if (uVar2 < *param_1) {
        uVar4 = uVar2;
      }
      uVar2 = param_1[1];
      if (uVar1 < param_1[1]) {
        uVar2 = uVar1;
      }
      for (; (int)uVar5 < (int)uVar2; uVar5 = uVar5 + 1) {
        for (uVar1 = uVar3; (int)uVar1 < (int)uVar4; uVar1 = uVar1 + 1) {
          recovered_270f9(param_1,uVar1,uVar5,param_6,param_7,param_8);
        }
      }
    }
  }
  return;
}
