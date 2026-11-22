/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

void * recovered_10000bd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10009000;
}

#undef DAT_10009000

#undef str_10008914
#define str_10008914 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_10008924
#define str_10008924 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18fU)))
#undef str_1000894f
#define str_1000894f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1baU)))
#undef str_10008964
#define str_10008964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cfU)))
#undef str_10008983
#define str_10008983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeU)))
#undef str_10008992
#define str_10008992 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fdU)))
#undef str_10008999
#define str_10008999 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204U)))
#undef str_100089a9
#define str_100089a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x214U)))
#undef str_100089b8
#define str_100089b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x223U)))
#define abStack_4f1 (*(byte (*)[13])(frame + 31))
#define local_4e4 (*(char *)(frame + 44))
#define local_48c (*(uint *)(frame + 132))
#define local_450 (*(uint *)(frame + 192))
#define local_44c (*(undefined4 *)(frame + 196))
#define abStack_49 (*(byte (*)[45])(frame + 1223))
#define local_448 (*(byte (*)[1023])(frame + 200))
#define local_1c (*(uint *)(frame + 1268))
#define local_18 (*(uint *)(frame + 1272))
#define local_14 (*(uint *)(frame + 1276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be0
 */

int recovered_10000be0(int *api)

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
      pcVar6 = str_10008914;
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
      pcVar6 = str_10008983;
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
      pcVar6 = str_10008992;
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
      pcVar6 = str_10008924;
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
        pcVar6 = str_10008999;
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
        pcVar6 = str_100089a9;
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
        pcVar6 = str_100089b8;
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
      iVar5 = (*(code *)api[3])(str_100089b8 + 0xf,str_1000894f,local_448);
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
              iVar5 = recovered_100024d0(api,(char)local_18,bVar7,0,abStack_4f1 + 1);
              if ((iVar5 != 0) &&
                 (recovered_100015b0((int)api,abStack_4f1 + 1,(int *)&local_14), local_4e4 < '\0'))
              {
                in_DL = (undefined1)local_18;
                iVar5 = recovered_100024d0(api,in_DL,bVar7,1,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,2,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,3,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,4,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,5,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,6,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
                }
                iVar5 = recovered_100024d0(api,in_DL,bVar7,7,pbVar1);
                if (iVar5 != 0) {
                  recovered_100015b0((int)api,pbVar1,(int *)&local_14);
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
          pcVar6 = str_10008964;
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
          (*(code *)api[3])(str_100089b8 + 0xf,str_1000894f,local_448);
          iVar3 = 1;
        }
      }
    }
  }
  return iVar3;
}

#undef str_10008914
#undef str_10008924
#undef str_1000894f
#undef str_10008964
#undef str_10008983
#undef str_10008992
#undef str_10008999
#undef str_100089a9
#undef str_100089b8
#undef abStack_4f1
#undef local_4e4
#undef local_48c
#undef local_450
#undef local_44c
#undef abStack_49
#undef local_448
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_100089fb
#define DAT_100089fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x266U)))
#undef DAT_10008a00
#define DAT_10008a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef DAT_10008a05
#define DAT_10008a05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10008a0a
#define DAT_10008a0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_10008e3f
#define DAT_10008e3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aaU)))
#undef DAT_10008e71
#define DAT_10008e71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dcU)))
#undef str_100089c8
#define str_100089c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100089e7
#define str_100089e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x252U)))
#undef str_10008a0f
#define str_10008a0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27aU)))
#undef str_10008a1a
#define str_10008a1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_10008a23
#define str_10008a23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28eU)))
#undef str_10008e43
#define str_10008e43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aeU)))
#undef str_10008e4c
#define str_10008e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#undef str_10008e55
#define str_10008e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c0U)))
#undef str_10008e5d
#define str_10008e5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c8U)))
#undef str_10008e68
#define str_10008e68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d3U)))
#define local_48e (*(undefined2 *)(frame + 1042))
#define local_8e (*(undefined2 *)(frame + 2066))
#define local_24 (*(int *)(frame + 2172))
#define local_20 (*(char * *)(frame + 2176))
#define local_1c (*(uint *)(frame + 2180))
#define local_17 (*(byte *)(frame + 2185))
#define local_16 (*(ushort *)(frame + 2186))
#define local_14 (*(ushort * *)(frame + 2188))
#define acStack_88f (*(char (*)[1024])(frame + 17))
#define bStack_48f (*(byte *)(frame + 1041))
#define bStack_8f (*(byte *)(frame + 2065))
#define abStack_2f (*(byte (*)[11])(frame + 2161))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015b0
 */

void recovered_100015b0(int in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  byte bVar14;
  int iVar13;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  ushort *puVar18;

  if (in_EDX[8] != 0xc) {
    return;
  }
  if (in_EDX[9] != 3) {
    return;
  }
  local_14 = (ushort *)in_EDX;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_88f[1] = '\0';
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
  } while (acStack_88f[uVar4 + 1] != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar11 = 'r';
    pcVar8 = str_100089c8;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_88f[uVar4 + 1] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  acStack_88f[uVar4 + 1] = '\0';
  bVar12 = (byte)local_14[5];
  if (bVar12 < 0x30) {
    if (bVar12 == 0) {
      pcVar8 = &DAT_100089fb;
      goto LAB_1000168b;
    }
    if (bVar12 == 0x10) {
      pcVar8 = &DAT_10008a00;
      goto LAB_1000168b;
    }
    if (bVar12 == 0x20) {
      pcVar8 = &DAT_10008a05;
      goto LAB_1000168b;
    }
  }
  else {
    if (bVar12 == 0x30) {
      pcVar8 = &DAT_10008a0a;
      goto LAB_1000168b;
    }
    if (bVar12 == 0x80) {
      pcVar8 = str_10008a0f;
      goto LAB_1000168b;
    }
    if (bVar12 == 0xfe) {
      pcVar8 = str_10008a1a;
      goto LAB_1000168b;
    }
  }
  pcVar8 = str_10008a23;
LAB_1000168b:
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
  } while (acStack_88f[uVar4 + 1] != '\0');
  cVar11 = *pcVar8;
  if (uVar4 + 1 < 0x400 && cVar11 != '\0') {
    do {
      pcVar8 = pcVar8 + 1;
      acStack_88f[uVar4 + 1] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  acStack_88f[uVar4 + 1] = '\0';
  puVar18 = local_14;
  recovered_10002740((uint)(acStack_88f + 1),(int *)in_ECX,local_14,(int)(acStack_88f + 1));
  local_20 = recovered_100084a0((int)puVar18);
  if (puVar18 != (ushort *)0x0) {
    PF_PART1(local_8e, 0) = 0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (abStack_2f[uVar4 - 0x5f] != 0);
    if (uVar4 + 1 < 0x60) {
      bVar12 = 0x2f;
      pcVar8 = str_100089e7;
      do {
        pcVar8 = pcVar8 + 1;
        abStack_2f[uVar4 - 0x5f] = bVar12;
        uVar4 = uVar4 + 1;
        bVar12 = *pcVar8;
        if (bVar12 == 0) break;
      } while (uVar4 < 0x5f);
    }
    abStack_2f[uVar4 - 0x5f] = 0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (abStack_2f[uVar4 - 0x5f] != 0);
    if (uVar5 < 0x60) {
      abStack_2f[uVar4 - 0x5f] = 0x2f;
      uVar4 = uVar5;
    }
    abStack_2f[uVar4 - 0x5f] = 0;
    bVar12 = (byte)*local_14;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (abStack_2f[uVar4 - 0x5f] != 0);
    if (bVar12 < 0xa0) {
      bVar15 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar12 >> 4) + 0x37;
    }
    if (uVar4 + 1 < 0x60) {
      abStack_2f[uVar4 - 0x5f] = bVar15;
      abStack_2f[uVar4 - 0x5e] = 0;
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (abStack_2f[uVar4 - 0x5f] != 0);
    bVar14 = (byte)(bVar12 & 0xffff0f);
    if (bVar14 < 10) {
      uVar5 = (bVar12 & 0xffff0f) << 8 | 0x3000;
    }
    else {
      uVar5 = (uint)(byte)(bVar14 + 0x37) << 8;
    }
    bVar12 = (byte)(uVar5 >> 8);
    if (uVar4 + 1 < 0x60) {
      abStack_2f[uVar4 - 0x5f] = bVar12;
      abStack_2f[uVar4 - 0x5e] = 0;
    }
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      uVar4 = uVar10 + 1;
    } while (abStack_2f[uVar10 - 0x5f] != 0);
    if (uVar4 < 0x60) {
      abStack_2f[uVar10 - 0x5f] = 0x3a;
      uVar10 = uVar4;
    }
    abStack_2f[uVar10 - 0x5f] = 0;
    bVar14 = *(byte *)((int)local_14 + 1);
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      uVar4 = uVar10 + 1;
    } while (abStack_2f[uVar10 - 0x5f] != 0);
    if (bVar14 < 0xa0) {
      bVar6 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar6 = (bVar14 >> 4) + 0x37;
    }
    if (uVar10 + 1 < 0x60) {
      abStack_2f[uVar10 - 0x5f] = bVar6;
      abStack_2f[uVar10 - 0x5e] = 0;
    }
    uVar16 = CONCAT11(bVar14,bVar15) & 0xfff;
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      uVar4 = uVar10 + 1;
    } while (abStack_2f[uVar10 - 0x5f] != 0);
    bVar15 = (byte)(uVar16 >> 8);
    if (bVar15 < 10) {
      uVar16 = uVar16 | 0x3000;
    }
    else {
      uVar16 = CONCAT11(bVar15 + 0x37,(char)uVar16);
    }
    if (uVar10 + 1 < 0x60) {
      abStack_2f[uVar10 - 0x5f] = (byte)(uVar16 >> 8);
      abStack_2f[uVar10 - 0x5e] = 0;
    }
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      uVar4 = uVar10 + 1;
    } while (abStack_2f[uVar10 - 0x5f] != 0);
    local_24 = in_ECX;
    if (uVar4 < 0x60) {
      abStack_2f[uVar10 - 0x5f] = 0x2e;
      uVar10 = uVar4;
    }
    abStack_2f[uVar10 - 0x5f] = 0;
    uVar4 = (uint)(byte)local_14[1];
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar6);
    if (uVar4 == 0) {
      uVar10 = 0;
      do {
        uVar17 = uVar10;
        uVar10 = uVar17 + 1;
      } while (abStack_2f[uVar17 - 0x5f] != 0);
      if (uVar17 + 1 < 0x60) {
        (abStack_2f + (uVar17 - 0x5f))[0] = 0x30;
        (abStack_2f + (uVar17 - 0x5f))[1] = 0;
      }
    }
    else {
      local_16 = uVar16;
      local_17 = bVar12;
      uVar5 = uVar4;
      uVar10 = 0;
      do {
        acStack_88f[uVar10 + 0x401] = (byte)(uVar5 % 10) | 0x30;
        uVar16 = local_16;
        uVar17 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar3 = 9 < uVar5;
        uVar5 = uVar5 / 10;
        uVar10 = uVar17;
      } while (bVar3);
      uVar5 = (uint)local_17 << 8;
      do {
        iVar13 = uVar17 + 0x400;
        uVar17 = uVar17 - 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar10 = uVar9 + 1;
        } while (abStack_2f[uVar9 - 0x5f] != 0);
        if (uVar9 + 1 < 0x60) {
          abStack_2f[uVar9 - 0x5f] = acStack_88f[iVar13];
          abStack_2f[uVar9 - 0x5e] = 0;
        }
      } while (uVar17 != 0);
    }
    PF_PART1(local_48e, 0) = 0;
    uVar10 = 0;
    do {
      uVar17 = uVar10;
      uVar10 = uVar17 + 1;
    } while (acStack_88f[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      uVar5 = CONCAT31((int3)(uVar5 >> 8),0x70);
      pcVar8 = &DAT_10008e3f;
      do {
        acStack_88f[uVar17 + 0x401] = (char)uVar5;
        uVar17 = uVar17 + 1;
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*pcVar8);
        if (*pcVar8 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar17 < 0x3ff);
    }
    acStack_88f[uVar17 + 0x401] = '\0';
    uVar10 = 0;
    do {
      uVar17 = uVar10;
      uVar10 = uVar17 + 1;
    } while (acStack_88f[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      acStack_88f[uVar17 + 0x401] = (char)uVar16;
      acStack_88f[uVar17 + 0x402] = '\0';
    }
    uVar10 = 0;
    do {
      uVar17 = uVar10;
      uVar10 = uVar17 + 1;
    } while (acStack_88f[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      acStack_88f[uVar17 + 0x401] = (char)(uVar5 >> 8);
      acStack_88f[uVar17 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar10 + 0x401] = ':';
      uVar10 = uVar5;
    }
    acStack_88f[uVar10 + 0x401] = '\0';
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar10 + 1 < 0x400) {
      acStack_88f[uVar10 + 0x401] = (char)local_1c;
      acStack_88f[uVar10 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar10 + 1 < 0x400) {
      acStack_88f[uVar10 + 0x401] = (char)(uVar16 >> 8);
      acStack_88f[uVar10 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar10 + 0x401] = '.';
      uVar10 = uVar5;
    }
    acStack_88f[uVar10 + 0x401] = '\0';
    puVar18 = local_14;
    if (uVar4 == 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        (acStack_88f + uVar4 + 0x401)[0] = '0';
        (acStack_88f + uVar4 + 0x401)[1] = '\0';
      }
    }
    else {
      uVar5 = 0;
      do {
        abStack_2f[uVar5 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
        puVar18 = local_14;
        uVar10 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar3 = 9 < uVar4;
        uVar5 = uVar10;
        uVar4 = uVar4 / 10;
      } while (bVar3);
      do {
        pbVar1 = abStack_2f + uVar10;
        uVar10 = uVar10 - 1;
        uVar5 = 0;
        do {
          uVar4 = uVar5;
          uVar5 = uVar4 + 1;
        } while (acStack_88f[uVar4 + 0x401] != '\0');
        if (uVar4 + 1 < 0x400) {
          acStack_88f[uVar4 + 0x401] = *pbVar1;
          acStack_88f[uVar4 + 0x402] = '\0';
        }
      } while (uVar10 != 0);
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar8 = str_10008e43;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_88f[uVar4 + 0x401] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    uVar16 = puVar18[2];
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)(uVar16 >> 8);
      if (uVar16 < 0xa000) {
        bVar12 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar12 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar7 = uVar16 >> 8 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)uVar7;
      if (uVar7 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar7 = uVar16 >> 4 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)uVar7;
      if (uVar7 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)(uVar16 & 0xf);
      if ((uVar16 & 0xf) < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar8 = str_10008e4c;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_88f[uVar4 + 0x401] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    uVar16 = puVar18[3];
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)(uVar16 >> 8);
      if (uVar16 < 0xa000) {
        bVar12 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar12 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar7 = uVar16 >> 8 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)uVar7;
      if (uVar7 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar7 = uVar16 >> 4 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)uVar7;
      if (uVar7 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      bVar12 = (byte)(uVar16 & 0xf);
      if ((uVar16 & 0xf) < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar8 = str_10008e55;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_88f[uVar4 + 0x401] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    bVar12 = (byte)puVar18[4];
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 0xa0) {
        bVar15 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar15 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar15;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    bVar12 = bVar12 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar4 + 0x401] = '.';
      uVar4 = uVar5;
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    bVar12 = *(byte *)((int)puVar18 + 9);
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 0xa0) {
        bVar15 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar15 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar15;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    bVar12 = bVar12 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar4 + 0x401] = '.';
      uVar4 = uVar5;
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    bVar12 = (byte)puVar18[5];
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 0xa0) {
        bVar15 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar15 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar15;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    bVar12 = bVar12 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar8 = str_10008e5d;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_88f[uVar4 + 0x401] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    acStack_88f[uVar4 + 0x401] = '\0';
    bVar12 = *(byte *)((int)puVar18 + 0xb);
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 0xa0) {
        bVar15 = bVar12 >> 4 | 0x30;
      }
      else {
        bVar15 = (bVar12 >> 4) + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar15;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    bVar12 = bVar12 & 0xf;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (acStack_88f[uVar4 + 0x401] != '\0');
    if (uVar4 + 1 < 0x400) {
      if (bVar12 < 10) {
        bVar12 = bVar12 | 0x30;
      }
      else {
        bVar12 = bVar12 + 0x37;
      }
      acStack_88f[uVar4 + 0x401] = bVar12;
      acStack_88f[uVar4 + 0x402] = '\0';
    }
    uVar4 = *(uint *)(puVar18 + 8);
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar10 + 0x401] = ' ';
      uVar10 = uVar5;
    }
    acStack_88f[uVar10 + 0x401] = '\0';
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar10 + 1 < 0x400) {
      cVar11 = 'c';
      pcVar8 = str_10008e68;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_88f[uVar10 + 0x401] = cVar11;
        uVar10 = uVar10 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar10 < 0x3ff);
    }
    acStack_88f[uVar10 + 0x401] = '\0';
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10 + 1;
    } while (acStack_88f[uVar10 + 0x401] != '\0');
    if (uVar5 < 0x400) {
      acStack_88f[uVar10 + 0x401] = '=';
      uVar10 = uVar5;
    }
    acStack_88f[uVar10 + 0x401] = '\0';
    iVar13 = 8;
    do {
      uVar10 = uVar4 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
      bVar15 = (byte)uVar10;
      bVar12 = bVar15 + 0x37;
      uVar5 = 0;
      do {
        uVar17 = uVar5;
        uVar5 = uVar17 + 1;
      } while (acStack_88f[uVar17 + 0x401] != '\0');
      if (uVar17 + 1 < 0x400) {
        if (uVar10 < 10) {
          bVar12 = bVar15 | 0x30;
        }
        acStack_88f[uVar17 + 0x401] = bVar12;
        acStack_88f[uVar17 + 0x402] = '\0';
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    uVar5 = 0;
    puVar18 = local_14;
    do {
      local_1c = uVar5;
      uVar5 = *(uint *)(puVar18 + uVar5 * 2 + 10);
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar10 = uVar4;
          uVar4 = uVar10 + 1;
        } while (acStack_88f[uVar10 + 0x401] != '\0');
        if (uVar10 + 1 < 0x400) {
          cVar11 = ' ';
          pcVar8 = &DAT_10008e71;
          do {
            acStack_88f[uVar10 + 0x401] = cVar11;
            uVar10 = uVar10 + 1;
            cVar11 = *pcVar8;
            if (cVar11 == '\0') break;
            pcVar8 = pcVar8 + 1;
          } while (uVar10 < 0x3ff);
        }
        acStack_88f[uVar10 + 0x401] = '\0';
        if (local_1c == 0) {
          uVar4 = 0;
          do {
            uVar10 = uVar4;
            uVar4 = uVar10 + 1;
          } while (acStack_88f[uVar10 + 0x401] != '\0');
          if (uVar10 + 1 < 0x400) {
            (acStack_88f + uVar10 + 0x401)[0] = '0';
            (acStack_88f + uVar10 + 0x401)[1] = '\0';
          }
        }
        else {
          uVar4 = local_1c;
          uVar10 = 0;
          do {
            abStack_2f[uVar10 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
            uVar17 = uVar10 + 1;
            if (8 < uVar10) break;
            bVar3 = 9 < uVar4;
            uVar4 = uVar4 / 10;
            uVar10 = uVar17;
          } while (bVar3);
          do {
            pbVar1 = abStack_2f + uVar17;
            uVar17 = uVar17 - 1;
            uVar4 = 0;
            do {
              uVar10 = uVar4;
              uVar4 = uVar10 + 1;
            } while (acStack_88f[uVar10 + 0x401] != '\0');
            if (uVar10 + 1 < 0x400) {
              acStack_88f[uVar10 + 0x401] = *pbVar1;
              acStack_88f[uVar10 + 0x402] = '\0';
            }
          } while (uVar17 != 0);
          puVar18 = local_14;
        }
        uVar4 = 0;
        do {
          uVar10 = uVar4;
          uVar4 = uVar10 + 1;
        } while (acStack_88f[uVar10 + 0x401] != '\0');
        if (uVar4 < 0x400) {
          acStack_88f[uVar10 + 0x401] = '=';
          uVar10 = uVar4;
        }
        acStack_88f[uVar10 + 0x401] = '\0';
        iVar13 = 8;
        do {
          uVar10 = uVar5 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
          bVar15 = (byte)uVar10;
          bVar12 = bVar15 + 0x37;
          uVar4 = 0;
          do {
            uVar17 = uVar4;
            uVar4 = uVar17 + 1;
          } while (acStack_88f[uVar17 + 0x401] != '\0');
          if (uVar17 + 1 < 0x400) {
            if (uVar10 < 10) {
              bVar12 = bVar15 | 0x30;
            }
            acStack_88f[uVar17 + 0x401] = bVar12;
            acStack_88f[uVar17 + 0x402] = '\0';
          }
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      iVar13 = local_24;
      uVar5 = local_1c + 1;
    } while (uVar5 != 6);
    if (acStack_88f[1] != '\0') {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar5 < 0x400) {
        acStack_88f[uVar4 + 0x401] = ' ';
        uVar4 = uVar5;
      }
      acStack_88f[uVar4 + 0x401] = '\0';
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (acStack_88f[uVar4 + 0x401] != '\0');
      if (uVar4 + 1 < 0x400) {
        pcVar8 = acStack_88f + 2;
        cVar11 = acStack_88f[1];
        do {
          acStack_88f[uVar4 + 0x401] = cVar11;
          uVar4 = uVar4 + 1;
          cVar11 = *pcVar8;
          if (cVar11 == '\0') break;
          pcVar8 = pcVar8 + 1;
        } while (uVar4 < 0x3ff);
      }
      acStack_88f[uVar4 + 0x401] = '\0';
    }
    if ((iVar13 != 0) && (pcVar2 = *(code **)(iVar13 + 0xc), pcVar2 != (code *)0x0)) {
      (*pcVar2)(&local_8e,local_20,&local_48e);
    }
  }
  return;
}

