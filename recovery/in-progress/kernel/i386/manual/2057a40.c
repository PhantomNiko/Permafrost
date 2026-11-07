/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(void * *)(frame + 108))
#define local_18 (*(uint *)(frame + 104))
#define local_1c (*(uint *)(frame + 100))
#define local_20 (*(int *)(frame + 96))
#define local_24 (*(int *)(frame + 92))
#define local_5c (*(int *)(frame + 36))
#define local_64 (*(undefined1 (*)[8])(frame + 28))
undefined4 recovered_2057a40(int *incoming_ecx,int incoming_edx,int param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  void *buffer;
  undefined4 uVar4;
  undefined4 uVar5;

  local_1c = incoming_ecx[4];
  if ((local_1c == 0) || (incoming_ecx[5] == 0)) {
    return 0;
  }
  uVar3 = (incoming_edx - 1U) / local_1c;
  local_1c = (incoming_edx - 1U) % local_1c;
  recovered_2001e00(local_64,0,0x40);
  if ((uint)incoming_ecx[8] <= uVar3) {
    return 0;
  }
  uVar1 = incoming_ecx[7];
  if (uVar1 < 0x20) {
    return 0;
  }
  buffer = recovered_2001650(incoming_ecx[1]);
  if (buffer == (void *)0x0) {
    return 0;
  }
  local_18 = uVar1 * uVar3;
  iVar2 = *incoming_ecx;
  uVar3 = incoming_ecx[1];
  uVar5 = 0;
  local_14 = buffer;
  if (iVar2 == 0) goto LAB_02041fea;
  if ((uVar3 & 0x1ff) == 0 && 0x1ff < uVar3) {
    uVar4 = recovered_204ed30((uint)*(byte *)(iVar2 + 4),
                              (uVar3 >> 9) * (local_18 / uVar3 + incoming_ecx[6]) +
                              *(int *)(iVar2 + 8),(int)buffer,uVar3);
    uVar5 = 0;
    if ((char)uVar4 == '\0') goto LAB_02041fea;
    recovered_2001b70(local_64,(void *)((int)buffer + local_18 % (uint)incoming_ecx[1]),
                      incoming_ecx[7]);
    recovered_2001710(buffer);
    if (local_5c == 0) {
      return 0;
    }
    uVar3 = local_1c * incoming_ecx[5];
    local_14 = recovered_2001650(incoming_ecx[1]);
    if (local_14 == (void *)0x0) {
      return 0;
    }
    local_20 = local_5c;
    local_24 = *incoming_ecx;
    local_18 = incoming_ecx[1];
    uVar5 = 0;
    local_1c = uVar3;
    if (local_24 == 0) goto LAB_02041fea;
    if (((local_18 & 0x1ff) == 0 && 0x1ff < local_18) &&
       (uVar5 = recovered_204ed30((uint)*(byte *)(local_24 + 4),
                                  (local_18 >> 9) * (uVar3 / local_18 + local_5c) +
                                  *(int *)(local_24 + 8),(int)local_14,local_18),
       (char)uVar5 != '\0')) {
      uVar5 = 0;
      uVar3 = local_1c % (uint)incoming_ecx[1];
      if (incoming_ecx[5] + uVar3 <= (uint)incoming_ecx[1]) {
        recovered_2001b70((void *)param_3,(void *)((int)local_14 + uVar3),incoming_ecx[5]);
        uVar5 = 1;
      }
      goto LAB_02041fea;
    }
  }
  uVar5 = 0;
LAB_02041fea:
  recovered_2001710(local_14);
  return uVar5;
}
