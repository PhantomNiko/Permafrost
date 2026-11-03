#include "functions.h"
#define uStack_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x448fa
 */

undefined4 recovered_448fa(int param_1,undefined4 *param_2)

{
  unsigned char frame[80];

  int iVar1;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  iVar1 = recovered_2d3f1(param_1,0x46963);
  if ((char)iVar1 == '\0') {
    iVar1 = recovered_2d3f1(param_1,0x46943);
    uStack_20 = 1;
    if (((char)iVar1 == '\0') && (iVar1 = recovered_2d3f1(param_1,0x499a2), (char)iVar1 == '\0')) {
      iVar1 = recovered_2d3f1(param_1,0x4694a);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_2d3f1(param_1,0x46951);
        if ((char)iVar1 == '\0') {
          iVar1 = recovered_2d3f1(param_1,0x46957);
          if ((char)iVar1 == '\0') {
            iVar1 = recovered_2d3f1(param_1,0x4695d);
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
