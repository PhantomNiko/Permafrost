/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a000
#define DAT_1000a000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x924U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b40
 */

void * recovered_10000b40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000a000;
}

#undef DAT_1000a000

#undef DAT_100098fc
#define DAT_100098fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10009858
#define str_10009858 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_10009868
#define str_10009868 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_1000988a
#define str_1000988a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_1000989d
#define str_1000989d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_100098b8
#define str_100098b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
#undef str_100098c7
#define str_100098c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_100098ce
#define str_100098ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2U)))
#undef str_100098de
#define str_100098de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
#undef str_100098ed
#define str_100098ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#define local_4e4 (*(char *)(frame + 44))
#define local_48c (*(uint *)(frame + 132))
#define local_450 (*(uint *)(frame + 192))
#define local_44c (*(undefined4 *)(frame + 196))
#define local_448 (*(byte (*)[1023])(frame + 200))
#define local_1c (*(uint *)(frame + 1268))
#define local_18 (*(uint *)(frame + 1272))
#define local_14 (*(uint *)(frame + 1276))
#define abStack_4f1 (*(byte (*)[13])(frame + 31))
#define abStack_49 (*(byte (*)[45])(frame + 1223))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b50
 */

int recovered_10000b50(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 in_DL;
  byte bVar7;
  uint uVar8;
  uint uVar9;

  local_14 = 0;
  iVar3 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    local_18 = api[2];
    local_448[0] = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (local_448[uVar4] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar7 = 0x71;
      pcVar6 = str_10009858;
      do {
        pcVar6 = pcVar6 + 1;
        local_448[uVar4] = bVar7;
        uVar4 = uVar4 + 1;
        bVar7 = *pcVar6;
        if (bVar7 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_448[uVar4] = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (local_448[uVar4] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar7 = 0x3a;
      pcVar6 = str_100098b8;
      do {
        pcVar6 = pcVar6 + 1;
        local_448[uVar4] = bVar7;
        uVar4 = uVar4 + 1;
        bVar7 = *pcVar6;
        if (bVar7 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_448[uVar4] = 0;
    if (api[1] == 0) {
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar4 + 1 < 0x60) {
        (local_448 + uVar4)[0] = 0x30;
        (local_448 + uVar4)[1] = 0;
      }
    }
    else {
      uVar8 = api[1];
      uVar4 = 0;
      do {
        abStack_4f1[uVar4 + 1] = (byte)(uVar8 % 10) | 0x30;
        uVar9 = uVar4 + 1;
        if (8 < uVar4) break;
        bVar2 = 9 < uVar8;
        uVar8 = uVar8 / 10;
        uVar4 = uVar9;
      } while (bVar2);
      do {
        pbVar1 = abStack_4f1 + uVar9;
        uVar9 = uVar9 - 1;
        uVar8 = 0;
        do {
          uVar4 = uVar8;
          uVar8 = uVar4 + 1;
        } while (local_448[uVar4] != 0);
        if (uVar4 + 1 < 0x60) {
          local_448[uVar4] = *pbVar1;
          local_448[uVar4 + 1] = 0;
        }
      } while (uVar9 != 0);
    }
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (local_448[uVar4] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar7 = 0x20;
      pcVar6 = str_100098c7;
      do {
        pcVar6 = pcVar6 + 1;
        local_448[uVar4] = bVar7;
        uVar4 = uVar4 + 1;
        bVar7 = *pcVar6;
        if (bVar7 == 0) break;
      } while (uVar4 < 0x5f);
    }
    local_448[uVar4] = 0;
    if ((0x2b < local_18) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(local_448);
    }
    local_448[0] = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (local_448[uVar4] != 0);
    if (uVar4 + 1 < 0x400) {
      bVar7 = 0x73;
      pcVar6 = str_10009868;
      do {
        pcVar6 = pcVar6 + 1;
        local_448[uVar4] = bVar7;
        uVar4 = uVar4 + 1;
        bVar7 = *pcVar6;
        if (bVar7 == 0) break;
      } while (uVar4 < 0x3ff);
    }
    local_448[uVar4] = 0;
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 &&
        (iVar3 = (*(code *)api[0xf])(abStack_4f1 + 1), iVar3 != 0)))) {
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x20;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar4 + 1 < 0x400) {
        bVar7 = 0x68;
        pcVar6 = str_100098ce;
        do {
          pcVar6 = pcVar6 + 1;
          local_448[uVar4] = bVar7;
          uVar4 = uVar4 + 1;
          bVar7 = *pcVar6;
          if (bVar7 == 0) break;
        } while (uVar4 < 0x3ff);
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x3d;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      if (local_48c == 0) {
        uVar8 = 0;
        do {
          uVar4 = uVar8;
          uVar8 = uVar4 + 1;
        } while (local_448[uVar4] != 0);
        if (uVar4 + 1 < 0x400) {
          (local_448 + uVar4)[0] = 0x30;
          (local_448 + uVar4)[1] = 0;
        }
      }
      else {
        uVar8 = 0;
        do {
          abStack_49[uVar8 + 1] = (char)local_48c + (char)(local_48c / 10) * -10 | 0x30;
          uVar4 = uVar8 + 1;
          if (8 < uVar8) break;
          bVar2 = 9 < local_48c;
          local_48c = local_48c / 10;
          uVar8 = uVar4;
        } while (bVar2);
        do {
          pbVar1 = abStack_49 + uVar4;
          uVar4 = uVar4 - 1;
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            uVar8 = uVar9 + 1;
          } while (local_448[uVar9] != 0);
          if (uVar9 + 1 < 0x400) {
            local_448[uVar9] = *pbVar1;
            local_448[uVar9 + 1] = 0;
          }
        } while (uVar4 != 0);
      }
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x20;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar4 + 1 < 0x400) {
        bVar7 = 0x6d;
        pcVar6 = str_100098de;
        do {
          pcVar6 = pcVar6 + 1;
          local_448[uVar4] = bVar7;
          uVar4 = uVar4 + 1;
          bVar7 = *pcVar6;
          if (bVar7 == 0) break;
        } while (uVar4 < 0x3ff);
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x3d;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      iVar3 = 8;
      do {
        uVar8 = local_450 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar7 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar7 = bVar7 | 0x30;
        }
        else {
          bVar7 = bVar7 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar4 = uVar8;
          uVar8 = uVar4 + 1;
        } while (local_448[uVar4] != 0);
        if (uVar4 + 1 < 0x400) {
          local_448[uVar4] = bVar7;
          local_448[uVar4 + 1] = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x20;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar4 + 1 < 0x400) {
        bVar7 = 0x6d;
        pcVar6 = str_100098ed;
        do {
          pcVar6 = pcVar6 + 1;
          local_448[uVar4] = bVar7;
          uVar4 = uVar4 + 1;
          bVar7 = *pcVar6;
          if (bVar7 == 0) break;
        } while (uVar4 < 0x3ff);
      }
      local_448[uVar4] = 0;
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 1;
      } while (local_448[uVar4] != 0);
      if (uVar8 < 0x400) {
        local_448[uVar4] = 0x3d;
        uVar4 = uVar8;
      }
      local_448[uVar4] = 0;
      if (local_44c == 0) {
        uVar8 = 0;
        do {
          uVar4 = uVar8;
          uVar8 = uVar4 + 1;
        } while (local_448[uVar4] != 0);
        if (uVar4 + 1 < 0x400) {
          (local_448 + uVar4)[0] = 0x30;
          (local_448 + uVar4)[1] = 0;
        }
      }
      else {
        uVar8 = 0;
        do {
          abStack_49[uVar8 + 1] = (char)local_44c + (char)(local_44c / 10) * -10 | 0x30;
          uVar4 = uVar8 + 1;
          if (8 < uVar8) break;
          bVar2 = 9 < local_44c;
          local_44c = local_44c / 10;
          uVar8 = uVar4;
        } while (bVar2);
        do {
          pbVar1 = abStack_49 + uVar4;
          uVar4 = uVar4 - 1;
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            uVar8 = uVar9 + 1;
          } while (local_448[uVar9] != 0);
          if (uVar9 + 1 < 0x400) {
            local_448[uVar9] = *pbVar1;
            local_448[uVar9 + 1] = 0;
          }
        } while (uVar4 != 0);
      }
    }
    iVar3 = 0;
    if ((code *)api[3] != (code *)0x0) {
      iVar5 = (*(code *)api[3])(&DAT_100098fc,str_1000988a,local_448);
      iVar3 = 0;
      if (iVar5 != 0) {
        if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
          uVar8 = 0;
          pbVar1 = abStack_49 + 1;
          do {
            local_18 = uVar8 & 0xff;
            iVar3 = 0;
            local_1c = uVar8;
            do {
              bVar7 = (byte)iVar3;
              iVar5 = recovered_10003070(api,(char)local_18,bVar7,0,abStack_4f1 + 1);
              if ((iVar5 != 0) &&
                 (recovered_10001520(api,abStack_4f1 + 1,(int *)&local_14), local_4e4 < '\0')) {
                in_DL = (undefined1)local_18;
                iVar5 = recovered_10003070(api,in_DL,bVar7,1,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,2,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,3,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,4,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,5,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,6,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_10003070(api,in_DL,bVar7,7,pbVar1);
                if (iVar5 != 0) {
                  recovered_10001520(api,pbVar1,(int *)&local_14);
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
            uVar8 = local_1c + 1;
          } while (uVar8 != 8);
        }
        uVar4 = local_14;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (local_448[uVar9] != 0);
        if (uVar8 < 0x400) {
          local_448[uVar9] = 0x20;
          uVar9 = uVar8;
        }
        local_448[uVar9] = 0;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (local_448[uVar9] != 0);
        if (uVar9 + 1 < 0x400) {
          bVar7 = 0x70;
          pcVar6 = str_1000989d;
          do {
            pcVar6 = pcVar6 + 1;
            local_448[uVar9] = bVar7;
            uVar9 = uVar9 + 1;
            bVar7 = *pcVar6;
            if (bVar7 == 0) break;
          } while (uVar9 < 0x3ff);
        }
        local_448[uVar9] = 0;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (local_448[uVar9] != 0);
        if (uVar8 < 0x400) {
          local_448[uVar9] = 0x3d;
          uVar9 = uVar8;
        }
        local_448[uVar9] = 0;
        if (uVar4 == 0) {
          uVar8 = 0;
          do {
            uVar4 = uVar8;
            uVar8 = uVar4 + 1;
          } while (local_448[uVar4] != 0);
          if (uVar4 + 1 < 0x400) {
            (local_448 + uVar4)[0] = 0x30;
            (local_448 + uVar4)[1] = 0;
          }
        }
        else {
          uVar8 = 0;
          do {
            abStack_4f1[uVar8 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar8) break;
            bVar2 = 9 < uVar4;
            uVar4 = uVar4 / 10;
            uVar8 = uVar9;
          } while (bVar2);
          do {
            pbVar1 = abStack_4f1 + uVar9;
            uVar9 = uVar9 - 1;
            uVar8 = 0;
            do {
              uVar4 = uVar8;
              uVar8 = uVar4 + 1;
            } while (local_448[uVar4] != 0);
            if (uVar4 + 1 < 0x400) {
              local_448[uVar4] = *pbVar1;
              local_448[uVar4 + 1] = 0;
            }
          } while (uVar9 != 0);
        }
        iVar3 = 1;
        if ((code *)api[3] != (code *)0x0) {
          (*(code *)api[3])(&DAT_100098fc,str_1000988a,local_448);
          iVar3 = 1;
        }
      }
    }
  }
  return iVar3;
}

#undef DAT_100098fc
#undef str_10009858
#undef str_10009868
#undef str_1000988a
#undef str_1000989d
#undef str_100098b8
#undef str_100098c7
#undef str_100098ce
#undef str_100098de
#undef str_100098ed
#undef local_4e4
#undef local_48c
#undef local_450
#undef local_44c
#undef local_448
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_4f1
#undef abStack_49

#undef DAT_10009920
#define DAT_10009920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10009e11
#define DAT_10009e11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x735U)))
#undef DAT_10009e43
#define DAT_10009e43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x767U)))
#undef DAT_1000b000
#define DAT_1000b000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1924U)))
#undef DAT_1000b001
#define DAT_1000b001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1925U)))
#undef DAT_1000b002
#define DAT_1000b002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1926U)))
#undef DAT_1000b003
#define DAT_1000b003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1927U)))
#undef DAT_1000b004
#define DAT_1000b004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1928U)))
#undef DAT_1000b005
#define DAT_1000b005 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1929U)))
#undef DAT_1000b006
#define DAT_1000b006 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192aU)))
#undef DAT_1000b007
#define DAT_1000b007 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192bU)))
#undef DAT_1000b008
#define DAT_1000b008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192cU)))
#undef DAT_1000b00c
#define DAT_1000b00c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1930U)))
#undef DAT_1000b00e
#define DAT_1000b00e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1932U)))
#undef DAT_1000b00f
#define DAT_1000b00f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1933U)))
#undef DAT_1000b010
#define DAT_1000b010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1934U)))
#undef DAT_1000b014
#define DAT_1000b014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1938U)))
#undef DAT_1000b020
#define DAT_1000b020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1944U)))
#undef DAT_1000b021
#define DAT_1000b021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1945U)))
#undef DAT_1000b022
#define DAT_1000b022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000b023
#define DAT_1000b023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1947U)))
#undef DAT_1000b024
#define DAT_1000b024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1948U)))
#undef DAT_1000b025
#define DAT_1000b025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1949U)))
#undef DAT_1000b026
#define DAT_1000b026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef DAT_1000b027
#define DAT_1000b027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194bU)))
#undef DAT_1000b028
#define DAT_1000b028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194cU)))
#undef DAT_1000b029
#define DAT_1000b029 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194dU)))
#undef DAT_1000b02a
#define DAT_1000b02a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194eU)))
#undef DAT_1000b02b
#define DAT_1000b02b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194fU)))
#undef DAT_1000b030
#define DAT_1000b030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1954U)))
#undef DAT_1000b031
#define DAT_1000b031 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1955U)))
#undef DAT_1000b032
#define DAT_1000b032 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1956U)))
#undef DAT_1000b033
#define DAT_1000b033 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1957U)))
#undef DAT_1000b034
#define DAT_1000b034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1958U)))
#undef DAT_1000b035
#define DAT_1000b035 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1959U)))
#undef DAT_1000b036
#define DAT_1000b036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195aU)))
#undef DAT_1000b037
#define DAT_1000b037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195bU)))
#undef DAT_1000b038
#define DAT_1000b038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195cU)))
#undef DAT_1000b039
#define DAT_1000b039 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195dU)))
#undef DAT_1000b03a
#define DAT_1000b03a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195eU)))
#undef DAT_1000b03b
#define DAT_1000b03b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195fU)))
#undef DAT_1000b03c
#define DAT_1000b03c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1960U)))
#undef DAT_1000b03d
#define DAT_1000b03d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1961U)))
#undef DAT_1000b03e
#define DAT_1000b03e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1962U)))
#undef DAT_1000b03f
#define DAT_1000b03f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1963U)))
#undef DAT_1000b040
#define DAT_1000b040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1964U)))
#undef DAT_1000b041
#define DAT_1000b041 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1965U)))
#undef DAT_1000b042
#define DAT_1000b042 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1966U)))
#undef DAT_1000b043
#define DAT_1000b043 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1967U)))
#undef DAT_1000b044
#define DAT_1000b044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1968U)))
#undef DAT_1000b045
#define DAT_1000b045 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1969U)))
#undef DAT_1000b046
#define DAT_1000b046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196aU)))
#undef DAT_1000b047
#define DAT_1000b047 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196bU)))
#undef DAT_1000b048
#define DAT_1000b048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196cU)))
#undef DAT_1000b049
#define DAT_1000b049 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196dU)))
#undef DAT_1000b04a
#define DAT_1000b04a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196eU)))
#undef DAT_1000b04b
#define DAT_1000b04b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196fU)))
#undef DAT_1000b04c
#define DAT_1000b04c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1970U)))
#undef DAT_1000b04d
#define DAT_1000b04d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1971U)))
#undef DAT_1000b04e
#define DAT_1000b04e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1972U)))
#undef DAT_1000b04f
#define DAT_1000b04f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1973U)))
#undef _DAT_1000b008
#define _DAT_1000b008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x192cU)))
#undef _DAT_1000b00c
#define _DAT_1000b00c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1930U)))
#undef _DAT_1000b010
#define _DAT_1000b010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1934U)))
#undef _DAT_1000b014
#define _DAT_1000b014 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1938U)))
#undef str_100098fd
#define str_100098fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#undef str_10009d34
#define str_10009d34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x658U)))
#undef str_10009d52
#define str_10009d52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x676U)))
#undef str_10009d6e
#define str_10009d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#undef str_10009d84
#define str_10009d84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a8U)))
#undef str_10009d9e
#define str_10009d9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c2U)))
#undef str_10009db2
#define str_10009db2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_10009dbe
#define str_10009dbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e2U)))
#undef str_10009dce
#define str_10009dce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f2U)))
#undef str_10009ddb
#define str_10009ddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ffU)))
#undef str_10009deb
#define str_10009deb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70fU)))
#undef str_10009df5
#define str_10009df5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x719U)))
#undef str_10009dfd
#define str_10009dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x721U)))
#undef str_10009e06
#define str_10009e06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72aU)))
#undef str_10009e15
#define str_10009e15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x739U)))
#undef str_10009e1e
#define str_10009e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x742U)))
#undef str_10009e27
#define str_10009e27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74bU)))
#undef str_10009e2f
#define str_10009e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x753U)))
#undef str_10009e3a
#define str_10009e3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75eU)))
#define local_4b4 (*(undefined4 *)(frame + 1052))
#define local_478 (*(byte *)(frame + 1112))
#define local_470 (*(int *)(frame + 1120))
#define local_464 (*(int *)(frame + 1132))
#define local_b4 (*(undefined4 *)(frame + 2076))
#define local_54 (*(undefined4 *)(frame + 2172))
#define acStack_8b5 (*(char (*)[1024])(frame + 27))
#define local_50 (*(undefined4 (*)[3])(frame + 2176))
#define cStack_4b5 (*(char *)(frame + 1051))
#define local_44 (*(undefined4 *)(frame + 2188))
#define local_40 (*(undefined4 *)(frame + 2192))
#define local_3c (*(undefined4 *)(frame + 2196))
#define local_38 (*(undefined4 *)(frame + 2200))
#define local_34 (*(undefined4 *)(frame + 2204))
#define cStack_b5 (*(char *)(frame + 2075))
#define local_30 (*(undefined4 *)(frame + 2208))
#define local_2c (*(int *)(frame + 2212))
#define local_28 (*(uint *)(frame + 2216))
#define local_24 (*(uint *)(frame + 2220))
#define local_1f (*(byte *)(frame + 2225))
#define local_1e (*(ushort *)(frame + 2226))
#define local_1c (*(uint *)(frame + 2228))
#define local_18 (*(ushort * *)(frame + 2232))
#define local_14 (*(int * *)(frame + 2236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001520(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2288] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  char cVar11;
  byte bVar12;
  byte bVar14;
  int iVar13;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  ushort *puVar18;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  if (*(short *)(in_EDX + 4) != 0x1af4) {
    return;
  }
  if ((*(short *)(in_EDX + 6) != 0x1044) && (*(short *)(in_EDX + 6) != 0x1005)) {
    return;
  }
  local_18 = (ushort *)in_EDX;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8b5[1] = '\0';
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 1] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar11 = 'r';
    pcVar7 = str_100098fd;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar3 + 1] = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8b5[uVar3 + 1] = '\0';
  puVar18 = local_18;
  recovered_10003280((uint)(acStack_8b5 + 1),in_ECX,(undefined1 *)local_18,(int)(acStack_8b5 + 1));
  local_b4 = 0;
  local_50[0] = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  bVar2 = recovered_100085c0(in_ECX,puVar18,&local_4b4);
  local_14 = in_ECX;
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8b5[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar7 = str_10009d34;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_8b5[uVar3 + 1] = cVar11;
        uVar3 = uVar3 + 1;
        cVar11 = *pcVar7;
        if (cVar11 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
  }
  else {
    recovered_10008c80(in_ECX,&local_4b4);
    if ((local_478 & 8) == 0) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8b5[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar7 = str_10009d52;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_8b5[uVar3 + 1] = cVar11;
          uVar3 = uVar3 + 1;
          cVar11 = *pcVar7;
          if (cVar11 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
    }
    else if ((local_470 == 0) || (local_464 == 0)) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8b5[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar7 = str_10009d6e;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_8b5[uVar3 + 1] = cVar11;
          uVar3 = uVar3 + 1;
          cVar11 = *pcVar7;
          if (cVar11 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
    }
    else {
      DAT_1000b000 = 0;
      DAT_1000b001 = 0;
      DAT_1000b002 = 0;
      DAT_1000b003 = 0;
      DAT_1000b004 = 0;
      DAT_1000b005 = 0;
      DAT_1000b006 = 0;
      DAT_1000b007 = 0;
      _DAT_1000b008 = 0;
      _DAT_1000b00c = 0;
      DAT_1000b00e = 0;
      DAT_1000b00f = 0;
      _DAT_1000b010 = 0;
      _DAT_1000b014 = 0;
      DAT_1000b020 = 0;
      DAT_1000b021 = 0;
      DAT_1000b022 = 0;
      DAT_1000b023 = 0;
      DAT_1000b024 = 0;
      DAT_1000b025 = 0;
      DAT_1000b026 = 0;
      DAT_1000b027 = 0;
      DAT_1000b028 = 0;
      DAT_1000b029 = 0;
      DAT_1000b02a = 0;
      DAT_1000b02b = 0;
      DAT_1000b030 = 0;
      DAT_1000b031 = 0;
      DAT_1000b032 = 0;
      DAT_1000b033 = 0;
      DAT_1000b034 = 0;
      DAT_1000b035 = 0;
      DAT_1000b036 = 0;
      DAT_1000b037 = 0;
      DAT_1000b038 = 0;
      DAT_1000b039 = 0;
      DAT_1000b03a = 0;
      DAT_1000b03b = 0;
      DAT_1000b03c = 0;
      DAT_1000b03d = 0;
      DAT_1000b03e = 0;
      DAT_1000b03f = 0;
      DAT_1000b040 = 0;
      DAT_1000b041 = 0;
      DAT_1000b042 = 0;
      DAT_1000b043 = 0;
      DAT_1000b044 = 0;
      DAT_1000b045 = 0;
      DAT_1000b046 = 0;
      DAT_1000b047 = 0;
      DAT_1000b048 = 0;
      DAT_1000b049 = 0;
      DAT_1000b04a = 0;
      DAT_1000b04b = 0;
      DAT_1000b04c = 0;
      DAT_1000b04d = 0;
      DAT_1000b04e = 0;
      DAT_1000b04f = 0;
      if (((((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x73 < (uint)in_ECX[2])) &&
            (((code *)in_ECX[0x1c] != (code *)0x0 &&
             (iVar13 = (*(code *)in_ECX[0x1c])(0,&DAT_1000b000,0x10,&local_b4,local_50), iVar13 != 0
             )))) && (*in_ECX == 0x54584b57)) &&
          (((0x73 < (uint)in_ECX[2] && ((code *)in_ECX[0x1c] != (code *)0x0)) &&
           ((iVar13 = (*(code *)in_ECX[0x1c])(0,&DAT_1000b010,6,&local_44,&local_40), iVar13 != 0 &&
            (((*in_ECX == 0x54584b57 && (0x73 < (uint)in_ECX[2])) &&
             ((code *)in_ECX[0x1c] != (code *)0x0)))))))) &&
         (((iVar13 = (*(code *)in_ECX[0x1c])(0,&DAT_1000b020,0xc,&local_3c,&local_38), iVar13 != 0
           && (*in_ECX == 0x54584b57)) &&
          ((0x73 < (uint)in_ECX[2] &&
           (((code *)in_ECX[0x1c] != (code *)0x0 &&
            (iVar13 = (*(code *)in_ECX[0x1c])(0,&DAT_1000b030,0x20,&local_34,&local_30), iVar13 != 0
            )))))))) {
        if ((local_4b4 != 0) && (*local_14 == 0x54584b57)) {
          if ((uint)local_14[2] < 0xc4) {
            if (0x6f < (uint)local_14[2]) goto LAB_100028cc;
          }
          else {
            pcVar10 = (code *)local_14[0x30];
            if (pcVar10 == (code *)0x0) {
LAB_100028cc:
              pcVar10 = (code *)local_14[0x1b];
              if (pcVar10 == (code *)0x0) goto LAB_100028fb;
            }
            (*pcVar10)(local_4b4 + 0x16,2,0);
            if ((local_4b4 == 0) || (*local_14 != 0x54584b57)) goto LAB_10002939;
          }
LAB_100028fb:
          if ((uint)local_14[2] < 0xc0) {
            if (0x6b < (uint)local_14[2]) goto LAB_1000291d;
          }
          else {
            pcVar10 = (code *)local_14[0x2f];
            if (pcVar10 == (code *)0x0) {
LAB_1000291d:
              pcVar10 = (code *)local_14[0x1a];
              if (pcVar10 == (code *)0x0) goto LAB_10002939;
            }
            (*pcVar10)(local_4b4 + 0x18,2,&local_2c);
          }
        }
LAB_10002939:
        piVar1 = local_14;
        if (local_2c == 0) {
          recovered_10002ed0((int)(acStack_8b5 + 1),0x400,str_10009d9e);
          recovered_10002d80((int)(acStack_8b5 + 1),str_10009db2,0);
          puVar18 = local_18;
        }
        else {
          DAT_1000b000 = (undefined1)local_34;
          DAT_1000b001 = (undefined1)((uint)local_34 >> 8);
          DAT_1000b002 = (undefined1)((uint)local_34 >> 0x10);
          DAT_1000b003 = (undefined1)((uint)local_34 >> 0x18);
          DAT_1000b004 = (undefined1)local_30;
          DAT_1000b005 = (undefined1)((uint)local_30 >> 8);
          DAT_1000b006 = (undefined1)((uint)local_30 >> 0x10);
          DAT_1000b007 = (undefined1)((uint)local_30 >> 0x18);
          _DAT_1000b008 = 0x20;
          _DAT_1000b00c = 2;
          _DAT_1000b010 = 0x10000;
          _DAT_1000b014 = 0;
          recovered_10009590(local_14,local_4b4,0x18,1);
          recovered_100095e0(piVar1,local_4b4,0x20,local_b4,local_50[0]);
          recovered_100095e0(piVar1,local_4b4,0x28,local_44,local_40);
          recovered_100095e0(piVar1,local_4b4,0x30,local_3c,local_38);
          if ((((((*piVar1 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
                ((code *)local_14[0x1d] != (code *)0x0)) &&
               ((((*(code *)local_14[0x1d])(0,&DAT_1000b000,0x10), *local_14 == 0x54584b57 &&
                 (0x77 < (uint)local_14[2])) &&
                (((code *)local_14[0x1d] != (code *)0x0 &&
                 (((*(code *)local_14[0x1d])(0,&DAT_1000b010,6), *local_14 == 0x54584b57 &&
                  (0x77 < (uint)local_14[2])))))))) && ((code *)local_14[0x1d] != (code *)0x0)) &&
             ((((*(code *)local_14[0x1d])(0,&DAT_1000b020,0xc), *local_14 == 0x54584b57 &&
               (0x77 < (uint)local_14[2])) && ((code *)local_14[0x1d] != (code *)0x0)))) {
            (*(code *)local_14[0x1d])(0,&DAT_1000b030,0x20);
          }
          piVar1 = local_14;
          recovered_10009590(local_14,local_4b4,0x1c,1);
          recovered_10009530(piVar1,local_4b4,0x1c,(int)&local_28);
          recovered_10009480(piVar1,local_4b4,0x14,(int)&local_24);
          recovered_100094e0(piVar1,local_4b4,local_24 | 4);
          recovered_10009480(piVar1,local_4b4,0x14,(int)&local_24);
          if (((*piVar1 == 0x54584b57) && (0x7b < (uint)local_14[2])) &&
             ((code *)local_14[0x1e] != (code *)0x0)) {
            (*(code *)local_14[0x1e])();
          }
          recovered_10009590(local_14,local_464,0,0);
          iVar13 = 100;
          do {
            if (((*local_14 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
               ((code *)local_14[0x1d] != (code *)0x0)) {
              (*(code *)local_14[0x1d])(0,&DAT_1000b020,0xc);
            }
            uVar4 = (uint)CONCAT11(DAT_1000b023,DAT_1000b022);
            if (uVar4 != 0) goto LAB_10002c49;
            if (((*local_14 == 0x54584b57) && (0x33 < (uint)local_14[2])) &&
               ((code *)local_14[0xc] != (code *)0x0)) {
              (*(code *)local_14[0xc])(100);
            }
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          uVar4 = 0;
LAB_10002c49:
          if (((*local_14 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
             ((code *)local_14[0x1d] != (code *)0x0)) {
            (*(code *)local_14[0x1d])(0,&DAT_1000b030,0x20);
          }
          if (uVar4 == 0) {
            uVar3 = 0;
            local_1c = 0;
          }
          else {
            uVar3 = CONCAT13(DAT_1000b02b,CONCAT12(DAT_1000b02a,CONCAT11(DAT_1000b029,DAT_1000b028))
                            );
            local_1c = CONCAT13(DAT_1000b033,
                                CONCAT12(DAT_1000b032,CONCAT11(DAT_1000b031,DAT_1000b030)));
          }
          pcVar7 = acStack_8b5 + 1;
          recovered_10002ed0((int)pcVar7,0x400,str_10009dbe);
          recovered_10002d80((int)pcVar7,str_10009dce,1);
          recovered_10002d80((int)pcVar7,str_10009ddb,local_28);
          recovered_10002f40((int)pcVar7,str_10009deb,local_24);
          recovered_10002d80((int)pcVar7,str_10009df5,uVar4);
          recovered_10002d80((int)pcVar7,str_10009dfd,uVar3);
          puVar18 = local_18;
          if (uVar4 != 0) {
            recovered_10002f40((int)(acStack_8b5 + 1),str_10009e06,local_1c);
          }
        }
        goto LAB_10001aef;
      }
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8b5[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar7 = str_10009d84;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_8b5[uVar3 + 1] = cVar11;
          uVar3 = uVar3 + 1;
          cVar11 = *pcVar7;
          if (cVar11 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
    }
  }
  puVar18 = local_18;
  acStack_8b5[uVar3 + 1] = '\0';
LAB_10001aef:
  local_54 = recovered_100083f0((int)puVar18);
  local_b4 = local_b4 & 0xffffff00;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_50 + (uVar3 - 100)) != '\0');
  if (uVar3 + 1 < 0x60) {
    cVar11 = '/';
    pcVar7 = &DAT_10009920;
    do {
      *(char *)((int)local_50 + (uVar3 - 100)) = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
      pcVar7 = pcVar7 + 1;
    } while (uVar3 < 0x5f);
  }
  *(undefined1 *)((int)local_50 + (uVar3 - 100)) = 0;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_50 + (uVar3 - 100)) != '\0');
  if (uVar4 < 0x60) {
    *(undefined1 *)((int)local_50 + (uVar3 - 100)) = 0x2f;
    uVar3 = uVar4;
  }
  *(undefined1 *)((int)local_50 + (uVar3 - 100)) = 0;
  bVar12 = (byte)*puVar18;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_50 + (uVar3 - 100)) != '\0');
  if (bVar12 < 0xa0) {
    bVar15 = bVar12 >> 4 | 0x30;
  }
  else {
    bVar15 = (bVar12 >> 4) + 0x37;
  }
  if (uVar3 + 1 < 0x60) {
    *(byte *)((int)local_50 + (uVar3 - 100)) = bVar15;
    *(undefined1 *)((int)local_50 + (uVar3 - 99)) = 0;
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_50 + (uVar3 - 100)) != '\0');
  bVar14 = (byte)(bVar12 & 0xffff0f);
  if (bVar14 < 10) {
    uVar4 = (bVar12 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar4 = (uint)(byte)(bVar14 + 0x37) << 8;
  }
  bVar12 = (byte)(uVar4 >> 8);
  if (uVar3 + 1 < 0x60) {
    *(byte *)((int)local_50 + (uVar3 - 100)) = bVar12;
    *(undefined1 *)((int)local_50 + (uVar3 - 99)) = 0;
  }
  uVar3 = 0;
  do {
    uVar9 = uVar3;
    uVar3 = uVar9 + 1;
  } while (*(char *)((int)local_50 + (uVar9 - 100)) != '\0');
  if (uVar3 < 0x60) {
    *(undefined1 *)((int)local_50 + (uVar9 - 100)) = 0x3a;
    uVar9 = uVar3;
  }
  *(undefined1 *)((int)local_50 + (uVar9 - 100)) = 0;
  bVar14 = *(byte *)((int)puVar18 + 1);
  uVar3 = 0;
  do {
    uVar9 = uVar3;
    uVar3 = uVar9 + 1;
  } while (*(char *)((int)local_50 + (uVar9 - 100)) != '\0');
  if (bVar14 < 0xa0) {
    bVar5 = bVar14 >> 4 | 0x30;
  }
  else {
    bVar5 = (bVar14 >> 4) + 0x37;
  }
  if (uVar9 + 1 < 0x60) {
    *(byte *)((int)local_50 + (uVar9 - 100)) = bVar5;
    *(undefined1 *)((int)local_50 + (uVar9 - 99)) = 0;
  }
  uVar16 = CONCAT11(bVar14,bVar15) & 0xfff;
  uVar3 = 0;
  do {
    uVar9 = uVar3;
    uVar3 = uVar9 + 1;
  } while (*(char *)((int)local_50 + (uVar9 - 100)) != '\0');
  bVar15 = (byte)(uVar16 >> 8);
  if (bVar15 < 10) {
    uVar16 = uVar16 | 0x3000;
  }
  else {
    uVar16 = CONCAT11(bVar15 + 0x37,(char)uVar16);
  }
  if (uVar9 + 1 < 0x60) {
    *(char *)((int)local_50 + (uVar9 - 100)) = (char)(uVar16 >> 8);
    *(undefined1 *)((int)local_50 + (uVar9 - 99)) = 0;
  }
  uVar3 = 0;
  do {
    uVar9 = uVar3;
    uVar3 = uVar9 + 1;
  } while (*(char *)((int)local_50 + (uVar9 - 100)) != '\0');
  if (uVar3 < 0x60) {
    *(undefined1 *)((int)local_50 + (uVar9 - 100)) = 0x2e;
    uVar9 = uVar3;
  }
  *(undefined1 *)((int)local_50 + (uVar9 - 100)) = 0;
  uVar3 = (uint)(byte)puVar18[1];
  local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar5);
  if (uVar3 == 0) {
    uVar9 = 0;
    do {
      uVar17 = uVar9;
      uVar9 = uVar17 + 1;
    } while (*(char *)((int)local_50 + (uVar17 - 100)) != '\0');
    if (uVar17 + 1 < 0x60) {
      *(undefined2 *)((int)local_50 + (uVar17 - 100)) = 0x30;
    }
  }
  else {
    local_1e = uVar16;
    local_1f = bVar12;
    uVar4 = uVar3;
    uVar9 = 0;
    do {
      acStack_8b5[uVar9 + 0x401] = (byte)(uVar4 % 10) | 0x30;
      uVar16 = local_1e;
      uVar17 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar2 = 9 < uVar4;
      uVar4 = uVar4 / 10;
      uVar9 = uVar17;
    } while (bVar2);
    uVar4 = (uint)local_1f << 8;
    do {
      iVar13 = uVar17 + 0x400;
      uVar17 = uVar17 - 1;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((int)local_50 + (uVar8 - 100)) != '\0');
      if (uVar8 + 1 < 0x60) {
        *(char *)((int)local_50 + (uVar8 - 100)) = acStack_8b5[iVar13];
        *(undefined1 *)((int)local_50 + (uVar8 - 99)) = 0;
      }
    } while (uVar17 != 0);
  }
  local_4b4 = local_4b4 & 0xffffff00;
  uVar9 = 0;
  do {
    uVar17 = uVar9;
    uVar9 = uVar17 + 1;
  } while (acStack_8b5[uVar17 + 0x401] != '\0');
  if (uVar17 + 1 < 0x400) {
    uVar4 = CONCAT31((int3)(uVar4 >> 8),0x70);
    pcVar7 = &DAT_10009e11;
    do {
      acStack_8b5[uVar17 + 0x401] = (char)uVar4;
      uVar17 = uVar17 + 1;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),*pcVar7);
      if (*pcVar7 == '\0') break;
      pcVar7 = pcVar7 + 1;
    } while (uVar17 < 0x3ff);
  }
  acStack_8b5[uVar17 + 0x401] = '\0';
  uVar9 = 0;
  do {
    uVar17 = uVar9;
    uVar9 = uVar17 + 1;
  } while (acStack_8b5[uVar17 + 0x401] != '\0');
  if (uVar17 + 1 < 0x400) {
    acStack_8b5[uVar17 + 0x401] = (char)uVar16;
    acStack_8b5[uVar17 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar17 = uVar9;
    uVar9 = uVar17 + 1;
  } while (acStack_8b5[uVar17 + 0x401] != '\0');
  if (uVar17 + 1 < 0x400) {
    acStack_8b5[uVar17 + 0x401] = (char)(uVar4 >> 8);
    acStack_8b5[uVar17 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = ':';
    uVar9 = uVar4;
  }
  acStack_8b5[uVar9 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = (char)local_1c;
    acStack_8b5[uVar9 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = (char)(uVar16 >> 8);
    acStack_8b5[uVar9 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = '.';
    uVar9 = uVar4;
  }
  acStack_8b5[uVar9 + 0x401] = '\0';
  puVar18 = local_18;
  if (uVar3 == 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8b5[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      (acStack_8b5 + uVar3 + 0x401)[0] = '0';
      (acStack_8b5 + uVar3 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar4 = 0;
    do {
      *(byte *)((int)local_50 + uVar4) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
      puVar18 = local_18;
      uVar9 = uVar4 + 1;
      if (8 < uVar4) break;
      bVar2 = 9 < uVar3;
      uVar4 = uVar9;
      uVar3 = uVar3 / 10;
    } while (bVar2);
    do {
      iVar13 = uVar9 - 1;
      uVar9 = uVar9 - 1;
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8b5[uVar3 + 0x401] != '\0');
      if (uVar3 + 1 < 0x400) {
        acStack_8b5[uVar3 + 0x401] = *(char *)((int)local_50 + iVar13);
        acStack_8b5[uVar3 + 0x402] = '\0';
      }
    } while (uVar9 != 0);
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar7 = str_10009e15;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar3 + 0x401] = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  uVar16 = puVar18[2];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)(uVar16 >> 8);
    if (uVar16 < 0xa000) {
      bVar12 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar12 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar6 = uVar16 >> 8 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)uVar6;
    if (uVar6 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar6 = uVar16 >> 4 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)uVar6;
    if (uVar6 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)(uVar16 & 0xf);
    if ((uVar16 & 0xf) < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar7 = str_10009e1e;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar3 + 0x401] = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  uVar16 = puVar18[3];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)(uVar16 >> 8);
    if (uVar16 < 0xa000) {
      bVar12 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar12 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar6 = uVar16 >> 8 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)uVar6;
    if (uVar6 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar6 = uVar16 >> 4 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)uVar6;
    if (uVar6 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar12 = (byte)(uVar16 & 0xf);
    if ((uVar16 & 0xf) < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar7 = str_10009e27;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar3 + 0x401] = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  bVar12 = (byte)puVar18[4];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar15 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar15;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar3 + 0x401] = '.';
    uVar3 = uVar4;
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  bVar12 = *(byte *)((int)puVar18 + 9);
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar15 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar15;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar3 + 0x401] = '.';
    uVar3 = uVar4;
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  bVar12 = (byte)puVar18[5];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar15 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar15;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar7 = str_10009e2f;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar3 + 0x401] = cVar11;
      uVar3 = uVar3 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8b5[uVar3 + 0x401] = '\0';
  bVar12 = *(byte *)((int)puVar18 + 0xb);
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar15 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar12 >> 4) + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar15;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8b5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    acStack_8b5[uVar3 + 0x401] = bVar12;
    acStack_8b5[uVar3 + 0x402] = '\0';
  }
  uVar3 = *(uint *)(puVar18 + 8);
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = ' ';
    uVar9 = uVar4;
  }
  acStack_8b5[uVar9 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar11 = 'c';
    pcVar7 = str_10009e3a;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_8b5[uVar9 + 0x401] = cVar11;
      uVar9 = uVar9 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_8b5[uVar9 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1;
  } while (acStack_8b5[uVar9 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8b5[uVar9 + 0x401] = '=';
    uVar9 = uVar4;
  }
  acStack_8b5[uVar9 + 0x401] = '\0';
  iVar13 = 8;
  do {
    uVar9 = uVar3 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
    bVar15 = (byte)uVar9;
    bVar12 = bVar15 + 0x37;
    uVar4 = 0;
    do {
      uVar17 = uVar4;
      uVar4 = uVar17 + 1;
    } while (acStack_8b5[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (uVar9 < 10) {
        bVar12 = bVar15 | 0x30;
      }
      acStack_8b5[uVar17 + 0x401] = bVar12;
      acStack_8b5[uVar17 + 0x402] = '\0';
    }
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  uVar4 = 0;
  puVar18 = local_18;
  do {
    local_1c = uVar4;
    uVar4 = *(uint *)(puVar18 + uVar4 * 2 + 10);
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        uVar9 = uVar3;
        uVar3 = uVar9 + 1;
      } while (acStack_8b5[uVar9 + 0x401] != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar7 = &DAT_10009e43;
        do {
          acStack_8b5[uVar9 + 0x401] = cVar11;
          uVar9 = uVar9 + 1;
          cVar11 = *pcVar7;
          if (cVar11 == '\0') break;
          pcVar7 = pcVar7 + 1;
        } while (uVar9 < 0x3ff);
      }
      acStack_8b5[uVar9 + 0x401] = '\0';
      if (local_1c == 0) {
        uVar3 = 0;
        do {
          uVar9 = uVar3;
          uVar3 = uVar9 + 1;
        } while (acStack_8b5[uVar9 + 0x401] != '\0');
        if (uVar9 + 1 < 0x400) {
          (acStack_8b5 + uVar9 + 0x401)[0] = '0';
          (acStack_8b5 + uVar9 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar3 = local_1c;
        uVar9 = 0;
        do {
          *(byte *)((int)local_50 + uVar9) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
          uVar17 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar2 = 9 < uVar3;
          uVar3 = uVar3 / 10;
          uVar9 = uVar17;
        } while (bVar2);
        do {
          iVar13 = uVar17 - 1;
          uVar17 = uVar17 - 1;
          uVar3 = 0;
          do {
            uVar9 = uVar3;
            uVar3 = uVar9 + 1;
          } while (acStack_8b5[uVar9 + 0x401] != '\0');
          if (uVar9 + 1 < 0x400) {
            acStack_8b5[uVar9 + 0x401] = *(char *)((int)local_50 + iVar13);
            acStack_8b5[uVar9 + 0x402] = '\0';
          }
        } while (uVar17 != 0);
        puVar18 = local_18;
      }
      uVar3 = 0;
      do {
        uVar9 = uVar3;
        uVar3 = uVar9 + 1;
      } while (acStack_8b5[uVar9 + 0x401] != '\0');
      if (uVar3 < 0x400) {
        acStack_8b5[uVar9 + 0x401] = '=';
        uVar9 = uVar3;
      }
      acStack_8b5[uVar9 + 0x401] = '\0';
      iVar13 = 8;
      do {
        uVar9 = uVar4 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
        bVar15 = (byte)uVar9;
        bVar12 = bVar15 + 0x37;
        uVar3 = 0;
        do {
          uVar17 = uVar3;
          uVar3 = uVar17 + 1;
        } while (acStack_8b5[uVar17 + 0x401] != '\0');
        if (uVar17 + 1 < 0x400) {
          if (uVar9 < 10) {
            bVar12 = bVar15 | 0x30;
          }
          acStack_8b5[uVar17 + 0x401] = bVar12;
          acStack_8b5[uVar17 + 0x402] = '\0';
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    piVar1 = local_14;
    uVar4 = local_1c + 1;
  } while (uVar4 != 6);
  if (acStack_8b5[1] != '\0') {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8b5[uVar3 + 0x401] != '\0');
    if (uVar4 < 0x400) {
      acStack_8b5[uVar3 + 0x401] = ' ';
      uVar3 = uVar4;
    }
    acStack_8b5[uVar3 + 0x401] = '\0';
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8b5[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      pcVar7 = acStack_8b5 + 2;
      cVar11 = acStack_8b5[1];
      do {
        acStack_8b5[uVar3 + 0x401] = cVar11;
        uVar3 = uVar3 + 1;
        cVar11 = *pcVar7;
        if (cVar11 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar3 < 0x3ff);
    }
    acStack_8b5[uVar3 + 0x401] = '\0';
  }
  if ((piVar1 != (int *)0x0) && (pcVar10 = (code *)piVar1[3], pcVar10 != (code *)0x0)) {
    (*pcVar10)(&local_b4,local_54,&local_4b4);
  }
  return;
}

#undef DAT_10009920
#undef DAT_10009e11
#undef DAT_10009e43
#undef DAT_1000b000
#undef DAT_1000b001
#undef DAT_1000b002
#undef DAT_1000b003
#undef DAT_1000b004
#undef DAT_1000b005
#undef DAT_1000b006
#undef DAT_1000b007
#undef DAT_1000b008
#undef DAT_1000b00c
#undef DAT_1000b00e
#undef DAT_1000b00f
#undef DAT_1000b010
#undef DAT_1000b014
#undef DAT_1000b020
#undef DAT_1000b021
#undef DAT_1000b022
#undef DAT_1000b023
#undef DAT_1000b024
#undef DAT_1000b025
#undef DAT_1000b026
#undef DAT_1000b027
#undef DAT_1000b028
#undef DAT_1000b029
#undef DAT_1000b02a
#undef DAT_1000b02b
#undef DAT_1000b030
#undef DAT_1000b031
#undef DAT_1000b032
#undef DAT_1000b033
#undef DAT_1000b034
#undef DAT_1000b035
#undef DAT_1000b036
#undef DAT_1000b037
#undef DAT_1000b038
#undef DAT_1000b039
#undef DAT_1000b03a
#undef DAT_1000b03b
#undef DAT_1000b03c
#undef DAT_1000b03d
#undef DAT_1000b03e
#undef DAT_1000b03f
#undef DAT_1000b040
#undef DAT_1000b041
#undef DAT_1000b042
#undef DAT_1000b043
#undef DAT_1000b044
#undef DAT_1000b045
#undef DAT_1000b046
#undef DAT_1000b047
#undef DAT_1000b048
#undef DAT_1000b049
#undef DAT_1000b04a
#undef DAT_1000b04b
#undef DAT_1000b04c
#undef DAT_1000b04d
#undef DAT_1000b04e
#undef DAT_1000b04f
#undef _DAT_1000b008
#undef _DAT_1000b00c
#undef _DAT_1000b010
#undef _DAT_1000b014
#undef str_100098fd
#undef str_10009d34
#undef str_10009d52
#undef str_10009d6e
#undef str_10009d84
#undef str_10009d9e
#undef str_10009db2
#undef str_10009dbe
#undef str_10009dce
#undef str_10009ddb
#undef str_10009deb
#undef str_10009df5
#undef str_10009dfd
#undef str_10009e06
#undef str_10009e15
#undef str_10009e1e
#undef str_10009e27
#undef str_10009e2f
#undef str_10009e3a
#undef local_4b4
#undef local_478
#undef local_470
#undef local_464
#undef local_b4
#undef local_54
#undef acStack_8b5
#undef local_50
#undef cStack_4b5
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef cStack_b5
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1f
#undef local_1e
#undef local_1c
#undef local_18
#undef local_14

#define abStack_1c (*(byte (*)[11])(frame + 20))
#define local_11 (*(bool *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

void recovered_10002d80(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;

  if (in_ECX == 0) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x20;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar5 = *in_EDX;
      local_11 = cVar5 == '\0';
      if (uVar3 + 1 < 0x400 && cVar5 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar3) = cVar5;
          uVar3 = uVar3 + 1;
          cVar5 = *in_EDX;
          if (cVar5 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x3d;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    if (param_3 == 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < 0x400) {
        *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
        return;
      }
      return;
    }
  }
  uVar4 = 0;
  do {
    abStack_1c[uVar4 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    uVar3 = uVar4 + 1;
    if (8 < uVar4) break;
    bVar2 = 9 < param_3;
    param_3 = param_3 / 10;
    uVar4 = uVar3;
  } while (bVar2);
  do {
    if (in_ECX != 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < 0x400) {
        *(byte *)(in_ECX + -1 + uVar4) = abStack_1c[uVar3];
        *(undefined1 *)(in_ECX + uVar4) = 0;
      }
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}

#undef abStack_1c
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed0
 */

void recovered_10002ed0(int in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (in_ECX != 0) {
    uVar4 = 0;
    do {
      uVar2 = uVar4;
      uVar4 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (param_3 != (char *)0x0) {
      cVar1 = *param_3;
      if (uVar2 + 1 < in_EDX && cVar1 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(in_ECX + uVar2) = cVar1;
          cVar1 = *param_3;
          uVar4 = uVar2 + 1;
          if (cVar1 == '\0') break;
          uVar3 = uVar2 + 2;
          uVar2 = uVar4;
        } while (uVar3 < in_EDX);
      }
      else {
        uVar4 = uVar2;
      }
      *(undefined1 *)(in_ECX + uVar4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f40
 */

void recovered_10002f40(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;

  if (in_ECX != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x20;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar3 = *in_EDX;
      if (uVar2 + 1 < 0x400 && cVar3 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar2) = cVar3;
          uVar2 = uVar2 + 1;
          cVar3 = *in_EDX;
          if (cVar3 == '\0') break;
        } while (uVar2 < 0x3ff);
      }
      *(undefined1 *)(in_ECX + uVar2) = 0;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x3d;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
  }
  iVar6 = 8;
  do {
    uVar5 = param_3 >> ((char)iVar6 * '\x04' - 4U & 0x1f) & 0xf;
    bVar4 = (byte)uVar5;
    if (uVar5 < 10) {
      bVar4 = bVar4 | 0x30;
    }
    else {
      bVar4 = bVar4 + 0x37;
    }
    if (in_ECX != 0) {
      uVar5 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar1 != '\0');
      if (uVar5 < 0x400) {
        *(byte *)(in_ECX + -1 + uVar5) = bVar4;
        *(undefined1 *)(in_ECX + uVar5) = 0;
      }
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined4
recovered_10003070(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_30

#undef DAT_10009be9
#define DAT_10009be9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50dU)))
#undef DAT_10009bf1
#define DAT_10009bf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x515U)))
#undef DAT_10009c24
#define DAT_10009c24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x548U)))
#undef DAT_10009c2c
#define DAT_10009c2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x550U)))
#undef DAT_10009c34
#define DAT_10009c34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x558U)))
#undef DAT_10009c48
#define DAT_10009c48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_10009c50
#define DAT_10009c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x574U)))
#undef DAT_10009c58
#define DAT_10009c58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57cU)))
#undef DAT_10009c60
#define DAT_10009c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x584U)))
#undef DAT_10009c73
#define DAT_10009c73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x597U)))
#undef DAT_10009d27
#define DAT_10009d27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef str_10009928
#define str_10009928 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_10009938
#define str_10009938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25cU)))
#undef str_1000994c
#define str_1000994c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x270U)))
#undef str_10009964
#define str_10009964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
#undef str_1000997c
#define str_1000997c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a0U)))
#undef str_10009995
#define str_10009995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#undef str_100099a6
#define str_100099a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2caU)))
#undef str_100099b6
#define str_100099b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_100099c5
#define str_100099c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_100099ce
#define str_100099ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_100099ea
#define str_100099ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_100099f5
#define str_100099f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x319U)))
#undef str_10009a05
#define str_10009a05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x329U)))
#undef str_10009a0c
#define str_10009a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_10009a1c
#define str_10009a1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#undef str_10009a29
#define str_10009a29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_10009a3f
#define str_10009a3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x363U)))
#undef str_10009a55
#define str_10009a55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_10009a6b
#define str_10009a6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10009a81
#define str_10009a81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a5U)))
#undef str_10009a9a
#define str_10009a9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_10009ab2
#define str_10009ab2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
#undef str_10009abf
#define str_10009abf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e3U)))
#undef str_10009ad0
#define str_10009ad0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_10009ae4
#define str_10009ae4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_10009af4
#define str_10009af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_10009b0b
#define str_10009b0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#undef str_10009b1e
#define str_10009b1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x442U)))
#undef str_10009b28
#define str_10009b28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10009b3b
#define str_10009b3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45fU)))
#undef str_10009b52
#define str_10009b52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x476U)))
#undef str_10009b5e
#define str_10009b5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x482U)))
#undef str_10009b6a
#define str_10009b6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48eU)))
#undef str_10009b77
#define str_10009b77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
#undef str_10009b81
#define str_10009b81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a5U)))
#undef str_10009b95
#define str_10009b95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b9U)))
#undef str_10009ba4
#define str_10009ba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
#undef str_10009bb7
#define str_10009bb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dbU)))
#undef str_10009bc9
#define str_10009bc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4edU)))
#undef str_10009bdf
#define str_10009bdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x503U)))
#undef str_10009bf8
#define str_10009bf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51cU)))
#undef str_10009c02
#define str_10009c02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x526U)))
#undef str_10009c0e
#define str_10009c0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#undef str_10009c3b
#define str_10009c3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55fU)))
#undef str_10009c67
#define str_10009c67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
#undef str_10009c78
#define str_10009c78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59cU)))
#undef str_10009c82
#define str_10009c82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_10009c97
#define str_10009c97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_10009ca8
#define str_10009ca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ccU)))
#undef str_10009cb4
#define str_10009cb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d8U)))
#undef str_10009cc0
#define str_10009cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_10009ccc
#define str_10009ccc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f0U)))
#undef str_10009cdb
#define str_10009cdb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_10009ce5
#define str_10009ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x609U)))
#undef str_10009cf3
#define str_10009cf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x617U)))
#undef str_10009d04
#define str_10009d04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#undef str_10009d10
#define str_10009d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x634U)))
#undef str_10009d1c
#define str_10009d1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x640U)))
#undef str_10009d2b
#define str_10009d2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64fU)))
#define bStack_a5 (*(byte *)(frame + 27))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_9c (*(uint *)(frame + 36))
#define local_98 (*(uint *)(frame + 40))
#define local_94 (*(uint *)(frame + 44))
#define local_90 (*(uint *)(frame + 48))
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
#define local_54 (*(uint *)(frame + 108))
#define local_50 (*(uint *)(frame + 112))
#define local_4c (*(uint *)(frame + 116))
#define local_48 (*(uint *)(frame + 120))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(undefined4 *)(frame + 128))
#define local_3c (*(uint *)(frame + 132))
#define local_38 (*(uint *)(frame + 136))
#define local_34 (*(uint *)(frame + 140))
#define local_30 (*(uint *)(frame + 144))
#define local_2c (*(undefined4 *)(frame + 148))
#define local_28 (*(undefined4 *)(frame + 152))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(int * *)(frame + 168))
#define local_14 (*(ushort * *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

void recovered_10003280(uint in_EAX,int *in_ECX,undefined1 *in_EDX,int param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 uVar5;
  uint uVar3;
  code *pcVar4;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  ushort *puVar10;
  byte bVar11;
  uint uVar12;
  int *piVar13;
  byte *pbVar14;
  int *piVar15;
  bool bVar16;

  local_14 = (ushort *)in_EDX;
  if (in_EDX == (undefined1 *)0x0) {
    local_2c = CONCAT31((int3)(in_EAX >> 8),in_ECX == (int *)0x0);
    bVar16 = true;
LAB_10003387:
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_1000994c;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
joined_r0x100033de:
    local_3c = 0;
    if (bVar16) {
LAB_100033e4:
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      local_48 = 0;
      if (local_14 == (ushort *)0x0) {
        uVar12 = 1;
        if (local_3c == 0) {
          uVar12 = 0;
        }
        goto LAB_10005dba;
      }
      if (((char)local_14[4] == '\x01') && (*(char *)((int)local_14 + 9) == '\x06')) {
        if (((((*(uint *)(local_14 + 0x12) & 7) != 4) &&
             ((uVar12 = *(uint *)(local_14 + 0x14), (uVar12 & 6) != 4 && (uVar12 != 0)))) &&
            ((uVar12 & 1) == 0)) && (uVar12 = uVar12 & 0xfffffff0, uVar12 != 0)) {
          local_28 = 0;
          local_a4 = 0;
          if (((char)local_2c == '\0') && (*in_ECX == 0x54584b57)) {
            if (0xbb < (uint)in_ECX[2]) {
              if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_10006055;
              iVar1 = (*(code *)in_ECX[0x2e])(uVar12,0,0x1000,&local_28);
              if (iVar1 == 0) goto LAB_10003426;
              local_1c = local_28;
LAB_1000608b:
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar8 = 'a';
                  pcVar7 = str_10009bdf;
                  do {
                    pcVar7 = pcVar7 + 1;
                    *(char *)(param_4 + uVar6) = cVar8;
                    uVar6 = uVar6 + 1;
                    cVar8 = *pcVar7;
                    if (cVar8 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              iVar1 = 8;
              do {
                uVar12 = local_1c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                if (uVar12 < 10) {
                  uVar12 = uVar12 | 0x30;
                }
                else {
                  uVar12 = (uint)(byte)((char)uVar12 + 0x37);
                }
                PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
                if (param_4 != 0) {
                  uVar6 = 0;
                  do {
                    uVar3 = uVar6;
                    uVar6 = uVar3 + 1;
                  } while (*(char *)(param_4 + uVar3) != '\0');
                  if (uVar3 + 1 < 0x400) {
                    pbVar14 = (byte *)((int)&local_a4 + 1);
                    do {
                      *(char *)(param_4 + uVar3) = (char)uVar12;
                      uVar3 = uVar3 + 1;
                      uVar12 = (uint)*pbVar14;
                      if (*pbVar14 == 0) break;
                      pbVar14 = pbVar14 + 1;
                    } while (uVar3 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              local_28 = local_1c;
              if ((local_1c != 0) && (*in_ECX == 0x54584b57)) {
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007283;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10007283:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_100072b5;
                  }
                  (*pcVar4)(local_1c,4,&local_30);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007f47;
                }
LAB_100072b5:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007bbd;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10007bbd:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10007bf3;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 4,4,&local_38);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007f47;
                }
LAB_10007bf3:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007eb2;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10007eb2:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10007ee0;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 0xc,4,&local_44);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007f47;
                }
LAB_10007ee0:
                local_28 = local_1c;
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007f2b;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10007f2b:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10007f47;
                  }
                  (*pcVar4)(local_1c + 0x10,4,&local_48);
                }
              }
LAB_10007f47:
              if ((((int)local_38 < 0) || (local_28 == 0)) || (*in_ECX != 0x54584b57))
              goto LAB_10007fe1;
              iVar1 = local_28 + 4;
              uVar12 = in_ECX[2];
              if (uVar12 < 0xc4) {
                if (0x6f < uVar12) goto LAB_10007f84;
LAB_10007fba:
                if (uVar12 < 0x6c) goto LAB_10007fe1;
LAB_10007fcb:
                pcVar4 = (code *)in_ECX[0x1a];
                if (pcVar4 == (code *)0x0) goto LAB_10007fe1;
              }
              else {
                pcVar4 = (code *)in_ECX[0x30];
                if (pcVar4 == (code *)0x0) {
LAB_10007f84:
                  pcVar4 = (code *)in_ECX[0x1b];
                  if (pcVar4 != (code *)0x0) goto LAB_10007f8b;
                }
                else {
LAB_10007f8b:
                  (*pcVar4)(iVar1,4,local_38 | 0x80000000);
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007fe1;
                  iVar1 = local_28 + 4;
                }
                uVar12 = in_ECX[2];
                if (uVar12 < 0xc0) goto LAB_10007fba;
                pcVar4 = (code *)in_ECX[0x2f];
                if (pcVar4 == (code *)0x0) goto LAB_10007fcb;
              }
              (*pcVar4)(iVar1,4,&local_38);
LAB_10007fe1:
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar8 = 'a';
                  pcVar7 = &DAT_10009be9;
                  do {
                    *(char *)(param_4 + uVar6) = cVar8;
                    uVar6 = uVar6 + 1;
                    cVar8 = *pcVar7;
                    if (cVar8 == '\0') break;
                    pcVar7 = pcVar7 + 1;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              iVar1 = 8;
LAB_10008062:
              do {
                uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                bVar11 = (byte)uVar12;
                if (uVar12 < 10) {
                  bVar11 = bVar11 | 0x30;
                }
                else {
                  bVar11 = bVar11 + 0x37;
                }
                if (param_4 == 0) goto LAB_100080ab;
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = &DAT_10009bf1;
                do {
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10008129:
              iVar1 = 8;
LAB_10008133:
              uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 == 0) {
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) goto LAB_100081f9;
                goto LAB_10008133;
              }
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
              iVar1 = iVar1 + -1;
              if (iVar1 != 0) goto LAB_10008133;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = str_10009bf8;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100081f9:
              iVar1 = 8;
LAB_10008203:
              uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 == 0) {
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) goto LAB_100082c9;
                goto LAB_10008203;
              }
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
              iVar1 = iVar1 + -1;
              if (iVar1 != 0) goto LAB_10008203;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = str_10009c02;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100082c9:
              iVar1 = 8;
              do {
                uVar12 = local_48 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                bVar11 = (byte)uVar12;
                if (uVar12 < 10) {
                  bVar11 = bVar11 | 0x30;
                }
                else {
                  bVar11 = bVar11 + 0x37;
                }
                if (param_4 != 0) {
                  uVar12 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar12);
                    uVar12 = uVar12 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar12 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar12) = bVar11;
                    *(undefined1 *)(param_4 + uVar12) = 0;
                  }
                }
                iVar1 = iVar1 + -1;
                uVar12 = 1;
              } while (iVar1 != 0);
              goto LAB_1000348c;
            }
            if (0x67 < (uint)in_ECX[2]) {
LAB_10006055:
              if (((code *)in_ECX[0x19] != (code *)0x0) &&
                 (iVar1 = (*(code *)in_ECX[0x19])(uVar12,0,0x1000,&local_a4), iVar1 != 0)) {
                local_1c = local_a4;
                local_28 = local_a4;
                goto LAB_1000608b;
              }
            }
          }
        }
LAB_10003426:
        if (param_4 == 0) goto LAB_1000347c;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_10009bc9;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
      }
      else {
LAB_1000347c:
        uVar12 = 0;
      }
LAB_1000348c:
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      local_18 = in_ECX;
      if (((char)local_14[4] == '\x04') && (*(char *)((int)local_14 + 9) == '\x03')) {
        uVar6 = *(uint *)(local_14 + 10);
        if ((uVar6 & 1) == 0 && uVar6 != 0) {
          iVar1 = 0;
          if ((uVar6 & 6) == 4) {
            iVar1 = *(int *)(local_14 + 0xc);
          }
          uVar6 = uVar6 & 0xfffffff0;
          if (uVar6 != 0 || iVar1 != 0) {
            local_28 = 0;
            local_a4 = 0;
            if (((char)local_2c == '\0') && (*in_ECX == 0x54584b57)) {
              if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
                if (((0x67 < (uint)in_ECX[2] && iVar1 == 0) && ((code *)in_ECX[0x19] != (code *)0x0)
                    ) && (iVar1 = (*(code *)in_ECX[0x19])(uVar6,0,0x1000,&local_a4), iVar1 != 0)) {
                  local_34 = uVar12;
                  local_28 = local_a4;
                  goto LAB_10005297;
                }
              }
              else {
                iVar1 = (*(code *)in_ECX[0x2e])(uVar6,iVar1,0x1000,&local_28);
                in_ECX = local_18;
                if (iVar1 != 0) {
                  local_34 = uVar12;
LAB_10005297:
                  if (param_4 != 0) {
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar6 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
                      uVar3 = uVar6;
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar3 + 1 < 0x400) {
                      cVar8 = 'h';
                      pcVar7 = &DAT_10009c24;
                      do {
                        *(char *)(param_4 + uVar3) = cVar8;
                        uVar3 = uVar3 + 1;
                        cVar8 = *pcVar7;
                        if (cVar8 == '\0') break;
                        pcVar7 = pcVar7 + 1;
                      } while (uVar3 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar6 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
                      uVar3 = uVar6;
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                  }
                  iVar1 = 8;
                  do {
                    uVar6 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar6;
                    if (uVar6 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
                    if (param_4 != 0) {
                      uVar6 = 0;
                      do {
                        uVar3 = uVar6;
                        uVar6 = uVar3 + 1;
                      } while (*(char *)(param_4 + uVar3) != '\0');
                      if (uVar3 + 1 < 0x400) {
                        pbVar14 = (byte *)((int)&local_a4 + 1);
                        do {
                          *(byte *)(param_4 + uVar3) = bVar11;
                          uVar3 = uVar3 + 1;
                          bVar11 = *pbVar14;
                          if (bVar11 == 0) break;
                          pbVar14 = pbVar14 + 1;
                        } while (uVar3 < 0x3ff);
                      }
                      *(undefined1 *)(param_4 + uVar3) = 0;
                      in_ECX = local_18;
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar6 = 0;
                  local_34 = uVar12;
                  if (local_28 == 0) {
LAB_10007549:
                  }
                  else if (*in_ECX == 0x54584b57) {
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_10006fe2;
LAB_10007248:
                      if ((uint)in_ECX[2] < 0xc0) {
                        if (0x6b < (uint)in_ECX[2]) goto LAB_10007529;
LAB_10007547:
                        uVar6 = local_28;
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) {
LAB_10007529:
                          pcVar4 = (code *)in_ECX[0x1a];
                          if (pcVar4 == (code *)0x0) goto LAB_10007547;
                        }
                        (*pcVar4)(local_28 + 8,4,&local_38);
                        uVar6 = local_28;
                      }
                      goto LAB_10007549;
                    }
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) {
LAB_10006fe2:
                      pcVar4 = (code *)in_ECX[0x1a];
                      if (pcVar4 == (code *)0x0) goto LAB_10007248;
                    }
                    (*pcVar4)(local_28,4,&local_30);
                    uVar6 = 0;
                    if (local_28 != 0) {
                      uVar6 = local_28;
                      if (*in_ECX == 0x54584b57) goto LAB_10007248;
                    }
                  }
                  else {
                    uVar6 = local_28;
                  }
                  if ((local_38 & 1) == 0) {
                    uVar12 = 0;
                    if (uVar6 != 0) {
                      if (*in_ECX != 0x54584b57) goto LAB_100075c4;
                      local_1c = uVar6 + 8;
                      uVar3 = in_ECX[2];
                      if (uVar3 < 0xc4) {
                        if (0x6f < uVar3) goto LAB_10007842;
LAB_1000788d:
                        uVar12 = uVar6;
                        if (0x6b < uVar3) {
LAB_10007efb:
                          pcVar4 = (code *)in_ECX[0x1a];
                          uVar12 = uVar6;
                          if (pcVar4 != (code *)0x0) goto LAB_10007f08;
                        }
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x30];
                        if (pcVar4 == (code *)0x0) {
LAB_10007842:
                          pcVar4 = (code *)in_ECX[0x1b];
                          if (pcVar4 != (code *)0x0) goto LAB_10007849;
                        }
                        else {
LAB_10007849:
                          (*pcVar4)(local_1c,4,local_38 | 1);
                          uVar12 = 0;
                          if (local_28 == 0) goto LAB_10007588;
                          if (*in_ECX != 0x54584b57) goto LAB_100075c4;
                          local_1c = local_28 + 8;
                          uVar6 = local_28;
                        }
                        uVar3 = in_ECX[2];
                        if (uVar3 < 0xc0) goto LAB_1000788d;
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) goto LAB_10007efb;
LAB_10007f08:
                        (*pcVar4)(local_1c,4,&local_38);
                        uVar12 = local_28;
                      }
                    }
                  }
                  else {
                    uVar12 = uVar6;
                  }
LAB_10007588:
                  if (*in_ECX != 0x54584b57) goto LAB_100075c4;
                  if ((uint)in_ECX[2] < 0xc0) {
                    if ((uint)in_ECX[2] < 0x6c) goto LAB_100075c4;
LAB_100075ab:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_100075c4;
                  }
                  else {
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) goto LAB_100075ab;
                  }
                  (*pcVar4)(uVar12 + 0xe,2,&local_44);
LAB_100075c4:
                  if (param_4 != 0) {
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar12 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                      uVar6 = uVar12;
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar6 + 1 < 0x400) {
                      cVar8 = 'h';
                      pcVar7 = &DAT_10009c2c;
                      do {
                        *(char *)(param_4 + uVar6) = cVar8;
                        uVar6 = uVar6 + 1;
                        cVar8 = *pcVar7;
                        if (cVar8 == '\0') break;
                        pcVar7 = pcVar7 + 1;
                      } while (uVar6 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar12 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                      uVar6 = uVar12;
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                  }
                  iVar1 = 8;
LAB_10007645:
                  do {
                    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar12;
                    if (uVar12 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    if (param_4 == 0) goto LAB_1000768b;
                    uVar12 = 0;
                    do {
                      pcVar7 = (char *)(param_4 + uVar12);
                      uVar12 = uVar12 + 1;
                    } while (*pcVar7 != '\0');
                    if (uVar12 < 0x400) {
                      *(byte *)(param_4 + -1 + uVar12) = bVar11;
                      *(undefined1 *)(param_4 + uVar12) = 0;
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar8 = 'h';
                    pcVar7 = &DAT_10009c34;
                    do {
                      *(char *)(param_4 + uVar6) = cVar8;
                      uVar6 = uVar6 + 1;
                      cVar8 = *pcVar7;
                      if (cVar8 == '\0') break;
                      pcVar7 = pcVar7 + 1;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10007709:
                  iVar1 = 8;
LAB_10007713:
                  uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar11 = (byte)uVar12;
                  if (uVar12 < 10) {
                    bVar11 = bVar11 | 0x30;
                  }
                  else {
                    bVar11 = bVar11 + 0x37;
                  }
                  if (param_4 == 0) {
                    iVar1 = iVar1 + -1;
                    if (iVar1 == 0) goto LAB_100077d9;
                    goto LAB_10007713;
                  }
                  uVar12 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar12);
                    uVar12 = uVar12 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar12 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar12) = bVar11;
                    *(undefined1 *)(param_4 + uVar12) = 0;
                  }
                  iVar1 = iVar1 + -1;
                  if (iVar1 != 0) goto LAB_10007713;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar8 = 'h';
                    pcVar7 = str_10009c3b;
                    do {
                      pcVar7 = pcVar7 + 1;
                      *(char *)(param_4 + uVar6) = cVar8;
                      uVar6 = uVar6 + 1;
                      cVar8 = *pcVar7;
                      if (cVar8 == '\0') break;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100077d9:
                  iVar1 = 8;
                  do {
                    uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar12;
                    if (uVar12 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    if (param_4 != 0) {
                      uVar12 = 0;
                      do {
                        pcVar7 = (char *)(param_4 + uVar12);
                        uVar12 = uVar12 + 1;
                      } while (*pcVar7 != '\0');
                      if (uVar12 < 0x400) {
                        *(byte *)(param_4 + -1 + uVar12) = bVar11;
                        *(undefined1 *)(param_4 + uVar12) = 0;
                      }
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar6 = 1;
                  uVar12 = local_34;
                  goto LAB_10005309;
                }
              }
            }
          }
        }
        if (param_4 != 0) {
          uVar6 = 0;
          do {
            uVar3 = uVar6;
            uVar6 = uVar3 + 1;
          } while (*(char *)(param_4 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            cVar8 = ' ';
            pcVar7 = str_10009c0e;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar3) = cVar8;
              uVar3 = uVar3 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar3 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar3) = 0;
          uVar6 = 0;
LAB_10005309:
          uVar12 = uVar12 | uVar6;
        }
      }
      piVar15 = local_18;
      local_28 = 0;
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      puVar10 = local_14;
      if (((char)local_14[4] != '\f') || (*(char *)((int)local_14 + 9) != '\x03'))
      goto LAB_1000559c;
      uVar6 = *(uint *)(local_14 + 10);
      piVar13 = in_ECX;
      local_34 = uVar12;
      if ((uVar6 & 1) != 0 || uVar6 == 0) {
LAB_1000544d:
        uVar12 = 0;
        puVar10 = local_14;
LAB_1000546a:
        local_48 = 0;
        uVar6 = *(uint *)(puVar10 + uVar12 * 2 + 10);
        if ((uVar6 & 1) == 0) goto LAB_10005460;
        if ((((short)(uVar6 & 0xfffffffc) == 0 || (char)local_2c != '\0') ||
            (*piVar13 != 0x54584b57)) || ((uint)piVar13[2] < 0x58)) goto LAB_10005460;
        if ((code *)piVar13[0x15] == (code *)0x0) goto LAB_10005460;
        local_1c = uVar6 & 0xfffffffc;
        iVar1 = (*(code *)piVar13[0x15])(uVar6 & 0xfffc,2,&local_48);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_10005460;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_100060ca;
          goto LAB_100062ac;
        }
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_10009c67;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar12 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10005517:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'u';
            pcVar7 = &DAT_10009c73;
            do {
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
              pcVar7 = pcVar7 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        else {
LAB_100060ca:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, param_4 != 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) goto LAB_10005517;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_100062ac:
        iVar1 = 8;
LAB_100062b6:
        uVar12 = local_1c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100062d4;
LAB_10006302:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_10006380;
          goto LAB_100062b6;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_10006302;
LAB_100062d4:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100062b6;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = str_10009c78;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10006380:
        iVar1 = 8;
        do {
          uVar12 = local_48 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        goto LAB_10007e9b;
      }
      iVar1 = 0;
      if ((uVar6 & 6) == 4) {
        iVar1 = *(int *)(local_14 + 0xc);
      }
      uVar6 = uVar6 & 0xfffffff0;
      if (uVar6 == 0 && iVar1 == 0) goto LAB_1000544d;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*in_ECX != 0x54584b57)) goto LAB_1000544d;
      if (((uint)in_ECX[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        piVar13 = piVar15;
        if ((((uint)in_ECX[2] < 0x68 || iVar1 != 0) || ((code *)local_18[0x19] == (code *)0x0)) ||
           (iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4), iVar1 == 0))
        goto LAB_1000544d;
        local_28 = local_a4;
      }
      else {
        iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
        piVar13 = local_18;
        piVar15 = local_18;
        if (iVar1 == 0) goto LAB_1000544d;
      }
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = &DAT_10009c48;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = 8;
      do {
        uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        if (uVar12 < 10) {
          uVar12 = uVar12 | 0x30;
        }
        else {
          uVar12 = (uint)(byte)((char)uVar12 + 0x37);
        }
        PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
        if (param_4 != 0) {
          uVar6 = 0;
          do {
            uVar3 = uVar6;
            uVar6 = uVar3 + 1;
          } while (*(char *)(param_4 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_a4 + 1);
            do {
              *(char *)(param_4 + uVar3) = (char)uVar12;
              uVar3 = uVar3 + 1;
              uVar12 = (uint)*pbVar14;
              if (*pbVar14 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar3 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar3) = 0;
          piVar15 = local_18;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10007c32;
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_10007028;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10007028:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10007055;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10007c32;
      }
LAB_10007055:
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_100074d3;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_100074d3:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10007503;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10007c32;
      }
LAB_10007503:
      if ((uint)piVar15[2] < 0xc0) {
        if ((uint)piVar15[2] < 0x6c) goto LAB_10007c32;
LAB_10007c19:
        pcVar4 = (code *)piVar15[0x1a];
        if (pcVar4 == (code *)0x0) goto LAB_10007c32;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) goto LAB_10007c19;
      }
      (*pcVar4)(local_28 + 8,4,&local_44);
LAB_10007c32:
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = &DAT_10009c50;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = 8;
LAB_10007cb3:
      do {
        uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 == 0) goto LAB_10007cfb;
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'u';
        pcVar7 = &DAT_10009c58;
        do {
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
          pcVar7 = pcVar7 + 1;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10007d79:
      iVar1 = 8;
LAB_10007d83:
      uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      if (param_4 == 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) goto LAB_10007e49;
        goto LAB_10007d83;
      }
      uVar12 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar12);
        uVar12 = uVar12 + 1;
      } while (*pcVar7 != '\0');
      if (uVar12 < 0x400) {
        *(byte *)(param_4 + -1 + uVar12) = bVar11;
        *(undefined1 *)(param_4 + uVar12) = 0;
      }
      iVar1 = iVar1 + -1;
      if (iVar1 != 0) goto LAB_10007d83;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'u';
        pcVar7 = &DAT_10009c60;
        do {
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
          pcVar7 = pcVar7 + 1;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10007e49:
      iVar1 = 8;
      do {
        uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 != 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
LAB_10007e9b:
      uVar12 = 1;
      goto LAB_10005579;
    }
  }
  else {
    uVar12 = 0xffffffff;
    if (*(short *)(in_EDX + 4) == 0x1af4) {
      uVar12 = (uint)*(ushort *)(in_EDX + 6);
      in_EAX = uVar12 & 0xffffffc0;
      if (in_EAX == 0x1000) {
        uVar12 = uVar12 - 0x1000;
      }
      else if (in_EAX == 0x1040) {
        uVar12 = uVar12 - 0x1040;
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
    bVar16 = uVar12 == 0xffffffff;
    local_a4 = 0;
    local_28 = 0;
    if (in_ECX == (int *)0x0) {
      local_2c = CONCAT31((int3)(in_EAX >> 8),1);
      goto LAB_10003387;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_2c = 0;
      goto LAB_10003387;
    }
    local_1c = uVar12;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_100035d2:
      uVar12 = 0;
      if (param_4 != 0) {
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_10009964;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        goto LAB_100037e3;
      }
LAB_10003801:
      local_2c = 0;
      goto joined_r0x100033de;
    }
    local_2c = (uint)(byte)in_EDX[2];
    local_18 = in_ECX;
    iVar1 = (*(code *)in_ECX[0x17])(*in_EDX,in_EDX[1],local_2c,4,2,&local_a4);
    piVar15 = local_18;
    if (iVar1 == 0) goto LAB_100035d2;
    if ((*(uint *)(local_14 + 10) & 1) == 0) {
      uVar12 = (uint)(*(uint *)(local_14 + 10) != 0) * 2;
    }
    else {
      uVar12 = 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0xc) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0xc) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    uVar12 = uVar6;
    if (*(uint *)(local_14 + 0xe) != 0) {
      uVar12 = uVar6 | 2;
    }
    if ((*(uint *)(local_14 + 0xe) & 1) != 0) {
      uVar12 = uVar6 | 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0x10) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0x10) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    uVar12 = uVar6;
    if (*(uint *)(local_14 + 0x12) != 0) {
      uVar12 = uVar6 | 2;
    }
    if ((*(uint *)(local_14 + 0x12) & 1) != 0) {
      uVar12 = uVar6 | 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0x14) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0x14) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    local_2c = uVar6 | 4;
    if (((char)local_14[4] == '\x06') && (*(char *)((int)local_14 + 9) != '\0')) {
      local_2c = uVar6 | 6;
    }
    local_28 = local_a4 | local_2c;
    if ((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) {
      if ((code *)in_ECX[0x18] != (code *)0x0) {
        local_34 = CONCAT31(PF_PART3(local_34, 1),(char)*local_14);
        local_3c = (uint)*(byte *)((int)local_14 + 1);
        iVar1 = (*(code *)in_ECX[0x18])
                          ((char)*local_14,local_3c,(char)local_14[1],4,2,local_a4 | local_2c);
        piVar13 = local_18;
        in_ECX = piVar15;
        if (iVar1 != 0) {
          if (((*piVar15 == 0x54584b57) && (0x5f < (uint)piVar15[2])) &&
             ((code *)piVar15[0x17] != (code *)0x0)) {
            (*(code *)piVar15[0x17])
                      ((char)*local_14,*(undefined1 *)((int)local_14 + 1),(char)local_14[1],4,2,
                       &local_28);
            in_ECX = piVar13;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'p';
              pcVar7 = str_10009995;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          iVar1 = 8;
LAB_10006763:
          uVar12 = local_a4 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10006780;
LAB_100067b2:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_10006830;
            goto LAB_10006763;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100067b2;
LAB_10006780:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 != 0) goto LAB_10006763;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'p';
            pcVar7 = str_100099a6;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10006830:
          iVar1 = 8;
LAB_1000683a:
          uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10006857;
LAB_10006882:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_100068fa;
            goto LAB_1000683a;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10006882;
LAB_10006857:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 != 0) goto LAB_1000683a;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'p';
            pcVar7 = str_100099b6;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100068fa:
          bVar11 = (byte)(local_2c >> 0x18);
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11 >> 4 | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11 & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)local_2c & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          local_3c = (uint)((local_2c & ~local_28) == 0);
          local_2c = 0;
          goto LAB_100037f7;
        }
      }
    }
    uVar12 = 0;
    if (param_4 == 0) goto LAB_10003801;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000997c;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
LAB_100037e3:
    *(undefined1 *)(param_4 + uVar6) = 0;
    local_3c = 0;
    local_2c = 0;
LAB_100037f7:
    local_2c = 0;
    if (local_1c == 0xffffffff) goto LAB_100033e4;
  }
  uVar12 = 0;
  if ((local_14 != (ushort *)0x0) && (local_14[2] == 0x1af4)) {
    local_18 = in_ECX;
    uVar6 = (uint)local_14[3];
    if ((uVar6 & 0xffffffc0) == 0x1000) {
      uVar6 = uVar6 - 0x1000;
    }
    else {
      if ((uVar6 & 0xffffffc0) != 0x1040) goto LAB_10005db8;
      uVar6 = uVar6 - 0x1040;
    }
    if (uVar6 != 0xffffffff) {
      if (param_4 == 0) {
        if (uVar6 != 0) goto LAB_10003907;
      }
      else {
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar3 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_100099c5;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar3 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar6 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10003907:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar12) = (byte)(uVar6 % 10) | 0x30;
            uVar3 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < uVar6;
            uVar12 = uVar3;
            uVar6 = uVar6 / 10;
          } while (bVar16);
          do {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      puVar10 = local_14;
      piVar15 = local_18;
      bVar16 = recovered_100085c0(local_18,local_14,&local_a4);
      if (CONCAT31(extraout_var,bVar16) != 0) {
        recovered_10008c80(piVar15,&local_a4);
        if (param_4 == 0) {
          if (local_80 != 0) goto LAB_10003b8a;
LAB_10003c16:
          if (local_94 == 0) goto LAB_10003e4d;
        }
        else {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_100099f5;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'm';
            pcVar7 = str_10009a05;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_100099ea;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          if (local_80 != 0) {
LAB_10003b8a:
            uVar12 = 0;
            do {
              *(byte *)((int)&local_28 + uVar12) =
                   (char)local_80 + (char)(local_80 / 10) * -10 | 0x30;
              uVar6 = uVar12 + 1;
              if (8 < uVar12) break;
              bVar16 = 9 < local_80;
              local_80 = local_80 / 10;
              uVar12 = uVar6;
            } while (bVar16);
LAB_10003bda:
            do {
              uVar12 = uVar6 - 1;
              if (param_4 != 0) {
                uVar3 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (*pcVar7 != '\0');
                if (uVar3 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar3) =
                       *(undefined1 *)((int)&local_2c + uVar6 + 3);
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                uVar6 = uVar12;
                if (uVar12 == 0) goto LAB_10003c57;
                goto LAB_10003bda;
              }
              uVar6 = uVar12;
            } while (uVar12 != 0);
            goto LAB_10003c16;
          }
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10003c57:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_10009a0c;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          if (local_94 == 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
            }
LAB_10003dc7:
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_10009a1c;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            goto LAB_10003e4d;
          }
        }
        uVar12 = 0;
        do {
          *(byte *)((int)&local_28 + uVar12) = (char)local_94 + (char)(local_94 / 10) * -10 | 0x30;
          uVar6 = uVar12 + 1;
          if (8 < uVar12) break;
          bVar16 = 9 < local_94;
          local_94 = local_94 / 10;
          uVar12 = uVar6;
        } while (bVar16);
LAB_10003d56:
        do {
          uVar12 = uVar6 - 1;
          if (param_4 != 0) {
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
            if (uVar12 == 0) goto LAB_10003dc7;
            goto LAB_10003d56;
          }
          uVar6 = uVar12;
        } while (uVar12 != 0);
LAB_10003e4d:
        iVar1 = 8;
LAB_10003e67:
        do {
          uVar12 = local_a4 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          PF_PART2(local_28, 0) = (ushort)(byte)local_28;
          if (param_4 == 0) goto LAB_10003e60;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_28 + 1);
            do {
              *(byte *)(param_4 + uVar6) = bVar11;
              uVar6 = uVar6 + 1;
              bVar11 = *pbVar14;
              if (bVar11 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a29;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10003f8d:
        iVar1 = 8;
LAB_10003fa3:
        do {
          uVar12 = local_7c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x10003fb9;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10003ff7;
LAB_10003fc0:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a3f;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000408d:
        iVar1 = 8;
LAB_100040a3:
        do {
          uVar12 = local_78 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x100040b9;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100040f7;
LAB_100040c0:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a55;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000418d:
        iVar1 = 8;
LAB_100041a3:
        uVar12 = local_74 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100041c0;
LAB_100041f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000428d;
          goto LAB_100041a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100041f7;
LAB_100041c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100041a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a6b;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000428d:
        iVar1 = 8;
LAB_100042a3:
        uVar12 = local_70 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100042c0;
LAB_100042f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000438d;
          goto LAB_100042a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100042f7;
LAB_100042c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100042a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a81;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000438d:
        iVar1 = 8;
LAB_100043a3:
        uVar12 = local_6c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100043c0;
LAB_100043f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000448d;
          goto LAB_100043a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100043f7;
LAB_100043c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100043a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009a9a;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000448d:
        iVar1 = 8;
LAB_100044a3:
        uVar12 = local_68 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100044c0;
LAB_100044f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto code_r0x100044fa;
          goto LAB_100044a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100044f7;
LAB_100044c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100044a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009ab2;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_64 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_100045ba:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (char)local_64 + (char)(local_64 / 10) * -10 | 0x30
            ;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_64;
            local_64 = local_64 / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            while (uVar12 = uVar6 - 1, param_4 == 0) {
              uVar6 = uVar12;
              if (uVar12 == 0) goto LAB_10004646;
            }
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009abf;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_60 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_1000471a:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (char)local_60 + (char)(local_60 / 10) * -10 | 0x30
            ;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_60;
            local_60 = local_60 / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            while (uVar12 = uVar6 - 1, param_4 == 0) {
              uVar6 = uVar12;
              if (uVar12 == 0) goto LAB_100047a6;
            }
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009ad0;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_5c == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10004886:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (byte)(local_5c % 10) | 0x30;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_5c;
            local_5c = local_5c / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = *(undefined1 *)((int)&local_2c + uVar6 + 3)
                ;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_54 != 0) {
          if (param_4 == 0) {
LAB_1000493a:
            if (local_90 != 0) goto LAB_100049ca;
          }
          else {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_10009ae4;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            if (local_90 == 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
              }
            }
            else {
LAB_100049ca:
              uVar12 = 0;
              do {
                *(byte *)((int)&local_28 + uVar12) =
                     (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
                uVar6 = uVar12 + 1;
                if (8 < uVar12) break;
                bVar16 = 9 < local_90;
                local_90 = local_90 / 10;
                uVar12 = uVar6;
              } while (bVar16);
              do {
                while (uVar12 = uVar6 - 1, param_4 == 0) {
                  uVar6 = uVar12;
                  if (uVar12 == 0) goto LAB_10004afd;
                }
                uVar3 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (*pcVar7 != '\0');
                if (uVar3 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar3) =
                       *(undefined1 *)((int)&local_2c + uVar6 + 3);
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                uVar6 = uVar12;
              } while (uVar12 != 0);
            }
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_10009af4;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_10004afd:
          iVar1 = 8;
LAB_10004b13:
          do {
            uVar12 = local_84 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (9 < uVar12) goto code_r0x10004b29;
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10004b67;
LAB_10004b30:
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_10009b0b;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10004bfd:
          iVar1 = 8;
          do {
            uVar12 = local_54 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (local_9c != 0) {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_10009b1e;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_10004d1d:
          iVar1 = 8;
          do {
            uVar12 = local_9c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (local_98 != 0) {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_10009b28;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_10004e3d:
          iVar1 = 8;
          do {
            uVar12 = local_98 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (param_4 == 0) goto LAB_10005d1c;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009b3b;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_50 != 0) goto LAB_10005d24;
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
        }
LAB_10004f97:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        pcVar7 = str_10009b6a;
        if ((local_68 & 8) != 0) {
          pcVar7 = str_10009b5e;
        }
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar9 = str_10009b52;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar9;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if ((uVar6 + 1 < 0x400) && (cVar8 = *pcVar7, cVar8 != '\0')) {
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 1;
        goto LAB_10005db8;
      }
      if (local_80 != 0) {
        if (param_4 != 0) {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_100099ea;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        uVar12 = 0;
        do {
          *(byte *)((int)&local_28 + uVar12) = (byte)(local_80 % 10) | 0x30;
          uVar6 = uVar12 + 1;
          if (8 < uVar12) break;
          bVar16 = 9 < local_80;
          uVar12 = uVar6;
          local_80 = local_80 / 10;
        } while (bVar16);
        do {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          uVar6 = uVar6 - 1;
          puVar10 = local_14;
        } while (uVar6 != 0);
      }
      if (puVar10[3] < 0x1040) {
        uVar12 = 0;
        bVar16 = true;
LAB_100051ce:
        local_28 = 0;
        local_30 = 0;
        if ((*(uint *)(puVar10 + uVar12 * 2 + 10) & 1) == 0) goto LAB_100051c0;
        if ((((char)local_2c != '\0') || (*local_18 != 0x54584b57)) || ((uint)local_18[2] < 0x58))
        goto LAB_100051c0;
        if ((code *)local_18[0x15] == (code *)0x0) goto LAB_100051c0;
        local_34 = *(uint *)(puVar10 + uVar12 * 2 + 10) & 0xfffffffc;
        local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
        uVar6 = local_34 + 0x12 & 0xffff;
        iVar1 = (*(code *)local_18[0x15])(uVar6,1,&local_28);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_100051c0;
        local_14 = (ushort *)uVar6;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_10007398;
          goto LAB_1000792c;
        }
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
          uVar3 = uVar6;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_100099f5;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
          uVar3 = uVar6;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'l';
          pcVar7 = str_10009b77;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_10009b81;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar12 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_100078bc:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_10009b95;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        else {
LAB_10007398:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, param_4 != 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) goto LAB_100078bc;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_1000792c:
        puVar10 = local_14;
        piVar15 = local_18;
        iVar1 = 8;
LAB_10007936:
        uVar12 = local_34 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 == 0) {
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_100079f9;
          goto LAB_10007936;
        }
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_10007936;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_10009ba4;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100079f9:
        iVar1 = 8;
        do {
          uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (*local_18 == 0x54584b57) {
          uVar12 = local_18[2];
          if (uVar12 < 0x5c) {
LAB_10007a62:
            if (uVar12 < 0x58) goto LAB_100083c6;
          }
          else if ((code *)local_18[0x16] != (code *)0x0) {
            (*(code *)local_18[0x16])(local_14,1,0);
            if (*piVar15 != 0x54584b57) goto LAB_100083c6;
            uVar12 = piVar15[2];
            if (0x5b < uVar12) {
              if ((code *)piVar15[0x16] == (code *)0x0) goto LAB_10007aba;
              (*(code *)piVar15[0x16])(puVar10,1,3);
              if (*piVar15 != 0x54584b57) goto LAB_100083c6;
              uVar12 = piVar15[2];
            }
            goto LAB_10007a62;
          }
LAB_10007aba:
          if (((code *)piVar15[0x15] != (code *)0x0) &&
             (iVar1 = (*(code *)piVar15[0x15])(puVar10,1,&local_30), iVar1 != 0)) {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'v';
                pcVar7 = str_10009bb7;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = 8;
            do {
              uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
              }
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
LAB_100083c6:
        if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_10005163;
        uVar12 = local_1c & 1;
        goto LAB_10005db8;
      }
LAB_10005153:
      uVar12 = 0;
      if (param_4 != 0) {
LAB_10005163:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_100099ce;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
      }
    }
  }
LAB_10005db8:
  uVar12 = uVar12 | local_3c;
  goto LAB_10005dba;
LAB_100080ab:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10008129;
  goto LAB_10008062;
LAB_1000768b:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10007709;
  goto LAB_10007645;
LAB_10005460:
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_10005537;
  goto LAB_1000546a;
LAB_10007cfb:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10007d79;
  goto LAB_10007cb3;
LAB_100057be:
  uVar12 = local_34;
  goto LAB_100057c8;
LAB_10003e60:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10003f8d;
  goto LAB_10003e67;
code_r0x10003fb9:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10003fc0;
LAB_10003ff7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000408d;
  goto LAB_10003fa3;
code_r0x100040b9:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_100040c0;
LAB_100040f7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000418d;
  goto LAB_100040a3;
code_r0x100044fa:
  if (local_64 != 0) goto LAB_100045ba;
LAB_10004646:
  if (local_60 != 0) goto LAB_1000471a;
LAB_100047a6:
  if (local_5c != 0) goto LAB_10004886;
  if (local_54 != 0) goto LAB_1000493a;
  if (local_9c != 0) goto LAB_10004d1d;
  if (local_98 != 0) goto LAB_10004e3d;
LAB_10005d1c:
  if (local_50 == 0) {
    uVar12 = 1;
    goto LAB_10005db8;
  }
LAB_10005d24:
  uVar12 = 0;
  do {
    *(byte *)((int)&local_28 + uVar12) = (char)local_50 + (char)(local_50 / 10) * -10 | 0x30;
    uVar6 = uVar12 + 1;
    if (8 < uVar12) break;
    bVar16 = 9 < local_50;
    local_50 = local_50 / 10;
    uVar12 = uVar6;
  } while (bVar16);
  do {
    while (uVar12 = uVar6 - 1, param_4 != 0) {
      uVar3 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar7 != '\0');
      if (uVar3 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
        *(undefined1 *)(param_4 + uVar3) = 0;
      }
      uVar6 = uVar12;
      if (uVar12 == 0) goto LAB_10004f97;
    }
    uVar6 = uVar12;
  } while (uVar12 != 0);
  uVar12 = 1;
  goto LAB_10005db8;
code_r0x10004b29:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10004b30;
LAB_10004b67:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10004bfd;
  goto LAB_10004b13;
LAB_100051c0:
  bVar16 = uVar12 < 5;
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_10005153;
  goto LAB_100051ce;
LAB_10005537:
  uVar12 = local_34;
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_10009c82;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
LAB_10005579:
    puVar10 = local_14;
    uVar12 = local_34 | uVar12;
  }
LAB_1000559c:
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((char)puVar10[4] == '\x02') {
    uVar6 = 0;
    bVar16 = true;
    local_34 = uVar12;
LAB_100055d2:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
    if ((uVar6 != 0) && ((*(uint *)(puVar10 + uVar6 * 2 + 8) & 7) == 4)) {
LAB_100056d0:
      uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
      if ((uVar12 & 1) != 0) {
        if (((!((short)(uVar12 & 0xfffffffc) == 0 || (char)local_2c != '\0')) &&
            (*local_18 == 0x54584b57)) && (0x57 < (uint)local_18[2])) {
          if ((code *)local_18[0x15] != (code *)0x0) {
            iVar1 = (*(code *)local_18[0x15])(uVar12 & 0xfffc,2,&local_30);
            puVar10 = local_14;
            if (iVar1 == 0) goto LAB_100055c0;
            if (param_4 == 0) {
              if (uVar6 != 0) goto LAB_10005e1b;
              goto LAB_10005eea;
            }
            uVar3 = 0;
            do {
              uVar2 = uVar3;
              uVar3 = uVar2 + 1;
            } while (*(char *)(param_4 + uVar2) != '\0');
            if (uVar2 + 1 < 0x400) {
              cVar8 = ' ';
              pcVar7 = str_10009ccc;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar2) = cVar8;
                uVar2 = uVar2 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar2 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar2) = 0;
            if (uVar6 == 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar6) = 0x30;
              }
LAB_10005795:
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
                uVar3 = uVar6;
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar3 + 1 < 0x400) {
                cVar8 = 'n';
                pcVar7 = str_10009cdb;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar3) = cVar8;
                  uVar3 = uVar3 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar3 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
                uVar3 = uVar6;
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            else {
LAB_10005e1b:
              uVar3 = 0;
              do {
                *(byte *)((int)&local_a4 + uVar3) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
                uVar2 = uVar3 + 1;
                if (8 < uVar3) break;
                bVar16 = 9 < uVar6;
                uVar3 = uVar2;
                uVar6 = uVar6 / 10;
              } while (bVar16);
              do {
                while (uVar6 = uVar2 - 1, param_4 != 0) {
                  uVar3 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar3);
                    uVar3 = uVar3 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar3 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar3) = (&bStack_a5)[uVar2];
                    *(undefined1 *)(param_4 + uVar3) = 0;
                  }
                  uVar2 = uVar6;
                  if (uVar6 == 0) goto LAB_10005795;
                }
                uVar2 = uVar6;
              } while (uVar6 != 0);
            }
LAB_10005eea:
            iVar1 = 8;
LAB_10005ef4:
            uVar6 = (uVar12 & 0xfffffffc) >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar6;
            if (9 < uVar6) {
              bVar11 = bVar11 + 0x37;
              if (param_4 != 0) goto LAB_10005f11;
LAB_10005f42:
              iVar1 = iVar1 + -1;
              if (iVar1 == 0) goto LAB_10005fc0;
              goto LAB_10005ef4;
            }
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10005f42;
LAB_10005f11:
            uVar6 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pcVar7 != '\0');
            if (uVar6 < 0x400) {
              *(byte *)(param_4 + -1 + uVar6) = bVar11;
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
            if (iVar1 != 0) goto LAB_10005ef4;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'n';
              pcVar7 = str_10009ce5;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10005fc0:
            iVar1 = 8;
            do {
              uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
              }
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            goto LAB_1000722b;
          }
        }
      }
LAB_100055c0:
      bVar16 = uVar6 < 5;
      uVar6 = uVar6 + 1;
      if (uVar6 == 6) goto LAB_100057be;
      goto LAB_100055d2;
    }
    uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
    puVar10 = local_14;
    if ((uVar12 & 1) != 0 || uVar12 == 0) goto LAB_100056d0;
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      if (uVar6 == 5) goto LAB_100056d0;
      iVar1 = *(int *)(local_14 + uVar6 * 2 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_100056d0;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_100056d0;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((!((uint)local_18[2] < 0x68 || iVar1 != 0)) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        puVar10 = local_14;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto LAB_1000614f;
        }
      }
      goto LAB_100056d0;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    puVar10 = local_14;
    if (iVar1 == 0) goto LAB_100056d0;
LAB_1000614f:
    if (param_4 == 0) {
      if (uVar6 != 0) goto LAB_100061cb;
      goto LAB_1000664c;
    }
    uVar12 = 0;
    do {
      uVar3 = uVar12;
      uVar12 = uVar3 + 1;
    } while (*(char *)(param_4 + uVar3) != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_10009c97;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar3) = cVar8;
        uVar3 = uVar3 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar3) = 0;
    if (uVar6 == 0) {
      uVar12 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar12);
        uVar12 = uVar12 + 1;
      } while (*pcVar7 != '\0');
      if (uVar12 < 0x400) {
        *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
      }
LAB_100061a4:
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'n';
        pcVar7 = str_10009ca8;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
    else {
LAB_100061cb:
      uVar12 = 0;
      do {
        *(byte *)((int)&local_a4 + uVar12) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar3 = uVar12 + 1;
        if (8 < uVar12) break;
        bVar16 = 9 < uVar6;
        uVar12 = uVar3;
        uVar6 = uVar6 / 10;
      } while (bVar16);
      do {
        while (uVar12 = uVar3 - 1, param_4 != 0) {
          uVar6 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar7 != '\0');
          if (uVar6 < 0x400) {
            *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          uVar3 = uVar12;
          if (uVar12 == 0) goto LAB_100061a4;
        }
        uVar3 = uVar12;
      } while (uVar12 != 0);
    }
LAB_1000664c:
    iVar1 = 8;
    do {
      uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      if (uVar12 < 10) {
        uVar12 = uVar12 | 0x30;
      }
      else {
        uVar12 = (uint)(byte)((char)uVar12 + 0x37);
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (param_4 != 0) {
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          pbVar14 = (byte *)((int)&local_a4 + 1);
          do {
            *(char *)(param_4 + uVar3) = (char)uVar12;
            uVar3 = uVar3 + 1;
            uVar12 = (uint)*pbVar14;
            if (*pbVar14 == 0) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((local_28 != 0) && (*local_18 == 0x54584b57)) {
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_10006e87;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10006e87:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10006eba;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*local_18 != 0x54584b57)) goto LAB_10007097;
      }
LAB_10006eba:
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_1000707b;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_1000707b:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10007097;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
      }
    }
LAB_10007097:
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'n';
        pcVar7 = str_10009cb4;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
    iVar1 = 8;
LAB_10007118:
    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
    bVar11 = (byte)uVar12;
    if (9 < uVar12) {
      bVar11 = bVar11 + 0x37;
      if (param_4 != 0) goto LAB_10007135;
LAB_10007162:
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) goto LAB_100071e0;
      goto LAB_10007118;
    }
    bVar11 = bVar11 | 0x30;
    if (param_4 == 0) goto LAB_10007162;
LAB_10007135:
    uVar12 = 0;
    do {
      pcVar7 = (char *)(param_4 + uVar12);
      uVar12 = uVar12 + 1;
    } while (*pcVar7 != '\0');
    if (uVar12 < 0x400) {
      *(byte *)(param_4 + -1 + uVar12) = bVar11;
      *(undefined1 *)(param_4 + uVar12) = 0;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 != 0) goto LAB_10007118;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar12 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
      uVar6 = uVar12;
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = 'n';
      pcVar7 = str_10009cc0;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar12 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
      uVar6 = uVar12;
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100071e0:
    iVar1 = 8;
    do {
      uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
LAB_1000722b:
    puVar10 = local_14;
    uVar12 = local_34 | local_1c & 1;
  }
LAB_100057c8:
  local_30 = 0;
  uVar6 = 0;
  if ((char)puVar10[4] == '\x03') {
    uVar6 = *(uint *)(puVar10 + 10);
    local_34 = uVar12;
    if ((uVar6 & 1) == 0 && uVar6 != 0) {
      iVar1 = 0;
      if ((uVar6 & 6) == 4) {
        iVar1 = *(int *)(local_14 + 0xc);
      }
      uVar6 = uVar6 & 0xfffffff0;
      if (uVar6 == 0 && iVar1 == 0) goto LAB_100058c8;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_100058c8;
      if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
          iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4);
          uVar6 = 0;
          if (iVar1 != 0) {
            local_28 = local_a4;
            goto joined_r0x100058b1;
          }
        }
        goto LAB_100058c8;
      }
      iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
      uVar6 = 0;
      uVar12 = local_34;
      if (iVar1 == 0) goto LAB_100058c8;
joined_r0x100058b1:
      uVar5 = (undefined3)((uint)iVar1 >> 8);
      if (param_4 == 0) {
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
      }
      else {
        uVar12 = 0;
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
LAB_100059ed:
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_10009cf3;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        if ((char)local_40 == '\0') {
          local_4c = 0;
LAB_100063e0:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, (char)local_4c == '\0') {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) {
                local_40 = 1;
                goto LAB_1000646b;
              }
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
          local_40 = 1;
          uVar12 = local_34;
        }
        else {
          do {
            pcVar7 = (char *)(param_4 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar7 != '\0');
          if (uVar6 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar6) = 0x30;
          }
LAB_1000646b:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'd';
            pcVar7 = str_10009d04;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          local_40 = 0;
          uVar12 = local_34;
        }
      }
      iVar1 = 8;
      local_4c = local_28;
      do {
        uVar6 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
        if ((char)local_40 == '\0') {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_a4 + 1);
            do {
              *(byte *)(param_4 + uVar6) = bVar11;
              uVar6 = uVar6 + 1;
              bVar11 = *pbVar14;
              if (bVar11 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = local_34;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((local_28 == 0) || (*local_18 != 0x54584b57)) {
LAB_100065ed:
        uVar6 = local_1c;
        puVar10 = local_14;
      }
      else {
        if ((uint)local_18[2] < 0xc0) {
          if (0x6b < (uint)local_18[2]) goto LAB_100065a3;
          goto LAB_100065ed;
        }
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_100065a3:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_100065ed;
        }
        iVar1 = (*pcVar4)(local_28,4,&local_30);
        if (iVar1 == 0) goto LAB_100065ed;
        if ((char)local_40 == '\0') {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'd';
            pcVar7 = str_10009d10;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        iVar1 = 8;
        do {
          uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if ((char)local_40 == '\0') {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar6 = local_1c;
        puVar10 = local_14;
        uVar12 = local_34;
      }
    }
    else {
LAB_100058c8:
      uVar12 = 1;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      puVar10 = local_14;
      do {
        uVar3 = *(uint *)(puVar10 + uVar12 * 2 + 8) & 7;
        local_1c = uVar6;
        if (uVar3 != 4) {
          uVar3 = *(uint *)(puVar10 + uVar12 * 2 + 10);
          puVar10 = local_14;
          if ((uVar3 & 1) == 0 && uVar3 != 0) {
            iVar1 = 0;
            if ((uVar3 & 6) == 4) {
              if (uVar12 == 5) break;
              iVar1 = *(int *)(local_14 + uVar12 * 2 + 0xc);
            }
            uVar3 = uVar3 & 0xfffffff0;
            if (uVar3 != 0 || iVar1 != 0) {
              local_28 = 0;
              local_a4 = 0;
              if (((char)local_2c == '\0') && (*local_18 == 0x54584b57)) {
                if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
                  if ((0x67 < (uint)local_18[2] && iVar1 == 0) &&
                     ((code *)local_18[0x19] != (code *)0x0)) {
                    iVar1 = (*(code *)local_18[0x19])(uVar3,0,0x1000,&local_a4);
                    uVar3 = 0;
                    puVar10 = local_14;
                    if (iVar1 != 0) {
                      local_28 = local_a4;
                      uVar6 = local_a4;
                      goto LAB_100059de;
                    }
                  }
                }
                else {
                  uVar6 = (*(code *)local_18[0x2e])(uVar3,iVar1,0x1000,&local_28);
                  uVar3 = 0;
                  puVar10 = local_14;
                  if (uVar6 != 0) {
LAB_100059de:
                    if (param_4 != 0) {
                      local_40 = 0;
                      goto LAB_100059ed;
                    }
                    local_4c = CONCAT31((int3)(uVar6 >> 8),1);
                    goto LAB_100063e0;
                  }
                }
              }
            }
          }
        }
        bVar16 = uVar12 < 5;
        uVar12 = uVar12 + 1;
        uVar6 = CONCAT31((int3)(uVar3 >> 8),bVar16);
      } while (uVar12 != 6);
      uVar6 = 0;
      uVar12 = local_34;
    }
    uVar6 = uVar6 & 1;
  }
  uVar12 = uVar12 | uVar6 | local_3c;
  if (uVar12 != 0) goto LAB_10005dba;
  local_30 = 0;
  uVar12 = *(uint *)(puVar10 + 10);
  if ((uVar12 & 1) == 0 && uVar12 != 0) {
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      iVar1 = *(int *)(local_14 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_10005b62;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10005b62;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        uVar12 = 0;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto joined_r0x10005b4b;
        }
      }
      goto LAB_10005b62;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    uVar12 = 0;
    if (iVar1 == 0) goto LAB_10005b62;
joined_r0x10005b4b:
    uVar5 = (undefined3)((uint)iVar1 >> 8);
    if (param_4 == 0) {
      bVar16 = true;
      local_1c = CONCAT31(uVar5,1);
    }
    else {
      uVar6 = 0;
      local_14 = (ushort *)CONCAT31(uVar5,1);
      local_1c = CONCAT31(uVar5,1);
LAB_10005c8d:
      uVar12 = 0;
      do {
        uVar3 = uVar12;
        uVar12 = uVar3 + 1;
      } while (*(char *)(param_4 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_10009d1c;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar3) = cVar8;
          uVar3 = uVar3 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar3) = 0;
      uVar12 = 0;
      if ((char)local_14 == '\0') {
LAB_10006a67:
        uVar3 = 0;
        do {
          *(byte *)((int)&local_a4 + uVar3) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar2 = uVar3 + 1;
          if (8 < uVar3) break;
          bVar16 = 9 < uVar6;
          uVar6 = uVar6 / 10;
          uVar3 = uVar2;
        } while (bVar16);
LAB_10006aa2:
        do {
          uVar6 = uVar2 - 1;
          if ((char)uVar12 == '\0') {
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(byte *)(param_4 + -1 + uVar3) = (&bStack_a5)[uVar2];
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar2 = uVar6;
            if (uVar6 == 0) goto LAB_10006ae4;
            goto LAB_10006aa2;
          }
          uVar2 = uVar6;
        } while (uVar6 != 0);
        bVar16 = true;
      }
      else {
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
        }
LAB_10006ae4:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'm';
          pcVar7 = &DAT_10009d27;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        bVar16 = false;
      }
    }
    iVar1 = 8;
    local_14 = (ushort *)local_28;
    do {
      uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (!bVar16) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          pbVar14 = (byte *)((int)&local_a4 + 1);
          do {
            *(byte *)(param_4 + uVar6) = bVar11;
            uVar6 = uVar6 + 1;
            bVar11 = *pbVar14;
            if (bVar11 == 0) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((local_28 != 0) && (*local_18 == 0x54584b57)) {
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_10006c1f;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10006c1f:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10005cef;
        }
        iVar1 = (*pcVar4)(local_28,4,&local_30);
        if (iVar1 != 0) {
          if (!bVar16) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'm';
              pcVar7 = str_10009d2b;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          iVar1 = 8;
          do {
            uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            if (!bVar16) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
  }
  else {
LAB_10005b62:
    uVar6 = 1;
    local_1c = CONCAT31((int3)(uVar12 >> 8),1);
    puVar10 = local_14;
    do {
      uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 8) & 7;
      if (uVar12 != 4) {
        uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
        puVar10 = local_14;
        if ((uVar12 & 1) == 0 && uVar12 != 0) {
          iVar1 = 0;
          if ((uVar12 & 6) == 4) {
            if (uVar6 == 5) break;
            iVar1 = *(int *)(local_14 + uVar6 * 2 + 0xc);
          }
          uVar12 = uVar12 & 0xfffffff0;
          if (uVar12 != 0 || iVar1 != 0) {
            local_28 = 0;
            local_a4 = 0;
            if (((char)local_2c == '\0') && (*local_18 == 0x54584b57)) {
              if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
                if ((0x67 < (uint)local_18[2] && iVar1 == 0) &&
                   ((code *)local_18[0x19] != (code *)0x0)) {
                  iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
                  uVar12 = 0;
                  puVar10 = local_14;
                  if (iVar1 != 0) {
                    local_28 = local_a4;
                    goto LAB_10005c7e;
                  }
                }
              }
              else {
                iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
                uVar12 = 0;
                puVar10 = local_14;
                if (iVar1 != 0) {
LAB_10005c7e:
                  if (param_4 != 0) {
                    local_14 = (ushort *)0x0;
                    goto LAB_10005c8d;
                  }
                  uVar12 = 1;
                  goto LAB_10006a67;
                }
              }
            }
          }
        }
      }
      bVar16 = uVar6 < 5;
      uVar6 = uVar6 + 1;
      local_1c = CONCAT31((int3)(uVar12 >> 8),bVar16);
    } while (uVar6 != 6);
    local_1c = 0;
  }
LAB_10005cef:
  uVar12 = local_1c & 1;
LAB_10005dba:
  pcVar7 = str_10009938;
  if (uVar12 != 0) {
    pcVar7 = str_10009928;
  }
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if ((uVar6 + 1 < 0x400) && (cVar8 = *pcVar7, cVar8 != '\0')) {
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
  }
  return;
}

#undef DAT_10009be9
#undef DAT_10009bf1
#undef DAT_10009c24
#undef DAT_10009c2c
#undef DAT_10009c34
#undef DAT_10009c48
#undef DAT_10009c50
#undef DAT_10009c58
#undef DAT_10009c60
#undef DAT_10009c73
#undef DAT_10009d27
#undef str_10009928
#undef str_10009938
#undef str_1000994c
#undef str_10009964
#undef str_1000997c
#undef str_10009995
#undef str_100099a6
#undef str_100099b6
#undef str_100099c5
#undef str_100099ce
#undef str_100099ea
#undef str_100099f5
#undef str_10009a05
#undef str_10009a0c
#undef str_10009a1c
#undef str_10009a29
#undef str_10009a3f
#undef str_10009a55
#undef str_10009a6b
#undef str_10009a81
#undef str_10009a9a
#undef str_10009ab2
#undef str_10009abf
#undef str_10009ad0
#undef str_10009ae4
#undef str_10009af4
#undef str_10009b0b
#undef str_10009b1e
#undef str_10009b28
#undef str_10009b3b
#undef str_10009b52
#undef str_10009b5e
#undef str_10009b6a
#undef str_10009b77
#undef str_10009b81
#undef str_10009b95
#undef str_10009ba4
#undef str_10009bb7
#undef str_10009bc9
#undef str_10009bdf
#undef str_10009bf8
#undef str_10009c02
#undef str_10009c0e
#undef str_10009c3b
#undef str_10009c67
#undef str_10009c78
#undef str_10009c82
#undef str_10009c97
#undef str_10009ca8
#undef str_10009cb4
#undef str_10009cc0
#undef str_10009ccc
#undef str_10009cdb
#undef str_10009ce5
#undef str_10009cf3
#undef str_10009d04
#undef str_10009d10
#undef str_10009d1c
#undef str_10009d2b
#undef bStack_a5
#undef local_a4
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
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
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14

#undef str_10009e47
#define str_10009e47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76bU)))
#undef str_10009e52
#define str_10009e52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_10009e61
#define str_10009e61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_10009e72
#define str_10009e72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
#undef str_10009e85
#define str_10009e85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a9U)))
#undef str_10009e98
#define str_10009e98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#undef str_10009ea8
#define str_10009ea8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ccU)))
#undef str_10009eb7
#define str_10009eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dbU)))
#undef str_10009ec6
#define str_10009ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eaU)))
#undef str_10009ed7
#define str_10009ed7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fbU)))
#undef str_10009ee2
#define str_10009ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x806U)))
#undef str_10009eee
#define str_10009eee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x812U)))
#undef str_10009ef8
#define str_10009ef8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81cU)))
#undef str_10009f01
#define str_10009f01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_10009f0c
#define str_10009f0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x830U)))
#undef str_10009f15
#define str_10009f15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x839U)))
#undef str_10009f1d
#define str_10009f1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x841U)))
#undef str_10009f26
#define str_10009f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84aU)))
#undef str_10009f2d
#define str_10009f2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x851U)))
#undef str_10009f40
#define str_10009f40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x864U)))
#undef str_10009f53
#define str_10009f53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x877U)))
#undef str_10009f66
#define str_10009f66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083f0
 */

char * recovered_100083f0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_10009e47;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_10009f01;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_10009ef8;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_10009f26;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_10009f26;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10009f1d;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_10009f0c;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_10009ee2;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_1000856f;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_10009eee;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_10009f15;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_10009e52;
    case 0x1001:
    case 0x1042:
      return str_10009e61;
    case 0x1002:
    case 0x1045:
      return str_10009e72;
    case 0x1003:
    case 0x1043:
      return str_10009e85;
    case 0x1004:
    case 0x1048:
      return str_10009e98;
    case 0x1005:
    case 0x1044:
      return str_10009ea8;
    default:
      return str_10009ed7;
    case 0x1050:
      return str_10009eb7;
    case 0x1052:
      return str_10009ec6;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_10009f53;
  case 2:
    return str_10009f40;
  case 3:
    return str_10009f2d;
  case 4:
    return str_10009f66;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_1000856f:
      pcVar2 = recovered_10009680((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_10009e47;
}

#undef str_10009e47
#undef str_10009e52
#undef str_10009e61
#undef str_10009e72
#undef str_10009e85
#undef str_10009e98
#undef str_10009ea8
#undef str_10009eb7
#undef str_10009ec6
#undef str_10009ed7
#undef str_10009ee2
#undef str_10009eee
#undef str_10009ef8
#undef str_10009f01
#undef str_10009f0c
#undef str_10009f15
#undef str_10009f1d
#undef str_10009f26
#undef str_10009f2d
#undef str_10009f40
#undef str_10009f53
#undef str_10009f66

#define local_44 (*(int *)(frame + 28))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(code * *)(frame + 48))
#define local_2c (*(int *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_20 (*(int *)(frame + 64))
#define local_1c (*(ushort * *)(frame + 68))
#define local_18 (*(uint *)(frame + 72))
#define local_14 (*(int * *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085c0
 */

bool recovered_100085c0(int *in_ECX,ushort *in_EDX,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  local_24 = 0;
  bVar5 = false;
  if (param_3 != (int *)0x0) {
    iVar3 = -0x58;
    do {
      *(undefined1 *)((int)param_3 + iVar3 + 0x58) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
    if ((((in_EDX != (ushort *)0x0) && ((in_EDX[9] & 0x10) != 0)) && (in_ECX != (int *)0x0)) &&
       (((*in_ECX == 0x54584b57 && (0x5f < (uint)in_ECX[2])) &&
        ((code *)in_ECX[0x17] != (code *)0x0)))) {
      local_1c = in_EDX;
      local_14 = in_ECX;
      iVar3 = (*(code *)in_ECX[0x17])
                        ((char)*in_EDX,*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1],0x34,1,
                         &local_24);
      bVar5 = false;
      if (iVar3 != 0) {
        if (local_24 - 0x40 < 0xb0) {
          uVar4 = 0;
          while( true ) {
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_28 = 0;
            local_38 = 0;
            local_34 = 0;
            if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x60)) ||
               ((code *)local_14[0x17] == (code *)0x0)) break;
            local_18 = CONCAT31(PF_PART3(local_18, 1),(char)*local_1c);
            local_30 = (code *)(local_24 & 0xffff);
            iVar3 = (*(code *)local_14[0x17])
                              ((char)*local_1c,*(undefined1 *)((int)local_1c + 1),(char)local_1c[1],
                               local_30,1,&local_44);
            if ((((iVar3 == 0) || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 0x60)) ||
               ((code *)local_14[0x17] == (code *)0x0)) break;
            local_18 = (uint)(byte)local_1c[1];
            iVar3 = (*(code *)local_14[0x17])
                              (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 1 & 0xffff,1,
                               &local_40);
            if (iVar3 == 0) break;
            if (((local_44 == 9) && (*local_14 == 0x54584b57)) &&
               ((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)))) {
              local_18 = (uint)(byte)local_1c[1];
              iVar3 = (*(code *)local_14[0x17])
                                (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 3 & 0xffff,1,
                                 &local_3c);
              if ((((iVar3 != 0) && (*local_14 == 0x54584b57)) && (0x5f < (uint)local_14[2])) &&
                 ((code *)local_14[0x17] != (code *)0x0)) {
                local_18 = (uint)(byte)local_1c[1];
                iVar3 = (*(code *)local_14[0x17])
                                  (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 4 & 0xffff,1,
                                   &local_28);
                if ((((iVar3 != 0) && (*local_14 == 0x54584b57)) && (0x5f < (uint)local_14[2])) &&
                   ((code *)local_14[0x17] != (code *)0x0)) {
                  local_18 = (uint)(byte)local_1c[1];
                  iVar3 = (*(code *)local_14[0x17])
                                    (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 8 & 0xffff,
                                     4,&local_38);
                  if (((iVar3 != 0) && (*local_14 == 0x54584b57)) &&
                     ((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)))) {
                    local_18 = (uint)(byte)local_1c[1];
                    iVar3 = (*(code *)local_14[0x17])
                                      (*local_1c & 0xff,*local_1c >> 8,local_18,
                                       local_24 + 0xc & 0xffff,4,&local_34);
                    if (iVar3 != 0) {
                      local_20 = 0;
                      param_3[9] = param_3[9] + 1;
                      if (local_3c == 1) {
                        local_18 = local_38;
                        iVar3 = local_34 + local_38;
                        if (((!CARRY4(local_34,local_38)) && (local_28 < 6)) &&
                           ((local_34 != 0 &&
                            (((local_28 == 0 || ((*(uint *)(local_1c + local_28 * 2 + 8) & 7) != 4))
                             && (uVar2 = *(uint *)(local_1c + local_28 * 2 + 10),
                                (uVar2 & 1) == 0 && uVar2 != 0)))))) {
                          iVar1 = 0;
                          if ((uVar2 & 6) == 4) {
                            if (4 < local_28) goto LAB_10008a30;
                            iVar1 = *(int *)(local_1c + local_28 * 2 + 0xc);
                          }
                          uVar2 = uVar2 & 0xfffffff0;
                          if (((iVar3 != 0) && (uVar2 != 0 || iVar1 != 0)) &&
                             (local_2c = 0, *local_14 == 0x54584b57)) {
                            if (((uint)local_14[2] < 0xbc) ||
                               (local_30 = (code *)local_14[0x2e], local_30 == (code *)0x0)) {
                              if ((!((uint)local_14[2] < 0x68 || iVar1 != 0)) &&
                                 (((code *)local_14[0x19] != (code *)0x0 &&
                                  (iVar3 = (*(code *)local_14[0x19])(uVar2,0,iVar3,&local_2c),
                                  iVar3 != 0)))) {
                                iVar3 = local_2c;
                                goto LAB_10008a1d;
                              }
                            }
                            else {
                              iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                              if (iVar3 != 0) {
                                iVar3 = local_20;
LAB_10008a1d:
                                *param_3 = iVar3 + local_18;
                                param_3[4] = local_28;
                                goto LAB_10008c45;
                              }
                            }
                          }
                        }
                      }
LAB_10008a30:
                      if (local_3c == 2) {
                        local_18 = local_38;
                        iVar3 = local_34 + local_38;
                        if (((((!CARRY4(local_34,local_38)) && (local_28 < 6)) && (local_34 != 0))
                            && ((local_28 == 0 ||
                                ((*(uint *)(local_1c + local_28 * 2 + 8) & 7) != 4)))) &&
                           (uVar2 = *(uint *)(local_1c + local_28 * 2 + 10),
                           (uVar2 & 1) == 0 && uVar2 != 0)) {
                          iVar1 = 0;
                          if ((uVar2 & 6) == 4) {
                            if (4 < local_28) goto LAB_10008bda;
                            iVar1 = *(int *)(local_1c + local_28 * 2 + 0xc);
                          }
                          uVar2 = uVar2 & 0xfffffff0;
                          if ((iVar3 != 0) && (uVar2 != 0 || iVar1 != 0)) {
                            local_20 = 0;
                            local_2c = 0;
                            if (*local_14 == 0x54584b57) {
                              if (((uint)local_14[2] < 0xbc) ||
                                 (local_30 = (code *)local_14[0x2e], local_30 == (code *)0x0)) {
                                if ((0x67 < (uint)local_14[2] && iVar1 == 0) &&
                                   (((code *)local_14[0x19] != (code *)0x0 &&
                                    (iVar3 = (*(code *)local_14[0x19])(uVar2,0,iVar3,&local_2c),
                                    iVar3 != 0)))) {
                                  local_20 = local_2c;
                                  goto LAB_10008b58;
                                }
                              }
                              else {
                                iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                                if (iVar3 != 0) {
LAB_10008b58:
                                  local_20 = local_20 + local_18;
                                  local_2c = 0;
                                  param_3[1] = local_20;
                                  param_3[5] = local_28;
                                  if (((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) &&
                                     ((code *)local_14[0x17] != (code *)0x0)) {
                                    local_18 = (uint)(byte)local_1c[1];
                                    iVar3 = (*(code *)local_14[0x17])
                                                      (*local_1c & 0xff,*local_1c >> 8,local_18,
                                                       local_24 + 0x10 & 0xffff,4,&local_2c);
                                    if (iVar3 != 0) {
                                      param_3[8] = local_2c;
                                    }
                                  }
                                  goto LAB_10008c45;
                                }
                              }
                            }
                          }
                        }
                      }
LAB_10008bda:
                      if ((local_3c == 3) &&
                         (iVar3 = recovered_10009350(local_14,(int)local_1c,local_28,local_38,
                                                     local_34,&local_20), iVar3 != 0)) {
                        param_3[2] = local_20;
                        param_3[6] = local_28;
                      }
                      else if ((local_3c == 4) &&
                              (iVar3 = recovered_10009350(local_14,(int)local_1c,local_28,local_38,
                                                          local_34,&local_20), iVar3 != 0)) {
                        param_3[3] = local_20;
                        param_3[7] = local_28;
                      }
                    }
                  }
                }
              }
            }
LAB_10008c45:
            if ((((local_40 == 0) || (local_40 == local_24)) || (local_24 = local_40, 0x1e < uVar4))
               || (uVar4 = uVar4 + 1, 0xaf < local_40 - 0x40)) break;
          }
        }
        bVar5 = *param_3 != 0;
      }
    }
  }
  return bVar5;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int * *)(frame + 24))
#define local_14 (*(int * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c80
 */

void recovered_10008c80(int *in_ECX,int *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;

  local_1c = 0;
  if (in_EDX == (int *)0x0) {
    return;
  }
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    in_EDX[0xc] = 0;
    uVar2 = in_EDX[0xb] & 1;
    iVar1 = 0x34;
    goto LAB_10008cf7;
  }
  iVar3 = *in_ECX;
  if (iVar3 == 0x54584b57) {
    iVar3 = iVar1 + 0x14;
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) goto LAB_10008d09;
LAB_10008ccb:
      if ((uint)in_ECX[2] < 0xc0) {
        iVar3 = 0x54584b57;
        if ((uint)in_ECX[2] < 0x6c) goto LAB_10008e78;
LAB_10008d59:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 != (code *)0x0) goto LAB_10008d60;
      }
      else {
        pcVar4 = (code *)in_ECX[0x2f];
        if (pcVar4 == (code *)0x0) goto LAB_10008d59;
LAB_10008d60:
        (*pcVar4)(iVar1 + 4,4,in_EDX + 10);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_10008e5b;
        iVar3 = *in_ECX;
        if (iVar3 != 0x54584b57) goto LAB_10008e78;
      }
      if ((uint)in_ECX[2] < 0xc4) {
        iVar3 = 0x54584b57;
        if ((uint)in_ECX[2] < 0x70) goto LAB_10008e78;
LAB_10008e3a:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) {
          iVar3 = 0x54584b57;
          goto LAB_10008e78;
        }
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) goto LAB_10008e3a;
      }
      (*pcVar4)(iVar1,4,1);
      iVar1 = *in_EDX;
      if (iVar1 != 0) {
        iVar3 = *in_ECX;
        goto LAB_10008e78;
      }
    }
    else {
      pcVar4 = (code *)in_ECX[0x2f];
      if (pcVar4 == (code *)0x0) {
LAB_10008d09:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 != (code *)0x0) goto LAB_10008d10;
LAB_10008d3a:
        if ((uint)in_ECX[2] < 0xc4) {
          if (0x6f < (uint)in_ECX[2]) goto LAB_10008db6;
        }
        else {
          pcVar4 = (code *)in_ECX[0x30];
          if (pcVar4 == (code *)0x0) {
LAB_10008db6:
            pcVar4 = (code *)in_ECX[0x1b];
            if (pcVar4 == (code *)0x0) goto LAB_10008de2;
          }
          (*pcVar4)(iVar3,1,0);
          iVar1 = *in_EDX;
          if (iVar1 == 0) goto LAB_10008e5b;
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_10008e78;
        }
LAB_10008de2:
        if ((uint)in_ECX[2] < 0xc4) {
          if ((uint)in_ECX[2] < 0x70) goto LAB_10008ccb;
LAB_10008e02:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_10008ccb;
        }
        else {
          pcVar4 = (code *)in_ECX[0x30];
          if (pcVar4 == (code *)0x0) goto LAB_10008e02;
        }
        (*pcVar4)(iVar1,4,0);
        iVar1 = *in_EDX;
        if (iVar1 != 0) {
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_10008e78;
          goto LAB_10008ccb;
        }
      }
      else {
LAB_10008d10:
        (*pcVar4)(iVar3,1,in_EDX + 0xe);
        iVar1 = *in_EDX;
        if (iVar1 != 0) {
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_10008e78;
          iVar3 = iVar1 + 0x14;
          goto LAB_10008d3a;
        }
      }
    }
