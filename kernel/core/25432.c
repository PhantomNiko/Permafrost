#include "functions.h"
#undef DAT_0005cddc
#define DAT_0005cddc (*(uint8_t *)(0x5cddcU))
#undef LAB_000255f1
#define LAB_000255f1 (*(uint8_t *)(0x255f1U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
#define local_64 (*(undefined4 *)(frame + 168))
#define local_60 (*(undefined4 *)(frame + 172))
#define local_4c (*(undefined * *)(frame + 192))
#define local_48 (*(undefined * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_40 (*(undefined1 * *)(frame + 204))
#define local_3c (*(undefined1 * *)(frame + 208))
#define local_2c (*(int *)(frame + 224))
#define local_28 (*(int *)(frame + 228))
#define local_24 (*(undefined4 *)(frame + 232))
#define in_stack_00000008 (*(undefined4 * *)(frame + 276))
#define local_20 (*(undefined4 *)(frame + 236))
#define local_1c (*(undefined4 *)(frame + 240))
#define local_18 (*(int * *)(frame + 244))
#define local_14 (*(undefined4 *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25432
 */

byte * FUN_00025432(int param_1)

{
  unsigned char frame[300] = {0};

  int *piVar1;
  int iVar2;
  byte *pbVar3;

  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  recovered_2538c(in_stack_00000008,&local_2c);
  local_20 = 0;
  recovered_23194();
  local_3c = auStackY_fc + 0x80;
  local_2c = 0;
  local_24 = 0;
  local_28 = 0;
  local_4c = PTR_LAB_0005d040;
  local_48 = &DAT_0005cddc;
  local_40 = &LAB_000255f1;
  local_44 = auStackY_fc + 0xf8;
  recovered_234cb(&local_64);
  if (param_1 == 0) {
    pbVar3 = (byte *)0x0;
    goto LAB_00025535;
  }
  local_60 = 1;
  piVar1 = recovered_2262b(param_1,0x57557);
  if (piVar1 != (int *)0x0) {
    local_60 = 2;
    local_18 = piVar1;
    iVar2 = recovered_22c3f(piVar1,0,2);
    if (iVar2 == 0) {
      local_60 = 3;
      local_14 = recovered_22cb8((int)local_18);
      if ((int)local_14 < 0) goto LAB_000254e8;
      local_60 = 4;
      iVar2 = recovered_22c3f(local_18,0,0);
      if (iVar2 != 0) goto LAB_000254e8;
      local_60 = 5;
      recovered_25ec4(&local_2c,local_14);
      if (local_28 == 0) {
        local_14 = 1;
      }
      else {
        local_60 = 6;
        iVar2 = recovered_229e9(local_2c,1,local_28,local_18);
        local_14 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == local_28);
      }
    }
    else {
LAB_000254e8:
      local_14 = 0;
    }
    local_60 = 7;
    iVar2 = recovered_229a9(local_18);
    if (((byte)local_14 & iVar2 == 0) != 0) {
      local_60 = 8;
      pbVar3 = recovered_23b42(local_2c,local_28,in_stack_00000008);
      goto LAB_00025535;
    }
  }
  pbVar3 = (byte *)0x0;
LAB_00025535:
  local_28 = 0;
  recovered_23194();
  recovered_234e0(&local_64);
  return pbVar3;
}
