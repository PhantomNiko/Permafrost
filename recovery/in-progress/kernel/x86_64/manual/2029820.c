/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1530 (*(uint8_t *)(0x20eaf10U))
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a1b20 (*(float *)(0x20eb2f0U))
#define local_38 (*(ulong *)(frame + 40))
#define local_40 (*(long *)(frame + 32))
#define local_48 (*(float (*)[2])(frame + 24))
#define local_50 (*(ulong *)(frame + 16))
uchar recovered_2029820(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_2 - param_4 < 4 || param_2 < param_4) {
    return '\0';
  }
  uVar2 = *(uint *)(param_1 + param_4);
  *param_5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (param_2 - (param_4 + 4) < 4 || param_2 < param_4 + 4) {
    return '\0';
  }
  uVar2 = *(uint *)(param_1 + 4 + param_4);
  param_5[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (param_2 - (param_4 + 8) < 4 || param_2 < param_4 + 8) {
    return '\0';
  }
  uVar2 = *(uint *)(param_1 + 8 + param_4);
  param_5[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (param_2 - (param_4 + 0xc) < 4 || param_2 < param_4 + 0xc) {
    return '\0';
  }
  uVar2 = *(uint *)(param_1 + 0xc + param_4);
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = param_4 + 0x10;
  if (uVar2 != 0) {
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < (ulong)uVar2) {
      return '\0';
    }
    uVar3 = uVar3 + uVar2;
  }
  if (param_2 - uVar3 < 4 || param_2 < uVar3) {
    return '\0';
  }
  while( true ) {
    if (param_2 < uVar3 + 4) {
      return '\0';
    }
    if (param_2 - (uVar3 + 4) < 4) {
      return '\0';
    }
    uVar2 = *(uint *)(param_1 + uVar3);
    uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(param_1 + 4 + uVar3);
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar3 = uVar3 + 8;
    if (uVar5 == 0) break;
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < (ulong)uVar2) {
      return '\0';
    }
    if ((uVar5 == 6) && (3 < uVar2)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0xfe < uVar5) {
        uVar5 = 0xff;
      }
      param_5[4] = uVar5;
    }
    else if ((uVar5 == 8) && (3 < uVar2)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      *(bool *)(param_5 + 3) =
           ((uVar5 >> 0x18 != 0 || (uVar5 & 0xff0000) != 0) || (uVar5 & 0xff00) != 0) ||
           (uVar5 & 0xff) != 0;
    }
    else if ((uVar5 == 0xf) && (7 < uVar2)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      param_5[5] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = *(uint *)(param_1 + 4 + uVar3);
      param_5[6] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    else if ((uVar5 == 0x21) && (3 < uVar2)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      local_50 = CONCAT44(PF_PART4(local_50, 4),
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
      local_48[0] = 0.0;
      local_40 = param_3;
      local_38 = uVar3;
      recovered_2001410(local_48,&local_50,4);
      if (local_48[0] <= 0.0) {
        param_5[4] = 0;
      }
      else if (DAT_020a1570 <= local_48[0]) {
        param_5[4] = 0xff;
      }
      else {
        param_5[4] = (uint)(long)((double)(local_48[0] * DAT_020a1b20) +
                                 *(double *)
                                  (&DAT_020a1530 + (ulong)(0.0 <= local_48[0] * DAT_020a1b20) * 8));
      }
      uVar3 = local_38;
      param_3 = local_40;
    }
    uVar3 = uVar3 + uVar2;
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < 4) {
      return '\0';
    }
  }
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_3 + 0x10);
    if ((ulong)uVar2 == 4) {
      if (param_2 - uVar3 < 4 || param_2 < uVar3) {
        return '\0';
      }
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar4 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
    }
    else {
      if (param_2 - uVar3 < 8 || param_2 < uVar3) {
        return '\0';
      }
      uVar4 = *(ulong *)(param_1 + uVar3);
      uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    }
    *(ulong *)(param_5 + 8) = uVar4;
    local_50 = uVar3 + uVar2;
    uVar1 = recovered_20294f0(param_1,param_2,&local_50,uVar2,(ulong *)local_48);
    if (uVar1 != '\0') {
      return uVar4 != 0 && (param_5[1] != 0 && *param_5 != 0);
    }
  }
  return '\0';
}
