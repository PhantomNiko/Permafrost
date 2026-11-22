/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001210
 */

void * recovered_10001210(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10009000;
}

#undef DAT_10009000

#undef DAT_1000a000
#define DAT_1000a000 (*(int *)(((uintptr_t)pf_module_state + 0x1844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

undefined4 recovered_10001220(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_1000a000 != 0) {
    if (param_1 != 0 && *(code **)(DAT_1000a000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(DAT_1000a000 + 0x24))(param_1);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000a000

#undef DAT_1000a000
#define DAT_1000a000 (*(int * *)(((uintptr_t)pf_module_state + 0x1844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001250
 */

undefined4 recovered_10001250(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((DAT_1000a000 == (int *)0x0) || (*DAT_1000a000 != 0x54584b57)) ||
      ((uint)DAT_1000a000[2] < 0xac)) || ((code *)DAT_1000a000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)DAT_1000a000[0x2a])();
  return uVar1;
}

#undef DAT_1000a000

#undef DAT_1000a000
#define DAT_1000a000 (*(int * *)(((uintptr_t)pf_module_state + 0x1844U)))
#undef str_10008938
#define str_10008938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000894c
#define str_1000894c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_1000896b
#define str_1000896b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10008971
#define str_10008971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b5U)))
#undef str_10008981
#define str_10008981 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c5U)))
#undef str_10008992
#define str_10008992 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d6U)))
#undef str_100089a6
#define str_100089a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#undef str_100089cb
#define str_100089cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#undef str_100089da
#define str_100089da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
#undef str_100089e1
#define str_100089e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#define abStack_49 (*(byte (*)[13])(frame + 1095))
#define local_3c (*(char *)(frame + 1108))
#define local_1c (*(uint *)(frame + 1140))
#define local_18 (*(uint *)(frame + 1144))
#define local_14 (*(uint *)(frame + 1148))
#define local_474 (*(byte (*)[43])(frame + 28))
#define local_448 (*(undefined2 *)(frame + 72))
#define bStack_449 (*(byte *)(frame + 71))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

int recovered_10001280(int *api)