#undef DAT_100089fb
#undef DAT_10008a00
#undef DAT_10008a05
#undef DAT_10008a0a
#undef DAT_10008e3f
#undef DAT_10008e71
#undef str_100089c8
#undef str_100089e7
#undef str_10008a0f
#undef str_10008a1a
#undef str_10008a23
#undef str_10008e43
#undef str_10008e4c
#undef str_10008e55
#undef str_10008e5d
#undef str_10008e68
#undef local_48e
#undef local_8e
#undef local_24
#undef local_20
#undef local_1c
#undef local_17
#undef local_16
#undef local_14
#undef acStack_88f
#undef bStack_48f
#undef bStack_8f
#undef abStack_2f

#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

undefined4
recovered_100024d0(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100089fb
#define DAT_100089fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x266U)))
#undef DAT_10008a00
#define DAT_10008a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef DAT_10008a05
#define DAT_10008a05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10008a0a
#define DAT_10008a0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef str_10008a0f
#define str_10008a0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27aU)))
#undef str_10008a1a
#define str_10008a1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_10008a23
#define str_10008a23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

char * recovered_100026e0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_100089fb;
    }
    if (in_ECX == 0x10) {
      return &DAT_10008a00;
    }
    if (in_ECX == 0x20) {
      return &DAT_10008a05;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_10008a0a;
    }
    if (in_ECX == 0x80) {
      return str_10008a0f;
    }
    if (in_ECX == 0xfe) {
      return str_10008a1a;
    }
  }
  return str_10008a23;
}

#undef DAT_100089fb
#undef DAT_10008a00
#undef DAT_10008a05
#undef DAT_10008a0a
#undef str_10008a0f
#undef str_10008a1a
#undef str_10008a23

#undef DAT_10008cf3
#define DAT_10008cf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef DAT_10008cfb
#define DAT_10008cfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_10008d2e
#define DAT_10008d2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x599U)))
#undef DAT_10008d36
#define DAT_10008d36 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a1U)))
#undef DAT_10008d3e
#define DAT_10008d3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a9U)))
#undef DAT_10008d52
#define DAT_10008d52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdU)))
#undef DAT_10008d5a
#define DAT_10008d5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c5U)))
#undef DAT_10008d62
#define DAT_10008d62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_10008d6a
#define DAT_10008d6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d5U)))
#undef DAT_10008d7d
#define DAT_10008d7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e8U)))
#undef DAT_10008e31
#define DAT_10008e31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69cU)))
#undef str_10008a32
#define str_10008a32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10008a42
#define str_10008a42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_10008a56
#define str_10008a56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_10008a6e
#define str_10008a6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d9U)))
#undef str_10008a86
#define str_10008a86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
#undef str_10008a9f
#define str_10008a9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_10008ab0
#define str_10008ab0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31bU)))
#undef str_10008ac0
#define str_10008ac0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32bU)))
#undef str_10008acf
#define str_10008acf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10008ad8
#define str_10008ad8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
#undef str_10008af4
#define str_10008af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_10008aff
#define str_10008aff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_10008b0f
#define str_10008b0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_10008b16
#define str_10008b16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_10008b26
#define str_10008b26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_10008b33
#define str_10008b33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_10008b49
#define str_10008b49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b4U)))
#undef str_10008b5f
#define str_10008b5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
#undef str_10008b75
#define str_10008b75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e0U)))
#undef str_10008b8b
#define str_10008b8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_10008ba4
#define str_10008ba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_10008bbc
#define str_10008bbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef str_10008bc9
#define str_10008bc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x434U)))
#undef str_10008bda
#define str_10008bda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x445U)))
#undef str_10008bee
#define str_10008bee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_10008bfe
#define str_10008bfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x469U)))
#undef str_10008c15
#define str_10008c15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x480U)))
#undef str_10008c28
#define str_10008c28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x493U)))
#undef str_10008c32
#define str_10008c32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_10008c45
#define str_10008c45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b0U)))
#undef str_10008c5c
#define str_10008c5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c7U)))
#undef str_10008c68
#define str_10008c68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_10008c74
#define str_10008c74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#undef str_10008c81
#define str_10008c81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ecU)))
#undef str_10008c8b
#define str_10008c8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f6U)))
#undef str_10008c9f
#define str_10008c9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_10008cae
#define str_10008cae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x519U)))
#undef str_10008cc1
#define str_10008cc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10008cd3
#define str_10008cd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53eU)))
#undef str_10008ce9
#define str_10008ce9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x554U)))
#undef str_10008d02
#define str_10008d02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56dU)))
#undef str_10008d0c
#define str_10008d0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x577U)))
#undef str_10008d18
#define str_10008d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x583U)))
#undef str_10008d45
#define str_10008d45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b0U)))
#undef str_10008d71
#define str_10008d71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dcU)))
#undef str_10008d82
#define str_10008d82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5edU)))
#undef str_10008d8c
#define str_10008d8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f7U)))
#undef str_10008da1
#define str_10008da1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60cU)))
#undef str_10008db2
#define str_10008db2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_10008dbe
#define str_10008dbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x629U)))
#undef str_10008dca
#define str_10008dca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x635U)))
#undef str_10008dd6
#define str_10008dd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x641U)))
#undef str_10008de5
#define str_10008de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x650U)))
#undef str_10008def
#define str_10008def (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65aU)))
#undef str_10008dfd
#define str_10008dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x668U)))
#undef str_10008e0e
#define str_10008e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#undef str_10008e1a
#define str_10008e1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef str_10008e26
#define str_10008e26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x691U)))
#undef str_10008e35
#define str_10008e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a0U)))
#define local_b4 (*(uint *)(frame + 28))
#define local_b0 (*(uint *)(frame + 32))
#define local_ac (*(undefined4 *)(frame + 36))
#define local_a8 (*(undefined4 *)(frame + 40))
#define local_a4 (*(uint *)(frame + 44))
#define local_a0 (*(uint *)(frame + 48))
#define local_9c (*(uint *)(frame + 52))
#define local_98 (*(uint *)(frame + 56))
#define local_94 (*(uint *)(frame + 60))
#define local_90 (*(uint *)(frame + 64))
#define local_8c (*(uint *)(frame + 68))
#define local_88 (*(uint *)(frame + 72))
#define local_84 (*(uint *)(frame + 76))
#define local_80 (*(uint *)(frame + 80))
#define local_7c (*(uint *)(frame + 84))
#define local_78 (*(uint *)(frame + 88))
#define local_74 (*(uint *)(frame + 92))
#define local_70 (*(uint *)(frame + 96))
#define local_6c (*(uint *)(frame + 100))
#define local_68 (*(uint *)(frame + 104))
#define local_64 (*(uint *)(frame + 108))
#define local_60 (*(uint *)(frame + 112))
#define local_5c (*(int *)(frame + 116))
#define local_58 (*(uint *)(frame + 120))
#define local_54 (*(uint *)(frame + 124))
#define local_50 (*(uint *)(frame + 128))
#define local_4c (*(uint *)(frame + 132))
#define local_48 (*(uint *)(frame + 136))
#define local_44 (*(uint *)(frame + 140))
#define local_40 (*(uint *)(frame + 144))
#define local_3c (*(uint *)(frame + 148))
#define local_38 (*(uint *)(frame + 152))
#define local_34 (*(uint *)(frame + 156))
#define local_30 (*(uint *)(frame + 160))
#define local_2c (*(undefined4 *)(frame + 164))
#define local_28 (*(undefined4 *)(frame + 168))
#define local_1c (*(uint *)(frame + 180))
#define local_18 (*(ushort * *)(frame + 184))
#define local_14 (*(int * *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002740
 */

void recovered_10002740(uint in_EAX,int *in_ECX,ushort *in_EDX,int param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined3 uVar7;
  uint uVar5;
  code *pcVar6;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  ushort *puVar11;
  char *pcVar12;
  byte bVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  byte *pbVar18;
  bool bVar19;

  local_18 = in_EDX;
  if (in_EDX == (ushort *)0x0) {
    local_34 = CONCAT31((int3)(in_EAX >> 8),in_ECX == (int *)0x0);
    bVar19 = true;
LAB_10002847:
    if (param_4 != 0) {
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008a56;
        do {
          pcVar9 = pcVar9 + 1;
          *(char *)(param_4 + uVar8) = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
    }
joined_r0x1000289e:
    local_44 = 0;
    if (bVar19) {
LAB_100028a4:
      local_2c = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      if (local_18 == (ushort *)0x0) {
        uVar16 = 1;
        if (local_44 == 0) {
          uVar16 = 0;
        }
        goto LAB_1000477e;
      }
      if (((char)local_18[4] == '\x01') && (*(char *)((int)local_18 + 9) == '\x06')) {
        if (((((*(uint *)(local_18 + 0x12) & 7) != 4) &&
             ((uVar16 = *(uint *)(local_18 + 0x14), (uVar16 & 6) != 4 && (uVar16 != 0)))) &&
            ((uVar16 & 1) == 0)) && (uVar16 = uVar16 & 0xfffffff0, uVar16 != 0)) {
          local_28 = 0;
          local_a8 = 0;
          if (((char)local_34 == '\0') && (*in_ECX == 0x54584b57)) {
            if (0xbb < (uint)in_ECX[2]) {
              if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_10004238;
              iVar3 = (*(code *)in_ECX[0x2e])(uVar16,0,0x1000,&local_28);
              if (iVar3 == 0) goto LAB_100028e6;
              local_1c = local_28;
LAB_1000426e:
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                  uVar8 = uVar16;
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar8 + 1 < 0x400) {
                  cVar10 = 'a';
                  pcVar9 = str_10008ce9;
                  do {
                    pcVar9 = pcVar9 + 1;
                    *(char *)(param_4 + uVar8) = cVar10;
                    uVar8 = uVar8 + 1;
                    cVar10 = *pcVar9;
                    if (cVar10 == '\0') break;
                  } while (uVar8 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                  uVar8 = uVar16;
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              iVar3 = 8;
              do {
                uVar16 = local_1c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                if (uVar16 < 10) {
                  uVar16 = uVar16 | 0x30;
                }
                else {
                  uVar16 = (uint)(byte)((char)uVar16 + 0x37);
                }
                PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
                if (param_4 != 0) {
                  uVar8 = 0;
                  do {
                    uVar5 = uVar8;
                    uVar8 = uVar5 + 1;
                  } while (*(char *)(param_4 + uVar5) != '\0');
                  if (uVar5 + 1 < 0x400) {
                    pbVar18 = (byte *)((int)&local_a8 + 1);
                    do {
                      *(char *)(param_4 + uVar5) = (char)uVar16;
                      uVar5 = uVar5 + 1;
                      uVar16 = (uint)*pbVar18;
                      if (*pbVar18 == 0) break;
                      pbVar18 = pbVar18 + 1;
                    } while (uVar5 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar5) = 0;
                }
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              local_28 = local_1c;
              if ((local_1c != 0) && (*in_ECX == 0x54584b57)) {
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10005bdf;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_10005bdf:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10005c11;
                  }
                  (*pcVar6)(local_1c,4,&local_2c);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10006661;
                }
LAB_10005c11:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_1000617d;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_1000617d:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_100061b3;
                  }
                  local_28 = local_1c;
                  (*pcVar6)(local_1c + 4,4,&local_38);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10006661;
                }
LAB_100061b3:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_100064f2;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_100064f2:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10006528;
                  }
                  local_28 = local_1c;
                  (*pcVar6)(local_1c + 0xc,4,&local_40);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10006661;
                }
LAB_10006528:
                local_28 = local_1c;
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10006645;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_10006645:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10006661;
                  }
                  (*pcVar6)(local_1c + 0x10,4,&local_48);
                }
              }
LAB_10006661:
              if ((((int)local_38 < 0) || (local_28 == 0)) || (*in_ECX != 0x54584b57))
              goto LAB_10006705;
              iVar3 = local_28 + 4;
              uVar16 = in_ECX[2];
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) goto LAB_100066a2;
LAB_100066db:
                if (uVar16 < 0x6c) goto LAB_10006705;
LAB_100066ef:
                pcVar6 = (code *)in_ECX[0x1a];
                if (pcVar6 == (code *)0x0) goto LAB_10006705;
              }
              else {
                pcVar6 = (code *)in_ECX[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_100066a2:
                  pcVar6 = (code *)in_ECX[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100066a9;
                }
                else {
LAB_100066a9:
                  (*pcVar6)(iVar3,4,local_38 | 0x80000000);
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10006705;
                  iVar3 = local_28 + 4;
                }
                uVar16 = in_ECX[2];
                if (uVar16 < 0xc0) goto LAB_100066db;
                pcVar6 = (code *)in_ECX[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_100066ef;
              }
              (*pcVar6)(iVar3,4,&local_38);
LAB_10006705:
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                  uVar8 = uVar16;
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar8 + 1 < 0x400) {
                  cVar10 = 'a';
                  pcVar9 = &DAT_10008cf3;
                  do {
                    *(char *)(param_4 + uVar8) = cVar10;
                    uVar8 = uVar8 + 1;
                    cVar10 = *pcVar9;
                    if (cVar10 == '\0') break;
                    pcVar9 = pcVar9 + 1;
                  } while (uVar8 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                  uVar8 = uVar16;
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              iVar3 = 8;
LAB_10006786:
              do {
                uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                bVar13 = (byte)uVar16;
                if (uVar16 < 10) {
                  bVar13 = bVar13 | 0x30;
                }
                else {
                  bVar13 = bVar13 + 0x37;
                }
                if (param_4 == 0) goto LAB_100067cb;
                uVar16 = 0;
                do {
                  pcVar9 = (char *)(param_4 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar9 != '\0');
                if (uVar16 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar16) = bVar13;
                  *(undefined1 *)(param_4 + uVar16) = 0;
                }
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'a';
                pcVar9 = &DAT_10008cfb;
                do {
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                  pcVar9 = pcVar9 + 1;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10006849:
              iVar3 = 8;
LAB_10006853:
              uVar16 = local_38 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 == 0) {
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) goto LAB_10006919;
                goto LAB_10006853;
              }
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(byte *)(param_4 + -1 + uVar16) = bVar13;
                *(undefined1 *)(param_4 + uVar16) = 0;
              }
              iVar3 = iVar3 + -1;
              if (iVar3 != 0) goto LAB_10006853;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'a';
                pcVar9 = str_10008d02;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10006919:
              iVar3 = 8;
LAB_10006923:
              uVar16 = local_40 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 == 0) {
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) goto LAB_100069e9;
                goto LAB_10006923;
              }
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(byte *)(param_4 + -1 + uVar16) = bVar13;
                *(undefined1 *)(param_4 + uVar16) = 0;
              }
              iVar3 = iVar3 + -1;
              if (iVar3 != 0) goto LAB_10006923;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'a';
                pcVar9 = str_10008d0c;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
