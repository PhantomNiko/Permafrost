/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b000
#define DAT_1000b000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001310
 */

void * recovered_10001310(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b000;
}

#undef DAT_1000b000

#undef DAT_1000a7fb
#define DAT_1000a7fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#undef DAT_1000a865
#define DAT_1000a865 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c9U)))
#undef str_1000a718
#define str_1000a718 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000a72a
#define str_1000a72a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_1000a757
#define str_1000a757 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bbU)))
#undef str_1000a76a
#define str_1000a76a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_1000a7b6
#define str_1000a7b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21aU)))
#undef str_1000a7c0
#define str_1000a7c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000a7d4
#define str_1000a7d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_1000a7e8
#define str_1000a7e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_1000a800
#define str_1000a800 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_1000a821
#define str_1000a821 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_1000a830
#define str_1000a830 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_1000a837
#define str_1000a837 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1000a847
#define str_1000a847 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2abU)))
#undef str_1000a856
#define str_1000a856 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#define cStack_4f1 (*(char *)(frame + 31))
#define local_4f0 (*(undefined2 *)(frame + 32))
#define bStack_f1 (*(byte *)(frame + 1055))
#define local_f0 (*(uint (*)[10])(frame + 1056))
#define acStack_c5 (*(char (*)[101])(frame + 1099))
#define local_60 (*(uint *)(frame + 1200))
#define local_24 (*(uint *)(frame + 1260))
#define local_20 (*(uint *)(frame + 1264))
#define local_1c (*(uint *)(frame + 1268))
#define local_18 (*(uint *)(frame + 1272))
#define local_14 (*(uint *)(frame + 1276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

