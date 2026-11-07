/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define DAT_020cf418 (*(uint32_t volatile *)(0x215a828U))
#define DAT_020cf41c (*(uint32_t volatile *)(0x215a82cU))
#define DAT_020cf420 (*(uint32_t volatile *)(0x215a830U))
#define DAT_020cf424 (*(uint8_t volatile *)(0x215a834U))
uchar recovered_206f090(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;

  lVar1 = DAT_020cf408;
  if (lVar1 == 0 || param_1 == (uint *)0x0) {
    return '\0';
  }
  if (param_3 == 0) {
    uVar3 = DAT_020cf410;
    bVar7 = DAT_020cf424;
    uVar5 = *param_1;
    do {
      if ((uVar5 < 2) || (uVar4 = (ulong)uVar5, uVar3 <= uVar4)) break;
      uVar8 = *(uint *)(lVar1 + uVar4 * 4);
      if (uVar8 != 0) {
        *(undefined4 *)(lVar1 + uVar4 * 4) = 0;
        uVar10 = DAT_020cf410;
        if (uVar4 < uVar10) {
          if ((bVar7 & 1) == 0) {
            DAT_020cf41c = uVar5;
            DAT_020cf420 = uVar5;
            DAT_020cf424 = 1;
            bVar7 = 1;
          }
          else {
            uVar11 = DAT_020cf41c;
            if (uVar5 < uVar11) {
              DAT_020cf41c = uVar5;
            }
            uVar11 = DAT_020cf420;
            if (uVar11 < uVar5) {
              DAT_020cf420 = uVar5;
            }
          }
        }
      }
      uVar11 = DAT_020cf418;
      if ((uVar11 < 2) || (uVar5 < uVar11)) {
        DAT_020cf418 = uVar5;
      }
      uVar5 = uVar8;
    } while (1 < uVar8 + 1);
    *param_1 = 0;
    return '\x01';
  }
  if ((param_2 == 0) || (uVar5 = *param_1, uVar5 == 0)) {
    *param_1 = 0;
    uVar5 = 0;
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    if (param_3 <= param_2) {
      if (param_3 != 1) {
        uVar3 = DAT_020cf410;
        iVar9 = param_3 - 1;
        do {
          if (uVar5 < 2) {
            return '\0';
          }
          if (uVar3 <= uVar5) {
            return '\0';
          }
          uVar5 = *(uint *)(lVar1 + (ulong)uVar5 * 4);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (uVar5 < 2) {
        return '\0';
      }
      uVar3 = DAT_020cf410;
      if (uVar3 <= uVar5) {
        return '\0';
      }
      if (param_2 <= param_3) {
        return '\x01';
      }
      uVar8 = *(uint *)(lVar1 + (ulong)uVar5 * 4);
      recovered_206fbc0(uVar5,-1);
      if (uVar8 - 1 < 0xfffffffe) {
        recovered_206fb00(uVar8);
        return '\x01';
      }
      return '\x01';
    }
    uVar8 = uVar5;
    if (param_2 == 1) {
      param_2 = 1;
    }
    else {
      uVar11 = 1;
      uVar3 = DAT_020cf410;
      do {
        if (uVar8 < 2) {
          return '\0';
        }
        if (uVar3 <= uVar8) {
          return '\0';
        }
        uVar11 = uVar11 + 1;
        uVar8 = *(uint *)(lVar1 + (ulong)uVar8 * 4);
      } while (param_2 != uVar11);
    }
  }
  bVar7 = DAT_020cf424;
  uVar11 = 0;
  if (param_2 < param_3) {
    uVar3 = DAT_020cf410;
    uVar10 = 0;
    uVar4 = 0;
    do {
      if (uVar3 < 3) goto LAB_0204c626;
      uVar5 = DAT_020cf418;
      uVar11 = 2;
      if (uVar5 < uVar3) {
        uVar11 = uVar5;
      }
      uVar12 = (ulong)uVar11;
      if ((ulong)uVar5 < 2) {
        uVar12 = 2;
      }
      for (uVar6 = uVar12; uVar6 < uVar3; uVar6 = (ulong)((int)uVar6 + 1)) {
        if (*(int *)(lVar1 + uVar6 * 4) == 0) {
          if ((int)uVar6 == 0) goto LAB_0204c626;
          goto LAB_0204c4fb;
        }
      }
      if ((uint)uVar12 < 3) goto LAB_0204c626;
      uVar6 = 2;
      while (*(int *)(lVar1 + uVar6 * 4) != 0) {
        uVar6 = uVar6 + 1;
        if (uVar12 == uVar6) goto LAB_0204c626;
      }
LAB_0204c4fb:
      uVar5 = (uint)uVar6;
      if (((uVar5 < 2) || (uVar12 = uVar6 & 0xffffffff, uVar3 <= uVar12)) ||
         (*(int *)(lVar1 + uVar12 * 4) == -1)) {
        uVar13 = uVar3;
      }
      else {
        *(undefined4 *)(lVar1 + uVar12 * 4) = 0xffffffff;
        uVar13 = DAT_020cf410;
        if (uVar12 < uVar13) {
          if ((bVar7 & 1) == 0) {
            DAT_020cf41c = uVar5;
            DAT_020cf420 = uVar5;
            DAT_020cf424 = 1;
            bVar7 = 1;
          }
          else {
            uVar11 = DAT_020cf41c;
            if (uVar5 < uVar11) {
              DAT_020cf41c = uVar5;
            }
            uVar11 = DAT_020cf420;
            if (uVar11 < uVar5) {
              DAT_020cf420 = uVar5;
            }
          }
        }
      }
      uVar11 = uVar5 + 1;
      if (uVar3 <= uVar11) {
        uVar11 = 2;
      }
      DAT_020cf418 = uVar11;
      uVar11 = (uint)uVar4;
      if (uVar11 == 0) {
        uVar10 = uVar6 & 0xffffffff;
      }
      else if (uVar11 != 1) {
        uVar4 = uVar4 & 0xffffffff;
        if ((uVar4 < uVar3) && (*(uint *)(lVar1 + uVar4 * 4) != uVar5)) {
          *(uint *)(lVar1 + uVar4 * 4) = uVar5;
          uVar13 = DAT_020cf410;
          if (uVar4 < uVar13) {
            if ((bVar7 & 1) == 0) {
              DAT_020cf41c = uVar11;
              DAT_020cf420 = uVar11;
              DAT_020cf424 = 1;
              bVar7 = 1;
            }
            else {
              uVar5 = DAT_020cf41c;
              if (uVar11 < uVar5) {
                DAT_020cf41c = uVar11;
              }
              uVar5 = DAT_020cf420;
              if (uVar5 < uVar11) {
                DAT_020cf420 = uVar11;
              }
            }
          }
        }
      }
      uVar3 = uVar13;
      uVar11 = (uint)uVar10;
      param_2 = param_2 + 1;
      uVar4 = uVar6;
    } while (param_2 != param_3);
    uVar5 = *param_1;
  }
  if (uVar5 == 0) {
    *param_1 = uVar11;
  }
  else if ((uVar11 != 0) && (1 < uVar8)) {
    uVar4 = (ulong)uVar8;
    uVar3 = DAT_020cf410;
    if ((uVar4 < uVar3) && (*(uint *)(lVar1 + uVar4 * 4) != uVar11)) {
      *(uint *)(lVar1 + uVar4 * 4) = uVar11;
      uVar3 = DAT_020cf410;
      if (uVar4 < uVar3) {
        if ((bVar7 & 1) == 0) {
          DAT_020cf41c = uVar8;
          DAT_020cf420 = uVar8;
          DAT_020cf424 = 1;
        }
        else {
          uVar5 = DAT_020cf41c;
          if (uVar8 < uVar5) {
            DAT_020cf41c = uVar8;
          }
          uVar5 = DAT_020cf420;
          if (uVar5 < uVar8) {
            DAT_020cf420 = uVar8;
          }
        }
      }
    }
  }
  return *param_1 != 0;
  while( true ) {
    uVar11 = *(uint *)(lVar1 + uVar10 * 4);
    if (uVar11 != 0) {
      *(undefined4 *)(lVar1 + uVar10 * 4) = 0;
      uVar4 = DAT_020cf410;
      if (uVar10 < uVar4) {
        if ((bVar7 & 1) == 0) {
          DAT_020cf41c = uVar5;
          DAT_020cf420 = uVar5;
          DAT_020cf424 = 1;
          bVar7 = 1;
        }
        else {
          uVar2 = DAT_020cf41c;
          if (uVar5 < uVar2) {
            DAT_020cf41c = uVar5;
          }
          uVar2 = DAT_020cf420;
          if (uVar2 < uVar5) {
            DAT_020cf420 = uVar5;
          }
        }
      }
    }
    uVar2 = DAT_020cf418;
    if ((uVar2 < 2) || (uVar5 < uVar2)) {
      DAT_020cf418 = uVar5;
    }
    uVar10 = (ulong)uVar11;
    if (uVar11 + 1 < 2) break;
LAB_0204c626:
    uVar5 = (uint)uVar10;
    if ((uVar5 < 2) || (uVar3 <= uVar10)) break;
  }
  if (((1 < uVar8) && (uVar4 = (ulong)uVar8, uVar4 < uVar3)) && (*(int *)(lVar1 + uVar4 * 4) != -1))
  {
    *(undefined4 *)(lVar1 + uVar4 * 4) = 0xffffffff;
    uVar3 = DAT_020cf410;
    if (uVar4 < uVar3) {
      if ((bVar7 & 1) == 0) {
        DAT_020cf41c = uVar8;
        DAT_020cf420 = uVar8;
        DAT_020cf424 = 1;
        return '\0';
      }
      uVar5 = DAT_020cf41c;
      if (uVar8 < uVar5) {
        DAT_020cf41c = uVar8;
      }
      uVar5 = DAT_020cf420;
      if (uVar5 < uVar8) {
        DAT_020cf420 = uVar8;
        return '\0';
      }
    }
  }
  return '\0';
}
