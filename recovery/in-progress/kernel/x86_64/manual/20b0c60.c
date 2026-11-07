/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define str_020ab142 (*(char (*)[1])(0x20fc7beU))
uint recovered_20b0c60(int *param_1,char *param_2,undefined4 *param_3,undefined8 *param_4,
                      undefined8 in_R8,undefined8 in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  void *out;
  ulong uVar3;
  void *pvVar4;
  char *text;
  float fVar5;

  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  switch((uintptr_t)(*param_3)) {
  case 0:
    recovered_205ec00(param_4);
    *param_4 = 0;
    goto LAB_02074026;
  case 1:
    recovered_205ec00(param_4);
    uVar2 = param_3[1];
    fVar5 = (float)(int)uVar2;
    *(undefined4 *)param_4 = 1;
    break;
  case 2:
    recovered_205ec00(param_4);
    fVar5 = pf_bits_float((uint32_t)param_3[2]);
    uVar2 = (uint)fVar5;
    *(undefined4 *)param_4 = 2;
    break;
  case 3:
    text = &DAT_020a259c;
    if (*(char **)(param_3 + 4) != (char *)0x0) {
      text = *(char **)(param_3 + 4);
    }
    uVar3 = recovered_2002e80(text);
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pvVar4 = recovered_2000ad0(uVar3 + 1);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (uVar3 != 0) {
      recovered_2001410(pvVar4,text,uVar3);
    }
    *(undefined1 *)((long)pvVar4 + uVar3) = 0;
    recovered_205ec00(param_4);
    *(undefined4 *)param_4 = 3;
    param_4[2] = pvVar4;
    goto LAB_02074054;
  case 4:
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pvVar4 = *(void **)(param_3 + 6);
    uVar3 = (ulong)(uint)param_3[8];
    if (pvVar4 == (void *)0x0 && uVar3 != 0) {
      return 0;
    }
    if (param_3[8] == 0) {
      out = (void *)0x0;
    }
    else {
      out = recovered_2000ad0(uVar3);
      if (out == (void *)0x0) {
        return 0;
      }
      recovered_2001410(out,pvVar4,uVar3);
    }
    recovered_205ec00(param_4);
    *(undefined4 *)param_4 = 4;
    param_4[3] = out;
    param_4[4] = uVar3;
    goto LAB_02074054;
  case 5:
    recovered_205ec00(param_4);
    uVar2 = (uint)(param_3[1] != 0);
    if (param_3[1] != 0) {
      fVar5 = DAT_020a1570;
    }
    else {
      fVar5 = 0.0;
    }
    *(undefined4 *)param_4 = 5;
    break;
  case 6:
    recovered_205ec00(param_4);
    uVar1 = param_3[1];
    *(undefined4 *)param_4 = 6;
    *(undefined4 *)((long)param_4 + 4) = uVar1;
LAB_02074026:
    *(undefined4 *)(param_4 + 1) = 0;
    goto LAB_02074045;
  default:
    pf_varargs_205eb00___(param_1,param_2,str_020ab142);
    return 0;
  }
  *(uint *)((long)param_4 + 4) = uVar2;
  *(float *)(param_4 + 1) = fVar5;
LAB_02074045:
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
LAB_02074054:
  return (uint)CONCAT71((int7)((ulong)param_4 >> 8),1);
}