LAB_100069e9:
              iVar3 = 8;
              do {
                uVar16 = local_48 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                bVar13 = (byte)uVar16;
                if (uVar16 < 10) {
                  bVar13 = bVar13 | 0x30;
                }
                else {
                  bVar13 = bVar13 + 0x37;
                }
                if (param_4 != 0) {
                  uVar16 = 0;
                  do {
                    pcVar9 = (char *)(param_4 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (*pcVar9 != '\0');
                  if (uVar16 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar16) = bVar13;
                    *(undefined1 *)(param_4 + uVar16) = 0;
                  }
                }
                iVar3 = iVar3 + -1;
                uVar16 = 1;
              } while (iVar3 != 0);
              goto LAB_1000294c;
            }
            if (0x67 < (uint)in_ECX[2]) {
LAB_10004238:
              if (((code *)in_ECX[0x19] != (code *)0x0) &&
                 (iVar3 = (*(code *)in_ECX[0x19])(uVar16,0,0x1000,&local_a8), iVar3 != 0)) {
                local_1c = local_a8;
                local_28 = local_a8;
                goto LAB_1000426e;
              }
            }
          }
        }
LAB_100028e6:
        if (param_4 == 0) goto LAB_1000293c;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008cd3;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
      }
      else {
LAB_1000293c:
        uVar16 = 0;
      }
