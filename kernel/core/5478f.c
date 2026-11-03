#include "functions.h"
#define uStack_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5478f
 */

undefined4 recovered_5478f(int param_1,undefined4 *param_2)

{
  unsigned char frame[80] = {0};

  int iVar1;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  iVar1 = recovered_3b7fc(param_1,0x57c37);
  if ((char)iVar1 == '\0') {
    iVar1 = recovered_3b7fc(param_1,0x57c17);
    uStack_20 = 1;
    if (((char)iVar1 == '\0') && (iVar1 = recovered_3b7fc(param_1,0x5ad31), (char)iVar1 == '\0')) {
      iVar1 = recovered_3b7fc(param_1,0x57c1e);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_3b7fc(param_1,0x57c25);
        if ((char)iVar1 == '\0') {
          iVar1 = recovered_3b7fc(param_1,0x57c2b);
          if ((char)iVar1 == '\0') {
            iVar1 = recovered_3b7fc(param_1,0x57c31);
            if ((char)iVar1 == '\0') {
              return 0;
            }
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
  }
  else {
    uStack_20 = 6;
  }
  *param_2 = uStack_20;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}