{
  unsigned char frame[1200] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  undefined1 in_DL;
  uint uVar9;

  local_14 = 0;
  iVar3 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    local_18 = api[2];
    DAT_1000a000 = api;
    PF_PART1(local_448, 0) = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar8 = 0x71;
      pcVar7 = str_10008938;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar8 = 0x3a;
      pcVar7 = str_100089cb;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_474[uVar4 + 0x2c] = 0;
    if (api[1] == 0) {
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (local_474[uVar4 + 0x2c] != 0);
      if (uVar4 + 1 < 0x60) {
        (local_474 + uVar4 + 0x2c)[0] = 0x30;
        (local_474 + uVar4 + 0x2c)[1] = 0;
      }
    }
    else {
      uVar6 = api[1];
      uVar4 = 0;
      do {
        abStack_49[uVar4 + 1] = (byte)(uVar6 % 10) | 0x30;
        uVar9 = uVar4 + 1;
        if (8 < uVar4) break;
        bVar2 = 9 < uVar6;
        uVar6 = uVar6 / 10;
        uVar4 = uVar9;
      } while (bVar2);
      do {
        pbVar1 = abStack_49 + uVar9;
        uVar9 = uVar9 - 1;
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (local_474[uVar4 + 0x2c] != 0);
        if (uVar4 + 1 < 0x60) {
          local_474[uVar4 + 0x2c] = *pbVar1;
          local_474[uVar4 + 0x2d] = 0;
        }
      } while (uVar9 != 0);
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar8 = 0x20;
      pcVar7 = str_100089da;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_474[uVar4 + 0x2c] = 0;
    if ((0x2b < local_18) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(&local_448);
    }
    PF_PART1(local_448, 0) = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x74;
      pcVar7 = str_1000894c;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x20;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x66;
      pcVar7 = str_1000896b;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x3d;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x30;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      (local_474 + uVar4 + 0x2c)[0] = 0x33;
      (local_474 + uVar4 + 0x2c)[1] = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x20;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x70;
      pcVar7 = str_10008971;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x3d;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x66;
      pcVar7 = str_100089e1;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x20;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x6b;
      pcVar7 = str_10008981;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar6 < 0x400) {
      local_474[uVar4 + 0x2c] = 0x3d;
      uVar4 = uVar6;
    }
    local_474[uVar4 + 0x2c] = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_474[uVar4 + 0x2c] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar8 = 0x66;
      pcVar7 = str_100089e1;
      do {
        pcVar7 = pcVar7 + 1;
        local_474[uVar4 + 0x2c] = bVar8;
        uVar4 = uVar4 + 1;
        bVar8 = *pcVar7;
        if (bVar8 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_474[uVar4 + 0x2c] = 0;
    iVar3 = 0;
    if ((code *)api[3] != (code *)0x0) {
      iVar5 = (*(code *)api[3])(str_100089e1 + 6,str_10008992,&local_448);
      iVar3 = 0;
      if (iVar5 != 0) {
        if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
          uVar6 = 0;
          do {
            local_18 = uVar6 & 0xff;
            iVar3 = 0;
            local_1c = uVar6;
            do {
              bVar8 = (byte)iVar3;
              iVar5 = recovered_10002a70(api,(char)local_18,bVar8,0,abStack_49 + 1);
              if ((iVar5 != 0) &&
                 (recovered_10001c00((int)api,abStack_49 + 1,(int *)&local_14), local_3c < '\0')) {
                in_DL = (undefined1)local_18;
                iVar5 = recovered_10002a70(api,in_DL,bVar8,1,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,2,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,3,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,4,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,5,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,6,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
                iVar5 = recovered_10002a70(api,in_DL,bVar8,7,local_474);
                if (iVar5 != 0) {
                  recovered_10001c00((int)api,local_474,(int *)&local_14);
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
            uVar6 = local_1c + 1;
          } while (uVar6 != 8);
        }
        uVar4 = local_14;
        uVar6 = 0;
        do {
          uVar9 = uVar6;
          uVar6 = uVar9 + 1;
        } while (local_474[uVar9 + 0x2c] != 0);
        if (uVar6 < 0x400) {
          local_474[uVar9 + 0x2c] = 0x20;
          uVar9 = uVar6;
        }
        local_474[uVar9 + 0x2c] = 0;
        uVar6 = 0;
        do {
          uVar9 = uVar6;
          uVar6 = uVar9 + 1;
        } while (local_474[uVar9 + 0x2c] != 0);
        if (uVar9 + 1 < 0x400) {
          bVar8 = 0x70;
          pcVar7 = str_100089a6;
          do {
            pcVar7 = pcVar7 + 1;
            local_474[uVar9 + 0x2c] = bVar8;
            uVar9 = uVar9 + 1;
            bVar8 = *pcVar7;
            if (bVar8 == 0) break;
          } while (uVar9 < 0x3ff);
        }
        local_474[uVar9 + 0x2c] = 0;
        uVar6 = 0;
        do {
          uVar9 = uVar6;
          uVar6 = uVar9 + 1;
        } while (local_474[uVar9 + 0x2c] != 0);
        if (uVar6 < 0x400) {
          local_474[uVar9 + 0x2c] = 0x3d;
          uVar9 = uVar6;
        }
        local_474[uVar9 + 0x2c] = 0;
        if (uVar4 == 0) {
          uVar6 = 0;
          do {
            uVar4 = uVar6;
            uVar6 = uVar4 + 1;
          } while (local_474[uVar4 + 0x2c] != 0);
          if (uVar4 + 1 < 0x400) {
            (local_474 + uVar4 + 0x2c)[0] = 0x30;
            (local_474 + uVar4 + 0x2c)[1] = 0;
          }
        }
        else {
          uVar6 = 0;
          do {
            abStack_49[uVar6 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
            uVar9 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar2 = 9 < uVar4;
            uVar4 = uVar4 / 10;
            uVar6 = uVar9;
          } while (bVar2);
          do {
            pbVar1 = abStack_49 + uVar9;
            uVar9 = uVar9 - 1;
            uVar6 = 0;
            do {
              uVar4 = uVar6;
              uVar6 = uVar4 + 1;
            } while (local_474[uVar4 + 0x2c] != 0);
            if (uVar4 + 1 < 0x400) {
              local_474[uVar4 + 0x2c] = *pbVar1;
              local_474[uVar4 + 0x2d] = 0;
            }
          } while (uVar9 != 0);
        }
        iVar3 = 1;
        if ((code *)api[3] != (code *)0x0) {
          (*(code *)api[3])(str_100089e1 + 6,str_10008992,&local_448);
          iVar3 = 1;
        }
      }
    }
  }
  return iVar3;
}

#undef DAT_1000a000
#undef str_10008938
#undef str_1000894c
#undef str_1000896b
#undef str_10008971
#undef str_10008981
#undef str_10008992
#undef str_100089a6
#undef str_100089cb
#undef str_100089da
#undef str_100089e1
#undef abStack_49
#undef local_3c
#undef local_1c
#undef local_18
#undef local_14
#undef local_474
#undef local_448
#undef bStack_449

#undef DAT_10008e0c
#define DAT_10008e0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x650U)))
#undef DAT_10008e3e
#define DAT_10008e3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682U)))
#undef str_100089e8
#define str_100089e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_10008a0a
#define str_10008a0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#undef str_10008e10
#define str_10008e10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_10008e19
#define str_10008e19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_10008e22
#define str_10008e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x666U)))
#undef str_10008e2a
#define str_10008e2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66eU)))
#undef str_10008e35
#define str_10008e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#define local_48e (*(undefined2 *)(frame + 1042))
#define local_8e (*(undefined2 *)(frame + 2066))
#define local_24 (*(int *)(frame + 2172))
#define local_20 (*(char * *)(frame + 2176))
#define local_1c (*(byte * *)(frame + 2180))
#define local_18 (*(uint *)(frame + 2184))
#define local_12 (*(byte *)(frame + 2190))
#define local_11 (*(undefined1 *)(frame + 2191))
#define acStack_88f (*(char (*)[1024])(frame + 17))
#define bStack_48f (*(byte *)(frame + 1041))
#define bStack_8f (*(byte *)(frame + 2065))
#define abStack_2f (*(byte (*)[11])(frame + 2161))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c00
 */

void recovered_10001c00(int in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  code *pcVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  char *pcVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;

  if ((((in_EDX != (byte *)0x0) && (*(short *)(in_EDX + 4) == 0x1af4)) &&
      (*(short *)(in_EDX + 6) == 0x1052)) || (*(short *)(in_EDX + 6) == 0x1052)) {
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + 1;
    }
    acStack_88f[1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar10 = 'r';
      pcVar9 = str_100089e8;
      do {
        pcVar9 = pcVar9 + 1;
        acStack_88f[uVar4 + 1] = cVar10;
        uVar4 = uVar4 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    acStack_88f[uVar4 + 1] = '\0';
    recovered_10002c80((uint)(acStack_88f + 1),(int *)in_ECX,(ushort *)in_EDX,(int)(acStack_88f + 1)
                      );
    local_20 = recovered_10008460((int)in_EDX);
    if (in_EDX != (byte *)0x0) {
      PF_PART1(local_8e, 0) = 0;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (abStack_2f[uVar4 - 0x5f] != 0);
      if (uVar4 + 1 < 0x60) {
        bVar11 = 0x2f;
        pcVar9 = str_10008a0a;
        do {
          pcVar9 = pcVar9 + 1;
          abStack_2f[uVar4 - 0x5f] = bVar11;
          uVar4 = uVar4 + 1;
          bVar11 = *pcVar9;
          if (bVar11 == 0) break;
        } while (uVar4 < 0x5f);
      }
      abStack_2f[uVar4 - 0x5f] = 0;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (abStack_2f[uVar4 - 0x5f] != 0);
      if (uVar6 < 0x60) {
        abStack_2f[uVar4 - 0x5f] = 0x2f;
        uVar4 = uVar6;
      }
      abStack_2f[uVar4 - 0x5f] = 0;
      bVar11 = *in_EDX;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (abStack_2f[uVar4 - 0x5f] != 0);
      if (bVar11 < 0xa0) {
        uVar3 = bVar11 >> 4 | 0x30;
      }
      else {
        uVar3 = (uint3)(byte)((bVar11 >> 4) + 0x37);
      }
      if (uVar4 + 1 < 0x60) {
        abStack_2f[uVar4 - 0x5f] = (byte)uVar3;
        abStack_2f[uVar4 - 0x5e] = 0;
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (abStack_2f[uVar4 - 0x5f] != 0);
      bVar7 = (byte)(bVar11 & 0xffff0f);
      if (bVar7 < 10) {
        uVar6 = (bVar11 & 0xffff0f) << 8 | 0x3000;
      }
      else {
        uVar6 = (uint)(byte)(bVar7 + 0x37) << 8;
      }
      if (uVar4 + 1 < 0x60) {
        abStack_2f[uVar4 - 0x5f] = (byte)(uVar6 >> 8);
        abStack_2f[uVar4 - 0x5e] = 0;
      }
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (abStack_2f[uVar5 - 0x5f] != 0);
      if (uVar4 < 0x60) {
        abStack_2f[uVar5 - 0x5f] = 0x3a;
        uVar5 = uVar4;
      }
      abStack_2f[uVar5 - 0x5f] = 0;
      bVar11 = in_EDX[1];
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (abStack_2f[uVar5 - 0x5f] != 0);
      if (bVar11 < 0xa0) {
        bVar7 = bVar11 >> 4 | 0x30;
      }
      else {
        bVar7 = (bVar11 >> 4) + 0x37;
      }
      if (uVar5 + 1 < 0x60) {
        abStack_2f[uVar5 - 0x5f] = bVar7;
        abStack_2f[uVar5 - 0x5e] = 0;
      }
      uVar5 = CONCAT31(uVar3,bVar11) & 0xffffff0f;
      uVar4 = 0;
      do {
        uVar14 = uVar4;
        uVar4 = uVar14 + 1;
      } while (abStack_2f[uVar14 - 0x5f] != 0);
      if ((byte)uVar5 < 10) {
        uVar13 = (ushort)uVar5 | 0x30;
      }
      else {
        uVar13 = (ushort)CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 + 0x37);
      }
      if (uVar14 + 1 < 0x60) {
        abStack_2f[uVar14 - 0x5f] = (byte)uVar13;
        abStack_2f[uVar14 - 0x5e] = 0;
      }
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (abStack_2f[uVar5 - 0x5f] != 0);
      if (uVar4 < 0x60) {
        abStack_2f[uVar5 - 0x5f] = 0x2e;
        uVar5 = uVar4;
      }
      abStack_2f[uVar5 - 0x5f] = 0;
      local_18 = (uint)in_EDX[2];
      local_1c = in_EDX;
      local_24 = in_ECX;
      local_12 = bVar7;
      if (local_18 == 0) {
        uVar4 = 0;
        do {
          uVar5 = uVar4;
          uVar4 = uVar5 + 1;
        } while (abStack_2f[uVar5 - 0x5f] != 0);
        if (uVar5 + 1 < 0x60) {
          (abStack_2f + (uVar5 - 0x5f))[0] = 0x30;
          (abStack_2f + (uVar5 - 0x5f))[1] = 0;
        }
      }
      else {
        local_11 = (char)(uVar13 >> 8);
        uVar4 = 0;
        uVar5 = local_18;
        do {
          acStack_88f[uVar4 + 0x401] = (byte)(uVar5 % 10) | 0x30;
          uVar14 = uVar4 + 1;
          if (8 < uVar4) break;
          bVar16 = 9 < uVar5;
          uVar4 = uVar14;
          uVar5 = uVar5 / 10;
        } while (bVar16);
        uVar13 = CONCAT11(local_11,(byte)uVar13);
        do {
          iVar12 = uVar14 + 0x400;
          uVar14 = uVar14 - 1;
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (abStack_2f[uVar5 - 0x5f] != 0);
          if (uVar5 + 1 < 0x60) {
            abStack_2f[uVar5 - 0x5f] = acStack_88f[iVar12];
            abStack_2f[uVar5 - 0x5e] = 0;
          }
        } while (uVar14 != 0);
      }
      PF_PART1(local_48e, 0) = 0;
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        uVar6 = CONCAT31((int3)(uVar6 >> 8),0x70);
        pcVar9 = &DAT_10008e0c;
        do {
          acStack_88f[uVar5 + 0x401] = (char)uVar6;
          uVar5 = uVar5 + 1;
          uVar6 = CONCAT31((int3)(uVar6 >> 8),*pcVar9);
          if (*pcVar9 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while (uVar5 < 0x3ff);
      }
      acStack_88f[uVar5 + 0x401] = '\0';
      bVar11 = local_12;
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        acStack_88f[uVar5 + 0x401] = (char)(uVar13 >> 8);
        acStack_88f[uVar5 + 0x402] = '\0';
      }
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        acStack_88f[uVar5 + 0x401] = (char)(uVar6 >> 8);
        acStack_88f[uVar5 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar4 + 0x401] = ':';
        uVar4 = uVar6;
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        acStack_88f[uVar4 + 0x401] = (char)uVar13;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar4 + 0x401] = '.';
        uVar4 = uVar6;
      }
      bVar16 = local_18 == 0;
      acStack_88f[uVar4 + 0x401] = '\0';
      pbVar15 = local_1c;
      if (bVar16) {
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (acStack_88f[uVar4 + 0x401] != '\0');
        if (uVar4 + 1 < 0x400) {
          (acStack_88f + uVar4 + 0x401)[0] = '0';
          (acStack_88f + uVar4 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar6 = 0;
        uVar4 = local_18;
        do {
          abStack_2f[uVar6 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
          pbVar15 = local_1c;
          uVar5 = uVar6 + 1;
          if (8 < uVar6) break;
          bVar16 = 9 < uVar4;
          uVar6 = uVar5;
          uVar4 = uVar4 / 10;
        } while (bVar16);
        do {
          pbVar1 = abStack_2f + uVar5;
          uVar5 = uVar5 - 1;
          uVar6 = 0;
          do {
            uVar4 = uVar6;
            uVar6 = uVar4 + 1;
          } while (acStack_88f[uVar4 + 0x401] != '\0');
          if (uVar4 + 1 < 0x400) {
            acStack_88f[uVar4 + 0x401] = *pbVar1;
            acStack_88f[uVar4 + 0x402] = '\0';
          }
        } while (uVar5 != 0);
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008e10;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_88f[uVar4 + 0x401] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x3ff);
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      uVar13 = *(ushort *)(pbVar15 + 4);
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)(uVar13 >> 8);
        if (uVar13 < 0xa000) {
          bVar11 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar11 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar8 = uVar13 >> 8 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar8 = uVar13 >> 4 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)(uVar13 & 0xf);
        if ((uVar13 & 0xf) < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008e19;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_88f[uVar4 + 0x401] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x3ff);
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      uVar13 = *(ushort *)(pbVar15 + 6);
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)(uVar13 >> 8);
        if (uVar13 < 0xa000) {
          bVar11 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar11 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar8 = uVar13 >> 8 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar8 = uVar13 >> 4 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        bVar11 = (byte)(uVar13 & 0xf);
        if ((uVar13 & 0xf) < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008e22;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_88f[uVar4 + 0x401] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x3ff);
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      bVar11 = pbVar15[8];
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 0xa0) {
          bVar7 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar7 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar7;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      bVar11 = bVar11 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar4 + 0x401] = '.';
        uVar4 = uVar6;
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      bVar11 = pbVar15[9];
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 0xa0) {
          bVar7 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar7 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar7;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      bVar11 = bVar11 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar4 + 0x401] = '.';
        uVar4 = uVar6;
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      bVar11 = pbVar15[10];
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 0xa0) {
          bVar7 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar7 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar7;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      bVar11 = bVar11 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008e2a;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_88f[uVar4 + 0x401] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x3ff);
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      bVar11 = pbVar15[0xb];
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 0xa0) {
          bVar7 = bVar11 >> 4 | 0x30;
        }
        else {
          bVar7 = (bVar11 >> 4) + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar7;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      bVar11 = bVar11 & 0xf;
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        if (bVar11 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        acStack_88f[uVar4 + 0x401] = bVar11;
        acStack_88f[uVar4 + 0x402] = '\0';
      }
      uVar4 = *(uint *)(pbVar15 + 0x10);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar5 + 0x401] = ' ';
        uVar5 = uVar6;
      }
      acStack_88f[uVar5 + 0x401] = '\0';
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar10 = 'c';
        pcVar9 = str_10008e35;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_88f[uVar5 + 0x401] = cVar10;
          uVar5 = uVar5 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
      acStack_88f[uVar5 + 0x401] = '\0';
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_88f[uVar5 + 0x401] != '\0');
      if (uVar6 < 0x400) {
        acStack_88f[uVar5 + 0x401] = '=';
        uVar5 = uVar6;
      }
      acStack_88f[uVar5 + 0x401] = '\0';
      iVar12 = 8;
      do {
        uVar5 = uVar4 >> ((char)iVar12 * '\x04' - 4U & 0x1f) & 0xf;
        bVar7 = (byte)uVar5;
        bVar11 = bVar7 + 0x37;
        uVar6 = 0;
        do {
          uVar14 = uVar6;
          uVar6 = uVar14 + 1;
        } while (acStack_88f[uVar14 + 0x401] != '\0');
        if (uVar14 + 1 < 0x400) {
          if (uVar5 < 10) {
            bVar11 = bVar7 | 0x30;
          }
          acStack_88f[uVar14 + 0x401] = bVar11;
          acStack_88f[uVar14 + 0x402] = '\0';
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      uVar6 = 0;
      pbVar15 = local_1c;
      do {
        local_18 = uVar6;
        uVar6 = *(uint *)(pbVar15 + uVar6 * 4 + 0x14);
        if (uVar6 != 0) {
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (acStack_88f[uVar5 + 0x401] != '\0');
          if (uVar5 + 1 < 0x400) {
            cVar10 = ' ';
            pcVar9 = &DAT_10008e3e;
            do {
              acStack_88f[uVar5 + 0x401] = cVar10;
              uVar5 = uVar5 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
              pcVar9 = pcVar9 + 1;
            } while (uVar5 < 0x3ff);
          }
          acStack_88f[uVar5 + 0x401] = '\0';
          if (local_18 == 0) {
            uVar4 = 0;
            do {
              uVar5 = uVar4;
              uVar4 = uVar5 + 1;
            } while (acStack_88f[uVar5 + 0x401] != '\0');
            if (uVar5 + 1 < 0x400) {
              (acStack_88f + uVar5 + 0x401)[0] = '0';
              (acStack_88f + uVar5 + 0x401)[1] = '\0';
            }
          }
          else {
            uVar4 = local_18;
            uVar5 = 0;
            do {
              abStack_2f[uVar5 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
              uVar14 = uVar5 + 1;
              if (8 < uVar5) break;
              bVar16 = 9 < uVar4;
              uVar4 = uVar4 / 10;
              uVar5 = uVar14;
            } while (bVar16);
            do {
              pbVar15 = abStack_2f + uVar14;
              uVar14 = uVar14 - 1;
              uVar4 = 0;
              do {
                uVar5 = uVar4;
                uVar4 = uVar5 + 1;
              } while (acStack_88f[uVar5 + 0x401] != '\0');
              if (uVar5 + 1 < 0x400) {
                acStack_88f[uVar5 + 0x401] = *pbVar15;
                acStack_88f[uVar5 + 0x402] = '\0';
              }
            } while (uVar14 != 0);
            pbVar15 = local_1c;
          }
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (acStack_88f[uVar5 + 0x401] != '\0');
          if (uVar4 < 0x400) {
            acStack_88f[uVar5 + 0x401] = '=';
            uVar5 = uVar4;
          }
          acStack_88f[uVar5 + 0x401] = '\0';
          iVar12 = 8;
          do {
            uVar5 = uVar6 >> ((char)iVar12 * '\x04' - 4U & 0x1f) & 0xf;
            bVar7 = (byte)uVar5;
            bVar11 = bVar7 + 0x37;
            uVar4 = 0;
            do {
              uVar14 = uVar4;
              uVar4 = uVar14 + 1;
            } while (acStack_88f[uVar14 + 0x401] != '\0');
            if (uVar14 + 1 < 0x400) {
              if (uVar5 < 10) {
                bVar11 = bVar7 | 0x30;
              }
              acStack_88f[uVar14 + 0x401] = bVar11;
              acStack_88f[uVar14 + 0x402] = '\0';
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        iVar12 = local_24;
        uVar6 = local_18 + 1;
      } while (uVar6 != 6);
      if (acStack_88f[1] != '\0') {
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (acStack_88f[uVar4 + 0x401] != '\0');
        if (uVar6 < 0x400) {
          acStack_88f[uVar4 + 0x401] = ' ';
          uVar4 = uVar6;
        }
        acStack_88f[uVar4 + 0x401] = '\0';
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (acStack_88f[uVar4 + 0x401] != '\0');
        if (uVar4 + 1 < 0x400) {
          pcVar9 = acStack_88f + 2;
          cVar10 = acStack_88f[1];
          do {
            acStack_88f[uVar4 + 0x401] = cVar10;
            uVar4 = uVar4 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (uVar4 < 0x3ff);
        }
        acStack_88f[uVar4 + 0x401] = '\0';
      }
      if ((iVar12 != 0) && (pcVar2 = *(code **)(iVar12 + 0xc), pcVar2 != (code *)0x0)) {
        (*pcVar2)(&local_8e,local_20,&local_48e);
      }
    }
  }
  return;
}

#undef DAT_10008e0c
#undef DAT_10008e3e
#undef str_100089e8
#undef str_10008a0a
#undef str_10008e10
#undef str_10008e19
#undef str_10008e22
#undef str_10008e2a
#undef str_10008e35
#undef local_48e
#undef local_8e
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_12
#undef local_11
#undef acStack_88f
#undef bStack_48f
#undef bStack_8f
#undef abStack_2f

#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

undefined4
recovered_10002a70(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;

  local_24 = 0;
  local_30 = 0;
  local_20 = 0;
  if (in_ECX == (int *)0x0 || param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if (*in_ECX != 0x54584b57) {
    return 0;
  }
  if ((uint)in_ECX[2] < 0x60) {
    return 0;
  }
  if ((code *)in_ECX[0x17] == (code *)0x0) {
    return 0;
  }
  local_1c = (uint)param_4;
  local_18 = (uint)param_3;
  local_14 = in_ECX;
  iVar1 = (*(code *)in_ECX[0x17])(in_DL,local_18,local_1c,0,4,&local_24);
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0xffff) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x60) {
    return 0;
  }
  if ((code *)local_14[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,8,4,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x60)) ||
      ((code *)local_14[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,4,4,param_5 + 0x10), iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  if (((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) &&
     (((code *)local_14[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,0xc,4,&local_20), iVar1 != 0)))) {
    local_28 = local_20 >> 0x10 & 0xff;
  }
  else {
    local_20 = 0;
    local_28 = 0;
  }
  *param_5 = in_DL;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(uint *)(param_5 + 4) = local_24;
  *(ushort *)(param_5 + 10) = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
  param_5[9] = (char)((uint)local_30 >> 0x10);
  param_5[8] = (char)((uint)local_30 >> 0x18);
  param_5[0xc] = (char)local_28;
  iVar1 = -0x18;
  piVar4 = local_14;
  do {
    local_2c = 0;
    uVar2 = 0;
    if (((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) &&
       ((code *)piVar4[0x17] != (code *)0x0)) {
      iVar3 = (*(code *)piVar4[0x17])(in_DL,local_18,local_1c,iVar1 + 0x28U & 0xffff,4,&local_2c);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = local_2c;
      }
      piVar4 = local_14;
    }
    *(undefined4 *)(param_5 + iVar1 + 0x2c) = uVar2;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  return 1;
}

#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10008cd8
#define DAT_10008cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_10008ce0
#define DAT_10008ce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10008d13
#define DAT_10008d13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x557U)))
#undef DAT_10008d1b
#define DAT_10008d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55fU)))
#undef DAT_10008d23
#define DAT_10008d23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x567U)))
#undef DAT_10008d37
#define DAT_10008d37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57bU)))
#undef DAT_10008d3f
#define DAT_10008d3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#undef DAT_10008d47
#define DAT_10008d47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58bU)))
#undef DAT_10008d4f
#define DAT_10008d4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x593U)))
#undef DAT_10008d62
#define DAT_10008d62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_10008a17
#define str_10008a17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25bU)))
#undef str_10008a27
#define str_10008a27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26bU)))
#undef str_10008a3b
#define str_10008a3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_10008a53
#define str_10008a53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_10008a6b
#define str_10008a6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_10008a84
#define str_10008a84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_10008a95
#define str_10008a95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d9U)))
#undef str_10008aa5
#define str_10008aa5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_10008ab4
#define str_10008ab4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f8U)))
#undef str_10008abd
#define str_10008abd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x301U)))
#undef str_10008ad9
#define str_10008ad9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_10008ae4
#define str_10008ae4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x328U)))
#undef str_10008af4
#define str_10008af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x338U)))
#undef str_10008afb
#define str_10008afb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33fU)))
#undef str_10008b0b
#define str_10008b0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_10008b18
#define str_10008b18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35cU)))
#undef str_10008b2e
#define str_10008b2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_10008b44
#define str_10008b44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_10008b5a
#define str_10008b5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_10008b70
#define str_10008b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b4U)))
#undef str_10008b89
#define str_10008b89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cdU)))
#undef str_10008ba1
#define str_10008ba1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_10008bae
#define str_10008bae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f2U)))
#undef str_10008bbf
#define str_10008bbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_10008bd3
#define str_10008bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x417U)))
#undef str_10008be3
#define str_10008be3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef str_10008bfa
#define str_10008bfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43eU)))
#undef str_10008c0d
#define str_10008c0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_10008c17
#define str_10008c17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45bU)))
#undef str_10008c2a
#define str_10008c2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#undef str_10008c41
#define str_10008c41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x485U)))
#undef str_10008c4d
#define str_10008c4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x491U)))
#undef str_10008c59
#define str_10008c59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_10008c66
#define str_10008c66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aaU)))
#undef str_10008c70
#define str_10008c70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_10008c84
#define str_10008c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
#undef str_10008c93
#define str_10008c93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d7U)))
#undef str_10008ca6
#define str_10008ca6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10008cb8
#define str_10008cb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fcU)))
#undef str_10008cce
#define str_10008cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_10008ce7
#define str_10008ce7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#undef str_10008cf1
#define str_10008cf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x535U)))
#undef str_10008cfd
#define str_10008cfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
#undef str_10008d2a
#define str_10008d2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56eU)))
#undef str_10008d56
#define str_10008d56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59aU)))
#undef str_10008d67
#define str_10008d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5abU)))
#undef str_10008d71
#define str_10008d71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b5U)))
#undef str_10008d86
#define str_10008d86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5caU)))
#undef str_10008d97
#define str_10008d97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dbU)))
#undef str_10008da3
#define str_10008da3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e7U)))
#undef str_10008daf
#define str_10008daf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f3U)))
#undef str_10008dbb
#define str_10008dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_10008dca
#define str_10008dca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60eU)))
#undef str_10008dd4
#define str_10008dd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x618U)))
#undef str_10008de2
#define str_10008de2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x626U)))
#undef str_10008df3
#define str_10008df3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_10008dff
#define str_10008dff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x643U)))
#define local_ac (*(uint *)(frame + 20))
#define local_a8 (*(undefined4 *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(uint *)(frame + 32))
#define local_9c (*(uint *)(frame + 36))
#define local_98 (*(uint *)(frame + 40))
#define local_94 (*(uint *)(frame + 44))
#define local_90 (*(uint *)(frame + 48))
#define local_8c (*(uint *)(frame + 52))
#define local_88 (*(uint *)(frame + 56))
#define local_84 (*(uint *)(frame + 60))
#define local_80 (*(uint *)(frame + 64))
#define local_7c (*(uint *)(frame + 68))
#define local_78 (*(uint *)(frame + 72))
#define local_74 (*(uint *)(frame + 76))
#define local_70 (*(uint *)(frame + 80))
#define local_6c (*(uint *)(frame + 84))
#define local_68 (*(uint *)(frame + 88))
#define local_64 (*(uint *)(frame + 92))
#define local_60 (*(uint *)(frame + 96))
#define local_5c (*(uint *)(frame + 100))
#define local_58 (*(int *)(frame + 104))
#define local_54 (*(uint *)(frame + 108))
#define local_50 (*(uint *)(frame + 112))
#define local_4c (*(uint *)(frame + 116))
#define local_48 (*(uint *)(frame + 120))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(uint *)(frame + 128))
#define local_3c (*(uint *)(frame + 132))
#define local_38 (*(uint *)(frame + 136))
#define local_34 (*(undefined4 *)(frame + 140))
#define local_30 (*(undefined4 *)(frame + 144))
#define local_24 (*(uint *)(frame + 156))
#define local_20 (*(uint *)(frame + 160))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(ushort * *)(frame + 168))
#define local_14 (*(int * *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c80
 */

void recovered_10002c80(uint in_EAX,int *in_ECX,ushort *in_EDX,int param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar6;
  uint uVar4;
  code *pcVar5;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  ushort *puVar10;
  char *pcVar11;
  byte bVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  bool bVar18;

  local_18 = in_EDX;
  if (in_EDX == (ushort *)0x0) {
    local_24 = CONCAT31((int3)(in_EAX >> 8),in_ECX == (int *)0x0);
    bVar18 = true;
    if (param_4 == 0) goto LAB_10003225;
LAB_10002da9:
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_10008a3b;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    local_4c = 0;
joined_r0x10002df5:
    local_4c = 0;
    if (!bVar18) {
LAB_10003236:
      uVar15 = 0;
      if ((local_18 != (ushort *)0x0) && (local_18[2] == 0x1af4)) {
        uVar7 = (uint)local_18[3];
        if ((uVar7 & 0xffffffc0) == 0x1000) {
          uVar7 = uVar7 - 0x1000;
        }
        else {
          if ((uVar7 & 0xffffffc0) != 0x1040) goto LAB_100083f0;
          uVar7 = uVar7 - 0x1040;
        }
        if (uVar7 != 0xffffffff) {
          local_14 = in_ECX;
          if (param_4 == 0) {
            if (uVar7 != 0) goto LAB_10003336;
          }
          else {
            uVar15 = 0;
            do {
              uVar4 = uVar15;
              uVar15 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar4 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            uVar15 = 0;
            do {
              uVar4 = uVar15;
              uVar15 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar4 + 1 < 0x400) {
              cVar9 = 'v';
              pcVar8 = str_10008ab4;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar4) = cVar9;
                uVar4 = uVar4 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar4 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            uVar15 = 0;
            do {
              uVar4 = uVar15;
              uVar15 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar4 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            if (uVar7 == 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
              }
            }
            else {
LAB_10003336:
              uVar15 = 0;
              do {
                *(byte *)((int)&local_a4 + uVar15) = (byte)(uVar7 % 10) | 0x30;
                uVar4 = uVar15 + 1;
                if (8 < uVar15) break;
                bVar18 = 9 < uVar7;
                uVar15 = uVar4;
                uVar7 = uVar7 / 10;
              } while (bVar18);
              do {
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar15);
                    uVar15 = uVar15 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) =
                         *(undefined1 *)((int)&local_a8 + uVar4 + 3);
                    *(undefined1 *)(param_4 + uVar15) = 0;
                  }
                }
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          piVar13 = local_14;
          local_20 = 0;
          iVar2 = -0x58;
          do {
            *(undefined1 *)((int)&local_4c + iVar2) = 0;
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0);
          if ((((local_18[9] & 0x10) != 0) && ((char)local_24 == '\0')) &&
             ((*local_14 == 0x54584b57 &&
              (((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)) &&
               (iVar2 = (*(code *)local_14[0x17])
                                  ((char)*local_18,*(undefined1 *)((int)local_18 + 1),
                                   (char)local_18[1],0x34,1,&local_20), iVar2 != 0)))))) {
            if (local_20 - 0x40 < 0xb0) {
              uVar15 = 0;
              while( true ) {
                piVar16 = local_14;
                local_1c = uVar15;
                local_38 = 0;
                local_3c = 0;
                local_40 = 0;
                local_48 = 0;
                local_ac = 0;
                local_a8 = 0;
                if ((*piVar13 != 0x54584b57) || ((uint)piVar13[2] < 0x60)) break;
                if ((code *)piVar13[0x17] == (code *)0x0) break;
                iVar2 = (*(code *)piVar13[0x17])
                                  (*local_18 & 0xff,*(undefined1 *)((int)local_18 + 1),
                                   (char)local_18[1],local_20 & 0xffff,1,&local_38);
                piVar1 = local_14;
                piVar13 = piVar16;
                if (((iVar2 == 0) || (*piVar16 != 0x54584b57)) ||
                   (((uint)piVar16[2] < 0x60 || ((code *)piVar16[0x17] == (code *)0x0)))) break;
                iVar2 = (*(code *)piVar16[0x17])
                                  ((char)*local_18,*(undefined1 *)((int)local_18 + 1),
                                   (char)local_18[1],local_20 + 1 & 0xffff,1,&local_3c);
                piVar16 = local_14;
                piVar13 = piVar1;
                if (iVar2 == 0) break;
                if ((((local_38 == 9) && (*piVar1 == 0x54584b57)) && (0x5f < (uint)piVar1[2])) &&
                   ((code *)piVar1[0x17] != (code *)0x0)) {
                  local_34 = (uint)(byte)local_18[1];
                  iVar2 = (*(code *)piVar1[0x17])
                                    ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_34,
                                     local_20 + 3 & 0xffff,1,&local_40);
                  piVar1 = local_14;
                  piVar13 = piVar16;
                  if (((iVar2 != 0) && (*piVar16 == 0x54584b57)) &&
                     ((0x5f < (uint)piVar16[2] && ((code *)piVar16[0x17] != (code *)0x0)))) {
                    local_34 = (uint)(byte)local_18[1];
                    iVar2 = (*(code *)piVar16[0x17])
                                      ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_34,
                                       local_20 + 4 & 0xffff,1,&local_48);
                    piVar16 = local_14;
                    piVar13 = piVar1;
                    if ((((iVar2 != 0) && (*piVar1 == 0x54584b57)) && (0x5f < (uint)piVar1[2])) &&
                       ((code *)piVar1[0x17] != (code *)0x0)) {
                      local_34 = (uint)(byte)local_18[1];
                      iVar2 = (*(code *)piVar1[0x17])
                                        ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_34
                                         ,local_20 + 8 & 0xffff,4,&local_ac);
                      piVar1 = local_14;
                      piVar13 = piVar16;
                      if ((((iVar2 != 0) && (*piVar16 == 0x54584b57)) && (0x5f < (uint)piVar16[2]))
                         && ((code *)piVar16[0x17] != (code *)0x0)) {
                        local_34 = (uint)(byte)local_18[1];
                        iVar2 = (*(code *)piVar16[0x17])
                                          ((char)*local_18,*(undefined1 *)((int)local_18 + 1),
                                           local_34,local_20 + 0xc & 0xffff,4,&local_a8);
                        piVar13 = piVar1;
                        if (iVar2 != 0) {
                          local_44 = 0;
                          local_80 = local_80 + 1;
                          if (local_40 == 1) {
                            local_34 = local_ac;
                            iVar2 = local_a8 + local_ac;
                            if (((CARRY4(local_a8,local_ac)) || (5 < local_48)) ||
                               (((local_a8 == 0 ||
                                 ((local_48 != 0 &&
                                  ((*(uint *)(local_18 + local_48 * 2 + 8) & 7) == 4)))) ||
                                (uVar15 = *(uint *)(local_18 + local_48 * 2 + 10),
                                (uVar15 & 1) != 0 || uVar15 == 0)))) goto LAB_10003848;
                            iVar14 = 0;
                            if ((uVar15 & 6) == 4) {
                              if (4 < local_48) goto LAB_10003848;
                              iVar14 = *(int *)(local_18 + local_48 * 2 + 0xc);
                            }
                            uVar15 = uVar15 & 0xfffffff0;
                            if (((iVar2 == 0) || (uVar15 == 0 && iVar14 == 0)) ||
                               (local_30 = 0, *local_14 != 0x54584b57)) goto LAB_10003848;
                            if (((uint)local_14[2] < 0xbc) ||
                               ((code *)local_14[0x2e] == (code *)0x0)) {
                              if ((!((uint)local_14[2] < 0x68 || iVar14 != 0)) &&
                                 (((code *)local_14[0x19] != (code *)0x0 &&
                                  (iVar2 = (*(code *)local_14[0x19])(uVar15,0,iVar2,&local_30),
                                  iVar2 != 0)))) {
                                uVar15 = local_30;
                                goto LAB_1000382e;
                              }
                              goto LAB_10003848;
                            }
                            iVar2 = (*(code *)local_14[0x2e])(uVar15,iVar14,iVar2,&local_44);
                            if (iVar2 == 0) goto LAB_10003848;
                            uVar15 = local_44;
LAB_1000382e:
                            local_a4 = uVar15 + local_34;
                            local_94 = local_48;
                          }
                          else {
LAB_10003848:
                            if (local_40 == 2) {
                              local_34 = local_ac;
                              iVar2 = local_a8 + local_ac;
                              if (((((!CARRY4(local_a8,local_ac)) && (local_48 < 6)) &&
                                   (local_a8 != 0)) &&
                                  ((local_48 == 0 ||
                                   ((*(uint *)(local_18 + local_48 * 2 + 8) & 7) != 4)))) &&
                                 (uVar15 = *(uint *)(local_18 + local_48 * 2 + 10),
                                 (uVar15 & 1) == 0 && uVar15 != 0)) {
                                iVar14 = 0;
                                if ((uVar15 & 6) == 4) {
                                  if (4 < local_48) goto LAB_1000389a;
                                  iVar14 = *(int *)(local_18 + local_48 * 2 + 0xc);
                                }
                                uVar15 = uVar15 & 0xfffffff0;
                                if ((iVar2 != 0) && (uVar15 != 0 || iVar14 != 0)) {
                                  local_44 = 0;
                                  local_30 = 0;
                                  if (*local_14 == 0x54584b57) {
                                    if (((uint)local_14[2] < 0xbc) ||
                                       ((code *)local_14[0x2e] == (code *)0x0)) {
                                      if ((0x67 < (uint)local_14[2] && iVar14 == 0) &&
                                         (((code *)local_14[0x19] != (code *)0x0 &&
                                          (iVar2 = (*(code *)local_14[0x19])
                                                             (uVar15,0,iVar2,&local_30), iVar2 != 0)
                                          ))) {
                                        local_44 = local_30;
                                        goto LAB_10003a1a;
                                      }
                                    }
                                    else {
                                      iVar2 = (*(code *)local_14[0x2e])
                                                        (uVar15,iVar14,iVar2,&local_44);
                                      if (iVar2 != 0) {
LAB_10003a1a:
                                        local_44 = local_44 + local_34;
                                        local_30 = 0;
                                        local_a0 = local_44;
                                        local_90 = local_48;
                                        if ((((*local_14 == 0x54584b57) &&
                                             (0x5f < (uint)local_14[2])) &&
                                            ((code *)local_14[0x17] != (code *)0x0)) &&
                                           (iVar2 = (*(code *)local_14[0x17])
                                                              ((char)*local_18,
                                                               *(undefined1 *)((int)local_18 + 1),
                                                               (char)local_18[1],
                                                               local_20 + 0x10 & 0xffff,4,&local_30)
                                           , iVar2 != 0)) {
                                          local_84 = local_30;
                                        }
                                        goto LAB_1000391a;
                                      }
                                    }
                                  }
                                }
                              }
                            }
LAB_1000389a:
                            if ((local_40 == 3) &&
                               (iVar2 = recovered_10008630(local_14,(int)local_18,local_48,local_ac,
                                                           local_a8,(int *)&local_44), iVar2 != 0))
                            {
                              local_9c = local_44;
                              local_8c = local_48;
                            }
                            else if ((local_40 == 4) &&
                                    (iVar2 = recovered_10008630(local_14,(int)local_18,local_48,
                                                                local_ac,local_a8,(int *)&local_44),
                                    iVar2 != 0)) {
                              local_98 = local_44;
                              local_88 = local_48;
                            }
                          }
LAB_1000391a:
                          piVar13 = local_14;
                        }
                      }
                    }
                  }
                }
                if ((((local_3c == 0) || (local_3c == local_20)) ||
                    (local_20 = local_3c, 0x1e < local_1c)) ||
                   (uVar15 = local_1c + 1, 0xaf < local_3c - 0x40)) break;
              }
            }
            if (local_a4 != 0) {
              local_30 = 0;
              iVar2 = *piVar13;
              if (iVar2 == 0x54584b57) {
                iVar14 = local_a4 + 0x14;
                uVar15 = piVar13[2];
                if (uVar15 < 0xc0) {
                  iVar2 = 0x54584b57;
                  if (0x6b < uVar15) goto LAB_100058ce;
                  goto LAB_10005158;
                }
                pcVar5 = (code *)piVar13[0x2f];
                if (pcVar5 == (code *)0x0) {
LAB_100058ce:
                  pcVar5 = (code *)local_14[0x1a];
                  if (pcVar5 != (code *)0x0) goto LAB_100058d8;
LAB_1000590f:
                  if (uVar15 < 0xc4) {
                    if (0x6f < uVar15) {
LAB_10006159:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_10006163;
                      goto LAB_10006195;
                    }
LAB_100061aa:
                    iVar14 = local_a4 + 4;
LAB_100061b0:
                    iVar2 = 0x54584b57;
                    if (uVar15 < 0x6c) goto LAB_10005158;
LAB_100061be:
                    pcVar5 = (code *)local_14[0x1a];
                    if (pcVar5 != (code *)0x0) goto LAB_10006a27;
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) goto LAB_10006159;
LAB_10006163:
                    (*pcVar5)(iVar14,1,0);
                    if (local_a4 == 0) goto LAB_10006b3a;
                    iVar2 = *local_14;
                    if (iVar2 != 0x54584b57) goto LAB_10005158;
                    uVar15 = local_14[2];
LAB_10006195:
                    if (uVar15 < 0xc4) {
                      if (uVar15 < 0x70) goto LAB_100061aa;
LAB_100069c8:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_100069d2;
                    }
                    else {
                      pcVar5 = (code *)local_14[0x30];
                      if (pcVar5 == (code *)0x0) goto LAB_100069c8;
LAB_100069d2:
                      (*pcVar5)(local_a4,4,0);
                      if (local_a4 == 0) goto LAB_10006b3a;
                      iVar2 = *local_14;
                      if (iVar2 != 0x54584b57) goto LAB_10005158;
                      uVar15 = local_14[2];
                    }
                    iVar14 = local_a4 + 4;
                    if (uVar15 < 0xc0) goto LAB_100061b0;
                    pcVar5 = (code *)local_14[0x2f];
                    if (pcVar5 == (code *)0x0) goto LAB_100061be;
LAB_10006a27:
                    (*pcVar5)(iVar14,4,&local_7c);
                    if (local_a4 == 0) goto LAB_10006b3a;
                    iVar2 = *local_14;
                    if (iVar2 != 0x54584b57) goto LAB_10005158;
                    uVar15 = local_14[2];
                  }
                  if (uVar15 < 0xc4) {
                    iVar2 = 0x54584b57;
                    if (uVar15 < 0x70) goto LAB_10005158;
LAB_10006a7d:
                    pcVar5 = (code *)local_14[0x1b];
                    if (pcVar5 == (code *)0x0) {
                      iVar2 = 0x54584b57;
                      goto LAB_10005158;
                    }
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) goto LAB_10006a7d;
                  }
                  (*pcVar5)(local_a4,4,1);
                  if (local_a4 == 0) goto LAB_10006b3a;
                  iVar2 = *local_14;
                  if (iVar2 == 0x54584b57) goto LAB_10005167;
                  goto LAB_10006aba;
                }
LAB_100058d8:
                (*pcVar5)(iVar14,1,&local_6c);
                if (local_a4 != 0) {
                  iVar2 = *local_14;
                  if (iVar2 != 0x54584b57) goto LAB_10005158;
                  iVar14 = local_a4 + 0x14;
                  uVar15 = local_14[2];
                  goto LAB_1000590f;
                }
LAB_10006b3a:
                local_74 = 0;
                local_70 = local_78 & 1;
LAB_10006b4a:
                if (((*local_14 == 0x54584b57) && (0x7b < (uint)local_14[2])) &&
                   ((code *)local_14[0x1e] != (code *)0x0)) {
                  (*(code *)local_14[0x1e])();
                }
LAB_10006b64:
                if ((local_a4 != 0) && (*local_14 == 0x54584b57)) {
                  iVar2 = local_a4 + 0x14;
                  uVar15 = local_14[2];
                  if (uVar15 < 0xc4) {
                    if (0x6f < uVar15) goto LAB_10006ba6;
LAB_10006cda:
                    if (0x6b < uVar15) {
LAB_10006e18:
                      pcVar5 = (code *)local_14[0x1a];
                      if (pcVar5 != (code *)0x0) goto LAB_10006e22;
                      goto LAB_10006e54;
                    }
LAB_10006ce3:
                    iVar2 = local_a4 + 0x18;
LAB_10006ce9:
                    if (0x6b < uVar15) {
LAB_10006cf5:
                      pcVar5 = (code *)local_14[0x1a];
                      if (pcVar5 != (code *)0x0) goto LAB_10006cff;
                      goto LAB_10006d2e;
                    }
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) {
LAB_10006ba6:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_10006bb0;
                    }
                    else {
LAB_10006bb0:
                      (*pcVar5)(iVar2,1,1);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      iVar2 = local_a4 + 0x14;
                      uVar15 = local_14[2];
                    }
                    if (uVar15 < 0xc4) {
                      if (0x6f < uVar15) goto LAB_10006c82;
                      goto LAB_10006cda;
                    }
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) {
LAB_10006c82:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_10006c8c;
                    }
                    else {
LAB_10006c8c:
                      (*pcVar5)(iVar2,1,3);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      iVar2 = local_a4 + 0x14;
                      uVar15 = local_14[2];
                    }
                    if (uVar15 < 0xc4) {
                      if (0x6f < uVar15) goto LAB_10006dbc;
                      goto LAB_10006cda;
                    }
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) {
LAB_10006dbc:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_10006dc6;
                    }
                    else {
LAB_10006dc6:
                      (*pcVar5)(iVar2,1,0xb);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      iVar2 = local_a4 + 0x14;
                      uVar15 = local_14[2];
                    }
                    if (uVar15 < 0xc0) goto LAB_10006cda;
                    pcVar5 = (code *)local_14[0x2f];
                    if (pcVar5 == (code *)0x0) goto LAB_10006e18;
LAB_10006e22:
                    (*pcVar5)(iVar2,1,&local_68);
                    if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                    uVar15 = local_14[2];
LAB_10006e54:
                    if (uVar15 < 0xc0) {
                      if (uVar15 < 0x6c) goto LAB_10006ce3;
LAB_10006e74:
                      pcVar5 = (code *)local_14[0x1a];
                      if (pcVar5 != (code *)0x0) goto LAB_10006e7e;
                    }
                    else {
                      pcVar5 = (code *)local_14[0x2f];
                      if (pcVar5 == (code *)0x0) goto LAB_10006e74;
LAB_10006e7e:
                      (*pcVar5)(local_a4 + 0x12,2,&local_64);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      uVar15 = local_14[2];
                    }
                    if (uVar15 < 0xc0) {
                      if (0x6b < uVar15) goto LAB_10006f72;
                      goto LAB_10006ce3;
                    }
                    pcVar5 = (code *)local_14[0x2f];
                    if (pcVar5 == (code *)0x0) {
LAB_10006f72:
                      pcVar5 = (code *)local_14[0x1a];
                      if (pcVar5 != (code *)0x0) goto LAB_10006f7c;
                    }
                    else {
LAB_10006f7c:
                      (*pcVar5)(local_a4 + 0x15,1,&local_50);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      uVar15 = local_14[2];
                    }
                    if (uVar15 < 0xc4) {
                      if (uVar15 < 0x70) goto LAB_10006ce3;
LAB_1000702e:
                      pcVar5 = (code *)local_14[0x1b];
                      if (pcVar5 != (code *)0x0) goto LAB_10007038;
                    }
                    else {
                      pcVar5 = (code *)local_14[0x30];
                      if (pcVar5 == (code *)0x0) goto LAB_1000702e;
LAB_10007038:
                      (*pcVar5)(local_a4 + 0x16,2,0);
                      if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                      uVar15 = local_14[2];
                    }
                    iVar2 = local_a4 + 0x18;
                    if (uVar15 < 0xc0) goto LAB_10006ce9;
                    pcVar5 = (code *)local_14[0x2f];
                    if (pcVar5 == (code *)0x0) goto LAB_10006cf5;
LAB_10006cff:
                    (*pcVar5)(iVar2,2,&local_60);
                    if ((local_a4 != 0) && (*local_14 == 0x54584b57)) {
                      uVar15 = local_14[2];
LAB_10006d2e:
                      if (uVar15 < 0xc0) {
                        if (0x6b < uVar15) goto LAB_10006edd;
                      }
                      else {
                        pcVar5 = (code *)local_14[0x2f];
                        if (pcVar5 == (code *)0x0) {
LAB_10006edd:
                          pcVar5 = (code *)local_14[0x1a];
                          if (pcVar5 != (code *)0x0) goto LAB_10006ee7;
                        }
                        else {
LAB_10006ee7:
                          (*pcVar5)(local_a4 + 0x1c,2,&local_5c);
                          if ((local_a4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007091;
                          uVar15 = local_14[2];
                        }
                        if (uVar15 < 0xc0) {
                          if (0x6b < uVar15) goto LAB_10006fde;
                        }
                        else {
                          pcVar5 = (code *)local_14[0x2f];
                          if (pcVar5 == (code *)0x0) {
LAB_10006fde:
                            pcVar5 = (code *)local_14[0x1a];
                            if (pcVar5 == (code *)0x0) goto LAB_10007091;
                          }
                          iVar2 = (*pcVar5)(local_a4 + 0x1e,2,&local_30);
                          if ((iVar2 != 0) && (local_58 = local_30, local_a0 != 0)) {
                            local_54 = local_30 * local_84 + local_a0;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_10005158:
                if (iVar2 == 0x54584b57) {
LAB_10005167:
                  if ((uint)local_14[2] < 0xc0) {
                    if (0x6b < (uint)local_14[2]) goto LAB_10005ba0;
                    goto LAB_10006aba;
                  }
                  pcVar5 = (code *)local_14[0x2f];
                  if (pcVar5 == (code *)0x0) {
LAB_10005ba0:
                    pcVar5 = (code *)local_14[0x1a];
                    if (pcVar5 == (code *)0x0) goto LAB_10006aba;
                  }
                  (*pcVar5)(local_a4 + 4,4,&local_78);
                  local_74 = 0;
                  local_70 = local_78 & 1;
                  if (local_a4 == 0) goto LAB_10006b4a;
                  iVar2 = *local_14;
                }
                else {
LAB_10006aba:
                  local_74 = 0;
                  local_70 = local_78 & 1;
                }
                local_74 = 0;
                if (iVar2 != 0x54584b57) goto LAB_10006b64;
                uVar15 = local_14[2];
                if (uVar15 < 0xc4) {
                  if (uVar15 < 0x70) goto LAB_10006b4a;
LAB_10006af5:
                  pcVar5 = (code *)local_14[0x1b];
                  if (pcVar5 != (code *)0x0) goto LAB_10006b03;
LAB_10006bff:
                  if (uVar15 < 0xc4) {
                    if (uVar15 < 0x70) goto LAB_10006b4a;
LAB_10006c1f:
                    pcVar5 = (code *)local_14[0x1b];
                    if (pcVar5 != (code *)0x0) goto LAB_10006c29;
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) goto LAB_10006c1f;
LAB_10006c29:
                    (*pcVar5)(local_a4 + 0xc,4,local_74);
                    if (local_a4 == 0) goto LAB_10006b4a;
                    if (*local_14 != 0x54584b57) goto LAB_10007091;
                    uVar15 = local_14[2];
                  }
                  if (uVar15 < 0xc4) {
                    if (uVar15 < 0x70) goto LAB_10006b4a;
LAB_10006d55:
                    pcVar5 = (code *)local_14[0x1b];
                    if (pcVar5 != (code *)0x0) goto LAB_10006d5f;
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) goto LAB_10006d55;
LAB_10006d5f:
                    (*pcVar5)(local_a4 + 8,4,1);
                    if (local_a4 == 0) goto LAB_10006b4a;
                    if (*local_14 != 0x54584b57) goto LAB_10007091;
                    uVar15 = local_14[2];
                  }
                  if (uVar15 < 0xc4) {
                    if (uVar15 < 0x70) goto LAB_10006b4a;
LAB_10006f43:
                    pcVar5 = (code *)local_14[0x1b];
                    if (pcVar5 == (code *)0x0) goto LAB_10006b4a;
                  }
                  else {
                    pcVar5 = (code *)local_14[0x30];
                    if (pcVar5 == (code *)0x0) goto LAB_10006f43;
                  }
                  (*pcVar5)(local_a4 + 0xc,4,local_70);
                  goto LAB_10006b4a;
                }
                pcVar5 = (code *)local_14[0x30];
                if (pcVar5 == (code *)0x0) goto LAB_10006af5;
LAB_10006b03:
                (*pcVar5)(local_a4 + 8,4,0);
                if (local_a4 == 0) goto LAB_10006b4a;
                if (*local_14 == 0x54584b57) {
                  uVar15 = local_14[2];
                  goto LAB_10006bff;
                }
              }
LAB_10007091:
              if (param_4 == 0) {
                if (local_80 != 0) goto LAB_100071d8;
LAB_10007241:
                if (local_94 == 0) goto LAB_10007411;
LAB_10007305:
                uVar15 = 0;
                do {
                  *(byte *)((int)&local_30 + uVar15) =
                       (char)local_94 + (char)(local_94 / 10) * -10 | 0x30;
                  uVar7 = uVar15 + 1;
                  if (8 < uVar15) break;
                  bVar18 = 9 < local_94;
                  local_94 = local_94 / 10;
                  uVar15 = uVar7;
                } while (bVar18);
LAB_1000733e:
                do {
                  uVar15 = uVar7 - 1;
                  if (param_4 == 0) {
                    uVar7 = uVar15;
                    if (uVar15 == 0) goto LAB_10007411;
                    goto LAB_1000733e;
                  }
                  uVar4 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar4);
                    uVar4 = uVar4 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar4 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar4) =
                         *(undefined1 *)((int)&local_34 + uVar7 + 3);
                    *(undefined1 *)(param_4 + uVar4) = 0;
                  }
                  uVar7 = uVar15;
                } while (uVar15 != 0);
              }
              else {
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10008ae4;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'm';
                  pcVar8 = str_10008af4;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10008ad9;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                if (local_80 == 0) {
                  uVar15 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar15);
                    uVar15 = uVar15 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                  }
                }
                else {
LAB_100071d8:
                  uVar15 = 0;
                  do {
                    *(byte *)((int)&local_30 + uVar15) =
                         (char)local_80 + (char)(local_80 / 10) * -10 | 0x30;
                    uVar7 = uVar15 + 1;
                    if (8 < uVar15) break;
                    bVar18 = 9 < local_80;
                    local_80 = local_80 / 10;
                    uVar15 = uVar7;
                  } while (bVar18);
LAB_10007211:
                  do {
                    uVar15 = uVar7 - 1;
                    if (param_4 == 0) {
                      uVar7 = uVar15;
                      if (uVar15 == 0) goto LAB_10007241;
                      goto LAB_10007211;
                    }
                    uVar4 = 0;
                    do {
                      pcVar8 = (char *)(param_4 + uVar4);
                      uVar4 = uVar4 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar4 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar4) =
                           *(undefined1 *)((int)&local_34 + uVar7 + 3);
                      *(undefined1 *)(param_4 + uVar4) = 0;
                    }
                    uVar7 = uVar15;
                  } while (uVar15 != 0);
                }
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10008afb;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                if (local_94 != 0) goto LAB_10007305;
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                }
              }
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b0b;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10007411:
              iVar2 = 8;
LAB_1000741f:
              do {
                uVar15 = local_a4 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                bVar12 = (byte)uVar15;
                if (uVar15 < 10) {
                  bVar12 = bVar12 | 0x30;
                }
                else {
                  bVar12 = bVar12 + 0x37;
                }
                PF_PART2(local_30, 0) = (ushort)(byte)local_30;
                if (param_4 == 0) goto LAB_10007418;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  pbVar17 = (byte *)((int)&local_30 + 1);
                  do {
                    *(byte *)(param_4 + uVar7) = bVar12;
                    uVar7 = uVar7 + 1;
                    bVar12 = *pbVar17;
                    if (bVar12 == 0) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b18;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_1000750b:
              iVar2 = 8;
LAB_10007515:
              do {
                uVar15 = local_7c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                bVar12 = (byte)uVar15;
                if (uVar15 < 10) {
                  bVar12 = bVar12 | 0x30;
                }
                else {
                  bVar12 = bVar12 + 0x37;
                }
                if (param_4 == 0) goto LAB_1000755b;
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar15) = bVar12;
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b2e;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_100075d9:
              iVar2 = 8;
LAB_100075e3:
              uVar15 = local_78 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) {
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) goto LAB_100076a9;
                goto LAB_100075e3;
              }
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
              if (iVar2 != 0) goto LAB_100075e3;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b44;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_100076a9:
              iVar2 = 8;
LAB_100076b3:
              uVar15 = local_74 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) {
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) goto LAB_10007779;
                goto LAB_100076b3;
              }
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
              if (iVar2 != 0) goto LAB_100076b3;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b5a;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10007779:
              iVar2 = 8;
LAB_10007783:
              uVar15 = local_70 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) {
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) goto LAB_10007849;
                goto LAB_10007783;
              }
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
              if (iVar2 != 0) goto LAB_10007783;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b70;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10007849:
              iVar2 = 8;
LAB_10007853:
              uVar15 = local_6c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) {
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) goto LAB_10007919;
                goto LAB_10007853;
              }
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
              if (iVar2 != 0) goto LAB_10007853;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008b89;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10007919:
              iVar2 = 8;