LAB_1000294c:
      local_2c = 0;
      local_38 = 0;
      local_40 = 0;
      local_14 = in_ECX;
      if (((char)local_18[4] == '\x04') && (*(char *)((int)local_18 + 9) == '\x03')) {
        uVar8 = *(uint *)(local_18 + 10);
        if ((uVar8 & 1) == 0 && uVar8 != 0) {
          iVar3 = 0;
          if ((uVar8 & 6) == 4) {
            iVar3 = *(int *)(local_18 + 0xc);
          }
          uVar8 = uVar8 & 0xfffffff0;
          if (uVar8 != 0 || iVar3 != 0) {
            local_28 = 0;
            local_a8 = 0;
            if (((char)local_34 == '\0') && (*in_ECX == 0x54584b57)) {
              if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
                if (((0x67 < (uint)in_ECX[2] && iVar3 == 0) && ((code *)in_ECX[0x19] != (code *)0x0)
                    ) && (iVar3 = (*(code *)in_ECX[0x19])(uVar8,0,0x1000,&local_a8), iVar3 != 0)) {
                  local_30 = uVar16;
                  local_28 = local_a8;
                  goto LAB_10003584;
                }
              }
              else {
                iVar3 = (*(code *)in_ECX[0x2e])(uVar8,iVar3,0x1000,&local_28);
                in_ECX = local_14;
                if (iVar3 != 0) {
                  local_30 = uVar16;
LAB_10003584:
                  if (param_4 != 0) {
                    uVar8 = 0;
                    do {
                      uVar5 = uVar8;
                      uVar8 = uVar5 + 1;
                    } while (*(char *)(param_4 + uVar5) != '\0');
                    if (uVar8 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar8) = 0x20;
                      uVar5 = uVar8;
                    }
                    *(undefined1 *)(param_4 + uVar5) = 0;
                    uVar8 = 0;
                    do {
                      uVar5 = uVar8;
                      uVar8 = uVar5 + 1;
                    } while (*(char *)(param_4 + uVar5) != '\0');
                    if (uVar5 + 1 < 0x400) {
                      cVar10 = 'h';
                      pcVar9 = &DAT_10008d2e;
                      do {
                        *(char *)(param_4 + uVar5) = cVar10;
                        uVar5 = uVar5 + 1;
                        cVar10 = *pcVar9;
                        if (cVar10 == '\0') break;
                        pcVar9 = pcVar9 + 1;
                      } while (uVar5 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar5) = 0;
                    uVar8 = 0;
                    do {
                      uVar5 = uVar8;
                      uVar8 = uVar5 + 1;
                    } while (*(char *)(param_4 + uVar5) != '\0');
                    if (uVar8 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar8) = 0x3d;
                      uVar5 = uVar8;
                    }
                    *(undefined1 *)(param_4 + uVar5) = 0;
                  }
                  iVar3 = 8;
                  do {
                    uVar8 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar13 = (byte)uVar8;
                    if (uVar8 < 10) {
                      bVar13 = bVar13 | 0x30;
                    }
                    else {
                      bVar13 = bVar13 + 0x37;
                    }
                    PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
                    if (param_4 != 0) {
                      uVar8 = 0;
                      do {
                        uVar5 = uVar8;
                        uVar8 = uVar5 + 1;
                      } while (*(char *)(param_4 + uVar5) != '\0');
                      if (uVar5 + 1 < 0x400) {
                        pbVar18 = (byte *)((int)&local_a8 + 1);
                        do {
                          *(byte *)(param_4 + uVar5) = bVar13;
                          uVar5 = uVar5 + 1;
                          bVar13 = *pbVar18;
                          if (bVar13 == 0) break;
                          pbVar18 = pbVar18 + 1;
                        } while (uVar5 < 0x3ff);
                      }
                      *(undefined1 *)(param_4 + uVar5) = 0;
                      in_ECX = local_14;
                    }
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  uVar8 = 0;
                  local_30 = uVar16;
                  if (local_28 == 0) {
LAB_10005d69:
                  }
                  else if (*in_ECX == 0x54584b57) {
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_10005903;
LAB_10005bb7:
                      if ((uint)in_ECX[2] < 0xc0) {
                        if (0x6b < (uint)in_ECX[2]) goto LAB_10005d49;
LAB_10005d67:
                        uVar8 = local_28;
                      }
                      else {
                        pcVar6 = (code *)in_ECX[0x2f];
                        if (pcVar6 == (code *)0x0) {
LAB_10005d49:
                          pcVar6 = (code *)in_ECX[0x1a];
                          if (pcVar6 == (code *)0x0) goto LAB_10005d67;
                        }
                        (*pcVar6)(local_28 + 8,4,&local_38);
                        uVar8 = local_28;
                      }
                      goto LAB_10005d69;
                    }
                    pcVar6 = (code *)in_ECX[0x2f];
                    if (pcVar6 == (code *)0x0) {
LAB_10005903:
                      pcVar6 = (code *)in_ECX[0x1a];
                      if (pcVar6 == (code *)0x0) goto LAB_10005bb7;
                    }
                    (*pcVar6)(local_28,4,&local_2c);
                    uVar8 = 0;
                    if (local_28 != 0) {
                      uVar8 = local_28;
                      if (*in_ECX == 0x54584b57) goto LAB_10005bb7;
                    }
                  }
                  else {
                    uVar8 = local_28;
                  }
                  if ((local_38 & 1) == 0) {
                    uVar16 = 0;
                    if (uVar8 != 0) {
                      if (*in_ECX != 0x54584b57) goto LAB_10005de4;
                      local_1c = uVar8 + 8;
                      uVar5 = in_ECX[2];
                      if (uVar5 < 0xc4) {
                        if (0x6f < uVar5) goto LAB_10006062;
LAB_100060b0:
                        uVar16 = uVar8;
                        if (0x6b < uVar5) {
LAB_10006615:
                          pcVar6 = (code *)in_ECX[0x1a];
                          uVar16 = uVar8;
                          if (pcVar6 != (code *)0x0) goto LAB_10006622;
                        }
                      }
                      else {
                        pcVar6 = (code *)in_ECX[0x30];
                        if (pcVar6 == (code *)0x0) {
LAB_10006062:
                          pcVar6 = (code *)in_ECX[0x1b];
                          if (pcVar6 != (code *)0x0) goto LAB_10006069;
                        }
                        else {
LAB_10006069:
                          (*pcVar6)(local_1c,4,local_38 | 1);
                          uVar16 = 0;
                          if (local_28 == 0) goto LAB_10005da8;
                          if (*in_ECX != 0x54584b57) goto LAB_10005de4;
                          local_1c = local_28 + 8;
                          uVar8 = local_28;
                        }
                        uVar5 = in_ECX[2];
                        if (uVar5 < 0xc0) goto LAB_100060b0;
                        pcVar6 = (code *)in_ECX[0x2f];
                        if (pcVar6 == (code *)0x0) goto LAB_10006615;
LAB_10006622:
                        (*pcVar6)(local_1c,4,&local_38);
                        uVar16 = local_28;
                      }
                    }
                  }
                  else {
                    uVar16 = uVar8;
                  }
LAB_10005da8:
                  if (*in_ECX != 0x54584b57) goto LAB_10005de4;
                  if ((uint)in_ECX[2] < 0xc0) {
                    if ((uint)in_ECX[2] < 0x6c) goto LAB_10005de4;
LAB_10005dcb:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10005de4;
                  }
                  else {
                    pcVar6 = (code *)in_ECX[0x2f];
                    if (pcVar6 == (code *)0x0) goto LAB_10005dcb;
                  }
                  (*pcVar6)(uVar16 + 0xe,2,&local_40);
LAB_10005de4:
                  if (param_4 != 0) {
                    uVar16 = 0;
                    do {
                      uVar8 = uVar16;
                      uVar16 = uVar8 + 1;
                    } while (*(char *)(param_4 + uVar8) != '\0');
                    if (uVar16 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                      uVar8 = uVar16;
                    }
                    *(undefined1 *)(param_4 + uVar8) = 0;
                    uVar16 = 0;
                    do {
                      uVar8 = uVar16;
                      uVar16 = uVar8 + 1;
                    } while (*(char *)(param_4 + uVar8) != '\0');
                    if (uVar8 + 1 < 0x400) {
                      cVar10 = 'h';
                      pcVar9 = &DAT_10008d36;
                      do {
                        *(char *)(param_4 + uVar8) = cVar10;
                        uVar8 = uVar8 + 1;
                        cVar10 = *pcVar9;
                        if (cVar10 == '\0') break;
                        pcVar9 = pcVar9 + 1;
                      } while (uVar8 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar8) = 0;
                    uVar16 = 0;
                    do {
                      uVar8 = uVar16;
                      uVar16 = uVar8 + 1;
                    } while (*(char *)(param_4 + uVar8) != '\0');
                    if (uVar16 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                      uVar8 = uVar16;
                    }
                    *(undefined1 *)(param_4 + uVar8) = 0;
                  }
                  iVar3 = 8;
LAB_10005e65:
                  do {
                    uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar13 = (byte)uVar16;
                    if (uVar16 < 10) {
                      bVar13 = bVar13 | 0x30;
                    }
                    else {
                      bVar13 = bVar13 + 0x37;
                    }
                    if (param_4 == 0) goto LAB_10005eab;
                    uVar16 = 0;
                    do {
                      pcVar9 = (char *)(param_4 + uVar16);
                      uVar16 = uVar16 + 1;
                    } while (*pcVar9 != '\0');
                    if (uVar16 < 0x400) {
                      *(byte *)(param_4 + -1 + uVar16) = bVar13;
                      *(undefined1 *)(param_4 + uVar16) = 0;
                    }
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                    uVar8 = uVar16;
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar8 + 1 < 0x400) {
                    cVar10 = 'h';
                    pcVar9 = &DAT_10008d3e;
                    do {
                      *(char *)(param_4 + uVar8) = cVar10;
                      uVar8 = uVar8 + 1;
                      cVar10 = *pcVar9;
                      if (cVar10 == '\0') break;
                      pcVar9 = pcVar9 + 1;
                    } while (uVar8 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                    uVar8 = uVar16;
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10005f29:
                  iVar3 = 8;
LAB_10005f33:
                  uVar16 = local_38 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar13 = (byte)uVar16;
                  if (uVar16 < 10) {
                    bVar13 = bVar13 | 0x30;
                  }
                  else {
                    bVar13 = bVar13 + 0x37;
                  }
                  if (param_4 == 0) {
                    iVar3 = iVar3 + -1;
                    if (iVar3 == 0) goto LAB_10005ff9;
                    goto LAB_10005f33;
                  }
                  uVar16 = 0;
                  do {
                    pcVar9 = (char *)(param_4 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (*pcVar9 != '\0');
                  if (uVar16 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar16) = bVar13;
                    *(undefined1 *)(param_4 + uVar16) = 0;
                  }
                  iVar3 = iVar3 + -1;
                  if (iVar3 != 0) goto LAB_10005f33;
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                    uVar8 = uVar16;
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar8 + 1 < 0x400) {
                    cVar10 = 'h';
                    pcVar9 = str_10008d45;
                    do {
                      pcVar9 = pcVar9 + 1;
                      *(char *)(param_4 + uVar8) = cVar10;
                      uVar8 = uVar8 + 1;
                      cVar10 = *pcVar9;
                      if (cVar10 == '\0') break;
                    } while (uVar8 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
                  uVar16 = 0;
                  do {
                    uVar8 = uVar16;
                    uVar16 = uVar8 + 1;
                  } while (*(char *)(param_4 + uVar8) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                    uVar8 = uVar16;
                  }
                  *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10005ff9:
                  iVar3 = 8;
                  do {
                    uVar16 = local_40 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar13 = (byte)uVar16;
                    if (uVar16 < 10) {
                      bVar13 = bVar13 | 0x30;
                    }
                    else {
                      bVar13 = bVar13 + 0x37;
                    }
                    if (param_4 != 0) {
                      uVar16 = 0;
                      do {
                        pcVar9 = (char *)(param_4 + uVar16);
                        uVar16 = uVar16 + 1;
                      } while (*pcVar9 != '\0');
                      if (uVar16 < 0x400) {
                        *(byte *)(param_4 + -1 + uVar16) = bVar13;
                        *(undefined1 *)(param_4 + uVar16) = 0;
                      }
                    }
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  uVar8 = 1;
                  uVar16 = local_30;
                  goto LAB_100035f9;
                }
              }
            }
          }
        }
        if (param_4 != 0) {
          uVar8 = 0;
          do {
            uVar5 = uVar8;
            uVar8 = uVar5 + 1;
          } while (*(char *)(param_4 + uVar5) != '\0');
          if (uVar5 + 1 < 0x400) {
            cVar10 = ' ';
            pcVar9 = str_10008d18;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar5) = cVar10;
              uVar5 = uVar5 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar5 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar5) = 0;
          uVar8 = 0;
LAB_100035f9:
          uVar16 = uVar16 | uVar8;
        }
      }
      piVar14 = local_14;
      local_28 = 0;
      local_2c = 0;
      local_38 = 0;
      local_40 = 0;
      puVar11 = local_18;
      if (((char)local_18[4] != '\f') || (*(char *)((int)local_18 + 9) != '\x03'))
      goto LAB_1000388c;
      uVar8 = *(uint *)(local_18 + 10);
      piVar17 = in_ECX;
      local_30 = uVar16;
      if ((uVar8 & 1) != 0 || uVar8 == 0) {
LAB_1000373d:
        uVar16 = 0;
        puVar11 = local_18;
LAB_1000375a:
        local_48 = 0;
        uVar8 = *(uint *)(puVar11 + uVar16 * 2 + 10);
        if ((uVar8 & 1) == 0) goto LAB_10003750;
        if ((((short)(uVar8 & 0xfffffffc) == 0 || (char)local_34 != '\0') ||
            (*piVar17 != 0x54584b57)) || ((uint)piVar17[2] < 0x58)) goto LAB_10003750;
        if ((code *)piVar17[0x15] == (code *)0x0) goto LAB_10003750;
        local_1c = uVar8 & 0xfffffffc;
        iVar3 = (*(code *)piVar17[0x15])(uVar8 & 0xfffc,2,&local_48);
        puVar11 = local_18;
        if (iVar3 == 0) goto LAB_10003750;
        if (param_4 == 0) {
          if (uVar16 != 0) goto LAB_100042ad;
          goto LAB_1000448c;
        }
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008d71;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        if (uVar16 == 0) {
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
          }
LAB_10003807:
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'u';
            pcVar9 = &DAT_10008d7d;
            do {
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
              pcVar9 = pcVar9 + 1;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
        }
        else {
LAB_100042ad:
          uVar8 = 0;
          do {
            *(byte *)((int)&local_a8 + uVar8) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
            uVar5 = uVar8 + 1;
            if (8 < uVar8) break;
            bVar19 = 9 < uVar16;
            uVar8 = uVar5;
            uVar16 = uVar16 / 10;
          } while (bVar19);
          do {
            while (uVar16 = uVar5 - 1, param_4 != 0) {
              uVar8 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar8);
                uVar8 = uVar8 + 1;
              } while (*pcVar9 != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar8) = *(undefined1 *)((int)&local_ac + uVar5 + 3);
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              uVar5 = uVar16;
              if (uVar16 == 0) goto LAB_10003807;
            }
            uVar5 = uVar16;
          } while (uVar16 != 0);
        }
LAB_1000448c:
        iVar3 = 8;
LAB_10004496:
        uVar16 = local_1c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar16;
        if (9 < uVar16) {
          bVar13 = bVar13 + 0x37;
          if (param_4 != 0) goto LAB_100044b4;
LAB_100044e2:
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_10004560;
          goto LAB_10004496;
        }
        bVar13 = bVar13 | 0x30;
        if (param_4 == 0) goto LAB_100044e2;
LAB_100044b4:
        uVar16 = 0;
        do {
          pcVar9 = (char *)(param_4 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar9 != '\0');
        if (uVar16 < 0x400) {
          *(byte *)(param_4 + -1 + uVar16) = bVar13;
          *(undefined1 *)(param_4 + uVar16) = 0;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 != 0) goto LAB_10004496;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = 'u';
          pcVar9 = str_10008d82;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10004560:
        iVar3 = 8;
        do {
          uVar16 = local_48 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        goto LAB_100064db;
      }
      iVar3 = 0;
      if ((uVar8 & 6) == 4) {
        iVar3 = *(int *)(local_18 + 0xc);
      }
      uVar8 = uVar8 & 0xfffffff0;
      if (uVar8 == 0 && iVar3 == 0) goto LAB_1000373d;
      local_28 = 0;
      local_a8 = 0;
      if (((char)local_34 != '\0') || (*in_ECX != 0x54584b57)) goto LAB_1000373d;
      if (((uint)in_ECX[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
        piVar17 = piVar14;
        if ((((uint)in_ECX[2] < 0x68 || iVar3 != 0) || ((code *)local_14[0x19] == (code *)0x0)) ||
           (iVar3 = (*(code *)local_14[0x19])(uVar8,0,0x1000,&local_a8), iVar3 == 0))
        goto LAB_1000373d;
        local_28 = local_a8;
      }
      else {
        iVar3 = (*(code *)local_14[0x2e])(uVar8,iVar3,0x1000,&local_28);
        piVar17 = local_14;
        piVar14 = local_14;
        if (iVar3 == 0) goto LAB_1000373d;
      }
      if (param_4 != 0) {
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = 'u';
          pcVar9 = &DAT_10008d52;
          do {
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
      }
      iVar3 = 8;
      do {
        uVar16 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        if (uVar16 < 10) {
          uVar16 = uVar16 | 0x30;
        }
        else {
          uVar16 = (uint)(byte)((char)uVar16 + 0x37);
        }
        PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
        if (param_4 != 0) {
          uVar8 = 0;
          do {
            uVar5 = uVar8;
            uVar8 = uVar5 + 1;
          } while (*(char *)(param_4 + uVar5) != '\0');
          if (uVar5 + 1 < 0x400) {
            pbVar18 = (byte *)((int)&local_a8 + 1);
            do {
              *(char *)(param_4 + uVar5) = (char)uVar16;
              uVar5 = uVar5 + 1;
              uVar16 = (uint)*pbVar18;
              if (*pbVar18 == 0) break;
              pbVar18 = pbVar18 + 1;
            } while (uVar5 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar5) = 0;
          piVar14 = local_14;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10006277;
      if ((uint)piVar14[2] < 0xc0) {
        if (0x6b < (uint)piVar14[2]) goto LAB_10005949;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_10005949:
          pcVar6 = (code *)piVar14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10005976;
        }
        (*pcVar6)(local_28,4,&local_2c);
        if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10006277;
      }
LAB_10005976:
      if ((uint)piVar14[2] < 0xc0) {
        if (0x6b < (uint)piVar14[2]) goto LAB_10005cf3;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_10005cf3:
          pcVar6 = (code *)piVar14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10005d23;
        }
        (*pcVar6)(local_28 + 4,4,&local_38);
        if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10006277;
      }
LAB_10005d23:
      if ((uint)piVar14[2] < 0xc0) {
        if ((uint)piVar14[2] < 0x6c) goto LAB_10006277;
LAB_1000625e:
        pcVar6 = (code *)piVar14[0x1a];
        if (pcVar6 == (code *)0x0) goto LAB_10006277;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) goto LAB_1000625e;
      }
      (*pcVar6)(local_28 + 8,4,&local_40);
LAB_10006277:
      if (param_4 != 0) {
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = 'u';
          pcVar9 = &DAT_10008d5a;
          do {
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
      }
      iVar3 = 8;
LAB_100062f8:
      do {
        uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar16;
        if (uVar16 < 10) {
          bVar13 = bVar13 | 0x30;
        }
        else {
          bVar13 = bVar13 + 0x37;
        }
        if (param_4 == 0) goto LAB_1000633b;
        uVar16 = 0;
        do {
          pcVar9 = (char *)(param_4 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar9 != '\0');
        if (uVar16 < 0x400) {
          *(byte *)(param_4 + -1 + uVar16) = bVar13;
          *(undefined1 *)(param_4 + uVar16) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = 'u';
        pcVar9 = &DAT_10008d62;
        do {
          *(char *)(param_4 + uVar8) = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
LAB_100063b9:
      iVar3 = 8;
LAB_100063c3:
      uVar16 = local_38 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar13 = (byte)uVar16;
      if (uVar16 < 10) {
        bVar13 = bVar13 | 0x30;
      }
      else {
        bVar13 = bVar13 + 0x37;
      }
      if (param_4 == 0) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) goto LAB_10006489;
        goto LAB_100063c3;
      }
      uVar16 = 0;
      do {
        pcVar9 = (char *)(param_4 + uVar16);
        uVar16 = uVar16 + 1;
      } while (*pcVar9 != '\0');
      if (uVar16 < 0x400) {
        *(byte *)(param_4 + -1 + uVar16) = bVar13;
        *(undefined1 *)(param_4 + uVar16) = 0;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 != 0) goto LAB_100063c3;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = 'u';
        pcVar9 = &DAT_10008d6a;
        do {
          *(char *)(param_4 + uVar8) = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10006489:
      iVar3 = 8;
      do {
        uVar16 = local_40 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar16;
        if (uVar16 < 10) {
          bVar13 = bVar13 | 0x30;
        }
        else {
          bVar13 = bVar13 + 0x37;
        }
        if (param_4 != 0) {
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
LAB_100064db:
      uVar16 = 1;
      goto LAB_10003869;
    }
  }
  else {
    uVar16 = 0xffffffff;
    if (in_EDX[2] == 0x1af4) {
      uVar16 = (uint)in_EDX[3];
      in_EAX = uVar16 & 0xffffffc0;
      if (in_EAX == 0x1000) {
        uVar16 = uVar16 - 0x1000;
      }
      else if (in_EAX == 0x1040) {
        uVar16 = uVar16 - 0x1040;
      }
      else {
        uVar16 = 0xffffffff;
      }
    }
    bVar19 = uVar16 == 0xffffffff;
    local_a8 = 0;
    local_28 = 0;
    if (in_ECX == (int *)0x0) {
      local_34 = CONCAT31((int3)(in_EAX >> 8),1);
      goto LAB_10002847;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_34 = 0;
      goto LAB_10002847;
    }
    local_1c = uVar16;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_10002a92:
      uVar16 = 0;
      if (param_4 != 0) {
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008a6e;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        goto LAB_10002ca3;
      }
LAB_10002cc1:
      local_34 = 0;
      goto joined_r0x1000289e;
    }
    local_34 = (uint)(byte)in_EDX[1];
    local_14 = in_ECX;
    iVar3 = (*(code *)in_ECX[0x17])
                      ((char)*in_EDX,*(undefined1 *)((int)in_EDX + 1),local_34,4,2,&local_a8);
    piVar14 = local_14;
    if (iVar3 == 0) goto LAB_10002a92;
    if ((*(uint *)(local_18 + 10) & 1) == 0) {
      uVar16 = (uint)(*(uint *)(local_18 + 10) != 0) * 2;
    }
    else {
      uVar16 = 1;
    }
    uVar8 = uVar16;
    if (*(uint *)(local_18 + 0xc) != 0) {
      uVar8 = uVar16 | 2;
    }
    if ((*(uint *)(local_18 + 0xc) & 1) != 0) {
      uVar8 = uVar16 | 1;
    }
    uVar16 = uVar8;
    if (*(uint *)(local_18 + 0xe) != 0) {
      uVar16 = uVar8 | 2;
    }
    if ((*(uint *)(local_18 + 0xe) & 1) != 0) {
      uVar16 = uVar8 | 1;
    }
    uVar8 = uVar16;
    if (*(uint *)(local_18 + 0x10) != 0) {
      uVar8 = uVar16 | 2;
    }
    if ((*(uint *)(local_18 + 0x10) & 1) != 0) {
      uVar8 = uVar16 | 1;
    }
    uVar16 = uVar8;
    if (*(uint *)(local_18 + 0x12) != 0) {
      uVar16 = uVar8 | 2;
    }
    if ((*(uint *)(local_18 + 0x12) & 1) != 0) {
      uVar16 = uVar8 | 1;
    }
    uVar8 = uVar16;
    if (*(uint *)(local_18 + 0x14) != 0) {
      uVar8 = uVar16 | 2;
    }
    if ((*(uint *)(local_18 + 0x14) & 1) != 0) {
      uVar8 = uVar16 | 1;
    }
    local_34 = uVar8 | 4;
    if (((char)local_18[4] == '\x06') && (*(char *)((int)local_18 + 9) != '\0')) {
      local_34 = uVar8 | 6;
    }
    local_28 = local_a8 | local_34;
    if ((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) {
      if ((code *)in_ECX[0x18] != (code *)0x0) {
        local_30 = CONCAT31(PF_PART3(local_30, 1),(char)*local_18);
        local_44 = (uint)*(byte *)((int)local_18 + 1);
        iVar3 = (*(code *)in_ECX[0x18])
                          ((char)*local_18,local_44,(char)local_18[1],4,2,local_a8 | local_34);
        piVar17 = local_14;
        in_ECX = piVar14;
        if (iVar3 != 0) {
          if (((*piVar14 == 0x54584b57) && (0x5f < (uint)piVar14[2])) &&
             ((code *)piVar14[0x17] != (code *)0x0)) {
            (*(code *)piVar14[0x17])
                      ((char)*local_18,*(undefined1 *)((int)local_18 + 1),(char)local_18[1],4,2,
                       &local_28);
            in_ECX = piVar17;
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'p';
              pcVar9 = str_10008a9f;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
          }
          iVar3 = 8;
LAB_10004c23:
          uVar16 = local_a8 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (9 < uVar16) {
            bVar13 = bVar13 + 0x37;
            if (param_4 != 0) goto LAB_10004c40;
LAB_10004c72:
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_10004cf0;
            goto LAB_10004c23;
          }
          bVar13 = bVar13 | 0x30;
          if (param_4 == 0) goto LAB_10004c72;
LAB_10004c40:
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_10004c23;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'p';
            pcVar9 = str_10008ab0;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10004cf0:
          iVar3 = 8;
LAB_10004cfa:
          uVar16 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (9 < uVar16) {
            bVar13 = bVar13 + 0x37;
            if (param_4 != 0) goto LAB_10004d17;
LAB_10004d42:
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_10004dba;
            goto LAB_10004cfa;
          }
          bVar13 = bVar13 | 0x30;
          if (param_4 == 0) goto LAB_10004d42;
LAB_10004d17:
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_10004cfa;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'p';
            pcVar9 = str_10008ac0;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10004dba:
          bVar13 = (byte)(local_34 >> 0x18);
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13 >> 4 | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13 & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)(local_34 >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)(local_34 >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)(local_34 >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)(local_34 >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)(local_34 >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = (byte)local_34 & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          local_44 = (uint)((local_34 & ~local_28) == 0);
          local_34 = 0;
          goto LAB_10002cb7;
        }
      }
    }
    uVar16 = 0;
    if (param_4 == 0) goto LAB_10002cc1;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_10008a86;
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar8) = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
LAB_10002ca3:
    *(undefined1 *)(param_4 + uVar8) = 0;
    local_44 = 0;
    local_34 = 0;
LAB_10002cb7:
    local_34 = 0;
    if (local_1c == 0xffffffff) goto LAB_100028a4;
  }
  uVar16 = 0;
  if ((local_18 != (ushort *)0x0) && (local_18[2] == 0x1af4)) {
    uVar8 = (uint)local_18[3];
    if ((uVar8 & 0xffffffc0) == 0x1000) {
      uVar8 = uVar8 - 0x1000;
    }
    else {
      if ((uVar8 & 0xffffffc0) != 0x1040) goto LAB_1000477c;
      uVar8 = uVar8 - 0x1040;
    }
    if (uVar8 != 0xffffffff) {
      local_14 = in_ECX;
      if (param_4 == 0) {
        if (uVar8 != 0) goto LAB_10002dd6;
      }
      else {
        uVar16 = 0;
        do {
          uVar5 = uVar16;
          uVar16 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
          uVar5 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar16 = 0;
        do {
          uVar5 = uVar16;
          uVar16 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = 'v';
          pcVar9 = str_10008acf;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar16 = 0;
        do {
          uVar5 = uVar16;
          uVar16 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
          uVar5 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        if (uVar8 == 0) {
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
          }
        }
        else {
LAB_10002dd6:
          uVar16 = 0;
          do {
            *(byte *)((int)&local_a8 + uVar16) = (byte)(uVar8 % 10) | 0x30;
            uVar5 = uVar16 + 1;
            if (8 < uVar16) break;
            bVar19 = 9 < uVar8;
            uVar16 = uVar5;
            uVar8 = uVar8 / 10;
          } while (bVar19);
          do {
            if (param_4 != 0) {
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = *(undefined1 *)((int)&local_ac + uVar5 + 3)
                ;
                *(undefined1 *)(param_4 + uVar16) = 0;
              }
            }
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      piVar14 = local_14;
      local_2c = 0;
      iVar3 = -0x58;
      do {
        *(undefined1 *)((int)&local_50 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
      if ((((((local_18[9] & 0x10) != 0) && ((char)local_34 == '\0')) && (*local_14 == 0x54584b57))
          && ((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)))) &&
         (iVar3 = (*(code *)local_14[0x17])
                            ((char)*local_18,*(undefined1 *)((int)local_18 + 1),(char)local_18[1],
                             0x34,1,&local_2c), iVar3 != 0)) {
        if (local_2c - 0x40 < 0xb0) {
          uVar16 = 0;
          while( true ) {
            piVar17 = local_14;
            local_1c = uVar16;
            local_38 = 0;
            local_40 = 0;
            local_48 = 0;
            local_50 = 0;
            local_b4 = 0;
            local_b0 = 0;
            if ((*piVar14 != 0x54584b57) || ((uint)piVar14[2] < 0x60)) break;
            if ((code *)piVar14[0x17] == (code *)0x0) break;
            iVar3 = (*(code *)piVar14[0x17])
                              (*local_18 & 0xff,*(undefined1 *)((int)local_18 + 1),(char)local_18[1]
                               ,local_2c & 0xffff,1,&local_38);
            piVar2 = local_14;
            piVar14 = piVar17;
            if ((((iVar3 == 0) || (*piVar17 != 0x54584b57)) || ((uint)piVar17[2] < 0x60)) ||
               ((code *)piVar17[0x17] == (code *)0x0)) break;
            iVar3 = (*(code *)piVar17[0x17])
                              ((char)*local_18,*(undefined1 *)((int)local_18 + 1),(char)local_18[1],
                               local_2c + 1 & 0xffff,1,&local_40);
            piVar17 = local_14;
            piVar14 = piVar2;
            if (iVar3 == 0) break;
            if (((local_38 == 9) && (*piVar2 == 0x54584b57)) &&
               ((0x5f < (uint)piVar2[2] && ((code *)piVar2[0x17] != (code *)0x0)))) {
              local_30 = (uint)(byte)local_18[1];
              iVar3 = (*(code *)piVar2[0x17])
                                ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_30,
                                 local_2c + 3 & 0xffff,1,&local_48);
              piVar2 = local_14;
              piVar14 = piVar17;
              if (((iVar3 != 0) && (*piVar17 == 0x54584b57)) &&
                 ((0x5f < (uint)piVar17[2] && ((code *)piVar17[0x17] != (code *)0x0)))) {
                local_30 = (uint)(byte)local_18[1];
                iVar3 = (*(code *)piVar17[0x17])
                                  ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_30,
                                   local_2c + 4 & 0xffff,1,&local_50);
                piVar17 = local_14;
                piVar14 = piVar2;
                if ((((iVar3 != 0) && (*piVar2 == 0x54584b57)) && (0x5f < (uint)piVar2[2])) &&
                   ((code *)piVar2[0x17] != (code *)0x0)) {
                  local_30 = (uint)(byte)local_18[1];
                  iVar3 = (*(code *)piVar2[0x17])
                                    ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_30,
                                     local_2c + 8 & 0xffff,4,&local_b4);
                  piVar2 = local_14;
                  piVar14 = piVar17;
                  if (((iVar3 != 0) && (*piVar17 == 0x54584b57)) &&
                     ((0x5f < (uint)piVar17[2] && ((code *)piVar17[0x17] != (code *)0x0)))) {
                    local_30 = (uint)(byte)local_18[1];
                    iVar3 = (*(code *)piVar17[0x17])
                                      ((char)*local_18,*(undefined1 *)((int)local_18 + 1),local_30,
                                       local_2c + 0xc & 0xffff,4,&local_b0);
                    piVar14 = piVar2;
                    if (iVar3 != 0) {
                      local_4c = 0;
                      local_84 = local_84 + 1;
                      if (local_48 == 1) {
                        local_30 = local_b4;
                        iVar3 = local_b0 + local_b4;
                        if (((CARRY4(local_b0,local_b4)) || (5 < local_50)) ||
                           ((local_b0 == 0 ||
                            (((local_50 != 0 && ((*(uint *)(local_18 + local_50 * 2 + 8) & 7) == 4))
                             || (uVar16 = *(uint *)(local_18 + local_50 * 2 + 10),
                                (uVar16 & 1) != 0 || uVar16 == 0)))))) goto LAB_100032e8;
                        iVar15 = 0;
                        if ((uVar16 & 6) == 4) {
                          if (4 < local_50) goto LAB_100032e8;
                          iVar15 = *(int *)(local_18 + local_50 * 2 + 0xc);
                        }
                        uVar16 = uVar16 & 0xfffffff0;
                        if (((iVar3 == 0) || (uVar16 == 0 && iVar15 == 0)) ||
                           (local_28 = 0, *local_14 != 0x54584b57)) goto LAB_100032e8;
                        if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
                          if ((!((uint)local_14[2] < 0x68 || iVar15 != 0)) &&
                             (((code *)local_14[0x19] != (code *)0x0 &&
                              (iVar3 = (*(code *)local_14[0x19])(uVar16,0,iVar3,&local_28),
                              iVar3 != 0)))) {
                            uVar16 = local_28;
                            goto LAB_100032ce;
                          }
                          goto LAB_100032e8;
                        }
                        iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar15,iVar3,&local_4c);
                        if (iVar3 == 0) goto LAB_100032e8;
                        uVar16 = local_4c;
LAB_100032ce:
                        local_a8 = uVar16 + local_30;
                        local_98 = local_50;
                      }
                      else {
LAB_100032e8:
                        if (local_48 == 2) {
                          local_30 = local_b4;
                          iVar3 = local_b0 + local_b4;
                          if (((((!CARRY4(local_b0,local_b4)) && (local_50 < 6)) && (local_b0 != 0))
                              && ((local_50 == 0 ||
                                  ((*(uint *)(local_18 + local_50 * 2 + 8) & 7) != 4)))) &&
                             (uVar16 = *(uint *)(local_18 + local_50 * 2 + 10),
                             (uVar16 & 1) == 0 && uVar16 != 0)) {
                            iVar15 = 0;
                            if ((uVar16 & 6) == 4) {
                              if (4 < local_50) goto LAB_1000333a;
                              iVar15 = *(int *)(local_18 + local_50 * 2 + 0xc);
                            }
                            uVar16 = uVar16 & 0xfffffff0;
                            if ((iVar3 != 0) && (uVar16 != 0 || iVar15 != 0)) {
                              local_4c = 0;
                              local_28 = 0;
                              if (*local_14 == 0x54584b57) {
                                if (((uint)local_14[2] < 0xbc) ||
                                   ((code *)local_14[0x2e] == (code *)0x0)) {
                                  if ((0x67 < (uint)local_14[2] && iVar15 == 0) &&
                                     (((code *)local_14[0x19] != (code *)0x0 &&
                                      (iVar3 = (*(code *)local_14[0x19])(uVar16,0,iVar3,&local_28),
                                      iVar3 != 0)))) {
                                    local_4c = local_28;
                                    goto LAB_100034ba;
                                  }
                                }
                                else {
                                  iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar15,iVar3,&local_4c);
                                  if (iVar3 != 0) {
LAB_100034ba:
                                    local_4c = local_4c + local_30;
                                    local_28 = 0;
                                    local_a4 = local_4c;
                                    local_94 = local_50;
                                    if ((((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2]))
                                        && ((code *)local_14[0x17] != (code *)0x0)) &&
                                       (iVar3 = (*(code *)local_14[0x17])
                                                          ((char)*local_18,
                                                           *(undefined1 *)((int)local_18 + 1),
                                                           (char)local_18[1],
                                                           local_2c + 0x10 & 0xffff,4,&local_28),
                                       iVar3 != 0)) {
                                      local_88 = local_28;
                                    }
                                    goto LAB_100033ba;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_1000333a:
                        if ((local_48 == 3) &&
                           (iVar3 = recovered_10008670(local_14,(int)local_18,local_50,local_b4,
                                                       local_b0,(int *)&local_4c), iVar3 != 0)) {
                          local_a0 = local_4c;
                          local_90 = local_50;
                        }
                        else if ((local_48 == 4) &&
                                (iVar3 = recovered_10008670(local_14,(int)local_18,local_50,local_b4
                                                            ,local_b0,(int *)&local_4c), iVar3 != 0)
                                ) {
                          local_9c = local_4c;
                          local_8c = local_50;
                        }
                      }
LAB_100033ba:
                      piVar14 = local_14;
                    }
                  }
                }
              }
            }
            if ((((local_40 == 0) || (local_40 == local_2c)) ||
                (local_2c = local_40, 0x1e < local_1c)) ||
               (uVar16 = local_1c + 1, 0xaf < local_40 - 0x40)) break;
          }
        }
        if (local_a8 != 0) {
          local_28 = 0;
          iVar3 = *piVar14;
          if (iVar3 == 0x54584b57) {
            iVar15 = local_a8 + 0x14;
            uVar16 = piVar14[2];
            if (uVar16 < 0xc0) {
              iVar3 = 0x54584b57;
              if (0x6b < uVar16) goto LAB_1000589e;
              goto LAB_1000512c;
            }
            pcVar6 = (code *)piVar14[0x2f];
            if (pcVar6 == (code *)0x0) {
LAB_1000589e:
              pcVar6 = (code *)local_14[0x1a];
              if (pcVar6 != (code *)0x0) goto LAB_100058a8;
LAB_100058df:
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) {
LAB_100061dc:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100061e6;
                  goto LAB_10006218;
                }
LAB_1000622d:
                iVar15 = local_a8 + 4;
LAB_10006233:
                iVar3 = 0x54584b57;
                if (uVar16 < 0x6c) goto LAB_1000512c;
LAB_10006241:
                pcVar6 = (code *)local_14[0x1a];
                if (pcVar6 != (code *)0x0) goto LAB_10006aa7;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_100061dc;
LAB_100061e6:
                (*pcVar6)(iVar15,1,0);
                if (local_a8 == 0) goto LAB_10006bba;
                iVar3 = *local_14;
                if (iVar3 != 0x54584b57) goto LAB_1000512c;
                uVar16 = local_14[2];
LAB_10006218:
                if (uVar16 < 0xc4) {
                  if (uVar16 < 0x70) goto LAB_1000622d;
LAB_10006a48:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10006a52;
                }
                else {
                  pcVar6 = (code *)local_14[0x30];
                  if (pcVar6 == (code *)0x0) goto LAB_10006a48;
LAB_10006a52:
                  (*pcVar6)(local_a8,4,0);
                  if (local_a8 == 0) goto LAB_10006bba;
                  iVar3 = *local_14;
                  if (iVar3 != 0x54584b57) goto LAB_1000512c;
                  uVar16 = local_14[2];
                }
                iVar15 = local_a8 + 4;
                if (uVar16 < 0xc0) goto LAB_10006233;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10006241;
LAB_10006aa7:
                (*pcVar6)(iVar15,4,&local_80);
                if (local_a8 == 0) goto LAB_10006bba;
                iVar3 = *local_14;
                if (iVar3 != 0x54584b57) goto LAB_1000512c;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                iVar3 = 0x54584b57;
                if (uVar16 < 0x70) goto LAB_1000512c;
LAB_10006afd:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 == (code *)0x0) {
                  iVar3 = 0x54584b57;
                  goto LAB_1000512c;
                }
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10006afd;
              }
              (*pcVar6)(local_a8,4,1);
              if (local_a8 == 0) goto LAB_10006bba;
              iVar3 = *local_14;
              if (iVar3 == 0x54584b57) goto LAB_1000513b;
              goto LAB_10006b3a;
            }
LAB_100058a8:
            (*pcVar6)(iVar15,1,&local_70);
            if (local_a8 != 0) {
              iVar3 = *local_14;
              if (iVar3 != 0x54584b57) goto LAB_1000512c;
              iVar15 = local_a8 + 0x14;
              uVar16 = local_14[2];
              goto LAB_100058df;
            }
LAB_10006bba:
            local_78 = 0;
            local_74 = local_7c & 1;
LAB_10006bca:
            if (((*local_14 == 0x54584b57) && (0x7b < (uint)local_14[2])) &&
               ((code *)local_14[0x1e] != (code *)0x0)) {
              (*(code *)local_14[0x1e])();
            }
LAB_10006be4:
            if ((local_a8 != 0) && (*local_14 == 0x54584b57)) {
              iVar3 = local_a8 + 0x14;
              uVar16 = local_14[2];
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) goto LAB_10006c26;
LAB_10006d5a:
                if (0x6b < uVar16) {
LAB_10006e98:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_10006ea2;
                  goto LAB_10006ed4;
                }
LAB_10006d63:
                iVar3 = local_a8 + 0x18;
LAB_10006d69:
                if (0x6b < uVar16) {
LAB_10006d75:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_10006d7f;
                  goto LAB_10006dae;
                }
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_10006c26:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10006c30;
                }
                else {
LAB_10006c30:
                  (*pcVar6)(iVar3,1,1);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (0x6f < uVar16) goto LAB_10006d02;
                  goto LAB_10006d5a;
                }
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_10006d02:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10006d0c;
                }
                else {
LAB_10006d0c:
                  (*pcVar6)(iVar3,1,3);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (0x6f < uVar16) goto LAB_10006e3c;
                  goto LAB_10006d5a;
                }
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_10006e3c:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10006e46;
                }
                else {
LAB_10006e46:
                  (*pcVar6)(iVar3,1,0xb);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc0) goto LAB_10006d5a;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10006e98;
LAB_10006ea2:
                (*pcVar6)(iVar3,1,&local_6c);
                if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                uVar16 = local_14[2];
LAB_10006ed4:
                if (uVar16 < 0xc0) {
                  if (uVar16 < 0x6c) goto LAB_10006d63;
LAB_10006ef4:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_10006efe;
                }
                else {
                  pcVar6 = (code *)local_14[0x2f];
                  if (pcVar6 == (code *)0x0) goto LAB_10006ef4;
LAB_10006efe:
                  (*pcVar6)(local_a8 + 0x12,2,&local_68);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc0) {
                  if (0x6b < uVar16) goto LAB_10006ff2;
                  goto LAB_10006d63;
                }
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) {
LAB_10006ff2:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_10006ffc;
                }
                else {
LAB_10006ffc:
                  (*pcVar6)(local_a8 + 0x15,1,&local_54);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (uVar16 < 0x70) goto LAB_10006d63;
LAB_100070b1:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100070bb;
                }
                else {
                  pcVar6 = (code *)local_14[0x30];
                  if (pcVar6 == (code *)0x0) goto LAB_100070b1;
LAB_100070bb:
                  (*pcVar6)(local_a8 + 0x16,2,0);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                  uVar16 = local_14[2];
                }
                iVar3 = local_a8 + 0x18;
                if (uVar16 < 0xc0) goto LAB_10006d69;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10006d75;
LAB_10006d7f:
                (*pcVar6)(iVar3,2,&local_64);
                if ((local_a8 != 0) && (*local_14 == 0x54584b57)) {
                  uVar16 = local_14[2];
LAB_10006dae:
                  if (uVar16 < 0xc0) {
                    if (0x6b < uVar16) goto LAB_10006f5d;
                  }
                  else {
                    pcVar6 = (code *)local_14[0x2f];
                    if (pcVar6 == (code *)0x0) {
LAB_10006f5d:
                      pcVar6 = (code *)local_14[0x1a];
                      if (pcVar6 != (code *)0x0) goto LAB_10006f67;
                    }
                    else {
LAB_10006f67:
                      (*pcVar6)(local_a8 + 0x1c,2,&local_60);
                      if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007114;
                      uVar16 = local_14[2];
                    }
                    if (uVar16 < 0xc0) {
                      if (0x6b < uVar16) goto LAB_1000705e;
                    }
                    else {
                      pcVar6 = (code *)local_14[0x2f];
                      if (pcVar6 == (code *)0x0) {
LAB_1000705e:
                        pcVar6 = (code *)local_14[0x1a];
                        if (pcVar6 == (code *)0x0) goto LAB_10007114;
                      }
                      iVar3 = (*pcVar6)(local_a8 + 0x1e,2,&local_28);
                      if ((iVar3 != 0) && (local_5c = local_28, local_a4 != 0)) {
                        local_58 = local_28 * local_88 + local_a4;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000512c:
            if (iVar3 == 0x54584b57) {
LAB_1000513b:
              if ((uint)local_14[2] < 0xc0) {
                if (0x6b < (uint)local_14[2]) goto LAB_10005b70;
                goto LAB_10006b3a;
              }
              pcVar6 = (code *)local_14[0x2f];
              if (pcVar6 == (code *)0x0) {
LAB_10005b70:
                pcVar6 = (code *)local_14[0x1a];
                if (pcVar6 == (code *)0x0) goto LAB_10006b3a;
              }
              (*pcVar6)(local_a8 + 4,4,&local_7c);
              local_78 = 0;
              local_74 = local_7c & 1;
              if (local_a8 == 0) goto LAB_10006bca;
              iVar3 = *local_14;
            }
            else {
LAB_10006b3a:
              local_78 = 0;
              local_74 = local_7c & 1;
            }
            local_78 = 0;
            if (iVar3 != 0x54584b57) goto LAB_10006be4;
            uVar16 = local_14[2];
            if (uVar16 < 0xc4) {
              if (uVar16 < 0x70) goto LAB_10006bca;
LAB_10006b75:
              pcVar6 = (code *)local_14[0x1b];
              if (pcVar6 != (code *)0x0) goto LAB_10006b83;
LAB_10006c7f:
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_10006bca;
LAB_10006c9f:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 != (code *)0x0) goto LAB_10006ca9;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10006c9f;
LAB_10006ca9:
                (*pcVar6)(local_a8 + 0xc,4,local_78);
                if (local_a8 == 0) goto LAB_10006bca;
                if (*local_14 != 0x54584b57) goto LAB_10007114;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_10006bca;
LAB_10006dd5:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 != (code *)0x0) goto LAB_10006ddf;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10006dd5;
LAB_10006ddf:
                (*pcVar6)(local_a8 + 8,4,1);
                if (local_a8 == 0) goto LAB_10006bca;
                if (*local_14 != 0x54584b57) goto LAB_10007114;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_10006bca;
LAB_10006fc3:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 == (code *)0x0) goto LAB_10006bca;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10006fc3;
              }
              (*pcVar6)(local_a8 + 0xc,4,local_74);
              goto LAB_10006bca;
            }
            pcVar6 = (code *)local_14[0x30];
            if (pcVar6 == (code *)0x0) goto LAB_10006b75;
LAB_10006b83:
            (*pcVar6)(local_a8 + 8,4,0);
            if (local_a8 == 0) goto LAB_10006bca;
            if (*local_14 == 0x54584b57) {
              uVar16 = local_14[2];
              goto LAB_10006c7f;
            }
          }
LAB_10007114:
          if (param_4 == 0) {
            if (local_84 != 0) goto LAB_1000725b;
LAB_100072d1:
            if (local_98 == 0) goto LAB_100074a1;
          }
          else {
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'v';
              pcVar9 = str_10008aff;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'm';
              pcVar9 = str_10008b0f;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'v';
              pcVar9 = str_10008af4;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            if (local_84 != 0) {
LAB_1000725b:
              uVar16 = 0;
              do {
                *(byte *)((int)&local_28 + uVar16) =
                     (char)local_84 + (char)(local_84 / 10) * -10 | 0x30;
                uVar8 = uVar16 + 1;
                if (8 < uVar16) break;
                bVar19 = 9 < local_84;
                local_84 = local_84 / 10;
                uVar16 = uVar8;
              } while (bVar19);
LAB_10007294:
              do {
                uVar16 = uVar8 - 1;
                if (param_4 != 0) {
                  uVar5 = 0;
                  do {
                    pcVar9 = (char *)(param_4 + uVar5);
                    uVar5 = uVar5 + 1;
                  } while (*pcVar9 != '\0');
                  if (uVar5 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar5) =
                         *(undefined1 *)((int)&local_2c + uVar8 + 3);
                    *(undefined1 *)(param_4 + uVar5) = 0;
                  }
                  uVar8 = uVar16;
                  if (uVar16 == 0) goto LAB_10007306;
                  goto LAB_10007294;
                }
                uVar8 = uVar16;
              } while (uVar16 != 0);
              goto LAB_100072d1;
            }
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
            }
LAB_10007306:
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'v';
              pcVar9 = str_10008b16;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            if (local_98 == 0) {
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
              }
LAB_10007428:
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008b26;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              goto LAB_100074a1;
            }
          }
          uVar16 = 0;
          do {
            *(byte *)((int)&local_28 + uVar16) = (char)local_98 + (char)(local_98 / 10) * -10 | 0x30
            ;
            uVar8 = uVar16 + 1;
            if (8 < uVar16) break;
            bVar19 = 9 < local_98;
            local_98 = local_98 / 10;
            uVar16 = uVar8;
          } while (bVar19);
LAB_100073ce:
          do {
            uVar16 = uVar8 - 1;
            if (param_4 != 0) {
              uVar5 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar5);
                uVar5 = uVar5 + 1;
              } while (*pcVar9 != '\0');
              if (uVar5 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar5) = *(undefined1 *)((int)&local_2c + uVar8 + 3);
                *(undefined1 *)(param_4 + uVar5) = 0;
              }
              uVar8 = uVar16;
              if (uVar16 == 0) goto LAB_10007428;
              goto LAB_100073ce;
            }
            uVar8 = uVar16;
          } while (uVar16 != 0);
LAB_100074a1:
          iVar3 = 8;
LAB_100074af:
          do {
            uVar16 = local_a8 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 == 0) goto LAB_100074a8;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              pbVar18 = (byte *)((int)&local_28 + 1);
              do {
                *(byte *)(param_4 + uVar8) = bVar13;
                uVar8 = uVar8 + 1;
                bVar13 = *pbVar18;
                if (bVar13 == 0) break;
                pbVar18 = pbVar18 + 1;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008b33;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_1000759b:
          iVar3 = 8;
LAB_100075a5:
          do {
            uVar16 = local_80 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            if (param_4 == 0) goto LAB_100075eb;
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008b49;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10007669:
          iVar3 = 8;
LAB_10007673:
          do {
            uVar16 = local_7c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            if (param_4 == 0) goto LAB_100076bb;
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008b5f;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10007739:
          iVar3 = 8;
LAB_10007743:
          uVar16 = local_78 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 == 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_10007809;
            goto LAB_10007743;
          }
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_10007743;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008b75;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10007809:
          iVar3 = 8;
LAB_10007813:
          uVar16 = local_74 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 == 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_100078d9;
            goto LAB_10007813;
          }
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_10007813;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008b8b;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_100078d9:
          iVar3 = 8;
LAB_100078e3:
          uVar16 = local_70 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 == 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_100079a9;
            goto LAB_100078e3;
          }
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_100078e3;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008ba4;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
LAB_100079a9:
          iVar3 = 8;
LAB_100079b3:
          uVar16 = local_6c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 == 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto code_r0x100079fe;
            goto LAB_100079b3;
          }
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(byte *)(param_4 + -1 + uVar16) = bVar13;
            *(undefined1 *)(param_4 + uVar16) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 != 0) goto LAB_100079b3;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008bbc;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          if (local_68 == 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
            }
          }
          else {
LAB_10007a99:
            uVar16 = 0;
            do {
              *(byte *)((int)&local_28 + uVar16) =
                   (char)local_68 + (char)(local_68 / 10) * -10 | 0x30;
              uVar8 = uVar16 + 1;
              if (8 < uVar16) break;
              bVar19 = 9 < local_68;
              local_68 = local_68 / 10;
              uVar16 = uVar8;
            } while (bVar19);
            do {
              while (uVar16 = uVar8 - 1, param_4 == 0) {
                uVar8 = uVar16;
                if (uVar16 == 0) goto LAB_10007b01;
              }
              uVar5 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar5);
                uVar5 = uVar5 + 1;
              } while (*pcVar9 != '\0');
              if (uVar5 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar5) = *(undefined1 *)((int)&local_2c + uVar8 + 3);
                *(undefined1 *)(param_4 + uVar5) = 0;
              }
              uVar8 = uVar16;
            } while (uVar16 != 0);
          }
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008bc9;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          if (local_64 == 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
            }
          }
          else {
LAB_10007bba:
            uVar16 = 0;
            do {
              *(byte *)((int)&local_28 + uVar16) =
                   (char)local_64 + (char)(local_64 / 10) * -10 | 0x30;
              uVar8 = uVar16 + 1;
              if (8 < uVar16) break;
              bVar19 = 9 < local_64;
              local_64 = local_64 / 10;
              uVar16 = uVar8;
            } while (bVar19);
            do {
              while (uVar16 = uVar8 - 1, param_4 == 0) {
                uVar8 = uVar16;
                if (uVar16 == 0) goto LAB_10007c31;
              }
              uVar5 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar5);
                uVar5 = uVar5 + 1;
              } while (*pcVar9 != '\0');
              if (uVar5 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar5) = *(undefined1 *)((int)&local_2c + uVar8 + 3);
                *(undefined1 *)(param_4 + uVar5) = 0;
              }
              uVar8 = uVar16;
            } while (uVar16 != 0);
          }
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008bda;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          if (local_60 == 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
            }
          }
          else {
LAB_10007cfa:
            uVar16 = 0;
            do {
              *(byte *)((int)&local_28 + uVar16) = (byte)(local_60 % 10) | 0x30;
              uVar8 = uVar16 + 1;
              if (8 < uVar16) break;
              bVar19 = 9 < local_60;
              local_60 = local_60 / 10;
              uVar16 = uVar8;
            } while (bVar19);
            do {
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  pcVar9 = (char *)(param_4 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar9 != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar16) =
                       *(undefined1 *)((int)&local_2c + uVar8 + 3);
                  *(undefined1 *)(param_4 + uVar16) = 0;
                }
              }
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          local_18 = (ushort *)local_58;
          if (local_58 != 0) {
            if (param_4 == 0) {
LAB_10007dae:
              local_18 = (ushort *)local_58;
              if (local_94 != 0) goto LAB_10007e2e;
            }
            else {
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008bee;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              if (local_94 == 0) {
                uVar16 = 0;
                do {
                  pcVar9 = (char *)(param_4 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar9 != '\0');
                if (uVar16 < 0x400) {
                  *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
                }
              }
              else {
LAB_10007e2e:
                local_18 = (ushort *)local_58;
                uVar16 = 0;
                do {
                  *(byte *)((int)&local_28 + uVar16) =
                       (char)local_94 + (char)(local_94 / 10) * -10 | 0x30;
                  uVar8 = uVar16 + 1;
                  if (8 < uVar16) break;
                  bVar19 = 9 < local_94;
                  uVar16 = uVar8;
                  local_94 = local_94 / 10;
                } while (bVar19);
                do {
                  while (uVar16 = uVar8 - 1, param_4 == 0) {
                    uVar8 = uVar16;
                    if (uVar16 == 0) goto LAB_10007f41;
                  }
                  uVar5 = 0;
                  do {
                    pcVar9 = (char *)(param_4 + uVar5);
                    uVar5 = uVar5 + 1;
                  } while (*pcVar9 != '\0');
                  if (uVar5 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar5) =
                         *(undefined1 *)((int)&local_2c + uVar8 + 3);
                    *(undefined1 *)(param_4 + uVar5) = 0;
                  }
                  uVar8 = uVar16;
                } while (uVar16 != 0);
              }
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008bfe;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
LAB_10007f41:
            iVar3 = 8;
LAB_10007f4b:
            do {
              uVar16 = local_88 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 == 0) goto LAB_10007f8b;
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(byte *)(param_4 + -1 + uVar16) = bVar13;
                *(undefined1 *)(param_4 + uVar16) = 0;
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'v';
              pcVar9 = str_10008c15;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10008000:
            iVar3 = 8;
            do {
              uVar16 = (uint)local_18 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              PF_PART2(local_28, 0) = (ushort)(byte)local_28;
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar8 + 1 < 0x400) {
                  pbVar18 = (byte *)((int)&local_28 + 1);
                  do {
                    *(byte *)(param_4 + uVar8) = bVar13;
                    uVar8 = uVar8 + 1;
                    bVar13 = *pbVar18;
                    if (bVar13 == 0) break;
                    pbVar18 = pbVar18 + 1;
                  } while (uVar8 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (local_a0 != 0) {
            if (param_4 != 0) {
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008c28;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
LAB_100080fb:
            iVar3 = 8;
            do {
              uVar16 = local_a0 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              PF_PART2(local_28, 0) = (ushort)(byte)local_28;
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar8 + 1 < 0x400) {
                  pbVar18 = (byte *)((int)&local_28 + 1);
                  do {
                    *(byte *)(param_4 + uVar8) = bVar13;
                    uVar8 = uVar8 + 1;
                    bVar13 = *pbVar18;
                    if (bVar13 == 0) break;
                    pbVar18 = pbVar18 + 1;
                  } while (uVar8 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (local_9c != 0) {
            if (param_4 != 0) {
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008c32;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
LAB_100081fb:
            iVar3 = 8;
            do {
              uVar16 = local_9c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              PF_PART2(local_28, 0) = (ushort)(byte)local_28;
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  uVar8 = uVar16;
                  uVar16 = uVar8 + 1;
                } while (*(char *)(param_4 + uVar8) != '\0');
                if (uVar8 + 1 < 0x400) {
                  pbVar18 = (byte *)((int)&local_28 + 1);
                  do {
                    *(byte *)(param_4 + uVar8) = bVar13;
                    uVar8 = uVar8 + 1;
                    bVar13 = *pbVar18;
                    if (bVar13 == 0) break;
                    pbVar18 = pbVar18 + 1;
                  } while (uVar8 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (param_4 == 0) goto LAB_10008410;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008c45;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          if (local_54 != 0) goto LAB_10008414;
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
          }
LAB_1000832a:
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          pcVar9 = str_10008c74;
          if ((local_6c & 8) != 0) {
            pcVar9 = str_10008c68;
          }
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar12 = str_10008c5c;
            do {
              pcVar12 = pcVar12 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar12;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if ((uVar8 + 1 < 0x400) && (cVar10 = *pcVar9, cVar10 != '\0')) {
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 1;
          goto LAB_1000477c;
        }
      }
      if (local_84 != 0) {
        if (param_4 != 0) {
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008af4;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
        }
        uVar16 = 0;
        uVar8 = local_84;
        do {
          *(byte *)((int)&local_28 + uVar16) = (byte)(uVar8 % 10) | 0x30;
          uVar5 = uVar16 + 1;
          if (8 < uVar16) break;
          bVar19 = 9 < uVar8;
          uVar16 = uVar5;
          uVar8 = uVar8 / 10;
        } while (bVar19);
        do {
          if (param_4 != 0) {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = *(undefined1 *)((int)&local_2c + uVar5 + 3);
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (local_18[3] < 0x1040) {
        uVar16 = 0;
        bVar19 = true;
        puVar11 = local_18;
LAB_10004802:
        local_28 = 0;
        local_2c = 0;
        if ((*(uint *)(puVar11 + uVar16 * 2 + 10) & 1) == 0) goto LAB_100047f0;
        if ((((char)local_34 != '\0') || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 0x58))
        goto LAB_100047f0;
        if ((code *)local_14[0x15] == (code *)0x0) goto LAB_100047f0;
        local_3c = *(uint *)(puVar11 + uVar16 * 2 + 10) & 0xfffffffc;
        local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar19);
        local_30 = local_3c + 0x12 & 0xffff;
        iVar3 = (*(code *)local_14[0x15])(local_30,1,&local_28);
        puVar11 = local_18;
        if (iVar3 == 0) goto LAB_100047f0;
        if (param_4 == 0) {
          if (uVar16 != 0) goto LAB_10005444;
          goto LAB_100056b4;
        }
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar8) = 0x20;
          uVar5 = uVar8;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = 'v';
          pcVar9 = str_10008aff;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar8) = 0x3d;
          uVar5 = uVar8;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = 'l';
          pcVar9 = str_10008c81;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008c8b;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        if (uVar16 == 0) {
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
          }
LAB_10005644:
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'v';
            pcVar9 = str_10008c9f;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
        }
        else {
LAB_10005444:
          uVar8 = 0;
          do {
            *(byte *)((int)&local_a8 + uVar8) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
            uVar5 = uVar8 + 1;
            if (8 < uVar8) break;
            bVar19 = 9 < uVar16;
            uVar8 = uVar5;
            uVar16 = uVar16 / 10;
          } while (bVar19);
          do {
            while (uVar16 = uVar5 - 1, param_4 != 0) {
              uVar8 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar8);
                uVar8 = uVar8 + 1;
              } while (*pcVar9 != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar8) = *(undefined1 *)((int)&local_ac + uVar5 + 3);
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              uVar5 = uVar16;
              if (uVar16 == 0) goto LAB_10005644;
            }
            uVar5 = uVar16;
          } while (uVar16 != 0);
        }
LAB_100056b4:
        piVar14 = local_14;
        uVar16 = local_30;
        iVar3 = 8;
LAB_100056be:
        uVar8 = local_3c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar13 = bVar13 | 0x30;
        }
        else {
          bVar13 = bVar13 + 0x37;
        }
        if (param_4 == 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_10005789;
          goto LAB_100056be;
        }
        uVar8 = 0;
        do {
          pcVar9 = (char *)(param_4 + uVar8);
          uVar8 = uVar8 + 1;
        } while (*pcVar9 != '\0');
        if (uVar8 < 0x400) {
          *(byte *)(param_4 + -1 + uVar8) = bVar13;
          *(undefined1 *)(param_4 + uVar8) = 0;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 != 0) goto LAB_100056be;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar8) = 0x20;
          uVar5 = uVar8;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = 'v';
          pcVar9 = str_10008cae;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar8) = 0x3d;
          uVar5 = uVar8;
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
LAB_10005789:
        iVar3 = 8;
        do {
          uVar8 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar8;
          if (uVar8 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if (param_4 != 0) {
            uVar8 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar8);
              uVar8 = uVar8 + 1;
            } while (*pcVar9 != '\0');
            if (uVar8 < 0x400) {
              *(byte *)(param_4 + -1 + uVar8) = bVar13;
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*local_14 == 0x54584b57) {
          uVar8 = local_14[2];
          if (uVar8 < 0x5c) {
LAB_100057f2:
            if (uVar8 < 0x58) goto LAB_100065e7;
          }
          else if ((code *)local_14[0x16] != (code *)0x0) {
            (*(code *)local_14[0x16])(local_30,1,0);
            if (*piVar14 != 0x54584b57) goto LAB_100065e7;
            uVar8 = piVar14[2];
            if (0x5b < uVar8) {
              if ((code *)piVar14[0x16] == (code *)0x0) goto LAB_1000584a;
              (*(code *)piVar14[0x16])(uVar16,1,3);
              if (*piVar14 != 0x54584b57) goto LAB_100065e7;
              uVar8 = piVar14[2];
            }
            goto LAB_100057f2;
          }
LAB_1000584a:
          if (((code *)piVar14[0x15] != (code *)0x0) &&
             (iVar3 = (*(code *)piVar14[0x15])(uVar16,1,&local_2c), iVar3 != 0)) {
            if (param_4 != 0) {
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar10 = 'v';
                pcVar9 = str_10008cc1;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar8) = cVar10;
                  uVar8 = uVar8 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
              uVar16 = 0;
              do {
                uVar8 = uVar16;
                uVar16 = uVar8 + 1;
              } while (*(char *)(param_4 + uVar8) != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
                uVar8 = uVar16;
              }
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
            iVar3 = 8;
            do {
              uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  pcVar9 = (char *)(param_4 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar9 != '\0');
                if (uVar16 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar16) = bVar13;
                  *(undefined1 *)(param_4 + uVar16) = 0;
                }
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
LAB_100065e7:
        if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_10004739;
        uVar16 = local_1c & 1;
        goto LAB_1000477c;
      }
LAB_1000472d:
      uVar16 = 0;
      if (param_4 != 0) {
LAB_10004739:
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008ad8;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
      }
    }
  }
LAB_1000477c:
  uVar16 = uVar16 | local_44;
  goto LAB_1000477e;
LAB_100067cb:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10006849;
  goto LAB_10006786;
LAB_10005eab:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10005f29;
  goto LAB_10005e65;
LAB_10003750:
  uVar16 = uVar16 + 1;
  if (uVar16 == 6) goto LAB_10003827;
  goto LAB_1000375a;
LAB_1000633b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_100063b9;
  goto LAB_100062f8;
LAB_10003aae:
  uVar16 = local_30;
  goto LAB_10003ab8;
LAB_100074a8:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_1000759b;
  goto LAB_100074af;
LAB_100075eb:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10007669;
  goto LAB_100075a5;
LAB_100076bb:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10007739;
  goto LAB_10007673;
code_r0x100079fe:
  if (local_68 != 0) goto LAB_10007a99;
LAB_10007b01:
  if (local_64 != 0) goto LAB_10007bba;
LAB_10007c31:
  if (local_60 != 0) goto LAB_10007cfa;
  local_18 = (ushort *)local_58;
  if (local_58 != 0) goto LAB_10007dae;
  if (local_a0 != 0) goto LAB_100080fb;
  if (local_9c != 0) goto LAB_100081fb;
LAB_10008410:
  if (local_54 == 0) {
    uVar16 = 1;
    goto LAB_1000477c;
  }
LAB_10008414:
  uVar16 = 0;
  do {
    *(byte *)((int)&local_28 + uVar16) = (char)local_54 + (char)(local_54 / 10) * -10 | 0x30;
    uVar8 = uVar16 + 1;
    if (8 < uVar16) break;
    bVar19 = 9 < local_54;
    local_54 = local_54 / 10;
    uVar16 = uVar8;
  } while (bVar19);
  do {
    while (uVar16 = uVar8 - 1, param_4 != 0) {
      uVar5 = 0;
      do {
        pcVar9 = (char *)(param_4 + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar9 != '\0');
      if (uVar5 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar5) = *(undefined1 *)((int)&local_2c + uVar8 + 3);
        *(undefined1 *)(param_4 + uVar5) = 0;
      }
      uVar8 = uVar16;
      if (uVar16 == 0) goto LAB_1000832a;
    }
    uVar8 = uVar16;
  } while (uVar16 != 0);
  uVar16 = 1;
  goto LAB_1000477c;
LAB_10007f8b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10008000;
  goto LAB_10007f4b;
LAB_100047f0:
  bVar19 = uVar16 < 5;
  uVar16 = uVar16 + 1;
  if (uVar16 == 6) goto LAB_1000472d;
  goto LAB_10004802;
LAB_10003827:
  uVar16 = local_30;
  if (param_4 != 0) {
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_10008d8c;
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar8) = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar8) = 0;
    uVar16 = 0;
LAB_10003869:
    puVar11 = local_18;
    uVar16 = local_30 | uVar16;
  }
LAB_1000388c:
  local_28 = 0;
  local_2c = 0;
  local_38 = 0;
  if ((char)puVar11[4] == '\x02') {
    uVar8 = 0;
    bVar19 = true;
    local_30 = uVar16;
LAB_100038c2:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar19);
    if ((uVar8 != 0) && ((*(uint *)(puVar11 + uVar8 * 2 + 8) & 7) == 4)) {
LAB_100039c0:
      uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 10);
      if ((uVar16 & 1) != 0) {
        if (((!((short)(uVar16 & 0xfffffffc) == 0 || (char)local_34 != '\0')) &&
            (*local_14 == 0x54584b57)) && (0x57 < (uint)local_14[2])) {
          if ((code *)local_14[0x15] != (code *)0x0) {
            iVar3 = (*(code *)local_14[0x15])(uVar16 & 0xfffc,2,&local_2c);
            puVar11 = local_18;
            if (iVar3 == 0) goto LAB_100038b0;
            if (param_4 == 0) {
              if (uVar8 != 0) goto LAB_10003ff2;
              goto LAB_100040ca;
            }
            uVar5 = 0;
            do {
              uVar4 = uVar5;
              uVar5 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar4 + 1 < 0x400) {
              cVar10 = ' ';
              pcVar9 = str_10008dd6;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar4) = cVar10;
                uVar4 = uVar4 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar4 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar4) = 0;
            if (uVar8 == 0) {
              uVar8 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar8);
                uVar8 = uVar8 + 1;
              } while (*pcVar9 != '\0');
              if (uVar8 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar8) = 0x30;
              }
LAB_10003a85:
              uVar8 = 0;
              do {
                uVar5 = uVar8;
                uVar8 = uVar5 + 1;
              } while (*(char *)(param_4 + uVar5) != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar8) = 0x20;
                uVar5 = uVar8;
              }
              *(undefined1 *)(param_4 + uVar5) = 0;
              uVar8 = 0;
              do {
                uVar5 = uVar8;
                uVar8 = uVar5 + 1;
              } while (*(char *)(param_4 + uVar5) != '\0');
              if (uVar5 + 1 < 0x400) {
                cVar10 = 'n';
                pcVar9 = str_10008de5;
                do {
                  pcVar9 = pcVar9 + 1;
                  *(char *)(param_4 + uVar5) = cVar10;
                  uVar5 = uVar5 + 1;
                  cVar10 = *pcVar9;
                  if (cVar10 == '\0') break;
                } while (uVar5 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar5) = 0;
              uVar8 = 0;
              do {
                uVar5 = uVar8;
                uVar8 = uVar5 + 1;
              } while (*(char *)(param_4 + uVar5) != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar8) = 0x3d;
                uVar5 = uVar8;
              }
              *(undefined1 *)(param_4 + uVar5) = 0;
            }
            else {
LAB_10003ff2:
              uVar5 = 0;
              do {
                *(byte *)((int)&local_a8 + uVar5) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
                uVar4 = uVar5 + 1;
                if (8 < uVar5) break;
                bVar19 = 9 < uVar8;
                uVar5 = uVar4;
                uVar8 = uVar8 / 10;
              } while (bVar19);
              do {
                while (uVar8 = uVar4 - 1, param_4 != 0) {
                  uVar5 = 0;
                  do {
                    pcVar9 = (char *)(param_4 + uVar5);
                    uVar5 = uVar5 + 1;
                  } while (*pcVar9 != '\0');
                  if (uVar5 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar5) =
                         *(undefined1 *)((int)&local_ac + uVar4 + 3);
                    *(undefined1 *)(param_4 + uVar5) = 0;
                  }
                  uVar4 = uVar8;
                  if (uVar8 == 0) goto LAB_10003a85;
                }
                uVar4 = uVar8;
              } while (uVar8 != 0);
            }
LAB_100040ca:
            iVar3 = 8;
LAB_100040d4:
            uVar8 = (uVar16 & 0xfffffffc) >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar8;
            if (9 < uVar8) {
              bVar13 = bVar13 + 0x37;
              if (param_4 != 0) goto LAB_100040f1;
LAB_10004122:
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) goto LAB_100041a0;
              goto LAB_100040d4;
            }
            bVar13 = bVar13 | 0x30;
            if (param_4 == 0) goto LAB_10004122;
