#include "functions.h"
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#undef DAT_00088e5e
#define DAT_00088e5e (*(char *)(0x88e5eU))
#define local_24 (*(uint *)(frame + 108))
#define local_20 (*(uint *)(frame + 112))
#define local_1c (*(uint *)(frame + 116))
#define local_18 (*(void * *)(frame + 120))
#define local_14 (*(uint *)(frame + 124))
#define local_80 (*(int *)(frame + 16))
#define local_7c (*(uint *)(frame + 20))
#define local_78 (*(uint *)(frame + 24))
#define local_2c (*(int *)(frame + 100))
#define local_28 (*(uint *)(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d16e
 */

undefined4 recovered_3d16e(int param_1,uint param_2)

{
  unsigned char frame[176];

  byte bVar1;
  bool bVar2;
  int *context;
  undefined4 uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;

  if ((DAT_00088e5e == '\0') && (bVar2 = recovered_2627e(), !bVar2)) {
    return 0;
  }
  context = recovered_27df0(param_1);
  if (context == (int *)0x0) {
    return 0;
  }
  if (context[4] < 1) {
    return 0;
  }
  if (context[2] == param_2) {
    return CONCAT31((int3)((uint)context >> 8),1);
  }
  local_14 = context[3];
  iVar8 = param_2 + local_14;
  iVar5 = (CARRY4(param_2,local_14) - 1) + (uint)(iVar8 != 0);
  if (local_14 == 0) {
    return 0;
  }
  local_1c = param_2;
  uVar3 = recovered_3ce41(context,&local_80);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  if (local_1c < local_7c) {
    return 0;
  }
  if (iVar5 != 0 || (uint)-iVar5 < (uint)(local_78 < iVar8 - 1U)) {
    return 0;
  }
  piVar6 = &DAT_00054f24;
  iVar5 = DAT_00054f20;
  while (uVar4 = local_1c, bVar2 = iVar5 != 0, iVar5 = iVar5 + -1, bVar2) {
    if ((((*piVar6 != *context) && ((char)piVar6[1] == (char)context[1])) && (0 < piVar6[4])) &&
       ((piVar6[6] == context[6] &&
        (uVar9 = recovered_3dca4(piVar6[2],piVar6[3],local_1c,local_14), (char)uVar9 != '\0')))) {
      return 0;
    }
    piVar6 = piVar6 + 9;
  }
  local_20 = context[2];
  uVar7 = context[3];
  if (local_20 != local_1c && uVar7 != 0) {
    bVar1 = *(byte *)(context + 1);
    local_14 = uVar7;
    local_18 = recovered_20df4(0x7000);
    if (local_18 == (void *)0x0) {
      return 0;
    }
    if (local_20 < uVar4 && uVar4 < local_14 + local_20) {
      do {
        if (local_14 == 0) goto LAB_0003d3c7;
        uVar4 = 0x38;
        if (local_14 < 0x38) {
          uVar4 = local_14;
        }
        local_14 = local_14 - uVar4;
        uVar3 = recovered_29b1d((uint)bVar1,local_14 + local_20,(int)local_18,uVar4 << 9);
      } while (((char)uVar3 != '\0') &&
              (bVar2 = recovered_27eaa((uint)bVar1,local_14 + local_1c,(int)local_18,uVar4 << 9),
              bVar2));
    }
    else {
      uVar4 = 0;
      local_24 = (uint)bVar1;
      do {
        uVar7 = local_14 - uVar4;
        if (local_14 < uVar4 || uVar7 == 0) goto LAB_0003d3c7;
        if (0x37 < uVar7) {
          uVar7 = 0x38;
        }
        local_2c = local_20 + uVar4;
        local_28 = uVar4;
        uVar3 = recovered_29b1d(local_24,local_2c,(int)local_18,uVar7 << 9);
        if ((char)uVar3 == '\0') break;
        bVar2 = recovered_27eaa(local_24,local_28 + local_1c,(int)local_18,uVar7 << 9);
        uVar4 = local_28 + uVar7;
      } while (bVar2);
    }
    recovered_20dfd((int)local_18);
    return 0;
  }
LAB_0003d26b:
  uVar4 = local_1c;
  uVar3 = recovered_3ded7((int)context,local_1c,uVar7);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  recovered_3dce9((char)context[1],context[2],context[3]);
  recovered_3dce9((char)context[1],uVar4,context[3]);
  recovered_3e1ba((int)context);
  DAT_00088e5e = 0;
  bVar2 = recovered_2627e();
  return CONCAT31(extraout_var,bVar2);
LAB_0003d3c7:
  recovered_20dfd((int)local_18);
  uVar7 = context[3];
  goto LAB_0003d26b;
}
