/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a40fd (*(uint8_t *)(0x20f48b8U))
#define local_38 (*(ulong *)(frame + 136))
#define local_48 (*(ulong *)(frame + 120))
#define local_58 (*(ulong *)(frame + 104))
#define local_68 (*(ulong *)(frame + 88))
#define local_78 (*(undefined8 *)(frame + 72))
#define local_88 (*(undefined8 *)(frame + 56))
#define local_98 (*(undefined8 *)(frame + 40))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(ulong *)(frame + 24))
#define uStack_30 (*(ulong *)(frame + 144))
#define uStack_40 (*(ulong *)(frame + 128))
#define uStack_50 (*(ulong *)(frame + 112))
#define uStack_5c (*(undefined4 *)(frame + 100))
#define uStack_60 (*(undefined4 *)(frame + 96))
#define uStack_70 (*(undefined8 *)(frame + 80))
#define uStack_80 (*(undefined8 *)(frame + 64))
#define uStack_90 (*(undefined8 *)(frame + 48))
uchar recovered_20a3100(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_R9;

  uVar1 = recovered_20a3240(param_1,param_2);
  if (uVar1 != '\0') {
    if (*(ulong *)param_1[1] <= param_1[2]) {
      return '\x01';
    }
    iVar2 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),&DAT_020a40fd);
    if (iVar2 != 0) {
      return '\x01';
    }
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    param_1[2] = param_1[2] + 1;
    uVar1 = recovered_20a3100(param_1,&local_a8);
    if (uVar1 == '\0') {
      recovered_205ec00(param_2);
    }
    else {
      uVar3 = recovered_20a25e0((int *)*param_1,&DAT_020a40fd,(uint *)param_2,(uint *)&local_a8,
                                &local_68,in_R9);
      recovered_205ec00(param_2);
      recovered_205ec00(&local_a8);
      if ((char)uVar3 != '\0') {
        if (param_2 == (ulong *)0x0) {
          return '\x01';
        }
        recovered_205ec00(param_2);
        param_2[6] = local_38;
        param_2[7] = uStack_30;
        param_2[4] = local_48;
        param_2[5] = uStack_40;
        param_2[2] = local_58;
        param_2[3] = uStack_50;
        *param_2 = local_68;
        param_2[1] = CONCAT44(uStack_5c,uStack_60);
        return '\x01';
      }
    }
  }
  return '\0';
}
