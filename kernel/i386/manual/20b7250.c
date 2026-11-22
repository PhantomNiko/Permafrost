/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fb23 (*(uint8_t *)(0x20cd120U))
#define DAT_0208fb24 (*(uint8_t *)(0x20cd121U))
#define DAT_0208fc8a (*(uint8_t *)(0x20cd287U))
#define DAT_0208fc8b (*(uint8_t *)(0x20cd288U))
#define DAT_0208fc8c (*(uint8_t *)(0x20cd289U))
#define DAT_0208fc8d (*(uint8_t *)(0x20cd28aU))
#define str_0208fbb4 (*(char (*)[1])(0x20cd1b1U))
#define str_0208fc08 (*(char (*)[1])(0x20cd205U))
bool recovered_20b7250(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;

  if ((incoming_ecx == (int *)0x0) || (*incoming_ecx == 0)) {
    return false;
  }
  pbVar1 = *(byte **)incoming_ecx[2];
  if (pbVar1 == (byte *)0x0) goto LAB_02084e71;
  bVar6 = *pbVar1;
  incoming_edx = (uint)bVar6;
  if (bVar6 == 0) {
    pcVar7 = str_0208fbb4;
LAB_02084cc1:
    if (*pcVar7 == '\0') {
      return true;
    }
    if ((char)incoming_edx != '\0') goto LAB_02084cd2;
LAB_02084e59:
    pcVar7 = &DAT_0208fc8a;
  }
  else {
    if (bVar6 == 0x69) {
LAB_02084b77:
      bVar6 = pbVar1[1];
      if (bVar6 == 0) {
        pcVar7 = &DAT_0208fb23;
      }
      else {
        if (bVar6 != 0x66) {
          incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
          if ((byte)(bVar6 + 0x9f) < 0x1a) {
            bVar6 = bVar6 - 0x20;
          }
          if (bVar6 != 0x46) goto LAB_02084bdf;
        }
        if (pbVar1[2] != 0) goto LAB_02084bdf;
        pcVar7 = &DAT_0208fb24;
      }
      if (*pcVar7 == '\0') {
        return true;
      }
    }
    else {
      bVar2 = bVar6;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar2 = bVar6 - 0x20;
      }
      incoming_edx = (uint)CONCAT11(bVar2,bVar6);
      if (bVar2 == 0x49) goto LAB_02084b77;
    }
LAB_02084bdf:
    cVar5 = (char)incoming_edx;
    if (cVar5 == 'w') {
LAB_02084be8:
      bVar6 = pbVar1[1];
      if (bVar6 == 0) {
        pcVar7 = str_0208fbb4 + 1;
      }
      else {
        if (bVar6 != 0x68) {
          incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
          if ((byte)(bVar6 + 0x9f) < 0x1a) {
            bVar6 = bVar6 - 0x20;
          }
          if (bVar6 != 0x48) goto LAB_02084cd2;
        }
        bVar6 = pbVar1[2];
        if (bVar6 == 0) {
          pcVar7 = str_0208fbb4 + 2;
        }
        else {
          if (bVar6 != 0x69) {
            incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
            if ((byte)(bVar6 + 0x9f) < 0x1a) {
              bVar6 = bVar6 - 0x20;
            }
            if (bVar6 != 0x49) goto LAB_02084cd2;
          }
          bVar6 = pbVar1[3];
          if (bVar6 == 0) {
            pcVar7 = str_0208fbb4 + 3;
          }
          else {
            if (bVar6 != 0x6c) {
              incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
              if ((byte)(bVar6 + 0x9f) < 0x1a) {
                bVar6 = bVar6 - 0x20;
              }
              if (bVar6 != 0x4c) goto LAB_02084cd2;
            }
            bVar6 = pbVar1[4];
            if (bVar6 == 0) {
              pcVar7 = str_0208fbb4 + 4;
            }
            else {
              if (bVar6 != 0x65) {
                incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
                if ((byte)(bVar6 + 0x9f) < 0x1a) {
                  bVar6 = bVar6 - 0x20;
                }
                if (bVar6 != 0x45) goto LAB_02084cd2;
              }
              if (pbVar1[5] != 0) goto LAB_02084cd2;
              pcVar7 = str_0208fbb4 + 5;
            }
          }
        }
      }
      goto LAB_02084cc1;
    }
    cVar3 = cVar5;
    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      cVar3 = cVar5 + -0x20;
    }
    incoming_edx = (uint)CONCAT11(cVar3,cVar5);
    if (cVar3 == 'W') goto LAB_02084be8;