LAB_100040f1:
            uVar8 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar8);
              uVar8 = uVar8 + 1;
            } while (*pcVar9 != '\0');
            if (uVar8 < 0x400) {
              *(byte *)(param_4 + -1 + uVar8) = bVar13;
              *(undefined1 *)(param_4 + uVar8) = 0;
            }
            iVar3 = iVar3 + -1;
            if (iVar3 != 0) goto LAB_100040d4;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'n';
              pcVar9 = str_10008def;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
LAB_100041a0:
            iVar3 = 8;
            do {
              uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 != 0) {
                uVar16 = 0;
                do {
                  pcVar9 = (char *)(param_4 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar9 != '\0');
                if (uVar16 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar16) = bVar13;
                  *(undefined1 *)(param_4 + uVar16) = 0;
                }
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            goto LAB_10005b4b;
          }
        }
      }
LAB_100038b0:
      bVar19 = uVar8 < 5;
      uVar8 = uVar8 + 1;
      if (uVar8 == 6) goto LAB_10003aae;
      goto LAB_100038c2;
    }
    uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 10);
    puVar11 = local_18;
    if ((uVar16 & 1) != 0 || uVar16 == 0) goto LAB_100039c0;
    iVar3 = 0;
    if ((uVar16 & 6) == 4) {
      if (uVar8 == 5) goto LAB_100039c0;
      iVar3 = *(int *)(local_18 + uVar8 * 2 + 0xc);
    }
    uVar16 = uVar16 & 0xfffffff0;
    if (uVar16 == 0 && iVar3 == 0) goto LAB_100039c0;
    local_28 = 0;
    local_a8 = 0;
    if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_100039c0;
    if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      if ((!((uint)local_14[2] < 0x68 || iVar3 != 0)) && ((code *)local_14[0x19] != (code *)0x0)) {
        iVar3 = (*(code *)local_14[0x19])(uVar16,0,0x1000,&local_a8);
        puVar11 = local_18;
        if (iVar3 != 0) {
          local_28 = local_a8;
          goto LAB_1000432f;
        }
      }
      goto LAB_100039c0;
    }
    iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
    puVar11 = local_18;
    if (iVar3 == 0) goto LAB_100039c0;
