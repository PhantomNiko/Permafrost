/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a74d6 (*(char *)(0x20f8702U))
#define DAT_020a74d7 (*(char *)(0x20f8703U))
#define DAT_020a74d8 (*(char *)(0x20f8704U))
#define DAT_020a74d9 (*(char *)(0x20f8705U))
#define DAT_020a74da (*(char *)(0x20f8706U))
#define DAT_020a74db (*(char *)(0x20f8707U))
#define DAT_020a74dc (*(char *)(0x20f8708U))
#define DAT_020a74de (*(uint8_t *)(0x20f870aU))
#define DAT_020a74df (*(uint8_t *)(0x20f870bU))
#define DAT_020a74e0 (*(uint8_t *)(0x20f870cU))
#define DAT_020a74e1 (*(uint8_t *)(0x20f870dU))
#define DAT_020a74e7 (*(char *)(0x20f8713U))
#define DAT_020a74e8 (*(char *)(0x20f8714U))
#define DAT_020a74e9 (*(char *)(0x20f8715U))
#define DAT_020a74ea (*(char *)(0x20f8716U))
#define str_020a7505 (*(char (*)[1])(0x20f8bb6U))
uchar recovered_20ca020(char *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;

  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    return '\0';
  }
  cVar1 = *param_1;
  cVar3 = DAT_020a74d9;
  cVar4 = DAT_020a74e7;
  if (cVar1 == '\0') {
joined_r0x0208943f:
    if (cVar3 == '\0') {
      uVar2 = 2;
      goto LAB_020897a3;
    }
    if (cVar1 != '\0') goto LAB_020894d4;
joined_r0x02089697:
    if (cVar4 != '\0') {
      if (cVar1 != '\0') goto LAB_020896c0;
      pcVar5 = str_020a7505;
      goto LAB_02089795;
    }
  }
  else {
    cVar3 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = cVar1;
    }
    if (cVar3 == 'G') {
      cVar6 = param_1[1];
      cVar3 = DAT_020a74da;
      if (cVar6 != '\0') {
        cVar3 = cVar6 + -0x20;
        if (0x19 < (byte)(cVar6 + 0x9fU)) {
          cVar3 = cVar6;
        }
        if (cVar3 != 'P') goto LAB_020894d4;
        cVar6 = param_1[2];
        cVar3 = DAT_020a74db;
        if (cVar6 != '\0') {
          cVar3 = cVar6 + -0x20;
          if (0x19 < (byte)(cVar6 + 0x9fU)) {
            cVar3 = cVar6;
          }
          if ((cVar3 != 'T') || (cVar3 = DAT_020a74dc, param_1[3] != '\0')) goto LAB_020894d4;
        }
      }
      goto joined_r0x0208943f;
    }
    if (cVar3 == 'M') {
      cVar3 = param_1[1];
      cVar6 = DAT_020a74d6;
      if (cVar3 == '\0') {
joined_r0x0208946d:
        if (cVar6 == '\0') {
LAB_020895ee:
          uVar2 = 1;
          goto LAB_020897a3;
        }
      }
      else {
        cVar6 = cVar3 + -0x20;
        if (0x19 < (byte)(cVar3 + 0x9fU)) {
          cVar6 = cVar3;
        }
        if (cVar6 == 'B') {
          cVar3 = param_1[2];
          cVar6 = DAT_020a74d7;
          if (cVar3 == '\0') goto joined_r0x0208946d;
          cVar6 = cVar3 + -0x20;
          if (0x19 < (byte)(cVar3 + 0x9fU)) {
            cVar6 = cVar3;
          }
          if (((cVar6 != 'R') || (param_1[3] != '\0')) || (DAT_020a74d8 != '\0')) goto LAB_020894d4;
          goto LAB_020895ee;
        }
      }
    }
LAB_020894d4:
    cVar3 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = cVar1;
    }
    if (cVar3 == 'A') {
      cVar3 = param_1[1];
      cVar4 = DAT_020a74e8;
      if (cVar3 != '\0') {
        cVar4 = cVar3 + -0x20;
        if (0x19 < (byte)(cVar3 + 0x9fU)) {
          cVar4 = cVar3;
        }
        if (cVar4 != 'P') goto LAB_020896c0;
        cVar3 = param_1[2];
        cVar4 = DAT_020a74e9;
        if (cVar3 != '\0') {
          cVar4 = cVar3 + -0x20;
          if (0x19 < (byte)(cVar3 + 0x9fU)) {
            cVar4 = cVar3;
          }
          if ((cVar4 != 'M') || (cVar4 = DAT_020a74ea, param_1[3] != '\0')) goto LAB_020896c0;
        }
      }
      goto joined_r0x02089697;
    }
    if (cVar3 == 'W') {
      cVar3 = param_1[1];
      if (cVar3 == '\0') {
        pcVar5 = &DAT_020a74de;
      }
      else {
        cVar6 = cVar3 + -0x20;
        if (0x19 < (byte)(cVar3 + 0x9fU)) {
          cVar6 = cVar3;
        }
        if (cVar6 != 'B') goto LAB_020896c0;
        cVar3 = param_1[2];
        if (cVar3 == '\0') {
          pcVar5 = &DAT_020a74df;
        }
        else {
          cVar6 = cVar3 + -0x20;
          if (0x19 < (byte)(cVar3 + 0x9fU)) {
            cVar6 = cVar3;
          }
          if (cVar6 != 'P') goto LAB_020896c0;
          cVar3 = param_1[3];
          if (cVar3 == '\0') {
            pcVar5 = &DAT_020a74e0;
          }
          else {
            cVar6 = cVar3 + -0x20;
            if (0x19 < (byte)(cVar3 + 0x9fU)) {
              cVar6 = cVar3;
            }
            if ((cVar6 != 'T') || (param_1[4] != '\0')) goto LAB_020896c0;
            pcVar5 = &DAT_020a74e1;
          }
        }
      }
      if (*pcVar5 == '\0') {
        uVar2 = 3;
        goto LAB_020897a3;
      }
      if (cVar1 == '\0') goto joined_r0x02089697;
    }
LAB_020896c0:
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      cVar1 = cVar1 + -0x20;
    }
    if (cVar1 != 'A') {
      return '\0';
    }
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      pcVar5 = str_020a7505 + 1;
    }
    else {
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      if (cVar3 != 'P') {
        return '\0';
      }
      cVar1 = param_1[2];
      if (cVar1 == '\0') {
        pcVar5 = str_020a7505 + 2;
      }
      else {
        cVar3 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar3 = cVar1;
        }
        if (cVar3 != 'P') {
          return '\0';
        }
        cVar1 = param_1[3];
        if (cVar1 == '\0') {
          pcVar5 = str_020a7505 + 3;
        }
        else {
          cVar3 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar3 = cVar1;
          }
          if (cVar3 != 'L') {
            return '\0';
          }
          cVar1 = param_1[4];
          if (cVar1 == '\0') {
            pcVar5 = str_020a7505 + 4;
          }
          else {
            cVar3 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar3 = cVar1;
            }
            if (cVar3 != 'E') {
              return '\0';
            }
            if (param_1[5] != '\0') {
              return '\0';
            }
            pcVar5 = str_020a7505 + 5;
          }
        }
      }
    }
LAB_02089795:
    if (*pcVar5 != '\0') {
      return '\0';
    }
  }
  uVar2 = 5;
LAB_020897a3:
  *param_2 = uVar2;
  return '\x01';
}
