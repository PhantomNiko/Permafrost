/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5431 (*(uint8_t *)(0x20c5431U))
#define DAT_020c7d16 (*(uint8_t *)(0x20c7d16U))
#define DAT_020c7d17 (*(uint8_t *)(0x20c7d17U))
#define DAT_020c7d18 (*(uint8_t *)(0x20c7d18U))
#define DAT_020c7d19 (*(uint8_t *)(0x20c7d19U))
#define str_020c5422 (*(char (*)[1])(0x20c5422U))
#define str_020c7c67 (*(char (*)[1])(0x20c7c67U))
#define str_020c7c73 (*(char (*)[1])(0x20c7c73U))
#define str_020c7c7e (*(char (*)[1])(0x20c7c7eU))
#define str_020c7cfa (*(char (*)[1])(0x20c7cfaU))
#define str_020c7d0f (*(char (*)[1])(0x20c7d0fU))
#define str_020c7d1a (*(char (*)[1])(0x20c7d1aU))


void recovered_2062e10(int in_ECX,byte *in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte bVar7;
  undefined2 uVar5;
  uint uVar6;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  bVar8 = *in_EDX;
  if (bVar8 == 0) {
    return;
  }
  if (param_3 == 0) {
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    recovered_20633c0((char *)(in_ECX + 0x1c5),(char *)in_EDX);
    bVar8 = *in_EDX;
    if (bVar8 == 0) {
      return;
    }
  }
  uVar4 = CONCAT11(bVar8,bVar8);
  pbVar12 = in_EDX;
  do {
    uVar6 = (uint)uVar4;
    iVar2 = -0x14;
    do {
      iVar13 = iVar2;
      if (iVar13 == 0) goto LAB_02062ef5;
      cVar9 = (char)(uVar6 >> 8);
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        uVar6 = (uint)CONCAT11(cVar9 + -0x20,(char)uVar6);
      }
      cVar9 = str_020c7cfa[iVar13 + 0x14];
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        cVar9 = cVar9 + -0x20;
      }
      if ((char)(uVar6 >> 8) != cVar9) goto LAB_02062e9f;
      uVar6 = (uint)CONCAT11(pbVar12[iVar13 + 0x15],(char)uVar6);
      iVar2 = iVar13 + 1;
    } while (pbVar12[iVar13 + 0x15] != 0);
    if (str_020c7d0f[iVar13] == '\0') goto LAB_02062ef5;
LAB_02062e9f:
    pbVar1 = pbVar12 + 1;
    uVar3 = (undefined1)uVar6;
    uVar4 = CONCAT11(*pbVar1,uVar3);
    pbVar12 = pbVar12 + 1;
  } while (*pbVar1 != 0);
  uVar6 = (uint)CONCAT11(uVar3,uVar3);
  pbVar12 = in_EDX;
  do {
    iVar2 = -0xe;
    do {
      iVar13 = iVar2;
      if (iVar13 == 0) goto LAB_02062ef5;
      cVar9 = (char)(uVar6 >> 8);
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        uVar6 = (uint)CONCAT11(cVar9 + -0x20,(char)uVar6);
      }
      cVar9 = str_020c5422[iVar13 + 0xe];
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        cVar9 = cVar9 + -0x20;
      }
      if ((char)(uVar6 >> 8) != cVar9) goto LAB_02062eeb;
      uVar6 = (uint)CONCAT11(pbVar12[iVar13 + 0xf],(char)uVar6);
      iVar2 = iVar13 + 1;
    } while (pbVar12[iVar13 + 0xf] != 0);
    if ((&DAT_020c5431)[iVar13] == '\0') goto LAB_02062ef5;
LAB_02062eeb:
    pbVar1 = pbVar12 + 1;
    uVar6 = (uint)CONCAT11(*pbVar1,(char)uVar6);
    pbVar12 = pbVar12 + 1;
  } while (*pbVar1 != 0);
  goto LAB_02062f08;
LAB_02063263:
  pf_varargs_20044f0__4_((char *)(in_ECX + 0x185),0x40,&DAT_020c5119,(uint)in_EDX);
  uVar6 = (uint)*in_EDX;
  goto LAB_02062f08;
