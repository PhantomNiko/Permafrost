/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define format (*(char * *)(frame + 28))
#define in_stack_ffffffb0 (*(char * *)(frame + 32))
#define local_14 (*(int *)(frame + 92))
#define local_18 (*(int *)(frame + 88))
#define local_1c (*(int *)(frame + 84))
#define local_20 (*(int *)(frame + 80))
#define local_24 (*(undefined4 *)(frame + 76))
#define local_28 (*(char * *)(frame + 72))
#define local_2c (*(float *)(frame + 68))
#define local_30 (*(int *)(frame + 64))
#define local_34 (*(ulong *)(frame + 60))
#define local_38 (*(int * *)(frame + 56))
#define local_3c (*(uint *)(frame + 52))
#define local_40 (*(uint * *)(frame + 48))
#define local_44 (*(int * *)(frame + 44))
#define str_020972c4 (*(char (*)[1])(0x20d5753U))
#define str_020972d7 (*(char (*)[1])(0x20d5766U))
#define str_02097304 (*(char (*)[1])(0x20d5793U))
#define token (*(char * *)(frame + 24))
undefined4 recovered_20b9070(int *incoming_ecx,uint *incoming_edx,char *param_3,undefined1 *param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined4 extraout_EAX = 0;
  uint incoming_edx_00;
  bool bVar2;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0.0;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((param_4 == (undefined1 *)0x0 || (incoming_edx == (uint *)0x0 || incoming_ecx == (int *)0x0))
     || (*incoming_edx < 2)) {
    format = str_020972c4;
    token = param_3;
LAB_020869e2:
    pf_varargs_204ff60__4_(incoming_ecx,token,format,(uint)in_stack_ffffffb0);
    return 0;
  }
  local_3c = 1;
  local_44 = incoming_ecx;
  local_40 = incoming_edx;
  local_38 = incoming_ecx;
  uVar1 = recovered_207f710((ulonglong *)&local_44,&local_34);
  if (uVar1 == '\0') {
    return 0;
  }
  if (local_3c != *incoming_edx) {
    recovered_2043a90(&local_34,incoming_edx_00);
    token = *(char **)(incoming_edx[2] + local_3c * 4);
    in_stack_ffffffb0 = str_02097304;
    if (param_3 != (char *)0x0) {
      in_stack_ffffffb0 = param_3;
    }
    format = str_020972d7;
    incoming_ecx = local_38;
    goto LAB_020869e2;
  }
  switch((uintptr_t)(local_34)) {
  case 1:
  case 5:
  case 6:
    bVar2 = local_30 == 0;
    break;
  case 2:
    bVar2 = local_2c != 0.0;
    goto LAB_02086aa5;
  case 3:
    if (local_28 == (char *)0x0) goto LAB_02086a8f;
    bVar2 = *local_28 == '\0';
    break;
  case 4:
    bVar2 = local_20 == 0;
    break;
  case 7:
    if (local_1c == 0) goto LAB_02086a8f;
    bVar2 = *(int *)(local_1c + 8) == 0;
    break;
  case 8:
    if (local_18 == 0) goto LAB_02086a8f;
    bVar2 = *(int *)(local_18 + 4) == 0;
    break;
  case 9:
    bVar2 = local_14 == 0;
    break;
  default:
LAB_02086a8f:
    bVar2 = false;
    goto LAB_02086aa5;
  }
  bVar2 = !bVar2;
LAB_02086aa5:
  recovered_2043a90(&local_34,incoming_edx_00);
  *param_4 = bVar2;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}