int recovered_10001320(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  undefined1 in_DL;
  byte bVar7;
  uint uVar8;
  uint uVar9;

  local_14 = 0;
  iVar2 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    local_18 = api[2];
    PF_PART1(local_4f0, 0) = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
    if (uVar3 + 1 < 0x60) {
      cVar6 = 'q';
      pcVar5 = str_1000a718;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_4f0 + uVar3) = cVar6;
        uVar3 = uVar3 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar3 < 0x5f);
    }
    *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
    if (uVar3 + 1 < 0x60) {
      cVar6 = ':';
      pcVar5 = str_1000a821;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_4f0 + uVar3) = cVar6;
        uVar3 = uVar3 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar3 < 0x5f);
    }
    *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
    if (api[1] == 0) {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar3 + 1 < 0x60) {
        *(undefined2 *)((int)&local_4f0 + uVar3) = 0x30;
      }
    }
    else {
      uVar8 = api[1];
      uVar3 = 0;
      do {
        acStack_c5[uVar3 + 1] = (byte)(uVar8 % 10) | 0x30;
        uVar9 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar1 = 9 < uVar8;
        uVar8 = uVar8 / 10;
        uVar3 = uVar9;
      } while (bVar1);
      do {
        pcVar5 = acStack_c5 + uVar9;
        uVar9 = uVar9 - 1;
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
        if (uVar3 + 1 < 0x60) {
          *(char *)((int)&local_4f0 + uVar3) = *pcVar5;
          *(undefined1 *)((int)&local_4f0 + uVar3 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
    if (uVar3 + 1 < 0x60) {
      cVar6 = ' ';
      pcVar5 = str_1000a830;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_4f0 + uVar3) = cVar6;
        uVar3 = uVar3 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar3 < 0x5f);
    }
    *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
    if ((0x2b < local_18) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(&local_4f0);
    }
    PF_PART1(local_4f0, 0) = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar6 = 's';
      pcVar5 = str_1000a72a;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_4f0 + uVar3) = cVar6;
        uVar3 = uVar3 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
    *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 &&
        (iVar2 = (*(code *)api[0xf])(acStack_c5 + 1), iVar2 != 0)))) {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x20;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar6 = 'h';
        pcVar5 = str_1000a837;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_4f0 + uVar3) = cVar6;
          uVar3 = uVar3 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x3d;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      if (local_60 == 0) {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          *(undefined2 *)((int)&local_4f0 + uVar3) = 0x30;
        }
      }
      else {
        uVar8 = local_60;
        uVar3 = 0;
        do {
          *(byte *)((int)local_f0 + uVar3) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
          uVar9 = uVar3 + 1;
          if (8 < uVar3) break;
          bVar1 = 9 < uVar8;
          uVar8 = uVar8 / 10;
          uVar3 = uVar9;
        } while (bVar1);
        do {
          iVar2 = uVar9 - 1;
          uVar9 = uVar9 - 1;
          uVar8 = 0;
          do {
            uVar3 = uVar8;
            uVar8 = uVar3 + 1;
          } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            *(undefined1 *)((int)&local_4f0 + uVar3) = *(undefined1 *)((int)local_f0 + iVar2);
            *(undefined1 *)((int)&local_4f0 + uVar3 + 1) = 0;
          }
        } while (uVar9 != 0);
      }
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x20;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar6 = 'm';
        pcVar5 = str_1000a847;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_4f0 + uVar3) = cVar6;
          uVar3 = uVar3 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x3d;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      iVar2 = 8;
      do {
        uVar8 = local_24 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar7 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar7 = bVar7 | 0x30;
        }
        else {
          bVar7 = bVar7 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          *(byte *)((int)&local_4f0 + uVar3) = bVar7;
          *(undefined1 *)((int)&local_4f0 + uVar3 + 1) = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x20;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar6 = 'm';
        pcVar5 = str_1000a856;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_4f0 + uVar3) = cVar6;
          uVar3 = uVar3 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
      if (uVar8 < 0x400) {
        *(undefined1 *)((int)&local_4f0 + uVar3) = 0x3d;
        uVar3 = uVar8;
      }
      *(undefined1 *)((int)&local_4f0 + uVar3) = 0;
      if (local_20 == 0) {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          *(undefined2 *)((int)&local_4f0 + uVar3) = 0x30;
        }
      }
      else {
        uVar8 = local_20;
        uVar3 = 0;
        do {
          *(byte *)((int)local_f0 + uVar3) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
          uVar9 = uVar3 + 1;
          if (8 < uVar3) break;
          bVar1 = 9 < uVar8;
          uVar8 = uVar8 / 10;
          uVar3 = uVar9;
        } while (bVar1);
        do {
          iVar2 = uVar9 - 1;
          uVar9 = uVar9 - 1;
          uVar8 = 0;
          do {
            uVar3 = uVar8;
            uVar8 = uVar3 + 1;
          } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            *(undefined1 *)((int)&local_4f0 + uVar3) = *(undefined1 *)((int)local_f0 + iVar2);
            *(undefined1 *)((int)&local_4f0 + uVar3 + 1) = 0;
          }
        } while (uVar9 != 0);
      }
    }
    iVar2 = 0;
    if ((code *)api[3] != (code *)0x0) {
      iVar4 = (*(code *)api[3])(&DAT_1000a865,str_1000a757,&local_4f0);
      iVar2 = 0;
      if (iVar4 != 0) {
        if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
          uVar8 = 0;
          do {
            local_18 = uVar8 & 0xff;
            iVar2 = 0;
            local_1c = uVar8;
            do {
              bVar7 = (byte)iVar2;
              iVar4 = recovered_10003dc0(api,(char)local_18,bVar7,0,acStack_c5 + 1);
              if ((iVar4 != 0) &&
                 (recovered_10001f30(api,(byte *)(acStack_c5 + 1),(int *)&local_14),
                 acStack_c5[0xd] < '\0')) {
                in_DL = (undefined1)local_18;
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,1,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,2,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,3,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,4,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,5,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,6,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10003dc0(api,in_DL,bVar7,7,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001f30(api,(byte *)local_f0,(int *)&local_14);
                }
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 != 0x20);
            uVar8 = local_1c + 1;
          } while (uVar8 != 8);
        }
        if (local_14 == 0) {
          local_f0[0] = 0;
          acStack_c5[1] = 0;
          uVar8 = 0;
          do {
            uVar3 = uVar8;
            uVar8 = uVar3 + 1;
          } while (acStack_c5[uVar3 + 1] != '\0');
          if (uVar3 + 1 < 0xa0) {
            cVar6 = 'i';
            pcVar5 = str_1000a76a;
            do {
              pcVar5 = pcVar5 + 1;
              acStack_c5[uVar3 + 1] = cVar6;
              uVar3 = uVar3 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar3 < 0x9f);
          }
          acStack_c5[uVar3 + 1] = '\0';
          if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) &&
             (((code *)api[0x15] != (code *)0x0 &&
              (iVar2 = (*(code *)api[0x15])(0x22e,1,local_f0), iVar2 != 0)))) {
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (acStack_c5[uVar3 + 1] != '\0');
            if (uVar8 < 0xa0) {
              acStack_c5[uVar3 + 1] = ' ';
              uVar3 = uVar8;
            }
            acStack_c5[uVar3 + 1] = '\0';
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (acStack_c5[uVar3 + 1] != '\0');
            if (uVar3 + 1 < 0xa0) {
              cVar6 = 'd';
              pcVar5 = str_1000a7b6;
              do {
                pcVar5 = pcVar5 + 1;
                acStack_c5[uVar3 + 1] = cVar6;
                uVar3 = uVar3 + 1;
                cVar6 = *pcVar5;
                if (cVar6 == '\0') break;
              } while (uVar3 < 0x9f);
            }
            acStack_c5[uVar3 + 1] = '\0';
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (acStack_c5[uVar3 + 1] != '\0');
            if (uVar8 < 0xa0) {
              acStack_c5[uVar3 + 1] = '=';
              uVar3 = uVar8;
            }
            acStack_c5[uVar3 + 1] = '\0';
            iVar2 = 8;
            do {
              uVar8 = local_f0[0] >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
              bVar7 = (byte)uVar8;
              if (uVar8 < 10) {
                bVar7 = bVar7 | 0x30;
              }
              else {
                bVar7 = bVar7 + 0x37;
              }
              uVar8 = 0;
              do {
                uVar3 = uVar8;
                uVar8 = uVar3 + 1;
              } while (acStack_c5[uVar3 + 1] != '\0');
              if (uVar3 + 1 < 0xa0) {
                acStack_c5[uVar3 + 1] = bVar7;
                acStack_c5[uVar3 + 2] = '\0';
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (acStack_c5[uVar3 + 1] != '\0');
            if (uVar3 + 1 < 0xa0) {
              cVar6 = ' ';
              pcVar5 = str_1000a7c0;
              do {
                pcVar5 = pcVar5 + 1;
                acStack_c5[uVar3 + 1] = cVar6;
                uVar3 = uVar3 + 1;
                cVar6 = *pcVar5;
                if (cVar6 == '\0') break;
              } while (uVar3 < 0x9f);
            }
          }
          else {
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (acStack_c5[uVar3 + 1] != '\0');
            if (uVar3 + 1 < 0xa0) {
              cVar6 = ' ';
              pcVar5 = str_1000a7d4;
              do {
                pcVar5 = pcVar5 + 1;
                acStack_c5[uVar3 + 1] = cVar6;
                uVar3 = uVar3 + 1;
                cVar6 = *pcVar5;
                if (cVar6 == '\0') break;
              } while (uVar3 < 0x9f);
            }
          }
          acStack_c5[uVar3 + 1] = '\0';
          if ((code *)api[3] != (code *)0x0) {
            (*(code *)api[3])(str_1000a7e8,&DAT_1000a7fb,acStack_c5 + 1);
          }
        }
        uVar3 = local_14;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (*(char *)((int)&local_4f0 + uVar9) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)((int)&local_4f0 + uVar9) = 0x20;
          uVar9 = uVar8;
        }
        *(undefined1 *)((int)&local_4f0 + uVar9) = 0;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (*(char *)((int)&local_4f0 + uVar9) != '\0');
        if (uVar9 + 1 < 0x400) {
          cVar6 = 'p';
          pcVar5 = str_1000a800;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_4f0 + uVar9) = cVar6;
            uVar9 = uVar9 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar9 < 0x3ff);
        }
        *(undefined1 *)((int)&local_4f0 + uVar9) = 0;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (*(char *)((int)&local_4f0 + uVar9) != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)((int)&local_4f0 + uVar9) = 0x3d;
          uVar9 = uVar8;
        }
        *(undefined1 *)((int)&local_4f0 + uVar9) = 0;
        if (uVar3 == 0) {
          uVar8 = 0;
          do {
            uVar3 = uVar8;
            uVar8 = uVar3 + 1;
          } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            *(undefined2 *)((int)&local_4f0 + uVar3) = 0x30;
          }
        }
        else {
          uVar8 = 0;
          do {
            acStack_c5[uVar8 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar8) break;
            bVar1 = 9 < uVar3;
            uVar3 = uVar3 / 10;
            uVar8 = uVar9;
          } while (bVar1);
          do {
            pcVar5 = acStack_c5 + uVar9;
            uVar9 = uVar9 - 1;
            uVar8 = 0;
            do {
              uVar3 = uVar8;
              uVar8 = uVar3 + 1;
            } while (*(char *)((int)&local_4f0 + uVar3) != '\0');
            if (uVar3 + 1 < 0x400) {
              *(char *)((int)&local_4f0 + uVar3) = *pcVar5;
              *(undefined1 *)((int)&local_4f0 + uVar3 + 1) = 0;
            }
          } while (uVar9 != 0);
        }
        iVar2 = 1;
        if ((code *)api[3] != (code *)0x0) {
          (*(code *)api[3])(&DAT_1000a865,str_1000a757,&local_4f0);
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

#undef DAT_1000a7fb
#undef DAT_1000a865
#undef str_1000a718
#undef str_1000a72a
#undef str_1000a757
#undef str_1000a76a
#undef str_1000a7b6
#undef str_1000a7c0
#undef str_1000a7d4
#undef str_1000a7e8
#undef str_1000a800
#undef str_1000a821
#undef str_1000a830
#undef str_1000a837
#undef str_1000a847
#undef str_1000a856
#undef cStack_4f1
#undef local_4f0
#undef bStack_f1
#undef local_f0
#undef acStack_c5
#undef local_60
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000a887
#define DAT_1000a887 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ebU)))
#undef DAT_1000ae16
#define DAT_1000ae16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87aU)))
#undef DAT_1000ae48
#define DAT_1000ae48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8acU)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a64U)))
#undef DAT_1000c400
#define DAT_1000c400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e64U)))
#undef str_1000a866
#define str_1000a866 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2caU)))
#undef str_1000a871
#define str_1000a871 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_1000ac89
#define str_1000ac89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6edU)))
#undef str_1000aca3
#define str_1000aca3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x707U)))
#undef str_1000acc2
#define str_1000acc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x726U)))
#undef str_1000acd9
#define str_1000acd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73dU)))
#undef str_1000acf3
#define str_1000acf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x757U)))
#undef str_1000ad13
#define str_1000ad13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x777U)))
#undef str_1000ad1f
#define str_1000ad1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x783U)))
#undef str_1000ad2b
#define str_1000ad2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78fU)))
#undef str_1000ad47
#define str_1000ad47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7abU)))
#undef str_1000ad5b
#define str_1000ad5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bfU)))
#undef str_1000ad69
#define str_1000ad69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cdU)))
#undef str_1000ad78
#define str_1000ad78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dcU)))
#undef str_1000ad82
#define str_1000ad82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e6U)))
#undef str_1000ad91
#define str_1000ad91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f5U)))
#undef str_1000ada2
#define str_1000ada2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x806U)))
#undef str_1000adb0
#define str_1000adb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x814U)))
#undef str_1000adba
#define str_1000adba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81eU)))
#undef str_1000adcb
#define str_1000adcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82fU)))
#undef str_1000addf
#define str_1000addf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x843U)))
#undef str_1000ade9
#define str_1000ade9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84dU)))
#undef str_1000adf8
#define str_1000adf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85cU)))
#undef str_1000ae04
#define str_1000ae04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x868U)))
#undef str_1000ae1a
#define str_1000ae1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87eU)))
#undef str_1000ae23
#define str_1000ae23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x887U)))
#undef str_1000ae2c
#define str_1000ae2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x890U)))
#undef str_1000ae34
#define str_1000ae34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x898U)))
#undef str_1000ae3f
#define str_1000ae3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a3U)))
#define local_4f4 (*(undefined4 *)(frame + 1052))
#define local_f4 (*(undefined4 *)(frame + 2076))
#define local_f0 (*(undefined4 *)(frame + 2080))
#define local_ec (*(undefined4 *)(frame + 2084))
#define local_e8 (*(undefined4 *)(frame + 2088))
#define local_e4 (*(uint *)(frame + 2092))
#define local_e0 (*(uint *)(frame + 2096))
#define local_dc (*(uint *)(frame + 2100))
#define local_d8 (*(uint *)(frame + 2104))
#define local_d4 (*(uint *)(frame + 2108))
#define local_d0 (*(uint *)(frame + 2112))
#define local_cc (*(uint *)(frame + 2116))
#define local_c8 (*(undefined4 *)(frame + 2120))
#define local_c4 (*(undefined4 *)(frame + 2124))
#define local_64 (*(uint (*)[3])(frame + 2220))
#define local_58 (*(uint *)(frame + 2232))
#define local_54 (*(uint *)(frame + 2236))
#define local_50 (*(uint *)(frame + 2240))
#define local_4c (*(uint *)(frame + 2244))
#define local_48 (*(uint *)(frame + 2248))
#define local_44 (*(uint *)(frame + 2252))
#define local_40 (*(uint *)(frame + 2256))
#define local_3c (*(uint *)(frame + 2260))
#define local_38 (*(uint *)(frame + 2264))
#define local_34 (*(byte * *)(frame + 2268))
#define local_30 (*(uint *)(frame + 2272))
#define local_2c (*(uint *)(frame + 2276))
#define local_28 (*(char * *)(frame + 2280))
#define local_24 (*(uint (*)[2])(frame + 2284))
#define local_1c (*(uint *)(frame + 2292))
#define local_18 (*(uint *)(frame + 2296))
#define local_14 (*(int * *)(frame + 2300))
#define acStack_8f5 (*(char (*)[1024])(frame + 27))
#define cStack_4f5 (*(char *)(frame + 1051))
#define cStack_65 (*(char *)(frame + 2219))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f30
 */

void recovered_10001f30(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  byte bVar6;
  ushort uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  bool bVar18;

  if (in_EDX[8] != 4) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8f5[1] = '\0';
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 1] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar12 = 'r';
    pcVar8 = str_1000a866;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar3 + 1] = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8f5[uVar3 + 1] = '\0';
  if ((*(short *)(in_EDX + 4) == -0x7f7a) && (in_EDX[9] == 3)) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8f5[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000a871;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_8f5[uVar3 + 1] = cVar12;
        uVar3 = uVar3 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
    acStack_8f5[uVar3 + 1] = '\0';
  }
  recovered_10003fd0((uint)(acStack_8f5 + 1),in_ECX,(ushort *)in_EDX,(int)(acStack_8f5 + 1));
  local_c4 = 0;
  local_64[0] = 0;
  local_58 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_54 = 0;
  local_50 = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  if (in_EDX == (byte *)0x0) {
    return;
  }
  local_14 = in_ECX;
  local_34 = in_EDX;
  if ((in_EDX[8] != 4) || (in_EDX[9] != 3)) goto LAB_10002212;
  uVar4 = *(uint *)(in_EDX + 0x14);
  if ((uVar4 & 1) == 0 && uVar4 != 0) {
    iVar9 = 0;
    if ((uVar4 & 6) == 4) {
      iVar9 = *(int *)(in_EDX + 0x18);
    }
    uVar4 = uVar4 & 0xfffffff0;
    if (uVar4 == 0 && iVar9 == 0) goto LAB_100021c1;
    local_c4 = 0;
    local_4f4 = 0;
    if ((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) goto LAB_100021c1;
    if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
      if (((!((uint)in_ECX[2] < 0x68 || iVar9 != 0)) && ((code *)in_ECX[0x19] != (code *)0x0)) &&
         (iVar9 = (*(code *)in_ECX[0x19])(uVar4,0,0x1000,&local_4f4), iVar9 != 0)) {
        local_c4 = local_4f4;
        goto LAB_10002186;
      }
      goto LAB_100021c1;
    }
    iVar9 = (*(code *)in_ECX[0x2e])(uVar4,iVar9,0x1000,&local_c4);
    if (iVar9 == 0) goto LAB_100021c1;
LAB_10002186:
    uVar4 = 0;
    uVar3 = 0;
    if (local_c4 != 0) {
      if (*local_14 == 0x54584b57) {
        if ((uint)local_14[2] < 0xc0) {
          if (0x6b < (uint)local_14[2]) goto LAB_10002fe9;
        }
        else {
          pcVar5 = (code *)local_14[0x2f];
          if (pcVar5 == (code *)0x0) {
LAB_10002fe9:
            pcVar5 = (code *)local_14[0x1a];
            if (pcVar5 == (code *)0x0) goto LAB_10003008;
          }
          (*pcVar5)(local_c4 + 8,4,local_64);
        }
      }
LAB_10003008:
      if ((local_64[0] & 1) == 0) {
        if (local_c4 == 0) goto LAB_1000305e;
        if (*local_14 == 0x54584b57) {
          if (0xc3 < (uint)local_14[2]) {
            pcVar5 = (code *)local_14[0x30];
            if (pcVar5 == (code *)0x0) goto LAB_1000303b;
LAB_10003042:
            (*pcVar5)(local_c4 + 8,4,local_64[0] | 1);
            uVar3 = local_c4;
            goto LAB_1000305e;
          }
          if (0x6f < (uint)local_14[2]) {
LAB_1000303b:
            pcVar5 = (code *)local_14[0x1b];
            if (pcVar5 != (code *)0x0) goto LAB_10003042;
          }
        }
      }
      uVar3 = local_c4;
    }
LAB_1000305e:
    local_4f4 = 0;
    local_18 = uVar3 + 8;
    bVar18 = true;
    do {
      if (uVar3 == 0) {
LAB_100030d5:
        if ((*local_14 == 0x54584b57) &&
           ((0x33 < (uint)local_14[2] && ((code *)local_14[0xc] != (code *)0x0)))) {
          (*(code *)local_14[0xc])(100);
        }
      }
      else if (*local_14 == 0x54584b57) {
        if ((uint)local_14[2] < 0xc0) {
          if ((uint)local_14[2] < 0x6c) goto LAB_100030d5;
LAB_100030aa:
          pcVar5 = (code *)local_14[0x1a];
          if (pcVar5 == (code *)0x0) goto LAB_100030d5;
        }
        else {
          pcVar5 = (code *)local_14[0x2f];
          if (pcVar5 == (code *)0x0) goto LAB_100030aa;
        }
        iVar9 = (*pcVar5)(local_18,1,&local_4f4);
        if ((iVar9 == 0) || ((local_4f4 & 1) == 0)) goto LAB_100030d5;
        break;
      }
      bVar18 = uVar4 < 99;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 100);
    piVar2 = local_14;
    if (bVar18) {
      if ((local_c4 != 0) && (*local_14 == 0x54584b57)) {
        if ((uint)local_14[2] < 0xc0) {
          if (0x6b < (uint)local_14[2]) goto LAB_1000317b;
        }
        else {
          pcVar5 = (code *)local_14[0x2f];
          if (pcVar5 == (code *)0x0) {
LAB_1000317b:
            pcVar5 = (code *)local_14[0x1a];
            if (pcVar5 == (code *)0x0) goto LAB_10003194;
          }
          (*pcVar5)(local_c4 + 0xe,2,&local_58);
        }
      }
LAB_10003194:
      if ((local_58 & 0x7fff) == 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar4;
          uVar4 = uVar3 + 1;
        } while (acStack_8f5[uVar3 + 1] != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000acc2;
          do {
            pcVar8 = pcVar8 + 1;
            acStack_8f5[uVar3 + 1] = cVar12;
            uVar3 = uVar3 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
      }
      else {
        if (((((*piVar2 == 0x54584b57) && (0x73 < (uint)piVar2[2])) &&
             ((code *)piVar2[0x1c] != (code *)0x0)) &&
            ((iVar9 = (*(code *)piVar2[0x1c])(0,&DAT_1000c000,0x400,&local_f4,&local_f0), iVar9 != 0
             && (*piVar2 == 0x54584b57)))) &&
           ((0x73 < (uint)piVar2[2] && ((code *)piVar2[0x1c] != (code *)0x0)))) {
          iVar9 = (*(code *)piVar2[0x1c])(0,&DAT_1000c400,0x800,&local_ec,&local_e8);
          piVar2 = local_14;
          if (iVar9 != 0) {
            iVar9 = -0x400;
            do {
              (&DAT_1000c400)[iVar9] = 0;
              iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
            iVar9 = -0x800;
            do {
              *(undefined1 *)(iVar9 + ((uintptr_t)pf_module_state + 0x2664U)) = 0;
              iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
            recovered_1000a030(local_14,local_c4,0x4c,(int)&local_e4);
            recovered_1000a030(piVar2,local_c4,0x5c,(int)&local_e0);
            recovered_1000a030(piVar2,local_c4,0x4e,(int)&local_54);
            recovered_1000a030(piVar2,local_c4,0x5e,(int)&local_50);
            recovered_1000a090(piVar2,local_c4,0x4c,local_e4 & 0xfffffffd);
            recovered_1000a090(piVar2,local_c4,0x5c,local_e0 & 0xfffffffd);
            recovered_1000a180(piVar2,local_c4,0x4c,2,0);
            recovered_1000a180(piVar2,local_c4,0x5c,2,0);
            piVar2 = local_14;
            uVar3 = local_50;
            uVar4 = local_54;
            if ((local_50 & 0x40) == 0 || (local_54 & 0x40) == 0) {
              if ((local_50 & 0x20) != 0 && (local_54 & 0x20) != 0) {
                uVar4 = 1;
                local_18 = 0x10;
                goto LAB_10003478;
              }
              if ((local_50 & 0x10) != 0 && (local_54 & 0x10) != 0) {
                uVar4 = 0;
                local_18 = 2;
                goto LAB_10003478;
              }
              recovered_10003c00((int)(acStack_8f5 + 1),0x400,str_1000acf3);
              recovered_10003ad0((int)(acStack_8f5 + 1),0x400,str_1000ad13,uVar4);
              pcVar8 = str_1000ad1f;
            }
            else {
              uVar4 = 2;
              local_18 = 0x100;
LAB_10003478:
              recovered_1000a0e0(local_14,local_c4,0x40,local_f4);
              recovered_1000a0e0(piVar2,local_c4,0x44,local_f0);
              recovered_1000a0e0(piVar2,local_c4,0x50,local_ec);
              recovered_1000a0e0(piVar2,local_c4,0x54,local_e8);
              recovered_1000a090(piVar2,local_c4,0x4e,local_54 & 0xf0 | uVar4);
              recovered_1000a090(piVar2,local_c4,0x5e,local_50 & 0xf0 | uVar4);
              recovered_1000a130(piVar2,local_c4,0x4a,0x8000);
              recovered_1000a130(piVar2,local_c4,0x4a,0);
              recovered_1000a130(piVar2,local_c4,0x48,0);
              recovered_1000a130(piVar2,local_c4,0x58,0x8000);
              recovered_1000a130(piVar2,local_c4,0x5a,1);
              recovered_1000a090(piVar2,local_c4,0x4d,0xff);
              recovered_1000a090(piVar2,local_c4,0x5d,0xff);
              if (((*piVar2 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
                 (((code *)local_14[0x1d] != (code *)0x0 &&
                  ((((*(code *)local_14[0x1d])(0,&DAT_1000c000,0x400), *local_14 == 0x54584b57 &&
                    (0x77 < (uint)local_14[2])) && ((code *)local_14[0x1d] != (code *)0x0)))))) {
                (*(code *)local_14[0x1d])(0,&DAT_1000c400,0x800);
              }
              piVar2 = local_14;
              recovered_1000a090(local_14,local_c4,0x5c,2);
              recovered_1000a090(piVar2,local_c4,0x4c,2);
              bVar15 = recovered_1000a180(piVar2,local_c4,0x4c,2,2);
              if ((CONCAT31(extraout_var,bVar15) == 0) ||
                 (bVar15 = recovered_1000a180(local_14,local_c4,0x5c,2,2),
                 CONCAT31(extraout_var_00,bVar15) == 0)) {
                recovered_10003c00((int)(acStack_8f5 + 1),0x400,str_1000ad2b);
                goto LAB_10002212;
              }
              uVar4 = 0xffffffff;
              uVar3 = 0;
              local_2c = 0;
              local_28 = (char *)0x0;
              local_1c = 0;
              local_48 = 0;
              local_44 = 0;
              local_c8 = 0;
              local_38 = 0;
              do {
                local_4f4 = 0;
                if ((local_58 >> (uVar3 & 0x1f) & 1) != 0) {
                  local_38 = local_38 + 1;
                  if (uVar4 == 0xffffffff) {
                    iVar9 = recovered_1000a270(local_14,local_c4,local_18,local_24,local_24 + 1,
                                               uVar3,0,0,&local_4f4);
                    piVar2 = local_14;
                    uVar4 = local_18;
                    if (iVar9 == 0) {
                      uVar4 = 0xffffffff;
                    }
                    else {
                      local_4c = 0;
                      local_40 = 0;
                      local_3c = 0;
                      local_c8 = local_4f4;
                      local_30 = uVar3;
                      recovered_1000a270(local_14,local_c4,local_18,local_24,local_24 + 1,uVar3,0,2,
                                         &local_4c);
                      recovered_1000a270(piVar2,local_c4,uVar4,local_24,local_24 + 1,local_30,0,4,
                                         &local_40);
                      local_1c = local_40 >> 0x10 & 0xff;
                      if (local_1c == 0) {
                        uVar4 = local_2c + 0xf;
                        uVar11 = 1;
                        local_1c = 0;
                        do {
                          local_cc = 0;
                          iVar9 = recovered_1000a270(local_14,local_c4,local_18,local_24,
                                                     local_24 + 1,uVar3,uVar11,5,&local_cc);
                          if ((iVar9 != 0) && (local_28 = (char *)local_cc, 1 < local_cc + 1)) {
                            local_2c = local_2c + uVar11;
                            local_1c = uVar11;
                            goto LAB_100037f3;
                          }
                          uVar11 = uVar11 + 1;
                        } while (uVar11 != 0x10);
                        local_44 = local_4c;
                        local_48 = local_40;
                        local_1c = 0;
                        local_28 = (char *)local_3c;
                        local_2c = uVar4;
                      }
                      else {
                        recovered_1000a270(local_14,local_c4,local_18,local_24,local_24 + 1,uVar3,
                                           local_1c,5,&local_3c);
                        local_28 = (char *)local_3c;
LAB_100037f3:
                        piVar2 = local_14;
                        uVar11 = local_1c;
                        local_44 = local_4c;
                        local_48 = local_40;
                        local_3c = (uint)local_28;
                        recovered_1000a270(local_14,local_c4,local_18,local_24,local_24 + 1,uVar3,
                                           local_1c,4,&local_d8);
                        uVar4 = local_30;
                        recovered_1000a270(piVar2,local_c4,local_18,local_24,local_24 + 1,local_30,
                                           uVar11,8,&local_dc);
                        uVar16 = local_18;
                        uVar11 = local_1c;
                        recovered_1000a270(piVar2,local_c4,local_18,local_24,local_24 + 1,uVar4,
                                           local_1c,10,&local_d4);
                        recovered_1000a270(local_14,local_c4,uVar16,local_24,local_24 + 1,local_30,
                                           uVar11,0xb,&local_d0);
                      }
                      uVar4 = uVar3;
                    }
                  }
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 != 4);
              pcVar8 = acStack_8f5 + 1;
              recovered_10003c00((int)pcVar8,0x400,str_1000ad47);
              recovered_10003c70((int)pcVar8,str_1000ad5b,local_38);
              recovered_10003c70((int)pcVar8,str_1000ad69,local_18);
              if (uVar4 == 0xffffffff) goto LAB_10002212;
              recovered_10003c70((int)pcVar8,str_1000ad78,uVar4);
              recovered_10003ad0((int)pcVar8,0x400,str_1000ad82,local_c8);
              recovered_10003ad0((int)pcVar8,0x400,str_1000ad91,local_44);
              recovered_10003ad0((int)pcVar8,0x400,str_1000ada2,local_48);
              recovered_10003c70((int)pcVar8,str_1000adb0,local_1c);
              recovered_10003ad0((int)pcVar8,0x400,str_1000adba,(uint)local_28);
              if (local_2c != 0) {
                recovered_10003c70((int)(acStack_8f5 + 1),str_1000adcb,local_2c);
              }
              if (local_1c == 0) goto LAB_10002212;
              recovered_10003ad0((int)pcVar8,0x400,str_1000addf,local_dc);
              recovered_10003ad0((int)pcVar8,0x400,str_1000ade9,local_d8);
              recovered_10003ad0((int)pcVar8,0x400,str_1000adf8,local_d4);
              pcVar8 = str_1000ae04;
              uVar3 = local_d0;
            }
            recovered_10003ad0((int)(acStack_8f5 + 1),0x400,pcVar8,uVar3);
            goto LAB_10002212;
          }
        }
        uVar4 = 0;
        do {
          uVar3 = uVar4;
          uVar4 = uVar3 + 1;
        } while (acStack_8f5[uVar3 + 1] != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000acd9;
          do {
            pcVar8 = pcVar8 + 1;
            acStack_8f5[uVar3 + 1] = cVar12;
            uVar3 = uVar3 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
      }
    }
    else {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8f5[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000aca3;
        do {
          pcVar8 = pcVar8 + 1;
          acStack_8f5[uVar3 + 1] = cVar12;
          uVar3 = uVar3 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
    }
  }
  else {
LAB_100021c1:
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8f5[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000ac89;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_8f5[uVar3 + 1] = cVar12;
        uVar3 = uVar3 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
  }
  acStack_8f5[uVar3 + 1] = '\0';
LAB_10002212:
  pbVar17 = local_34;
  local_28 = recovered_10009d30((int)local_34);
  local_c4 = local_c4 & 0xffffff00;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_64 + (uVar3 - 0x60)) != '\0');
  if (uVar3 + 1 < 0x60) {
    cVar12 = '/';
    pcVar8 = &DAT_1000a887;
    do {
      *(char *)((int)local_64 + (uVar3 - 0x60)) = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
      pcVar8 = pcVar8 + 1;
    } while (uVar3 < 0x5f);
  }
  *(undefined1 *)((int)local_64 + (uVar3 - 0x60)) = 0;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_64 + (uVar3 - 0x60)) != '\0');
  if (uVar4 < 0x60) {
    *(undefined1 *)((int)local_64 + (uVar3 - 0x60)) = 0x2f;
    uVar3 = uVar4;
  }
  *(undefined1 *)((int)local_64 + (uVar3 - 0x60)) = 0;
  bVar15 = *pbVar17;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_64 + (uVar3 - 0x60)) != '\0');
  if (bVar15 < 0xa0) {
    bVar14 = bVar15 >> 4 | 0x30;
  }
  else {
    bVar14 = (bVar15 >> 4) + 0x37;
  }
  if (uVar3 + 1 < 0x60) {
    *(byte *)((int)local_64 + (uVar3 - 0x60)) = bVar14;
    *(undefined1 *)((int)local_64 + (uVar3 - 0x5f)) = 0;
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(char *)((int)local_64 + (uVar3 - 0x60)) != '\0');
  bVar6 = (byte)(bVar15 & 0xffff0f);
  if (bVar6 < 10) {
    uVar4 = (bVar15 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar4 = (uint)(byte)(bVar6 + 0x37) << 8;
  }
  uVar13 = (undefined1)(uVar4 >> 8);
  if (uVar3 + 1 < 0x60) {
    *(undefined1 *)((int)local_64 + (uVar3 - 0x60)) = uVar13;
    *(undefined1 *)((int)local_64 + (uVar3 - 0x5f)) = 0;
  }
  uVar3 = 0;
  do {
    uVar11 = uVar3;
    uVar3 = uVar11 + 1;
  } while (*(char *)((int)local_64 + (uVar11 - 0x60)) != '\0');
  if (uVar3 < 0x60) {
    *(undefined1 *)((int)local_64 + (uVar11 - 0x60)) = 0x3a;
    uVar11 = uVar3;
  }
  *(undefined1 *)((int)local_64 + (uVar11 - 0x60)) = 0;
  bVar15 = pbVar17[1];
  uVar3 = 0;
  do {
    uVar11 = uVar3;
    uVar3 = uVar11 + 1;
  } while (*(char *)((int)local_64 + (uVar11 - 0x60)) != '\0');
  if (bVar15 < 0xa0) {
    bVar6 = bVar15 >> 4 | 0x30;
  }
  else {
    bVar6 = (bVar15 >> 4) + 0x37;
  }
  if (uVar11 + 1 < 0x60) {
    *(byte *)((int)local_64 + (uVar11 - 0x60)) = bVar6;
    *(undefined1 *)((int)local_64 + (uVar11 - 0x5f)) = 0;
  }
  bVar15 = bVar15 & 0xf;
  uVar3 = 0;
  do {
    uVar11 = uVar3;
    uVar3 = uVar11 + 1;
  } while (*(char *)((int)local_64 + (uVar11 - 0x60)) != '\0');
  if (bVar15 < 10) {
    bVar15 = bVar15 | 0x30;
  }
  else {
    bVar15 = bVar15 + 0x37;
  }
  if (uVar11 + 1 < 0x60) {
    *(byte *)((int)local_64 + (uVar11 - 0x60)) = bVar15;
    *(undefined1 *)((int)local_64 + (uVar11 - 0x5f)) = 0;
  }
  uVar3 = 0;
  do {
    uVar11 = uVar3;
    uVar3 = uVar11 + 1;
  } while (*(char *)((int)local_64 + (uVar11 - 0x60)) != '\0');
  if (uVar3 < 0x60) {
    *(undefined1 *)((int)local_64 + (uVar11 - 0x60)) = 0x2e;
    uVar11 = uVar3;
  }
  *(undefined1 *)((int)local_64 + (uVar11 - 0x60)) = 0;
  uVar3 = (uint)pbVar17[2];
  local_18 = CONCAT31(PF_PART3(local_18, 1),bVar6);
  if (uVar3 == 0) {
    uVar11 = 0;
    do {
      uVar16 = uVar11;
      uVar11 = uVar16 + 1;
    } while (*(char *)((int)local_64 + (uVar16 - 0x60)) != '\0');
    if (uVar16 + 1 < 0x60) {
      *(undefined2 *)((int)local_64 + (uVar16 - 0x60)) = 0x30;
    }
  }
  else {
    local_30 = CONCAT31(PF_PART3(local_30, 1),bVar15);
    local_38 = CONCAT31(PF_PART3(local_38, 1),bVar14);
    local_1c = CONCAT31(PF_PART3(local_1c, 1),uVar13);
    uVar4 = uVar3;
    uVar11 = 0;
    do {
      *(byte *)((int)local_64 + uVar11) = (byte)(uVar4 % 10) | 0x30;
      uVar16 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar18 = 9 < uVar4;
      uVar4 = uVar4 / 10;
      uVar11 = uVar16;
    } while (bVar18);
    uVar4 = (local_1c & 0xff) << 8;
    bVar14 = (byte)local_38;
    bVar15 = (byte)local_30;
    do {
      iVar9 = uVar16 - 1;
      uVar16 = uVar16 - 1;
      uVar11 = 0;
      do {
        uVar10 = uVar11;
        uVar11 = uVar10 + 1;
      } while (*(char *)((int)local_64 + (uVar10 - 0x60)) != '\0');
      if (uVar10 + 1 < 0x60) {
        *(undefined1 *)((int)local_64 + (uVar10 - 0x60)) = *(undefined1 *)((int)local_64 + iVar9);
        *(undefined1 *)((int)local_64 + (uVar10 - 0x5f)) = 0;
      }
    } while (uVar16 != 0);
  }
  local_4f4 = local_4f4 & 0xffffff00;
  uVar11 = 0;
  do {
    uVar16 = uVar11;
    uVar11 = uVar16 + 1;
  } while (acStack_8f5[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    uVar4 = CONCAT31((int3)(uVar4 >> 8),0x70);
    pcVar8 = &DAT_1000ae16;
    do {
      acStack_8f5[uVar16 + 0x401] = (char)uVar4;
      uVar16 = uVar16 + 1;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),*pcVar8);
      if (*pcVar8 == '\0') break;
      pcVar8 = pcVar8 + 1;
    } while (uVar16 < 0x3ff);
  }
  acStack_8f5[uVar16 + 0x401] = '\0';
  uVar11 = 0;
  do {
    uVar16 = uVar11;
    uVar11 = uVar16 + 1;
  } while (acStack_8f5[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    acStack_8f5[uVar16 + 0x401] = bVar14;
    acStack_8f5[uVar16 + 0x402] = '\0';
  }
  uVar11 = 0;
  do {
    uVar16 = uVar11;
    uVar11 = uVar16 + 1;
  } while (acStack_8f5[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    acStack_8f5[uVar16 + 0x401] = (char)(uVar4 >> 8);
    acStack_8f5[uVar16 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = ':';
    uVar11 = uVar4;
  }
  acStack_8f5[uVar11 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar11 + 1 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = (char)local_18;
    acStack_8f5[uVar11 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar11 + 1 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = bVar15;
    acStack_8f5[uVar11 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = '.';
    uVar11 = uVar4;
  }
  acStack_8f5[uVar11 + 0x401] = '\0';
  pbVar17 = local_34;
  if (uVar3 == 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8f5[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      (acStack_8f5 + uVar3 + 0x401)[0] = '0';
      (acStack_8f5 + uVar3 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar4 = 0;
    do {
      *(byte *)((int)local_64 + uVar4) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
      pbVar17 = local_34;
      uVar11 = uVar4 + 1;
      if (8 < uVar4) break;
      bVar18 = 9 < uVar3;
      uVar4 = uVar11;
      uVar3 = uVar3 / 10;
    } while (bVar18);
    do {
      iVar9 = uVar11 - 1;
      uVar11 = uVar11 - 1;
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
      } while (acStack_8f5[uVar3 + 0x401] != '\0');
      if (uVar3 + 1 < 0x400) {
        acStack_8f5[uVar3 + 0x401] = *(char *)((int)local_64 + iVar9);
        acStack_8f5[uVar3 + 0x402] = '\0';
      }
    } while (uVar11 != 0);
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar12 = ' ';
    pcVar8 = str_1000ae1a;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar3 + 0x401] = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  uVar1 = *(ushort *)(pbVar17 + 4);
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)(uVar1 >> 8);
    if (uVar1 < 0xa000) {
      bVar15 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar7 = uVar1 >> 8 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar7 = uVar1 >> 4 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)(uVar1 & 0xf);
    if ((uVar1 & 0xf) < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar12 = ' ';
    pcVar8 = str_1000ae23;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar3 + 0x401] = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  uVar1 = *(ushort *)(pbVar17 + 6);
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)(uVar1 >> 8);
    if (uVar1 < 0xa000) {
      bVar15 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar7 = uVar1 >> 8 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar7 = uVar1 >> 4 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar15 = (byte)(uVar1 & 0xf);
    if ((uVar1 & 0xf) < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar12 = ' ';
    pcVar8 = str_1000ae2c;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar3 + 0x401] = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  bVar15 = pbVar17[8];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 0xa0) {
      bVar14 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar14;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  bVar15 = bVar15 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar3 + 0x401] = '.';
    uVar3 = uVar4;
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  bVar15 = pbVar17[9];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 0xa0) {
      bVar14 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar14;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  bVar15 = bVar15 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar3 + 0x401] = '.';
    uVar3 = uVar4;
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  bVar15 = pbVar17[10];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 0xa0) {
      bVar14 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar14;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  bVar15 = bVar15 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar12 = ' ';
    pcVar8 = str_1000ae34;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar3 + 0x401] = cVar12;
      uVar3 = uVar3 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8f5[uVar3 + 0x401] = '\0';
  bVar15 = pbVar17[0xb];
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 0xa0) {
      bVar14 = bVar15 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar15 >> 4) + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar14;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  bVar15 = bVar15 & 0xf;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (acStack_8f5[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    if (bVar15 < 10) {
      bVar15 = bVar15 | 0x30;
    }
    else {
      bVar15 = bVar15 + 0x37;
    }
    acStack_8f5[uVar3 + 0x401] = bVar15;
    acStack_8f5[uVar3 + 0x402] = '\0';
  }
  uVar3 = *(uint *)(pbVar17 + 0x10);
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = ' ';
    uVar11 = uVar4;
  }
  acStack_8f5[uVar11 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar11 + 1 < 0x400) {
    cVar12 = 'c';
    pcVar8 = str_1000ae3f;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8f5[uVar11 + 0x401] = cVar12;
      uVar11 = uVar11 + 1;
      cVar12 = *pcVar8;
      if (cVar12 == '\0') break;
    } while (uVar11 < 0x3ff);
  }
  acStack_8f5[uVar11 + 0x401] = '\0';
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 1;
  } while (acStack_8f5[uVar11 + 0x401] != '\0');
  if (uVar4 < 0x400) {
    acStack_8f5[uVar11 + 0x401] = '=';
    uVar11 = uVar4;
  }
  acStack_8f5[uVar11 + 0x401] = '\0';
  iVar9 = 8;
  do {
    uVar11 = uVar3 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
    bVar14 = (byte)uVar11;
    bVar15 = bVar14 + 0x37;
    uVar4 = 0;
    do {
      uVar16 = uVar4;
      uVar4 = uVar16 + 1;
    } while (acStack_8f5[uVar16 + 0x401] != '\0');
    if (uVar16 + 1 < 0x400) {
      if (uVar11 < 10) {
        bVar15 = bVar14 | 0x30;
      }
      acStack_8f5[uVar16 + 0x401] = bVar15;
      acStack_8f5[uVar16 + 0x402] = '\0';
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar4 = 0;
  pbVar17 = local_34;
  do {
    local_18 = uVar4;
    uVar4 = *(uint *)(pbVar17 + uVar4 * 4 + 0x14);
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        uVar11 = uVar3;
        uVar3 = uVar11 + 1;
      } while (acStack_8f5[uVar11 + 0x401] != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = &DAT_1000ae48;
        do {
          acStack_8f5[uVar11 + 0x401] = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
          pcVar8 = pcVar8 + 1;
        } while (uVar11 < 0x3ff);
      }
      acStack_8f5[uVar11 + 0x401] = '\0';
      if (local_18 == 0) {
        uVar3 = 0;
        do {
          uVar11 = uVar3;
          uVar3 = uVar11 + 1;
        } while (acStack_8f5[uVar11 + 0x401] != '\0');
        if (uVar11 + 1 < 0x400) {
          (acStack_8f5 + uVar11 + 0x401)[0] = '0';
          (acStack_8f5 + uVar11 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar3 = local_18;
        uVar11 = 0;
        do {
          *(byte *)((int)local_64 + uVar11) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
          uVar16 = uVar11 + 1;
          if (8 < uVar11) break;
          bVar18 = 9 < uVar3;
          uVar3 = uVar3 / 10;
          uVar11 = uVar16;
        } while (bVar18);
        do {
          iVar9 = uVar16 - 1;
          uVar16 = uVar16 - 1;
          uVar3 = 0;
          do {
            uVar11 = uVar3;
            uVar3 = uVar11 + 1;
          } while (acStack_8f5[uVar11 + 0x401] != '\0');
          if (uVar11 + 1 < 0x400) {
            acStack_8f5[uVar11 + 0x401] = *(char *)((int)local_64 + iVar9);
            acStack_8f5[uVar11 + 0x402] = '\0';
          }
        } while (uVar16 != 0);
        pbVar17 = local_34;
      }
      uVar3 = 0;
      do {
        uVar11 = uVar3;
        uVar3 = uVar11 + 1;
      } while (acStack_8f5[uVar11 + 0x401] != '\0');
      if (uVar3 < 0x400) {
        acStack_8f5[uVar11 + 0x401] = '=';
        uVar11 = uVar3;
      }
      acStack_8f5[uVar11 + 0x401] = '\0';
      iVar9 = 8;
      do {
        uVar11 = uVar4 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
        bVar14 = (byte)uVar11;
        bVar15 = bVar14 + 0x37;
        uVar3 = 0;
        do {
          uVar16 = uVar3;
          uVar3 = uVar16 + 1;
        } while (acStack_8f5[uVar16 + 0x401] != '\0');
        if (uVar16 + 1 < 0x400) {
          if (uVar11 < 10) {
            bVar15 = bVar14 | 0x30;
          }
          acStack_8f5[uVar16 + 0x401] = bVar15;
          acStack_8f5[uVar16 + 0x402] = '\0';
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    piVar2 = local_14;
    uVar4 = local_18 + 1;
  } while (uVar4 != 6);
  if (acStack_8f5[1] != '\0') {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8f5[uVar3 + 0x401] != '\0');
    if (uVar4 < 0x400) {
      acStack_8f5[uVar3 + 0x401] = ' ';
      uVar3 = uVar4;
    }
    acStack_8f5[uVar3 + 0x401] = '\0';
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (acStack_8f5[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      pcVar8 = acStack_8f5 + 2;
      cVar12 = acStack_8f5[1];
      do {
        acStack_8f5[uVar3 + 0x401] = cVar12;
        uVar3 = uVar3 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar3 < 0x3ff);
    }
    acStack_8f5[uVar3 + 0x401] = '\0';
  }
  if ((piVar2 != (int *)0x0) && (pcVar5 = (code *)piVar2[3], pcVar5 != (code *)0x0)) {
    (*pcVar5)(&local_c4,local_28,&local_4f4);
  }
  return;
}

#undef DAT_1000a887
#undef DAT_1000ae16
#undef DAT_1000ae48
#undef DAT_1000c000
#undef DAT_1000c400
#undef str_1000a866
#undef str_1000a871
#undef str_1000ac89
#undef str_1000aca3
#undef str_1000acc2
#undef str_1000acd9
#undef str_1000acf3
#undef str_1000ad13
#undef str_1000ad1f
#undef str_1000ad2b
#undef str_1000ad47
#undef str_1000ad5b
#undef str_1000ad69
#undef str_1000ad78
#undef str_1000ad82
#undef str_1000ad91
#undef str_1000ada2
#undef str_1000adb0
#undef str_1000adba
#undef str_1000adcb
#undef str_1000addf
#undef str_1000ade9
#undef str_1000adf8
#undef str_1000ae04
#undef str_1000ae1a
#undef str_1000ae23
#undef str_1000ae2c
#undef str_1000ae34
#undef str_1000ae3f
#undef local_4f4
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_64
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
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef acStack_8f5
#undef cStack_4f5
#undef cStack_65

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad0
 */

void recovered_10003ad0(int in_ECX,uint in_EDX,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  if (in_ECX != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x20;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (param_3 != (char *)0x0) {
      cVar3 = *param_3;
      if (uVar2 + 1 < in_EDX && cVar3 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(in_ECX + uVar2) = cVar3;
          cVar3 = *param_3;
          uVar5 = uVar2 + 1;
          if (cVar3 == '\0') break;
          uVar6 = uVar2 + 2;
          uVar2 = uVar5;
        } while (uVar6 < in_EDX);
      }
      else {
        uVar5 = uVar2;
      }
      *(undefined1 *)(in_ECX + uVar5) = 0;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x3d;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
  }
  iVar7 = 8;
  do {
    uVar5 = param_4 >> ((char)iVar7 * '\x04' - 4U & 0x1f) & 0xf;
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
      if (uVar5 < in_EDX) {
        *(byte *)(in_ECX + -1 + uVar5) = bVar4;
        *(undefined1 *)(in_ECX + uVar5) = 0;
      }
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c00
 */

void recovered_10003c00(int in_ECX,uint in_EDX,char *param_3)

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


#define abStack_1c (*(byte (*)[11])(frame + 20))
#define local_11 (*(bool *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c70
 */

void recovered_10003c70(int in_ECX,char *in_EDX,uint param_3)

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

#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

undefined4
recovered_10003dc0(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef DAT_1000ab3e
#define DAT_1000ab3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#undef DAT_1000ab46
#define DAT_1000ab46 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5aaU)))
#undef DAT_1000ab79
#define DAT_1000ab79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ddU)))
#undef DAT_1000ab81
#define DAT_1000ab81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e5U)))
#undef DAT_1000ab89
#define DAT_1000ab89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edU)))
#undef DAT_1000ab9d
#define DAT_1000ab9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x601U)))
#undef DAT_1000aba5
#define DAT_1000aba5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x609U)))
#undef DAT_1000abad
#define DAT_1000abad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x611U)))
#undef DAT_1000abb5
#define DAT_1000abb5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x619U)))
#undef DAT_1000abc8
#define DAT_1000abc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62cU)))
#undef DAT_1000ac7c
#define DAT_1000ac7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef str_1000a7d4
#define str_1000a7d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_1000a891
#define str_1000a891 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f5U)))
#undef str_1000a8a1
#define str_1000a8a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x305U)))
#undef str_1000a8b9
#define str_1000a8b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000a8d1
#define str_1000a8d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x335U)))
#undef str_1000a8ea
#define str_1000a8ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34eU)))
#undef str_1000a8fb
#define str_1000a8fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_1000a90b
#define str_1000a90b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#undef str_1000a91a
#define str_1000a91a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1000a923
#define str_1000a923 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x387U)))
#undef str_1000a93f
#define str_1000a93f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a3U)))
#undef str_1000a94a
#define str_1000a94a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_1000a95a
#define str_1000a95a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_1000a961
#define str_1000a961 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#undef str_1000a971
#define str_1000a971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d5U)))
#undef str_1000a97e
#define str_1000a97e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#undef str_1000a994
#define str_1000a994 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f8U)))
#undef str_1000a9aa
#define str_1000a9aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40eU)))
#undef str_1000a9c0
#define str_1000a9c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_1000a9d6
#define str_1000a9d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
#undef str_1000a9ef
#define str_1000a9ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_1000aa07
#define str_1000aa07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46bU)))
#undef str_1000aa14
#define str_1000aa14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#undef str_1000aa25
#define str_1000aa25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x489U)))
#undef str_1000aa39
#define str_1000aa39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_1000aa49
#define str_1000aa49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4adU)))
#undef str_1000aa60
#define str_1000aa60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_1000aa73
#define str_1000aa73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d7U)))
#undef str_1000aa7d
#define str_1000aa7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e1U)))
#undef str_1000aa90
#define str_1000aa90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
#undef str_1000aaa7
#define str_1000aaa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50bU)))
#undef str_1000aab3
#define str_1000aab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#undef str_1000aabf
#define str_1000aabf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x523U)))
#undef str_1000aacc
#define str_1000aacc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x530U)))
#undef str_1000aad6
#define str_1000aad6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53aU)))
#undef str_1000aaea
#define str_1000aaea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54eU)))
#undef str_1000aaf9
#define str_1000aaf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_1000ab0c
#define str_1000ab0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_1000ab1e
#define str_1000ab1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x582U)))
#undef str_1000ab34
#define str_1000ab34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_1000ab4d
#define str_1000ab4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
#undef str_1000ab57
#define str_1000ab57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_1000ab63
#define str_1000ab63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c7U)))
#undef str_1000ab90
#define str_1000ab90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f4U)))
#undef str_1000abbc
#define str_1000abbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x620U)))
#undef str_1000abcd
#define str_1000abcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x631U)))
#undef str_1000abd7
#define str_1000abd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63bU)))
#undef str_1000abec
#define str_1000abec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x650U)))
#undef str_1000abfd
#define str_1000abfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x661U)))
#undef str_1000ac09
#define str_1000ac09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66dU)))
#undef str_1000ac15
#define str_1000ac15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#undef str_1000ac21
#define str_1000ac21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef str_1000ac30
#define str_1000ac30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x694U)))
#undef str_1000ac3a
#define str_1000ac3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69eU)))
#undef str_1000ac48
#define str_1000ac48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6acU)))
#undef str_1000ac59
#define str_1000ac59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#undef str_1000ac65
#define str_1000ac65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c9U)))
#undef str_1000ac71
#define str_1000ac71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d5U)))
#undef str_1000ac80
#define str_1000ac80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e4U)))
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
 * Address: 0x10003fd0
 */

void recovered_10003fd0(uint in_EAX,int *in_ECX,ushort *in_EDX,int param_4)

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
LAB_100040d7:
    if (param_4 != 0) {
      uVar16 = 0;
      do {
        uVar8 = uVar16;
        uVar16 = uVar8 + 1;
      } while (*(char *)(param_4 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_1000a8a1;
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
joined_r0x1000412e:
    local_44 = 0;
    if (bVar19) {
LAB_10004134:
      local_2c = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      if (local_18 == (ushort *)0x0) {
        uVar16 = 1;
        if (local_44 == 0) {
          uVar16 = 0;
        }
        goto LAB_1000600e;
      }
      if (((char)local_18[4] == '\x01') && (*(char *)((int)local_18 + 9) == '\x06')) {
        if (((((*(uint *)(local_18 + 0x12) & 7) != 4) &&
             ((uVar16 = *(uint *)(local_18 + 0x14), (uVar16 & 6) != 4 && (uVar16 != 0)))) &&
            ((uVar16 & 1) == 0)) && (uVar16 = uVar16 & 0xfffffff0, uVar16 != 0)) {
          local_28 = 0;
          local_a8 = 0;
          if (((char)local_34 == '\0') && (*in_ECX == 0x54584b57)) {
            if (0xbb < (uint)in_ECX[2]) {
              if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_10005ac8;
              iVar3 = (*(code *)in_ECX[0x2e])(uVar16,0,0x1000,&local_28);
              if (iVar3 == 0) goto LAB_10004176;
              local_1c = local_28;
LAB_10005afe:
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
                  pcVar9 = str_1000ab34;
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
                  if (0x6b < (uint)in_ECX[2]) goto LAB_1000746f;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_1000746f:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_100074a1;
                  }
                  (*pcVar6)(local_1c,4,&local_2c);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007ef1;
                }
LAB_100074a1:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007a0d;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_10007a0d:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10007a43;
                  }
                  local_28 = local_1c;
                  (*pcVar6)(local_1c + 4,4,&local_38);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007ef1;
                }
LAB_10007a43:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007d82;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_10007d82:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10007db8;
                  }
                  local_28 = local_1c;
                  (*pcVar6)(local_1c + 0xc,4,&local_40);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007ef1;
                }
LAB_10007db8:
                local_28 = local_1c;
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10007ed5;
                }
                else {
                  pcVar6 = (code *)in_ECX[0x2f];
                  if (pcVar6 == (code *)0x0) {
LAB_10007ed5:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10007ef1;
                  }
                  (*pcVar6)(local_1c + 0x10,4,&local_48);
                }
              }
LAB_10007ef1:
              if ((((int)local_38 < 0) || (local_28 == 0)) || (*in_ECX != 0x54584b57))
              goto LAB_10007f95;
              iVar3 = local_28 + 4;
              uVar16 = in_ECX[2];
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) goto LAB_10007f32;
LAB_10007f6b:
                if (uVar16 < 0x6c) goto LAB_10007f95;
LAB_10007f7f:
                pcVar6 = (code *)in_ECX[0x1a];
                if (pcVar6 == (code *)0x0) goto LAB_10007f95;
              }
              else {
                pcVar6 = (code *)in_ECX[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_10007f32:
                  pcVar6 = (code *)in_ECX[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10007f39;
                }
                else {
LAB_10007f39:
                  (*pcVar6)(iVar3,4,local_38 | 0x80000000);
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10007f95;
                  iVar3 = local_28 + 4;
                }
                uVar16 = in_ECX[2];
                if (uVar16 < 0xc0) goto LAB_10007f6b;
                pcVar6 = (code *)in_ECX[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10007f7f;
              }
              (*pcVar6)(iVar3,4,&local_38);
LAB_10007f95:
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
                  pcVar9 = &DAT_1000ab3e;
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
LAB_10008016:
              do {
                uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                bVar13 = (byte)uVar16;
                if (uVar16 < 10) {
                  bVar13 = bVar13 | 0x30;
                }
                else {
                  bVar13 = bVar13 + 0x37;
                }
                if (param_4 == 0) goto LAB_1000805b;
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
                pcVar9 = &DAT_1000ab46;
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
LAB_100080d9:
              iVar3 = 8;
LAB_100080e3:
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
                if (iVar3 == 0) goto LAB_100081a9;
                goto LAB_100080e3;
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
              if (iVar3 != 0) goto LAB_100080e3;
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
                pcVar9 = str_1000ab4d;
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
LAB_100081a9:
              iVar3 = 8;
LAB_100081b3:
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
                if (iVar3 == 0) goto LAB_10008279;
                goto LAB_100081b3;
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
              if (iVar3 != 0) goto LAB_100081b3;
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
                pcVar9 = str_1000ab57;
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
LAB_10008279:
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
              goto LAB_100041dc;
            }
            if (0x67 < (uint)in_ECX[2]) {
LAB_10005ac8:
              if (((code *)in_ECX[0x19] != (code *)0x0) &&
                 (iVar3 = (*(code *)in_ECX[0x19])(uVar16,0,0x1000,&local_a8), iVar3 != 0)) {
                local_1c = local_a8;
                local_28 = local_a8;
                goto LAB_10005afe;
              }
            }
          }
        }
LAB_10004176:
        if (param_4 == 0) goto LAB_100041cc;
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_1000ab1e;
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
LAB_100041cc:
        uVar16 = 0;
      }
LAB_100041dc:
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
                  goto LAB_10004e14;
                }
              }
              else {
                iVar3 = (*(code *)in_ECX[0x2e])(uVar8,iVar3,0x1000,&local_28);
                in_ECX = local_14;
                if (iVar3 != 0) {
                  local_30 = uVar16;
LAB_10004e14:
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
                      pcVar9 = &DAT_1000ab79;
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
LAB_100075f9:
                  }
                  else if (*in_ECX == 0x54584b57) {
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_10007193;
LAB_10007447:
                      if ((uint)in_ECX[2] < 0xc0) {
                        if (0x6b < (uint)in_ECX[2]) goto LAB_100075d9;
LAB_100075f7:
                        uVar8 = local_28;
                      }
                      else {
                        pcVar6 = (code *)in_ECX[0x2f];
                        if (pcVar6 == (code *)0x0) {
LAB_100075d9:
                          pcVar6 = (code *)in_ECX[0x1a];
                          if (pcVar6 == (code *)0x0) goto LAB_100075f7;
                        }
                        (*pcVar6)(local_28 + 8,4,&local_38);
                        uVar8 = local_28;
                      }
                      goto LAB_100075f9;
                    }
                    pcVar6 = (code *)in_ECX[0x2f];
                    if (pcVar6 == (code *)0x0) {
LAB_10007193:
                      pcVar6 = (code *)in_ECX[0x1a];
                      if (pcVar6 == (code *)0x0) goto LAB_10007447;
                    }
                    (*pcVar6)(local_28,4,&local_2c);
                    uVar8 = 0;
                    if (local_28 != 0) {
                      uVar8 = local_28;
                      if (*in_ECX == 0x54584b57) goto LAB_10007447;
                    }
                  }
                  else {
                    uVar8 = local_28;
                  }
                  if ((local_38 & 1) == 0) {
                    uVar16 = 0;
                    if (uVar8 != 0) {
                      if (*in_ECX != 0x54584b57) goto LAB_10007674;
                      local_1c = uVar8 + 8;
                      uVar5 = in_ECX[2];
                      if (uVar5 < 0xc4) {
                        if (0x6f < uVar5) goto LAB_100078f2;
LAB_10007940:
                        uVar16 = uVar8;
                        if (0x6b < uVar5) {
LAB_10007ea5:
                          pcVar6 = (code *)in_ECX[0x1a];
                          uVar16 = uVar8;
                          if (pcVar6 != (code *)0x0) goto LAB_10007eb2;
                        }
                      }
                      else {
                        pcVar6 = (code *)in_ECX[0x30];
                        if (pcVar6 == (code *)0x0) {
LAB_100078f2:
                          pcVar6 = (code *)in_ECX[0x1b];
                          if (pcVar6 != (code *)0x0) goto LAB_100078f9;
                        }
                        else {
LAB_100078f9:
                          (*pcVar6)(local_1c,4,local_38 | 1);
                          uVar16 = 0;
                          if (local_28 == 0) goto LAB_10007638;
                          if (*in_ECX != 0x54584b57) goto LAB_10007674;
                          local_1c = local_28 + 8;
                          uVar8 = local_28;
                        }
                        uVar5 = in_ECX[2];
                        if (uVar5 < 0xc0) goto LAB_10007940;
                        pcVar6 = (code *)in_ECX[0x2f];
                        if (pcVar6 == (code *)0x0) goto LAB_10007ea5;
LAB_10007eb2:
                        (*pcVar6)(local_1c,4,&local_38);
                        uVar16 = local_28;
                      }
                    }
                  }
                  else {
                    uVar16 = uVar8;
                  }
LAB_10007638:
                  if (*in_ECX != 0x54584b57) goto LAB_10007674;
                  if ((uint)in_ECX[2] < 0xc0) {
                    if ((uint)in_ECX[2] < 0x6c) goto LAB_10007674;
LAB_1000765b:
                    pcVar6 = (code *)in_ECX[0x1a];
                    if (pcVar6 == (code *)0x0) goto LAB_10007674;
                  }
                  else {
                    pcVar6 = (code *)in_ECX[0x2f];
                    if (pcVar6 == (code *)0x0) goto LAB_1000765b;
                  }
                  (*pcVar6)(uVar16 + 0xe,2,&local_40);
LAB_10007674:
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
                      pcVar9 = &DAT_1000ab81;
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
LAB_100076f5:
                  do {
                    uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar13 = (byte)uVar16;
                    if (uVar16 < 10) {
                      bVar13 = bVar13 | 0x30;
                    }
                    else {
                      bVar13 = bVar13 + 0x37;
                    }
                    if (param_4 == 0) goto LAB_1000773b;
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
                    pcVar9 = &DAT_1000ab89;
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
LAB_100077b9:
                  iVar3 = 8;
LAB_100077c3:
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
                    if (iVar3 == 0) goto LAB_10007889;
                    goto LAB_100077c3;
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
                  if (iVar3 != 0) goto LAB_100077c3;
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
                    pcVar9 = str_1000ab90;
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
LAB_10007889:
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
                  goto LAB_10004e89;
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
            pcVar9 = str_1000ab63;
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
LAB_10004e89:
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
      goto LAB_1000511c;
      uVar8 = *(uint *)(local_18 + 10);
      piVar17 = in_ECX;
      local_30 = uVar16;
      if ((uVar8 & 1) != 0 || uVar8 == 0) {
LAB_10004fcd:
        uVar16 = 0;
        puVar11 = local_18;
LAB_10004fea:
        local_48 = 0;
        uVar8 = *(uint *)(puVar11 + uVar16 * 2 + 10);
        if ((uVar8 & 1) == 0) goto LAB_10004fe0;
        if ((((short)(uVar8 & 0xfffffffc) == 0 || (char)local_34 != '\0') ||
            (*piVar17 != 0x54584b57)) || ((uint)piVar17[2] < 0x58)) goto LAB_10004fe0;
        if ((code *)piVar17[0x15] == (code *)0x0) goto LAB_10004fe0;
        local_1c = uVar8 & 0xfffffffc;
        iVar3 = (*(code *)piVar17[0x15])(uVar8 & 0xfffc,2,&local_48);
        puVar11 = local_18;
        if (iVar3 == 0) goto LAB_10004fe0;
        if (param_4 == 0) {
          if (uVar16 != 0) goto LAB_10005b3d;
          goto LAB_10005d1c;
        }
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_1000abbc;
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
LAB_10005097:
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
            pcVar9 = &DAT_1000abc8;
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
LAB_10005b3d:
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
              if (uVar16 == 0) goto LAB_10005097;
            }
            uVar5 = uVar16;
          } while (uVar16 != 0);
        }
LAB_10005d1c:
        iVar3 = 8;
LAB_10005d26:
        uVar16 = local_1c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar16;
        if (9 < uVar16) {
          bVar13 = bVar13 + 0x37;
          if (param_4 != 0) goto LAB_10005d44;
LAB_10005d72:
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_10005df0;
          goto LAB_10005d26;
        }
        bVar13 = bVar13 | 0x30;
        if (param_4 == 0) goto LAB_10005d72;
LAB_10005d44:
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
        if (iVar3 != 0) goto LAB_10005d26;
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
          pcVar9 = str_1000abcd;
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
LAB_10005df0:
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
        goto LAB_10007d6b;
      }
      iVar3 = 0;
      if ((uVar8 & 6) == 4) {
        iVar3 = *(int *)(local_18 + 0xc);
      }
      uVar8 = uVar8 & 0xfffffff0;
      if (uVar8 == 0 && iVar3 == 0) goto LAB_10004fcd;
      local_28 = 0;
      local_a8 = 0;
      if (((char)local_34 != '\0') || (*in_ECX != 0x54584b57)) goto LAB_10004fcd;
      if (((uint)in_ECX[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
        piVar17 = piVar14;
        if ((((uint)in_ECX[2] < 0x68 || iVar3 != 0) || ((code *)local_14[0x19] == (code *)0x0)) ||
           (iVar3 = (*(code *)local_14[0x19])(uVar8,0,0x1000,&local_a8), iVar3 == 0))
        goto LAB_10004fcd;
        local_28 = local_a8;
      }
      else {
        iVar3 = (*(code *)local_14[0x2e])(uVar8,iVar3,0x1000,&local_28);
        piVar17 = local_14;
        piVar14 = local_14;
        if (iVar3 == 0) goto LAB_10004fcd;
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
          pcVar9 = &DAT_1000ab9d;
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
      if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10007b07;
      if ((uint)piVar14[2] < 0xc0) {
        if (0x6b < (uint)piVar14[2]) goto LAB_100071d9;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_100071d9:
          pcVar6 = (code *)piVar14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10007206;
        }
        (*pcVar6)(local_28,4,&local_2c);
        if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10007b07;
      }
LAB_10007206:
      if ((uint)piVar14[2] < 0xc0) {
        if (0x6b < (uint)piVar14[2]) goto LAB_10007583;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_10007583:
          pcVar6 = (code *)piVar14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_100075b3;
        }
        (*pcVar6)(local_28 + 4,4,&local_38);
        if ((local_28 == 0) || (*piVar14 != 0x54584b57)) goto LAB_10007b07;
      }
LAB_100075b3:
      if ((uint)piVar14[2] < 0xc0) {
        if ((uint)piVar14[2] < 0x6c) goto LAB_10007b07;
LAB_10007aee:
        pcVar6 = (code *)piVar14[0x1a];
        if (pcVar6 == (code *)0x0) goto LAB_10007b07;
      }
      else {
        pcVar6 = (code *)piVar14[0x2f];
        if (pcVar6 == (code *)0x0) goto LAB_10007aee;
      }
      (*pcVar6)(local_28 + 8,4,&local_40);
LAB_10007b07:
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
          pcVar9 = &DAT_1000aba5;
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
LAB_10007b88:
      do {
        uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar16;
        if (uVar16 < 10) {
          bVar13 = bVar13 | 0x30;
        }
        else {
          bVar13 = bVar13 + 0x37;
        }
        if (param_4 == 0) goto LAB_10007bcb;
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
        pcVar9 = &DAT_1000abad;
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
LAB_10007c49:
      iVar3 = 8;
LAB_10007c53:
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
        if (iVar3 == 0) goto LAB_10007d19;
        goto LAB_10007c53;
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
      if (iVar3 != 0) goto LAB_10007c53;
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
        pcVar9 = &DAT_1000abb5;
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
LAB_10007d19:
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
LAB_10007d6b:
      uVar16 = 1;
      goto LAB_100050f9;
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
      goto LAB_100040d7;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_34 = 0;
      goto LAB_100040d7;
    }
    local_1c = uVar16;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_10004322:
      uVar16 = 0;
      if (param_4 != 0) {
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_1000a8b9;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar8) = cVar10;
            uVar8 = uVar8 + 1;
            cVar10 = *pcVar9;
            if (cVar10 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        goto LAB_10004533;
      }
LAB_10004551:
      local_34 = 0;
      goto joined_r0x1000412e;
    }
    local_34 = (uint)(byte)in_EDX[1];
    local_14 = in_ECX;
    iVar3 = (*(code *)in_ECX[0x17])
                      ((char)*in_EDX,*(undefined1 *)((int)in_EDX + 1),local_34,4,2,&local_a8);
    piVar14 = local_14;
    if (iVar3 == 0) goto LAB_10004322;
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
              pcVar9 = str_1000a8ea;
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
LAB_100064b3:
          uVar16 = local_a8 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (9 < uVar16) {
            bVar13 = bVar13 + 0x37;
            if (param_4 != 0) goto LAB_100064d0;
LAB_10006502:
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_10006580;
            goto LAB_100064b3;
          }
          bVar13 = bVar13 | 0x30;
          if (param_4 == 0) goto LAB_10006502;
LAB_100064d0:
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
          if (iVar3 != 0) goto LAB_100064b3;
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
            pcVar9 = str_1000a8fb;
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
LAB_10006580:
          iVar3 = 8;
LAB_1000658a:
          uVar16 = local_28 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
          bVar13 = (byte)uVar16;
          if (9 < uVar16) {
            bVar13 = bVar13 + 0x37;
            if (param_4 != 0) goto LAB_100065a7;
LAB_100065d2:
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_1000664a;
            goto LAB_1000658a;
          }
          bVar13 = bVar13 | 0x30;
          if (param_4 == 0) goto LAB_100065d2;
LAB_100065a7:
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
          if (iVar3 != 0) goto LAB_1000658a;
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
            pcVar9 = str_1000a90b;
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
LAB_1000664a:
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
          goto LAB_10004547;
        }
      }
    }
    uVar16 = 0;
    if (param_4 == 0) goto LAB_10004551;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_1000a8d1;
      do {
        pcVar9 = pcVar9 + 1;
        *(char *)(param_4 + uVar8) = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
LAB_10004533:
    *(undefined1 *)(param_4 + uVar8) = 0;
    local_44 = 0;
    local_34 = 0;
LAB_10004547:
    local_34 = 0;
    if (local_1c == 0xffffffff) goto LAB_10004134;
  }
  uVar16 = 0;
  if ((local_18 != (ushort *)0x0) && (local_18[2] == 0x1af4)) {
    uVar8 = (uint)local_18[3];
    if ((uVar8 & 0xffffffc0) == 0x1000) {
      uVar8 = uVar8 - 0x1000;
    }
    else {
      if ((uVar8 & 0xffffffc0) != 0x1040) goto LAB_1000600c;
      uVar8 = uVar8 - 0x1040;
    }
    if (uVar8 != 0xffffffff) {
      local_14 = in_ECX;
      if (param_4 == 0) {
        if (uVar8 != 0) goto LAB_10004666;
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
          pcVar9 = str_1000a91a;
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
LAB_10004666:
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
                                (uVar16 & 1) != 0 || uVar16 == 0)))))) goto LAB_10004b78;
                        iVar15 = 0;
                        if ((uVar16 & 6) == 4) {
                          if (4 < local_50) goto LAB_10004b78;
                          iVar15 = *(int *)(local_18 + local_50 * 2 + 0xc);
                        }
                        uVar16 = uVar16 & 0xfffffff0;
                        if (((iVar3 == 0) || (uVar16 == 0 && iVar15 == 0)) ||
                           (local_28 = 0, *local_14 != 0x54584b57)) goto LAB_10004b78;
                        if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
                          if ((!((uint)local_14[2] < 0x68 || iVar15 != 0)) &&
                             (((code *)local_14[0x19] != (code *)0x0 &&
                              (iVar3 = (*(code *)local_14[0x19])(uVar16,0,iVar3,&local_28),
                              iVar3 != 0)))) {
                            uVar16 = local_28;
                            goto LAB_10004b5e;
                          }
                          goto LAB_10004b78;
                        }
                        iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar15,iVar3,&local_4c);
                        if (iVar3 == 0) goto LAB_10004b78;
                        uVar16 = local_4c;