LAB_10007923:
              uVar15 = local_68 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) {
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) goto code_r0x1000796e;
                goto LAB_10007923;
              }
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
              if (iVar2 != 0) goto LAB_10007923;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008ba1;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              if (local_64 == 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                }
              }
              else {
LAB_10007a09:
                uVar15 = 0;
                do {
                  *(byte *)((int)&local_30 + uVar15) =
                       (char)local_64 + (char)(local_64 / 10) * -10 | 0x30;
                  uVar7 = uVar15 + 1;
                  if (8 < uVar15) break;
                  bVar18 = 9 < local_64;
                  local_64 = local_64 / 10;
                  uVar15 = uVar7;
                } while (bVar18);
                do {
                  while (uVar15 = uVar7 - 1, param_4 == 0) {
                    uVar7 = uVar15;
                    if (uVar15 == 0) goto LAB_10007a71;
                  }
                  uVar4 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar4);
                    uVar4 = uVar4 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar4 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar4) =
                         *(undefined1 *)((int)&local_34 + uVar7 + 3);
                    *(undefined1 *)(param_4 + uVar4) = 0;
                  }
                  uVar7 = uVar15;
                } while (uVar15 != 0);
              }
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008bae;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              if (local_60 == 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                }
              }
              else {
LAB_10007b2a:
                uVar15 = 0;
                do {
                  *(byte *)((int)&local_30 + uVar15) =
                       (char)local_60 + (char)(local_60 / 10) * -10 | 0x30;
                  uVar7 = uVar15 + 1;
                  if (8 < uVar15) break;
                  bVar18 = 9 < local_60;
                  local_60 = local_60 / 10;
                  uVar15 = uVar7;
                } while (bVar18);
                do {
                  while (uVar15 = uVar7 - 1, param_4 == 0) {
                    uVar7 = uVar15;
                    if (uVar15 == 0) goto LAB_10007ba1;
                  }
                  uVar4 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar4);
                    uVar4 = uVar4 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar4 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar4) =
                         *(undefined1 *)((int)&local_34 + uVar7 + 3);
                    *(undefined1 *)(param_4 + uVar4) = 0;
                  }
                  uVar7 = uVar15;
                } while (uVar15 != 0);
              }
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008bbf;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              if (local_5c == 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                }
              }
              else {
LAB_10007c6a:
                uVar15 = 0;
                do {
                  *(byte *)((int)&local_30 + uVar15) = (byte)(local_5c % 10) | 0x30;
                  uVar7 = uVar15 + 1;
                  if (8 < uVar15) break;
                  bVar18 = 9 < local_5c;
                  local_5c = local_5c / 10;
                  uVar15 = uVar7;
                } while (bVar18);
                do {
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      pcVar8 = (char *)(param_4 + uVar15);
                      uVar15 = uVar15 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar15 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar15) =
                           *(undefined1 *)((int)&local_34 + uVar7 + 3);
                      *(undefined1 *)(param_4 + uVar15) = 0;
                    }
                  }
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              local_18 = (ushort *)local_54;
              if (local_54 != 0) {
                if (param_4 == 0) {
LAB_10007d1e:
                  local_18 = (ushort *)local_54;
                  if (local_90 != 0) goto LAB_10007d97;
                }
                else {
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10008bd3;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  if (local_90 == 0) {
                    uVar15 = 0;
                    do {
                      pcVar8 = (char *)(param_4 + uVar15);
                      uVar15 = uVar15 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar15 < 0x400) {
                      *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
                    }
                  }
                  else {
LAB_10007d97:
                    local_18 = (ushort *)local_54;
                    uVar15 = 0;
                    do {
                      *(byte *)((int)&local_30 + uVar15) =
                           (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
                      uVar7 = uVar15 + 1;
                      if (8 < uVar15) break;
                      bVar18 = 9 < local_90;
                      uVar15 = uVar7;
                      local_90 = local_90 / 10;
                    } while (bVar18);
                    do {
                      while (uVar15 = uVar7 - 1, param_4 == 0) {
                        uVar7 = uVar15;
                        if (uVar15 == 0) goto LAB_10007e9b;
                      }
                      uVar4 = 0;
                      do {
                        pcVar8 = (char *)(param_4 + uVar4);
                        uVar4 = uVar4 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar4 < 0x400) {
                        *(undefined1 *)(param_4 + -1 + uVar4) =
                             *(undefined1 *)((int)&local_34 + uVar7 + 3);
                        *(undefined1 *)(param_4 + uVar4) = 0;
                      }
                      uVar7 = uVar15;
                    } while (uVar15 != 0);
                  }
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10008be3;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
LAB_10007e9b:
                iVar2 = 8;
LAB_10007ea5:
                do {
                  uVar15 = local_84 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  if (param_4 == 0) goto LAB_10007eeb;
                  uVar15 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar15);
                    uVar15 = uVar15 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar15 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar15) = bVar12;
                    *(undefined1 *)(param_4 + uVar15) = 0;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10008bfa;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10007f60:
                iVar2 = 8;
                do {
                  uVar15 = (uint)local_18 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  PF_PART2(local_30, 0) = (ushort)(byte)local_30;
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      uVar7 = uVar15;
                      uVar15 = uVar7 + 1;
                    } while (*(char *)(param_4 + uVar7) != '\0');
                    if (uVar7 + 1 < 0x400) {
                      pbVar17 = (byte *)((int)&local_30 + 1);
                      do {
                        *(byte *)(param_4 + uVar7) = bVar12;
                        uVar7 = uVar7 + 1;
                        bVar12 = *pbVar17;
                        if (bVar12 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar7 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar7) = 0;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              if (local_9c != 0) {
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10008c0d;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
LAB_1000805b:
                iVar2 = 8;
                do {
                  uVar15 = local_9c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  PF_PART2(local_30, 0) = (ushort)(byte)local_30;
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      uVar7 = uVar15;
                      uVar15 = uVar7 + 1;
                    } while (*(char *)(param_4 + uVar7) != '\0');
                    if (uVar7 + 1 < 0x400) {
                      pbVar17 = (byte *)((int)&local_30 + 1);
                      do {
                        *(byte *)(param_4 + uVar7) = bVar12;
                        uVar7 = uVar7 + 1;
                        bVar12 = *pbVar17;
                        if (bVar12 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar7 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar7) = 0;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              if (local_98 != 0) {
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10008c17;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
LAB_1000815b:
                iVar2 = 8;
                do {
                  uVar15 = local_98 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  PF_PART2(local_30, 0) = (ushort)(byte)local_30;
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      uVar7 = uVar15;
                      uVar15 = uVar7 + 1;
                    } while (*(char *)(param_4 + uVar7) != '\0');
                    if (uVar7 + 1 < 0x400) {
                      pbVar17 = (byte *)((int)&local_30 + 1);
                      do {
                        *(byte *)(param_4 + uVar7) = bVar12;
                        uVar7 = uVar7 + 1;
                        bVar12 = *pbVar17;
                        if (bVar12 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar7 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar7) = 0;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              if (param_4 == 0) goto LAB_1000836b;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008c2a;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              if (local_50 != 0) goto LAB_1000836f;
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
              }
LAB_1000828a:
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              pcVar8 = str_10008c59;
              if ((local_68 & 8) != 0) {
                pcVar8 = str_10008c4d;
              }
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar11 = str_10008c41;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar11;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if ((uVar7 + 1 < 0x400) && (cVar9 = *pcVar8, cVar9 != '\0')) {
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
LAB_100083e1:
              uVar15 = 1;
              goto LAB_100083f0;
            }
          }
          if (local_80 != 0) {
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008ad9;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
            }
            uVar15 = 0;
            uVar7 = local_80;
            do {
              *(byte *)((int)&local_30 + uVar15) = (byte)(uVar7 % 10) | 0x30;
              uVar4 = uVar15 + 1;
              if (8 < uVar15) break;
              bVar18 = 9 < uVar7;
              uVar15 = uVar4;
              uVar7 = uVar7 / 10;
            } while (bVar18);
            do {
              if (param_4 != 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) =
                       *(undefined1 *)((int)&local_34 + uVar4 + 3);
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
              }
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (local_18[3] < 0x1040) {
            uVar15 = 0;
            bVar18 = true;
            puVar10 = local_18;
LAB_10004a3e:
            local_30 = 0;
            local_20 = 0;
            if ((*(uint *)(puVar10 + uVar15 * 2 + 10) & 1) == 0) goto LAB_10004a30;
            if ((((char)local_24 != '\0') || (*local_14 != 0x54584b57)) ||
               ((uint)local_14[2] < 0x58)) goto LAB_10004a30;
            if ((code *)local_14[0x15] == (code *)0x0) goto LAB_10004a30;
            uVar7 = *(uint *)(puVar10 + uVar15 * 2 + 10) & 0xfffffffc;
            local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar18);
            local_34 = uVar7 + 0x12 & 0xffff;
            iVar2 = (*(code *)local_14[0x15])(local_34,1,&local_30);
            puVar10 = local_18;
            if (iVar2 == 0) goto LAB_10004a30;
            if (param_4 == 0) {
              if (uVar15 != 0) goto LAB_10005474;
              goto LAB_100056e7;
            }
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar4 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar4) = 0x20;
              uVar3 = uVar4;
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar3 + 1 < 0x400) {
              cVar9 = 'v';
              pcVar8 = str_10008ae4;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar3) = cVar9;
                uVar3 = uVar3 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar3 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar4 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar4) = 0x3d;
              uVar3 = uVar4;
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar3 + 1 < 0x400) {
              cVar9 = 'l';
              pcVar8 = str_10008c66;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar3) = cVar9;
                uVar3 = uVar3 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar3 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar3 + 1 < 0x400) {
              cVar9 = ' ';
              pcVar8 = str_10008c70;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar3) = cVar9;
                uVar3 = uVar3 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar3 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            if (uVar15 == 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
              }
LAB_10005677:
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar4 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10008c84;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar4) = cVar9;
                  uVar4 = uVar4 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar4 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
            }
            else {
LAB_10005474:
              uVar4 = 0;
              do {
                *(byte *)((int)&local_a4 + uVar4) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
                uVar3 = uVar4 + 1;
                if (8 < uVar4) break;
                bVar18 = 9 < uVar15;
                uVar4 = uVar3;
                uVar15 = uVar15 / 10;
              } while (bVar18);
              do {
                while (uVar15 = uVar3 - 1, param_4 != 0) {
                  uVar4 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar4);
                    uVar4 = uVar4 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar4 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar4) =
                         *(undefined1 *)((int)&local_a8 + uVar3 + 3);
                    *(undefined1 *)(param_4 + uVar4) = 0;
                  }
                  uVar3 = uVar15;
                  if (uVar15 == 0) goto LAB_10005677;
                }
                uVar3 = uVar15;
              } while (uVar15 != 0);
            }
