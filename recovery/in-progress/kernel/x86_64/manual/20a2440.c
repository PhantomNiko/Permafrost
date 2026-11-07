/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a40e9 (*(uint8_t *)(0x20f48aaU))
#define DAT_020a40eb (*(uint8_t *)(0x20f48acU))
#define DAT_020a40ed (*(uint8_t *)(0x20f48aeU))
#define DAT_020a40f0 (*(uint8_t *)(0x20f48b1U))
#define local_40 (*(ulong *)(frame + 128))
#define local_50 (*(ulong *)(frame + 112))
#define local_60 (*(ulong *)(frame + 96))
#define local_70 (*(ulong *)(frame + 80))
#define local_80 (*(undefined8 *)(frame + 64))
#define local_90 (*(undefined8 *)(frame + 48))
#define local_a0 (*(undefined8 *)(frame + 32))
#define local_a8 (*(undefined4 *)(frame + 24))
#define local_b0 (*(ulong *)(frame + 16))
#define uStack_38 (*(ulong *)(frame + 136))
#define uStack_48 (*(ulong *)(frame + 120))
#define uStack_58 (*(ulong *)(frame + 104))
#define uStack_64 (*(undefined4 *)(frame + 92))
#define uStack_68 (*(undefined4 *)(frame + 88))
#define uStack_78 (*(undefined8 *)(frame + 72))
#define uStack_88 (*(undefined8 *)(frame + 56))
#define uStack_98 (*(undefined8 *)(frame + 40))
uchar recovered_20a2440(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  byte *left;
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 in_R9;

  uVar1 = recovered_20a2df0(param_1,param_2);
  if (uVar1 == '\0') {
LAB_02064cdf:
    uVar1 = '\0';
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    uVar1 = '\x01';
    if (uVar6 < *puVar5) {
      do {
        left = *(byte **)(puVar5[2] + uVar6 * 8);
        iVar3 = recovered_2002eb0((char *)left,&DAT_020a40e9);
        if ((((iVar3 != 0) && (iVar3 = recovered_2002eb0((char *)left,&DAT_020a40eb), iVar3 != 0))
            && (iVar3 = recovered_2002eb0((char *)left,&DAT_020a40ed), iVar3 != 0)) &&
           (iVar3 = recovered_2002eb0((char *)left,&DAT_020a40f0), iVar3 != 0)) {
          return '\x01';
        }
        param_1[2] = param_1[2] + 1;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        uVar2 = recovered_20a2df0(param_1,&local_b0);
        if (uVar2 == '\0') {
          recovered_205ec00(param_2);
          goto LAB_02064cdf;
        }
        uVar4 = recovered_20a25e0((int *)*param_1,left,(uint *)param_2,(uint *)&local_b0,&local_70,
                                  in_R9);
        recovered_205ec00(param_2);
        recovered_205ec00(&local_b0);
        if ((char)uVar4 == '\0') goto LAB_02064cdf;
        if (param_2 != (ulong *)0x0) {
          recovered_205ec00(param_2);
          param_2[6] = local_40;
          param_2[7] = uStack_38;
          param_2[4] = local_50;
          param_2[5] = uStack_48;
          param_2[2] = local_60;
          param_2[3] = uStack_58;
          *param_2 = local_70;
          param_2[1] = CONCAT44(uStack_64,uStack_68);
        }
        puVar5 = (ulong *)param_1[1];
        uVar6 = param_1[2];
      } while (uVar6 < *puVar5);
    }
  }
  return uVar1;
}
