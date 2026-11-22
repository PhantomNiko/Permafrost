/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c7c4e (*(uint8_t *)(0x20c7c4eU))
#define DAT_020c7c4f (*(uint8_t *)(0x20c7c4fU))
#define DAT_020c7c50 (*(uint8_t *)(0x20c7c50U))
#define DAT_020c7c51 (*(uint8_t *)(0x20c7c51U))
#define DAT_020c7c52 (*(uint8_t *)(0x20c7c52U))
#define DAT_020c7c53 (*(uint8_t *)(0x20c7c53U))
#define DAT_020c7c54 (*(uint8_t *)(0x20c7c54U))
#define DAT_020ca0c6 (*(uint8_t *)(0x20ca0c6U))
#define DAT_020ca0c7 (*(uint8_t *)(0x20ca0c7U))
#define DAT_020ca0c8 (*(uint8_t *)(0x20ca0c8U))
#define DAT_020ca0c9 (*(uint8_t *)(0x20ca0c9U))
#define DAT_020ca0ca (*(uint8_t *)(0x20ca0caU))
#define DAT_020ca0e7 (*(uint8_t *)(0x20ca0e7U))
#define DAT_020ca0f8 (*(uint8_t *)(0x20ca0f8U))
#define str_020ca052 (*(char (*)[1])(0x20ca052U))
#define str_020ca05b (*(char (*)[1])(0x20ca05bU))
#define str_020ca068 (*(char (*)[1])(0x20ca068U))
#define str_020ca07c (*(char (*)[1])(0x20ca07cU))
#define str_020ca08a (*(char (*)[1])(0x20ca08aU))
#define str_020ca096 (*(char (*)[1])(0x20ca096U))
#define str_020ca0a9 (*(char (*)[1])(0x20ca0a9U))
#define str_020ca0b5 (*(char (*)[1])(0x20ca0b5U))
#define str_020ca0cb (*(char (*)[1])(0x20ca0cbU))
#define str_020ca0d5 (*(char (*)[1])(0x20ca0d5U))
#define str_020ca0de (*(char (*)[1])(0x20ca0deU))
#define str_020ca0eb (*(char (*)[1])(0x20ca0ebU))
#define str_020ca0fd (*(char (*)[1])(0x20ca0fdU))
#define str_020ca107 (*(char (*)[1])(0x20ca107U))
#define str_020ca119 (*(char (*)[1])(0x20ca119U))


void recovered_206cda0(char *in_ECX_00)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *in_ECX;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;

  if (in_ECX_00 == (char *)0x0) {
    return;
  }
  iVar7 = recovered_20022a0(in_ECX_00,str_020ca052);
  pcVar10 = str_020ca068;
  if (iVar7 == 0) goto LAB_0206d497;
  cVar4 = *in_ECX_00;
  if ((byte)(cVar4 + 0x9fU) < 0x1a) {
    cVar4 = cVar4 + -0x20;
  }
  if (cVar4 == '/') {
    cVar4 = in_ECX_00[1];
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      cVar4 = cVar4 + -0x20;
    }
    if (cVar4 == 'F') {
      cVar4 = in_ECX_00[2];
      if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        cVar4 = cVar4 + -0x20;
      }
      if (cVar4 == 'R') {
        cVar4 = in_ECX_00[3];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if (cVar4 == 'E') {
          cVar4 = in_ECX_00[4];
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            cVar4 = cVar4 + -0x20;
          }
          if (cVar4 == 'E') {
            cVar4 = in_ECX_00[5];
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if (cVar4 == 'B') {
              cVar4 = in_ECX_00[6];
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                cVar4 = cVar4 + -0x20;
              }
              if (cVar4 == 'S') {
                cVar4 = in_ECX_00[7];
                if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                  cVar4 = cVar4 + -0x20;
                }
                if (cVar4 == 'D') {
                  cVar4 = in_ECX_00[8];
                  if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                    cVar4 = cVar4 + -0x20;
                  }
                  if (cVar4 == '/') goto LAB_0206d497;
                }
              }
            }
          }
        }
      }
    }
  }
  in_ECX = (byte *)(in_ECX_00 + 0x171);
  bVar2 = *in_ECX;
  uVar8 = (uint)bVar2;
  if (bVar2 != 0) {
    pcVar10 = in_ECX_00 + 0x172;
    uVar8 = (uint)CONCAT11(bVar2,bVar2);
    pbVar11 = in_ECX;
    do {
      iVar7 = -0xc;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206cf17;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca05b[iVar14 + 0xc];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206cefb;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0xc],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0xc] != '\0');
      if (str_020ca068[iVar14] == '\0') goto LAB_0206cf17;