LAB_10004b5e:
                        local_a8 = uVar16 + local_30;
                        local_98 = local_50;
                      }
                      else {
LAB_10004b78:
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
                              if (4 < local_50) goto LAB_10004bca;
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
                                    goto LAB_10004d4a;
                                  }
                                }
                                else {
                                  iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar15,iVar3,&local_4c);
                                  if (iVar3 != 0) {
LAB_10004d4a:
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
                                    goto LAB_10004c4a;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_10004bca:
                        if ((local_48 == 3) &&
                           (iVar3 = recovered_10009f00(local_14,(int)local_18,local_50,local_b4,
                                                       local_b0,(int *)&local_4c), iVar3 != 0)) {
                          local_a0 = local_4c;
                          local_90 = local_50;
                        }
                        else if ((local_48 == 4) &&
                                (iVar3 = recovered_10009f00(local_14,(int)local_18,local_50,local_b4
                                                            ,local_b0,(int *)&local_4c), iVar3 != 0)
                                ) {
                          local_9c = local_4c;
                          local_8c = local_50;
                        }
                      }
LAB_10004c4a:
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
              if (0x6b < uVar16) goto LAB_1000712e;
              goto LAB_100069bc;
            }
            pcVar6 = (code *)piVar14[0x2f];
            if (pcVar6 == (code *)0x0) {
LAB_1000712e:
              pcVar6 = (code *)local_14[0x1a];
              if (pcVar6 != (code *)0x0) goto LAB_10007138;
LAB_1000716f:
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) {
LAB_10007a6c:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_10007a76;
                  goto LAB_10007aa8;
                }
