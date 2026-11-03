#include "functions.h"
#define local_2c (*(uint (*)[2])(frame + 16))
#define local_24 (*(int * *)(frame + 24))
#define local_20 (*(int *)(frame + 28))
#define local_1c (*(uint *)(frame + 32))
#define local_18 (*(int *)(frame + 36))
#define local_14 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x265be
 */

bool recovered_265be(int param_1,uint param_2,uint param_3,uint *param_4)

{
  unsigned char frame[92];

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  local_14 = 0;
  local_20 = param_1;
  local_1c = param_2;
  do {
    if (param_2 <= param_3) {
LAB_000266a3:
      return param_3 < param_2;
    }
    uVar1 = recovered_26135(*(int *)(param_1 + param_3 * 4),local_2c);
    if (((char)uVar1 != '\0') && (local_2c[0] != 0)) {
      local_18 = *local_24;
      iVar2 = recovered_26458(local_18,0x2cd03);
      iVar3 = 1;
      if ((char)iVar2 == '\0') {
        iVar2 = recovered_26458(local_18,0x2cd87);
        iVar3 = 1;
        if ((char)iVar2 != '\0') goto LAB_00026653;
        iVar2 = recovered_26458(local_18,0x2cddb);
        iVar3 = 1;
        if ((char)iVar2 != '\0') goto LAB_00026653;
        iVar3 = recovered_26458(local_18,0x2ccc0);
        if ((char)iVar3 != '\0') {
          iVar3 = -1;
          if (local_14 != 0) goto LAB_00026653;
          recovered_26419(local_2c);
          *param_4 = param_3;
          param_2 = local_1c;
          goto LAB_000266a3;
        }
        iVar2 = recovered_26458(local_18,0x2ccc9);
        iVar3 = local_14;
        bVar4 = local_14 != 0;
        recovered_26419(local_2c);
        local_14 = iVar3 - (uint)(bVar4 & (byte)iVar2);
      }
      else {
LAB_00026653:
        recovered_26419(local_2c);
        local_14 = local_14 + iVar3;
      }
      param_1 = local_20;
      param_2 = local_1c;
    }
    param_3 = param_3 + 1;
  } while( true );
}

