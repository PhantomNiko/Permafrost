#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d5c
 */

void recovered_28d5c(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined1 param_6,
               undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if ((((param_1 != (uint *)0x0) && ((char)param_1[3] == '\x01')) && (0 < param_5)) &&
     ((0 < param_4 && (param_1[2] != 0)))) {
    uVar4 = 0;
    if (0 < (int)param_2) {
      uVar4 = param_2;
    }
    uVar6 = param_4 + param_2;
    uVar5 = param_5 + param_3;
    if (-1 < (int)(uVar6 | uVar5)) {
      uVar2 = 0;
      if (0 < (int)param_3) {
        uVar2 = param_3;
      }
      uVar7 = *param_1;
      if (uVar6 < *param_1) {
        uVar7 = uVar6;
      }
      uVar6 = param_1[1];
      if (uVar5 < param_1[1]) {
        uVar6 = uVar5;
      }
      for (; (int)uVar2 < (int)uVar6; uVar2 = uVar2 + 1) {
        for (uVar5 = uVar4; (int)uVar5 < (int)uVar7; uVar5 = uVar5 + 1) {
          if ((((char)param_1[3] == '\x01') && (uVar1 = param_1[2], uVar1 != 0)) &&
             ((uVar5 < *param_1 && (uVar2 < param_1[1])))) {
            iVar3 = *param_1 * uVar2 + uVar5;
            *(undefined1 *)(uVar1 + iVar3 * 4) = param_6;
            *(undefined1 *)(uVar1 + 1 + iVar3 * 4) = param_7;
            *(undefined1 *)(uVar1 + 2 + iVar3 * 4) = param_8;
            *(undefined1 *)(uVar1 + 3 + iVar3 * 4) = 0xff;
          }
        }
      }
    }
  }
  return;
}
