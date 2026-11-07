/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208f86b (*(char *)(0x20cce68U))
#define DAT_0208f86c (*(char *)(0x20cce69U))
#define DAT_0208f86d (*(char *)(0x20cce6aU))
#define DAT_0208f86f (*(uint8_t *)(0x20cce6cU))
#define DAT_0208f870 (*(uint8_t *)(0x20cce6dU))
#define DAT_0208f871 (*(uint8_t *)(0x20cce6eU))
#define DAT_0208f872 (*(uint8_t *)(0x20cce6fU))
#define DAT_0208f873 (*(uint8_t *)(0x20cce70U))
#define DAT_0208f874 (*(uint8_t *)(0x20cce71U))
#define DAT_0208f875 (*(char *)(0x20cce72U))
#define DAT_0208f876 (*(char *)(0x20cce73U))
#define DAT_0208f877 (*(char *)(0x20cce74U))
#define DAT_0208f878 (*(char *)(0x20cce75U))
#define DAT_0208f879 (*(char *)(0x20cce76U))
#define local_14 (*(undefined4 * *)(frame + 44))
#define local_1c (*(uint (*)[2])(frame + 36))
#define local_20 (*(int *)(frame + 32))
#define local_24 (*(undefined1 *)(frame + 28))
#define str_0208f87a (*(char (*)[1])(0x20cce77U))
uint recovered_207d3d0(uint incoming_ecx,uint incoming_edx,uint param_3,uint *param_4,
                      undefined1 *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  uint incoming_edx_00;
  char *pcVar8;
  uint uVar9;
  uint uVar10;

  local_20 = 0;
  if (param_3 < incoming_edx) {
    uVar9 = 1;
    do {
      uVar4 = recovered_207a500(*(char **)(incoming_ecx + param_3 * 4),local_1c);
      if (((char)uVar4 != '\0') && (local_1c[0] != 0)) {
        bVar3 = recovered_20b7250((int *)local_1c,incoming_edx_00);
        if (bVar3) {
          uVar9 = 0;
          do {
            recovered_2001710((void *)local_14[uVar9]);
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_1c[0]);
          recovered_2001710(local_14);
          local_20 = local_20 + 1;
        }
        else {
          pcVar1 = (char *)*local_14;
          if (pcVar1 != (char *)0x0) {
            cVar5 = *pcVar1;
            cVar7 = str_0208f87a[0];
            if (cVar5 == '\0') {
joined_r0x02053164:
              if (cVar7 == '\0') {
                uVar9 = 0;
                do {
                  recovered_2001710((void *)local_14[uVar9]);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < local_1c[0]);
                recovered_2001710(local_14);
                bVar3 = local_20 != 0;
                iVar6 = local_20 + -1;
                local_20 = 0;
                if (bVar3) {
                  local_20 = iVar6;
                }
                goto LAB_02053080;
              }
            }
            else {
              if (cVar5 == 'e') {
LAB_02053109:
                cVar7 = pcVar1[1];
                cVar2 = DAT_0208f86b;
                if (cVar7 != '\0') {
                  if (cVar7 != 'n') {
                    if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                      cVar7 = cVar7 + -0x20;
                    }
                    if (cVar7 != 'N') goto LAB_020531ae;
                  }
                  cVar7 = pcVar1[2];
                  cVar2 = DAT_0208f86c;
                  if (cVar7 != '\0') {
                    if (cVar7 != 'd') {
                      if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                        cVar7 = cVar7 + -0x20;
                      }
                      if (cVar7 != 'D') goto LAB_020531ae;
                    }
                    cVar2 = DAT_0208f86d;
                    if (pcVar1[3] != '\0') goto LAB_020531ae;
                  }
                }
                if (cVar2 == '\0') {
                  if (local_20 == 0) {
                    uVar10 = 0;
                    do {
                      recovered_2001710((void *)local_14[uVar10]);
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < local_1c[0]);
                    local_24 = 0;
                    goto LAB_020535b8;
                  }
                  uVar9 = 0;
                  do {
                    recovered_2001710((void *)local_14[uVar9]);
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < local_1c[0]);
                  recovered_2001710(local_14);
                  local_20 = local_20 + -1;
                  goto LAB_02053080;
                }
              }
              else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                if (cVar5 == 'e') goto LAB_02053109;
              }
              else if (cVar5 == 'E') goto LAB_02053109;
LAB_020531ae:
              if (cVar5 == 'u') {
LAB_020531c7:
                cVar5 = pcVar1[1];
                cVar7 = str_0208f87a[1];
                if (cVar5 != '\0') {
                  if (cVar5 != 'n') {
                    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                      cVar5 = cVar5 + -0x20;
                    }
                    if (cVar5 != 'N') goto LAB_02053272;
                  }
                  cVar5 = pcVar1[2];
                  cVar7 = str_0208f87a[2];
                  if (cVar5 != '\0') {
                    if (cVar5 != 't') {
                      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                        cVar5 = cVar5 + -0x20;
                      }
                      if (cVar5 != 'T') goto LAB_02053272;
                    }
                    cVar5 = pcVar1[3];
                    cVar7 = str_0208f87a[3];
                    if (cVar5 != '\0') {
                      if (cVar5 != 'i') {
                        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                          cVar5 = cVar5 + -0x20;
                        }
                        if (cVar5 != 'I') goto LAB_02053272;
                      }
                      cVar5 = pcVar1[4];
                      cVar7 = str_0208f87a[4];
                      if (cVar5 != '\0') {
                        if (cVar5 != 'l') {
                          if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                            cVar5 = cVar5 + -0x20;
                          }
                          if (cVar5 != 'L') goto LAB_02053272;
                        }
                        cVar7 = str_0208f87a[5];
                        if (pcVar1[5] != '\0') goto LAB_02053272;
                      }
                    }
                  }
                }
                goto joined_r0x02053164;
              }
              if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                cVar5 = cVar5 + -0x20;
              }
              if (cVar5 == 'U') goto LAB_020531c7;
            }
