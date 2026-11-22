/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a7b8f (*(uint8_t *)(0x20f92e6U))
#define DAT_020a7b90 (*(uint8_t *)(0x20f92e7U))
#define DAT_020a7b91 (*(uint8_t *)(0x20f92e8U))
#define DAT_020a7b92 (*(uint8_t *)(0x20f92e9U))
#define DAT_020a7b93 (*(uint8_t *)(0x20f92eaU))
#define DAT_020a7b95 (*(char *)(0x20f92ecU))
#define DAT_020a7b96 (*(char *)(0x20f92edU))
#define DAT_020a7b97 (*(char *)(0x20f92eeU))
#define DAT_020a7b98 (*(char *)(0x20f92efU))
#define DAT_020a7b99 (*(uint8_t *)(0x20f92f0U))
#define DAT_020a7b9a (*(uint8_t *)(0x20f92f1U))
#define DAT_020a7b9b (*(uint8_t *)(0x20f92f2U))
#define DAT_020a7b9c (*(uint8_t *)(0x20f92f3U))
#define DAT_020a7b9d (*(uint8_t *)(0x20f92f4U))
#define DAT_020a7b9e (*(uint8_t *)(0x20f92f5U))
#define DAT_020a7ba0 (*(uint8_t *)(0x20f92f7U))
#define DAT_020a7ba1 (*(uint8_t *)(0x20f92f8U))
#define DAT_020a7ba2 (*(uint8_t *)(0x20f92f9U))
#define DAT_020a7ba3 (*(uint8_t *)(0x20f92faU))
#define DAT_020a7ba4 (*(uint8_t *)(0x20f92fbU))
#define DAT_020a7ba5 (*(uint8_t *)(0x20f92fcU))
#define str_020a77d3 (*(char (*)[1])(0x20f8ea3U))
#define str_020a7ba6 (*(char (*)[1])(0x20f154dU))
#define str_020a7bb3 (*(char (*)[1])(0x20f92fdU))
uchar recovered_20d2f90(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;

  if (param_1 == (char *)0x0) goto LAB_0208fb8a;
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    pcVar6 = &DAT_020a7b8f;
LAB_0208f810:
    if (*pcVar6 == '\0') {
      return '\x01';
    }
    if (cVar2 != '\0') goto LAB_0208f821;
LAB_0208f9c0:
    pcVar6 = &DAT_020a7b99;
LAB_0208f9c7:
    if (*pcVar6 == '\0') {
      return '\x01';
    }
    if (cVar2 != '\0') goto LAB_0208f9d8;
LAB_0208fb79:
    pcVar6 = str_020a7ba6;
  }
  else {
    cVar4 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar4 = cVar2;
    }
    if (cVar4 == 'B') {
      cVar4 = param_1[1];
      if (cVar4 == '\0') {
        pcVar6 = &DAT_020a7b90;
      }
      else {
        cVar7 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar7 = cVar4;
        }
        if (cVar7 != 'I') goto LAB_0208f821;
        cVar4 = param_1[2];
        if (cVar4 == '\0') {
          pcVar6 = &DAT_020a7b91;
        }
        else {
          cVar7 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar7 = cVar4;
          }
          if (cVar7 != 'O') goto LAB_0208f821;
          cVar4 = param_1[3];
          if (cVar4 == '\0') {
            pcVar6 = &DAT_020a7b92;
          }
          else {
            cVar7 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar7 = cVar4;
            }
            if ((cVar7 != 'S') || (param_1[4] != '\0')) goto LAB_0208f821;
            pcVar6 = &DAT_020a7b93;
          }
        }
      }
      goto LAB_0208f810;
    }
    if (cVar4 == 'U') {
      cVar4 = param_1[1];
      if (cVar4 == '\0') {
        pcVar6 = str_020a77d3 + 1;
      }
      else {
        cVar7 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar7 = cVar4;
        }
        if (cVar7 != 'N') goto LAB_0208f821;
        cVar4 = param_1[2];
        if (cVar4 == '\0') {
          pcVar6 = str_020a77d3 + 2;
        }
        else {
          cVar7 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar7 = cVar4;
          }
          if (cVar7 != 'I') goto LAB_0208f821;
          cVar4 = param_1[3];
          if (cVar4 == '\0') {
            pcVar6 = str_020a77d3 + 3;
          }
          else {
            cVar7 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar7 = cVar4;
            }
            if (cVar7 != 'V') goto LAB_0208f821;
            cVar4 = param_1[4];
            if (cVar4 == '\0') {
              pcVar6 = str_020a77d3 + 4;
            }
            else {
              cVar7 = cVar4 + -0x20;
              if (0x19 < (byte)(cVar4 + 0x9fU)) {
                cVar7 = cVar4;
              }
              if (cVar7 != 'E') goto LAB_0208f821;
              cVar4 = param_1[5];
              if (cVar4 == '\0') {
                pcVar6 = str_020a77d3 + 5;
              }
              else {
                cVar7 = cVar4 + -0x20;
                if (0x19 < (byte)(cVar4 + 0x9fU)) {
                  cVar7 = cVar4;
                }
                if (cVar7 != 'R') goto LAB_0208f821;
                cVar4 = param_1[6];
                if (cVar4 == '\0') {
                  pcVar6 = str_020a77d3 + 6;
                }
                else {
                  cVar7 = cVar4 + -0x20;
                  if (0x19 < (byte)(cVar4 + 0x9fU)) {
                    cVar7 = cVar4;
                  }
                  if (cVar7 != 'S') goto LAB_0208f821;
                  cVar4 = param_1[7];
                  if (cVar4 == '\0') {
                    pcVar6 = str_020a77d3 + 7;
                  }
                  else {
                    cVar7 = cVar4 + -0x20;
                    if (0x19 < (byte)(cVar4 + 0x9fU)) {
                      cVar7 = cVar4;
                    }
                    if (cVar7 != 'A') goto LAB_0208f821;
                    cVar4 = param_1[8];
                    if (cVar4 == '\0') {
                      pcVar6 = str_020a77d3 + 8;
                    }
                    else {
                      cVar7 = cVar4 + -0x20;
                      if (0x19 < (byte)(cVar4 + 0x9fU)) {
                        cVar7 = cVar4;
                      }
                      if ((cVar7 != 'L') || (param_1[9] != '\0')) goto LAB_0208f821;
                      pcVar6 = str_020a77d3 + 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (*pcVar6 == '\0') {
        return '\x01';
      }
    }
LAB_0208f821:
    cVar4 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar4 = cVar2;
    }
    if (cVar4 == 'U') {
      cVar4 = param_1[1];
      cVar7 = DAT_020a7b95;
      if (cVar4 == '\0') {
joined_r0x0208f8e9:
        if (cVar7 == '\0') {
          return '\x01';
        }
        if (cVar2 == '\0') goto LAB_0208f9c0;
      }
      else {
        cVar7 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar7 = cVar4;
        }
        if (cVar7 == 'E') {
          cVar4 = param_1[2];
          cVar7 = DAT_020a7b96;
          if (cVar4 != '\0') {
            cVar7 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar7 = cVar4;
            }
            if (cVar7 != 'F') goto code_r0x0208f911;
            cVar4 = param_1[3];
            cVar7 = DAT_020a7b97;
            if (cVar4 != '\0') {
              cVar7 = cVar4 + -0x20;
              if (0x19 < (byte)(cVar4 + 0x9fU)) {
                cVar7 = cVar4;
              }
              if ((cVar7 != 'I') || (cVar7 = DAT_020a7b98, param_1[4] != '\0'))
              goto code_r0x0208f911;
            }
          }
          goto joined_r0x0208f8e9;
        }
      }
code_r0x0208f911:
      cVar4 = param_1[1];
      if (cVar4 == '\0') {
        pcVar6 = &DAT_020a7b9a;
      }
      else {
        cVar7 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar7 = cVar4;
        }
        if (cVar7 != 'B') goto LAB_0208f9d8;
        cVar4 = param_1[2];
        if (cVar4 == '\0') {
          pcVar6 = &DAT_020a7b9b;
        }
        else {
          cVar7 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar7 = cVar4;
          }
          if (cVar7 != 'O') goto LAB_0208f9d8;
          cVar4 = param_1[3];
          if (cVar4 == '\0') {
            pcVar6 = &DAT_020a7b9c;
          }
          else {
            cVar7 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar7 = cVar4;
            }
            if (cVar7 != 'O') goto LAB_0208f9d8;
            cVar4 = param_1[4];
            if (cVar4 == '\0') {
              pcVar6 = &DAT_020a7b9d;
            }
            else {
              cVar7 = cVar4 + -0x20;
              if (0x19 < (byte)(cVar4 + 0x9fU)) {
                cVar7 = cVar4;
              }
              if ((cVar7 != 'T') || (param_1[5] != '\0')) goto LAB_0208f9d8;
              pcVar6 = &DAT_020a7b9e;
            }
          }
        }
      }
      goto LAB_0208f9c7;
    }
