/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045032b (*(uint8_t *)(0x8247a1f1U))
#define DAT_4045032d (*(uint8_t *)(0x8247a1f3U))
#define DAT_4045032f (*(uint8_t *)(0x8247a1f5U))
#define DAT_40450332 (*(uint8_t *)(0x8247a1f8U))
#define uStack_58 (*(undefined8 *)(frame + 136))
#define uStack_60 (*(undefined8 *)(frame + 128))
#define uStack_68 (*(undefined8 *)(frame + 120))
#define uStack_70 (*(undefined8 *)(frame + 112))
#define uStack_78 (*(undefined8 *)(frame + 104))
#define uStack_80 (*(undefined8 *)(frame + 96))
#define uStack_88 (*(undefined4 *)(frame + 88))
#define uStack_90 (*(ulong *)(frame + 80))
#define uStack_98 (*(undefined8 *)(frame + 72))
#define uStack_a0 (*(undefined8 *)(frame + 64))
#define uStack_a8 (*(undefined8 *)(frame + 56))
#define uStack_b0 (*(undefined8 *)(frame + 48))
#define uStack_b8 (*(undefined8 *)(frame + 40))
#define uStack_c0 (*(undefined8 *)(frame + 32))
#define uStack_c8 (*(undefined4 *)(frame + 24))
#define uStack_d0 (*(undefined8 *)(frame + 16))
uchar recovered_8244fca4(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  char *left;

  uVar1 = recovered_8245027c(param_1,param_2);
  uVar3 = '\0';
  if (uVar1 != '\0') {
    while( true ) {
      if (*(ulong *)param_1[1] <= param_1[2]) break;
      left = *(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8);
      iVar4 = recovered_82400e0c(left,&DAT_4045032b);
      if ((((iVar4 != 0) && (iVar4 = recovered_82400e0c(left,&DAT_4045032d), iVar4 != 0)) &&
          (iVar4 = recovered_82400e0c(left,&DAT_4045032f), iVar4 != 0)) &&
         (iVar4 = recovered_82400e0c(left,&DAT_40450332), iVar4 != 0)) break;
      param_1[2] = param_1[2] + 1;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_98 = 0;
      bVar2 = recovered_8245027c(param_1,&uStack_90);
      if ((bVar2 & 1) == 0) {
        recovered_8243166c(param_2);
        return '\0';
      }
      bVar2 = recovered_8244fd7c((void *)*param_1,left,param_2,&uStack_90,&uStack_d0);
      recovered_8243166c(param_2);
      recovered_8243166c(&uStack_90);
      if ((bVar2 & 1) == 0) {
        return '\0';
      }
      recovered_8244c9bc(param_2,&uStack_d0);
    }
    uVar3 = '\x01';
  }
  return uVar3;
}