LAB_02053272:
            if (local_20 == 0) {
              cVar5 = *pcVar1;
              cVar7 = DAT_0208f875;
              if (cVar5 != '\0') {
                if (cVar5 == 'e') {
LAB_020532cd:
                  cVar7 = pcVar1[1];
                  if (cVar7 == '\0') {
                    pcVar8 = &DAT_0208f86f;
                  }
                  else {
                    if (cVar7 != 'l') {
                      if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                        cVar7 = cVar7 + -0x20;
                      }
                      if (cVar7 != 'L') goto LAB_0205347e;
                    }
                    cVar7 = pcVar1[2];
                    if (cVar7 == '\0') {
                      pcVar8 = &DAT_0208f870;
                    }
                    else {
                      if (cVar7 != 's') {
                        if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                          cVar7 = cVar7 + -0x20;
                        }
                        if (cVar7 != 'S') goto LAB_0205347e;
                      }
                      cVar7 = pcVar1[3];
                      if (cVar7 == '\0') {
                        pcVar8 = &DAT_0208f871;
                      }
                      else {
                        if (cVar7 != 'e') {
                          if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                            cVar7 = cVar7 + -0x20;
                          }
                          if (cVar7 != 'E') goto LAB_0205347e;
                        }
                        cVar7 = pcVar1[4];
                        if (cVar7 == '\0') {
                          pcVar8 = &DAT_0208f872;
                        }
                        else {
                          if (cVar7 != 'i') {
                            if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                              cVar7 = cVar7 + -0x20;
                            }
                            if (cVar7 != 'I') goto LAB_0205347e;
                          }
                          cVar7 = pcVar1[5];
                          if (cVar7 == '\0') {
                            pcVar8 = &DAT_0208f873;
                          }
                          else {
                            if (cVar7 != 'f') {
                              if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                                cVar7 = cVar7 + -0x20;
                              }
                              if (cVar7 != 'F') goto LAB_0205347e;
                            }
                            if (pcVar1[6] != '\0') goto LAB_0205347e;
                            pcVar8 = &DAT_0208f874;
                          }
                        }
                      }
                    }
                  }
                  if (*pcVar8 == '\0') {
                    uVar10 = 0;
                    do {
                      recovered_2001710((void *)local_14[uVar10]);
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < local_1c[0]);
                    local_24 = 1;
                    goto LAB_020535b8;
                  }
                }
                else {
                  cVar7 = cVar5;
                  if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                    cVar7 = cVar5 + -0x20;
                  }
                  if (cVar7 == 'E') goto LAB_020532cd;
                }
LAB_0205347e:
                if (cVar5 != 'e') {
                  if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                    cVar5 = cVar5 + -0x20;
                  }
                  if (cVar5 != 'E') goto LAB_02053278;
                }
                cVar5 = pcVar1[1];
                cVar7 = DAT_0208f876;
                if (cVar5 != '\0') {
                  if (cVar5 != 'l') {
                    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                      cVar5 = cVar5 + -0x20;
                    }
                    if (cVar5 != 'L') goto LAB_02053278;
                  }
                  cVar5 = pcVar1[2];
                  cVar7 = DAT_0208f877;
                  if (cVar5 != '\0') {
                    if (cVar5 != 's') {
                      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                        cVar5 = cVar5 + -0x20;
                      }
                      if (cVar5 != 'S') goto LAB_02053278;
                    }
                    cVar5 = pcVar1[3];
                    cVar7 = DAT_0208f878;
                    if (cVar5 != '\0') {
                      if (cVar5 != 'e') {
                        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                          cVar5 = cVar5 + -0x20;
                        }
                        if (cVar5 != 'E') goto LAB_02053278;
                      }
                      cVar7 = DAT_0208f879;
                      if (pcVar1[4] != '\0') goto LAB_02053278;
                    }
                  }
                }
              }
              if (cVar7 == '\0') {
                uVar10 = 0;
                do {
                  recovered_2001710((void *)local_14[uVar10]);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_1c[0]);
                local_24 = 2;
LAB_020535b8:
                recovered_2001710(local_14);
                *param_4 = param_3;
                *param_5 = local_24;
                return uVar9;
              }
            }
          }
LAB_02053278:
          uVar9 = 0;
          do {
            recovered_2001710((void *)local_14[uVar9]);
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_1c[0]);
          recovered_2001710(local_14);
        }
      }
LAB_02053080:
      param_3 = param_3 + 1;
      uVar9 = CONCAT31((int3)(uVar9 >> 8),param_3 < incoming_edx);
    } while (param_3 != incoming_edx);
  }
  return 0;
}