LAB_1000432f:
    if (param_4 == 0) {
      if (uVar8 != 0) goto LAB_100043ab;
      goto LAB_10004b0c;
    }
    uVar16 = 0;
    do {
      uVar5 = uVar16;
      uVar16 = uVar5 + 1;
    } while (*(char *)(param_4 + uVar5) != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_10008da1;
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar5) = cVar10;
        uVar5 = uVar5 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar5) = 0;
    if (uVar8 == 0) {
      uVar16 = 0;
      do {
        pcVar9 = (char *)(param_4 + uVar16);
        uVar16 = uVar16 + 1;
      } while (*pcVar9 != '\0');
      if (uVar16 < 0x400) {
        *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
      }
LAB_10004384:
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = 'n';
        pcVar9 = str_10008db2;
        do {
          pcVar9 = pcVar9 + 1;
          *(char *)(param_4 + uVar8) = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
    }
    else {
LAB_100043ab:
      uVar16 = 0;
      do {
        *(byte *)((int)&local_a8 + uVar16) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
        uVar5 = uVar16 + 1;
        if (8 < uVar16) break;
        bVar19 = 9 < uVar8;
        uVar16 = uVar5;
        uVar8 = uVar8 / 10;
      } while (bVar19);
      do {
        while (uVar16 = uVar5 - 1, param_4 != 0) {
          uVar8 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pcVar9 != '\0');
          if (uVar8 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar8) = *(undefined1 *)((int)&local_ac + uVar5 + 3);
            *(undefined1 *)(param_4 + uVar8) = 0;
          }
          uVar5 = uVar16;
          if (uVar16 == 0) goto LAB_10004384;
        }
        uVar5 = uVar16;
      } while (uVar16 != 0);
    }
