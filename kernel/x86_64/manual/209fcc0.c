/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3b08 (*(uint8_t *)(0x20f42c9U))
#define DAT_020a3b09 (*(uint8_t *)(0x20f42caU))
#define DAT_020a3b0a (*(uint8_t *)(0x20f42cbU))
#define DAT_020a3b0b (*(uint8_t *)(0x20f42ccU))
#define local_38 (*(long *)(frame + 40))
#define local_40 (*(undefined8 * *)(frame + 32))
#define local_50 (*(ulong (*)[2])(frame + 16))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
uchar recovered_209fcc0(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uchar uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;

  if (param_3 < param_2) {
    bVar8 = true;
    local_38 = 0;
    do {
      uVar3 = recovered_209c670(*(long *)(param_1 + param_3 * 8),local_50);
      if ((uVar3 != '\0') && (local_50[0] != 0)) {
        uVar3 = recovered_20df890((long *)local_50);
        if (uVar3 == '\0') {
          pcVar2 = (char *)*local_40;
          if (pcVar2 == (char *)0x0) {
LAB_0206267b:
            uVar7 = 0;
            do {
              recovered_2000bb0((void *)local_40[uVar7]);
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_50[0]);
            recovered_2000bb0(local_40);
          }
          else {
            cVar1 = *pcVar2;
            pcVar4 = &DAT_020a3b08;
            if (cVar1 == '\0') {
LAB_02062644:
              if (local_38 == 0 || *pcVar4 != '\0') goto LAB_0206267b;
              uVar7 = 0;
              do {
                recovered_2000bb0((void *)local_40[uVar7]);
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_50[0]);
            }
            else {
              if (cVar1 != 'u') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 == 'U') goto LAB_020624e4;
LAB_020625be:
                if (cVar1 != 'e') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'E') goto LAB_0206267b;
                }
                cVar1 = pcVar2[1];
                pcVar4 = &DAT_020a3b09;
                if (cVar1 != '\0') {
                  if (cVar1 != 'n') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'N') goto LAB_0206267b;
                  }
                  cVar1 = pcVar2[2];
                  pcVar4 = &DAT_020a3b0a;
                  if (cVar1 != '\0') {
                    if (cVar1 != 'd') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'D') goto LAB_0206267b;
                    }
                    pcVar4 = &DAT_020a3b0b;
                    if (pcVar2[3] != '\0') goto LAB_0206267b;
                  }
                }
                goto LAB_02062644;
              }
LAB_020624e4:
              cVar5 = pcVar2[1];
              pcVar4 = str_020a3b18 + 1;
              if (cVar5 != '\0') {
                if (cVar5 != 'n') {
                  cVar6 = cVar5 + -0x20;
                  if (0x19 < (byte)(cVar5 + 0x9fU)) {
                    cVar6 = cVar5;
                  }
                  if (cVar6 != 'N') goto LAB_020625be;
                }
                cVar5 = pcVar2[2];
                pcVar4 = str_020a3b18 + 2;
                if (cVar5 != '\0') {
                  if (cVar5 != 't') {
                    cVar6 = cVar5 + -0x20;
                    if (0x19 < (byte)(cVar5 + 0x9fU)) {
                      cVar6 = cVar5;
                    }
                    if (cVar6 != 'T') goto LAB_020625be;
                  }
                  cVar5 = pcVar2[3];
                  pcVar4 = str_020a3b18 + 3;
                  if (cVar5 != '\0') {
                    if (cVar5 != 'i') {
                      cVar6 = cVar5 + -0x20;
                      if (0x19 < (byte)(cVar5 + 0x9fU)) {
                        cVar6 = cVar5;
                      }
                      if (cVar6 != 'I') goto LAB_020625be;
                    }
                    cVar5 = pcVar2[4];
                    pcVar4 = str_020a3b18 + 4;
                    if (cVar5 != '\0') {
                      if (cVar5 != 'l') {
                        cVar6 = cVar5 + -0x20;
                        if (0x19 < (byte)(cVar5 + 0x9fU)) {
                          cVar6 = cVar5;
                        }
                        if (cVar6 != 'L') goto LAB_020625be;
                      }
                      pcVar4 = str_020a3b18 + 5;
                      if (pcVar2[5] != '\0') goto LAB_020625be;
                    }
                  }
                }
              }
              if (*pcVar4 != '\0') goto LAB_020625be;
              if (local_38 == 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0((void *)local_40[uVar7]);
                  uVar7 = uVar7 + 1;
                } while (uVar7 < local_50[0]);
                recovered_2000bb0(local_40);
                *param_4 = param_3;
                return bVar8;
              }
              uVar7 = 0;
              do {
                recovered_2000bb0((void *)local_40[uVar7]);
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_50[0]);
            }
            recovered_2000bb0(local_40);
            local_38 = local_38 + -1;
          }
        }
        else {
          uVar7 = 0;
          do {
            recovered_2000bb0((void *)local_40[uVar7]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_50[0]);
          recovered_2000bb0(local_40);
          local_38 = local_38 + 1;
        }
      }
      param_3 = param_3 + 1;
      bVar8 = param_3 < param_2;
    } while (param_3 != param_2);
  }
  return '\0';
}
