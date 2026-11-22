/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_38 (*(int * *)(frame + 72))
#define local_48 (*(ulong *)(frame + 56))
#define local_58 (*(void * *)(frame + 40))
#define local_68 (*(undefined8 *)(frame + 24))
#define piStack_30 (*(int * *)(frame + 80))
#define piStack_40 (*(int * *)(frame + 64))
#define pvStack_50 (*(void * *)(frame + 48))
#define uStack_5c (*(undefined4 *)(frame + 36))
#define uStack_60 (*(undefined4 *)(frame + 32))
uint recovered_20a0670(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  int *piVar3;
  undefined8 extraout_RAX = 0;
  void *out;
  char *text;

  if (param_2 == (undefined8 *)0x0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  piStack_40 = (int *)0x0;
  local_38 = (int *)0x0;
  piStack_30 = (int *)0x0;
  local_68 = *param_2;
  uStack_60 = *(undefined4 *)(param_2 + 1);
  switch((uintptr_t)((int)local_68)) {
  case 3:
    text = &DAT_020a259c;
    if ((char *)param_2[2] != (char *)0x0) {
      text = (char *)param_2[2];
    }
    uVar1 = recovered_2002e80(text);
    pvVar2 = recovered_2000ad0(uVar1 + 1);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (uVar1 != 0) {
      recovered_2001410(pvVar2,text,uVar1);
    }
    *(undefined1 *)((long)pvVar2 + uVar1) = 0;
    recovered_205ec00(&local_68);
    local_68 = CONCAT44(PF_PART4(local_68, 4),3);
    local_58 = pvVar2;
    break;
  case 4:
    pvVar2 = (void *)param_2[3];
    uVar1 = param_2[4];
    if (pvVar2 == (void *)0x0 && uVar1 != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      out = (void *)0x0;
    }
    else {
      out = recovered_2000ad0(uVar1);
      if (out == (void *)0x0) {
        return 0;
      }
      recovered_2001410(out,pvVar2,uVar1);
    }
    recovered_205ec00(&local_68);
    local_68 = CONCAT44(PF_PART4(local_68, 4),4);
    pvStack_50 = out;
    local_48 = uVar1;
    break;
  case 7:
    piVar3 = (int *)param_2[5];
    piStack_40 = piVar3;
    if (piVar3 == (int *)0x0) break;
    goto LAB_02062e9b;
  case 8:
    piVar3 = (int *)param_2[6];
    local_38 = piVar3;
    goto joined_r0x02062e99;
  case 9:
    piVar3 = (int *)param_2[7];
    piStack_30 = piVar3;
joined_r0x02062e99:
    if (piVar3 != (int *)0x0) {
LAB_02062e9b:
      *piVar3 = *piVar3 + 1;
    }
  }
  recovered_205ec00(param_1);
  param_1[6] = local_38;
  param_1[7] = piStack_30;
  param_1[4] = local_48;
  param_1[5] = piStack_40;
  param_1[2] = local_58;
  param_1[3] = pvStack_50;
  *param_1 = local_68;
  param_1[1] = CONCAT44(uStack_5c,uStack_60);
  return (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
}
