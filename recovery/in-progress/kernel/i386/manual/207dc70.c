/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208f945 (*(uint8_t *)(0x20ccf42U))
#define DAT_0208f947 (*(uint8_t *)(0x20ccf44U))
#define DAT_0208f9a1 (*(uint8_t *)(0x20ccf9eU))
#define DAT_0208f9c6 (*(uint8_t *)(0x20ccfc3U))
#define DAT_0208fe00 (*(uint8_t *)(0x20cd3fdU))
#define DAT_0208fe02 (*(uint8_t *)(0x20cd3ffU))
#define local_14 (*(int *)(frame + 28))
#define local_18 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 20))
undefined4 recovered_207dc70(uint *incoming_ecx,uint incoming_edx,int param_3,uint *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  bool bVar2;

  if (param_4 != (uint *)0x0 && (param_3 != 0 && incoming_ecx != (uint *)0x0)) {
    if (*incoming_ecx <= incoming_edx) {
      return 0;
    }
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    do {
      left = *(char **)(incoming_ecx[2] + incoming_edx * 4);
      iVar1 = recovered_20022a0(left,&DAT_0208f9a1);
      if (iVar1 == 0) {
        local_1c = local_1c + 1;
      }
      else {
        iVar1 = recovered_20022a0(left,&DAT_0208f9c6);
        if (iVar1 == 0) {
          bVar2 = local_1c != 0;
          iVar1 = local_1c + -1;
          local_1c = 0;
          if (bVar2) {
            local_1c = iVar1;
          }
        }
        else {
          iVar1 = recovered_20022a0(left,&DAT_0208f945);
          if (iVar1 == 0) {
            local_18 = local_18 + 1;
          }
          else {
            iVar1 = recovered_20022a0(left,&DAT_0208f947);
            if (iVar1 == 0) {
              bVar2 = local_18 != 0;
              iVar1 = local_18 + -1;
              local_18 = 0;
              if (bVar2) {
                local_18 = iVar1;
              }
            }
            else {
              iVar1 = recovered_20022a0(left,&DAT_0208fe00);
              if (iVar1 == 0) {
                local_14 = local_14 + 1;
              }
              else {
                iVar1 = recovered_20022a0(left,&DAT_0208fe02);
                if (iVar1 == 0) {
                  bVar2 = local_14 != 0;
                  iVar1 = local_14 + -1;
                  local_14 = 0;
                  if (bVar2) {
                    local_14 = iVar1;
                  }
                }
                else if (((local_1c == 0) && (local_18 == 0)) && (local_14 == 0)) {
                  iVar1 = recovered_20022a0(left,(char *)param_3);
                  local_1c = 0;
                  local_18 = 0;
                  local_14 = 0;
                  if (iVar1 == 0) {
                    *param_4 = incoming_edx;
                    return CONCAT31((int3)((uint)param_4 >> 8),1);
                  }
                }
              }
            }
          }
        }
      }
      incoming_edx = incoming_edx + 1;
    } while (incoming_edx < *incoming_ecx);
  }
  return 0;
}