LAB_0208f9d8:
    cVar4 = cVar2;
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar4 = cVar2 + -0x20;
    }
    if (cVar4 == 'U') {
      cVar4 = param_1[1];
      if (cVar4 == '\0') {
        pcVar6 = &DAT_020a7ba0;
      }
      else {
        cVar7 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar7 = cVar4;
        }
        if (cVar7 != '-') goto LAB_0208fb24;
        cVar4 = param_1[2];
        if (cVar4 == '\0') {
          pcVar6 = &DAT_020a7ba1;
        }
        else {
          cVar7 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar7 = cVar4;
          }
          if (cVar7 != 'B') goto LAB_0208fb24;
          cVar4 = param_1[3];
          if (cVar4 == '\0') {
            pcVar6 = &DAT_020a7ba2;
          }
          else {
            cVar7 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar7 = cVar4;
            }
            if (cVar7 != 'O') goto LAB_0208fb24;
            cVar4 = param_1[4];
            if (cVar4 == '\0') {
              pcVar6 = &DAT_020a7ba3;
            }
            else {
              cVar7 = cVar4 + -0x20;
              if (0x19 < (byte)(cVar4 + 0x9fU)) {
                cVar7 = cVar4;
              }
              if (cVar7 != 'O') goto LAB_0208fb24;
              cVar4 = param_1[5];
              if (cVar4 == '\0') {
                pcVar6 = &DAT_020a7ba4;
              }
              else {
                cVar7 = cVar4 + -0x20;
                if (0x19 < (byte)(cVar4 + 0x9fU)) {
                  cVar7 = cVar4;
                }
                if ((cVar7 != 'T') || (param_1[6] != '\0')) goto LAB_0208fb24;
                pcVar6 = &DAT_020a7ba5;
              }
            }
          }
        }
      }
      if (*pcVar6 == '\0') {
        return '\x01';
      }
      if (cVar2 == '\0') goto LAB_0208fb79;
    }
LAB_0208fb24:
    lVar1 = 0;
    do {
      lVar5 = lVar1;
      if (lVar5 == 0xc) goto LAB_0208fb8a;
      cVar4 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar4 = cVar2;
      }
      cVar2 = str_020a7ba6[lVar5];
      cVar7 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar7 = cVar2;
      }
      if (cVar4 != cVar7) goto LAB_0208fb8a;
      cVar2 = param_1[lVar5 + 1];
      lVar1 = lVar5 + 1;
    } while (cVar2 != '\0');
    pcVar6 = str_020a7ba6 + lVar5 + 1;
  }
  if (*pcVar6 == '\0') {
    return '\x01';
  }
LAB_0208fb8a:
  uVar3 = recovered_206eb80(param_1,str_020a7bb3);
  return (uchar)uVar3;
}