LAB_100056e7:
            piVar13 = local_14;
            uVar15 = local_34;
            iVar2 = 8;
LAB_100056f1:
            uVar4 = uVar7 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar4;
            if (uVar4 < 10) {
              bVar12 = bVar12 | 0x30;
            }
            else {
              bVar12 = bVar12 + 0x37;
            }
            if (param_4 == 0) {
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_100057b9;
              goto LAB_100056f1;
            }
            uVar4 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar4);
              uVar4 = uVar4 + 1;
            } while (*pcVar8 != '\0');
            if (uVar4 < 0x400) {
              *(byte *)(param_4 + -1 + uVar4) = bVar12;
              *(undefined1 *)(param_4 + uVar4) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_100056f1;
            uVar7 = 0;
            do {
              uVar4 = uVar7;
              uVar7 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar7 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar7) = 0x20;
              uVar4 = uVar7;
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            uVar7 = 0;
            do {
              uVar4 = uVar7;
              uVar7 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar4 + 1 < 0x400) {
              cVar9 = 'v';
              pcVar8 = str_10008c93;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar4) = cVar9;
                uVar4 = uVar4 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar4 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            uVar7 = 0;
            do {
              uVar4 = uVar7;
              uVar7 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar7 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar7) = 0x3d;
              uVar4 = uVar7;
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
LAB_100057b9:
            iVar2 = 8;
            do {
              uVar7 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar7;
              if (uVar7 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 != 0) {
                uVar7 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (*pcVar8 != '\0');
                if (uVar7 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar7) = bVar12;
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if (*local_14 == 0x54584b57) {
              uVar7 = local_14[2];
              if (uVar7 < 0x5c) {
LAB_10005822:
                if (uVar7 < 0x58) goto LAB_10006567;
              }
              else if ((code *)local_14[0x16] != (code *)0x0) {
                (*(code *)local_14[0x16])(local_34,1,0);
                if (*piVar13 != 0x54584b57) goto LAB_10006567;
                uVar7 = piVar13[2];
                if (0x5b < uVar7) {
                  if ((code *)piVar13[0x16] == (code *)0x0) goto LAB_1000587a;
                  (*(code *)piVar13[0x16])(uVar15,1,3);
                  if (*piVar13 != 0x54584b57) goto LAB_10006567;
                  uVar7 = piVar13[2];
                }
                goto LAB_10005822;
              }
LAB_1000587a:
              if (((code *)piVar13[0x15] != (code *)0x0) &&
                 (iVar2 = (*(code *)piVar13[0x15])(uVar15,1,&local_20), iVar2 != 0)) {
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10008ca6;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
                iVar2 = 8;
                do {
                  uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      pcVar8 = (char *)(param_4 + uVar15);
                      uVar15 = uVar15 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar15 < 0x400) {
                      *(byte *)(param_4 + -1 + uVar15) = bVar12;
                      *(undefined1 *)(param_4 + uVar15) = 0;
                    }
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
            }
LAB_10006567:
            if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_100049d6;
            uVar15 = local_1c & 1;
            goto LAB_100083f0;
          }
LAB_100049c9:
          uVar15 = 0;
          if (param_4 != 0) {
LAB_100049d6:
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = ' ';
              pcVar8 = str_10008abd;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
          }
        }
      }
LAB_100083f0:
      uVar15 = uVar15 | local_4c;
      goto LAB_100083f3;
    }
  }
  else {
    uVar15 = 0xffffffff;
    if (in_EDX[2] == 0x1af4) {
      uVar15 = (uint)in_EDX[3];
      in_EAX = uVar15 & 0xffffffc0;
      if (in_EAX == 0x1000) {
        uVar15 = uVar15 - 0x1000;
      }
      else if (in_EAX == 0x1040) {
        uVar15 = uVar15 - 0x1040;
      }
      else {
        uVar15 = 0xffffffff;
      }
    }
    bVar18 = uVar15 == 0xffffffff;
    local_a4 = 0;
    local_30 = 0;
    if (in_ECX == (int *)0x0) {
      local_24 = CONCAT31((int3)(in_EAX >> 8),1);
joined_r0x10002da3:
      if (param_4 != 0) goto LAB_10002da9;
LAB_10003225:
      local_4c = 0;
      goto joined_r0x10002df5;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_24 = 0;
      goto joined_r0x10002da3;
    }
    local_1c = uVar15;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_10002fe9:
      local_24 = 0;
      if (param_4 == 0) goto LAB_10003225;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_10008a53;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
    }
    else {
      local_24 = (uint)(byte)in_EDX[1];
      local_14 = in_ECX;
      iVar2 = (*(code *)in_ECX[0x17])
                        ((char)*in_EDX,*(undefined1 *)((int)in_EDX + 1),local_24,4,2,&local_a4);
      piVar13 = local_14;
      if (iVar2 == 0) goto LAB_10002fe9;
      if ((*(uint *)(local_18 + 10) & 1) == 0) {
        uVar15 = (uint)(*(uint *)(local_18 + 10) != 0) * 2;
      }
      else {
        uVar15 = 1;
      }
      uVar7 = uVar15;
      if (*(uint *)(local_18 + 0xc) != 0) {
        uVar7 = uVar15 | 2;
      }
      if ((*(uint *)(local_18 + 0xc) & 1) != 0) {
        uVar7 = uVar15 | 1;
      }
      uVar15 = uVar7;
      if (*(uint *)(local_18 + 0xe) != 0) {
        uVar15 = uVar7 | 2;
      }
      if ((*(uint *)(local_18 + 0xe) & 1) != 0) {
        uVar15 = uVar7 | 1;
      }
      uVar7 = uVar15;
      if (*(uint *)(local_18 + 0x10) != 0) {
        uVar7 = uVar15 | 2;
      }
      if ((*(uint *)(local_18 + 0x10) & 1) != 0) {
        uVar7 = uVar15 | 1;
      }
      uVar15 = uVar7;
      if (*(uint *)(local_18 + 0x12) != 0) {
        uVar15 = uVar7 | 2;
      }
      if ((*(uint *)(local_18 + 0x12) & 1) != 0) {
        uVar15 = uVar7 | 1;
      }
      uVar7 = uVar15;
      if (*(uint *)(local_18 + 0x14) != 0) {
        uVar7 = uVar15 | 2;
      }
      if ((*(uint *)(local_18 + 0x14) & 1) != 0) {
        uVar7 = uVar15 | 1;
      }
      local_24 = uVar7 | 4;
      if (((char)local_18[4] == '\x06') && (*(char *)((int)local_18 + 9) != '\0')) {
        local_24 = uVar7 | 6;
      }
      local_30 = local_a4 | local_24;
      if ((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) {
        if ((code *)in_ECX[0x18] != (code *)0x0) {
          local_34 = CONCAT31(PF_PART3(local_34, 1),(char)*local_18);
          local_4c = (uint)*(byte *)((int)local_18 + 1);
          iVar2 = (*(code *)in_ECX[0x18])
                            ((char)*local_18,local_4c,(char)local_18[1],4,2,local_a4 | local_24);
          piVar16 = local_14;
          in_ECX = piVar13;
          if (iVar2 != 0) {
            if (((*piVar13 == 0x54584b57) && (0x5f < (uint)piVar13[2])) &&
               ((code *)piVar13[0x17] != (code *)0x0)) {
              (*(code *)piVar13[0x17])
                        ((char)*local_18,*(undefined1 *)((int)local_18 + 1),(char)local_18[1],4,2,
                         &local_30);
              in_ECX = piVar16;
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'p';
                pcVar8 = str_10008a84;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
            }
            iVar2 = 8;
LAB_10004e53:
            uVar15 = local_a4 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar15;
            if (uVar15 < 10) {
              bVar12 = bVar12 | 0x30;
              if (param_4 != 0) goto LAB_10004e70;
LAB_10004ea2:
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_10004f20;
              goto LAB_10004e53;
            }
            bVar12 = bVar12 + 0x37;
            if (param_4 == 0) goto LAB_10004ea2;
LAB_10004e70:
            uVar15 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar15);
              uVar15 = uVar15 + 1;
            } while (*pcVar8 != '\0');
            if (uVar15 < 0x400) {
              *(byte *)(param_4 + -1 + uVar15) = bVar12;
              *(undefined1 *)(param_4 + uVar15) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_10004e53;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'p';
              pcVar8 = str_10008a95;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10004f20:
            iVar2 = 8;
LAB_10004f2a:
            uVar15 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar15;
            if (uVar15 < 10) {
              bVar12 = bVar12 | 0x30;
              if (param_4 != 0) goto LAB_10004f47;
LAB_10004f72:
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_10004fea;
              goto LAB_10004f2a;
            }
            bVar12 = bVar12 + 0x37;
            if (param_4 == 0) goto LAB_10004f72;
LAB_10004f47:
            uVar15 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar15);
              uVar15 = uVar15 + 1;
            } while (*pcVar8 != '\0');
            if (uVar15 < 0x400) {
              *(byte *)(param_4 + -1 + uVar15) = bVar12;
              *(undefined1 *)(param_4 + uVar15) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_10004f2a;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'p';
              pcVar8 = str_10008aa5;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10004fea:
            bVar12 = (byte)(local_24 >> 0x18);
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12 >> 4 | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12 & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)(local_24 >> 0x14) & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)(local_24 >> 0x10) & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)(local_24 >> 0xc) & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)(local_24 >> 8) & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)local_24 >> 4 | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = (byte)local_24 & 0xf | 0x30;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
            }
            local_4c = (uint)((local_24 & ~local_30) == 0);
            local_24 = 0;
            goto LAB_10003219;
          }
        }
      }
      local_24 = 0;
      if (param_4 == 0) goto LAB_10003225;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_10008a6b;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
    }
    local_4c = 0;
    *(undefined1 *)(param_4 + uVar7) = 0;
    local_24 = 0;
