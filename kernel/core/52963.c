#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef str_0005b1ea
#define str_0005b1ea (*(char (*)[1])(0x5b1eaU))
#undef str_0005b210
#define str_0005b210 (*(char (*)[1])(0x5b210U))
#undef str_0005b24a
#define str_0005b24a (*(char (*)[1])(0x5b24aU))
#undef str_0005b27b
#define str_0005b27b (*(char (*)[1])(0x5b27bU))
#undef str_0005b2ab
#define str_0005b2ab (*(char (*)[1])(0x5b2abU))
#undef str_0005b2dd
#define str_0005b2dd (*(char (*)[1])(0x5b2ddU))
#define format (*(char * *)(frame + 16))
#define local_20 (*(uint *)(frame + 52))
#define local_1c (*(int *)(frame + 56))
#define local_18 (*(uint *)(frame + 60))
#define local_14 (*(undefined4 * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x52963
 */

undefined4 recovered_52963(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,char *param_5,
               uint param_6)

{
  unsigned char frame[116] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint *puVar11;
  bool bVar12;

  local_14 = (undefined4 *)0x0;
  local_20 = 0;
  if (param_4 != (undefined4 *)0x0 &&
      (param_3 != (uint *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0))) {
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar7 = 0;
      uVar3 = 0;
      do {
        uVar8 = uVar3;
        if (*(uint *)(param_1 + 0x10) <= uVar7) {
LAB_00052b93:
          *param_2 = local_14;
          *param_3 = uVar8;
          goto LAB_00052b26;
        }
        local_1c = *(int *)(param_1 + 0x18);
        iVar5 = uVar7 * 0xc;
        local_18 = uVar8;
        if (*(char *)(local_1c + iVar5) != '\0') {
          if (*(char *)(local_1c + iVar5) == '\x14') goto LAB_00052b93;
          format = str_0005b210;
LAB_00052b6b:
          recovered_22362(param_5,param_6,format);
          uVar8 = local_18;
          goto LAB_00052b7f;
        }
        iVar1 = local_1c + iVar5;
        if (*(uint *)(param_1 + 4) <= *(uint *)(iVar1 + 4)) {
          format = str_0005b24a;
          goto LAB_00052b6b;
        }
        iVar9 = *(int *)(iVar1 + 8);
        iVar2 = uVar7 + iVar9;
        puVar11 = (uint *)(local_1c + iVar5 + 0x10);
        while (bVar12 = iVar9 != 0, iVar9 = iVar9 + -1, bVar12) {
          uVar7 = uVar7 + 1;
          if (*(uint *)(param_1 + 0x10) <= uVar7) {
            format = str_0005b27b;
            goto LAB_00052b6b;
          }
          if ((char)puVar11[-1] != '\x02') {
            format = str_0005b2ab;
            goto LAB_00052b6b;
          }
          uVar3 = *puVar11;
          puVar11 = puVar11 + 3;
          if (*(uint *)(param_1 + 4) <= uVar3) {
            format = str_0005b2dd;
            goto LAB_00052b6b;
          }
        }
        uVar4 = recovered_3c7a5((int *)&local_14,&local_20,uVar8 + 1);
        if ((char)uVar4 == '\0') break;
        local_1c = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 4) * 4);
        iVar5 = recovered_214de(local_1c);
        pvVar6 = recovered_3773b(local_1c,iVar5);
        local_14[uVar8] = pvVar6;
        uVar7 = iVar2 + 1;
        uVar3 = uVar8 + 1;
      } while (local_14[uVar8] != 0);
      recovered_22362(param_5,param_6,str_0005b1ea);
    }
    else {
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        if (*(uint *)(param_1 + 0x20) <= uVar8) {
          *param_2 = local_14;
          *param_3 = uVar8;
LAB_00052b26:
          *param_4 = local_20;
          return CONCAT31((int3)(local_20 >> 8),1);
        }
        uVar4 = recovered_3c7a5((int *)&local_14,&local_20,uVar8 + 1);
        if ((char)uVar4 == '\0') {
          recovered_22362(param_5,param_6,str_0005b1ea);
          goto LAB_00052b7f;
        }
        puVar10 = *(undefined1 **)(*(int *)(param_1 + 0x1c) + uVar8 * 4);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_00057364;
        }
        iVar5 = recovered_214de((int)puVar10);
        pvVar6 = recovered_3773b((int)puVar10,iVar5);
        local_14[uVar8] = pvVar6;
        uVar7 = uVar8 + 1;
      } while (local_14[uVar8] != 0);
      recovered_22362(param_5,param_6,str_0005b1ea);
    }
LAB_00052b7f:
    recovered_3a594(local_14,uVar8);
  }
  return 0;
}