LAB_10007abd:
                iVar15 = local_a8 + 4;
LAB_10007ac3:
                iVar3 = 0x54584b57;
                if (uVar16 < 0x6c) goto LAB_100069bc;
LAB_10007ad1:
                pcVar6 = (code *)local_14[0x1a];
                if (pcVar6 != (code *)0x0) goto LAB_10008337;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10007a6c;
LAB_10007a76:
                (*pcVar6)(iVar15,1,0);
                if (local_a8 == 0) goto LAB_1000844a;
                iVar3 = *local_14;
                if (iVar3 != 0x54584b57) goto LAB_100069bc;
                uVar16 = local_14[2];
LAB_10007aa8:
                if (uVar16 < 0xc4) {
                  if (uVar16 < 0x70) goto LAB_10007abd;
LAB_100082d8:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100082e2;
                }
                else {
                  pcVar6 = (code *)local_14[0x30];
                  if (pcVar6 == (code *)0x0) goto LAB_100082d8;
LAB_100082e2:
                  (*pcVar6)(local_a8,4,0);
                  if (local_a8 == 0) goto LAB_1000844a;
                  iVar3 = *local_14;
                  if (iVar3 != 0x54584b57) goto LAB_100069bc;
                  uVar16 = local_14[2];
                }
                iVar15 = local_a8 + 4;
                if (uVar16 < 0xc0) goto LAB_10007ac3;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10007ad1;