LAB_10003219:
    local_24 = 0;
    if (local_1c != 0xffffffff) goto LAB_10003236;
  }
  local_20 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  if (local_18 != (ushort *)0x0) {
    if (((char)local_18[4] == '\x01') && (*(char *)((int)local_18 + 9) == '\x06')) {
      if (((*(uint *)(local_18 + 0x12) & 7) != 4) &&
         ((((uVar15 = *(uint *)(local_18 + 0x14), (uVar15 & 6) != 4 && (uVar15 != 0)) &&
           ((uVar15 & 1) == 0)) && (uVar15 = uVar15 & 0xfffffff0, uVar15 != 0)))) {
        local_30 = 0;
        local_a4 = 0;
        if (((char)local_24 == '\0') && (*in_ECX == 0x54584b57)) {
          if (0xbb < (uint)in_ECX[2]) {
            if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_100044e9;
            iVar2 = (*(code *)in_ECX[0x2e])(uVar15,0,0x1000,&local_30);
            if (iVar2 == 0) goto LAB_10002e3c;
            local_1c = local_30;
LAB_1000451f:
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'a';
                pcVar8 = str_10008cce;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
            }
            iVar2 = 8;
            do {
              uVar15 = local_1c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              if (uVar15 < 10) {
                uVar15 = uVar15 | 0x30;
              }
              else {
                uVar15 = (uint)(byte)((char)uVar15 + 0x37);
              }
              PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
              if (param_4 != 0) {
                uVar7 = 0;
                do {
                  uVar4 = uVar7;
                  uVar7 = uVar4 + 1;
                } while (*(char *)(param_4 + uVar4) != '\0');
                if (uVar4 + 1 < 0x400) {
                  pbVar17 = (byte *)((int)&local_a4 + 1);
                  do {
                    *(char *)(param_4 + uVar4) = (char)uVar15;
                    uVar4 = uVar4 + 1;
                    uVar15 = (uint)*pbVar17;
                    if (*pbVar17 == 0) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar4 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar4) = 0;
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            local_30 = local_1c;
            if ((local_1c != 0) && (*in_ECX == 0x54584b57)) {
              if ((uint)in_ECX[2] < 0xc0) {
                if (0x6b < (uint)in_ECX[2]) goto LAB_10005c0f;
              }
              else {
                pcVar5 = (code *)in_ECX[0x2f];
                if (pcVar5 == (code *)0x0) {
LAB_10005c0f:
                  pcVar5 = (code *)in_ECX[0x1a];
                  if (pcVar5 == (code *)0x0) goto LAB_10005c41;
                }
                (*pcVar5)(local_1c,4,&local_20);
                local_1c = local_30;
                if ((local_30 == 0) || (*in_ECX != 0x54584b57)) goto LAB_100065de;
              }
LAB_10005c41:
              if ((uint)in_ECX[2] < 0xc0) {
                if (0x6b < (uint)in_ECX[2]) goto LAB_100060fa;
              }
              else {
                pcVar5 = (code *)in_ECX[0x2f];
                if (pcVar5 == (code *)0x0) {
LAB_100060fa:
                  pcVar5 = (code *)in_ECX[0x1a];
                  if (pcVar5 == (code *)0x0) goto LAB_10006130;
                }
                local_30 = local_1c;
                (*pcVar5)(local_1c + 4,4,&local_38);
                local_1c = local_30;
                if ((local_30 == 0) || (*in_ECX != 0x54584b57)) goto LAB_100065de;
              }
LAB_10006130:
              if ((uint)in_ECX[2] < 0xc0) {
                if (0x6b < (uint)in_ECX[2]) goto LAB_10006472;
              }
              else {
                pcVar5 = (code *)in_ECX[0x2f];
                if (pcVar5 == (code *)0x0) {
LAB_10006472:
                  pcVar5 = (code *)in_ECX[0x1a];
                  if (pcVar5 == (code *)0x0) goto LAB_100064a8;
                }
                local_30 = local_1c;
                (*pcVar5)(local_1c + 0xc,4,&local_3c);
                local_1c = local_30;
                if ((local_30 == 0) || (*in_ECX != 0x54584b57)) goto LAB_100065de;
              }
LAB_100064a8:
              local_30 = local_1c;
              if ((uint)in_ECX[2] < 0xc0) {
                if (0x6b < (uint)in_ECX[2]) goto LAB_100065c2;
              }
              else {
                pcVar5 = (code *)in_ECX[0x2f];
                if (pcVar5 == (code *)0x0) {
LAB_100065c2:
                  pcVar5 = (code *)in_ECX[0x1a];
                  if (pcVar5 == (code *)0x0) goto LAB_100065de;
                }
                (*pcVar5)(local_1c + 0x10,4,&local_40);
              }
            }
LAB_100065de:
            if ((((int)local_38 < 0) || (local_30 == 0)) || (*in_ECX != 0x54584b57))
            goto LAB_10006682;
            iVar2 = local_30 + 4;
            uVar15 = in_ECX[2];
            if (uVar15 < 0xc4) {
              if (0x6f < uVar15) goto LAB_1000661f;
LAB_10006658:
              if (uVar15 < 0x6c) goto LAB_10006682;
LAB_1000666c:
              pcVar5 = (code *)in_ECX[0x1a];
              if (pcVar5 == (code *)0x0) goto LAB_10006682;
            }
            else {
              pcVar5 = (code *)in_ECX[0x30];
              if (pcVar5 == (code *)0x0) {
LAB_1000661f:
                pcVar5 = (code *)in_ECX[0x1b];
                if (pcVar5 != (code *)0x0) goto LAB_10006626;
              }
              else {
LAB_10006626:
                (*pcVar5)(iVar2,4,local_38 | 0x80000000);
                if ((local_30 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10006682;
                iVar2 = local_30 + 4;
              }
              uVar15 = in_ECX[2];
              if (uVar15 < 0xc0) goto LAB_10006658;
              pcVar5 = (code *)in_ECX[0x2f];
              if (pcVar5 == (code *)0x0) goto LAB_1000666c;
            }
            (*pcVar5)(iVar2,4,&local_38);
LAB_10006682:
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar7 + 1 < 0x400) {
                cVar9 = 'a';
                pcVar8 = &DAT_10008cd8;
                do {
                  *(char *)(param_4 + uVar7) = cVar9;
                  uVar7 = uVar7 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                  pcVar8 = pcVar8 + 1;
                } while (uVar7 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
              uVar15 = 0;
              do {
                uVar7 = uVar15;
                uVar15 = uVar7 + 1;
              } while (*(char *)(param_4 + uVar7) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar7 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar7) = 0;
            }
            iVar2 = 8;
LAB_10006703:
            do {
              uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 == 0) goto LAB_1000674b;
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(byte *)(param_4 + -1 + uVar15) = bVar12;
                *(undefined1 *)(param_4 + uVar15) = 0;
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'a';
              pcVar8 = &DAT_10008ce0;
              do {
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
                pcVar8 = pcVar8 + 1;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_100067c9:
            iVar2 = 8;
LAB_100067d3:
            uVar15 = local_38 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar15;
            if (uVar15 < 10) {
              bVar12 = bVar12 | 0x30;
            }
            else {
              bVar12 = bVar12 + 0x37;
            }
            if (param_4 == 0) {
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_10006899;
              goto LAB_100067d3;
            }
            uVar15 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar15);
              uVar15 = uVar15 + 1;
            } while (*pcVar8 != '\0');
            if (uVar15 < 0x400) {
              *(byte *)(param_4 + -1 + uVar15) = bVar12;
              *(undefined1 *)(param_4 + uVar15) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_100067d3;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'a';
              pcVar8 = str_10008ce7;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10006899:
            iVar2 = 8;
LAB_100068a3:
            uVar15 = local_3c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar15;
            if (uVar15 < 10) {
              bVar12 = bVar12 | 0x30;
            }
            else {
              bVar12 = bVar12 + 0x37;
            }
            if (param_4 == 0) {
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_10006969;
              goto LAB_100068a3;
            }
            uVar15 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar15);
              uVar15 = uVar15 + 1;
            } while (*pcVar8 != '\0');
            if (uVar15 < 0x400) {
              *(byte *)(param_4 + -1 + uVar15) = bVar12;
              *(undefined1 *)(param_4 + uVar15) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_100068a3;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'a';
              pcVar8 = str_10008cf1;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10006969:
            iVar2 = 8;
            do {
              uVar15 = local_40 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 != 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar15) = bVar12;
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
              }
              iVar2 = iVar2 + -1;
              uVar7 = 1;
            } while (iVar2 != 0);
            goto LAB_10002eae;
          }
          if (0x67 < (uint)in_ECX[2]) {
LAB_100044e9:
            if (((code *)in_ECX[0x19] != (code *)0x0) &&
               (iVar2 = (*(code *)in_ECX[0x19])(uVar15,0,0x1000,&local_a4), iVar2 != 0)) {
              local_1c = local_a4;
              local_30 = local_a4;
              goto LAB_1000451f;
            }
          }
        }
      }
LAB_10002e3c:
      if (param_4 == 0) goto LAB_10002e9e;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_10008cb8;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar7 = 0;
    }
    else {
LAB_10002e9e:
      uVar7 = 0;
    }
LAB_10002eae:
    local_20 = 0;
    local_38 = 0;
    local_3c = 0;
    local_14 = in_ECX;
    if (((char)local_18[4] == '\x04') && (*(char *)((int)local_18 + 9) == '\x03')) {
      uVar15 = *(uint *)(local_18 + 10);
      if ((uVar15 & 1) == 0 && uVar15 != 0) {
        iVar2 = 0;
        if ((uVar15 & 6) == 4) {
          iVar2 = *(int *)(local_18 + 0xc);
        }
        uVar15 = uVar15 & 0xfffffff0;
        if (uVar15 != 0 || iVar2 != 0) {
          local_30 = 0;
          local_a4 = 0;
          if (((char)local_24 == '\0') && (*in_ECX == 0x54584b57)) {
            if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
              if (((0x67 < (uint)in_ECX[2] && iVar2 == 0) && ((code *)in_ECX[0x19] != (code *)0x0))
                 && (iVar2 = (*(code *)in_ECX[0x19])(uVar15,0,0x1000,&local_a4), iVar2 != 0)) {
                local_34 = uVar7;
                local_30 = local_a4;
                goto LAB_10003ae1;
              }
            }
            else {
              iVar2 = (*(code *)in_ECX[0x2e])(uVar15,iVar2,0x1000,&local_30);
              in_ECX = local_14;
              if (iVar2 != 0) {
                local_34 = uVar7;
LAB_10003ae1:
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    uVar4 = uVar15;
                    uVar15 = uVar4 + 1;
                  } while (*(char *)(param_4 + uVar4) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar4 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar4) = 0;
                  uVar15 = 0;
                  do {
                    uVar4 = uVar15;
                    uVar15 = uVar4 + 1;
                  } while (*(char *)(param_4 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x400) {
                    cVar9 = 'h';
                    pcVar8 = &DAT_10008d13;
                    do {
                      *(char *)(param_4 + uVar4) = cVar9;
                      uVar4 = uVar4 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                      pcVar8 = pcVar8 + 1;
                    } while (uVar4 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar4) = 0;
                  uVar15 = 0;
                  do {
                    uVar4 = uVar15;
                    uVar15 = uVar4 + 1;
                  } while (*(char *)(param_4 + uVar4) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar4 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar4) = 0;
                }
                iVar2 = 8;
                do {
                  uVar15 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      uVar4 = uVar15;
                      uVar15 = uVar4 + 1;
                    } while (*(char *)(param_4 + uVar4) != '\0');
                    if (uVar4 + 1 < 0x400) {
                      pbVar17 = (byte *)((int)&local_a4 + 1);
                      do {
                        *(byte *)(param_4 + uVar4) = bVar12;
                        uVar4 = uVar4 + 1;
                        bVar12 = *pbVar17;
                        if (bVar12 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar4 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar4) = 0;
                    in_ECX = local_14;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                uVar15 = 0;
                local_34 = uVar7;
                if (local_30 == 0) {
LAB_10005d93:
                }
                else if (*in_ECX == 0x54584b57) {
                  if ((uint)in_ECX[2] < 0xc0) {
                    if (0x6b < (uint)in_ECX[2]) goto LAB_10005933;
LAB_10005be7:
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_10005d73;
LAB_10005d91:
                      uVar15 = local_30;
                    }
                    else {
                      pcVar5 = (code *)in_ECX[0x2f];
                      if (pcVar5 == (code *)0x0) {
LAB_10005d73:
                        pcVar5 = (code *)in_ECX[0x1a];
                        if (pcVar5 == (code *)0x0) goto LAB_10005d91;
                      }
                      (*pcVar5)(local_30 + 8,4,&local_38);
                      uVar15 = local_30;
                    }
                    goto LAB_10005d93;
                  }
                  pcVar5 = (code *)in_ECX[0x2f];
                  if (pcVar5 == (code *)0x0) {
LAB_10005933:
                    pcVar5 = (code *)in_ECX[0x1a];
                    if (pcVar5 == (code *)0x0) goto LAB_10005be7;
                  }
                  (*pcVar5)(local_30,4,&local_20);
                  uVar15 = 0;
                  if (local_30 != 0) {
                    uVar15 = local_30;
                    if (*in_ECX == 0x54584b57) goto LAB_10005be7;
                  }
                }
                else {
                  uVar15 = local_30;
                }
                if ((local_38 & 1) == 0) {
                  uVar7 = 0;
                  if (uVar15 != 0) {
                    if (*in_ECX != 0x54584b57) goto LAB_10005e0e;
                    local_1c = uVar15 + 8;
                    uVar4 = in_ECX[2];
                    if (uVar4 < 0xc4) {
                      if (0x6f < uVar4) goto LAB_10006092;
LAB_100060e0:
                      uVar7 = uVar15;
                      if (0x6b < uVar4) {
LAB_10006592:
                        pcVar5 = (code *)in_ECX[0x1a];
                        uVar7 = uVar15;
                        if (pcVar5 != (code *)0x0) goto LAB_1000659f;
                      }
                    }
                    else {
                      pcVar5 = (code *)in_ECX[0x30];
                      if (pcVar5 == (code *)0x0) {
LAB_10006092:
                        pcVar5 = (code *)in_ECX[0x1b];
                        if (pcVar5 != (code *)0x0) goto LAB_10006099;
                      }
                      else {
LAB_10006099:
                        (*pcVar5)(local_1c,4,local_38 | 1);
                        uVar7 = 0;
                        if (local_30 == 0) goto LAB_10005dd2;
                        if (*in_ECX != 0x54584b57) goto LAB_10005e0e;
                        local_1c = local_30 + 8;
                        uVar15 = local_30;
                      }
                      uVar4 = in_ECX[2];
                      if (uVar4 < 0xc0) goto LAB_100060e0;
                      pcVar5 = (code *)in_ECX[0x2f];
                      if (pcVar5 == (code *)0x0) goto LAB_10006592;
LAB_1000659f:
                      (*pcVar5)(local_1c,4,&local_38);
                      uVar7 = local_30;
                    }
                  }
                }
                else {
                  uVar7 = uVar15;
                }
LAB_10005dd2:
                if (*in_ECX != 0x54584b57) goto LAB_10005e0e;
                if ((uint)in_ECX[2] < 0xc0) {
                  if ((uint)in_ECX[2] < 0x6c) goto LAB_10005e0e;
LAB_10005df5:
                  pcVar5 = (code *)in_ECX[0x1a];
                  if (pcVar5 == (code *)0x0) goto LAB_10005e0e;
                }
                else {
                  pcVar5 = (code *)in_ECX[0x2f];
                  if (pcVar5 == (code *)0x0) goto LAB_10005df5;
                }
                (*pcVar5)(uVar7 + 0xe,2,&local_3c);
LAB_10005e0e:
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar7 + 1 < 0x400) {
                    cVar9 = 'h';
                    pcVar8 = &DAT_10008d1b;
                    do {
                      *(char *)(param_4 + uVar7) = cVar9;
                      uVar7 = uVar7 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                      pcVar8 = pcVar8 + 1;
                    } while (uVar7 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                  uVar15 = 0;
                  do {
                    uVar7 = uVar15;
                    uVar15 = uVar7 + 1;
                  } while (*(char *)(param_4 + uVar7) != '\0');
                  if (uVar15 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                    uVar7 = uVar15;
                  }
                  *(undefined1 *)(param_4 + uVar7) = 0;
                }
                iVar2 = 8;
LAB_10005e8f:
                do {
                  uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  if (param_4 == 0) goto LAB_10005edb;
                  uVar15 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar15);
                    uVar15 = uVar15 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar15 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar15) = bVar12;
                    *(undefined1 *)(param_4 + uVar15) = 0;
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'h';
                  pcVar8 = &DAT_10008d23;
                  do {
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                    pcVar8 = pcVar8 + 1;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10005f59:
                iVar2 = 8;
LAB_10005f63:
                uVar15 = local_38 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                bVar12 = (byte)uVar15;
                if (uVar15 < 10) {
                  bVar12 = bVar12 | 0x30;
                }
                else {
                  bVar12 = bVar12 + 0x37;
                }
                if (param_4 == 0) {
                  iVar2 = iVar2 + -1;
                  if (iVar2 == 0) goto LAB_10006029;
                  goto LAB_10005f63;
                }
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar15) = bVar12;
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
                iVar2 = iVar2 + -1;
                if (iVar2 != 0) goto LAB_10005f63;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar7 + 1 < 0x400) {
                  cVar9 = 'h';
                  pcVar8 = str_10008d2a;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_4 + uVar7) = cVar9;
                    uVar7 = uVar7 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar7 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
                uVar15 = 0;
                do {
                  uVar7 = uVar15;
                  uVar15 = uVar7 + 1;
                } while (*(char *)(param_4 + uVar7) != '\0');
                if (uVar15 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                  uVar7 = uVar15;
                }
                *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10006029:
                iVar2 = 8;
                do {
                  uVar15 = local_3c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar12 = (byte)uVar15;
                  if (uVar15 < 10) {
                    bVar12 = bVar12 | 0x30;
                  }
                  else {
                    bVar12 = bVar12 + 0x37;
                  }
                  if (param_4 != 0) {
                    uVar15 = 0;
                    do {
                      pcVar8 = (char *)(param_4 + uVar15);
                      uVar15 = uVar15 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar15 < 0x400) {
                      *(byte *)(param_4 + -1 + uVar15) = bVar12;
                      *(undefined1 *)(param_4 + uVar15) = 0;
                    }
                  }
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                uVar15 = 1;
                uVar7 = local_34;
                goto LAB_10003b59;
              }
            }
          }
        }
      }
      if (param_4 != 0) {
        uVar15 = 0;
        do {
          uVar4 = uVar15;
          uVar15 = uVar4 + 1;
        } while (*(char *)(param_4 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10008cfd;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_4 + uVar4) = cVar9;
            uVar4 = uVar4 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar4 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar4) = 0;
        uVar15 = 0;
LAB_10003b59:
        uVar7 = uVar7 | uVar15;
      }
    }
    piVar13 = local_14;
    local_20 = 0;
    local_30 = 0;
    local_38 = 0;
    local_3c = 0;
    puVar10 = local_18;
    if (((char)local_18[4] != '\f') || (*(char *)((int)local_18 + 9) != '\x03')) goto LAB_10003dec;
    uVar15 = *(uint *)(local_18 + 10);
    piVar16 = in_ECX;
    local_34 = uVar7;
    if ((uVar15 & 1) != 0 || uVar15 == 0) {
LAB_10003c9d:
      uVar15 = 0;
      puVar10 = local_18;
LAB_10003cba:
      local_40 = 0;
      uVar7 = *(uint *)(puVar10 + uVar15 * 2 + 10);
      if ((uVar7 & 1) == 0) goto LAB_10003cb0;
      if ((((short)(uVar7 & 0xfffffffc) == 0 || (char)local_24 != '\0') || (*piVar16 != 0x54584b57))
         || ((uint)piVar16[2] < 0x58)) goto LAB_10003cb0;
      if ((code *)piVar16[0x15] == (code *)0x0) goto LAB_10003cb0;
      local_1c = uVar7 & 0xfffffffc;
      iVar2 = (*(code *)piVar16[0x15])(uVar7 & 0xfffc,2,&local_40);
      puVar10 = local_18;
      if (iVar2 == 0) goto LAB_10003cb0;
      if (param_4 == 0) {
        if (uVar15 == 0) goto LAB_10004730;
        goto LAB_1000455e;
      }
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (*(char *)(param_4 + uVar4) != '\0');
      if (uVar4 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_10008d56;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar4) = cVar9;
          uVar4 = uVar4 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar4 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar4) = 0;
      if (uVar15 == 0) {
        uVar15 = 0;
        do {
          pcVar8 = (char *)(param_4 + uVar15);
          uVar15 = uVar15 + 1;
        } while (*pcVar8 != '\0');
        if (uVar15 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
        }
LAB_10003d67:
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar15 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
          uVar7 = uVar15;
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar9 = 'u';
          pcVar8 = &DAT_10008d62;
          do {
            *(char *)(param_4 + uVar7) = cVar9;
            uVar7 = uVar7 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
            pcVar8 = pcVar8 + 1;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar15 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
          uVar7 = uVar15;
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
      }
      else {
LAB_1000455e:
        uVar7 = 0;
        do {
          *(byte *)((int)&local_a4 + uVar7) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
          uVar4 = uVar7 + 1;
          if (8 < uVar7) break;
          bVar18 = 9 < uVar15;
          uVar7 = uVar4;
          uVar15 = uVar15 / 10;
        } while (bVar18);
        do {
          while (uVar15 = uVar4 - 1, param_4 != 0) {
            uVar7 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar7);
              uVar7 = uVar7 + 1;
            } while (*pcVar8 != '\0');
            if (uVar7 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar7) = *(undefined1 *)((int)&local_a8 + uVar4 + 3);
              *(undefined1 *)(param_4 + uVar7) = 0;
            }
            uVar4 = uVar15;
            if (uVar15 == 0) goto LAB_10003d67;
          }
          uVar4 = uVar15;
        } while (uVar15 != 0);
      }