LAB_02062ef5:
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  bVar8 = *in_EDX;
  uVar6 = (uint)bVar8;
  if (*(char *)(in_ECX + 0x185) == '\0') {
    if (bVar8 == 0) {
      return;
    }
    pbVar12 = in_EDX + 5;
    bVar7 = bVar8;
    do {
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        bVar7 = bVar7 - 0x20;
      }
      bVar14 = bVar7 != 0x45;
      bVar7 = pbVar12[-4];
      if (bVar14) goto LAB_02062ff6;
      if (bVar7 == 0) {
        pcVar11 = str_020c7d0f + 1;
        goto LAB_02062fed;
      }
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        if (bVar7 == 0x76) goto LAB_02063035;
      }
      else if (bVar7 == 0x56) {
LAB_02063035:
        bVar10 = pbVar12[-3];
        if (bVar10 == 0) {
          pcVar11 = str_020c7d0f + 2;
        }
        else {
          if ((byte)(bVar10 + 0x9f) < 0x1a) {
            bVar10 = bVar10 - 0x20;
          }
          if (bVar10 != 0x45) goto LAB_02062ff6;
          bVar10 = pbVar12[-2];
          if (bVar10 == 0) {
            pcVar11 = str_020c7d0f + 3;
          }
          else {
            if ((byte)(bVar10 + 0x9f) < 0x1a) {
              bVar10 = bVar10 - 0x20;
            }
            if (bVar10 != 0x4e) goto LAB_02062ff6;
            bVar10 = pbVar12[-1];
            if (bVar10 == 0) {
              pcVar11 = str_020c7d0f + 4;
            }
            else {
              if ((byte)(bVar10 + 0x9f) < 0x1a) {
                bVar10 = bVar10 - 0x20;
              }
              if (bVar10 != 0x54) goto LAB_02062ff6;
              pcVar11 = str_020c7d0f + 5;
              if (*pbVar12 != 0) goto LAB_02063263;
            }
          }
        }
LAB_02062fed:
        if (*pcVar11 == '\0') goto LAB_02063263;
      }
LAB_02062ff6:
      pbVar12 = pbVar12 + 1;
    } while (bVar7 != 0);
    pbVar12 = in_EDX + 4;
    bVar7 = bVar8;
    do {
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        bVar7 = bVar7 - 0x20;
      }
      bVar14 = bVar7 != 0x49;
      bVar7 = pbVar12[-3];
      if (bVar14) goto LAB_020630cd;
      if (bVar7 == 0) {
        pcVar11 = &DAT_020c7d16;
        goto LAB_020630c4;
      }
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        if (bVar7 == 0x6e) goto LAB_0206310c;
      }
      else if (bVar7 == 0x4e) {
LAB_0206310c:
        bVar10 = pbVar12[-2];
        if (bVar10 == 0) {
          pcVar11 = &DAT_020c7d17;
        }
        else {
          if ((byte)(bVar10 + 0x9f) < 0x1a) {
            bVar10 = bVar10 - 0x20;
          }
          if (bVar10 != 0x49) goto LAB_020630cd;
          bVar10 = pbVar12[-1];
          if (bVar10 == 0) {
            pcVar11 = &DAT_020c7d18;
          }
          else {
            if ((byte)(bVar10 + 0x9f) < 0x1a) {
              bVar10 = bVar10 - 0x20;
            }
            if (bVar10 != 0x54) goto LAB_020630cd;
            pcVar11 = &DAT_020c7d19;
            if (*pbVar12 != 0) goto LAB_02063263;
          }
        }
LAB_020630c4:
        if (*pcVar11 == '\0') goto LAB_02063263;
      }
