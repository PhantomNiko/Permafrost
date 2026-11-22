/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208f86a (*(uint8_t *)(0x20cce67U))
#define DAT_0208f86b (*(uint8_t *)(0x20cce68U))
#define DAT_0208f86c (*(uint8_t *)(0x20cce69U))
#define DAT_0208f86d (*(uint8_t *)(0x20cce6aU))
#define local_14 (*(undefined4 * *)(frame + 28))
#define local_1c (*(uint (*)[2])(frame + 20))
#define local_20 (*(int *)(frame + 16))
#define str_0208f87a (*(char (*)[1])(0x20cce77U))
uint recovered_207d960(uint incoming_ecx,uint incoming_edx,uint param_3,uint *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  uint incoming_edx_00;
  uint uVar7;
  uint uVar8;

  local_20 = 0;
  if (param_3 < incoming_edx) {
    uVar7 = 1;
    do {
      uVar3 = recovered_207a500(*(char **)(incoming_ecx + param_3 * 4),local_1c);
      if (((char)uVar3 != '\0') && (local_1c[0] != 0)) {
        bVar2 = recovered_20b7250((int *)local_1c,incoming_edx_00);
        if (bVar2) {
          uVar7 = 0;
          do {
            recovered_2001710((void *)local_14[uVar7]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_1c[0]);
          recovered_2001710(local_14);
          local_20 = local_20 + 1;
        }
        else {
          pcVar4 = (char *)*local_14;
          if (pcVar4 != (char *)0x0) {
            cVar5 = *pcVar4;
            if (cVar5 == '\0') {
              pcVar4 = &DAT_0208f86a;
            }
            else {
              if (cVar5 == 'u') {
LAB_020536c7:
                cVar6 = pcVar4[1];
                cVar1 = str_0208f87a[1];
                if (cVar6 != '\0') {
                  if (cVar6 != 'n') {
                    if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                      cVar6 = cVar6 + -0x20;
                    }
                    if (cVar6 != 'N') goto LAB_02053788;
                  }
                  cVar6 = pcVar4[2];
                  cVar1 = str_0208f87a[2];
                  if (cVar6 != '\0') {
                    if (cVar6 != 't') {
                      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                        cVar6 = cVar6 + -0x20;
                      }
                      if (cVar6 != 'T') goto LAB_02053788;
                    }
                    cVar6 = pcVar4[3];
                    cVar1 = str_0208f87a[3];
                    if (cVar6 != '\0') {
                      if (cVar6 != 'i') {
                        if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                          cVar6 = cVar6 + -0x20;
                        }
                        if (cVar6 != 'I') goto LAB_02053788;
                      }
                      cVar6 = pcVar4[4];
                      cVar1 = str_0208f87a[4];
                      if (cVar6 != '\0') {
                        if (cVar6 != 'l') {
                          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                            cVar6 = cVar6 + -0x20;
                          }
                          if (cVar6 != 'L') goto LAB_02053788;
                        }
                        cVar1 = str_0208f87a[5];
                        if (pcVar4[5] != '\0') goto LAB_02053788;
                      }
                    }
                  }
                }
                if (cVar1 == '\0') {
                  if (local_20 == 0) {
                    uVar8 = 0;
                    do {
                      recovered_2001710((void *)local_14[uVar8]);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < local_1c[0]);
                    recovered_2001710(local_14);
                    *param_4 = param_3;
                    return uVar7;
                  }
                  uVar7 = 0;
                  do {
                    recovered_2001710((void *)local_14[uVar7]);
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < local_1c[0]);
                  recovered_2001710(local_14);
                  local_20 = local_20 + -1;
                  goto LAB_02053613;
                }
              }
              else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                if (cVar5 == 'u') goto LAB_020536c7;
              }
              else if (cVar5 == 'U') goto LAB_020536c7;
LAB_02053788:
              if (cVar5 != 'e') {
                if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                  cVar5 = cVar5 + -0x20;
                }
                if (cVar5 != 'E') goto LAB_02053837;
              }
              cVar5 = pcVar4[1];
              if (cVar5 == '\0') {
                pcVar4 = &DAT_0208f86b;
              }
              else {
                if (cVar5 != 'n') {
                  if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                    cVar5 = cVar5 + -0x20;
                  }
                  if (cVar5 != 'N') goto LAB_02053837;
                }
                cVar5 = pcVar4[2];
                if (cVar5 == '\0') {
                  pcVar4 = &DAT_0208f86c;
                }
                else {
                  if (cVar5 != 'd') {
                    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                      cVar5 = cVar5 + -0x20;
                    }
                    if (cVar5 != 'D') goto LAB_02053837;
                  }
                  if (pcVar4[3] != '\0') goto LAB_02053837;
                  pcVar4 = &DAT_0208f86d;
                }
              }
            }
            if (!(local_20 == 0 || *pcVar4 != '\0')) {
              uVar7 = 0;
              do {
                recovered_2001710((void *)local_14[uVar7]);
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_1c[0]);
              recovered_2001710(local_14);
              local_20 = local_20 + -1;
              goto LAB_02053613;
            }
          }
LAB_02053837:
          uVar7 = 0;
          do {
            recovered_2001710((void *)local_14[uVar7]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_1c[0]);
          recovered_2001710(local_14);
        }
      }
LAB_02053613:
      param_3 = param_3 + 1;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),param_3 < incoming_edx);
    } while (param_3 != incoming_edx);
  }
  return 0;
}