LAB_10008337:
                (*pcVar6)(iVar15,4,&local_80);
                if (local_a8 == 0) goto LAB_1000844a;
                iVar3 = *local_14;
                if (iVar3 != 0x54584b57) goto LAB_100069bc;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                iVar3 = 0x54584b57;
                if (uVar16 < 0x70) goto LAB_100069bc;
LAB_1000838d:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 == (code *)0x0) {
                  iVar3 = 0x54584b57;
                  goto LAB_100069bc;
                }
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_1000838d;
              }
              (*pcVar6)(local_a8,4,1);
              if (local_a8 == 0) goto LAB_1000844a;
              iVar3 = *local_14;
              if (iVar3 == 0x54584b57) goto LAB_100069cb;
              goto LAB_100083ca;
            }
LAB_10007138:
            (*pcVar6)(iVar15,1,&local_70);
            if (local_a8 != 0) {
              iVar3 = *local_14;
              if (iVar3 != 0x54584b57) goto LAB_100069bc;
              iVar15 = local_a8 + 0x14;
              uVar16 = local_14[2];
              goto LAB_1000716f;
            }
LAB_1000844a:
            local_78 = 0;
            local_74 = local_7c & 1;
LAB_1000845a:
            if (((*local_14 == 0x54584b57) && (0x7b < (uint)local_14[2])) &&
               ((code *)local_14[0x1e] != (code *)0x0)) {
              (*(code *)local_14[0x1e])();
            }
