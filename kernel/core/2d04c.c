#include "functions.h"
#undef DAT_0005cf34
#define DAT_0005cf34 (*(uint8_t *)(0x5cf34U))
#undef LAB_0002d17b
#define LAB_0002d17b (*(uint8_t *)(0x2d17bU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_4c (*(undefined1 * *)(frame + 192))
#define local_48 (*(undefined1 * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_38 (*(uint *)(frame + 212))
#define local_34 (*(int *)(frame + 216))
#define local_30 (*(int * *)(frame + 220))
#define local_2c (*(int *)(frame + 224))
#define local_28 (*(int * *)(frame + 228))
#define local_24 (*(int * *)(frame + 232))
#define local_20 (*(int *)(frame + 236))
#define local_1c (*(uint *)(frame + 240))
#define local_18 (*(int *)(frame + 244))
#define local_11 (*(byte *)(frame + 251))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
#define local_6c (*(undefined4 *)(frame + 160))
#define local_68 (*(undefined4 *)(frame + 164))
#define local_54 (*(undefined * *)(frame + 184))
#define local_50 (*(undefined * *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d04c
 */

undefined4 * recovered_2d04c(int *param_1,int *param_2,uint param_3)

{
  unsigned char frame[300] = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  local_4c = auStackY_fc + 0xf8;
  local_44 = auStackY_fc + 0x80;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = param_2[1];
  local_54 = PTR_LAB_0005d040;
  local_50 = &DAT_0005cf34;
  local_48 = &LAB_0002d17b;
  local_68 = 1;
  local_28 = param_1;
  local_24 = param_2;
  recovered_234cb(&local_6c);
  recovered_29a7c(&local_20,uVar1);
  local_2c = *local_24;
  local_30 = (int *)local_24[1];
  iVar2 = CONCAT22((short)((uint)local_24 >> 0x10),0x10ea);
  piVar3 = (int *)0x0;
  while (local_30 != piVar3) {
    local_38 = (uint)*(byte *)(local_2c + (int)piVar3);
    local_11 = (byte)((uint)iVar2 >> 8) ^ *(byte *)(local_2c + (int)piVar3);
    local_68 = 2;
    local_34 = iVar2;
    local_24 = piVar3;
    recovered_2b424(&local_20,&local_11);
    iVar2 = ((local_38 & 0xffff) + local_34) * -0x3193 + 0x58bf;
    piVar3 = (int *)((int)local_24 + 1);
  }
  iVar2 = 0;
  if ((int)param_3 < 1) {
    param_3 = 0;
  }
  if (param_3 < local_1c) {
    recovered_2cf7c(&local_20,local_20,param_3 + local_20);
    iVar4 = local_18;
    iVar2 = local_20;
    local_20 = 0;
    local_18 = 0;
  }
  else {
    local_1c = 0;
    iVar4 = 0;
  }
  piVar3 = local_28;
  *local_28 = iVar2;
  local_28[1] = local_1c;
  local_28[2] = iVar4;
  local_1c = 0;
  recovered_23194();
  recovered_234e0(&local_6c);
  return piVar3;
}
