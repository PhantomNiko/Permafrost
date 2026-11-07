/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3be3 (*(uint8_t *)(0x20f43a4U))
#define DAT_020a3be5 (*(uint8_t *)(0x20f43a6U))
#define DAT_020a3c3f (*(uint8_t *)(0x20f4400U))
#define DAT_020a3c64 (*(uint8_t *)(0x20f4425U))
#define DAT_020a409e (*(uint8_t *)(0x20f485fU))
#define DAT_020a40a0 (*(uint8_t *)(0x20f4861U))
#define local_38 (*(long *)(frame + 24))
uchar recovered_20a0000(ulong *param_1,ulong param_2,long param_3,ulong *param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;

  if ((param_4 != (ulong *)0x0 && (param_3 != 0 && param_1 != (ulong *)0x0)) && (param_2 < *param_1)
     ) {
    local_38 = 0;
    lVar3 = 0;
    lVar2 = 0;
    do {
      left = *(char **)(param_1[2] + param_2 * 8);
      iVar1 = recovered_2002eb0(left,&DAT_020a3c3f);
      if (iVar1 == 0) {
        lVar2 = lVar2 + 1;
      }
      else {
        iVar1 = recovered_2002eb0(left,&DAT_020a3c64);
        if (iVar1 == 0) {
          bVar4 = lVar2 == 0;
          lVar2 = lVar2 + -1;
          if (bVar4) {
            lVar2 = 0;
          }
        }
        else {
          iVar1 = recovered_2002eb0(left,&DAT_020a3be3);
          if (iVar1 == 0) {
            lVar3 = lVar3 + 1;
          }
          else {
            iVar1 = recovered_2002eb0(left,&DAT_020a3be5);
            if (iVar1 == 0) {
              bVar4 = lVar3 == 0;
              lVar3 = lVar3 + -1;
              if (bVar4) {
                lVar3 = 0;
              }
            }
            else {
              iVar1 = recovered_2002eb0(left,&DAT_020a409e);
              if (iVar1 == 0) {
                local_38 = local_38 + 1;
              }
              else {
                iVar1 = recovered_2002eb0(left,&DAT_020a40a0);
                if (iVar1 == 0) {
                  bVar4 = local_38 == 0;
                  local_38 = local_38 + -1;
                  if (bVar4) {
                    local_38 = 0;
                  }
                }
                else if (((lVar2 == 0) && (lVar3 == 0)) && (local_38 == 0)) {
                  iVar1 = recovered_2002eb0(left,(char *)param_3);
                  if (iVar1 == 0) {
                    *param_4 = param_2;
                    return '\x01';
                  }
                  lVar2 = 0;
                  lVar3 = 0;
                  local_38 = 0;
                }
              }
            }
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *param_1);
  }
  return '\0';
}
