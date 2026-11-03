#include "functions.h"
#undef DAT_0005ce30
#define DAT_0005ce30 (*(uint8_t *)(0x5ce30U))
#undef LAB_00027842
#define LAB_00027842 (*(uint8_t *)(0x27842U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#undef PTR_recovered_28b68_0005d0e8
#define PTR_recovered_28b68_0005d0e8 (*(void * *)(0x5d0e8U))
#undef PTR_recovered_2b8b8_0005d128
#define PTR_recovered_2b8b8_0005d128 (*(void * *)(0x5d128U))
#define local_74 (*(undefined4 *)(frame + 168))
#define local_70 (*(undefined4 *)(frame + 172))
#define local_5c (*(undefined * *)(frame + 192))
#define local_58 (*(undefined * *)(frame + 196))
#define local_54 (*(undefined1 * *)(frame + 200))
#define local_50 (*(undefined1 * *)(frame + 204))
#define local_4c (*(undefined1 * *)(frame + 208))
#define local_3c (*(float *)(frame + 224))
#define local_38 (*(int * *)(frame + 228))
#define local_34 (*(int * *)(frame + 232))
#define local_30 (*(int * *)(frame + 236))
#define local_2c (*(int * *)(frame + 240))
#define local_28 (*(char * *)(frame + 244))
#define local_24 (*(uint *)(frame + 248))
#define local_1c (*(int * *)(frame + 256))
#define local_18 (*(int * *)(frame + 260))
#define local_14 (*(uint * *)(frame + 264))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x274d4
 */

undefined4 * recovered_274d4(int param_1,int param_2,float param_3)

{
  unsigned char frame[316] = {0};

  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;

  local_54 = (undefined1 *)((int)(uintptr_t)(frame + 284) + -4);
  local_4c = auStackY_10c + 0x80;
  local_3c = param_3;
  local_5c = PTR_LAB_0005d040;
  local_58 = &DAT_0005ce30;
  local_50 = &LAB_00027842;
  recovered_234cb(&local_74);
  puVar6 = (undefined4 *)0x0;
  if (param_2 == 0 || param_1 == 0) goto LAB_0002782d;
  local_70 = 0xffffffff;
  recovered_2dea8(&local_28,(undefined1 *)param_1,(undefined1 *)(param_2 + param_1));
  if (local_24 < 4) {
LAB_000276a1:
    if (local_24 != 0) {
LAB_000276a9:
      puVar6 = (undefined4 *)0x0;
      if ((*local_28 != -0x80) && (*local_28 != '%')) goto LAB_0002781e;
      local_70 = 4;
      local_18 = recovered_23162(0xc54);
      local_34 = local_18 + 8;
      recovered_213e3((int)local_34,0xc34);
      *local_18 = (int)&PTR_recovered_2b8b8_0005d128;
      local_18[2] = 0x408f4000;
      local_18[1] = 0;
      local_18[4] = 0x40890000;
      local_18[3] = 0;
      local_18[5] = 0;
      local_18[6] = 0x40690000;
      local_18[7] = 4;
      iVar4 = 0x28;
      do {
        *(undefined4 *)((int)local_18 + iVar4 + -8) = 0;
        *(undefined4 *)((int)local_18 + iVar4 + -4) = 0;
        *(undefined4 *)((int)local_18 + iVar4) = 0;
        iVar4 = iVar4 + 0xc;
      } while (iVar4 != 0xc28);
      local_38 = local_18 + 0x308;
      *local_38 = 0;
      local_18[0x309] = 0;
      local_18[0x30a] = 0;
      local_70 = 5;
      recovered_2ca00(local_18 + 0x30b);
      local_70 = 6;
      cVar2 = (**(code **)(*local_18 + 8))();
      piVar5 = local_18;
      if (cVar2 != '\0') goto LAB_000277b5;
      (**(code **)(*local_18 + 4))();
    }
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar3 = recovered_28b0f((int *)&local_28,0);
    if ((uVar3 != 0x74727565) && (uVar3 != 0x10000)) goto LAB_000276a9;
    local_70 = 1;
    local_14 = recovered_23162(0xd4);
    recovered_213e3((int)(local_14 + 0xc),0xa4);
    *local_14 = (int)&PTR_recovered_28b68_0005d0e8;
    local_2c = local_14 + 1;
    *local_2c = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    local_30 = local_14 + 4;
    *local_30 = 0;
    local_14[5] = 0;
    local_14[6] = 0;
    local_14[7] = 0;
    local_14[8] = 0;
    local_14[9] = 0;
    local_14[10] = 0;
    local_14[0xb] = 0;
    local_14[0x10] = 0;
    local_14[0x14] = 0;
    local_14[0x18] = 0;
    *(undefined2 *)(local_14 + 0x1c) = 0;
    *(undefined2 *)(local_14 + 0x1e) = 0;
    local_14[0x21] = 0;
    *(undefined2 *)((int)local_14 + 0x92) = 0;
    *(undefined2 *)((int)local_14 + 0x9a) = 0;
    local_14[0x29] = 0;
    local_70 = 2;
    recovered_29938(local_14 + 0x2b);
    local_70 = 3;
    cVar2 = (**(code **)(*local_14 + 8))();
    piVar5 = local_14;
    if (cVar2 == '\0') {
      (**(code **)(*local_14 + 4))();
      goto LAB_000276a1;
    }
LAB_000277b5:
    local_70 = 7;
    local_1c = piVar5;
    puVar6 = recovered_23162(0x30);
    puVar6[0xb] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *puVar6 = local_1c;
    fVar1 = 1.0;
    if (1.0 < local_3c) {
      fVar1 = local_3c;
    }
    puVar6[1] = fVar1;
  }
LAB_0002781e:
  local_24 = 0;
  recovered_23194();
LAB_0002782d:
  recovered_234e0(&local_74);
  return puVar6;
}