LAB_10008e5b:
    in_EDX[0xc] = 0;
    in_EDX[0xd] = in_EDX[0xb] & 1;
LAB_10009016:
    if (((*in_ECX == 0x54584b57) && (0x7b < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0x1e] != (code *)0x0)) {
      (*(code *)in_ECX[0x1e])();
    }
  }
  else {
LAB_10008e78:
    if (iVar3 == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc0) {
        if (0x6b < (uint)in_ECX[2]) goto LAB_10008e9c;
        goto LAB_10008edc;
      }
      pcVar4 = (code *)in_ECX[0x2f];
      if (pcVar4 == (code *)0x0) {
LAB_10008e9c:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 == (code *)0x0) goto LAB_10008edc;
      }
      (*pcVar4)(iVar1 + 4,4,in_EDX + 0xb);
      iVar1 = *in_EDX;
      in_EDX[0xc] = 0;
      in_EDX[0xd] = in_EDX[0xb] & 1;
      if (iVar1 == 0) goto LAB_10009016;
      iVar3 = *in_ECX;
    }
    else {
LAB_10008edc:
      in_EDX[0xc] = 0;
      in_EDX[0xd] = in_EDX[0xb] & 1;
    }
    local_14 = in_EDX + 0xc;
    local_18 = in_EDX + 0xd;
    if (iVar3 == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_10008f20;
LAB_10008f54:
        iVar3 = 0;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_10008f20:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_10008f54;
        }
        (*pcVar4)(iVar1 + 8,4,0);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_10009016;
        if (*in_ECX != 0x54584b57) goto LAB_1000902d;
        iVar3 = *local_14;
      }
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_10008f72;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_10008f72:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_10008f9e;
        }
        (*pcVar4)(iVar1 + 0xc,4,iVar3);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_10009016;
        if (*in_ECX != 0x54584b57) goto LAB_1000902d;
      }
