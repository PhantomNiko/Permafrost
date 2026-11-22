/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de648 (*(uint64_t volatile *)(0x226c298U))
#define DAT_020de650 (*(uint64_t volatile *)(0x226c2a0U))
#define local_38 (*(int * *)(frame + 56))
#define local_40 (*(undefined8 * *)(frame + 48))
#define local_48 (*(long *)(frame + 40))
#define local_50 (*(undefined1 * *)(frame + 32))
#define local_60 (*(long (*)[2])(frame + 16))
#define str_020ab05f (*(char (*)[1])(0x20fc6ddU))
#define str_020ab07f (*(char (*)[1])(0x20fc6fdU))
ulong recovered_20c42b0(int *param_1,char *param_2,int *param_3,ulong param_4,undefined8 *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  uchar uVar2;
  uint uVar3;
  undefined1 *buffer;
  long lVar4;
  long *plVar5;
  int *unaff_R15;
  ulong uVar6;

  if ((param_4 < 2) || (*param_3 != 6)) {
    uVar6 = 0;
    pf_varargs_205eb00__8_(param_1,param_2,str_020ab05f,(ulonglong)param_2);
    goto LAB_02085c2b;
  }
  if ((param_3[1] != 0) && (lVar4 = DAT_020de648, lVar4 != 0)) {
    lVar1 = DAT_020de650;
    plVar5 = (long *)(lVar1 + 8);
    do {
      if ((int)plVar5[-1] == param_3[1]) {
        lVar4 = *plVar5;
        if (((lVar4 != 0) && (*(char *)(lVar4 + 7) == '\0')) && (*(char *)(lVar4 + 6) == '\x01')) {
          local_48 = param_4 - 1;
          unaff_R15 = param_3;
          local_40 = param_5;
          local_38 = param_1;
          goto LAB_02085b57;
        }
        break;
      }
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *param_5 = 5;
  *(undefined4 *)(param_5 + 1) = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  goto LAB_02085c28;
  while( true ) {
    buffer = local_50;
    if (local_50 == (undefined1 *)0x0) {
      buffer = recovered_2000ad0(1);
      if (buffer == (undefined1 *)0x0) goto LAB_02085c45;
      *buffer = 0;
    }
    uVar3 = recovered_20a93d0((long *)(lVar4 + 0x28),buffer);
    recovered_2000bb0(buffer);
    if ((char)uVar3 == '\0') goto LAB_02085c62;
    local_48 = local_48 + -1;
    if (local_48 == 0) break;
LAB_02085b57:
    unaff_R15 = unaff_R15 + 0x10;
    local_60[0] = 0;
    local_60[1] = 0;
    local_50 = (undefined1 *)0x0;
    uVar2 = recovered_20a8f50(unaff_R15,local_60,0);
    if (uVar2 == '\0') {
      recovered_2000bb0(local_50);
LAB_02085c45:
      recovered_2000bb0((void *)0x0);
LAB_02085c62:
      uVar6 = 0;
      pf_varargs_205eb00___(local_38,param_2,str_020ab07f);
      goto LAB_02085c2b;
    }
  }
  *local_40 = 0x100000005;
  *(undefined4 *)(local_40 + 1) = 0x3f800000;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
LAB_02085c28:
  uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
LAB_02085c2b:
  return uVar6 & 0xffffffff;
}
