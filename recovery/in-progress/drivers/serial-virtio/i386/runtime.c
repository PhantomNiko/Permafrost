/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000770
 */

void * recovered_10000770(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002d4d
#define DAT_10002d4d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_10002c18
#define str_10002c18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_10002c2b
#define str_10002c2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18fU)))
#undef str_10002c6f
#define str_10002c6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10002c84
#define str_10002c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10002ca2
#define str_10002ca2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_10002cba
#define str_10002cba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
#undef str_10002ce5
#define str_10002ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x249U)))
#undef str_10002d09
#define str_10002d09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_10002d18
#define str_10002d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10002d1f
#define str_10002d1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x283U)))
#undef str_10002d2f
#define str_10002d2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_10002d3e
#define str_10002d3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a2U)))
#define local_4f0 (*(ushort (*)[6])(frame + 32))
#define local_4e4 (*(char *)(frame + 44))
#define local_48c (*(uint *)(frame + 132))
#define local_450 (*(uint *)(frame + 192))
#define local_44c (*(undefined4 *)(frame + 196))
#define local_448 (*(byte (*)[1023])(frame + 200))
#define local_48 (*(ushort (*)[22])(frame + 1224))
#define bStack_4f1 (*(byte *)(frame + 31))
#define local_1c (*(uint *)(frame + 1268))
#define local_18 (*(uint *)(frame + 1272))
#define local_14 (*(uint *)(frame + 1276))
#define bStack_49 (*(byte *)(frame + 1223))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000780
 */

int recovered_10000780(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 in_DL;
  byte bVar6;
  uint uVar7;
  uint uVar8;

  local_14 = 0;
  iVar2 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    local_18 = api[2];
    local_448[0] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (local_448[uVar3] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x71;
      pcVar5 = str_10002c18;
      do {
        pcVar5 = pcVar5 + 1;
        local_448[uVar3] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar5;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    local_448[uVar3] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (local_448[uVar3] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x3a;
      pcVar5 = str_10002d09;
      do {
        pcVar5 = pcVar5 + 1;
        local_448[uVar3] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar5;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    local_448[uVar3] = 0;
    if (api[1] == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar3 + 1 < 0x60) {
        (local_448 + uVar3)[0] = 0x30;
        (local_448 + uVar3)[1] = 0;
      }
    }
    else {
      uVar7 = api[1];
      uVar3 = 0;
      do {
        *(byte *)((int)local_4f0 + uVar3) = (byte)(uVar7 % 10) | 0x30;
        uVar8 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar1 = 9 < uVar7;
        uVar7 = uVar7 / 10;
        uVar3 = uVar8;
      } while (bVar1);
      do {
        iVar2 = uVar8 - 1;
        uVar8 = uVar8 - 1;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (local_448[uVar3] != 0);
        if (uVar3 + 1 < 0x60) {
          local_448[uVar3] = *(byte *)((int)local_4f0 + iVar2);
          local_448[uVar3 + 1] = 0;
        }
      } while (uVar8 != 0);
    }
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (local_448[uVar3] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x20;
      pcVar5 = str_10002d18;
      do {
        pcVar5 = pcVar5 + 1;
        local_448[uVar3] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar5;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    local_448[uVar3] = 0;
    if ((0x2b < local_18) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(local_448);
    }
    local_448[0] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (local_448[uVar3] != 0);
    if (uVar3 + 1 < 0x400) {
      bVar6 = 0x73;
      pcVar5 = str_10002c2b;
      do {
        pcVar5 = pcVar5 + 1;
        local_448[uVar3] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar5;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x3ff);
    }
    local_448[uVar3] = 0;
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 && (iVar2 = (*(code *)api[0xf])(local_4f0), iVar2 != 0))))
    {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x20;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar3 + 1 < 0x400) {
        bVar6 = 0x68;
        pcVar5 = str_10002d1f;
        do {
          pcVar5 = pcVar5 + 1;
          local_448[uVar3] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar5;
          if (bVar6 == 0) break;
        } while (uVar3 < 0x3ff);
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x3d;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      if (local_48c == 0) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (local_448[uVar3] != 0);
        if (uVar3 + 1 < 0x400) {
          (local_448 + uVar3)[0] = 0x30;
          (local_448 + uVar3)[1] = 0;
        }
      }
      else {
        uVar7 = 0;
        do {
          *(byte *)((int)local_48 + uVar7) = (char)local_48c + (char)(local_48c / 10) * -10 | 0x30;
          uVar3 = uVar7 + 1;
          if (8 < uVar7) break;
          bVar1 = 9 < local_48c;
          local_48c = local_48c / 10;
          uVar7 = uVar3;
        } while (bVar1);
        do {
          iVar2 = uVar3 + 0x3ff;
          uVar3 = uVar3 - 1;
          uVar7 = 0;
          do {
            uVar8 = uVar7;
            uVar7 = uVar8 + 1;
          } while (local_448[uVar8] != 0);
          if (uVar8 + 1 < 0x400) {
            local_448[uVar8] = local_448[iVar2];
            local_448[uVar8 + 1] = 0;
          }
        } while (uVar3 != 0);
      }
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x20;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar3 + 1 < 0x400) {
        bVar6 = 0x6d;
        pcVar5 = str_10002d2f;
        do {
          pcVar5 = pcVar5 + 1;
          local_448[uVar3] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar5;
          if (bVar6 == 0) break;
        } while (uVar3 < 0x3ff);
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x3d;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      iVar2 = 8;
      do {
        uVar7 = local_450 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar6 = (byte)uVar7;
        if (uVar7 < 10) {
          bVar6 = bVar6 | 0x30;
        }
        else {
          bVar6 = bVar6 + 0x37;
        }
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (local_448[uVar3] != 0);
        if (uVar3 + 1 < 0x400) {
          local_448[uVar3] = bVar6;
          local_448[uVar3 + 1] = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x20;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar3 + 1 < 0x400) {
        bVar6 = 0x6d;
        pcVar5 = str_10002d3e;
        do {
          pcVar5 = pcVar5 + 1;
          local_448[uVar3] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar5;
          if (bVar6 == 0) break;
        } while (uVar3 < 0x3ff);
      }
      local_448[uVar3] = 0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_448[uVar3] != 0);
      if (uVar7 < 0x400) {
        local_448[uVar3] = 0x3d;
        uVar3 = uVar7;
      }
      local_448[uVar3] = 0;
      if (local_44c == 0) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (local_448[uVar3] != 0);
        if (uVar3 + 1 < 0x400) {
          (local_448 + uVar3)[0] = 0x30;
          (local_448 + uVar3)[1] = 0;
        }
      }
      else {
        uVar7 = 0;
        do {
          *(byte *)((int)local_48 + uVar7) = (char)local_44c + (char)(local_44c / 10) * -10 | 0x30;
          uVar3 = uVar7 + 1;
          if (8 < uVar7) break;
          bVar1 = 9 < local_44c;
          local_44c = local_44c / 10;
          uVar7 = uVar3;
        } while (bVar1);
        do {
          iVar2 = uVar3 + 0x3ff;
          uVar3 = uVar3 - 1;
          uVar7 = 0;
          do {
            uVar8 = uVar7;
            uVar7 = uVar8 + 1;
          } while (local_448[uVar8] != 0);
          if (uVar8 + 1 < 0x400) {
            local_448[uVar8] = local_448[iVar2];
            local_448[uVar8 + 1] = 0;
          }
        } while (uVar3 != 0);
      }
    }
    iVar2 = 0;
    if ((code *)api[3] != (code *)0x0) {
      iVar4 = (*(code *)api[3])(&DAT_10002d4d,str_10002c6f,local_448);
      iVar2 = 0;
      if (iVar4 != 0) {
        if ((code *)api[3] != (code *)0x0) {
          (*(code *)api[3])(str_10002c84,str_10002ca2,str_10002cba);
        }
        if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
          uVar7 = 0;
          do {
            local_18 = uVar7 & 0xff;
            iVar2 = 0;
            local_1c = uVar7;
            do {
              bVar6 = (byte)iVar2;
              iVar4 = recovered_10002660(api,(char)local_18,bVar6,0,(undefined1 *)local_4f0);
              if ((iVar4 != 0) &&
                 (recovered_10001170(api,local_4f0,(int *)&local_14), local_4e4 < '\0')) {
                in_DL = (undefined1)local_18;
                iVar4 = recovered_10002660(api,in_DL,bVar6,1,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,2,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,3,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,4,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,5,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,6,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
                iVar4 = recovered_10002660(api,in_DL,bVar6,7,(undefined1 *)local_48);
                if (iVar4 != 0) {
                  recovered_10001170(api,local_48,(int *)&local_14);
                }
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 != 0x20);
            uVar7 = local_1c + 1;
          } while (uVar7 != 8);
        }
        uVar3 = local_14;
        uVar7 = 0;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
        } while (local_448[uVar8] != 0);
        if (uVar7 < 0x400) {
          local_448[uVar8] = 0x20;
          uVar8 = uVar7;
        }
        local_448[uVar8] = 0;
        uVar7 = 0;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
        } while (local_448[uVar8] != 0);
        if (uVar8 + 1 < 0x400) {
          bVar6 = 0x70;
          pcVar5 = str_10002ce5;
          do {
            pcVar5 = pcVar5 + 1;
            local_448[uVar8] = bVar6;
            uVar8 = uVar8 + 1;
            bVar6 = *pcVar5;
            if (bVar6 == 0) break;
          } while (uVar8 < 0x3ff);
        }
        local_448[uVar8] = 0;
        uVar7 = 0;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
        } while (local_448[uVar8] != 0);
        if (uVar7 < 0x400) {
          local_448[uVar8] = 0x3d;
          uVar8 = uVar7;
        }
        local_448[uVar8] = 0;
        if (uVar3 == 0) {
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (local_448[uVar3] != 0);
          if (uVar3 + 1 < 0x400) {
            (local_448 + uVar3)[0] = 0x30;
            (local_448 + uVar3)[1] = 0;
          }
        }
        else {
          uVar7 = 0;
          do {
            *(byte *)((int)local_4f0 + uVar7) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
            uVar8 = uVar7 + 1;
            if (8 < uVar7) break;
            bVar1 = 9 < uVar3;
            uVar3 = uVar3 / 10;
            uVar7 = uVar8;
          } while (bVar1);
          do {
            iVar2 = uVar8 - 1;
            uVar8 = uVar8 - 1;
            uVar7 = 0;
            do {
              uVar3 = uVar7;
              uVar7 = uVar3 + 1;
            } while (local_448[uVar3] != 0);
            if (uVar3 + 1 < 0x400) {
              local_448[uVar3] = *(byte *)((int)local_4f0 + iVar2);
              local_448[uVar3 + 1] = 0;
            }
          } while (uVar8 != 0);
        }
        iVar2 = 1;
        if ((code *)api[3] != (code *)0x0) {
          (*(code *)api[3])(&DAT_10002d4d,str_10002c6f,local_448);
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

#undef DAT_10002d4d
#undef str_10002c18
#undef str_10002c2b
#undef str_10002c6f
#undef str_10002c84
#undef str_10002ca2
#undef str_10002cba
#undef str_10002ce5
#undef str_10002d09
#undef str_10002d18
#undef str_10002d1f
#undef str_10002d2f
#undef str_10002d3e
#undef local_4f0
#undef local_4e4
#undef local_48c
#undef local_450
#undef local_44c
#undef local_448
#undef local_48
#undef bStack_4f1
#undef local_1c
#undef local_18
#undef local_14
#undef bStack_49

#undef DAT_10002e0c
#define DAT_10002e0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x370U)))
#undef DAT_10002e3e
#define DAT_10002e3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_10002d4e
#define str_10002d4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10002d72
#define str_10002d72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_10002d86
#define str_10002d86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_10002d92
#define str_10002d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_10002daa
#define str_10002daa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_10002dc2
#define str_10002dc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10002ddb
#define str_10002ddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33fU)))
#undef str_10002dec
#define str_10002dec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x350U)))
#undef str_10002dfc
#define str_10002dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x360U)))
#undef str_10002e10
#define str_10002e10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_10002e19
#define str_10002e19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_10002e22
#define str_10002e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x386U)))
#undef str_10002e2a
#define str_10002e2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38eU)))
#undef str_10002e35
#define str_10002e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#define local_890 (*(undefined2 *)(frame + 32))
#define local_490 (*(undefined4 *)(frame + 1056))
#define local_90 (*(undefined4 *)(frame + 2080))
#define local_24 (*(char * *)(frame + 2188))
#define local_20 (*(int * *)(frame + 2192))
#define local_1c (*(uint *)(frame + 2196))
#define local_17 (*(byte *)(frame + 2201))
#define local_16 (*(ushort *)(frame + 2202))
#define local_14 (*(ushort * *)(frame + 2204))
#define cStack_891 (*(char *)(frame + 31))
#define bStack_491 (*(byte *)(frame + 1055))
#define bStack_91 (*(byte *)(frame + 2079))
#define abStack_2f (*(byte (*)[11])(frame + 2177))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

void recovered_10001170(int *in_ECX,ushort *in_EDX,int *param_3)

{
  unsigned char frame[2256] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  ushort *puVar19;

  if (in_EDX == (ushort *)0x0) {
    return;
  }
  if (in_EDX[2] != 0x1af4) {
    return;
  }
  if ((in_EDX[3] | 0x40) != 0x1043) {
    return;
  }
  local_14 = in_EDX;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  PF_PART1(local_890, 0) = '\0';
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_890 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = 'r';
    pcVar12 = str_10002d4e;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_890 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_890 + uVar6) = 0;
  local_490 = 0;
  local_90 = 0;
  local_20 = in_ECX;
  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     (in_ECX[0x18] == 0)) {
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 + 1;
    } while (*(char *)((int)&local_890 + uVar6) != '\0');
    puVar19 = local_14;
    if (uVar6 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar12 = str_10002d92;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_890 + uVar6) = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar12;
        if (cVar15 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
  }
  else {
    if ((code *)in_ECX[0x17] != (code *)0x0) {
      iVar7 = (*(code *)in_ECX[0x17])
                        ((byte)*local_14,*(byte *)((int)local_14 + 1),(byte)local_14[1],4,2,
                         &local_490);
      piVar4 = local_20;
      if (iVar7 != 0) {
        if ((*(uint *)(local_14 + 10) & 1) == 0) {
          uVar8 = (uint)(*(uint *)(local_14 + 10) != 0) * 2;
        }
        else {
          uVar8 = 1;
        }
        uVar6 = uVar8;
        if (*(uint *)(local_14 + 0xc) != 0) {
          uVar6 = uVar8 | 2;
        }
        if ((*(uint *)(local_14 + 0xc) & 1) != 0) {
          uVar6 = uVar8 | 1;
        }
        uVar8 = uVar6;
        if (*(uint *)(local_14 + 0xe) != 0) {
          uVar8 = uVar6 | 2;
        }
        if ((*(uint *)(local_14 + 0xe) & 1) != 0) {
          uVar8 = uVar6 | 1;
        }
        uVar6 = uVar8;
        if (*(uint *)(local_14 + 0x10) != 0) {
          uVar6 = uVar8 | 2;
        }
        if ((*(uint *)(local_14 + 0x10) & 1) != 0) {
          uVar6 = uVar8 | 1;
        }
        uVar8 = uVar6;
        if (*(uint *)(local_14 + 0x12) != 0) {
          uVar8 = uVar6 | 2;
        }
        if ((*(uint *)(local_14 + 0x12) & 1) != 0) {
          uVar8 = uVar6 | 1;
        }
        uVar6 = uVar8;
        if (*(uint *)(local_14 + 0x14) != 0) {
          uVar6 = uVar8 | 2;
        }
        if ((*(uint *)(local_14 + 0x14) & 1) != 0) {
          uVar6 = uVar8 | 1;
        }
        uVar8 = uVar6 | 4;
        if (((byte)local_14[4] == 6) && (*(byte *)((int)local_14 + 9) != 0)) {
          uVar8 = uVar6 | 6;
        }
        local_90 = local_490 | uVar8;
        if (((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) &&
           (((code *)in_ECX[0x18] != (code *)0x0 &&
            (iVar7 = (*(code *)in_ECX[0x18])
                               (*local_14 & 0xff,*local_14 >> 8,(byte)local_14[1],4,2,
                                local_490 | uVar8), iVar7 != 0)))) {
          if (((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) &&
             ((code *)piVar4[0x17] != (code *)0x0)) {
            (*(code *)piVar4[0x17])
                      ((byte)*local_14,*(byte *)((int)local_14 + 1),(byte)local_14[1],4,2,&local_90)
            ;
          }
          uVar9 = local_490;
          uVar6 = 0;
          do {
            uVar14 = uVar6;
            uVar6 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar14) = 0x20;
            uVar14 = uVar6;
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          uVar6 = 0;
          do {
            uVar14 = uVar6;
            uVar6 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar14 + 1 < 0x400) {
            cVar15 = 'p';
            pcVar12 = str_10002ddb;
            do {
              pcVar12 = pcVar12 + 1;
              *(char *)((int)&local_890 + uVar14) = cVar15;
              uVar14 = uVar14 + 1;
              cVar15 = *pcVar12;
              if (cVar15 == '\0') break;
            } while (uVar14 < 0x3ff);
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          uVar6 = 0;
          do {
            uVar14 = uVar6;
            uVar6 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar14) = 0x3d;
            uVar14 = uVar6;
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          iVar7 = 8;
          do {
            uVar6 = uVar9 >> ((char)iVar7 * '\x04' - 4U & 0x1f) & 0xf;
            bVar5 = (byte)uVar6;
            if (uVar6 < 10) {
              bVar5 = bVar5 | 0x30;
            }
            else {
              bVar5 = bVar5 + 0x37;
            }
            uVar6 = 0;
            do {
              uVar14 = uVar6;
              uVar6 = uVar14 + 1;
            } while (*(char *)((int)&local_890 + uVar14) != '\0');
            if (uVar14 + 1 < 0x400) {
              *(byte *)((int)&local_890 + uVar14) = bVar5;
              *(undefined1 *)((int)&local_890 + uVar14 + 1) = 0;
            }
            uVar6 = local_90;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar9 = 0;
          do {
            uVar14 = uVar9;
            uVar9 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar14) = 0x20;
            uVar14 = uVar9;
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          uVar9 = 0;
          do {
            uVar14 = uVar9;
            uVar9 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar14 + 1 < 0x400) {
            cVar15 = 'p';
            pcVar12 = str_10002dec;
            do {
              pcVar12 = pcVar12 + 1;
              *(char *)((int)&local_890 + uVar14) = cVar15;
              uVar14 = uVar14 + 1;
              cVar15 = *pcVar12;
              if (cVar15 == '\0') break;
            } while (uVar14 < 0x3ff);
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          uVar9 = 0;
          do {
            uVar14 = uVar9;
            uVar9 = uVar14 + 1;
          } while (*(char *)((int)&local_890 + uVar14) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar14) = 0x3d;
            uVar14 = uVar9;
          }
          *(undefined1 *)((int)&local_890 + uVar14) = 0;
          iVar7 = 8;
          do {
            uVar9 = uVar6 >> ((char)iVar7 * '\x04' - 4U & 0x1f) & 0xf;
            bVar5 = (byte)uVar9;
            if (uVar9 < 10) {
              bVar5 = bVar5 | 0x30;
            }
            else {
              bVar5 = bVar5 + 0x37;
            }
            uVar9 = 0;
            do {
              uVar14 = uVar9;
              uVar9 = uVar14 + 1;
            } while (*(char *)((int)&local_890 + uVar14) != '\0');
            if (uVar14 + 1 < 0x400) {
              *(byte *)((int)&local_890 + uVar14) = bVar5;
              *(undefined1 *)((int)&local_890 + uVar14 + 1) = 0;
            }
            puVar19 = local_14;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar9) = 0x20;
            uVar9 = uVar6;
          }
          *(undefined1 *)((int)&local_890 + uVar9) = 0;
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            cVar15 = 'p';
            pcVar12 = str_10002dfc;
            do {
              pcVar12 = pcVar12 + 1;
              *(char *)((int)&local_890 + uVar9) = cVar15;
              uVar9 = uVar9 + 1;
              cVar15 = *pcVar12;
              if (cVar15 == '\0') break;
            } while (uVar9 < 0x3ff);
          }
          *(undefined1 *)((int)&local_890 + uVar9) = 0;
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)((int)&local_890 + uVar9) = 0x3d;
            uVar9 = uVar6;
          }
          *(undefined1 *)((int)&local_890 + uVar9) = 0;
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(undefined2 *)((int)&local_890 + uVar9) = 0x30;
          }
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_890 + uVar9) != '\0');
          if (0x3ff < uVar6) goto LAB_100012df;
          *(byte *)((int)&local_890 + uVar9) = (byte)uVar8 | 0x30;
        }
        else {
          uVar8 = 0;
          do {
            uVar6 = uVar8;
            uVar8 = uVar6 + 1;
          } while (*(char *)((int)&local_890 + uVar6) != '\0');
          puVar19 = local_14;
          if (uVar6 + 1 < 0x400) {
            cVar15 = ' ';
            pcVar12 = str_10002dc2;
            do {
              pcVar12 = pcVar12 + 1;
              *(char *)((int)&local_890 + uVar6) = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar12;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
        }
        goto LAB_100012d7;
      }
    }
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 + 1;
    } while (*(char *)((int)&local_890 + uVar6) != '\0');
    puVar19 = local_14;
    if (uVar6 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar12 = str_10002daa;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_890 + uVar6) = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar12;
        if (cVar15 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
  }
LAB_100012d7:
  *(undefined1 *)((int)&local_890 + uVar6) = 0;
LAB_100012df:
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_890 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar12 = str_10002d72;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_890 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_890 + uVar6) = 0;
  local_24 = recovered_10002870((int)puVar19);
  local_90 = local_90 & 0xffffff00;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (abStack_2f[uVar6 - 0x61] != 0);
  if (uVar6 + 1 < 0x60) {
    bVar5 = 0x2f;
    pcVar12 = str_10002d86;
    do {
      pcVar12 = pcVar12 + 1;
      abStack_2f[uVar6 - 0x61] = bVar5;
      uVar6 = uVar6 + 1;
      bVar5 = *pcVar12;
      if (bVar5 == 0) break;
    } while (uVar6 < 0x5f);
  }
  abStack_2f[uVar6 - 0x61] = 0;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (abStack_2f[uVar6 - 0x61] != 0);
  if (uVar8 < 0x60) {
    abStack_2f[uVar6 - 0x61] = 0x2f;
    uVar6 = uVar8;
  }
  abStack_2f[uVar6 - 0x61] = 0;
  bVar5 = (byte)*puVar19;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (abStack_2f[uVar6 - 0x61] != 0);
  if (bVar5 < 0xa0) {
    bVar17 = bVar5 >> 4 | 0x30;
  }
  else {
    bVar17 = (bVar5 >> 4) + 0x37;
  }
  if (uVar6 + 1 < 0x60) {
    abStack_2f[uVar6 - 0x61] = bVar17;
    abStack_2f[uVar6 - 0x60] = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (abStack_2f[uVar6 - 0x61] != 0);
  bVar16 = (byte)(bVar5 & 0xffff0f);
  if (bVar16 < 10) {
    uVar8 = (bVar5 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar8 = (uint)(byte)(bVar16 + 0x37) << 8;
  }
  bVar5 = (byte)(uVar8 >> 8);
  if (uVar6 + 1 < 0x60) {
    abStack_2f[uVar6 - 0x61] = bVar5;
    abStack_2f[uVar6 - 0x60] = 0;
  }
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_2f[uVar9 - 0x61] != 0);
  if (uVar6 < 0x60) {
    abStack_2f[uVar9 - 0x61] = 0x3a;
    uVar9 = uVar6;
  }
  abStack_2f[uVar9 - 0x61] = 0;
  bVar16 = *(byte *)((int)puVar19 + 1);
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_2f[uVar9 - 0x61] != 0);
  if (bVar16 < 0xa0) {
    bVar10 = bVar16 >> 4 | 0x30;
  }
  else {
    bVar10 = (bVar16 >> 4) + 0x37;
  }
  if (uVar9 + 1 < 0x60) {
    abStack_2f[uVar9 - 0x61] = bVar10;
    abStack_2f[uVar9 - 0x60] = 0;
  }
  uVar18 = CONCAT11(bVar16,bVar17) & 0xfff;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_2f[uVar9 - 0x61] != 0);
  bVar17 = (byte)(uVar18 >> 8);
  if (bVar17 < 10) {
    uVar18 = uVar18 | 0x3000;
  }
  else {
    uVar18 = CONCAT11(bVar17 + 0x37,(char)uVar18);
  }
  if (uVar9 + 1 < 0x60) {
    abStack_2f[uVar9 - 0x61] = (byte)(uVar18 >> 8);
    abStack_2f[uVar9 - 0x60] = 0;
  }
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_2f[uVar9 - 0x61] != 0);
  if (uVar6 < 0x60) {
    abStack_2f[uVar9 - 0x61] = 0x2e;
    uVar9 = uVar6;
  }
  abStack_2f[uVar9 - 0x61] = 0;
  uVar6 = (uint)(byte)puVar19[1];
  local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar10);
  if (uVar6 == 0) {
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (abStack_2f[uVar14 - 0x61] != 0);
    if (uVar14 + 1 < 0x60) {
      (abStack_2f + (uVar14 - 0x61))[0] = 0x30;
      (abStack_2f + (uVar14 - 0x61))[1] = 0;
    }
  }
  else {
    local_16 = uVar18;
    local_17 = bVar5;
    uVar8 = uVar6;
    uVar9 = 0;
    do {
      *(byte *)((int)&local_490 + uVar9) = (byte)(uVar8 % 10) | 0x30;
      uVar18 = local_16;
      uVar14 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar3 = 9 < uVar8;
      uVar8 = uVar8 / 10;
      uVar9 = uVar14;
    } while (bVar3);
    uVar8 = (uint)local_17 << 8;
    do {
      pbVar1 = &bStack_491 + uVar14;
      uVar14 = uVar14 - 1;
      uVar9 = 0;
      do {
        uVar13 = uVar9;
        uVar9 = uVar13 + 1;
      } while (abStack_2f[uVar13 - 0x61] != 0);
      if (uVar13 + 1 < 0x60) {
        abStack_2f[uVar13 - 0x61] = *pbVar1;
        abStack_2f[uVar13 - 0x60] = 0;
      }
    } while (uVar14 != 0);
  }
  local_490 = local_490 & 0xffffff00;
  uVar9 = 0;
  do {
    uVar14 = uVar9;
    uVar9 = uVar14 + 1;
  } while (*(char *)((int)&local_490 + uVar14) != '\0');
  if (uVar14 + 1 < 0x400) {
    uVar8 = CONCAT31((int3)(uVar8 >> 8),0x70);
    pcVar12 = &DAT_10002e0c;
    do {
      *(char *)((int)&local_490 + uVar14) = (char)uVar8;
      uVar14 = uVar14 + 1;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),*pcVar12);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar14 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar14) = 0;
  uVar9 = 0;
  do {
    uVar14 = uVar9;
    uVar9 = uVar14 + 1;
  } while (*(char *)((int)&local_490 + uVar14) != '\0');
  if (uVar14 + 1 < 0x400) {
    *(char *)((int)&local_490 + uVar14) = (char)uVar18;
    *(undefined1 *)((int)&local_490 + uVar14 + 1) = 0;
  }
  uVar9 = 0;
  do {
    uVar14 = uVar9;
    uVar9 = uVar14 + 1;
  } while (*(char *)((int)&local_490 + uVar14) != '\0');
  if (uVar14 + 1 < 0x400) {
    *(char *)((int)&local_490 + uVar14) = (char)(uVar8 >> 8);
    *(undefined1 *)((int)&local_490 + uVar14 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar9) = 0x3a;
    uVar9 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar9) = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar9 + 1 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar9) = (undefined1)local_1c;
    *(undefined1 *)((int)&local_490 + uVar9 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar9 + 1 < 0x400) {
    *(char *)((int)&local_490 + uVar9) = (char)(uVar18 >> 8);
    *(undefined1 *)((int)&local_490 + uVar9 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar9) = 0x2e;
    uVar9 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar9) = 0;
  puVar19 = local_14;
  if (uVar6 == 0) {
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 + 1;
    } while (*(char *)((int)&local_490 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      *(undefined2 *)((int)&local_490 + uVar6) = 0x30;
    }
  }
  else {
    uVar8 = 0;
    do {
      abStack_2f[uVar8 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      puVar19 = local_14;
      uVar9 = uVar8 + 1;
      if (8 < uVar8) break;
      bVar3 = 9 < uVar6;
      uVar8 = uVar9;
      uVar6 = uVar6 / 10;
    } while (bVar3);
    do {
      pbVar1 = abStack_2f + uVar9;
      uVar9 = uVar9 - 1;
      uVar8 = 0;
      do {
        uVar6 = uVar8;
        uVar8 = uVar6 + 1;
      } while (*(char *)((int)&local_490 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(byte *)((int)&local_490 + uVar6) = *pbVar1;
        *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
      }
    } while (uVar9 != 0);
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar12 = str_10002e10;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_490 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  uVar18 = puVar19[2];
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar18 >> 8);
    if (uVar18 < 0xa000) {
      bVar5 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar5 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar11 = uVar18 >> 8 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)uVar11;
    if (uVar11 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar11 = uVar18 >> 4 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)uVar11;
    if (uVar11 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar18 & 0xf);
    if ((uVar18 & 0xf) < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar12 = str_10002e19;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_490 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  uVar18 = puVar19[3];
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar18 >> 8);
    if (uVar18 < 0xa000) {
      bVar5 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar5 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar11 = uVar18 >> 8 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)uVar11;
    if (uVar11 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar11 = uVar18 >> 4 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)uVar11;
    if (uVar11 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar18 & 0xf);
    if ((uVar18 & 0xf) < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar12 = str_10002e22;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_490 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  bVar5 = (byte)puVar19[4];
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 0xa0) {
      bVar17 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar17;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar6) = 0x2e;
    uVar6 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  bVar5 = *(byte *)((int)puVar19 + 9);
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 0xa0) {
      bVar17 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar17;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar6) = 0x2e;
    uVar6 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  bVar5 = (byte)puVar19[5];
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 0xa0) {
      bVar17 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar17;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar12 = str_10002e2a;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_490 + uVar6) = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar6) = 0;
  bVar5 = *(byte *)((int)puVar19 + 0xb);
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 0xa0) {
      bVar17 = bVar5 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar5 >> 4) + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar17;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar8 = uVar6 + 1;
  } while (*(char *)((int)&local_490 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    if (bVar5 < 10) {
      bVar5 = bVar5 | 0x30;
    }
    else {
      bVar5 = bVar5 + 0x37;
    }
    *(byte *)((int)&local_490 + uVar6) = bVar5;
    *(undefined1 *)((int)&local_490 + uVar6 + 1) = 0;
  }
  uVar6 = *(uint *)(puVar19 + 8);
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar9) = 0x20;
    uVar9 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar9) = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar15 = 'c';
    pcVar12 = str_10002e35;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_490 + uVar9) = cVar15;
      uVar9 = uVar9 + 1;
      cVar15 = *pcVar12;
      if (cVar15 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  *(undefined1 *)((int)&local_490 + uVar9) = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)((int)&local_490 + uVar9) != '\0');
  if (uVar8 < 0x400) {
    *(undefined1 *)((int)&local_490 + uVar9) = 0x3d;
    uVar9 = uVar8;
  }
  *(undefined1 *)((int)&local_490 + uVar9) = 0;
  iVar7 = 8;
  do {
    uVar9 = uVar6 >> ((char)iVar7 * '\x04' - 4U & 0x1f) & 0xf;
    bVar17 = (byte)uVar9;
    bVar5 = bVar17 + 0x37;
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((int)&local_490 + uVar14) != '\0');
    if (uVar14 + 1 < 0x400) {
      if (uVar9 < 10) {
        bVar5 = bVar17 | 0x30;
      }
      *(byte *)((int)&local_490 + uVar14) = bVar5;
      *(undefined1 *)((int)&local_490 + uVar14 + 1) = 0;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar8 = 0;
  puVar19 = local_14;
  do {
    local_1c = uVar8;
    uVar8 = *(uint *)(puVar19 + uVar8 * 2 + 10);
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        uVar6 = uVar9 + 1;
      } while (*(char *)((int)&local_490 + uVar9) != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar12 = &DAT_10002e3e;
        do {
          *(char *)((int)&local_490 + uVar9) = cVar15;
          uVar9 = uVar9 + 1;
          cVar15 = *pcVar12;
          if (cVar15 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar9 < 0x3ff);
      }
      *(undefined1 *)((int)&local_490 + uVar9) = 0;
      if (local_1c == 0) {
        uVar6 = 0;
        do {
          uVar9 = uVar6;
          uVar6 = uVar9 + 1;
        } while (*(char *)((int)&local_490 + uVar9) != '\0');
        if (uVar9 + 1 < 0x400) {
          *(undefined2 *)((int)&local_490 + uVar9) = 0x30;
        }
      }
      else {
        uVar6 = local_1c;
        uVar9 = 0;
        do {
          abStack_2f[uVar9 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar14 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar3 = 9 < uVar6;
          uVar6 = uVar6 / 10;
          uVar9 = uVar14;
        } while (bVar3);
        do {
          pbVar1 = abStack_2f + uVar14;
          uVar14 = uVar14 - 1;
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            uVar6 = uVar9 + 1;
          } while (*(char *)((int)&local_490 + uVar9) != '\0');
          if (uVar9 + 1 < 0x400) {
            *(byte *)((int)&local_490 + uVar9) = *pbVar1;
            *(undefined1 *)((int)&local_490 + uVar9 + 1) = 0;
          }
        } while (uVar14 != 0);
        puVar19 = local_14;
      }
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        uVar6 = uVar9 + 1;
      } while (*(char *)((int)&local_490 + uVar9) != '\0');
      if (uVar6 < 0x400) {
        *(undefined1 *)((int)&local_490 + uVar9) = 0x3d;
        uVar9 = uVar6;
      }
      *(undefined1 *)((int)&local_490 + uVar9) = 0;
      iVar7 = 8;
      do {
        uVar9 = uVar8 >> ((char)iVar7 * '\x04' - 4U & 0x1f) & 0xf;
        bVar17 = (byte)uVar9;
        bVar5 = bVar17 + 0x37;
        uVar6 = 0;
        do {
          uVar14 = uVar6;
          uVar6 = uVar14 + 1;
        } while (*(char *)((int)&local_490 + uVar14) != '\0');
        if (uVar14 + 1 < 0x400) {
          if (uVar9 < 10) {
            bVar5 = bVar17 | 0x30;
          }
          *(byte *)((int)&local_490 + uVar14) = bVar5;
          *(undefined1 *)((int)&local_490 + uVar14 + 1) = 0;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar4 = local_20;
    uVar8 = local_1c + 1;
  } while (uVar8 != 6);
  if ((char)local_890 != '\0') {
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 + 1;
    } while (*(char *)((int)&local_490 + uVar6) != '\0');
    if (uVar8 < 0x400) {
      *(undefined1 *)((int)&local_490 + uVar6) = 0x20;
      uVar6 = uVar8;
    }
    *(undefined1 *)((int)&local_490 + uVar6) = 0;
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 + 1;
    } while (*(char *)((int)&local_490 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      pcVar12 = (char *)((int)&local_890 + 1);
      cVar15 = (char)local_890;
      do {
        *(char *)((int)&local_490 + uVar6) = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar12;
        if (cVar15 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)((int)&local_490 + uVar6) = 0;
  }
  if ((piVar4 != (int *)0x0) && (pcVar2 = (code *)piVar4[3], pcVar2 != (code *)0x0)) {
    (*pcVar2)(&local_90,local_24,&local_490);
  }
  return;
}

#undef DAT_10002e0c
#undef DAT_10002e3e
#undef str_10002d4e
#undef str_10002d72
#undef str_10002d86
#undef str_10002d92
#undef str_10002daa
#undef str_10002dc2
#undef str_10002ddb
#undef str_10002dec
#undef str_10002dfc
#undef str_10002e10
#undef str_10002e19
#undef str_10002e22
#undef str_10002e2a
#undef str_10002e35
#undef local_890
#undef local_490
#undef local_90
#undef local_24
#undef local_20
#undef local_1c
#undef local_17
#undef local_16
#undef local_14
#undef cStack_891
#undef bStack_491
#undef bStack_91
#undef abStack_2f

#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002660
 */

undefined4
recovered_10002660(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_18
#undef local_14
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef str_10002e42
#define str_10002e42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a6U)))
#undef str_10002e4d
#define str_10002e4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_10002e5c
#define str_10002e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_10002e6d
#define str_10002e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#undef str_10002e80
#define str_10002e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e4U)))
#undef str_10002e93
#define str_10002e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f7U)))
#undef str_10002ea3
#define str_10002ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x407U)))
#undef str_10002eb2
#define str_10002eb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x416U)))
#undef str_10002ec1
#define str_10002ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x425U)))
#undef str_10002ed2
#define str_10002ed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_10002edd
#define str_10002edd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x441U)))
#undef str_10002ee9
#define str_10002ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#undef str_10002ef3
#define str_10002ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10002efc
#define str_10002efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x460U)))
#undef str_10002f07
#define str_10002f07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46bU)))
#undef str_10002f10
#define str_10002f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x474U)))
#undef str_10002f18
#define str_10002f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47cU)))
#undef str_10002f21
#define str_10002f21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x485U)))
#undef str_10002f28
#define str_10002f28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#undef str_10002f3b
#define str_10002f3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49fU)))
#undef str_10002f4e
#define str_10002f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b2U)))
#undef str_10002f61
#define str_10002f61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002870
 */

char * recovered_10002870(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_10002e42;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_10002efc;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_10002ef3;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_10002f21;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_10002f21;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10002f18;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_10002f07;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_10002edd;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_100029ef;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_10002ee9;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_10002f10;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_10002e4d;
    case 0x1001:
    case 0x1042:
      return str_10002e5c;
    case 0x1002:
    case 0x1045:
      return str_10002e6d;
    case 0x1003:
    case 0x1043:
      return str_10002e80;
    case 0x1004:
    case 0x1048:
      return str_10002e93;
    case 0x1005:
    case 0x1044:
      return str_10002ea3;
    default:
      return str_10002ed2;
    case 0x1050:
      return str_10002eb2;
    case 0x1052:
      return str_10002ec1;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_10002f4e;
  case 2:
    return str_10002f3b;
  case 3:
    return str_10002f28;
  case 4:
    return str_10002f61;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_100029ef:
      pcVar2 = recovered_10002a40((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_10002e42;
}

#undef str_10002e42
#undef str_10002e4d
#undef str_10002e5c
#undef str_10002e6d
#undef str_10002e80
#undef str_10002e93
#undef str_10002ea3
#undef str_10002eb2
#undef str_10002ec1
#undef str_10002ed2
#undef str_10002edd
#undef str_10002ee9
#undef str_10002ef3
#undef str_10002efc
#undef str_10002f07
#undef str_10002f10
#undef str_10002f18
#undef str_10002f21
#undef str_10002f28
#undef str_10002f3b
#undef str_10002f4e
#undef str_10002f61

#undef DAT_10002f77
#define DAT_10002f77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
#undef DAT_10002f7c
#define DAT_10002f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_10002f81
#define DAT_10002f81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e5U)))
#undef DAT_10002f86
#define DAT_10002f86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10002f8b
#define str_10002f8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_10002f96
#define str_10002f96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_10002f9f
#define str_10002f9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x503U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

char * recovered_10002a40(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_10002f77;
    }
    if (in_ECX == 0x10) {
      return &DAT_10002f7c;
    }
    if (in_ECX == 0x20) {
      return &DAT_10002f81;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_10002f86;
    }
    if (in_ECX == 0x80) {
      return str_10002f8b;
    }
    if (in_ECX == 0xfe) {
      return str_10002f96;
    }
  }
  return str_10002f9f;
}

#undef DAT_10002f77
#undef DAT_10002f7c
#undef DAT_10002f81
#undef DAT_10002f86
#undef str_10002f8b
#undef str_10002f96
#undef str_10002f9f

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
