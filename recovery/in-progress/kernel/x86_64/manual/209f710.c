/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3b09 (*(uint8_t *)(0x20f42caU))
#define DAT_020a3b0a (*(uint8_t *)(0x20f42cbU))
#define DAT_020a3b0b (*(uint8_t *)(0x20f42ccU))
#define DAT_020a3b0d (*(uint8_t *)(0x20f42ceU))
#define DAT_020a3b0e (*(uint8_t *)(0x20f42cfU))
#define DAT_020a3b0f (*(uint8_t *)(0x20f42d0U))
#define DAT_020a3b10 (*(uint8_t *)(0x20f42d1U))
#define DAT_020a3b11 (*(uint8_t *)(0x20f42d2U))
#define DAT_020a3b12 (*(uint8_t *)(0x20f42d3U))
#define DAT_020a3b13 (*(uint8_t *)(0x20f42d4U))
#define DAT_020a3b14 (*(uint8_t *)(0x20f42d5U))
#define DAT_020a3b15 (*(uint8_t *)(0x20f42d6U))
#define DAT_020a3b16 (*(uint8_t *)(0x20f42d7U))
#define DAT_020a3b17 (*(uint8_t *)(0x20f42d8U))
#define local_38 (*(undefined8 * *)(frame + 40))
#define local_48 (*(ulong (*)[2])(frame + 24))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
uchar recovered_209f710(long param_1,ulong param_2,ulong param_3,ulong *param_4,undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uchar uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  bool bVar10;

  if (param_3 < param_2) {
    bVar10 = true;
    lVar7 = 0;
    do {
      uVar3 = recovered_209c670(*(long *)(param_1 + param_3 * 8),local_48);
      if ((uVar3 != '\0') && (local_48[0] != 0)) {
        uVar3 = recovered_20df890((long *)local_48);
        if (uVar3 == '\0') {
          pcVar2 = (char *)*local_38;
          if (pcVar2 != (char *)0x0) {
            cVar1 = *pcVar2;
            pcVar4 = str_020a3b18;
            if (cVar1 == '\0') {
LAB_0206207c:
              if (*pcVar4 == '\0') {
                uVar8 = 0;
                do {
                  recovered_2000bb0((void *)local_38[uVar8]);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < local_48[0]);
                recovered_2000bb0(local_38);
                bVar10 = lVar7 == 0;
                lVar7 = lVar7 + -1;
                if (bVar10) {
                  lVar7 = 0;
                }
                goto LAB_02061e70;
              }
            }
            else {
              if (cVar1 == 'e') {
LAB_02061f20:
                cVar5 = pcVar2[1];
                pcVar4 = &DAT_020a3b09;
                if (cVar5 != '\0') {
                  if (cVar5 != 'n') {
                    cVar6 = cVar5 + -0x20;
                    if (0x19 < (byte)(cVar5 + 0x9fU)) {
                      cVar6 = cVar5;
                    }
                    if (cVar6 != 'N') goto LAB_02061f92;
                  }
                  cVar5 = pcVar2[2];
                  pcVar4 = &DAT_020a3b0a;
                  if (cVar5 != '\0') {
                    if (cVar5 != 'd') {
                      cVar6 = cVar5 + -0x20;
                      if (0x19 < (byte)(cVar5 + 0x9fU)) {
                        cVar6 = cVar5;
                      }
                      if (cVar6 != 'D') goto LAB_02061f92;
                    }
                    pcVar4 = &DAT_020a3b0b;
                    if (pcVar2[3] != '\0') goto LAB_02061f92;
                  }
                }
                if (*pcVar4 == '\0') {
                  if (lVar7 == 0) {
                    uVar8 = 0;
                    do {
                      recovered_2000bb0((void *)local_38[uVar8]);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < local_48[0]);
                    uVar9 = 0;
                    goto LAB_020623b7;
                  }
                  uVar8 = 0;
                  do {
                    recovered_2000bb0((void *)local_38[uVar8]);
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < local_48[0]);
                  recovered_2000bb0(local_38);
                  lVar7 = lVar7 + -1;
                  goto LAB_02061e70;
                }
              }
              else {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 == 'E') goto LAB_02061f20;
              }
LAB_02061f92:
              if (cVar1 == 'u') {
LAB_02061fb3:
                cVar1 = pcVar2[1];
                pcVar4 = str_020a3b18 + 1;
                if (cVar1 != '\0') {
                  if (cVar1 != 'n') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'N') goto LAB_02062085;
                  }
                  cVar1 = pcVar2[2];
                  pcVar4 = str_020a3b18 + 2;
                  if (cVar1 != '\0') {
                    if (cVar1 != 't') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'T') goto LAB_02062085;
                    }
                    cVar1 = pcVar2[3];
                    pcVar4 = str_020a3b18 + 3;
                    if (cVar1 != '\0') {
                      if (cVar1 != 'i') {
                        cVar5 = cVar1 + -0x20;
                        if (0x19 < (byte)(cVar1 + 0x9fU)) {
                          cVar5 = cVar1;
                        }
                        if (cVar5 != 'I') goto LAB_02062085;
                      }
                      cVar1 = pcVar2[4];
                      pcVar4 = str_020a3b18 + 4;
                      if (cVar1 != '\0') {
                        if (cVar1 != 'l') {
                          cVar5 = cVar1 + -0x20;
                          if (0x19 < (byte)(cVar1 + 0x9fU)) {
                            cVar5 = cVar1;
                          }
                          if (cVar5 != 'L') goto LAB_02062085;
                        }
                        pcVar4 = str_020a3b18 + 5;
                        if (pcVar2[5] != '\0') goto LAB_02062085;
                      }
                    }
                  }
                }
                goto LAB_0206207c;
              }
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 == 'U') goto LAB_02061fb3;
            }