LAB_020630cd:
      pbVar12 = pbVar12 + 1;
    } while (bVar7 != 0);
    pbVar12 = in_EDX + 6;
    uVar6 = (uint)CONCAT11(bVar8,bVar8);
    do {
      uVar5 = (undefined2)uVar6;
      cVar9 = (char)(uVar6 >> 8);
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        uVar5 = CONCAT11(cVar9 + -0x20,(char)uVar6);
      }
      bVar8 = pbVar12[-5];
      uVar6 = (uint)CONCAT11(bVar8,(char)uVar5);
      if ((char)((ushort)uVar5 >> 8) != 'M') goto LAB_0206317c;
      if (bVar8 == 0) {
        pcVar11 = str_020c7d1a + 1;
        goto LAB_02063173;
      }
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        if (bVar8 == 0x6f) goto LAB_020631bb;
      }
      else if (bVar8 == 0x4f) {
LAB_020631bb:
        bVar7 = pbVar12[-4];
        if (bVar7 == 0) {
          pcVar11 = str_020c7d1a + 2;
        }
        else {
          if ((byte)(bVar7 + 0x9f) < 0x1a) {
            bVar7 = bVar7 - 0x20;
          }
          if (bVar7 != 0x44) goto LAB_0206317c;
          bVar7 = pbVar12[-3];
          if (bVar7 == 0) {
            pcVar11 = str_020c7d1a + 3;
          }
          else {
            if ((byte)(bVar7 + 0x9f) < 0x1a) {
              bVar7 = bVar7 - 0x20;
            }
            if (bVar7 != 0x55) goto LAB_0206317c;
            bVar7 = pbVar12[-2];
            if (bVar7 == 0) {
              pcVar11 = str_020c7d1a + 4;
            }
            else {
              if ((byte)(bVar7 + 0x9f) < 0x1a) {
                bVar7 = bVar7 - 0x20;
              }
              if (bVar7 != 0x4c) goto LAB_0206317c;
              bVar7 = pbVar12[-1];
              if (bVar7 == 0) {
                pcVar11 = str_020c7d1a + 5;
              }
              else {
                if ((byte)(bVar7 + 0x9f) < 0x1a) {
                  bVar7 = bVar7 - 0x20;
                }
                if (bVar7 != 0x45) goto LAB_0206317c;
                pcVar11 = str_020c7d1a + 6;
                if (*pbVar12 != 0) goto LAB_02063263;
              }
            }
          }
        }
LAB_02063173:
        if (*pcVar11 == '\0') goto LAB_02063263;
      }
LAB_0206317c:
      pbVar12 = pbVar12 + 1;
    } while (bVar8 != 0);
  }
LAB_02062f08:
  cVar9 = (char)uVar6;
  if (cVar9 != '\0') {
    uVar4 = CONCAT11(cVar9,cVar9);
    pbVar12 = in_EDX;
    do {
      uVar6 = (uint)uVar4;
      iVar2 = -10;
      do {
        iVar13 = iVar2;
        if (iVar13 == 0) goto LAB_020633b1;
        cVar9 = (char)(uVar6 >> 8);
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar6 = (uint)CONCAT11(cVar9 + -0x20,(char)uVar6);
        }
        cVar9 = str_020c7c73[iVar13 + 10];
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          cVar9 = cVar9 + -0x20;
        }
        if ((char)(uVar6 >> 8) != cVar9) goto LAB_02062f63;
        uVar6 = (uint)CONCAT11(pbVar12[iVar13 + 0xb],(char)uVar6);
        iVar2 = iVar13 + 1;
      } while (pbVar12[iVar13 + 0xb] != 0);
      if (str_020c7c7e[iVar13] == '\0') goto LAB_020633b1;
LAB_02062f63:
      pbVar1 = pbVar12 + 1;
      uVar3 = (undefined1)uVar6;
      uVar4 = CONCAT11(*pbVar1,uVar3);
      pbVar12 = pbVar12 + 1;
    } while (*pbVar1 != 0);
    uVar6 = (uint)CONCAT11(uVar3,uVar3);
    pbVar12 = in_EDX;
    do {
      iVar2 = -0xb;
      do {
        iVar13 = iVar2;
        if (iVar13 == 0) goto LAB_020633b1;
        cVar9 = (char)(uVar6 >> 8);
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar6 = (uint)CONCAT11(cVar9 + -0x20,(char)uVar6);
        }
        cVar9 = str_020c7c67[iVar13 + 0xb];
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          cVar9 = cVar9 + -0x20;
        }
        if ((char)(uVar6 >> 8) != cVar9) goto LAB_02062fc3;
        uVar6 = (uint)CONCAT11(pbVar12[iVar13 + 0xc],(char)uVar6);
        iVar2 = iVar13 + 1;
      } while (pbVar12[iVar13 + 0xc] != 0);
      if (str_020c7c73[iVar13] == '\0') goto LAB_020633b1;