LAB_10008474:
            if ((local_a8 != 0) && (*local_14 == 0x54584b57)) {
              iVar3 = local_a8 + 0x14;
              uVar16 = local_14[2];
              if (uVar16 < 0xc4) {
                if (0x6f < uVar16) goto LAB_100084b6;
LAB_100085ea:
                if (0x6b < uVar16) {
LAB_10008728:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_10008732;
                  goto LAB_10008764;
                }
LAB_100085f3:
                iVar3 = local_a8 + 0x18;
LAB_100085f9:
                if (0x6b < uVar16) {
LAB_10008605:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_1000860f;
                  goto LAB_1000863e;
                }
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_100084b6:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100084c0;
                }
                else {
LAB_100084c0:
                  (*pcVar6)(iVar3,1,1);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (0x6f < uVar16) goto LAB_10008592;
                  goto LAB_100085ea;
                }
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_10008592:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_1000859c;
                }
                else {
LAB_1000859c:
                  (*pcVar6)(iVar3,1,3);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (0x6f < uVar16) goto LAB_100086cc;
                  goto LAB_100085ea;
                }
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) {
LAB_100086cc:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_100086d6;
                }
                else {
LAB_100086d6:
                  (*pcVar6)(iVar3,1,0xb);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  iVar3 = local_a8 + 0x14;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc0) goto LAB_100085ea;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10008728;
LAB_10008732:
                (*pcVar6)(iVar3,1,&local_6c);
                if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                uVar16 = local_14[2];
LAB_10008764:
                if (uVar16 < 0xc0) {
                  if (uVar16 < 0x6c) goto LAB_100085f3;
LAB_10008784:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_1000878e;
                }
                else {
                  pcVar6 = (code *)local_14[0x2f];
                  if (pcVar6 == (code *)0x0) goto LAB_10008784;
LAB_1000878e:
                  (*pcVar6)(local_a8 + 0x12,2,&local_68);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc0) {
                  if (0x6b < uVar16) goto LAB_10008882;
                  goto LAB_100085f3;
                }
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) {
LAB_10008882:
                  pcVar6 = (code *)local_14[0x1a];
                  if (pcVar6 != (code *)0x0) goto LAB_1000888c;
                }
                else {
LAB_1000888c:
                  (*pcVar6)(local_a8 + 0x15,1,&local_54);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  uVar16 = local_14[2];
                }
                if (uVar16 < 0xc4) {
                  if (uVar16 < 0x70) goto LAB_100085f3;
LAB_10008941:
                  pcVar6 = (code *)local_14[0x1b];
                  if (pcVar6 != (code *)0x0) goto LAB_1000894b;
                }
                else {
                  pcVar6 = (code *)local_14[0x30];
                  if (pcVar6 == (code *)0x0) goto LAB_10008941;
LAB_1000894b:
                  (*pcVar6)(local_a8 + 0x16,2,0);
                  if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                  uVar16 = local_14[2];
                }
                iVar3 = local_a8 + 0x18;
                if (uVar16 < 0xc0) goto LAB_100085f9;
                pcVar6 = (code *)local_14[0x2f];
                if (pcVar6 == (code *)0x0) goto LAB_10008605;
LAB_1000860f:
                (*pcVar6)(iVar3,2,&local_64);
                if ((local_a8 != 0) && (*local_14 == 0x54584b57)) {
                  uVar16 = local_14[2];
LAB_1000863e:
                  if (uVar16 < 0xc0) {
                    if (0x6b < uVar16) goto LAB_100087ed;
                  }
                  else {
                    pcVar6 = (code *)local_14[0x2f];
                    if (pcVar6 == (code *)0x0) {
LAB_100087ed:
                      pcVar6 = (code *)local_14[0x1a];
                      if (pcVar6 != (code *)0x0) goto LAB_100087f7;
                    }
                    else {
LAB_100087f7:
                      (*pcVar6)(local_a8 + 0x1c,2,&local_60);
                      if ((local_a8 == 0) || (*local_14 != 0x54584b57)) goto LAB_100089a4;
                      uVar16 = local_14[2];
                    }
                    if (uVar16 < 0xc0) {
                      if (0x6b < uVar16) goto LAB_100088ee;
                    }
                    else {
                      pcVar6 = (code *)local_14[0x2f];
                      if (pcVar6 == (code *)0x0) {
LAB_100088ee:
                        pcVar6 = (code *)local_14[0x1a];
                        if (pcVar6 == (code *)0x0) goto LAB_100089a4;
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
LAB_100069bc:
            if (iVar3 == 0x54584b57) {
LAB_100069cb:
              if ((uint)local_14[2] < 0xc0) {
                if (0x6b < (uint)local_14[2]) goto LAB_10007400;
                goto LAB_100083ca;
              }
              pcVar6 = (code *)local_14[0x2f];
              if (pcVar6 == (code *)0x0) {
LAB_10007400:
                pcVar6 = (code *)local_14[0x1a];
                if (pcVar6 == (code *)0x0) goto LAB_100083ca;
              }
              (*pcVar6)(local_a8 + 4,4,&local_7c);
              local_78 = 0;
              local_74 = local_7c & 1;
              if (local_a8 == 0) goto LAB_1000845a;
              iVar3 = *local_14;
            }
            else {
LAB_100083ca:
              local_78 = 0;
              local_74 = local_7c & 1;
            }
            local_78 = 0;
            if (iVar3 != 0x54584b57) goto LAB_10008474;
            uVar16 = local_14[2];
            if (uVar16 < 0xc4) {
              if (uVar16 < 0x70) goto LAB_1000845a;
LAB_10008405:
              pcVar6 = (code *)local_14[0x1b];
              if (pcVar6 != (code *)0x0) goto LAB_10008413;
LAB_1000850f:
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_1000845a;
LAB_1000852f:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 != (code *)0x0) goto LAB_10008539;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_1000852f;
LAB_10008539:
                (*pcVar6)(local_a8 + 0xc,4,local_78);
                if (local_a8 == 0) goto LAB_1000845a;
                if (*local_14 != 0x54584b57) goto LAB_100089a4;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_1000845a;
LAB_10008665:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 != (code *)0x0) goto LAB_1000866f;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10008665;
LAB_1000866f:
                (*pcVar6)(local_a8 + 8,4,1);
                if (local_a8 == 0) goto LAB_1000845a;
                if (*local_14 != 0x54584b57) goto LAB_100089a4;
                uVar16 = local_14[2];
              }
              if (uVar16 < 0xc4) {
                if (uVar16 < 0x70) goto LAB_1000845a;
LAB_10008853:
                pcVar6 = (code *)local_14[0x1b];
                if (pcVar6 == (code *)0x0) goto LAB_1000845a;
              }
              else {
                pcVar6 = (code *)local_14[0x30];
                if (pcVar6 == (code *)0x0) goto LAB_10008853;
              }
              (*pcVar6)(local_a8 + 0xc,4,local_74);
              goto LAB_1000845a;
            }
            pcVar6 = (code *)local_14[0x30];
            if (pcVar6 == (code *)0x0) goto LAB_10008405;
LAB_10008413:
            (*pcVar6)(local_a8 + 8,4,0);
            if (local_a8 == 0) goto LAB_1000845a;
            if (*local_14 == 0x54584b57) {
              uVar16 = local_14[2];
              goto LAB_1000850f;
            }
          }
LAB_100089a4:
          if (param_4 == 0) {
            if (local_84 != 0) goto LAB_10008aeb;
LAB_10008b61:
            if (local_98 == 0) goto LAB_10008d31;
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
              pcVar9 = str_1000a94a;
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
              pcVar9 = str_1000a95a;
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
              pcVar9 = str_1000a93f;
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
LAB_10008aeb:
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
LAB_10008b24:
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
                  if (uVar16 == 0) goto LAB_10008b96;
                  goto LAB_10008b24;
                }
                uVar8 = uVar16;
              } while (uVar16 != 0);
              goto LAB_10008b61;
            }
            uVar16 = 0;
            do {
              pcVar9 = (char *)(param_4 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar9 != '\0');
            if (uVar16 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
            }
LAB_10008b96:
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
              pcVar9 = str_1000a961;
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
LAB_10008cb8:
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
                pcVar9 = str_1000a971;
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
              goto LAB_10008d31;
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
LAB_10008c5e:
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
              if (uVar16 == 0) goto LAB_10008cb8;
              goto LAB_10008c5e;
            }
            uVar8 = uVar16;
          } while (uVar16 != 0);
LAB_10008d31:
          iVar3 = 8;
LAB_10008d3f:
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
            if (param_4 == 0) goto LAB_10008d38;
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
            pcVar9 = str_1000a97e;
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
LAB_10008e2b:
          iVar3 = 8;
