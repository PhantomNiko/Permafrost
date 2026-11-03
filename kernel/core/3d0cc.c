#include "functions.h"
#define uStack_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d0cc
 */

undefined4 recovered_3d0cc(int param_1,undefined4 *param_2)

{
  unsigned char frame[80];

  int iVar1;
  undefined4 uVar2;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
LAB_0003d14b:
    uVar2 = 0;
  }
  else {
    iVar1 = recovered_2961b(param_1,0x41df7);
    uStack_20 = 1;
    if (((char)iVar1 == '\0') && (iVar1 = recovered_2961b(param_1,0x41dfe), (char)iVar1 == '\0')) {
      iVar1 = recovered_2961b(param_1,0x41e03);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_2961b(param_1,0x41e09);
        if ((char)iVar1 == '\0') {
          iVar1 = recovered_2961b(param_1,0x41e0f);
          if ((char)iVar1 == '\0') goto LAB_0003d14b;
          uStack_20 = 4;
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