LAB_02084cd2:
    cVar5 = (char)incoming_edx;
    if (cVar5 == 'r') {
LAB_02084cdb:
      bVar6 = pbVar1[1];
      if (bVar6 == 0) {
        pcVar7 = str_0208fc08 + 1;
      }
      else {
        if (bVar6 != 0x65) {
          incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
          if ((byte)(bVar6 + 0x9f) < 0x1a) {
            bVar6 = bVar6 - 0x20;
          }
          if (bVar6 != 0x45) goto LAB_02084df7;
        }
        bVar6 = pbVar1[2];
        if (bVar6 == 0) {
          pcVar7 = str_0208fc08 + 2;
        }
        else {
          if (bVar6 != 0x70) {
            incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
            if ((byte)(bVar6 + 0x9f) < 0x1a) {
              bVar6 = bVar6 - 0x20;
            }
            if (bVar6 != 0x50) goto LAB_02084df7;
          }
          bVar6 = pbVar1[3];
          if (bVar6 == 0) {
            pcVar7 = str_0208fc08 + 3;
          }
          else {
            if (bVar6 != 0x65) {
              incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
              if ((byte)(bVar6 + 0x9f) < 0x1a) {
                bVar6 = bVar6 - 0x20;
              }
              if (bVar6 != 0x45) goto LAB_02084df7;
            }
            bVar6 = pbVar1[4];
            if (bVar6 == 0) {
              pcVar7 = str_0208fc08 + 4;
            }
            else {
              if (bVar6 != 0x61) {
                incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
                if ((byte)(bVar6 + 0x9f) < 0x1a) {
                  bVar6 = bVar6 - 0x20;
                }
                if (bVar6 != 0x41) goto LAB_02084df7;
              }
              bVar6 = pbVar1[5];
              if (bVar6 == 0) {
                pcVar7 = str_0208fc08 + 5;
              }
              else {
                if (bVar6 != 0x74) {
                  incoming_edx = (uint)CONCAT11(bVar6 + 0x9f,(char)incoming_edx);
                  if ((byte)(bVar6 + 0x9f) < 0x1a) {
                    bVar6 = bVar6 - 0x20;
                  }
                  if (bVar6 != 0x54) goto LAB_02084df7;
                }
                if (pbVar1[6] != 0) goto LAB_02084df7;
                pcVar7 = str_0208fc08 + 6;
              }
            }
          }
        }
      }
      if (*pcVar7 == '\0') {
        return true;
      }
      if ((char)incoming_edx == '\0') goto LAB_02084e59;
    }
    else {
      cVar3 = cVar5;
      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        cVar3 = cVar5 + -0x20;
      }
      incoming_edx = (uint)CONCAT11(cVar3,cVar5);
      if (cVar3 == 'R') goto LAB_02084cdb;
    }
LAB_02084df7:
    cVar5 = (char)incoming_edx;
    if (cVar5 != 'f') {
      bVar6 = cVar5 + 0x9f;
      if (bVar6 < 0x1a) {
        cVar5 = cVar5 + -0x20;
      }
      incoming_edx = (uint)CONCAT11(bVar6,cVar5);
      if (cVar5 != 'F') goto LAB_02084e71;
    }
    bVar6 = pbVar1[1];
    incoming_edx = (uint)bVar6;
    if (incoming_edx == 0) {
      pcVar7 = &DAT_0208fc8b;
    }
    else {
      if (incoming_edx != 0x6f) {
        if ((byte)(bVar6 + 0x9f) < 0x1a) {
          incoming_edx = (uint)(byte)(bVar6 - 0x20);
        }
        if ((char)incoming_edx != 'O') goto LAB_02084e71;
      }
      bVar6 = pbVar1[2];
      incoming_edx = (uint)bVar6;
      if (incoming_edx == 0) {
        pcVar7 = &DAT_0208fc8c;
      }
      else {
        if (incoming_edx != 0x72) {
          if ((byte)(bVar6 + 0x9f) < 0x1a) {
            incoming_edx = (uint)(byte)(bVar6 - 0x20);
          }
          if ((char)incoming_edx != 'R') goto LAB_02084e71;
        }
        if (pbVar1[3] != 0) goto LAB_02084e71;
        pcVar7 = &DAT_0208fc8d;
      }
    }
  }
  if (*pcVar7 == '\0') {
    return true;
  }
LAB_02084e71:
  bVar4 = recovered_20b7580(incoming_ecx,incoming_edx);
  return bVar4;
}