LAB_10008e35:
          do {
            uVar16 = local_80 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            if (param_4 == 0) goto LAB_10008e7b;
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
            pcVar9 = str_1000a994;
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
LAB_10008ef9:
          iVar3 = 8;
LAB_10008f03:
          do {
            uVar16 = local_7c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar16;
            if (uVar16 < 10) {
              bVar13 = bVar13 | 0x30;
            }
            else {
              bVar13 = bVar13 + 0x37;
            }
            if (param_4 == 0) goto LAB_10008f4b;
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
            pcVar9 = str_1000a9aa;
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
LAB_10008fc9:
          iVar3 = 8;
LAB_10008fd3:
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
            if (iVar3 == 0) goto LAB_10009099;
            goto LAB_10008fd3;
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
          if (iVar3 != 0) goto LAB_10008fd3;
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
            pcVar9 = str_1000a9c0;
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
LAB_10009099:
          iVar3 = 8;
LAB_100090a3:
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
            if (iVar3 == 0) goto LAB_10009169;
            goto LAB_100090a3;
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
          if (iVar3 != 0) goto LAB_100090a3;
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
            pcVar9 = str_1000a9d6;
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
LAB_10009169:
          iVar3 = 8;
LAB_10009173:
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
            if (iVar3 == 0) goto LAB_10009239;
            goto LAB_10009173;
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
          if (iVar3 != 0) goto LAB_10009173;
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
            pcVar9 = str_1000a9ef;
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
LAB_10009239:
          iVar3 = 8;
LAB_10009243:
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
            if (iVar3 == 0) goto code_r0x1000928e;
            goto LAB_10009243;
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
          if (iVar3 != 0) goto LAB_10009243;
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
            pcVar9 = str_1000aa07;
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
LAB_10009329:
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
                if (uVar16 == 0) goto LAB_10009391;
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
            pcVar9 = str_1000aa14;
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
LAB_1000944a:
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
                if (uVar16 == 0) goto LAB_100094c1;
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
            pcVar9 = str_1000aa25;
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
LAB_1000958a:
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
LAB_1000963e:
              local_18 = (ushort *)local_58;
              if (local_94 != 0) goto LAB_100096be;
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
                pcVar9 = str_1000aa39;
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
LAB_100096be:
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
                    if (uVar16 == 0) goto LAB_100097d1;
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
                pcVar9 = str_1000aa49;
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
LAB_100097d1:
            iVar3 = 8;
LAB_100097db:
            do {
              uVar16 = local_88 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
              bVar13 = (byte)uVar16;
              if (uVar16 < 10) {
                bVar13 = bVar13 | 0x30;
              }
              else {
                bVar13 = bVar13 + 0x37;
              }
              if (param_4 == 0) goto LAB_1000981b;
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
              pcVar9 = str_1000aa60;
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
LAB_10009890:
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
                pcVar9 = str_1000aa73;
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
LAB_1000998b:
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
                pcVar9 = str_1000aa7d;
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
LAB_10009a8b:
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
          if (param_4 == 0) goto LAB_10009ca0;
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
            pcVar9 = str_1000aa90;
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
          if (local_54 != 0) goto LAB_10009ca4;
          uVar16 = 0;
          do {
            pcVar9 = (char *)(param_4 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar9 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar16) = 0x30;
          }
LAB_10009bba:
          uVar16 = 0;
          do {
            uVar8 = uVar16;
            uVar16 = uVar8 + 1;
          } while (*(char *)(param_4 + uVar8) != '\0');
          pcVar9 = str_1000aabf;
          if ((local_6c & 8) != 0) {
            pcVar9 = str_1000aab3;
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
            pcVar12 = str_1000aaa7;
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
          goto LAB_1000600c;
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
            pcVar9 = str_1000a93f;
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
LAB_10006092:
        local_28 = 0;
        local_2c = 0;
        if ((*(uint *)(puVar11 + uVar16 * 2 + 10) & 1) == 0) goto LAB_10006080;
        if ((((char)local_34 != '\0') || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 0x58))
        goto LAB_10006080;
        if ((code *)local_14[0x15] == (code *)0x0) goto LAB_10006080;
        local_3c = *(uint *)(puVar11 + uVar16 * 2 + 10) & 0xfffffffc;
        local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar19);
        local_30 = local_3c + 0x12 & 0xffff;
        iVar3 = (*(code *)local_14[0x15])(local_30,1,&local_28);
        puVar11 = local_18;
        if (iVar3 == 0) goto LAB_10006080;
        if (param_4 == 0) {
          if (uVar16 != 0) goto LAB_10006cd4;
          goto LAB_10006f44;
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
          pcVar9 = str_1000a94a;
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
          pcVar9 = str_1000aacc;
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
          pcVar9 = str_1000aad6;
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
LAB_10006ed4:
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
            pcVar9 = str_1000aaea;
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
LAB_10006cd4:
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
              if (uVar16 == 0) goto LAB_10006ed4;
            }
            uVar5 = uVar16;
          } while (uVar16 != 0);
        }
LAB_10006f44:
        piVar14 = local_14;
        uVar16 = local_30;
        iVar3 = 8;
LAB_10006f4e:
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
          if (iVar3 == 0) goto LAB_10007019;
          goto LAB_10006f4e;
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
        if (iVar3 != 0) goto LAB_10006f4e;
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
          pcVar9 = str_1000aaf9;
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
LAB_10007019:
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
LAB_10007082:
            if (uVar8 < 0x58) goto LAB_10007e77;
          }
          else if ((code *)local_14[0x16] != (code *)0x0) {
            (*(code *)local_14[0x16])(local_30,1,0);
            if (*piVar14 != 0x54584b57) goto LAB_10007e77;
            uVar8 = piVar14[2];
            if (0x5b < uVar8) {
              if ((code *)piVar14[0x16] == (code *)0x0) goto LAB_100070da;
              (*(code *)piVar14[0x16])(uVar16,1,3);
              if (*piVar14 != 0x54584b57) goto LAB_10007e77;
              uVar8 = piVar14[2];
            }
            goto LAB_10007082;
          }
LAB_100070da:
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
                pcVar9 = str_1000ab0c;
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
LAB_10007e77:
        if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_10005fc9;
        uVar16 = local_1c & 1;
        goto LAB_1000600c;
      }
LAB_10005fbd:
      uVar16 = 0;
      if (param_4 != 0) {
LAB_10005fc9:
        uVar16 = 0;
        do {
          uVar8 = uVar16;
          uVar16 = uVar8 + 1;
        } while (*(char *)(param_4 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_1000a923;
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
LAB_1000600c:
  uVar16 = uVar16 | local_44;
  goto LAB_1000600e;
LAB_1000805b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_100080d9;
  goto LAB_10008016;
LAB_1000773b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_100077b9;
  goto LAB_100076f5;
LAB_10004fe0:
  uVar16 = uVar16 + 1;
  if (uVar16 == 6) goto LAB_100050b7;
  goto LAB_10004fea;
LAB_10007bcb:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10007c49;
  goto LAB_10007b88;
LAB_1000533e:
  uVar16 = local_30;
  goto LAB_10005348;
LAB_10008d38:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10008e2b;
  goto LAB_10008d3f;
LAB_10008e7b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10008ef9;
  goto LAB_10008e35;
LAB_10008f4b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10008fc9;
  goto LAB_10008f03;
code_r0x1000928e:
  if (local_68 != 0) goto LAB_10009329;
LAB_10009391:
  if (local_64 != 0) goto LAB_1000944a;
LAB_100094c1:
  if (local_60 != 0) goto LAB_1000958a;
  local_18 = (ushort *)local_58;
  if (local_58 != 0) goto LAB_1000963e;
  if (local_a0 != 0) goto LAB_1000998b;
  if (local_9c != 0) goto LAB_10009a8b;
LAB_10009ca0:
  if (local_54 == 0) {
    uVar16 = 1;
    goto LAB_1000600c;
  }
LAB_10009ca4:
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
      if (uVar16 == 0) goto LAB_10009bba;
    }
    uVar8 = uVar16;
  } while (uVar16 != 0);
  uVar16 = 1;
  goto LAB_1000600c;
LAB_1000981b:
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_10009890;
  goto LAB_100097db;
LAB_10006080:
  bVar19 = uVar16 < 5;
  uVar16 = uVar16 + 1;
  if (uVar16 == 6) goto LAB_10005fbd;
  goto LAB_10006092;
LAB_100050b7:
  uVar16 = local_30;
  if (param_4 != 0) {
    uVar16 = 0;
    do {
      uVar8 = uVar16;
      uVar16 = uVar8 + 1;
    } while (*(char *)(param_4 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_1000abd7;
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
LAB_100050f9:
    puVar11 = local_18;
    uVar16 = local_30 | uVar16;
  }
LAB_1000511c:
  local_28 = 0;
  local_2c = 0;
  local_38 = 0;
  if ((char)puVar11[4] == '\x02') {
    uVar8 = 0;
    bVar19 = true;
    local_30 = uVar16;
LAB_10005152:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar19);
    if ((uVar8 != 0) && ((*(uint *)(puVar11 + uVar8 * 2 + 8) & 7) == 4)) {
LAB_10005250:
      uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 10);
      if ((uVar16 & 1) != 0) {
        if (((!((short)(uVar16 & 0xfffffffc) == 0 || (char)local_34 != '\0')) &&
            (*local_14 == 0x54584b57)) && (0x57 < (uint)local_14[2])) {
          if ((code *)local_14[0x15] != (code *)0x0) {
            iVar3 = (*(code *)local_14[0x15])(uVar16 & 0xfffc,2,&local_2c);
            puVar11 = local_18;
            if (iVar3 == 0) goto LAB_10005140;
            if (param_4 == 0) {
              if (uVar8 != 0) goto LAB_10005882;
              goto LAB_1000595a;
            }
            uVar5 = 0;
            do {
              uVar4 = uVar5;
              uVar5 = uVar4 + 1;
            } while (*(char *)(param_4 + uVar4) != '\0');
            if (uVar4 + 1 < 0x400) {
              cVar10 = ' ';
              pcVar9 = str_1000ac21;
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
LAB_10005315:
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
                pcVar9 = str_1000ac30;
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
LAB_10005882:
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
                  if (uVar8 == 0) goto LAB_10005315;
                }
                uVar4 = uVar8;
              } while (uVar8 != 0);
            }
LAB_1000595a:
            iVar3 = 8;
LAB_10005964:
            uVar8 = (uVar16 & 0xfffffffc) >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
            bVar13 = (byte)uVar8;
            if (9 < uVar8) {
              bVar13 = bVar13 + 0x37;
              if (param_4 != 0) goto LAB_10005981;
LAB_100059b2:
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) goto LAB_10005a30;
              goto LAB_10005964;
            }
            bVar13 = bVar13 | 0x30;
            if (param_4 == 0) goto LAB_100059b2;
LAB_10005981:
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
            if (iVar3 != 0) goto LAB_10005964;
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
              pcVar9 = str_1000ac3a;
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
LAB_10005a30:
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
            goto LAB_100073db;
          }
        }
      }
LAB_10005140:
      bVar19 = uVar8 < 5;
      uVar8 = uVar8 + 1;
      if (uVar8 == 6) goto LAB_1000533e;
      goto LAB_10005152;
    }
    uVar16 = *(uint *)(puVar11 + uVar8 * 2 + 10);
    puVar11 = local_18;
    if ((uVar16 & 1) != 0 || uVar16 == 0) goto LAB_10005250;
    iVar3 = 0;
    if ((uVar16 & 6) == 4) {
      if (uVar8 == 5) goto LAB_10005250;
      iVar3 = *(int *)(local_18 + uVar8 * 2 + 0xc);
    }
    uVar16 = uVar16 & 0xfffffff0;
    if (uVar16 == 0 && iVar3 == 0) goto LAB_10005250;
    local_28 = 0;
    local_a8 = 0;
    if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10005250;
    if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      if ((!((uint)local_14[2] < 0x68 || iVar3 != 0)) && ((code *)local_14[0x19] != (code *)0x0)) {
        iVar3 = (*(code *)local_14[0x19])(uVar16,0,0x1000,&local_a8);
        puVar11 = local_18;
        if (iVar3 != 0) {
          local_28 = local_a8;
          goto LAB_10005bbf;
        }
      }
      goto LAB_10005250;
    }
    iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
    puVar11 = local_18;
    if (iVar3 == 0) goto LAB_10005250;
LAB_10005bbf:
    if (param_4 == 0) {
      if (uVar8 != 0) goto LAB_10005c3b;
      goto LAB_1000639c;
    }
    uVar16 = 0;
    do {
      uVar5 = uVar16;
      uVar16 = uVar5 + 1;
    } while (*(char *)(param_4 + uVar5) != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar9 = str_1000abec;
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
LAB_10005c14:
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
        pcVar9 = str_1000abfd;
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
LAB_10005c3b:
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
          if (uVar16 == 0) goto LAB_10005c14;
        }
        uVar5 = uVar16;
      } while (uVar16 != 0);
    }
LAB_1000639c:
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
        if (0x6b < (uint)local_14[2]) goto LAB_10006d60;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_10006d60:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10006d93;
        }
        (*pcVar6)(local_28,4,&local_2c);
        if ((local_28 == 0) || (*local_14 != 0x54584b57)) goto LAB_10007248;
      }
LAB_10006d93:
      if ((uint)local_14[2] < 0xc0) {
        if (0x6b < (uint)local_14[2]) goto LAB_1000722c;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_1000722c:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_10007248;
        }
        (*pcVar6)(local_28 + 4,4,&local_38);
      }
    }
LAB_10007248:
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
        pcVar9 = str_1000ac09;
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
LAB_100072c9:
    uVar16 = local_2c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    bVar13 = (byte)uVar16;
    if (9 < uVar16) {
      bVar13 = bVar13 + 0x37;
      if (param_4 != 0) goto LAB_100072e6;
LAB_10007312:
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_10007390;
      goto LAB_100072c9;
    }
    bVar13 = bVar13 | 0x30;
    if (param_4 == 0) goto LAB_10007312;
LAB_100072e6:
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
    if (iVar3 != 0) goto LAB_100072c9;
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
      pcVar9 = str_1000ac15;
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
LAB_10007390:
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
LAB_100073db:
    puVar11 = local_18;
    uVar16 = local_30 | local_1c & 1;
  }
LAB_10005348:
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
      if (uVar8 == 0 && iVar3 == 0) goto LAB_10005448;
      local_28 = 0;
      local_a8 = 0;
      if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_10005448;
      if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_14[2] && iVar3 == 0) && ((code *)local_14[0x19] != (code *)0x0)) {
          iVar3 = (*(code *)local_14[0x19])(uVar8,0,0x1000,&local_a8);
          uVar8 = 0;
          if (iVar3 != 0) {
            local_28 = local_a8;
            goto joined_r0x10005431;
          }
        }
        goto LAB_10005448;
      }
      iVar3 = (*(code *)local_14[0x2e])(uVar8,iVar3,0x1000,&local_28);
      uVar8 = 0;
      uVar16 = local_30;
      if (iVar3 == 0) goto LAB_10005448;
joined_r0x10005431:
      uVar7 = (undefined3)((uint)iVar3 >> 8);
      if (param_4 == 0) {
        local_3c = CONCAT31(uVar7,1);
        local_1c = CONCAT31(uVar7,1);
      }
      else {
        uVar16 = 0;
        local_3c = CONCAT31(uVar7,1);
        local_1c = CONCAT31(uVar7,1);
LAB_1000556d:
        uVar8 = 0;
        do {
          uVar5 = uVar8;
          uVar8 = uVar5 + 1;
        } while (*(char *)(param_4 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar9 = str_1000ac48;
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
LAB_1000612b:
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
                goto LAB_100061bb;
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
LAB_100061bb:
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
            pcVar9 = str_1000ac59;
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
LAB_1000633d:
        uVar8 = local_1c;
        puVar11 = local_18;
      }
      else {
        if ((uint)local_14[2] < 0xc0) {
          if (0x6b < (uint)local_14[2]) goto LAB_100062f3;
          goto LAB_1000633d;
        }
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_100062f3:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_1000633d;
        }
        iVar3 = (*pcVar6)(local_28,4,&local_2c);
        if (iVar3 == 0) goto LAB_1000633d;
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
            pcVar9 = str_1000ac65;
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
LAB_10005448:
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
                      goto LAB_1000555e;
                    }
                  }
                }
                else {
                  iVar3 = (*(code *)local_14[0x2e])(uVar5,iVar3,0x1000,&local_28);
                  uVar5 = 0;
                  puVar11 = local_18;
                  if (iVar3 != 0) {
LAB_1000555e:
                    if (param_4 != 0) {
                      local_3c = 0;
                      goto LAB_1000556d;
                    }
                    bVar19 = true;
                    goto LAB_1000612b;
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
  if (uVar16 != 0) goto LAB_1000600e;
  local_2c = 0;
  uVar16 = *(uint *)(puVar11 + 10);
  if ((uVar16 & 1) == 0 && uVar16 != 0) {
    iVar3 = 0;
    if ((uVar16 & 6) == 4) {
      iVar3 = *(int *)(local_18 + 0xc);
    }
    uVar16 = uVar16 & 0xfffffff0;
    if (uVar16 == 0 && iVar3 == 0) goto LAB_100056e2;
    local_28 = 0;
    local_a8 = 0;
    if (((char)local_34 != '\0') || (*local_14 != 0x54584b57)) goto LAB_100056e2;
    if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)local_14[2] && iVar3 == 0) && ((code *)local_14[0x19] != (code *)0x0)) {
        iVar3 = (*(code *)local_14[0x19])(uVar16,0,0x1000,&local_a8);
        uVar16 = 0;
        if (iVar3 != 0) {
          local_28 = local_a8;
          goto joined_r0x100056cb;
        }
      }
      goto LAB_100056e2;
    }
    iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
    uVar16 = 0;
    if (iVar3 == 0) goto LAB_100056e2;