LAB_10004b0c:
    iVar3 = 8;
    do {
      uVar16 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      if (uVar16 < 10) {
        uVar16 = uVar16 | 0x30;
      }
      else {
        uVar16 = (uint)(byte)((char)uVar16 + 0x37);
      }
      PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
      if (param_4 != 0) {
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          pbVar18 = (byte *)((int)&local_a8 + 1);
          do {
            *(char *)(param_4 + uVar5) = (char)uVar16;
            uVar5 = uVar5 + 1;
            uVar16 = (uint)*pbVar18;
            if (*pbVar18 == 0) break;
            pbVar18 = pbVar18 + 1;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((local_28 != 0) && (*local_14 == 0x54584b57)) {
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_100054d0;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_100054d0:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10005503;
        }
        (*pcVar6)(local_28,4,&local_2c);
        if ((local_28 == 0) || (*local_14 != 0x54584b57)) goto LAB_100059b8;
      }
LAB_10005503:
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_1000599c;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_1000599c:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_100059b8;
        }
        (*pcVar6)(local_28 + 4,4,&local_38);
      }
    }
LAB_100059b8:
    if (param_4 != 0) {
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = 'n';
        pcVar9 = str_10008dbe;
        do {
          pcVar9 = pcVar9 + 1;
          *(char *)(param_4 + uVar8) = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
        uVar8 = uVar16;
      }
      *(undefined1 *)(param_4 + uVar8) = 0;
    }
    iVar3 = 8;
LAB_10005a39:
    uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    bVar13 = (byte)uVar16;
    if (9 < uVar16) {
      bVar13 = bVar13 + 0x37;
      if (param_4 != 0) goto LAB_10005a56;
LAB_10005a82:
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_10005b00;
      goto LAB_10005a39;
    }
    bVar13 = bVar13 | 0x30;
    if (param_4 == 0) goto LAB_10005a82;
LAB_10005a56:
    uVar16 = 0;
    do {
      pcVar9 = (char *)(param_4 + uVar16);
      uVar16 = uVar16 + 1;
    } while (*pcVar9 != '\0');
    if (uVar16 < 0x400) {
      *(byte *)(param_4 + -1 + uVar16) = bVar13;
      *(undefined1 *)(param_4 + uVar16) = 0;
    }
    iVar3 = iVar3 + -1;
    if (iVar3 != 0) goto LAB_10005a39;
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar16 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
      uVar8 = uVar16;
    }
    *(undefined1 *)(param_4 + uVar8) = 0;
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar10 = 'n';
      pcVar9 = str_10008dca;
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar8) = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar8) = 0;
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar16 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
      uVar8 = uVar16;
    }
    *(undefined1 *)(param_4 + uVar8) = 0;