LAB_10008f9e:
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_10008fba;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_10008fba:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_10008fdf;
        }
        (*pcVar4)(iVar1 + 8,4,1);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_10009016;
        if (*in_ECX != 0x54584b57) goto LAB_1000902d;
      }
LAB_10008fdf:
      if ((uint)in_ECX[2] < 0xc4) {
        if ((uint)in_ECX[2] < 0x70) goto LAB_10009016;
LAB_10009000:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_10009016;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) goto LAB_10009000;
      }
      (*pcVar4)(iVar1 + 0xc,4,*local_18);
      goto LAB_10009016;
    }
  }
LAB_1000902d:
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  iVar3 = iVar1 + 0x14;
  if ((uint)in_ECX[2] < 0xc4) {
    if (0x6f < (uint)in_ECX[2]) goto LAB_10009075;
  }
  else {
    pcVar4 = (code *)in_ECX[0x30];
    if (pcVar4 == (code *)0x0) {
LAB_10009075:
      pcVar4 = (code *)in_ECX[0x1b];
      if (pcVar4 != (code *)0x0) goto LAB_1000907c;
    }
    else {
LAB_1000907c:
      (*pcVar4)(iVar3,1,1);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) goto LAB_1000910c;
    }
    else {
      pcVar4 = (code *)in_ECX[0x30];
      if (pcVar4 == (code *)0x0) {
LAB_1000910c:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_10009139;
      }
      (*pcVar4)(iVar3,1,3);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
LAB_10009139:
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) goto LAB_100091a4;
    }
    else {
      pcVar4 = (code *)in_ECX[0x30];
      if (pcVar4 == (code *)0x0) {
LAB_100091a4:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_10009056;
      }
      (*pcVar4)(iVar3,1,0xb);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
  }
