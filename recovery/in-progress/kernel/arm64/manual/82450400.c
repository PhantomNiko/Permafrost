/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045033f (*(uint8_t *)(0x8247a1ffU))
#define uStack_28 (*(undefined8 *)(frame + 136))
#define uStack_30 (*(undefined8 *)(frame + 128))
#define uStack_38 (*(undefined8 *)(frame + 120))
#define uStack_40 (*(undefined8 *)(frame + 112))
#define uStack_48 (*(undefined8 *)(frame + 104))
#define uStack_50 (*(undefined8 *)(frame + 96))
#define uStack_58 (*(undefined4 *)(frame + 88))
#define uStack_60 (*(ulong *)(frame + 80))
#define uStack_68 (*(undefined8 *)(frame + 72))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_78 (*(undefined8 *)(frame + 56))
#define uStack_80 (*(undefined8 *)(frame + 48))
#define uStack_88 (*(undefined8 *)(frame + 40))
#define uStack_90 (*(undefined8 *)(frame + 32))
#define uStack_98 (*(undefined4 *)(frame + 24))
#define uStack_a0 (*(undefined8 *)(frame + 16))
uchar recovered_82450400(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  int iVar3;

  uVar1 = recovered_82450498(param_1,param_2);
  if (uVar1 == '\0') {
    return '\0';
  }
  if ((param_1[2] < *(ulong *)param_1[1]) &&
     (iVar3 = recovered_82400e0c(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),&DAT_4045033f
                                ), iVar3 == 0)) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    param_1[2] = param_1[2] + 1;
    bVar2 = recovered_82450400(param_1,&uStack_60);
    if ((bVar2 & 1) == 0) {
      recovered_8243166c(param_2);
    }
    else {
      bVar2 = recovered_8244fd7c((void *)*param_1,&DAT_4045033f,param_2,&uStack_60,&uStack_a0);
      recovered_8243166c(param_2);
      recovered_8243166c(&uStack_60);
      if ((bVar2 & 1) != 0) {
        recovered_8244c9bc(param_2,&uStack_a0);
        goto LAB_40432878;
      }
    }
    uVar1 = '\0';
  }
  else {
LAB_40432878:
    uVar1 = '\x01';
  }
  return uVar1;
}