LAB_02062fc3:
      pbVar1 = pbVar12 + 1;
      uVar6 = (uint)CONCAT11(*pbVar1,(char)uVar6);
      pbVar12 = pbVar12 + 1;
    } while (*pbVar1 != 0);
    pbVar12 = in_EDX + 7;
    do {
      cVar9 = (char)uVar6;
      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
        cVar9 = cVar9 + -0x20;
      }
      bVar8 = pbVar12[-6];
      uVar6 = (uint)bVar8;
      if (cVar9 == 'S') {
        if (bVar8 == 0) {
          pcVar11 = str_020c7c7e + 1;
        }
        else {
          bVar7 = bVar8;
          if ((byte)(bVar8 + 0x9f) < 0x1a) {
            bVar7 = bVar8 - 0x20;
          }
          uVar6 = (uint)CONCAT11(bVar7,bVar8);
          if (bVar7 != 0x59) goto LAB_02063292;
          bVar7 = pbVar12[-5];
          uVar6 = (uint)CONCAT11(bVar7,bVar8);
          if (bVar7 == 0) {
            pcVar11 = str_020c7c7e + 2;
          }
          else {
            if ((byte)(bVar7 + 0x9f) < 0x1a) {
              uVar6 = (uint)CONCAT11(bVar7 - 0x20,bVar8);
            }
            if ((char)(uVar6 >> 8) != 'S') goto LAB_02063292;
            bVar8 = pbVar12[-4];
            uVar3 = (undefined1)uVar6;
            uVar6 = (uint)CONCAT11(bVar8,uVar3);
            if (bVar8 == 0) {
              pcVar11 = str_020c7c7e + 3;
            }
            else {
              if ((byte)(bVar8 + 0x9f) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar8 - 0x20,uVar3);
              }
              if ((char)(uVar6 >> 8) != 'I') goto LAB_02063292;
              bVar8 = pbVar12[-3];
              uVar3 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar8,uVar3);
              if (bVar8 == 0) {
                pcVar11 = str_020c7c7e + 4;
              }
              else {
                if ((byte)(bVar8 + 0x9f) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar8 - 0x20,uVar3);
                }
                if ((char)(uVar6 >> 8) != 'N') goto LAB_02063292;
                bVar8 = pbVar12[-2];
                if (bVar8 == 0) {
                  pcVar11 = str_020c7c7e + 5;
                }
                else {
                  if ((byte)(bVar8 + 0x9f) < 0x1a) {
                    bVar8 = bVar8 - 0x20;
                  }
                  if (bVar8 != 0x49) goto LAB_02063292;
                  bVar8 = pbVar12[-1];
                  if (bVar8 == 0) {
                    pcVar11 = str_020c7c7e + 6;
                  }
                  else {
                    if ((byte)(bVar8 + 0x9f) < 0x1a) {
                      bVar8 = bVar8 - 0x20;
                    }
                    if (bVar8 != 0x54) goto LAB_02063292;
                    pcVar11 = str_020c7c7e + 7;
                    if (*pbVar12 != 0) {
LAB_020633b1:
                      *(undefined1 *)(in_ECX + 0x24) = 1;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        if (*pcVar11 == '\0') goto LAB_020633b1;
      }
LAB_02063292:
      pbVar12 = pbVar12 + 1;
    } while ((char)uVar6 != '\0');
  }
  return;
}
#undef DAT_020c5119
#undef DAT_020c5431
#undef DAT_020c7d16
#undef DAT_020c7d17
#undef DAT_020c7d18
#undef DAT_020c7d19
#undef str_020c5422
#undef str_020c7c67
#undef str_020c7c73
#undef str_020c7c7e
#undef str_020c7cfa
#undef str_020c7d0f
#undef str_020c7d1a
