#include "functions.h"
#define uStack_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40963
 */

undefined4 recovered_40963(int param_1,undefined4 *param_2)

{
  unsigned char frame[80];

  int iVar1;
  undefined4 uVar2;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
LAB_000409f6:
    uVar2 = 0;
  }
  else {
    iVar1 = recovered_2bda3(param_1,0x42c6f);
    uStack_20 = 1;
    if (((char)iVar1 == '\0') && (iVar1 = recovered_2bda3(param_1,0x45608), (char)iVar1 == '\0')) {
      iVar1 = recovered_2bda3(param_1,0x42c76);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_2bda3(param_1,0x42c7d);
        if ((char)iVar1 == '\0') {
          iVar1 = recovered_2bda3(param_1,0x42c83);
          if ((char)iVar1 == '\0') {
            iVar1 = recovered_2bda3(param_1,0x42c89);
            if ((char)iVar1 == '\0') goto LAB_000409f6;
            uStack_20 = 5;
          }
          else {
            uStack_20 = 4;
          }
        }
        else {
          uStack_20 = 3;
        }
      }
      else {
        uStack_20 = 2;
      }
    }
    *param_2 = uStack_20;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}