LAB_02062085:
            if (lVar7 == 0) {
              cVar1 = *pcVar2;
              pcVar4 = &DAT_020a3b13;
              if (cVar1 != '\0') {
                if (cVar1 == 'e') {
LAB_020620c2:
                  cVar5 = pcVar2[1];
                  pcVar4 = &DAT_020a3b0d;
                  if (cVar5 != '\0') {
                    if (cVar5 != 'l') {
                      cVar6 = cVar5 + -0x20;
                      if (0x19 < (byte)(cVar5 + 0x9fU)) {
                        cVar6 = cVar5;
                      }
                      if (cVar6 != 'L') goto LAB_020621d2;
                    }
                    cVar5 = pcVar2[2];
                    pcVar4 = &DAT_020a3b0e;
                    if (cVar5 != '\0') {
                      if (cVar5 != 's') {
                        cVar6 = cVar5 + -0x20;
                        if (0x19 < (byte)(cVar5 + 0x9fU)) {
                          cVar6 = cVar5;
                        }
                        if (cVar6 != 'S') goto LAB_020621d2;
                      }
                      cVar5 = pcVar2[3];
                      pcVar4 = &DAT_020a3b0f;
                      if (cVar5 != '\0') {
                        if (cVar5 != 'e') {
                          cVar6 = cVar5 + -0x20;
                          if (0x19 < (byte)(cVar5 + 0x9fU)) {
                            cVar6 = cVar5;
                          }
                          if (cVar6 != 'E') goto LAB_020621d2;
                        }
                        cVar5 = pcVar2[4];
                        pcVar4 = &DAT_020a3b10;
                        if (cVar5 != '\0') {
                          if (cVar5 != 'i') {
                            cVar6 = cVar5 + -0x20;
                            if (0x19 < (byte)(cVar5 + 0x9fU)) {
                              cVar6 = cVar5;
                            }
                            if (cVar6 != 'I') goto LAB_020621d2;
                          }
                          cVar5 = pcVar2[5];
                          pcVar4 = &DAT_020a3b11;
                          if (cVar5 != '\0') {
                            if (cVar5 != 'f') {
                              cVar6 = cVar5 + -0x20;
                              if (0x19 < (byte)(cVar5 + 0x9fU)) {
                                cVar6 = cVar5;
                              }
                              if (cVar6 != 'F') goto LAB_020621d2;
                            }
                            pcVar4 = &DAT_020a3b12;
                            if (pcVar2[6] != '\0') goto LAB_020621d2;
                          }
                        }
                      }
                    }
                  }
                  if (*pcVar4 == '\0') {
                    uVar8 = 0;
                    do {
                      recovered_2000bb0((void *)local_38[uVar8]);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < local_48[0]);
                    uVar9 = 1;
                    goto LAB_020623b7;
                  }
                }
                else {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 == 'E') goto LAB_020620c2;
                }
LAB_020621d2:
                if (cVar1 != 'e') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'E') goto LAB_02062291;
                }
                cVar1 = pcVar2[1];
                pcVar4 = &DAT_020a3b14;
                if (cVar1 != '\0') {
                  if (cVar1 != 'l') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'L') goto LAB_02062291;
                  }
                  cVar1 = pcVar2[2];
                  pcVar4 = &DAT_020a3b15;
                  if (cVar1 != '\0') {
                    if (cVar1 != 's') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'S') goto LAB_02062291;
                    }
                    cVar1 = pcVar2[3];
                    pcVar4 = &DAT_020a3b16;
                    if (cVar1 != '\0') {
                      if (cVar1 != 'e') {
                        cVar5 = cVar1 + -0x20;
                        if (0x19 < (byte)(cVar1 + 0x9fU)) {
                          cVar5 = cVar1;
                        }
                        if (cVar5 != 'E') goto LAB_02062291;
                      }
                      pcVar4 = &DAT_020a3b17;
                      if (pcVar2[4] != '\0') goto LAB_02062291;
                    }
                  }
                }
              }
              if (*pcVar4 == '\0') {
                uVar8 = 0;
                do {
                  recovered_2000bb0((void *)local_38[uVar8]);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < local_48[0]);
                uVar9 = 2;
LAB_020623b7:
                recovered_2000bb0(local_38);
                *param_4 = param_3;
                *param_5 = uVar9;
                return bVar10;
              }
            }
          }
LAB_02062291:
          uVar8 = 0;
          do {
            recovered_2000bb0((void *)local_38[uVar8]);
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_48[0]);
          recovered_2000bb0(local_38);
        }
        else {
          uVar8 = 0;
          do {
            recovered_2000bb0((void *)local_38[uVar8]);
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_48[0]);
          recovered_2000bb0(local_38);
          lVar7 = lVar7 + 1;
        }
      }
LAB_02061e70:
      param_3 = param_3 + 1;
      bVar10 = param_3 < param_2;
    } while (param_3 != param_2);
  }
  return '\0';
}
