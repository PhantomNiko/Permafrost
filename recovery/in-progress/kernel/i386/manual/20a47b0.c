/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02093238 (*(char *)(0x20d1293U))
#define DAT_02093239 (*(char *)(0x20d1294U))
#define DAT_0209323a (*(char *)(0x20d1295U))
#define DAT_0209323b (*(char *)(0x20d1296U))
#define DAT_0209323c (*(char *)(0x20d1297U))
#define DAT_0209323d (*(char *)(0x20d1298U))
#define DAT_0209323e (*(char *)(0x20d1299U))
#define DAT_02093240 (*(uint8_t *)(0x20d129bU))
#define DAT_02093241 (*(uint8_t *)(0x20d129cU))
#define DAT_02093242 (*(uint8_t *)(0x20d129dU))
#define DAT_02093243 (*(uint8_t *)(0x20d129eU))
#define DAT_02093249 (*(char *)(0x20d12a4U))
#define DAT_0209324a (*(char *)(0x20d12a5U))
#define DAT_0209324b (*(char *)(0x20d12a6U))
#define DAT_0209324c (*(char *)(0x20d12a7U))
#define str_02093267 (*(char (*)[1])(0x20d1738U))
undefined4 recovered_20a47b0(char *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;

  if (incoming_edx == (undefined4 *)0x0 || incoming_ecx == (char *)0x0) {
    return 0;
  }
  cVar4 = *incoming_ecx;
  cVar2 = DAT_02093249;
  if (cVar4 == '\0') {
    uVar5 = 0;
    cVar4 = DAT_0209323b;
joined_r0x020774bb:
    if (cVar4 == '\0') {
      uVar7 = 2;
      goto LAB_020777c4;
    }
    if ((char)uVar5 != '\0') goto LAB_02077596;
joined_r0x020776ed:
    if (cVar2 != '\0') {
      if ((char)uVar5 != '\0') goto LAB_02077714;
      pcVar6 = str_02093267;
      goto LAB_020777b6;
    }
  }
  else {
    if (0x19 < (byte)(cVar4 + 0x9fU)) {
      uVar5 = (uint)CONCAT11(cVar4,cVar4);
      if (cVar4 != 'G') goto LAB_020774e6;
LAB_02077552:
      cVar1 = incoming_ecx[1];
      uVar3 = (undefined1)uVar5;
      uVar5 = (uint)CONCAT11(cVar1,uVar3);
      cVar4 = DAT_0209323c;
      if (cVar1 != '\0') {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          uVar5 = (uint)CONCAT11(cVar1 + -0x20,uVar3);
        }
        if ((char)(uVar5 >> 8) != 'P') goto LAB_02077596;
        cVar1 = incoming_ecx[2];
        uVar3 = (undefined1)uVar5;
        uVar5 = (uint)CONCAT11(cVar1,uVar3);
        cVar4 = DAT_0209323d;
        if (cVar1 != '\0') {
          if ((byte)(cVar1 + 0x9fU) < 0x1a) {
            uVar5 = (uint)CONCAT11(cVar1 + -0x20,uVar3);
          }
          if (((char)(uVar5 >> 8) != 'T') || (cVar4 = DAT_0209323e, incoming_ecx[3] != '\0'))
          goto LAB_02077596;
        }
      }
      goto joined_r0x020774bb;
    }
    uVar5 = (uint)CONCAT11(cVar4 + -0x20,cVar4);
    if ((char)(cVar4 + -0x20) == 'G') goto LAB_02077552;
LAB_020774e6:
    if (uVar5 >> 8 == 0x4d) {
      cVar4 = incoming_ecx[1];
      cVar1 = DAT_02093238;
      if (cVar4 == '\0') {
joined_r0x02077667:
        if (cVar1 == '\0') {
          uVar7 = 1;
          goto LAB_020777c4;
        }
      }
      else {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if (cVar4 == 'B') {
          cVar4 = incoming_ecx[2];
          cVar1 = DAT_02093239;
          if (cVar4 != '\0') {
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if ((cVar4 != 'R') || (cVar1 = DAT_0209323a, incoming_ecx[3] != '\0'))
            goto LAB_0207754d;
          }
          goto joined_r0x02077667;
        }
      }
LAB_0207754d:
      if ((char)(uVar5 >> 8) == 'G') goto LAB_02077552;
    }
LAB_02077596:
    cVar4 = (char)uVar5;
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      uVar5 = (uint)CONCAT11(cVar4 + -0x20,cVar4);
      if ((char)(cVar4 + -0x20) != 'A') goto LAB_020775ba;
LAB_0207769e:
      cVar4 = incoming_ecx[1];
      uVar3 = (undefined1)uVar5;
      uVar5 = (uint)CONCAT11(cVar4,uVar3);
      cVar2 = DAT_0209324a;
      if (cVar4 != '\0') {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar5 = (uint)CONCAT11(cVar4 + -0x20,uVar3);
        }
        if ((char)(uVar5 >> 8) != 'P') goto LAB_02077714;
        cVar4 = incoming_ecx[2];
        uVar3 = (undefined1)uVar5;
        uVar5 = (uint)CONCAT11(cVar4,uVar3);
        cVar2 = DAT_0209324b;
        if (cVar4 != '\0') {
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            uVar5 = (uint)CONCAT11(cVar4 + -0x20,uVar3);
          }
          if (((char)(uVar5 >> 8) != 'M') || (cVar2 = DAT_0209324c, incoming_ecx[3] != '\0'))
          goto LAB_02077714;
        }
      }
      goto joined_r0x020776ed;
    }
    uVar5 = (uint)CONCAT11(cVar4,cVar4);
    if (cVar4 == 'A') goto LAB_0207769e;
