#include "functions.h"
#define uStack_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x466c5
 */

undefined4 recovered_466c5(int param_1,undefined4 *param_2)

{
  unsigned char frame[80];

  int iVar1;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  iVar1 = recovered_2d4ff(param_1,0x48bc6);
  if ((char)iVar1 == '\0') {
    iVar1 = recovered_2d4ff(param_1,0x48ba6);
    uStack_20 = 1;
    if (((char)iVar1 == '\0') && (iVar1 = recovered_2d4ff(param_1,0x4bcc6), (char)iVar1 == '\0')) {
      iVar1 = recovered_2d4ff(param_1,0x48bad);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_2d4ff(param_1,0x48bb4);
        if ((char)iVar1 == '\0') {
          iVar1 = recovered_2d4ff(param_1,0x48bba);
          if ((char)iVar1 == '\0') {
            iVar1 = recovered_2d4ff(param_1,0x48bc0);
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
