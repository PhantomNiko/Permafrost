/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3dc1 (*(uint8_t *)(0x20f4582U))
#define DAT_020a3dc2 (*(uint8_t *)(0x20f4583U))
#define DAT_020a3f28 (*(uint8_t *)(0x20f46e9U))
#define DAT_020a3f29 (*(uint8_t *)(0x20f46eaU))
#define DAT_020a3f2a (*(uint8_t *)(0x20f46ebU))
#define DAT_020a3f2b (*(uint8_t *)(0x20f46ecU))
#define str_020a3e52 (*(char (*)[1])(0x20f4613U))
#define str_020a3ea6 (*(char (*)[1])(0x20f4667U))
uchar recovered_20df890(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;

  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return '\0';
  }
  pcVar3 = *(char **)param_1[2];
  if (pcVar3 == (char *)0x0) goto LAB_02099e7c;
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar4 = str_020a3e52;
LAB_02099c8e:
    if (*pcVar4 == '\0') {
      return '\x01';
    }
    if (cVar1 != '\0') goto LAB_02099c9f;
LAB_02099e5e:
    pcVar3 = &DAT_020a3f28;
  }
  else {
    if (cVar1 == 'i') {
LAB_02099b34:
      cVar5 = pcVar3[1];
      if (cVar5 == '\0') {
        pcVar4 = &DAT_020a3dc1;
      }
      else {
        if (cVar5 != 'f') {
          cVar6 = cVar5 + -0x20;
          if (0x19 < (byte)(cVar5 + 0x9fU)) {
            cVar6 = cVar5;
          }
          if (cVar6 != 'F') goto LAB_02099b8b;
        }
        if (pcVar3[2] != '\0') goto LAB_02099b8b;
        pcVar4 = &DAT_020a3dc2;
      }
      if (*pcVar4 == '\0') {
        return '\x01';
      }
    }
    else {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 == 'I') goto LAB_02099b34;
    }
LAB_02099b8b:
    if (cVar1 == 'w') {
LAB_02099bad:
      cVar5 = pcVar3[1];
      if (cVar5 == '\0') {
        pcVar4 = str_020a3e52 + 1;
      }
      else {
        if (cVar5 != 'h') {
          cVar6 = cVar5 + -0x20;
          if (0x19 < (byte)(cVar5 + 0x9fU)) {
            cVar6 = cVar5;
          }
          if (cVar6 != 'H') goto LAB_02099c9f;
        }
        cVar5 = pcVar3[2];
        if (cVar5 == '\0') {
          pcVar4 = str_020a3e52 + 2;
        }
        else {
          if (cVar5 != 'i') {
            cVar6 = cVar5 + -0x20;
            if (0x19 < (byte)(cVar5 + 0x9fU)) {
              cVar6 = cVar5;
            }
            if (cVar6 != 'I') goto LAB_02099c9f;
          }
          cVar5 = pcVar3[3];
          if (cVar5 == '\0') {
            pcVar4 = str_020a3e52 + 3;
          }
          else {
            if (cVar5 != 'l') {
              cVar6 = cVar5 + -0x20;
              if (0x19 < (byte)(cVar5 + 0x9fU)) {
                cVar6 = cVar5;
              }
              if (cVar6 != 'L') goto LAB_02099c9f;
            }
            cVar5 = pcVar3[4];
            if (cVar5 == '\0') {
              pcVar4 = str_020a3e52 + 4;
            }
            else {
              if (cVar5 != 'e') {
                cVar6 = cVar5 + -0x20;
                if (0x19 < (byte)(cVar5 + 0x9fU)) {
                  cVar6 = cVar5;
                }
                if (cVar6 != 'E') goto LAB_02099c9f;
              }
              if (pcVar3[5] != '\0') goto LAB_02099c9f;
              pcVar4 = str_020a3e52 + 5;
            }
          }
        }
      }
      goto LAB_02099c8e;
    }
    cVar5 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar5 = cVar1;
    }
    if (cVar5 == 'W') goto LAB_02099bad;
LAB_02099c9f:
    if (cVar1 == 'r') {
LAB_02099cc1:
      cVar5 = pcVar3[1];
      if (cVar5 == '\0') {
        pcVar4 = str_020a3ea6 + 1;
      }
      else {
        if (cVar5 != 'e') {
          cVar6 = cVar5 + -0x20;
          if (0x19 < (byte)(cVar5 + 0x9fU)) {
            cVar6 = cVar5;
          }
          if (cVar6 != 'E') goto LAB_02099de8;
        }
        cVar5 = pcVar3[2];
        if (cVar5 == '\0') {
          pcVar4 = str_020a3ea6 + 2;
        }
        else {
          if (cVar5 != 'p') {
            cVar6 = cVar5 + -0x20;
            if (0x19 < (byte)(cVar5 + 0x9fU)) {
              cVar6 = cVar5;
            }
            if (cVar6 != 'P') goto LAB_02099de8;
          }
          cVar5 = pcVar3[3];
          if (cVar5 == '\0') {
            pcVar4 = str_020a3ea6 + 3;
          }
          else {
            if (cVar5 != 'e') {
              cVar6 = cVar5 + -0x20;
              if (0x19 < (byte)(cVar5 + 0x9fU)) {
                cVar6 = cVar5;
              }
              if (cVar6 != 'E') goto LAB_02099de8;
            }
            cVar5 = pcVar3[4];
            if (cVar5 == '\0') {
              pcVar4 = str_020a3ea6 + 4;
            }
            else {
              if (cVar5 != 'a') {
                cVar6 = cVar5 + -0x20;
                if (0x19 < (byte)(cVar5 + 0x9fU)) {
                  cVar6 = cVar5;
                }
                if (cVar6 != 'A') goto LAB_02099de8;
              }
              cVar5 = pcVar3[5];
              if (cVar5 == '\0') {
                pcVar4 = str_020a3ea6 + 5;
              }
              else {
                if (cVar5 != 't') {
                  cVar6 = cVar5 + -0x20;
                  if (0x19 < (byte)(cVar5 + 0x9fU)) {
                    cVar6 = cVar5;
                  }
                  if (cVar6 != 'T') goto LAB_02099de8;
                }
                if (pcVar3[6] != '\0') goto LAB_02099de8;
                pcVar4 = str_020a3ea6 + 6;
              }
            }
          }
        }
      }
      if (*pcVar4 == '\0') {
        return '\x01';
      }
      if (cVar1 == '\0') goto LAB_02099e5e;
    }
    else {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 == 'R') goto LAB_02099cc1;
    }
LAB_02099de8:
    if (cVar1 != 'f') {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 != 'F') goto LAB_02099e7c;
    }
    cVar1 = pcVar3[1];
    if (cVar1 == '\0') {
      pcVar3 = &DAT_020a3f29;
    }
    else {
      if (cVar1 != 'o') {
        cVar5 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar5 = cVar1;
        }
        if (cVar5 != 'O') goto LAB_02099e7c;
      }
      cVar1 = pcVar3[2];
      if (cVar1 == '\0') {
        pcVar3 = &DAT_020a3f2a;
      }
      else {
        if (cVar1 != 'r') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'R') goto LAB_02099e7c;
        }
        if (pcVar3[3] != '\0') goto LAB_02099e7c;
        pcVar3 = &DAT_020a3f2b;
      }
    }
  }
  if (*pcVar3 == '\0') {
    return '\x01';
  }
LAB_02099e7c:
  uVar2 = recovered_20dfc30(param_1);
  return uVar2;
}
