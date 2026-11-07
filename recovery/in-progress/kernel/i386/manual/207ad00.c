/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208f86b (*(char *)(0x20cce68U))
#define DAT_0208f86c (*(char *)(0x20cce69U))
#define DAT_0208f86d (*(char *)(0x20cce6aU))
#define local_14 (*(undefined4 * *)(frame + 28))
#define local_1c (*(uint (*)[2])(frame + 20))
#define local_20 (*(int *)(frame + 16))
#define str_0208f87a (*(char (*)[1])(0x20cce77U))
uint recovered_207ad00(uint incoming_ecx,uint incoming_edx,uint param_3,uint *param_4)

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
              pcVar4 = str_0208f87a;
            }
            else {
              if (cVar5 == 'e') {
LAB_02050a60:
                cVar6 = pcVar4[1];
                cVar1 = DAT_0208f86b;
                if (cVar6 != '\0') {
                  if (cVar6 != 'n') {
                    if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                      cVar6 = cVar6 + -0x20;
                    }
                    if (cVar6 != 'N') goto LAB_02050ac1;
                  }
                  cVar6 = pcVar4[2];
                  cVar1 = DAT_0208f86c;
                  if (cVar6 != '\0') {
                    if (cVar6 != 'd') {
                      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                        cVar6 = cVar6 + -0x20;
                      }
                      if (cVar6 != 'D') goto LAB_02050ac1;
                    }
                    cVar1 = DAT_0208f86d;
                    if (pcVar4[3] != '\0') goto LAB_02050ac1;
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
                  goto LAB_020509b3;
                }
              }
              else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                if (cVar5 == 'e') goto LAB_02050a60;
              }
              else if (cVar5 == 'E') goto LAB_02050a60;
LAB_02050ac1:
              if (cVar5 != 'u') {
                if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                  cVar5 = cVar5 + -0x20;
                }
                if (cVar5 != 'U') goto LAB_02050c27;
              }
              cVar5 = pcVar4[1];
              if (cVar5 == '\0') {
                pcVar4 = str_0208f87a + 1;
              }
              else {
                if (cVar5 != 'n') {
                  if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                    cVar5 = cVar5 + -0x20;
                  }
                  if (cVar5 != 'N') goto LAB_02050c27;
                }
                cVar5 = pcVar4[2];
                if (cVar5 == '\0') {
                  pcVar4 = str_0208f87a + 2;
                }
                else {
                  if (cVar5 != 't') {
                    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                      cVar5 = cVar5 + -0x20;
                    }
                    if (cVar5 != 'T') goto LAB_02050c27;
                  }
                  cVar5 = pcVar4[3];
                  if (cVar5 == '\0') {
                    pcVar4 = str_0208f87a + 3;
                  }
                  else {
                    if (cVar5 != 'i') {
                      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                        cVar5 = cVar5 + -0x20;
                      }
                      if (cVar5 != 'I') goto LAB_02050c27;
                    }
                    cVar5 = pcVar4[4];
                    if (cVar5 == '\0') {
                      pcVar4 = str_0208f87a + 4;
                    }
                    else {
                      if (cVar5 != 'l') {
                        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                          cVar5 = cVar5 + -0x20;
                        }
                        if (cVar5 != 'L') goto LAB_02050c27;
                      }
                      if (pcVar4[5] != '\0') goto LAB_02050c27;
                      pcVar4 = str_0208f87a + 5;
                    }
                  }
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
              goto LAB_020509b3;
            }
          }
LAB_02050c27:
          uVar7 = 0;
          do {
            recovered_2001710((void *)local_14[uVar7]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_1c[0]);
          recovered_2001710(local_14);
        }
      }
LAB_020509b3:
      param_3 = param_3 + 1;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),param_3 < incoming_edx);
    } while (param_3 != incoming_edx);
  }
  return 0;
}