joined_r0x100056cb:
    uVar7 = (undefined3)((uint)iVar3 >> 8);
    if (param_4 == 0) {
      bVar19 = true;
      local_1c = CONCAT31(uVar7,1);
    }
    else {
      uVar8 = 0;
      local_18 = (ushort *)CONCAT31(uVar7,1);
      local_1c = CONCAT31(uVar7,1);
LAB_1000580d:
      uVar16 = 0;
      do {
        uVar5 = uVar16;
        uVar16 = uVar5 + 1;
      } while (*(char *)(param_4 + uVar5) != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar9 = str_1000ac71;
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
LAB_100067b7:
        uVar5 = 0;
        do {
          *(byte *)((int)&local_a8 + uVar5) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
          uVar4 = uVar5 + 1;
          if (8 < uVar5) break;
          bVar19 = 9 < uVar8;
          uVar8 = uVar8 / 10;
          uVar5 = uVar4;
        } while (bVar19);
LAB_100067f2:
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
            if (uVar8 == 0) goto LAB_10006834;
            goto LAB_100067f2;
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
LAB_10006834:
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
          pcVar9 = &DAT_1000ac7c;
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
        if (0x6b < (uint)local_14[2]) goto LAB_1000696f;
      }
      else {
        pcVar6 = (code *)local_14[0x2f];
        if (pcVar6 == (code *)0x0) {
LAB_1000696f:
          pcVar6 = (code *)local_14[0x1a];
          if (pcVar6 == (code *)0x0) goto LAB_1000586f;
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
              pcVar9 = str_1000ac80;
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
LAB_100056e2:
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
                    goto LAB_100057fe;
                  }
                }
              }
              else {
                iVar3 = (*(code *)local_14[0x2e])(uVar16,iVar3,0x1000,&local_28);
                uVar16 = 0;
                puVar11 = local_18;
                if (iVar3 != 0) {
LAB_100057fe:
                  if (param_4 != 0) {
                    local_18 = (ushort *)0x0;
                    goto LAB_1000580d;
                  }
                  uVar16 = 1;
                  goto LAB_100067b7;
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
LAB_1000586f:
  uVar16 = local_1c & 1;
LAB_1000600e:
  pcVar9 = str_1000a7d4;
  if (uVar16 != 0) {
    pcVar9 = str_1000a891;
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

#undef DAT_1000ab3e
#undef DAT_1000ab46
#undef DAT_1000ab79
#undef DAT_1000ab81
#undef DAT_1000ab89
#undef DAT_1000ab9d
#undef DAT_1000aba5
#undef DAT_1000abad
#undef DAT_1000abb5
#undef DAT_1000abc8
#undef DAT_1000ac7c
#undef str_1000a7d4
#undef str_1000a891
#undef str_1000a8a1
#undef str_1000a8b9
#undef str_1000a8d1
#undef str_1000a8ea
#undef str_1000a8fb
#undef str_1000a90b
#undef str_1000a91a
#undef str_1000a923
#undef str_1000a93f
#undef str_1000a94a
#undef str_1000a95a
#undef str_1000a961
#undef str_1000a971
#undef str_1000a97e
#undef str_1000a994
#undef str_1000a9aa
#undef str_1000a9c0
#undef str_1000a9d6
#undef str_1000a9ef
#undef str_1000aa07
#undef str_1000aa14
#undef str_1000aa25
#undef str_1000aa39
#undef str_1000aa49
#undef str_1000aa60
#undef str_1000aa73
#undef str_1000aa7d
#undef str_1000aa90
#undef str_1000aaa7
#undef str_1000aab3
#undef str_1000aabf
#undef str_1000aacc
#undef str_1000aad6
#undef str_1000aaea
#undef str_1000aaf9
#undef str_1000ab0c
#undef str_1000ab1e
#undef str_1000ab34
#undef str_1000ab4d
#undef str_1000ab57
#undef str_1000ab63
#undef str_1000ab90
#undef str_1000abbc
#undef str_1000abcd
#undef str_1000abd7
#undef str_1000abec
#undef str_1000abfd
#undef str_1000ac09
#undef str_1000ac15
#undef str_1000ac21
#undef str_1000ac30
#undef str_1000ac3a
#undef str_1000ac48
#undef str_1000ac59
#undef str_1000ac65
#undef str_1000ac71
#undef str_1000ac80
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

#undef str_1000ae4c
#define str_1000ae4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b0U)))
#undef str_1000ae57
#define str_1000ae57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bbU)))
#undef str_1000ae66
#define str_1000ae66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8caU)))
#undef str_1000ae77
#define str_1000ae77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dbU)))
#undef str_1000ae8a
#define str_1000ae8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eeU)))
#undef str_1000ae9d
#define str_1000ae9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x901U)))
#undef str_1000aead
#define str_1000aead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x911U)))
#undef str_1000aebc
#define str_1000aebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x920U)))
#undef str_1000aecb
#define str_1000aecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92fU)))
#undef str_1000aedc
#define str_1000aedc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x940U)))
#undef str_1000aee7
#define str_1000aee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94bU)))
#undef str_1000aef3
#define str_1000aef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x957U)))
#undef str_1000aefd
#define str_1000aefd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x961U)))
#undef str_1000af06
#define str_1000af06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96aU)))
#undef str_1000af11
#define str_1000af11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x975U)))
#undef str_1000af1a
#define str_1000af1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97eU)))
#undef str_1000af22
#define str_1000af22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x986U)))
#undef str_1000af2b
#define str_1000af2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98fU)))
#undef str_1000af32
#define str_1000af32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x996U)))
#undef str_1000af45
#define str_1000af45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a9U)))
#undef str_1000af58
#define str_1000af58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bcU)))
#undef str_1000af6b
#define str_1000af6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9cfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d30
 */

char * recovered_10009d30(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_1000ae4c;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_1000af06;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_1000aefd;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_1000af2b;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_1000af2b;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_1000af22;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_1000af11;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_1000aee7;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_10009eaf;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_1000aef3;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_1000af1a;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_1000ae57;
    case 0x1001:
    case 0x1042:
      return str_1000ae66;
    case 0x1002:
    case 0x1045:
      return str_1000ae77;
    case 0x1003:
    case 0x1043:
      return str_1000ae8a;
    case 0x1004:
    case 0x1048:
      return str_1000ae9d;
    case 0x1005:
    case 0x1044:
      return str_1000aead;
    default:
      return str_1000aedc;
    case 0x1050:
      return str_1000aebc;
    case 0x1052:
      return str_1000aecb;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_1000af58;
  case 2:
    return str_1000af45;
  case 3:
    return str_1000af32;
  case 4:
    return str_1000af6b;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_10009eaf:
      pcVar2 = recovered_1000a540((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_1000ae4c;
}

#undef str_1000ae4c
#undef str_1000ae57
#undef str_1000ae66
#undef str_1000ae77
#undef str_1000ae8a
#undef str_1000ae9d
#undef str_1000aead
#undef str_1000aebc
#undef str_1000aecb
#undef str_1000aedc
#undef str_1000aee7
#undef str_1000aef3
#undef str_1000aefd
#undef str_1000af06
#undef str_1000af11
#undef str_1000af1a
#undef str_1000af22
#undef str_1000af2b
#undef str_1000af32
#undef str_1000af45
#undef str_1000af58
#undef str_1000af6b

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f00
 */

undefined4
recovered_10009f00(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

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
 * Address: 0x1000a030
 */

void recovered_1000a030(int *in_ECX,int in_EDX,int param_3,int param_4)

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
    if (pcVar1 != (code *)0x0) goto LAB_1000a075;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return;
  }
LAB_1000a075:
  (*pcVar1)(in_EDX + param_3,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a090
 */

void recovered_1000a090(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

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
      if (pcVar1 != (code *)0x0) goto LAB_1000a0c1;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_1000a0c1:
      (*pcVar1)(in_EDX + param_3,1,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0e0
 */

void recovered_1000a0e0(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

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
      if (pcVar1 != (code *)0x0) goto LAB_1000a111;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_1000a111:
      (*pcVar1)(in_EDX + param_3,4,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a130
 */

void recovered_1000a130(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

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
      if (pcVar1 != (code *)0x0) goto LAB_1000a161;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_1000a161:
      (*pcVar1)(in_EDX + param_3,2,param_4);
      return;
    }
  }
  return;
}


#define local_18 (*(uint *)(frame + 24))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a180
 */

byte recovered_1000a180(int *in_ECX,int in_EDX,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;

  local_18 = 0;
  bVar4 = true;
  uVar3 = 0;
  do {
    if (in_EDX == 0) {
      if (in_ECX == (int *)0x0) goto LAB_1000a1b0;
LAB_1000a230:
      if ((*in_ECX == 0x54584b57) &&
         ((0x33 < (uint)in_ECX[2] && ((code *)in_ECX[0xc] != (code *)0x0)))) {
        (*(code *)in_ECX[0xc])(100);
      }
    }
    else if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
      if ((uint)in_ECX[2] < 0xc0) {
        if ((uint)in_ECX[2] < 0x6c) goto LAB_1000a230;
LAB_1000a200:
        pcVar1 = (code *)in_ECX[0x1a];
        if (pcVar1 == (code *)0x0) goto LAB_1000a230;
      }
      else {
        pcVar1 = (code *)in_ECX[0x2f];
        if (pcVar1 == (code *)0x0) goto LAB_1000a200;
      }
      local_11 = bVar4;
      iVar2 = (*pcVar1)(param_3 + in_EDX,1,&local_18);
      if ((iVar2 == 0) || (bVar4 = local_11, (local_18 & param_4) != param_5)) goto LAB_1000a230;
      goto LAB_1000a260;
    }
LAB_1000a1b0:
    bVar4 = uVar3 < 99;
    uVar3 = uVar3 + 1;
    if (uVar3 == 100) {
LAB_1000a260:
      return bVar4 & 1;
    }
  } while( true );
}

#undef local_18
#undef local_11

#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a64U)))
#undef DAT_1000c001
#define DAT_1000c001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a65U)))
#undef DAT_1000c002
#define DAT_1000c002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a66U)))
#undef DAT_1000c003
#define DAT_1000c003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a67U)))
#undef DAT_1000c400
#define DAT_1000c400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e64U)))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a270
 */

undefined4
recovered_1000a270(int *in_ECX,int in_EDX,uint param_3,uint *param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 param_8,undefined4 *param_9)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  if (param_9 == (undefined4 *)0x0) {
    return 0;
  }
  local_18 = 0;
  if (param_5 == (uint *)0x0 || param_4 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *param_4 + 1;
  if (param_3 <= uVar4) {
    uVar4 = 0;
  }
  (&DAT_1000c000)[uVar4 * 4] = param_8;
  (&DAT_1000c001)[uVar4 * 4] = 0;
  uVar2 = param_7 << 4 | 0xf;
  (&DAT_1000c002)[uVar4 * 4] = (char)uVar2;
  (&DAT_1000c003)[uVar4 * 4] =
       (byte)(((param_7 & 0xf0) << 0x14) >> 0x18) | (byte)((uint)(param_6 << 0x1c) >> 0x18);
  if (in_ECX == (int *)0x0) {
    local_14 = CONCAT31((int3)((param_7 << 4) >> 8),in_EDX == 0);
    goto LAB_1000a3b2;
  }
  if ((*in_ECX == 0x54584b57) && (0x77 < (uint)in_ECX[2])) {
    uVar2 = 0;
    if (((code *)in_ECX[0x1d] != (code *)0x0) &&
       ((uVar2 = (*(code *)in_ECX[0x1d])(0,&DAT_1000c000,0x400), *in_ECX == 0x54584b57 &&
        (0x77 < (uint)in_ECX[2])))) {
      uVar2 = 0;
      if ((code *)in_ECX[0x1d] != (code *)0x0) {
        uVar2 = (*(code *)in_ECX[0x1d])(0,&DAT_1000c400,0x800);
      }
    }
  }
  if (in_EDX == 0) {
    local_14 = CONCAT31((int3)(uVar2 >> 8),1);
    goto LAB_1000a3b2;
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) {
LAB_1000a390:
        pcVar3 = (code *)in_ECX[0x1b];
        if (pcVar3 != (code *)0x0) goto LAB_1000a397;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x30];
      if (pcVar3 == (code *)0x0) goto LAB_1000a390;
LAB_1000a397:
      (*pcVar3)(in_EDX + 0x48,2,uVar4);
    }
  }
  local_14 = 0;
LAB_1000a3b2:
  uVar2 = 0;
  bVar6 = true;
  do {
    if (in_ECX == (int *)0x0) {
      local_18 = local_18 & 0xff;
      if (local_18 != (byte)*param_5) goto LAB_1000a4bb;
    }
    else {
      if (((*in_ECX == 0x54584b57) && (0x77 < (uint)in_ECX[2])) &&
         ((code *)in_ECX[0x1d] != (code *)0x0)) {
        (*(code *)in_ECX[0x1d])(0,&DAT_1000c400,0x800);
      }
      if (((char)local_14 == '\0') && (*in_ECX == 0x54584b57)) {
        if ((uint)in_ECX[2] < 0xc0) {
          if (0x6b < (uint)in_ECX[2]) {
LAB_1000a449:
            pcVar3 = (code *)in_ECX[0x1a];
            if (pcVar3 != (code *)0x0) goto LAB_1000a450;
          }
        }
        else {
          pcVar3 = (code *)in_ECX[0x2f];
          if (pcVar3 == (code *)0x0) goto LAB_1000a449;
LAB_1000a450:
          (*pcVar3)(in_EDX + 0x58,2,&local_18);
        }
      }
      local_18 = local_18 & 0xff;
      if (local_18 != (byte)*param_5) {
LAB_1000a4bb:
        if (local_18 < param_3) {
          iVar5 = local_18 * 8;
        }
        else {
          iVar5 = 0;
        }
        uVar1 = *(undefined4 *)(&DAT_1000c400 + iVar5);
        *param_4 = uVar4;
        *param_5 = local_18;
        if (bVar6) {
          *param_9 = uVar1;
          return 1;
        }
        return 0;
      }
      if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
         ((code *)in_ECX[0xc] != (code *)0x0)) {
        (*(code *)in_ECX[0xc])(100);
      }
    }
    bVar6 = uVar2 < 99;
    uVar2 = uVar2 + 1;
    if (uVar2 == 100) {
      return 0;
    }
  } while( true );
}

#undef DAT_1000c000
#undef DAT_1000c001
#undef DAT_1000c002
#undef DAT_1000c003
#undef DAT_1000c400
#undef local_18
#undef local_14

#undef DAT_1000af81
#define DAT_1000af81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e5U)))
#undef DAT_1000af86
#define DAT_1000af86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eaU)))
#undef DAT_1000af8b
#define DAT_1000af8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
#undef DAT_1000af90
#define DAT_1000af90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f4U)))
#undef str_1000af95
#define str_1000af95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f9U)))
#undef str_1000afa0
#define str_1000afa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa04U)))
#undef str_1000afa9
#define str_1000afa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a540
 */

char * recovered_1000a540(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_1000af81;
    }
    if (in_ECX == 0x10) {
      return &DAT_1000af86;
    }
    if (in_ECX == 0x20) {
      return &DAT_1000af8b;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_1000af90;
    }
    if (in_ECX == 0x80) {
      return str_1000af95;
    }
    if (in_ECX == 0xfe) {
      return str_1000afa0;
    }
  }
  return str_1000afa9;
}

#undef DAT_1000af81
#undef DAT_1000af86
#undef DAT_1000af8b
#undef DAT_1000af90
#undef str_1000af95
#undef str_1000afa0
#undef str_1000afa9

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
