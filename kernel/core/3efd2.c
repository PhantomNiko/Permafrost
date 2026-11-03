#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef str_00045ac8
#define str_00045ac8 (*(char (*)[1])(0x45ac8U))
#undef str_00045aee
#define str_00045aee (*(char (*)[1])(0x45aeeU))
#undef str_00045b28
#define str_00045b28 (*(char (*)[1])(0x45b28U))
#undef str_00045b59
#define str_00045b59 (*(char (*)[1])(0x45b59U))
#undef str_00045b89
#define str_00045b89 (*(char (*)[1])(0x45b89U))
#undef str_00045bbb
#define str_00045bbb (*(char (*)[1])(0x45bbbU))
#define format (*(char * *)(frame + 16))
#define local_20 (*(uint *)(frame + 52))
#define local_1c (*(int *)(frame + 56))
#define local_18 (*(uint *)(frame + 60))
#define local_14 (*(undefined4 * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3efd2
 */

undefined4 recovered_3efd2(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,char *param_5,
               uint param_6)

{
  unsigned char frame[116];

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
LAB_0003f202:
          *param_2 = local_14;
          *param_3 = uVar8;
          goto LAB_0003f195;
        }
        local_1c = *(int *)(param_1 + 0x18);
        iVar5 = uVar7 * 0xc;
        local_18 = uVar8;
        if (*(char *)(local_1c + iVar5) != '\0') {
          if (*(char *)(local_1c + iVar5) == '\x14') goto LAB_0003f202;
          format = str_00045aee;
LAB_0003f1da:
          recovered_219e1(param_5,param_6,format);
          uVar8 = local_18;
          goto LAB_0003f1ee;
        }
        iVar1 = local_1c + iVar5;
        if (*(uint *)(param_1 + 4) <= *(uint *)(iVar1 + 4)) {
          format = str_00045b28;
          goto LAB_0003f1da;
        }
        iVar9 = *(int *)(iVar1 + 8);
        iVar2 = uVar7 + iVar9;
        puVar11 = (uint *)(local_1c + iVar5 + 0x10);
        while (bVar12 = iVar9 != 0, iVar9 = iVar9 + -1, bVar12) {
          uVar7 = uVar7 + 1;
          if (*(uint *)(param_1 + 0x10) <= uVar7) {
            format = str_00045b59;
            goto LAB_0003f1da;
          }
          if ((char)puVar11[-1] != '\x02') {
            format = str_00045b89;
            goto LAB_0003f1da;
          }
          uVar3 = *puVar11;
          puVar11 = puVar11 + 3;
          if (*(uint *)(param_1 + 4) <= uVar3) {
            format = str_00045bbb;
            goto LAB_0003f1da;
          }
        }
        uVar4 = recovered_2ce6a((int *)&local_14,&local_20,uVar8 + 1);
        if ((char)uVar4 == '\0') break;
        local_1c = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 4) * 4);
        iVar5 = recovered_20ff4(local_1c);
        pvVar6 = recovered_28bbf(local_1c,iVar5);
        local_14[uVar8] = pvVar6;
        uVar7 = iVar2 + 1;
        uVar3 = uVar8 + 1;
      } while (local_14[uVar8] != 0);
      recovered_219e1(param_5,param_6,str_00045ac8);
    }
    else {
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        if (*(uint *)(param_1 + 0x20) <= uVar8) {
          *param_2 = local_14;
          *param_3 = uVar8;
LAB_0003f195:
          *param_4 = local_20;
          return CONCAT31((int3)(local_20 >> 8),1);
        }
        uVar4 = recovered_2ce6a((int *)&local_14,&local_20,uVar8 + 1);
        if ((char)uVar4 == '\0') {
          recovered_219e1(param_5,param_6,str_00045ac8);
          goto LAB_0003f1ee;
        }
        puVar10 = *(undefined1 **)(*(int *)(param_1 + 0x1c) + uVar8 * 4);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_00042614;
        }
        iVar5 = recovered_20ff4((int)puVar10);
        pvVar6 = recovered_28bbf((int)puVar10,iVar5);
        local_14[uVar8] = pvVar6;
        uVar7 = uVar8 + 1;
      } while (local_14[uVar8] != 0);
      recovered_219e1(param_5,param_6,str_00045ac8);
    }
LAB_0003f1ee:
    recovered_2b315(local_14,uVar8);
  }
  return 0;
}
