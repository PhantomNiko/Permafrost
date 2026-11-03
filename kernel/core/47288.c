#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47288
 */

void recovered_47288(undefined4 *param_1)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;

  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      recovered_25fea((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0x24;
    }
    recovered_21203(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