LAB_10009056:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_100090c1;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_100090c1:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_100090ed;
    }
    (*pcVar4)(iVar3,1,in_EDX + 0xf);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_100090ed:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_10009159;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_10009159:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_10009188;
    }
    (*pcVar4)(iVar1 + 0x12,2,in_EDX + 0x10);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_10009188:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_100091e4;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_100091e4:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_10009213;
    }
    (*pcVar4)(iVar1 + 0x15,1,in_EDX + 0x15);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_10009213:
  if ((uint)in_ECX[2] < 0xc4) {
    if (0x6f < (uint)in_ECX[2]) goto LAB_1000922f;
  }
  else {
    pcVar4 = (code *)in_ECX[0x30];
    if (pcVar4 == (code *)0x0) {
LAB_1000922f:
      pcVar4 = (code *)in_ECX[0x1b];
      if (pcVar4 == (code *)0x0) goto LAB_1000925c;
    }
    (*pcVar4)(iVar1 + 0x16,2,0);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000925c:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_10009278;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_10009278:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_100092a7;
    }
    (*pcVar4)(iVar1 + 0x18,2,in_EDX + 0x11);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_100092a7:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_100092c3;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_100092c3:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_100092ea;
    }
    (*pcVar4)(iVar1 + 0x1c,2,in_EDX + 0x12);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_100092ea:
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
LAB_10009306:
    pcVar4 = (code *)in_ECX[0x1a];
    if (pcVar4 == (code *)0x0) {
      return;
    }
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) goto LAB_10009306;
  }
  iVar1 = (*pcVar4)(iVar1 + 0x1e,2,&local_1c);
  if (iVar1 == 0) {
    return;
  }
  in_EDX[0x13] = local_1c;
  if (in_EDX[1] == 0) {
    return;
  }
  uVar2 = local_1c * in_EDX[8] + in_EDX[1];
  iVar1 = 0x50;