LAB_10005b00:
    iVar3 = 8;
    do {
      uVar16 = local_38 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar13 = (byte)uVar16;
      if (uVar16 < 10) {
        bVar13 = bVar13 | 0x30;
      }
      else {
        bVar13 = bVar13 + 0x37;
      }
      if (param_4 != 0) {
        uVar16 = 0;
        do {
          pcVar9 = (char *)(param_4 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar9 != '\0');
        if (uVar16 < 0x400) {
          *(byte *)(param_4 + -1 + uVar16) = bVar13;
          *(undefined1 *)(param_4 + uVar16) = 0;
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
LAB_10005b4b:
    puVar11 = local_18;
    uVar16 = local_30 | local_1c & 1;
  }
LAB_10003ab8:
  local_2c = 0;
  uVar8 = 0;
  if ((char)puVar11[4] == '\x03') {
    uVar8 = *(uint *)(puVar11 + 10);
    local_30 = uVar16;
    if ((uVar8 & 1) == 0 && uVar8 != 0) {
      iVar3 = 0;
      if ((uVar8 & 6) == 4) {
        iVar3 = *(int *)(local_18 + 0xc);
      }
      uVar8 = uVar8 & 0xfffffff0;
      if (uVar8 == 0 && iVar3 == 0) goto LAB_10003bb8;
      local_28 = 0;
      local_a8 = 0;
      if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10003bb8;
      if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_14[2] && iVar3 == 0) && ((code *)local_14[0x19] != (code *)0x0)) {
          iVar3 = (*(code *)local_14[0x19])(uVar8,0,0x1000,&local_a8);
          uVar8 = 0;
          if (iVar3 != 0) {
            local_28 = local_a8;
            goto joined_r0x10003ba1;
          }
        }
        goto LAB_10003bb8;
      }
      iVar3 = (*(code *)local_14[0x2e])(uVar8,iVar3,0x1000,&local_28);
      uVar8 = 0;
      uVar16 = local_30;
      if (iVar3 == 0) goto LAB_10003bb8;
joined_r0x10003ba1:
      uVar7 = (undefined3)((uint)iVar3 >> 8);
      if (param_4 == 0) {
        local_3c = CONCAT31(uVar7,1);
        local_1c = CONCAT31(uVar7,1);
      }
      else {
        uVar16 = 0;
        local_3c = CONCAT31(uVar7,1);
        local_1c = CONCAT31(uVar7,1);
LAB_10003cdd:
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_10008dfd;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar5) = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar5) = 0;
        uVar8 = 0;
        if ((char)local_3c == '\0') {
          bVar19 = false;
LAB_1000489b:
          uVar8 = 0;
          do {
            *(byte *)((int)&local_a8 + uVar8) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
            uVar5 = uVar8 + 1;
            if (8 < uVar8) break;
            bVar1 = 9 < uVar16;
            uVar8 = uVar5;
            uVar16 = uVar16 / 10;
          } while (bVar1);
          do {
            while (uVar16 = uVar5 - 1, !bVar19) {
              uVar8 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar8);
                uVar8 = uVar8 + 1;
              } while (*pcVar9 != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar8) = *(undefined1 *)((int)&local_ac + uVar5 + 3);
                *(undefined1 *)(param_4 + uVar8) = 0;
              }
              uVar5 = uVar16;
              if (uVar16 == 0) {
                local_3c = 1;
                goto LAB_1000492b;
              }
            }
            uVar5 = uVar16;
          } while (uVar16 != 0);
          local_3c = 1;
          uVar16 = local_30;
        }
        else {
          do {
            pcVar9 = (char *)(param_4 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pcVar9 != '\0');
          if (uVar8 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar8) = 0x30;
          }
LAB_1000492b:
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'd';
            pcVar9 = str_10008e0e;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          local_3c = 0;
          uVar16 = local_30;
        }
      }
      iVar3 = 8;
      do {
        uVar8 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar13 = bVar13 | 0x30;
        }
        else {
          bVar13 = bVar13 + 0x37;
        }
        PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
        if ((char)local_3c == '\0') {
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            pbVar18 = (byte *)((int)&local_a8 + 1);
            do {
              *(byte *)(param_4 + uVar8) = bVar13;
              uVar8 = uVar8 + 1;
              bVar13 = *pbVar18;
              if (bVar13 == 0) break;
              pbVar18 = pbVar18 + 1;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = local_30;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_ac = local_28;
      if ((local_28 == 0) || (*local_14 != 0x54584b57)) {
LAB_10004aad:
        uVar8 = local_1c;
        puVar11 = local_18;
      }
      else {
        if ((uint)local_14[2] < 0xc0) {
          if (0x6b < (uint)local_14[2]) goto LAB_10004a63;
          goto LAB_10004aad;
        }
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_10004a63:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10004aad;
        }
        iVar3 = (*pcVar6)(local_28,4,&local_2c);
        if (iVar3 == 0) goto LAB_10004aad;
        if ((char)local_3c == '\0') {
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar10 = 'd';
            pcVar9 = str_10008e1a;
            do {
              pcVar9 = pcVar9 + 1;
              *(char *)(param_4 + uVar8) = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar9;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
            uVar8 = uVar16;
          }
          *(undefined1 *)(param_4 + uVar8) = 0;
        }
        iVar3 = 8;
        do {
          uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (uVar16 < 10) {
            bVar13 = bVar13 | 0x30;
          }
          else {
            bVar13 = bVar13 + 0x37;
          }
          if ((char)local_3c == '\0') {
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_4 + -1 + uVar16) = bVar13;
              *(undefined1 *)(param_4 + uVar16) = 0;
            }
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar8 = local_1c;
        puVar11 = local_18;
        uVar16 = local_30;
      }
    }
    else {
LAB_10003bb8:
      uVar16 = 1;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
      puVar11 = local_18;
      do {
        uVar5 = *(uint *)(puVar11 + uVar16 * 2 + 8) & 7;
        local_1c = uVar8;
        if (uVar5 != 4) {
          uVar5 = *(uint *)(puVar11 + uVar16 * 2 + 10);
          puVar11 = local_18;
          if ((uVar5 & 1) == 0 && uVar5 != 0) {
            iVar3 = 0;
            if ((uVar5 & 6) == 4) {
              if (uVar16 == 5) break;
              iVar3 = *(int *)(local_18 + uVar16 * 2 + 0xc);
            }
            uVar5 = uVar5 & 0xfffffff0;
            if (uVar5 != 0 || iVar3 != 0) {
              local_28 = 0;
              local_a8 = 0;
              if (((char)local_34 == '\0') && (*local_14 == 0x54584b57)) {
                if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
                  if ((0x67 < (uint)local_14[2] && iVar3 == 0) &&
                     ((code *)local_14[0x19] != (code *)0x0)) {
                    iVar3 = (*(code *)local_14[0x19])(uVar5,0,0x1000,&local_a8);
                    uVar5 = 0;
                    puVar11 = local_18;
                    if (iVar3 != 0) {
                      local_28 = local_a8;
                      goto LAB_10003cce;
                    }
                  }
                }
                else {
                  iVar3 = (*(code *)local_14[0x2e])(uVar5,iVar3,0x1000,&local_28);
                  uVar5 = 0;
                  puVar11 = local_18;
                  if (iVar3 != 0) {
LAB_10003cce:
                    if (param_4 != 0) {
                      local_3c = 0;
                      goto LAB_10003cdd;
                    }
                    bVar19 = true;
                    goto LAB_1000489b;
                  }
                }
              }
            }
          }
        }
        bVar19 = uVar16 < 5;
        uVar16 = uVar16 + 1;
        uVar8 = CONCAT31((int3)(uVar5 >> 8),bVar19);
      } while (uVar16 != 6);
      uVar8 = 0;
      uVar16 = local_30;
    }
    uVar8 = uVar8 & 1;
  }
  uVar16 = uVar16 | uVar8 | local_44;
  if (uVar16 != 0) goto LAB_1000477e;
  local_2c = 0;
  uVar16 = *(uint *)(puVar11 + 10);
  if ((uVar16 & 1) == 0 && uVar16 != 0) {
    iVar3 = 0;
    if ((uVar16 & 6) == 4) {
      iVar3 = *(int *)(local_18 + 0xc);
    }
    uVar16 = uVar16 & 0xfffffff0;
    if (uVar16 == 0 && iVar3 == 0) goto LAB_10003e52;
    local_28 = 0;
    local_a8 = 0;
    if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10003e52;
    if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)local_14[2] && iVar3 == 0) && ((code *)local_14[0x19] != (code *)0x0)) {
        iVar3 = (*(code *)local_14[0x19])(uVar16,0,0x1000,&local_a8);
        uVar16 = 0;
        if (iVar3 != 0) {
          local_28 = local_a8;
          goto joined_r0x10003e3b;
        }
      }
      goto LAB_10003e52;
    }
    iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
    uVar16 = 0;
    if (iVar3 == 0) goto LAB_10003e52;
joined_r0x10003e3b:
    uVar7 = (undefined3)((uint)iVar3 >> 8);
    if (param_4 == 0) {
      bVar19 = true;
      local_1c = CONCAT31(uVar7,1);
    }
    else {
      uVar8 = 0;
      local_18 = (ushort *)CONCAT31(uVar7,1);
      local_1c = CONCAT31(uVar7,1);
LAB_10003f7d:
      uVar16 = 0;
      do {
        uVar5 = uVar16;
        uVar16 = uVar5 + 1;
      } while (*(char *)(param_4 + uVar5) != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_10008e26;
        do {
          pcVar9 = pcVar9 + 1;
          *(char *)(param_4 + uVar5) = cVar10;
          uVar5 = uVar5 + 1;
          cVar10 = *pcVar9;
          if (cVar10 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar5) = 0;
      uVar16 = 0;
      if ((char)local_18 == '\0') {
LAB_10004f27:
        uVar5 = 0;
        do {
          *(byte *)((int)&local_a8 + uVar5) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
          uVar4 = uVar5 + 1;
          if (8 < uVar5) break;
          bVar19 = 9 < uVar8;
          uVar8 = uVar8 / 10;
          uVar5 = uVar4;
        } while (bVar19);
LAB_10004f62:
        do {
          uVar8 = uVar4 - 1;
          if ((char)uVar16 == '\0') {
            uVar5 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar5);
              uVar5 = uVar5 + 1;
            } while (*pcVar9 != '\0');
            if (uVar5 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar5) = *(undefined1 *)((int)&local_ac + uVar4 + 3);
              *(undefined1 *)(param_4 + uVar5) = 0;
            }
            uVar4 = uVar8;
            if (uVar8 == 0) goto LAB_10004fa4;
            goto LAB_10004f62;
          }
          uVar4 = uVar8;
        } while (uVar8 != 0);
        bVar19 = true;
      }
      else {
        do {
          pcVar9 = (char *)(param_4 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar9 != '\0');
        if (uVar16 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
        }
LAB_10004fa4:
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = 'm';
          pcVar9 = &DAT_10008e31;
          do {
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
          uVar8 = uVar16;
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
        bVar19 = false;
      }
    }
    iVar3 = 8;
    local_18 = (ushort *)local_28;
    do {
      uVar16 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar13 = (byte)uVar16;
      if (uVar16 < 10) {
        bVar13 = bVar13 | 0x30;
      }
      else {
        bVar13 = bVar13 + 0x37;
      }
      PF_PART2(local_a8, 0) = (ushort)(byte)local_a8;
      if (!bVar19) {
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          pbVar18 = (byte *)((int)&local_a8 + 1);
          do {
            *(byte *)(param_4 + uVar8) = bVar13;
            uVar8 = uVar8 + 1;
            bVar13 = *pbVar18;
            if (bVar13 == 0) break;
            pbVar18 = pbVar18 + 1;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar8) = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((local_28 != 0) && (*local_14 == 0x54584b57)) {
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_100050df;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_100050df:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10003fdf;
        }
        iVar3 = (*pcVar6)(local_28,4,&local_2c);
        if (iVar3 != 0) {
          if (!bVar19) {
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x20;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar10 = 'm';
              pcVar9 = str_10008e35;
              do {
                pcVar9 = pcVar9 + 1;
                *(char *)(param_4 + uVar8) = cVar10;
                uVar8 = uVar8 + 1;
                cVar10 = *pcVar9;
                if (cVar10 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
            uVar16 = 0;
            do {
              uVar8 = uVar16;
              uVar16 = uVar8 + 1;
            } while (*(char *)(param_4 + uVar8) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar16) = 0x3d;
              uVar8 = uVar16;
            }
            *(undefined1 *)(param_4 + uVar8) = 0;
          }
          iVar3 = 8;
          do {
            uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            if (!bVar19) {
              uVar16 = 0;
              do {
                pcVar9 = (char *)(param_4 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar9 != '\0');
              if (uVar16 < 0x400) {
                *(byte *)(param_4 + -1 + uVar16) = bVar13;
                *(undefined1 *)(param_4 + uVar16) = 0;
              }
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  else {
LAB_10003e52:
    uVar8 = 1;
    local_1c = CONCAT31((int3)(uVar16 >> 8),1);
    puVar11 = local_18;
    do {
      uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 8) & 7;
      if (uVar16 != 4) {
        uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 10);
        puVar11 = local_18;
        if ((uVar16 & 1) == 0 && uVar16 != 0) {
          iVar3 = 0;
          if ((uVar16 & 6) == 4) {
            if (uVar8 == 5) break;
            iVar3 = *(int *)(local_18 + uVar8 * 2 + 0xc);
          }
          uVar16 = uVar16 & 0xfffffff0;
          if (uVar16 != 0 || iVar3 != 0) {
            local_28 = 0;
            local_a8 = 0;
            if (((char)local_34 == '\0') && (*local_14 == 0x54584b57)) {
              if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
                if ((0x67 < (uint)local_14[2] && iVar3 == 0) &&
                   ((code *)local_14[0x19] != (code *)0x0)) {
                  iVar3 = (*(code *)local_14[0x19])(uVar16,0,0x1000,&local_a8);
                  uVar16 = 0;
                  puVar11 = local_18;
                  if (iVar3 != 0) {
                    local_28 = local_a8;
                    goto LAB_10003f6e;
                  }
                }
              }
              else {
                iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
                uVar16 = 0;
                puVar11 = local_18;
                if (iVar3 != 0) {
LAB_10003f6e:
                  if (param_4 != 0) {
                    local_18 = (ushort *)0x0;
                    goto LAB_10003f7d;
                  }
                  uVar16 = 1;
                  goto LAB_10004f27;
                }
              }
            }
          }
        }
      }
      bVar19 = uVar8 < 5;
      uVar8 = uVar8 + 1;
      local_1c = CONCAT31((int3)(uVar16 >> 8),bVar19);
    } while (uVar8 != 6);
    local_1c = 0;
  }
LAB_10003fdf:
  uVar16 = local_1c & 1;
LAB_1000477e:
  pcVar9 = str_10008a42;
  if (uVar16 != 0) {
    pcVar9 = str_10008a32;
  }
  if (param_4 != 0) {
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if ((uVar8 + 1 < 0x400) && (cVar10 = *pcVar9, cVar10 != '\0')) {
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar8) = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar8) = 0;
  }
  return;
}

#undef DAT_10008cf3
#undef DAT_10008cfb
#undef DAT_10008d2e
#undef DAT_10008d36
#undef DAT_10008d3e
#undef DAT_10008d52
#undef DAT_10008d5a
#undef DAT_10008d62
#undef DAT_10008d6a
#undef DAT_10008d7d
#undef DAT_10008e31
#undef str_10008a32
#undef str_10008a42
#undef str_10008a56
#undef str_10008a6e
#undef str_10008a86
#undef str_10008a9f
#undef str_10008ab0
#undef str_10008ac0
#undef str_10008acf
#undef str_10008ad8
#undef str_10008af4
#undef str_10008aff
#undef str_10008b0f
#undef str_10008b16
#undef str_10008b26
#undef str_10008b33
#undef str_10008b49
#undef str_10008b5f
#undef str_10008b75
#undef str_10008b8b
#undef str_10008ba4
#undef str_10008bbc
#undef str_10008bc9
#undef str_10008bda
#undef str_10008bee
#undef str_10008bfe
#undef str_10008c15
#undef str_10008c28
#undef str_10008c32
#undef str_10008c45
#undef str_10008c5c
#undef str_10008c68
#undef str_10008c74
#undef str_10008c81
#undef str_10008c8b
#undef str_10008c9f
#undef str_10008cae
#undef str_10008cc1
#undef str_10008cd3
#undef str_10008ce9
#undef str_10008d02
#undef str_10008d0c
#undef str_10008d18
#undef str_10008d45
#undef str_10008d71
#undef str_10008d82
#undef str_10008d8c
#undef str_10008da1
#undef str_10008db2
#undef str_10008dbe
#undef str_10008dca
#undef str_10008dd6
#undef str_10008de5
#undef str_10008def
#undef str_10008dfd
#undef str_10008e0e
#undef str_10008e1a
#undef str_10008e26
#undef str_10008e35
#undef local_b4
#undef local_b0
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
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14

#undef str_10008e75
#define str_10008e75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e0U)))
#undef str_10008e80
#define str_10008e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ebU)))
#undef str_10008e8f
#define str_10008e8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6faU)))
#undef str_10008ea0
#define str_10008ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70bU)))
#undef str_10008eb3
#define str_10008eb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71eU)))
#undef str_10008ec6
#define str_10008ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x731U)))
#undef str_10008ed6
#define str_10008ed6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x741U)))
#undef str_10008ee5
#define str_10008ee5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x750U)))
#undef str_10008ef4
#define str_10008ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75fU)))
#undef str_10008f05
#define str_10008f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x770U)))
#undef str_10008f10
#define str_10008f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77bU)))
#undef str_10008f1c
#define str_10008f1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x787U)))
#undef str_10008f26
#define str_10008f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x791U)))
#undef str_10008f2f
#define str_10008f2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79aU)))
#undef str_10008f3a
#define str_10008f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
#undef str_10008f43
#define str_10008f43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aeU)))
#undef str_10008f4b
#define str_10008f4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b6U)))
#undef str_10008f54
#define str_10008f54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bfU)))
#undef str_10008f5b
#define str_10008f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c6U)))
#undef str_10008f6e
#define str_10008f6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d9U)))
#undef str_10008f81
#define str_10008f81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ecU)))
#undef str_10008f94
#define str_10008f94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084a0
 */

char * recovered_100084a0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_10008e75;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_10008f2f;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_10008f26;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_10008f54;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_10008f54;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10008f4b;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_10008f3a;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_10008f10;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_1000861f;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_10008f1c;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_10008f43;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_10008e80;
    case 0x1001:
    case 0x1042:
      return str_10008e8f;
    case 0x1002:
    case 0x1045:
      return str_10008ea0;
    case 0x1003:
    case 0x1043:
      return str_10008eb3;
    case 0x1004:
    case 0x1048:
      return str_10008ec6;
    case 0x1005:
    case 0x1044:
      return str_10008ed6;
    default:
      return str_10008f05;
    case 0x1050:
      return str_10008ee5;
    case 0x1052:
      return str_10008ef4;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_10008f81;
  case 2:
    return str_10008f6e;
  case 3:
    return str_10008f5b;
  case 4:
    return str_10008f94;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_1000861f:
      pcVar2 = recovered_100026e0((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_10008e75;
}

#undef str_10008e75
#undef str_10008e80
#undef str_10008e8f
#undef str_10008ea0
#undef str_10008eb3
#undef str_10008ec6
#undef str_10008ed6
#undef str_10008ee5
#undef str_10008ef4
#undef str_10008f05
#undef str_10008f10
#undef str_10008f1c
#undef str_10008f26
#undef str_10008f2f
#undef str_10008f3a
#undef str_10008f43
#undef str_10008f4b
#undef str_10008f54
#undef str_10008f5b
#undef str_10008f6e
#undef str_10008f81
#undef str_10008f94

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008670
 */

undefined4
recovered_10008670(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

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

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
