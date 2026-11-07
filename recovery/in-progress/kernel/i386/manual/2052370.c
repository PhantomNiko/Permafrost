/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define DAT_020b9d14 (*(uint32_t volatile *)(0x2130780U))
#define DAT_020b9d18 (*(uint32_t volatile *)(0x2130784U))
#define DAT_020b9d1c (*(uint32_t volatile *)(0x2130788U))
#define DAT_020b9d20 (*(uint8_t volatile *)(0x213078cU))
#define local_11 (*(byte *)(frame + 47))
#define local_18 (*(uint *)(frame + 40))
#define local_20 (*(uint *)(frame + 32))
#define local_24 (*(uint *)(frame + 28))
bool recovered_2052370(uint *incoming_ecx,uint incoming_edx,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  iVar1 = DAT_020b9d0c;
  if (iVar1 != 0 && incoming_ecx != (uint *)0x0) {
    if (param_3 == 0) {
      bVar5 = DAT_020b9d20;
      uVar4 = DAT_020b9d10;
      uVar7 = *incoming_ecx;
      do {
        if ((uVar7 < 2) || (uVar4 <= uVar7)) break;
        uVar9 = *(uint *)(iVar1 + uVar7 * 4);
        if (uVar9 != 0) {
          *(undefined4 *)(iVar1 + uVar7 * 4) = 0;
          uVar4 = DAT_020b9d10;
          if (uVar7 < uVar4) {
            if ((bVar5 & 1) == 0) {
              DAT_020b9d18 = uVar7;
              DAT_020b9d1c = uVar7;
              DAT_020b9d20 = 1;
              bVar5 = 1;
            }
            else {
              uVar10 = DAT_020b9d18;
              if (uVar7 < uVar10) {
                DAT_020b9d18 = uVar7;
              }
              uVar10 = DAT_020b9d1c;
              if (uVar10 < uVar7) {
                DAT_020b9d1c = uVar7;
              }
            }
          }
        }
        uVar10 = DAT_020b9d14;
        if ((uVar10 < 2) || (uVar7 < uVar10)) {
          DAT_020b9d14 = uVar7;
        }
        uVar7 = uVar9;
      } while (1 < uVar9 + 1);
      *incoming_ecx = 0;
      return true;
    }
    if ((incoming_edx == 0) || (local_20 = *incoming_ecx, local_20 == 0)) {
      *incoming_ecx = 0;
      local_20 = 0;
      local_24 = 0;
    }
    else {
      if (param_3 <= incoming_edx) {
        uVar4 = DAT_020b9d10;
        if (param_3 != 1) {
          iVar6 = param_3 - 1;
          do {
            if (local_20 < 2) {
              return false;
            }
            if (uVar4 <= local_20) {
              return false;
            }
            local_20 = *(uint *)(iVar1 + local_20 * 4);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (uVar4 <= local_20 || local_20 < 2) {
          return false;
        }
        if (incoming_edx <= param_3) {
          return true;
        }
        uVar4 = *(uint *)(iVar1 + local_20 * 4);
        if (uVar4 == 0xffffffff) {
          return true;
        }
        *(undefined4 *)(iVar1 + local_20 * 4) = 0xffffffff;
        uVar7 = DAT_020b9d10;
        if (local_20 < uVar7) {
          cVar2 = DAT_020b9d20;
          if (cVar2 == '\0') {
            DAT_020b9d18 = local_20;
            DAT_020b9d1c = local_20;
            DAT_020b9d20 = 1;
          }
          else {
            uVar7 = DAT_020b9d18;
            if (local_20 < uVar7) {
              DAT_020b9d18 = local_20;
            }
            uVar7 = DAT_020b9d1c;
            if (uVar7 < local_20) {
              DAT_020b9d1c = local_20;
            }
          }
        }
        if (uVar4 - 1 < 0xfffffffe) {
          recovered_2052d80(uVar4,uVar4);
          return true;
        }
        return true;
      }
      if (incoming_edx != 1) {
        uVar4 = DAT_020b9d10;
        iVar6 = incoming_edx - 1;
        do {
          if (local_20 < 2) {
            return false;
          }
          if (uVar4 <= local_20) {
            return false;
          }
          local_20 = *(uint *)(iVar1 + local_20 * 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_24 = incoming_edx;
    }
    local_11 = DAT_020b9d20;
    uVar4 = DAT_020b9d10;
    uVar9 = 0;
    uVar7 = 0;
    uVar10 = uVar4;
    while (2 < uVar10) {
      uVar8 = DAT_020b9d14;
      uVar3 = uVar8;
      if (uVar10 <= uVar8) {
        uVar3 = 2;
      }
      if (uVar8 < 2) {
        uVar3 = 2;
      }
      uVar8 = uVar3;
      if (uVar3 < uVar10) {
        do {
          if (*(int *)(iVar1 + uVar8 * 4) == 0) {
            if (uVar8 != 0) goto LAB_0203f038;
            goto LAB_0203f1c0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar10 != uVar8);
        if (uVar3 < 3) break;
      }
      uVar8 = 2;
      while (*(int *)(iVar1 + uVar8 * 4) != 0) {
        uVar8 = uVar8 + 1;
        if (uVar3 == uVar8) goto LAB_0203f1c0;
      }
LAB_0203f038:
      if ((uVar8 < 2) || (uVar10 <= uVar8)) {
        local_18 = uVar10;
      }
      else {
        *(undefined4 *)(iVar1 + uVar8 * 4) = 0xffffffff;
        uVar4 = DAT_020b9d10;
        if (uVar8 < uVar4) {
          if ((local_11 & 1) == 0) {
            DAT_020b9d18 = uVar8;
            DAT_020b9d1c = uVar8;
            DAT_020b9d20 = 1;
            local_11 = 1;
          }
          else {
            uVar3 = DAT_020b9d18;
            if (uVar8 < uVar3) {
              DAT_020b9d18 = uVar8;
            }
            uVar3 = DAT_020b9d1c;
            if (uVar3 < uVar8) {
              DAT_020b9d1c = uVar8;
            }
          }
        }
        local_18 = uVar4;
      }
      uVar3 = uVar8 + 1;
      if (uVar10 <= uVar3) {
        uVar3 = 2;
      }
      DAT_020b9d14 = uVar3;
      if (uVar7 == 0) {
        uVar9 = uVar8;
      }
      else {
        if ((uVar7 < uVar4 && uVar7 != 1) && (*(uint *)(iVar1 + uVar7 * 4) != uVar8)) {
          *(uint *)(iVar1 + uVar7 * 4) = uVar8;
          uVar4 = DAT_020b9d10;
          if (uVar7 < uVar4) {
            if ((local_11 & 1) == 0) {
              DAT_020b9d18 = uVar7;
              DAT_020b9d1c = uVar7;
              DAT_020b9d20 = 1;
              local_11 = 1;
            }
            else {
              uVar10 = DAT_020b9d18;
              if (uVar7 < uVar10) {
                DAT_020b9d18 = uVar7;
              }
              uVar10 = DAT_020b9d1c;
              if (uVar10 < uVar7) {
                DAT_020b9d1c = uVar7;
              }
            }
          }
        }
        local_18 = uVar4;
      }
      local_24 = local_24 + 1;
      uVar7 = uVar8;
      uVar10 = local_18;
      if (local_24 == param_3) {
        if (*incoming_ecx == 0) {
          *incoming_ecx = uVar9;
        }
        else if ((((uVar9 != 0) && (1 < local_20)) && (uVar4 = DAT_020b9d10, local_20 < uVar4)) &&
                (*(uint *)(iVar1 + local_20 * 4) != uVar9)) {
          *(uint *)(iVar1 + local_20 * 4) = uVar9;
          uVar4 = DAT_020b9d10;
          if (local_20 < uVar4) {
            if ((local_11 & 1) == 0) {
              DAT_020b9d18 = local_20;
              DAT_020b9d1c = local_20;
              DAT_020b9d20 = 1;
            }
            else {
              uVar4 = DAT_020b9d18;
              if (local_20 < uVar4) {
                DAT_020b9d18 = local_20;
              }
              uVar4 = DAT_020b9d1c;
              if (uVar4 < local_20) {
                DAT_020b9d1c = local_20;
              }
            }
          }
        }
        return *incoming_ecx != 0;
      }
    }
LAB_0203f1c0:
    do {
      if ((uVar9 < 2) || (uVar10 <= uVar9)) break;
      uVar7 = *(uint *)(iVar1 + uVar9 * 4);
      if (uVar7 != 0) {
        *(undefined4 *)(iVar1 + uVar9 * 4) = 0;
        uVar4 = DAT_020b9d10;
        if (uVar9 < uVar4) {
          if ((local_11 & 1) == 0) {
            DAT_020b9d18 = uVar9;
            DAT_020b9d1c = uVar9;
            DAT_020b9d20 = 1;
            local_11 = 1;
          }
          else {
            uVar10 = DAT_020b9d18;
            if (uVar9 < uVar10) {
              DAT_020b9d18 = uVar9;
            }
            uVar10 = DAT_020b9d1c;
            if (uVar10 < uVar9) {
              DAT_020b9d1c = uVar9;
            }
          }
        }
        uVar10 = uVar4;
      }
      uVar8 = DAT_020b9d14;
      if ((uVar8 < 2) || (uVar9 < uVar8)) {
        DAT_020b9d14 = uVar9;
      }
      uVar9 = uVar7;
    } while (1 < uVar7 + 1);
    if (local_20 == 0) {
      return false;
    }
    if (local_20 == 1) {
      return false;
    }
    if (uVar4 <= local_20) {
      return false;
    }
    if (*(int *)(iVar1 + local_20 * 4) != -1) {
      *(undefined4 *)(iVar1 + local_20 * 4) = 0xffffffff;
      uVar4 = DAT_020b9d10;
      if (local_20 < uVar4) {
        if ((local_11 & 1) == 0) {
          DAT_020b9d18 = local_20;
          DAT_020b9d1c = local_20;
          DAT_020b9d20 = 1;
        }
        else {
          uVar4 = DAT_020b9d18;
          if (local_20 < uVar4) {
            DAT_020b9d18 = local_20;
          }
          uVar4 = DAT_020b9d1c;
          if (uVar4 < local_20) {
            DAT_020b9d1c = local_20;
            return false;
          }
        }
      }
    }
  }
  return false;
}