LAB_10008cf7:
  *(uint *)((int)in_EDX + iVar1) = uVar2;
  return;
}

#undef local_1c
#undef local_18
#undef local_14

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009350
 */

undefined4
recovered_10009350(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009480
 */

void recovered_10009480(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (in_EDX == 0 || param_4 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_100094c5;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return;
  }
LAB_100094c5:
  (*pcVar1)(in_EDX + param_3,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094e0
 */

void recovered_100094e0(int *in_ECX,int in_EDX,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (((in_EDX != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10009511;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10009511:
      (*pcVar1)(in_EDX + 0x14,1,param_3);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009530
 */

void recovered_10009530(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (in_EDX == 0 || param_4 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_10009575;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return;
  }
LAB_10009575:
  (*pcVar1)(in_EDX + param_3,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009590
 */

void recovered_10009590(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (((in_EDX != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_100095c1;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_100095c1:
      (*pcVar1)(in_EDX + param_3,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095e0
 */

void recovered_100095e0(int *in_ECX,int in_EDX,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;

  if (in_EDX == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if ((uint)in_ECX[2] < 0x70) {
      return;
    }
LAB_10009618:
    pcVar2 = (code *)in_ECX[0x1b];
    if (pcVar2 == (code *)0x0) {
      return;
    }
  }
  else {
    pcVar2 = (code *)in_ECX[0x30];
    if (pcVar2 == (code *)0x0) goto LAB_10009618;
  }
  iVar1 = (*pcVar2)(in_EDX + param_3,4,param_4);
  if (iVar1 == 0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if ((uint)in_ECX[2] < 0x70) {
      return;
    }
  }
  else {
    pcVar2 = (code *)in_ECX[0x30];
    if (pcVar2 != (code *)0x0) goto LAB_10009666;
  }
  pcVar2 = (code *)in_ECX[0x1b];
  if (pcVar2 == (code *)0x0) {
    return;
  }
LAB_10009666:
  (*pcVar2)(in_EDX + param_3 + 4,4,param_5);
  return;
}


#undef DAT_10009f7c
#define DAT_10009f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a0U)))
#undef DAT_10009f81
#define DAT_10009f81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a5U)))
#undef DAT_10009f86
#define DAT_10009f86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aaU)))
#undef DAT_10009f8b
#define DAT_10009f8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8afU)))
#undef str_10009f90
#define str_10009f90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b4U)))
#undef str_10009f9b
#define str_10009f9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bfU)))
#undef str_10009fa4
#define str_10009fa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009680
 */

char * recovered_10009680(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_10009f7c;
    }
    if (in_ECX == 0x10) {
      return &DAT_10009f81;
    }
    if (in_ECX == 0x20) {
      return &DAT_10009f86;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_10009f8b;
    }
    if (in_ECX == 0x80) {
      return str_10009f90;
    }
    if (in_ECX == 0xfe) {
      return str_10009f9b;
    }
  }
  return str_10009fa4;
}

#undef DAT_10009f7c
#undef DAT_10009f81
#undef DAT_10009f86
#undef DAT_10009f8b
#undef str_10009f90
#undef str_10009f9b
#undef str_10009fa4

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
