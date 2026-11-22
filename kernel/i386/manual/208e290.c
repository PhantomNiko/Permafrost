/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(int * *)(frame + 28))
#define local_18 (*(char * *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 16))
undefined4 recovered_208e290(uint incoming_ecx,int incoming_edx,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *pcVar2;
  ulong size;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  ulong size_00;
  int iVar3;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    if (incoming_edx == 0) {
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = (char *)0x0;
    local_14 = (int *)incoming_ecx;
    uVar1 = recovered_2086030((int *)incoming_ecx,(int)&local_20,0);
    if ((char)uVar1 != '\0') {
      pcVar2 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar2 = recovered_2001650(1);
        if (pcVar2 == (char *)0x0) {
          return 0;
        }
        *pcVar2 = '\0';
      }
      size = recovered_2002270(pcVar2);
      if (0x1fe < size) {
        size = 0x1ff;
      }
      recovered_2001b70(param_3,pcVar2,size);
      param_3[size] = 0;
      recovered_2001710(pcVar2);
      uVar1 = extraout_EAX;
      if (incoming_edx != 1) {
        iVar3 = incoming_edx + -1;
        do {
          local_14 = local_14 + 9;
          local_20 = 0;
          local_1c = 0;
          local_18 = (char *)0x0;
          uVar1 = recovered_2086030(local_14,(int)&local_20,0);
          if ((char)uVar1 == '\0') goto LAB_02064b51;
          pcVar2 = local_18;
          if (local_18 == (char *)0x0) {
            pcVar2 = recovered_2001650(1);
            if (pcVar2 == (char *)0x0) {
              return 0;
            }
            *pcVar2 = '\0';
          }
          if (size < 0x1ff) {
            *(undefined2 *)(param_3 + size) = 0x20;
            size = size + 1;
          }
          size_00 = recovered_2002270(pcVar2);
          if (0x1ff < size_00 + size) {
            size_00 = 0x1ff - size;
          }
          recovered_2001b70(param_3 + size,pcVar2,size_00);
          size = size + size_00;
          param_3[size] = 0;
          recovered_2001710(pcVar2);
          iVar3 = iVar3 + -1;
          uVar1 = extraout_EAX_00;
        } while (iVar3 != 0);
      }
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
LAB_02064b51:
    recovered_2001710(local_18);
  }
  return 0;
}
