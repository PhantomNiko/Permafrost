#include "functions.h"
#undef DAT_0004ceac
#define DAT_0004ceac (*(int *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
#define local_78 (*(uint *)(frame + 24))
#define local_2c (*(uint *)(frame + 100))
#define local_28 (*(uint *)(frame + 104))
#define local_24 (*(uint *)(frame + 108))
#define local_20 (*(uint *)(frame + 112))
#define local_1c (*(uint *)(frame + 116))
#define local_18 (*(void * *)(frame + 120))
#define local_14 (*(uint *)(frame + 124))
#define local_80 (*(int *)(frame + 16))
#define local_7c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44996
 */

undefined4 recovered_44996(int param_1,uint param_2)

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

  if ((DAT_00082054 == '\0') && (bVar2 = recovered_28aac(), !bVar2)) {
    return 0;
  }
  context = recovered_2b4d9(param_1);
  if (context == (int *)0x0) {
    return 0;
  }
  if (context[5] < 1) {
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
  uVar3 = recovered_44631(context,&local_80);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  if (local_1c < local_7c) {
    return 0;
  }
  if (iVar5 != 0 || (uint)-iVar5 < (uint)(local_78 < iVar8 - 1U)) {
    return 0;
  }
  piVar6 = &DAT_0004ceb0;
  iVar5 = DAT_0004ceac;
  while (uVar4 = local_1c, bVar2 = iVar5 != 0, iVar5 = iVar5 + -1, bVar2) {
    if ((((*piVar6 != *context) && ((char)piVar6[1] == (char)context[1])) && (0 < piVar6[5])) &&
       ((piVar6[10] == context[10] &&
        (uVar9 = recovered_44cf1(piVar6[2],piVar6[3],local_1c,local_14), (char)uVar9 != '\0')))) {
      return 0;
    }
    piVar6 = piVar6 + 0xd;
  }
  local_20 = context[2];
  uVar7 = context[3];
  if (local_20 != local_1c && uVar7 != 0) {
    bVar1 = *(byte *)(context + 1);
    local_14 = uVar7;
    local_18 = recovered_211fa(0x7000);
    if (local_18 == (void *)0x0) {
      return 0;
    }
    if (local_20 < uVar4 && uVar4 < local_14 + local_20) {
      do {
        if (local_14 == 0) goto LAB_00044bef;
        uVar4 = 0x38;
        if (local_14 < 0x38) {
          uVar4 = local_14;
        }
        local_14 = local_14 - uVar4;
        bVar2 = recovered_2b362((uint)bVar1,local_14 + local_20,(int)local_18,uVar4 << 9);
      } while ((bVar2) &&
              (bVar2 = recovered_2b083(bVar1,local_14 + local_1c,(int)local_18,uVar4 << 9), bVar2));
    }
    else {
      uVar4 = 0;
      local_24 = (uint)bVar1;
      do {
        uVar7 = local_14 - uVar4;
        if (local_14 < uVar4 || uVar7 == 0) goto LAB_00044bef;
        if (0x37 < uVar7) {
          uVar7 = 0x38;
        }
        local_2c = local_20 + uVar4;
        local_28 = uVar4;
        bVar2 = recovered_2b362(local_24,local_2c,(int)local_18,uVar7 << 9);
        if (!bVar2) break;
        bVar2 = recovered_2b083((byte)local_24,local_28 + local_1c,(int)local_18,uVar7 << 9);
        uVar4 = local_28 + uVar7;
      } while (bVar2);
    }
    recovered_21203((int)local_18);
    return 0;
  }
LAB_00044a93:
  uVar4 = local_1c;
  uVar3 = recovered_44e67((int)context,local_1c,uVar7);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  recovered_44c34((char)context[1],context[2],context[3]);
  recovered_44c34((char)context[1],uVar4,context[3]);
  recovered_4514a((int)context);
  DAT_00082054 = 0;
  bVar2 = recovered_28aac();
  return CONCAT31(extraout_var,bVar2);
LAB_00044bef:
  recovered_21203((int)local_18);
  uVar7 = context[3];
  goto LAB_00044a93;
}
