#include "functions.h"
#undef str_0002e0fd
#define str_0002e0fd (*(char (*)[1])(0x2e0fdU))
#undef str_0002e137
#define str_0002e137 (*(char (*)[1])(0x2e137U))
#undef str_0002e168
#define str_0002e168 (*(char (*)[1])(0x2e168U))
#undef str_0002e198
#define str_0002e198 (*(char (*)[1])(0x2e198U))
#undef str_0002e1ca
#define str_0002e1ca (*(char (*)[1])(0x2e1caU))
#undef str_0002e1fe
#define str_0002e1fe (*(char (*)[1])(0x2e1feU))
#define local_20 (*(uint *)(frame + 52))
#define local_1c (*(int *)(frame + 56))
#define local_18 (*(uint *)(frame + 60))
#define local_14 (*(undefined4 * *)(frame + 64))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c38e
 */

undefined4 __fastcall
recovered_2c38e(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,char *param_5)

{
  unsigned char frame[116];

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  
  local_14 = (undefined4 *)0x0;
  local_20 = 0;
  if (param_4 != (undefined4 *)0x0 &&
      (param_3 != (int *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0))) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar6 = uVar3;
      if (*(uint *)(param_1 + 0x10) <= uVar4) {
LAB_0002c505:
        *param_2 = local_14;
        *param_3 = uVar6;
        *param_4 = local_20;
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
      local_1c = *(int *)(param_1 + 0x18);
      iVar8 = uVar4 * 0xc;
      local_18 = uVar6;
      if (*(char *)(local_1c + iVar8) != '\0') {
        if (*(char *)(local_1c + iVar8) == '\x14') goto LAB_0002c505;
        recovered_216bc(param_5,0xa0,str_0002e0fd);
        goto LAB_0002c4ec;
      }
      iVar1 = local_1c + iVar8;
      if (*(uint *)(param_1 + 4) <= *(uint *)(iVar1 + 4)) {
        format = str_0002e137;
LAB_0002c4d6:
        recovered_216bc(param_5,0xa0,format);
        uVar6 = local_18;
        goto LAB_0002c4ec;
      }
      iVar7 = *(int *)(iVar1 + 8);
      iVar2 = uVar4 + iVar7;
      puVar9 = (uint *)(local_1c + iVar8 + 0x10);
      while (bVar10 = iVar7 != 0, iVar7 = iVar7 + -1, bVar10) {
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          format = str_0002e168;
          goto LAB_0002c4d6;
        }
        if ((char)puVar9[-1] != '\x02') {
          format = str_0002e198;
          goto LAB_0002c4d6;
        }
        uVar3 = *puVar9;
        puVar9 = puVar9 + 3;
        if (*(uint *)(param_1 + 4) <= uVar3) {
          format = str_0002e1ca;
          goto LAB_0002c4d6;
        }
      }
      uVar5 = recovered_25673((int *)&local_14,&local_20,uVar6 + 1);
      if ((char)uVar5 == '\0') break;
      local_1c = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 4) * 4);
      iVar8 = recovered_20ccf(local_1c);
      iVar8 = recovered_24f9e(local_1c,iVar8);
      local_14[uVar6] = iVar8;
      uVar4 = iVar2 + 1;
      uVar3 = uVar6 + 1;
    } while (local_14[uVar6] != 0);
    recovered_216bc(param_5,0xa0,str_0002e1fe);
LAB_0002c4ec:
    recovered_256e9(local_14,uVar6);
  }
  return 0;
}

