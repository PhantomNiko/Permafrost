/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_100 (*(undefined8 *)(frame + 432))
#define local_108 (*(undefined8 *)(frame + 424))
#define local_118 (*(undefined1 (*)[16])(frame + 408))
#define local_298 (*(char (*)[384])(frame + 24))
#define local_38 (*(undefined1 * *)(frame + 632))
#define local_40 (*(undefined8 * *)(frame + 624))
#define local_48 (*(undefined8 *)(frame + 616))
#define local_58 (*(undefined1 * *)(frame + 600))
#define local_60 (*(undefined8 * *)(frame + 592))
#define local_68 (*(undefined8 *)(frame + 584))
#define local_f0 (*(undefined8 *)(frame + 448))
#define local_f8 (*(undefined8 *)(frame + 440))
uchar recovered_20de1d0(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,long param_10,undefined8 param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *out;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  uchar uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong size;

  if (param_2 == (char *)0x0 || param_1 == (long *)0x0) {
    return '\0';
  }
  local_60 = &param_7;
  local_48 = 0x3000000010;
  local_58 = local_118;
  local_68 = 0x3000000010;
  local_108 = param_3;
  local_100 = param_4;
  local_f8 = param_5;
  local_f0 = param_6;
  local_40 = local_60;
  local_38 = local_58;
  uVar1 = recovered_2004bb0(local_298,0x180,param_2,&local_48);
  if ((int)uVar1 < 0) {
    return '\0';
  }
  size = (ulong)uVar1;
  if (uVar1 < 0x180) {
    lVar3 = *param_1;
    uVar7 = param_1[1];
    uVar4 = size + lVar3 + 1;
    if (uVar7 < uVar4) {
      uVar6 = 0x20;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
      for (; uVar6 < uVar4; uVar6 = uVar6 * 2) {
        if ((long)uVar6 < 0) {
          uVar6 = uVar4;
          break;
        }
      }
      pvVar2 = recovered_2000d40((void *)param_1[2],uVar6);
      if (pvVar2 == (void *)0x0) {
        return '\0';
      }
      param_1[2] = (long)pvVar2;
      param_1[1] = uVar6;
      lVar3 = *param_1;
    }
    if (uVar1 != 0) {
      recovered_2001410((void *)(lVar3 + param_1[2]),local_298,size);
      lVar3 = *param_1;
    }
    *param_1 = lVar3 + size;
    *(undefined1 *)(param_1[2] + lVar3 + size) = 0;
    return '\x01';
  }
  uVar7 = size + 1;
  out = recovered_2000ad0(uVar7);
  if (out == (char *)0x0) {
    return '\0';
  }
  recovered_2004bb0(out,uVar7,param_2,&local_68);
  lVar3 = *param_1;
  uVar4 = param_1[1];
  uVar7 = uVar7 + lVar3;
  if (uVar4 < uVar7) {
    uVar6 = 0x20;
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    for (; uVar6 < uVar7; uVar6 = uVar6 * 2) {
      if ((long)uVar6 < 0) {
        uVar6 = uVar7;
        break;
      }
    }
    pvVar2 = recovered_2000d40((void *)param_1[2],uVar6);
    if (pvVar2 == (void *)0x0) {
      uVar5 = '\0';
      goto LAB_02098b1d;
    }
    param_1[2] = (long)pvVar2;
    param_1[1] = uVar6;
    lVar3 = *param_1;
  }
  else {
    pvVar2 = (void *)param_1[2];
  }
  recovered_2001410((void *)((long)pvVar2 + lVar3),out,size);
  lVar3 = *param_1;
  *param_1 = size + lVar3;
  *(undefined1 *)(param_1[2] + size + lVar3) = 0;
  uVar5 = '\x01';
LAB_02098b1d:
  recovered_2000bb0(out);
  return uVar5;
}
