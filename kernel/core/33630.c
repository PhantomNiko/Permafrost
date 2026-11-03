#include "functions.h"
#define local_20 (*(uint (*)[2])(frame + 16))
#define local_18 (*(int * *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33630
 */

bool recovered_33630(int param_1,uint param_2,uint param_3,uint *param_4)

{
  unsigned char frame[80];

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  local_14 = 0;
  do {
    if (param_2 <= param_3) {
LAB_000336ea:
      return param_3 < param_2;
    }
    uVar1 = recovered_31212(*(int *)(param_1 + param_3 * 4),local_20);
    if (((char)uVar1 != '\0') && (local_20[0] != 0)) {
      iVar2 = recovered_4776b((int *)local_20);
      iVar3 = 1;
      if ((char)iVar2 == '\0') {
        iVar3 = *local_18;
        iVar2 = recovered_2d4e4(iVar3,0x49263);
        if ((char)iVar2 == '\0') {
          iVar2 = recovered_2d4e4(iVar3,0x49253);
          iVar3 = local_14;
          bVar4 = local_14 != 0;
          recovered_314f8(local_20);
          local_14 = iVar3 - (uint)(bVar4 & (byte)iVar2);
          goto LAB_000336ac;
        }
        iVar3 = -1;
        if (local_14 == 0) {
          recovered_314f8(local_20);
          *param_4 = param_3;
          goto LAB_000336ea;
        }
      }
      recovered_314f8(local_20);
      local_14 = local_14 + iVar3;
    }
LAB_000336ac:
    param_3 = param_3 + 1;
  } while( true );
}
