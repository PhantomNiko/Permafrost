/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_30 (*(long *)(frame + 96))
#define lStack_40 (*(long *)(frame + 80))
#define local_38 (*(long *)(frame + 88))
#define local_48 (*(long *)(frame + 72))
#define local_58 (*(char * *)(frame + 56))
#define local_60 (*(float *)(frame + 48))
#define local_68 (*(undefined8 *)(frame + 40))
#define local_70 (*(ulong *)(frame + 32))
#define local_78 (*(ulong * *)(frame + 24))
#define local_80 (*(ulonglong *)(frame + 16))
#define str_020ab5a4 (*(char (*)[1])(0x20fcc1bU))
#define str_020ab5b7 (*(char (*)[1])(0x20fcc2eU))
#define str_020ab5e4 (*(char (*)[1])(0x20fcc5bU))
#define uStack_50 (*(undefined8 *)(frame + 64))
uchar recovered_20e18e0(long param_1,ulong *param_2,char *param_3,long param_4,undefined8 in_R9)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  long lVar2;
  char *vararg0;
  bool bVar3;

  local_68 = 0;
  local_60 = 0.0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  if ((param_4 == 0 || (param_2 == (ulong *)0x0 || param_1 == 0)) || (*param_2 < 2)) {
    pf_varargs_205eb00___((void *)param_1,param_3,str_020ab5a4);
    return '\0';
  }
  local_70 = 1;
  local_80 = param_1;
  local_78 = param_2;
  uVar1 = recovered_20a1dc0(&local_80,&local_68);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (local_70 != *param_2) {
    recovered_205ec00(&local_68);
    vararg0 = str_020ab5e4;
    if (param_3 != (char *)0x0) {
      vararg0 = param_3;
    }
    pf_varargs_205eb00__8_
              ((void *)param_1,*(char **)(param_2[2] + local_70 * 8),str_020ab5b7,(ulonglong)vararg0
              );
    return '\0';
  }
  switch((uintptr_t)((undefined4)local_68)) {
  case 1:
  case 5:
  case 6:
    bVar3 = PF_PART4(local_68, 4) == 0;
    break;
  case 2:
    bVar3 = (bool)(-(local_60 != 0.0) & 1);
    goto LAB_0209bca0;
  case 3:
    if (local_58 == (char *)0x0) goto switchD_0209bc08_default;
    bVar3 = *local_58 == '\0';
    break;
  case 4:
    bVar3 = local_48 == 0;
    break;
  case 7:
    lVar2 = lStack_40;
    if (lStack_40 == 0) goto switchD_0209bc08_default;
LAB_0209bc6d:
    bVar3 = *(long *)(lVar2 + 8) == 0;
    break;
  case 8:
    lVar2 = local_38;
    if (local_38 != 0) goto LAB_0209bc6d;
  default:
switchD_0209bc08_default:
    bVar3 = false;
    goto LAB_0209bca0;
  case 9:
    bVar3 = lStack_30 == 0;
  }
  bVar3 = !bVar3;
LAB_0209bca0:
  recovered_205ec00(&local_68);
  *(bool *)param_4 = bVar3;
  return '\x01';
}
