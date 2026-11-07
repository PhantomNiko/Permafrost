/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020addf4 (*(uint32_t volatile *)(0x2106c14U))
#define local_2c (*(uint *)(frame + 20))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a5b88 (*(char (*)[1])(0x20f632aU))
ulong recovered_20b3540(int *param_1,char *param_2,long param_3,long param_4,undefined4 *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  ulong unaff_RBX;

  local_2c = 0;
  if (param_4 == 1) {
    unaff_RBX = 0;
    uVar2 = recovered_20b3650(param_1,param_2,param_3,1,0,(int *)&local_2c);
    if (uVar2 == '\0') goto LAB_02075fe4;
    if ((0x20 < (ulong)local_2c) || ((0x101018100U >> ((ulong)local_2c & 0x3f) & 1) == 0)) {
      unaff_RBX = 0;
      pf_varargs_205eb00___(param_1,param_2,str_020a5b88);
      goto LAB_02075fe4;
    }
    DAT_020addf4 = local_2c;
    *param_5 = 1;
    param_5[1] = local_2c;
    param_5[2] = (float)(int)local_2c;
    *(undefined8 *)(param_5 + 4) = 0;
    *(undefined8 *)(param_5 + 6) = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_5 + 0xe) = 0;
  }
  else {
    if (param_4 != 0) {
      unaff_RBX = 0;
      pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,1,0x20ec670U);
      goto LAB_02075fe4;
    }
    iVar1 = DAT_020addf4;
    *param_5 = 1;
    param_5[1] = iVar1;
    param_5[2] = (float)iVar1;
    *(undefined8 *)(param_5 + 4) = 0;
    *(undefined8 *)(param_5 + 6) = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_5 + 0xe) = 0;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_02075fe4:
  return unaff_RBX & 0xffffffff;
}
