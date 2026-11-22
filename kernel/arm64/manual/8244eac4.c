/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044fdf8 (*(uint8_t *)(0x82479cbeU))
#define DAT_4044fdfa (*(uint8_t *)(0x82479cc0U))
#define DAT_4044fe54 (*(uint8_t *)(0x82479d1aU))
#define DAT_4044fe79 (*(uint8_t *)(0x82479d3fU))
#define DAT_404502e0 (*(uint8_t *)(0x8247a1a6U))
#define DAT_404502e2 (*(uint8_t *)(0x8247a1a8U))
undefined8 recovered_8244eac4(ulong *param_1,ulong param_2,long param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *left;

  if (((param_1 != (ulong *)0x0) && (param_3 != 0)) && (param_4 != (ulong *)0x0)) {
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
    for (; param_2 < *param_1; param_2 = param_2 + 1) {
      left = *(char **)(param_1[2] + param_2 * 8);
      iVar3 = recovered_82400e0c(left,&DAT_4044fe54);
      if (iVar3 == 0) {
        lVar6 = lVar6 + 1;
      }
      else {
        iVar3 = recovered_82400e0c(left,&DAT_4044fe79);
        if (iVar3 == 0) {
          bVar2 = lVar6 != 0;
          lVar1 = lVar6 + -1;
          lVar6 = 0;
          if (bVar2) {
            lVar6 = lVar1;
          }
        }
        else {
          iVar3 = recovered_82400e0c(left,&DAT_4044fdf8);
          if (iVar3 == 0) {
            lVar4 = lVar4 + 1;
          }
          else {
            iVar3 = recovered_82400e0c(left,&DAT_4044fdfa);
            if (iVar3 == 0) {
              bVar2 = lVar4 != 0;
              lVar1 = lVar4 + -1;
              lVar4 = 0;
              if (bVar2) {
                lVar4 = lVar1;
              }
            }
            else {
              iVar3 = recovered_82400e0c(left,&DAT_404502e0);
              if (iVar3 == 0) {
                lVar5 = lVar5 + 1;
              }
              else {
                iVar3 = recovered_82400e0c(left,&DAT_404502e2);
                if (iVar3 == 0) {
                  bVar2 = lVar5 != 0;
                  lVar1 = lVar5 + -1;
                  lVar5 = 0;
                  if (bVar2) {
                    lVar5 = lVar1;
                  }
                }
                else if (((lVar6 == 0) && (lVar4 == 0)) && (lVar5 == 0)) {
                  iVar3 = recovered_82400e0c(left,(char *)param_3);
                  if (iVar3 == 0) {
                    *param_4 = param_2;
                    return 1;
                  }
                  lVar6 = 0;
                  lVar4 = 0;
                  lVar5 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
