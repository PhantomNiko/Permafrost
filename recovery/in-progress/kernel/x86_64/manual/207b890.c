/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define str_020a38fa (*(char (*)[1])(0x20edda8U))
#define str_020a3915 (*(char (*)[1])(0x20eddc3U))
uchar recovered_207b890(long param_1,uint param_2,int param_3,uint param_4,long param_5,long param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  char *vararg0;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;

  if (param_1 == 0) {
    if (param_6 == 0) {
      return '\0';
    }
    vararg0 = str_020a38fa;
LAB_0205436f:
    pf_varargs_20039e0__8_((char *)param_6,0xa0,&DAT_020a25e3,(ulonglong)vararg0);
    return '\0';
  }
  uVar2 = (ulong)param_4 + param_5;
  puVar1 = (undefined1 *)(ulong)param_2;
  if (param_3 == 3) {
    uVar2 = (ulong)(((int)uVar2 - param_2) - 4);
  }
  else if (param_3 != 2) {
    if (param_3 != 1) {
      if (param_6 == 0) {
        return '\0';
      }
      vararg0 = str_020a3915;
      goto LAB_0205436f;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      uVar4 = (undefined1)(uVar2 >> 0x20);
      uVar11 = (undefined1)(uVar2 >> 8);
      uVar9 = (undefined1)(uVar2 >> 0x10);
      uVar6 = (undefined1)(uVar2 >> 0x18);
      uVar10 = (undefined1)(uVar2 >> 0x28);
      uVar12 = (undefined1)(uVar2 >> 0x30);
      if (*(char *)(param_1 + 5) == '\x01') {
        uVar3 = uVar2;
        uVar2 = uVar2 >> 0x38;
        uVar5 = uVar12;
        uVar7 = uVar10;
        uVar8 = uVar4;
        uVar4 = uVar6;
        uVar10 = uVar9;
        uVar12 = uVar11;
      }
      else {
        uVar3 = uVar2 >> 0x38;
        uVar5 = uVar11;
        uVar7 = uVar9;
        uVar8 = uVar6;
      }
      *puVar1 = (char)uVar2;
      puVar1[1] = uVar5;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1[4] = uVar4;
      puVar1[5] = uVar10;
      puVar1[6] = uVar12;
      puVar1[7] = (char)uVar3;
      return '\x01';
    }
  }
  uVar4 = (undefined1)(uVar2 >> 0x10);
  uVar10 = (undefined1)(uVar2 >> 8);
  if (*(char *)(param_1 + 5) == '\x01') {
    uVar12 = (undefined1)(uVar2 >> 0x18);
    uVar6 = uVar4;
    uVar4 = uVar10;
  }
  else {
    uVar12 = (undefined1)uVar2;
    uVar2 = uVar2 >> 0x18 & 0xff;
    uVar6 = uVar10;
  }
  *puVar1 = uVar12;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = (char)uVar2;
  return '\x01';
}
