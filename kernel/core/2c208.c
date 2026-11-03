#include "functions.h"
#undef str_0002dfee
#define str_0002dfee (*(char (*)[1])(0x2dfeeU))
#undef str_0002e010
#define str_0002e010 (*(char (*)[1])(0x2e010U))
#undef str_0002e032
#define str_0002e032 (*(char (*)[1])(0x2e032U))
#undef str_0002e053
#define str_0002e053 (*(char (*)[1])(0x2e053U))
#undef str_0002e083
#define str_0002e083 (*(char (*)[1])(0x2e083U))
#undef str_0002e0b1
#define str_0002e0b1 (*(char (*)[1])(0x2e0b1U))
#undef str_0002e0d6
#define str_0002e0d6 (*(char (*)[1])(0x2e0d6U))
#define local_14 (*(uint *)(frame + 80))
#define pcVar10 (*(char * *)(frame + 16))
#define local_40 (*(int *)(frame + 36))
#define local_3c (*(uint *)(frame + 40))
#define local_38 (*(undefined4 * *)(frame + 44))
#define local_34 (*(ushort (*)[2])(frame + 48))
#define local_30 (*(int (*)[7])(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c208
 */

uint recovered_2c208(int path,void *output,char *source)

{
  unsigned char frame[132];

  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  
  local_40 = 0;
  local_3c = 0;
  uVar2 = recovered_253f8(path,&local_40,&local_3c);
  iVar7 = local_40;
  if ((char)uVar2 == '\0') {
    pcVar10 = str_0002dfee;
    goto LAB_0002c28f;
  }
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  if (output == (void *)0x0 || local_40 == 0) {
    return 0;
  }
  if (0xd < local_3c) {
    local_30[6] = local_3c;
    iVar3 = recovered_20ca0(local_40,0x2e00b,4);
    if (iVar3 == 0) {
      uVar4 = (uint)*(ushort *)(iVar7 + 4);
      local_34[0] = *(ushort *)(iVar7 + 4);
      if (uVar4 != 1) {
        pcVar10 = str_0002e032;
        goto LAB_0002c379;
      }
      uVar5 = *(uint *)(iVar7 + 10);
      local_14 = uVar5;
      iVar3 = *(int *)(iVar7 + 6) + 1;
      uVar4 = 0xe;
      uVar8 = 0xe;
      local_38 = output;
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar6 = local_14 + 1;
          goto LAB_0002c307;
        }
        uVar5 = uVar8 + 4;
        if ((uint)local_30[6] < uVar5) {
          pcVar10 = str_0002e053;
          goto LAB_0002c379;
        }
        puVar1 = (uint *)(iVar7 + uVar8);
        uVar8 = *puVar1 + uVar5;
        if ((uint)local_30[6] < uVar8) {
          pcVar10 = str_0002e083;
          goto LAB_0002c379;
        }
        uVar5 = recovered_26e2b(local_30,(char *)(uVar5 + iVar7),*puVar1);
      } while ((char)uVar5 != '\0');
      goto LAB_0002c339;
    }
  }
  pcVar10 = str_0002e010;
LAB_0002c28f:
  recovered_216bc(source,0xa0,pcVar10);
  return 0;
  while( true ) {
    local_14 = uVar6 - 1;
    uVar5 = recovered_2c579((uint *)(local_30 + 3),*(undefined1 *)(iVar7 + -0xc + uVar8),
                            *(undefined4 *)(iVar7 + -8 + uVar8),*(undefined4 *)(iVar7 + -4 + uVar8))
    ;
    uVar6 = local_14;
    if ((char)uVar5 == '\0') break;
LAB_0002c307:
    uVar8 = uVar8 + 0xc;
    if (uVar6 - 1 == 0) {
      puVar9 = local_34;
      for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
        *local_38 = *(undefined4 *)puVar9;
        puVar9 = puVar9 + 2;
        local_38 = local_38 + 1;
      }
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    if ((uint)local_30[6] < uVar8) {
      pcVar10 = str_0002e0d6;
      goto LAB_0002c379;
    }
  }
LAB_0002c339:
  pcVar10 = str_0002e0b1;
LAB_0002c379:
  recovered_216bc(source,0xa0,pcVar10,uVar4);
  recovered_2c544(local_34);
  return 0;
}