LAB_0206cefb:
      pbVar1 = pbVar11 + 1;
      uVar8 = (uint)CONCAT11(*pbVar1,(char)uVar8);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
    pcVar10 = in_ECX_00 + 0x178;
    uVar12 = uVar8;
    do {
      uVar5 = (undefined1)uVar8;
      cVar4 = (char)uVar12;
      uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,uVar5);
      if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        cVar4 = cVar4 + -0x20;
      }
      bVar2 = pcVar10[-6];
      uVar12 = (uint)bVar2;
      if (cVar4 == 'F') {
        if (bVar2 == 0) {
          pcVar13 = &DAT_020c7c4e;
        }
        else {
          bVar3 = bVar2;
          if ((byte)(bVar2 + 0x9f) < 0x1a) {
            bVar3 = bVar2 - 0x20;
          }
          uVar8 = (uint)CONCAT11(bVar3,uVar5);
          if (bVar3 != 0x52) goto LAB_0206cf2e;
          cVar4 = pcVar10[-5];
          uVar8 = (uint)CONCAT11(cVar4,uVar5);
          if (cVar4 == '\0') {
            pcVar13 = &DAT_020c7c4f;
          }
          else {
            uVar12 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              uVar8 = (uint)CONCAT11(cVar4 + -0x20,uVar5);
            }
            if ((char)(uVar8 >> 8) != 'E') goto LAB_0206cf2e;
            cVar4 = pcVar10[-4];
            uVar5 = (undefined1)uVar8;
            uVar8 = (uint)CONCAT11(cVar4,uVar5);
            if (cVar4 == '\0') {
              pcVar13 = &DAT_020c7c50;
            }
            else {
              uVar12 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                uVar8 = (uint)CONCAT11(cVar4 + -0x20,uVar5);
              }
              if ((char)(uVar8 >> 8) != 'E') goto LAB_0206cf2e;
              cVar4 = pcVar10[-3];
              uVar5 = (undefined1)uVar8;
              uVar8 = (uint)CONCAT11(cVar4,uVar5);
              if (cVar4 == '\0') {
                pcVar13 = &DAT_020c7c51;
              }
              else {
                uVar12 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                  uVar8 = (uint)CONCAT11(cVar4 + -0x20,uVar5);
                }
                if ((char)(uVar8 >> 8) != 'B') goto LAB_0206cf2e;
                cVar4 = pcVar10[-2];
                uVar5 = (undefined1)uVar8;
                uVar8 = (uint)CONCAT11(cVar4,uVar5);
                if (cVar4 == '\0') {
                  pcVar13 = &DAT_020c7c52;
                }
                else {
                  uVar12 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                  if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                    uVar8 = (uint)CONCAT11(cVar4 + -0x20,uVar5);
                  }
                  if ((char)(uVar8 >> 8) != 'S') goto LAB_0206cf2e;
                  cVar4 = pcVar10[-1];
                  uVar5 = (undefined1)uVar8;
                  uVar8 = (uint)CONCAT11(cVar4,uVar5);
                  if (cVar4 == '\0') {
                    pcVar13 = &DAT_020c7c53;
                  }
                  else {
                    uVar12 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                      uVar8 = (uint)CONCAT11(cVar4 + -0x20,uVar5);
                    }
                    if ((char)(uVar8 >> 8) != 'D') goto LAB_0206cf2e;
                    pcVar13 = &DAT_020c7c54;
                    if (*pcVar10 != '\0') goto LAB_0206cf17;
                  }
                }
              }
            }
          }
        }
        if (*pcVar13 == '\0') goto LAB_0206cf17;
      }
LAB_0206cf2e:
      pcVar10 = pcVar10 + 1;
    } while ((char)uVar12 != '\0');
    pcVar10 = in_ECX_00 + 0x172;
    uVar6 = CONCAT11((char)uVar8,(char)uVar8);
    pbVar11 = in_ECX;
    do {
      uVar8 = (uint)uVar6;
      iVar7 = -0xd;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206d2bd;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca07c[iVar14 + 0xd];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206d0a3;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0xd],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0xd] != '\0');
      if (str_020ca08a[iVar14] == '\0') goto LAB_0206d2bd;
LAB_0206d0a3:
      pbVar1 = pbVar11 + 1;
      uVar5 = (undefined1)uVar8;
      uVar6 = CONCAT11(*pbVar1,uVar5);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
    pcVar10 = in_ECX_00 + 0x172;
    uVar6 = CONCAT11(uVar5,uVar5);
    pbVar11 = in_ECX;
    do {
      uVar8 = (uint)uVar6;
      iVar7 = -0xb;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206d2bd;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca08a[iVar14 + 0xb];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206d0ff;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0xb],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0xb] != '\0');
      if (str_020ca096[iVar14] == '\0') goto LAB_0206d2bd;
