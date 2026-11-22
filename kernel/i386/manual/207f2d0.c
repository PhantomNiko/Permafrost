/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(int *)(frame + 64))
#define local_14 (*(long * *)(frame + 60))
#define local_18 (*(int * *)(frame + 56))
#define local_3c (*(ulong (*)[9])(frame + 20))
#define str_02097443 (*(char (*)[1])(0x20d58cfU))
uchar recovered_207f2d0(int *param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  uint incoming_edx;
  ulong *puVar3;
  byte bVar4;

  bVar4 = 0;
  local_10 = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = recovered_207f710((ulonglong *)&local_18,local_3c);
  if (uVar1 == '\0') {
    uVar1 = '\0';
  }
  else if (local_10 == *param_2) {
    if (param_3 == (ulong *)0x0) {
      recovered_2043a90(local_3c,incoming_edx);
    }
    else {
      recovered_2043a90(param_3,incoming_edx);
      puVar3 = local_3c;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        param_3 = param_3 + (uint)bVar4 * -2 + 1;
      }
    }
    uVar1 = '\x01';
  }
  else {
    recovered_2043a90(local_3c,incoming_edx);
    pf_varargs_204ff60___(param_1,*(char **)(param_2[2] + local_10 * 4),str_02097443);
    uVar1 = '\0';
  }
  return uVar1;
}
