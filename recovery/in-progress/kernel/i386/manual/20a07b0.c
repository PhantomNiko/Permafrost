/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define buffer (*(void * *)(frame + 20))
#define local_14 (*(int *)(frame + 76))
#define local_18 (*(void * *)(frame + 72))
#define local_1c (*(int * *)(frame + 68))
#define local_20 (*(char * *)(frame + 64))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_28 (*(undefined4 *)(frame + 56))
undefined4 recovered_20a07b0(uint incoming_ecx,uint incoming_edx,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *incoming_ecx_00;
  uint uVar5;

  if (param_3 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    *param_3 = 0;
    if (incoming_edx == 0) {
      local_18 = recovered_2001650(1);
      local_14 = 0;
      if (local_18 == (void *)0x0) {
        return 0;
      }
    }
    else {
      local_14 = 0;
      uVar5 = 1;
      local_1c = (int *)incoming_ecx;
      do {
        local_28 = 0;
        local_24 = 0;
        local_20 = (char *)0x0;
        uVar3 = recovered_2086030((int *)incoming_ecx,(int)&local_28,0);
        if ((char)uVar3 == '\0') {
          recovered_2001710(local_20);
LAB_02075491:
          buffer = (void *)0x0;
          goto LAB_0207559f;
        }
        pcVar4 = local_20;
        if (local_20 == (char *)0x0) {
          pcVar4 = recovered_2001650(1);
          if (pcVar4 == (char *)0x0) goto LAB_02075491;
          *pcVar4 = '\0';
        }
        uVar2 = recovered_2002270(pcVar4);
        local_14 = local_14 + uVar2 + (uint)(uVar5 < incoming_edx);
        recovered_2001710(pcVar4);
        iVar1 = -incoming_edx + 1 + uVar5;
        uVar5 = uVar5 + 1;
        incoming_ecx = incoming_ecx + 0x24;
      } while (iVar1 != 1);
      local_18 = recovered_2001650(local_14 + 1);
      if (local_18 == (void *)0x0) {
        return 0;
      }
      local_14 = 0;
      uVar5 = 1;
      incoming_ecx_00 = local_1c;
      do {
        local_28 = 0;
        local_24 = 0;
        local_20 = (char *)0x0;
        uVar3 = recovered_2086030(incoming_ecx_00,(int)&local_28,0);
        if ((char)uVar3 == '\0') {
          recovered_2001710(local_20);
LAB_0207558d:
          recovered_2001710((void *)0x0);
          buffer = local_18;
LAB_0207559f:
          recovered_2001710(buffer);
          return 0;
        }
        pcVar4 = local_20;
        if (local_20 == (char *)0x0) {
          pcVar4 = recovered_2001650(1);
          if (pcVar4 == (char *)0x0) goto LAB_0207558d;
          *pcVar4 = '\0';
        }
        local_1c = incoming_ecx_00;
        uVar2 = recovered_2002270(pcVar4);
        iVar1 = local_14;
        if (uVar2 != 0) {
          recovered_2001b70((void *)((int)local_18 + local_14),pcVar4,uVar2);
          local_14 = iVar1 + uVar2;
        }
        recovered_2001710(pcVar4);
        if (uVar5 < incoming_edx) {
          *(undefined1 *)((int)local_18 + local_14) = 0x20;
          local_14 = local_14 + 1;
        }
        iVar1 = -incoming_edx + 1 + uVar5;
        uVar5 = uVar5 + 1;
        incoming_ecx_00 = local_1c + 9;
      } while (iVar1 != 1);
    }
    *(undefined1 *)((int)local_18 + local_14) = 0;
    *param_3 = (int)local_18;
    uVar3 = CONCAT31((int3)((uint)local_14 >> 8),1);
  }
  return uVar3;
}