LAB_0206d0ff:
      pbVar1 = pbVar11 + 1;
      uVar5 = (undefined1)uVar8;
      uVar6 = CONCAT11(*pbVar1,uVar5);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
    pcVar10 = in_ECX_00 + 0x172;
    uVar6 = CONCAT11(uVar5,uVar5);
    pbVar11 = in_ECX;
    do {
      uVar8 = (uint)uVar6;
      iVar7 = -0x12;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206d2bd;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca096[iVar14 + 0x12];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206d15b;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0x12],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0x12] != '\0');
      if (str_020ca0a9[iVar14] == '\0') goto LAB_0206d2bd;
LAB_0206d15b:
      pbVar1 = pbVar11 + 1;
      uVar5 = (undefined1)uVar8;
      uVar6 = CONCAT11(*pbVar1,uVar5);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
    pcVar10 = in_ECX_00 + 0x172;
    uVar6 = CONCAT11(uVar5,uVar5);
    pbVar11 = in_ECX;
    do {
      uVar8 = (uint)uVar6;
      iVar7 = -0xb;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206d2bd;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca0a9[iVar14 + 0xb];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206d1b7;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0xb],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0xb] != '\0');
      if (str_020ca0b5[iVar14] == '\0') goto LAB_0206d2bd;
LAB_0206d1b7:
      pbVar1 = pbVar11 + 1;
      uVar5 = (undefined1)uVar8;
      uVar6 = CONCAT11(*pbVar1,uVar5);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
    pcVar10 = in_ECX_00 + 0x172;
    uVar8 = (uint)CONCAT11(uVar5,uVar5);
    pbVar11 = in_ECX;
    do {
      iVar7 = -0x10;
      do {
        iVar14 = iVar7;
        if (iVar14 == 0) goto LAB_0206d2bd;
        cVar4 = (char)(uVar8 >> 8);
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          uVar8 = (uint)CONCAT11(cVar4 + -0x20,(char)uVar8);
        }
        cVar4 = str_020ca0b5[iVar14 + 0x10];
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((char)(uVar8 >> 8) != cVar4) goto LAB_0206d213;
        uVar8 = (uint)CONCAT11(pcVar10[iVar14 + 0x10],(char)uVar8);
        iVar7 = iVar14 + 1;
      } while (pcVar10[iVar14 + 0x10] != '\0');
      if ((&DAT_020ca0c6)[iVar14] == '\0') goto LAB_0206d2bd;
LAB_0206d213:
      pbVar1 = pbVar11 + 1;
      uVar8 = (uint)CONCAT11(*pbVar1,(char)uVar8);
      pbVar11 = pbVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
  }
  cVar4 = in_ECX_00[0x111];
  if (cVar4 == '\0') {
    pcVar10 = &DAT_020ca0c6;
LAB_0206d2d6:
    if (*pcVar10 == '\0') {
      pcVar10 = str_020ca0cb;
      goto LAB_0206d497;
    }
  }
  else {
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      cVar4 = cVar4 + -0x20;
    }
    if (cVar4 == 'N') {
      cVar4 = in_ECX_00[0x112];
      if (cVar4 == '\0') {
        pcVar10 = &DAT_020ca0c7;
      }
      else {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if (cVar4 != 'O') goto LAB_0206d2df;
        cVar4 = in_ECX_00[0x113];
        if (cVar4 == '\0') {
          pcVar10 = &DAT_020ca0c8;
        }
        else {
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            cVar4 = cVar4 + -0x20;
          }
          if (cVar4 != 'N') goto LAB_0206d2df;
          cVar4 = in_ECX_00[0x114];
          if (cVar4 == '\0') {
            pcVar10 = &DAT_020ca0c9;
          }
          else {
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if ((cVar4 != 'E') || (in_ECX_00[0x115] != '\0')) goto LAB_0206d2df;
            pcVar10 = &DAT_020ca0ca;
          }
        }
      }
      goto LAB_0206d2d6;
    }
  }