LAB_020775ba:
    if (uVar5 >> 8 == 0x57) {
      cVar4 = incoming_ecx[1];
      if (cVar4 == '\0') {
        pcVar6 = &DAT_02093240;
LAB_0207768c:
        if (*pcVar6 == '\0') {
          uVar7 = 3;
          goto LAB_020777c4;
        }
        if ((char)uVar5 == '\0') goto joined_r0x020776ed;
      }
      else {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if (cVar4 == 'B') {
          cVar4 = incoming_ecx[2];
          if (cVar4 == '\0') {
            pcVar6 = &DAT_02093241;
          }
          else {
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if (cVar4 != 'P') goto LAB_02077699;
            cVar4 = incoming_ecx[3];
            if (cVar4 == '\0') {
              pcVar6 = &DAT_02093242;
            }
            else {
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                cVar4 = cVar4 + -0x20;
              }
              if ((cVar4 != 'T') || (incoming_ecx[4] != '\0')) goto LAB_02077699;
              pcVar6 = &DAT_02093243;
            }
          }
          goto LAB_0207768c;
        }
      }
LAB_02077699:
      if ((char)(uVar5 >> 8) == 'A') goto LAB_0207769e;
    }
LAB_02077714:
    cVar4 = (char)uVar5;
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      cVar4 = cVar4 + -0x20;
    }
    if (cVar4 != 'A') {
      return 0;
    }
    cVar4 = incoming_ecx[1];
    if (cVar4 == '\0') {
      pcVar6 = str_02093267 + 1;
    }
    else {
      if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        cVar4 = cVar4 + -0x20;
      }
      if (cVar4 != 'P') {
        return 0;
      }
      cVar4 = incoming_ecx[2];
      if (cVar4 == '\0') {
        pcVar6 = str_02093267 + 2;
      }
      else {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if (cVar4 != 'P') {
          return 0;
        }
        cVar4 = incoming_ecx[3];
        if (cVar4 == '\0') {
          pcVar6 = str_02093267 + 3;
        }
        else {
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            cVar4 = cVar4 + -0x20;
          }
          if (cVar4 != 'L') {
            return 0;
          }
          cVar4 = incoming_ecx[4];
          if (cVar4 == '\0') {
            pcVar6 = str_02093267 + 4;
          }
          else {
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if (cVar4 != 'E') {
              return 0;
            }
            if (incoming_ecx[5] != '\0') {
              return 0;
            }
            pcVar6 = str_02093267 + 5;
          }
        }
      }
    }
LAB_020777b6:
    if (*pcVar6 != '\0') {
      return 0;
    }
  }
  uVar7 = 5;
LAB_020777c4:
  *incoming_edx = uVar7;
  return 1;
}
