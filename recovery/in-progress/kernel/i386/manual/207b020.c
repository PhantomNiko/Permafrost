/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_14 (*(void * *)(frame + 28))
uint recovered_207b020(int incoming_ecx,uint incoming_edx,int *param_3,uint *param_4,uint *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  void *pvVar3;
  ulong size;
  char *text;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar4 = 0;
  if (param_5 != (uint *)0x0 && (param_4 != (uint *)0x0 && param_3 != (int *)0x0)) {
    if (incoming_edx == 0) {
      local_14 = (void *)0x0;
    }
    else {
      local_14 = (void *)0x0;
      uVar5 = 0;
      uVar6 = 0;
      do {
        if (incoming_ecx == 0) {
          text = &DAT_0208e2dc;
        }
        else {
          pcVar2 = *(char **)(incoming_ecx + uVar6 * 4);
          text = &DAT_0208e2dc;
          if (pcVar2 != (char *)0x0) {
            text = pcVar2;
          }
        }
        uVar1 = uVar6 + 1;
        uVar4 = uVar5;
        if (uVar5 <= uVar6) {
          uVar4 = 0x10;
          if (uVar5 != 0) {
            uVar4 = uVar5;
          }
          for (; uVar4 <= uVar6; uVar4 = uVar4 * 2) {
            if ((int)uVar4 < 0) {
              uVar4 = uVar1;
              break;
            }
          }
          pvVar3 = recovered_2001860(local_14,uVar4 * 4);
          if (pvVar3 == (void *)0x0) {
            if (local_14 != (void *)0x0) {
              if (uVar6 != 0) {
                uVar4 = 0;
                do {
                  recovered_2001710(*(void **)((int)local_14 + uVar4 * 4));
                  *(undefined4 *)((int)local_14 + uVar4 * 4) = 0;
                  uVar4 = uVar4 + 1;
                } while (uVar6 != uVar4);
              }
LAB_02050e77:
              recovered_2001710(local_14);
            }
            return 0;
          }
          local_14 = pvVar3;
          if (uVar5 < uVar4) {
            do {
              *(undefined4 *)((int)pvVar3 + uVar5 * 4) = 0;
              uVar5 = uVar5 + 1;
            } while (uVar4 != uVar5);
          }
        }
        size = recovered_2002270(text);
        pvVar3 = recovered_2001650(size + 1);
        if (pvVar3 == (void *)0x0) {
          *(undefined4 *)((int)local_14 + uVar6 * 4) = 0;
          if (uVar6 != 0) {
            uVar4 = 0;
            do {
              recovered_2001710(*(void **)((int)local_14 + uVar4 * 4));
              *(undefined4 *)((int)local_14 + uVar4 * 4) = 0;
              uVar4 = uVar4 + 1;
            } while (uVar6 != uVar4);
          }
          goto LAB_02050e77;
        }
        if (size != 0) {
          recovered_2001b70(pvVar3,text,size);
        }
        *(undefined1 *)((int)pvVar3 + size) = 0;
        *(void **)((int)local_14 + uVar6 * 4) = pvVar3;
        uVar5 = uVar4;
        uVar6 = uVar1;
      } while (uVar1 != incoming_edx);
    }
    *param_3 = (int)local_14;
    *param_4 = incoming_edx;
    *param_5 = uVar4;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}
