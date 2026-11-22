/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(uint *)(frame + 28))
#define local_38 (*(uint *)(frame + 24))
#define local_3c (*(int *)(frame + 20))
#define str_020a5c48 (*(char (*)[1])(0x20f63eaU))
#define str_020a5c68 (*(char (*)[1])(0x20f640aU))
ulong recovered_20b3950(int *param_1,char *param_2,long param_3,ulong param_4,undefined4 *param_5,
                       uint *in_R9)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  char *format;
  ulong uVar2;

  local_38 = 0;
  local_34 = 0;
  local_3c = 1;
  if (param_4 - 4 < 0xfffffffffffffffe) {
LAB_020763d7:
    if ((param_4 & 0xfffffffffffffffe) == 2) {
LAB_020763e1:
      uVar2 = 0;
      goto LAB_020763fe;
    }
    format = str_020a5c48;
  }
  else {
    uVar1 = recovered_20b3650(param_1,param_2,param_3,param_4,0,(int *)&local_38);
    if (uVar1 == '\0') goto LAB_020763d7;
    uVar1 = recovered_20b3650(param_1,param_2,param_3,param_4,1,(int *)&local_34);
    if (uVar1 == '\0') goto LAB_020763d7;
    if (param_4 != 3) {
      local_34 = local_34 & 0xff;
LAB_02076416:
      *(char *)(ulong)local_38 = (char)local_34;
      local_34 = local_34 & 0xff;
      goto LAB_0207641d;
    }
    uVar1 = recovered_20b3650(param_1,param_2,param_3,3,2,&local_3c);
    if (uVar1 == '\0') goto LAB_020763e1;
    if (local_3c == 4) {
      *(uint *)(ulong)local_38 = local_34;
LAB_0207641d:
      *param_5 = 1;
      param_5[1] = local_34;
      param_5[2] = (float)(int)local_34;
      *(undefined8 *)(param_5 + 4) = 0;
      *(undefined8 *)(param_5 + 6) = 0;
      *(undefined8 *)(param_5 + 8) = 0;
      *(undefined8 *)(param_5 + 10) = 0;
      *(undefined8 *)(param_5 + 0xc) = 0;
      *(undefined8 *)(param_5 + 0xe) = 0;
      uVar2 = CONCAT71((int7)((ulong)param_5 >> 8),1);
      goto LAB_020763fe;
    }
    if (local_3c == 2) {
      *(short *)(ulong)local_38 = (short)local_34;
      local_34 = local_34 & 0xffff;
      goto LAB_0207641d;
    }
    if (local_3c == 1) goto LAB_02076416;
    format = str_020a5c68;
  }
  uVar2 = 0;
  pf_varargs_205eb00__8_(param_1,param_2,format,(ulonglong)param_2);
LAB_020763fe:
  return uVar2 & 0xffffffff;
}