LAB_10004730:
      iVar2 = 8;
LAB_1000473a:
      uVar15 = local_1c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar15;
      if (uVar15 < 10) {
        bVar12 = bVar12 | 0x30;
        if (param_4 != 0) goto LAB_10004758;
LAB_10004782:
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_10004800;
        goto LAB_1000473a;
      }
      bVar12 = bVar12 + 0x37;
      if (param_4 == 0) goto LAB_10004782;
LAB_10004758:
      uVar15 = 0;
      do {
        pcVar8 = (char *)(param_4 + uVar15);
        uVar15 = uVar15 + 1;
      } while (*pcVar8 != '\0');
      if (uVar15 < 0x400) {
        *(byte *)(param_4 + -1 + uVar15) = bVar12;
        *(undefined1 *)(param_4 + uVar15) = 0;
      }
      iVar2 = iVar2 + -1;
      if (iVar2 != 0) goto LAB_1000473a;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = 'u';
        pcVar8 = str_10008d67;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10004800:
      iVar2 = 8;
      do {
        uVar15 = local_40 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar12 = (byte)uVar15;
        if (uVar15 < 10) {
          bVar12 = bVar12 | 0x30;
        }
        else {
          bVar12 = bVar12 + 0x37;
        }
        if (param_4 != 0) {
          uVar15 = 0;
          do {
            pcVar8 = (char *)(param_4 + uVar15);
            uVar15 = uVar15 + 1;
          } while (*pcVar8 != '\0');
          if (uVar15 < 0x400) {
            *(byte *)(param_4 + -1 + uVar15) = bVar12;
            *(undefined1 *)(param_4 + uVar15) = 0;
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      goto LAB_1000645b;
    }
    iVar2 = 0;
    if ((uVar15 & 6) == 4) {
      iVar2 = *(int *)(local_18 + 0xc);
    }
    uVar15 = uVar15 & 0xfffffff0;
    if (uVar15 == 0 && iVar2 == 0) goto LAB_10003c9d;
    local_30 = 0;
    local_a4 = 0;
    if (((char)local_24 != '\0') || (*in_ECX != 0x54584b57)) goto LAB_10003c9d;
    if (((uint)in_ECX[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      piVar16 = piVar13;
      if ((((uint)in_ECX[2] < 0x68 || iVar2 != 0) || ((code *)local_14[0x19] == (code *)0x0)) ||
         (iVar2 = (*(code *)local_14[0x19])(uVar15,0,0x1000,&local_a4), iVar2 == 0))
      goto LAB_10003c9d;
      local_30 = local_a4;
    }
    else {
      iVar2 = (*(code *)local_14[0x2e])(uVar15,iVar2,0x1000,&local_30);
      piVar16 = local_14;
      piVar13 = local_14;
      if (iVar2 == 0) goto LAB_10003c9d;
    }
    if (param_4 != 0) {
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = 'u';
        pcVar8 = &DAT_10008d37;
        do {
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
    }
    iVar2 = 8;
    do {
      uVar15 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      if (uVar15 < 10) {
        uVar15 = uVar15 | 0x30;
      }
      else {
        uVar15 = (uint)(byte)((char)uVar15 + 0x37);
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (param_4 != 0) {
        uVar7 = 0;
        do {
          uVar4 = uVar7;
          uVar7 = uVar4 + 1;
        } while (*(char *)(param_4 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          pbVar17 = (byte *)((int)&local_a4 + 1);
          do {
            *(char *)(param_4 + uVar4) = (char)uVar15;
            uVar4 = uVar4 + 1;
            uVar15 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar4 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar4) = 0;
        piVar13 = local_14;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((local_30 == 0) || (*piVar13 != 0x54584b57)) goto LAB_100061f4;
    if ((uint)piVar13[2] < 0xc0) {
      if (0x6b < (uint)piVar13[2]) goto LAB_10005979;
    }
    else {
      pcVar5 = (code *)piVar13[0x2f];
      if (pcVar5 == (code *)0x0) {
LAB_10005979:
        pcVar5 = (code *)piVar13[0x1a];
        if (pcVar5 == (code *)0x0) goto LAB_100059a6;
      }
      (*pcVar5)(local_30,4,&local_20);
      if ((local_30 == 0) || (*piVar13 != 0x54584b57)) goto LAB_100061f4;
    }
LAB_100059a6:
    if ((uint)piVar13[2] < 0xc0) {
      if (0x6b < (uint)piVar13[2]) goto LAB_10005d1d;
    }
    else {
      pcVar5 = (code *)piVar13[0x2f];
      if (pcVar5 == (code *)0x0) {
LAB_10005d1d:
        pcVar5 = (code *)piVar13[0x1a];
        if (pcVar5 == (code *)0x0) goto LAB_10005d4d;
      }
      (*pcVar5)(local_30 + 4,4,&local_38);
      if ((local_30 == 0) || (*piVar13 != 0x54584b57)) goto LAB_100061f4;
    }
LAB_10005d4d:
    if ((uint)piVar13[2] < 0xc0) {
      if ((uint)piVar13[2] < 0x6c) goto LAB_100061f4;
LAB_100061db:
      pcVar5 = (code *)piVar13[0x1a];
      if (pcVar5 == (code *)0x0) goto LAB_100061f4;
    }
    else {
      pcVar5 = (code *)piVar13[0x2f];
      if (pcVar5 == (code *)0x0) goto LAB_100061db;
    }
    (*pcVar5)(local_30 + 8,4,&local_3c);
LAB_100061f4:
    if (param_4 != 0) {
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = 'u';
        pcVar8 = &DAT_10008d3f;
        do {
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
    }
    iVar2 = 8;
LAB_10006275:
    do {
      uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar15;
      if (uVar15 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      if (param_4 == 0) goto LAB_100062bb;
      uVar15 = 0;
      do {
        pcVar8 = (char *)(param_4 + uVar15);
        uVar15 = uVar15 + 1;
      } while (*pcVar8 != '\0');
      if (uVar15 < 0x400) {
        *(byte *)(param_4 + -1 + uVar15) = bVar12;
        *(undefined1 *)(param_4 + uVar15) = 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar9 = 'u';
      pcVar8 = &DAT_10008d47;
      do {
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10006339:
    iVar2 = 8;
LAB_10006343:
    uVar15 = local_38 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
    bVar12 = (byte)uVar15;
    if (uVar15 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    if (param_4 == 0) {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_10006409;
      goto LAB_10006343;
    }
    uVar15 = 0;
    do {
      pcVar8 = (char *)(param_4 + uVar15);
      uVar15 = uVar15 + 1;
    } while (*pcVar8 != '\0');
    if (uVar15 < 0x400) {
      *(byte *)(param_4 + -1 + uVar15) = bVar12;
      *(undefined1 *)(param_4 + uVar15) = 0;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) goto LAB_10006343;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar9 = 'u';
      pcVar8 = &DAT_10008d4f;
      do {
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10006409:
    iVar2 = 8;
    do {
      uVar15 = local_3c >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar15;
      if (uVar15 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      if (param_4 != 0) {
        uVar15 = 0;
        do {
          pcVar8 = (char *)(param_4 + uVar15);
          uVar15 = uVar15 + 1;
        } while (*pcVar8 != '\0');
        if (uVar15 < 0x400) {
          *(byte *)(param_4 + -1 + uVar15) = bVar12;
          *(undefined1 *)(param_4 + uVar15) = 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
LAB_1000645b:
    uVar15 = 1;
    goto LAB_10003dc9;
  }
  local_34 = 0;
  uVar15 = 0;
  goto LAB_100042ab;
LAB_10007418:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_1000750b;
  goto LAB_1000741f;
LAB_1000755b:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_100075d9;
  goto LAB_10007515;
code_r0x1000796e:
  if (local_64 != 0) goto LAB_10007a09;
LAB_10007a71:
  if (local_60 != 0) goto LAB_10007b2a;
LAB_10007ba1:
  if (local_5c != 0) goto LAB_10007c6a;
  local_18 = (ushort *)local_54;
  if (local_54 != 0) goto LAB_10007d1e;
  if (local_9c != 0) goto LAB_1000805b;
  if (local_98 != 0) goto LAB_1000815b;
LAB_1000836b:
  if (local_50 == 0) {
    uVar15 = 1;
    goto LAB_100083f0;
  }
LAB_1000836f:
  uVar15 = 0;
  do {
    *(byte *)((int)&local_30 + uVar15) = (char)local_50 + (char)(local_50 / 10) * -10 | 0x30;
    uVar7 = uVar15 + 1;
    if (8 < uVar15) break;
    bVar18 = 9 < local_50;
    local_50 = local_50 / 10;
    uVar15 = uVar7;
  } while (bVar18);
  do {
    while (uVar15 = uVar7 - 1, param_4 != 0) {
      uVar4 = 0;
      do {
        pcVar8 = (char *)(param_4 + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar8 != '\0');
      if (uVar4 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar4) = *(undefined1 *)((int)&local_34 + uVar7 + 3);
        *(undefined1 *)(param_4 + uVar4) = 0;
      }
      uVar7 = uVar15;
      if (uVar15 == 0) goto LAB_1000828a;
    }
    uVar7 = uVar15;
  } while (uVar15 != 0);
  goto LAB_100083e1;
LAB_10007eeb:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_10007f60;
  goto LAB_10007ea5;
LAB_10004a30:
  bVar18 = uVar15 < 5;
  uVar15 = uVar15 + 1;
  if (uVar15 == 6) goto LAB_100049c9;
  goto LAB_10004a3e;
LAB_1000674b:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_100067c9;
  goto LAB_10006703;
LAB_10005edb:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_10005f59;
  goto LAB_10005e8f;
LAB_10003cb0:
  uVar15 = uVar15 + 1;
  if (uVar15 == 6) goto LAB_10003d87;
  goto LAB_10003cba;
LAB_100062bb:
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_10006339;
  goto LAB_10006275;
LAB_1000400e:
  uVar7 = local_34;
  goto LAB_10004018;
LAB_10003d87:
  uVar7 = local_34;
  if (param_4 != 0) {
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_10008d71;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
LAB_10003dc9:
    puVar10 = local_18;
    uVar7 = local_34 | uVar15;
  }
LAB_10003dec:
  local_20 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((char)puVar10[4] == '\x02') {
    uVar15 = 0;
    bVar18 = true;
    local_34 = uVar7;
LAB_10003e22:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar18);
    if ((uVar15 != 0) && ((*(uint *)(puVar10 + uVar15 * 2 + 8) & 7) == 4)) {
LAB_10003f20:
      uVar7 = *(uint *)(puVar10 + uVar15 * 2 + 10);
      if ((uVar7 & 1) != 0) {
        if (((!((short)(uVar7 & 0xfffffffc) == 0 || (char)local_24 != '\0')) &&
            (*local_14 == 0x54584b57)) && (0x57 < (uint)local_14[2])) {
          if ((code *)local_14[0x15] != (code *)0x0) {
            iVar2 = (*(code *)local_14[0x15])(uVar7 & 0xfffc,2,&local_20);
            puVar10 = local_18;
            if (iVar2 == 0) goto LAB_10003e10;
            if (param_4 == 0) {
              if (uVar15 == 0) goto LAB_1000438a;
              goto LAB_100042bd;
            }
            uVar4 = 0;
            do {
              uVar3 = uVar4;
              uVar4 = uVar3 + 1;
            } while (*(char *)(param_4 + uVar3) != '\0');
            if (uVar3 + 1 < 0x400) {
              cVar9 = ' ';
              pcVar8 = str_10008dbb;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar3) = cVar9;
                uVar3 = uVar3 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar3 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar3) = 0;
            if (uVar15 == 0) {
              uVar15 = 0;
              do {
                pcVar8 = (char *)(param_4 + uVar15);
                uVar15 = uVar15 + 1;
              } while (*pcVar8 != '\0');
              if (uVar15 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
              }
LAB_10003fe5:
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar4 + 1 < 0x400) {
                cVar9 = 'n';
                pcVar8 = str_10008dca;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar4) = cVar9;
                  uVar4 = uVar4 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar4 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
            }
            else {
LAB_100042bd:
              uVar4 = 0;
              do {
                *(byte *)((int)&local_a4 + uVar4) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
                uVar3 = uVar4 + 1;
                if (8 < uVar4) break;
                bVar18 = 9 < uVar15;
                uVar4 = uVar3;
                uVar15 = uVar15 / 10;
              } while (bVar18);
              do {
                while (uVar15 = uVar3 - 1, param_4 != 0) {
                  uVar4 = 0;
                  do {
                    pcVar8 = (char *)(param_4 + uVar4);
                    uVar4 = uVar4 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar4 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar4) =
                         *(undefined1 *)((int)&local_a8 + uVar3 + 3);
                    *(undefined1 *)(param_4 + uVar4) = 0;
                  }
                  uVar3 = uVar15;
                  if (uVar15 == 0) goto LAB_10003fe5;
                }
                uVar3 = uVar15;
              } while (uVar15 != 0);
            }
LAB_1000438a:
            iVar2 = 8;
LAB_10004394:
            uVar15 = (uVar7 & 0xfffffffc) >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
            bVar12 = (byte)uVar15;
            if (uVar15 < 10) {
              bVar12 = bVar12 | 0x30;
              if (param_4 != 0) goto LAB_100043b1;
LAB_100043e2:
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_10004460;
              goto LAB_10004394;
            }
            bVar12 = bVar12 + 0x37;
            if (param_4 == 0) goto LAB_100043e2;
LAB_100043b1:
            uVar15 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar15);
              uVar15 = uVar15 + 1;
            } while (*pcVar8 != '\0');
            if (uVar15 < 0x400) {
              *(byte *)(param_4 + -1 + uVar15) = bVar12;
              *(undefined1 *)(param_4 + uVar15) = 0;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_10004394;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar9 = 'n';
              pcVar8 = str_10008dd4;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_4 + uVar7) = cVar9;
                uVar7 = uVar7 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
            uVar15 = 0;
            do {
              uVar7 = uVar15;
              uVar15 = uVar7 + 1;
            } while (*(char *)(param_4 + uVar7) != '\0');
            if (uVar15 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
              uVar7 = uVar15;
            }
            *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10004460:
            iVar2 = 8;
            do {
              uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if (param_4 != 0) {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar15) = bVar12;
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            goto LAB_10005b7b;
          }
        }
      }
LAB_10003e10:
      bVar18 = uVar15 < 5;
      uVar15 = uVar15 + 1;
      if (uVar15 == 6) goto LAB_1000400e;
      goto LAB_10003e22;
    }
    uVar7 = *(uint *)(puVar10 + uVar15 * 2 + 10);
    puVar10 = local_18;
    if ((uVar7 & 1) != 0 || uVar7 == 0) goto LAB_10003f20;
    iVar2 = 0;
    if ((uVar7 & 6) == 4) {
      if (uVar15 == 5) goto LAB_10003f20;
      iVar2 = *(int *)(local_18 + uVar15 * 2 + 0xc);
    }
    uVar7 = uVar7 & 0xfffffff0;
    if (uVar7 == 0 && iVar2 == 0) goto LAB_10003f20;
    local_30 = 0;
    local_a4 = 0;
    if (((char)local_24 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10003f20;
    if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      if ((!((uint)local_14[2] < 0x68 || iVar2 != 0)) && ((code *)local_14[0x19] != (code *)0x0)) {
        iVar2 = (*(code *)local_14[0x19])(uVar7,0,0x1000,&local_a4);
        puVar10 = local_18;
        if (iVar2 != 0) {
          local_30 = local_a4;
          goto LAB_100045df;
        }
      }
      goto LAB_10003f20;
    }
    iVar2 = (*(code *)local_14[0x2e])(uVar7,iVar2,0x1000,&local_30);
    puVar10 = local_18;
    if (iVar2 == 0) goto LAB_10003f20;
LAB_100045df:
    if (param_4 == 0) {
      if (uVar15 == 0) goto LAB_10004d42;
      goto LAB_1000465b;
    }
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (*(char *)(param_4 + uVar4) != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_10008d86;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_4 + uVar4) = cVar9;
        uVar4 = uVar4 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar4) = 0;
    if (uVar15 == 0) {
      uVar15 = 0;
      do {
        pcVar8 = (char *)(param_4 + uVar15);
        uVar15 = uVar15 + 1;
      } while (*pcVar8 != '\0');
      if (uVar15 < 0x400) {
        *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
      }
LAB_10004634:
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = 'n';
        pcVar8 = str_10008d97;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
    }
    else {
LAB_1000465b:
      uVar7 = 0;
      do {
        *(byte *)((int)&local_a4 + uVar7) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
        uVar4 = uVar7 + 1;
        if (8 < uVar7) break;
        bVar18 = 9 < uVar15;
        uVar7 = uVar4;
        uVar15 = uVar15 / 10;
      } while (bVar18);
      do {
        while (uVar15 = uVar4 - 1, param_4 != 0) {
          uVar7 = 0;
          do {
            pcVar8 = (char *)(param_4 + uVar7);
            uVar7 = uVar7 + 1;
          } while (*pcVar8 != '\0');
          if (uVar7 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar7) = *(undefined1 *)((int)&local_a8 + uVar4 + 3);
            *(undefined1 *)(param_4 + uVar7) = 0;
          }
          uVar4 = uVar15;
          if (uVar15 == 0) goto LAB_10004634;
        }
        uVar4 = uVar15;
      } while (uVar15 != 0);
    }
LAB_10004d42:
    iVar2 = 8;
    do {
      uVar15 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      if (uVar15 < 10) {
        uVar15 = uVar15 | 0x30;
      }
      else {
        uVar15 = (uint)(byte)((char)uVar15 + 0x37);
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (param_4 != 0) {
        uVar7 = 0;
        do {
          uVar4 = uVar7;
          uVar7 = uVar4 + 1;
        } while (*(char *)(param_4 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          pbVar17 = (byte *)((int)&local_a4 + 1);
          do {
            *(char *)(param_4 + uVar4) = (char)uVar15;
            uVar4 = uVar4 + 1;
            uVar15 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar4 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar4) = 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((local_30 != 0) && (*local_14 == 0x54584b57)) {
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_10005500;
      }
      else {
        pcVar5 = (code *)local_14[0x2f];
        if (pcVar5 == (code *)0x0) {
LAB_10005500:
          pcVar5 = (code *)local_14[0x1a];
          if (pcVar5 == (code *)0x0) goto LAB_10005533;
        }
        (*pcVar5)(local_30,4,&local_20);
        if ((local_30 == 0) || (*local_14 != 0x54584b57)) goto LAB_100059e8;
      }
LAB_10005533:
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_100059cc;
      }
      else {
        pcVar5 = (code *)local_14[0x2f];
        if (pcVar5 == (code *)0x0) {
LAB_100059cc:
          pcVar5 = (code *)local_14[0x1a];
          if (pcVar5 == (code *)0x0) goto LAB_100059e8;
        }
        (*pcVar5)(local_30 + 4,4,&local_38);
      }
    }
LAB_100059e8:
    if (param_4 != 0) {
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar9 = 'n';
        pcVar8 = str_10008da3;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_4 + uVar7) = cVar9;
          uVar7 = uVar7 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
      uVar15 = 0;
      do {
        uVar7 = uVar15;
        uVar15 = uVar7 + 1;
      } while (*(char *)(param_4 + uVar7) != '\0');
      if (uVar15 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
        uVar7 = uVar15;
      }
      *(undefined1 *)(param_4 + uVar7) = 0;
    }
    iVar2 = 8;
LAB_10005a69:
    uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
    bVar12 = (byte)uVar15;
    if (uVar15 < 10) {
      bVar12 = bVar12 | 0x30;
      if (param_4 != 0) goto LAB_10005a86;
LAB_10005ab2:
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_10005b30;
      goto LAB_10005a69;
    }
    bVar12 = bVar12 + 0x37;
    if (param_4 == 0) goto LAB_10005ab2;
LAB_10005a86:
    uVar15 = 0;
    do {
      pcVar8 = (char *)(param_4 + uVar15);
      uVar15 = uVar15 + 1;
    } while (*pcVar8 != '\0');
    if (uVar15 < 0x400) {
      *(byte *)(param_4 + -1 + uVar15) = bVar12;
      *(undefined1 *)(param_4 + uVar15) = 0;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) goto LAB_10005a69;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar9 = 'n';
      pcVar8 = str_10008daf;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if (uVar15 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
      uVar7 = uVar15;
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
LAB_10005b30:
    iVar2 = 8;
    do {
      uVar15 = local_38 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar15;
      if (uVar15 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      if (param_4 != 0) {
        uVar15 = 0;
        do {
          pcVar8 = (char *)(param_4 + uVar15);
          uVar15 = uVar15 + 1;
        } while (*pcVar8 != '\0');
        if (uVar15 < 0x400) {
          *(byte *)(param_4 + -1 + uVar15) = bVar12;
          *(undefined1 *)(param_4 + uVar15) = 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
LAB_10005b7b:
    puVar10 = local_18;
    uVar7 = local_34 | local_1c & 1;
  }
LAB_10004018:
  local_20 = 0;
  uVar15 = 0;
  local_34 = uVar7;
  if ((char)puVar10[4] == '\x03') {
    uVar15 = *(uint *)(puVar10 + 10);
    if ((uVar15 & 1) == 0 && uVar15 != 0) {
      iVar2 = 0;
      if ((uVar15 & 6) == 4) {
        iVar2 = *(int *)(local_18 + 0xc);
      }
      uVar15 = uVar15 & 0xfffffff0;
      if (uVar15 == 0 && iVar2 == 0) goto LAB_10004113;
      local_30 = 0;
      local_a4 = 0;
      if (((char)local_24 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10004113;
      if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_14[2] && iVar2 == 0) && ((code *)local_14[0x19] != (code *)0x0)) {
          iVar2 = (*(code *)local_14[0x19])(uVar15,0,0x1000,&local_a4);
          uVar15 = 0;
          if (iVar2 != 0) {
            local_30 = local_a4;
            goto joined_r0x100040fc;
          }
        }
        goto LAB_10004113;
      }
      iVar2 = (*(code *)local_14[0x2e])(uVar15,iVar2,0x1000,&local_30);
      uVar15 = 0;
      if (iVar2 == 0) goto LAB_10004113;
joined_r0x100040fc:
      uVar6 = (undefined3)((uint)iVar2 >> 8);
      if (param_4 == 0) {
        local_18 = (ushort *)CONCAT31(uVar6,1);
        local_1c = CONCAT31(uVar6,1);
      }
      else {
        uVar7 = 0;
        local_18 = (ushort *)CONCAT31(uVar6,1);
        local_1c = CONCAT31(uVar6,1);
LAB_1000423d:
        uVar15 = 0;
        do {
          uVar4 = uVar15;
          uVar15 = uVar4 + 1;
        } while (*(char *)(param_4 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10008de2;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_4 + uVar4) = cVar9;
            uVar4 = uVar4 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar4 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar4) = 0;
        uVar15 = 0;
        if ((char)local_18 == '\0') {
LAB_10004ad4:
          uVar4 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar4) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
            uVar3 = uVar4 + 1;
            if (8 < uVar4) break;
            bVar18 = 9 < uVar7;
            uVar7 = uVar7 / 10;
            uVar4 = uVar3;
          } while (bVar18);
LAB_10004b12:
          do {
            uVar7 = uVar3 - 1;
            if ((char)uVar15 != '\0') {
              uVar3 = uVar7;
              if (uVar7 == 0) {
                local_18 = (ushort *)0x1;
                uVar7 = local_34;
                goto LAB_10004bdc;
              }
              goto LAB_10004b12;
            }
            uVar4 = 0;
            do {
              pcVar8 = (char *)(param_4 + uVar4);
              uVar4 = uVar4 + 1;
            } while (*pcVar8 != '\0');
            if (uVar4 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar4) = *(undefined1 *)((int)&local_a8 + uVar3 + 3);
              *(undefined1 *)(param_4 + uVar4) = 0;
            }
            uVar3 = uVar7;
          } while (uVar7 != 0);
          local_18 = (ushort *)0x1;
        }
        else {
          do {
            pcVar8 = (char *)(param_4 + uVar15);
            uVar15 = uVar15 + 1;
          } while (*pcVar8 != '\0');
          if (uVar15 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar15) = 0x30;
          }
        }
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar15 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
          uVar7 = uVar15;
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar9 = 'd';
          pcVar8 = str_10008df3;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_4 + uVar7) = cVar9;
            uVar7 = uVar7 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
        uVar15 = 0;
        do {
          uVar7 = uVar15;
          uVar15 = uVar7 + 1;
        } while (*(char *)(param_4 + uVar7) != '\0');
        if (uVar15 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
          uVar7 = uVar15;
        }
        *(undefined1 *)(param_4 + uVar7) = 0;
        local_18 = (ushort *)0x0;
        uVar7 = local_34;
      }
LAB_10004bdc:
      iVar2 = 8;
      local_24 = local_30;
      do {
        uVar15 = local_30 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar12 = (byte)uVar15;
        if (uVar15 < 10) {
          bVar12 = bVar12 | 0x30;
        }
        else {
          bVar12 = bVar12 + 0x37;
        }
        PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
        if ((char)local_18 == '\0') {
          uVar15 = 0;
          do {
            uVar4 = uVar15;
            uVar15 = uVar4 + 1;
          } while (*(char *)(param_4 + uVar4) != '\0');
          if (uVar4 + 1 < 0x400) {
            pbVar17 = (byte *)((int)&local_a4 + 1);
            do {
              *(byte *)(param_4 + uVar4) = bVar12;
              uVar4 = uVar4 + 1;
              bVar12 = *pbVar17;
              if (bVar12 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar4 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar4) = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if ((local_30 != 0) && (*local_14 == 0x54584b57)) {
        if ((uint)local_14[2] < 0xc0) {
          if (0x6b < (uint)local_14[2]) goto LAB_10004c9f;
        }
        else {
          pcVar5 = (code *)local_14[0x2f];
          if (pcVar5 == (code *)0x0) {
LAB_10004c9f:
            pcVar5 = (code *)local_14[0x1a];
            if (pcVar5 == (code *)0x0) goto LAB_10005d0b;
          }
          iVar2 = (*pcVar5)(local_30,4,&local_20);
          if (iVar2 != 0) {
            if ((char)local_18 == '\0') {
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x20;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar4 + 1 < 0x400) {
                cVar9 = 'd';
                pcVar8 = str_10008dff;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_4 + uVar4) = cVar9;
                  uVar4 = uVar4 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar4 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
              uVar15 = 0;
              do {
                uVar4 = uVar15;
                uVar15 = uVar4 + 1;
              } while (*(char *)(param_4 + uVar4) != '\0');
              if (uVar15 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar15) = 0x3d;
                uVar4 = uVar15;
              }
              *(undefined1 *)(param_4 + uVar4) = 0;
            }
            iVar2 = 8;
            do {
              uVar15 = local_20 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar12 = (byte)uVar15;
              if (uVar15 < 10) {
                bVar12 = bVar12 | 0x30;
              }
              else {
                bVar12 = bVar12 + 0x37;
              }
              if ((char)local_18 == '\0') {
                uVar15 = 0;
                do {
                  pcVar8 = (char *)(param_4 + uVar15);
                  uVar15 = uVar15 + 1;
                } while (*pcVar8 != '\0');
                if (uVar15 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar15) = bVar12;
                  *(undefined1 *)(param_4 + uVar15) = 0;
                }
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
      }
LAB_10005d0b:
      local_34 = uVar7;
    }
    else {
LAB_10004113:
      uVar7 = 1;
      local_1c = CONCAT31((int3)(uVar15 >> 8),1);
      puVar10 = local_18;
      do {
        uVar15 = *(uint *)(puVar10 + uVar7 * 2 + 8) & 7;
        if (uVar15 != 4) {
          uVar15 = *(uint *)(puVar10 + uVar7 * 2 + 10);
          puVar10 = local_18;
          if ((uVar15 & 1) == 0 && uVar15 != 0) {
            iVar2 = 0;
            if ((uVar15 & 6) == 4) {
              if (uVar7 == 5) break;
              iVar2 = *(int *)(local_18 + uVar7 * 2 + 0xc);
            }
            uVar15 = uVar15 & 0xfffffff0;
            if (uVar15 != 0 || iVar2 != 0) {
              local_30 = 0;
              local_a4 = 0;
              if (((char)local_24 == '\0') && (*local_14 == 0x54584b57)) {
                if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
                  if ((0x67 < (uint)local_14[2] && iVar2 == 0) &&
                     ((code *)local_14[0x19] != (code *)0x0)) {
                    iVar2 = (*(code *)local_14[0x19])(uVar15,0,0x1000,&local_a4);
                    uVar15 = 0;
                    puVar10 = local_18;
                    if (iVar2 != 0) {
                      local_30 = local_a4;
                      goto LAB_1000422e;
                    }
                  }
                }
                else {
                  iVar2 = (*(code *)local_14[0x2e])(uVar15,iVar2,0x1000,&local_30);
                  uVar15 = 0;
                  puVar10 = local_18;
                  if (iVar2 != 0) {
LAB_1000422e:
                    if (param_4 == 0) {
                      uVar15 = 1;
                      goto LAB_10004ad4;
                    }
                    local_18 = (ushort *)0x0;
                    goto LAB_1000423d;
                  }
                }
              }
            }
          }
        }
        bVar18 = uVar7 < 5;
        uVar7 = uVar7 + 1;
        local_1c = CONCAT31((int3)(uVar15 >> 8),bVar18);
      } while (uVar7 != 6);
      local_1c = 0;
    }
    uVar15 = local_1c & 1;
  }
LAB_100042ab:
  uVar15 = local_34 | local_4c | uVar15;
LAB_100083f3:
  pcVar8 = str_10008a27;
  if (uVar15 != 0) {
    pcVar8 = str_10008a17;
  }
  if (param_4 != 0) {
    uVar15 = 0;
    do {
      uVar7 = uVar15;
      uVar15 = uVar7 + 1;
    } while (*(char *)(param_4 + uVar7) != '\0');
    if ((uVar7 + 1 < 0x400) && (cVar9 = *pcVar8, cVar9 != '\0')) {
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_4 + uVar7) = cVar9;
        uVar7 = uVar7 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar7) = 0;
  }
  return;
}

#undef DAT_10008cd8
#undef DAT_10008ce0
#undef DAT_10008d13
#undef DAT_10008d1b
#undef DAT_10008d23
#undef DAT_10008d37
#undef DAT_10008d3f
#undef DAT_10008d47
#undef DAT_10008d4f
#undef DAT_10008d62
#undef str_10008a17
#undef str_10008a27
#undef str_10008a3b
#undef str_10008a53
#undef str_10008a6b
#undef str_10008a84
#undef str_10008a95
#undef str_10008aa5
#undef str_10008ab4
#undef str_10008abd
#undef str_10008ad9
#undef str_10008ae4
#undef str_10008af4
#undef str_10008afb
#undef str_10008b0b
#undef str_10008b18
#undef str_10008b2e
#undef str_10008b44
#undef str_10008b5a
#undef str_10008b70
#undef str_10008b89
#undef str_10008ba1
#undef str_10008bae
#undef str_10008bbf
#undef str_10008bd3
#undef str_10008be3
#undef str_10008bfa
#undef str_10008c0d
#undef str_10008c17
#undef str_10008c2a
#undef str_10008c41
#undef str_10008c4d
#undef str_10008c59
#undef str_10008c66
#undef str_10008c70
#undef str_10008c84
#undef str_10008c93
#undef str_10008ca6
#undef str_10008cb8
#undef str_10008cce
#undef str_10008ce7
#undef str_10008cf1
#undef str_10008cfd
#undef str_10008d2a
#undef str_10008d56
#undef str_10008d67
#undef str_10008d71
#undef str_10008d86
#undef str_10008d97
#undef str_10008da3
#undef str_10008daf
#undef str_10008dbb
#undef str_10008dca
#undef str_10008dd4
#undef str_10008de2
#undef str_10008df3
#undef str_10008dff
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef str_10008e42
#define str_10008e42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#undef str_10008e4d
#define str_10008e4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x691U)))
#undef str_10008e5c
#define str_10008e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a0U)))
#undef str_10008e6d
#define str_10008e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b1U)))
#undef str_10008e80
#define str_10008e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c4U)))
#undef str_10008e93
#define str_10008e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d7U)))
#undef str_10008ea3
#define str_10008ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e7U)))
#undef str_10008eb2
#define str_10008eb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f6U)))
#undef str_10008ec1
#define str_10008ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x705U)))
#undef str_10008ed2
#define str_10008ed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x716U)))
#undef str_10008edd
#define str_10008edd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x721U)))
#undef str_10008ee9
#define str_10008ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72dU)))
#undef str_10008ef3
#define str_10008ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x737U)))
#undef str_10008efc
#define str_10008efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x740U)))
#undef str_10008f07
#define str_10008f07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74bU)))
#undef str_10008f10
#define str_10008f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x754U)))
#undef str_10008f18
#define str_10008f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75cU)))
#undef str_10008f21
#define str_10008f21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x765U)))
#undef str_10008f28
#define str_10008f28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76cU)))
#undef str_10008f3b
#define str_10008f3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77fU)))
#undef str_10008f4e
#define str_10008f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x792U)))
#undef str_10008f61
#define str_10008f61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008460
 */

char * recovered_10008460(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_10008e42;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_10008efc;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_10008ef3;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_10008f21;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_10008f21;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10008f18;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_10008f07;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_10008edd;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_100085df;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_10008ee9;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_10008f10;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_10008e4d;
    case 0x1001:
    case 0x1042:
      return str_10008e5c;
    case 0x1002:
    case 0x1045:
      return str_10008e6d;
    case 0x1003:
    case 0x1043:
      return str_10008e80;
    case 0x1004:
    case 0x1048:
      return str_10008e93;
    case 0x1005:
    case 0x1044:
      return str_10008ea3;
    default:
      return str_10008ed2;
    case 0x1050:
      return str_10008eb2;
    case 0x1052:
      return str_10008ec1;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_10008f4e;
  case 2:
    return str_10008f3b;
  case 3:
    return str_10008f28;
  case 4:
    return str_10008f61;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_100085df:
      pcVar2 = recovered_10008760((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_10008e42;
}

#undef str_10008e42
#undef str_10008e4d
#undef str_10008e5c
#undef str_10008e6d
#undef str_10008e80
#undef str_10008e93
#undef str_10008ea3
#undef str_10008eb2
#undef str_10008ec1
#undef str_10008ed2
#undef str_10008edd
#undef str_10008ee9
#undef str_10008ef3
#undef str_10008efc
#undef str_10008f07
#undef str_10008f10
#undef str_10008f18
#undef str_10008f21
#undef str_10008f28
#undef str_10008f3b
#undef str_10008f4e
#undef str_10008f61

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

undefined4
recovered_10008630(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  iVar2 = param_5 + param_4;
  if (((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
     && (((param_3 == 0 || ((*(uint *)(in_EDX + 0x10 + param_3 * 4) & 7) != 4)) &&
         (uVar1 = *(uint *)(in_EDX + 0x14 + param_3 * 4), (uVar1 & 1) == 0 && uVar1 != 0)))) {
    uVar3 = 0;
    local_14 = 0;
    if ((uVar1 & 6) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_14 = *(int *)(in_EDX + 0x18 + param_3 * 4);
    }
    uVar1 = uVar1 & 0xfffffff0;
    if ((iVar2 != 0) && (uVar1 != 0 || local_14 != 0)) {
      *param_6 = 0;
      local_18 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((uint)in_ECX[2] < 0x68 || local_14 != 0) {
            return 0;
          }
          if ((code *)in_ECX[0x19] == (code *)0x0) {
            return 0;
          }
          iVar2 = (*(code *)in_ECX[0x19])(uVar1,0,iVar2,&local_18);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          iVar2 = (*(code *)in_ECX[0x2e])(uVar1,local_14,iVar2,param_6);
          if (iVar2 == 0) {
            return 0;
          }
          local_18 = *param_6;
        }
        *param_6 = local_18 + param_4;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef local_18
#undef local_14

#undef DAT_10008f77
#define DAT_10008f77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bbU)))
#undef DAT_10008f7c
#define DAT_10008f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c0U)))
#undef DAT_10008f81
#define DAT_10008f81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c5U)))
#undef DAT_10008f86
#define DAT_10008f86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef str_10008f8b
#define str_10008f8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cfU)))
#undef str_10008f96
#define str_10008f96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7daU)))
#undef str_10008f9f
#define str_10008f9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

char * recovered_10008760(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_10008f77;
    }
    if (in_ECX == 0x10) {
      return &DAT_10008f7c;
    }
    if (in_ECX == 0x20) {
      return &DAT_10008f81;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_10008f86;
    }
    if (in_ECX == 0x80) {
      return str_10008f8b;
    }
    if (in_ECX == 0xfe) {
      return str_10008f96;
    }
  }
  return str_10008f9f;
}

#undef DAT_10008f77
#undef DAT_10008f7c
#undef DAT_10008f81
#undef DAT_10008f86
#undef str_10008f8b
#undef str_10008f96
#undef str_10008f9f

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