LAB_0206d2df:
  if ((char)uVar8 != '\0') {
    pcVar10 = in_ECX_00 + 0x179;
    do {
      cVar4 = (char)uVar8;
      if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        cVar4 = cVar4 + -0x20;
      }
      bVar2 = pcVar10[-7];
      uVar8 = (uint)bVar2;
      if (cVar4 != 'F') goto LAB_0206d2fd;
      if (bVar2 == 0) {
        pcVar13 = str_020ca0d5 + 1;
        goto LAB_0206d2f4;
      }
      if ((byte)(bVar2 + 0x9f) < 0x1a) {
        if (bVar2 == 0x61) goto LAB_0206d33b;
      }
      else if (bVar2 == 0x41) {
LAB_0206d33b:
        cVar4 = pcVar10[-6];
        if (cVar4 == '\0') {
          pcVar13 = str_020ca0d5 + 2;
        }
        else {
          uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            cVar4 = cVar4 + -0x20;
          }
          if (cVar4 != 'L') goto LAB_0206d2fd;
          cVar4 = pcVar10[-5];
          if (cVar4 == '\0') {
            pcVar13 = str_020ca0d5 + 3;
          }
          else {
            uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
            if ((byte)(cVar4 + 0x9fU) < 0x1a) {
              cVar4 = cVar4 + -0x20;
            }
            if (cVar4 != 'L') goto LAB_0206d2fd;
            cVar4 = pcVar10[-4];
            if (cVar4 == '\0') {
              pcVar13 = str_020ca0d5 + 4;
            }
            else {
              uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                cVar4 = cVar4 + -0x20;
              }
              if (cVar4 != 'B') goto LAB_0206d2fd;
              cVar4 = pcVar10[-3];
              if (cVar4 == '\0') {
                pcVar13 = str_020ca0d5 + 5;
              }
              else {
                uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                  cVar4 = cVar4 + -0x20;
                }
                if (cVar4 != 'A') goto LAB_0206d2fd;
                cVar4 = pcVar10[-2];
                if (cVar4 == '\0') {
                  pcVar13 = str_020ca0d5 + 6;
                }
                else {
                  uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                  if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                    cVar4 = cVar4 + -0x20;
                  }
                  if (cVar4 != 'C') goto LAB_0206d2fd;
                  cVar4 = pcVar10[-1];
                  if (cVar4 == '\0') {
                    pcVar13 = str_020ca0d5 + 7;
                  }
                  else {
                    uVar8 = (uint)CONCAT11(cVar4 + 0x9fU,bVar2);
                    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                      cVar4 = cVar4 + -0x20;
                    }
                    if (cVar4 != 'K') goto LAB_0206d2fd;
                    pcVar13 = str_020ca0d5 + 8;
                    if (*pcVar10 != '\0') goto LAB_0206d48b;
                  }
                }
              }
            }
          }
        }
LAB_0206d2f4:
        if (*pcVar13 == '\0') goto LAB_0206d48b;
      }
LAB_0206d2fd:
      pcVar10 = pcVar10 + 1;
    } while ((char)uVar8 != '\0');
  }
  uVar9 = recovered_205a7b0(uVar8,(char *)in_ECX,str_020ca0de);
  pcVar10 = str_020ca107;
  if ((char)uVar9 == '\0') {
    uVar9 = recovered_205a7b0(uVar9,(char *)in_ECX,&DAT_020ca0e7);
    if ((((char)uVar9 == '\0') &&
        (uVar9 = recovered_205a7b0(uVar9,(char *)in_ECX,str_020ca0eb), (char)uVar9 == '\0')) &&
       (uVar9 = recovered_205a7b0(uVar9,(char *)in_ECX,&DAT_020ca0f8), (char)uVar9 == '\0')) {
      uVar9 = recovered_205a7b0(uVar9,in_ECX_00,str_020ca0fd);
      pcVar10 = str_020ca107;
      if ((char)uVar9 == '\0') {
        uVar9 = recovered_205a7b0(uVar9,in_ECX_00 + 0x111,str_020ca0de);
        pcVar10 = str_020ca107;
        if ((char)uVar9 == '\0') {
          pcVar10 = str_020ca119;
        }
      }
    }
    else {
LAB_0206d48b:
      pcVar10 = str_020ca107;
    }
  }
LAB_0206d497:
  pf_varargs_20044f0__4_(in_ECX_00 + 0xf1,0x20,&DAT_020c5119,(uint)pcVar10);
  return;
LAB_0206cf17:
  pcVar10 = str_020ca068;
  goto LAB_0206d497;
LAB_0206d2bd:
  pcVar10 = str_020ca0cb;
  goto LAB_0206d497;
}
#undef DAT_020c5119
#undef DAT_020c7c4e
#undef DAT_020c7c4f
#undef DAT_020c7c50
#undef DAT_020c7c51
#undef DAT_020c7c52
#undef DAT_020c7c53
#undef DAT_020c7c54
#undef DAT_020ca0c6
#undef DAT_020ca0c7
#undef DAT_020ca0c8
#undef DAT_020ca0c9
#undef DAT_020ca0ca
#undef DAT_020ca0e7
#undef DAT_020ca0f8
#undef str_020ca052
#undef str_020ca05b
#undef str_020ca068
#undef str_020ca07c
#undef str_020ca08a
#undef str_020ca096
#undef str_020ca0a9
#undef str_020ca0b5
#undef str_020ca0cb
#undef str_020ca0d5
#undef str_020ca0de
#undef str_020ca0eb
#undef str_020ca0fd
#undef str_020ca107
#undef str_020ca119
