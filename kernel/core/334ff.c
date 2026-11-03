#include "functions.h"
#define local_2c (*(uint (*)[2])(frame + 16))
#define local_24 (*(int * *)(frame + 24))
#define local_20 (*(int *)(frame + 28))
#define local_1c (*(uint *)(frame + 32))
#define local_18 (*(uint *)(frame + 36))
#define local_14 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x334ff
 */

bool recovered_334ff(int param_1,uint param_2,uint param_3,uint *param_4,undefined1 *param_5)

{
  unsigned char frame[92];

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;

  local_14 = 0;
  local_20 = param_1;
  local_18 = param_2;
  do {
    if (param_2 <= param_3) {
LAB_0003361b:
      return param_3 < param_2;
    }
    uVar1 = recovered_31212(*(int *)(local_20 + param_3 * 4),local_2c);
    if (((char)uVar1 != '\0') && (local_2c[0] != 0)) {
      local_1c = param_3;
      iVar2 = recovered_4776b((int *)local_2c);
      if ((char)iVar2 == '\0') {
        iVar2 = *local_24;
        iVar3 = recovered_2d4e4(iVar2,0x49253);
        iVar4 = local_14;
        param_3 = local_1c;
        if ((char)iVar3 == '\0') {
          iVar4 = recovered_2d4e4(iVar2,0x49263);
          param_3 = local_1c;
          if ((char)iVar4 == '\0') {
            if (local_14 == 0) {
              iVar4 = recovered_2d4e4(iVar2,0x49257);
              if ((char)iVar4 == '\0') {
                iVar2 = recovered_2d4e4(iVar2,0x4925e);
                if ((char)iVar2 == '\0') goto LAB_000335f4;
                uVar5 = 2;
              }
              else {
                uVar5 = 1;
              }
LAB_00033606:
              recovered_314f8(local_2c);
              *param_4 = param_3;
              *param_5 = uVar5;
              param_2 = local_18;
              goto LAB_0003361b;
            }
LAB_000335f4:
            recovered_314f8(local_2c);
          }
          else {
            recovered_314f8(local_2c);
            bVar6 = local_14 == 0;
            local_14 = local_14 + -1;
            if (bVar6) {
              local_14 = 0;
            }
          }
        }
        else {
          if (local_14 == 0) {
            uVar5 = 0;
            goto LAB_00033606;
          }
          recovered_314f8(local_2c);
          local_14 = iVar4 + -1;
        }
        param_2 = local_18;
      }
      else {
        recovered_314f8(local_2c);
        local_14 = local_14 + 1;
        param_3 = local_1c;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}
