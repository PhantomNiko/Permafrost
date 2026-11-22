/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e40
 */

void * recovered_10000e40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000c000;
}

#undef DAT_1000c000

#undef DAT_1000b76b
#define DAT_1000b76b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_1000b668
#define str_1000b668 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000b67c
#define str_1000b67c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_1000b6e8
#define str_1000b6e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_1000b6fe
#define str_1000b6fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_1000b771
#define str_1000b771 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_1000b785
#define str_1000b785 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_1000b799
#define str_1000b799 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_1000b7b2
#define str_1000b7b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c6U)))
#undef str_1000b7bb
#define str_1000b7bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cfU)))
#undef str_1000b7e3
#define str_1000b7e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_1000b7f2
#define str_1000b7f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x306U)))
#undef str_1000b7f9
#define str_1000b7f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_1000b809
#define str_1000b809 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000b818
#define str_1000b818 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32cU)))
#define local_f0 (*(uint (*)[10])(frame + 1056))
#define local_60 (*(uint *)(frame + 1200))
#define local_24 (*(uint *)(frame + 1260))
#define local_20 (*(uint *)(frame + 1264))
#define local_1c (*(uint *)(frame + 1268))
#define local_18 (*(uint *)(frame + 1272))
#define local_14 (*(uint *)(frame + 1276))
#define cStack_4f1 (*(char *)(frame + 31))
#define bStack_f1 (*(byte *)(frame + 1055))
#define acStack_c5 (*(char (*)[101])(frame + 1099))
#define local_4f0 (*(undefined2 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

int recovered_10000e50(int *api)

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
      pcVar5 = str_1000b668;
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
      pcVar5 = str_1000b7e3;
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
      pcVar5 = str_1000b7f2;
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
      pcVar5 = str_1000b67c;
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
        pcVar5 = str_1000b7f9;
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
        pcVar5 = str_1000b809;
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
        pcVar5 = str_1000b818;
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
      iVar4 = (*(code *)api[3])(str_1000b818 + 0xf,str_1000b6e8,&local_4f0);
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
              iVar4 = recovered_10004330(api,(char)local_18,bVar7,0,acStack_c5 + 1);
              if ((iVar4 != 0) &&
                 (recovered_10001a60(api,(byte *)(acStack_c5 + 1),(int *)&local_14),
                 acStack_c5[0xd] < '\0')) {
                in_DL = (undefined1)local_18;
                iVar4 = recovered_10004330(api,in_DL,bVar7,1,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,2,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,3,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,4,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,5,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,6,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
                }
                iVar4 = recovered_10004330(api,in_DL,bVar7,7,(undefined1 *)local_f0);
                if (iVar4 != 0) {
                  recovered_10001a60(api,(byte *)local_f0,(int *)&local_14);
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
            pcVar5 = str_1000b6fe;
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
              (iVar2 = (*(code *)api[0x15])(0x300,1,local_f0), iVar2 != 0)))) {
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
              cVar6 = 'i';
              pcVar5 = &DAT_1000b76b;
              do {
                acStack_c5[uVar3 + 1] = cVar6;
                uVar3 = uVar3 + 1;
                cVar6 = *pcVar5;
                if (cVar6 == '\0') break;
                pcVar5 = pcVar5 + 1;
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
              pcVar5 = str_1000b771;
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
              pcVar5 = str_1000b785;
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
            (*(code *)api[3])(str_1000b799,str_1000b7b2,acStack_c5 + 1);
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
          pcVar5 = str_1000b7bb;
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
          (*(code *)api[3])(str_1000b818 + 0xf,str_1000b6e8,&local_4f0);
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

#undef DAT_1000b76b
#undef str_1000b668
#undef str_1000b67c
#undef str_1000b6e8
#undef str_1000b6fe
#undef str_1000b771
#undef str_1000b785
#undef str_1000b799
#undef str_1000b7b2
#undef str_1000b7bb
#undef str_1000b7e3
#undef str_1000b7f2
#undef str_1000b7f9
#undef str_1000b809
#undef str_1000b818
#undef local_f0
#undef local_60
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef cStack_4f1
#undef bStack_f1
#undef acStack_c5
#undef local_4f0

#undef DAT_1000bd0b
#define DAT_1000bd0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81fU)))
#undef DAT_1000bdd3
#define DAT_1000bdd3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8e7U)))
#undef DAT_1000be14
#define DAT_1000be14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x928U)))
#undef DAT_1000be46
#define DAT_1000be46 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95aU)))
#undef DAT_1000d000
#define DAT_1000d000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_1000d004
#define DAT_1000d004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b18U)))
#undef DAT_1000d008
#define DAT_1000d008 (*(uint *)(((uintptr_t)pf_module_state + 0x1b1cU)))
#undef DAT_1000d00c
#define DAT_1000d00c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef DAT_1000d010
#define DAT_1000d010 (*(uint *)(((uintptr_t)pf_module_state + 0x1b24U)))
#undef DAT_1000d014
#define DAT_1000d014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b28U)))
#undef DAT_1000d018
#define DAT_1000d018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b2cU)))
#undef DAT_1000d01c
#define DAT_1000d01c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b30U)))
#undef DAT_1000d01e
#define DAT_1000d01e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b32U)))
#undef DAT_1000d022
#define DAT_1000d022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b36U)))
#undef DAT_1000d023
#define DAT_1000d023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b37U)))
#undef DAT_1000d024
#define DAT_1000d024 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1b38U)))
#undef DAT_1000d026
#define DAT_1000d026 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1b3aU)))
#undef DAT_1000d028
#define DAT_1000d028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b3cU)))
#undef DAT_1000d02a
#define DAT_1000d02a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b3eU)))
#undef DAT_1000d02b
#define DAT_1000d02b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b3fU)))
#undef DAT_1000d02c
#define DAT_1000d02c (*(int *)(((uintptr_t)pf_module_state + 0x1b40U)))
#undef DAT_1000d030
#define DAT_1000d030 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef DAT_1000d032
#define DAT_1000d032 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b46U)))
#undef DAT_1000d034
#define DAT_1000d034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b48U)))
#undef DAT_1000d036
#define DAT_1000d036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4aU)))
#undef DAT_1000d037
#define DAT_1000d037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4bU)))
#undef DAT_1000d038
#define DAT_1000d038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4cU)))
#undef DAT_1000d140
#define DAT_1000d140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c54U)))
#undef DAT_1000d141
#define DAT_1000d141 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c55U)))
#undef DAT_1000d142
#define DAT_1000d142 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c56U)))
#undef DAT_1000d143
#define DAT_1000d143 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c57U)))
#undef DAT_1000d144
#define DAT_1000d144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c58U)))
#undef DAT_1000d145
#define DAT_1000d145 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c59U)))
#undef DAT_1000d146
#define DAT_1000d146 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5aU)))
#undef DAT_1000d147
#define DAT_1000d147 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5bU)))
#undef DAT_1000d148
#define DAT_1000d148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5cU)))
#undef DAT_1000d149
#define DAT_1000d149 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
#undef DAT_1000d14a
#define DAT_1000d14a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5eU)))
#undef DAT_1000d14b
#define DAT_1000d14b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5fU)))
#undef DAT_1000d14c
#define DAT_1000d14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c60U)))
#undef DAT_1000d14d
#define DAT_1000d14d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c61U)))
#undef DAT_1000d14e
#define DAT_1000d14e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c62U)))
#undef DAT_1000d14f
#define DAT_1000d14f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c63U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c64U)))
#undef DAT_1000d151
#define DAT_1000d151 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c65U)))
#undef DAT_1000d152
#define DAT_1000d152 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c66U)))
#undef DAT_1000d153
#define DAT_1000d153 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c67U)))
#undef DAT_1000d154
#define DAT_1000d154 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef DAT_1000d155
#define DAT_1000d155 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c69U)))
#undef DAT_1000d156
#define DAT_1000d156 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6aU)))
#undef DAT_1000d157
#define DAT_1000d157 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6bU)))
#undef DAT_1000d158
#define DAT_1000d158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6cU)))
#undef DAT_1000d159
#define DAT_1000d159 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6dU)))
#undef DAT_1000d15a
#define DAT_1000d15a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6eU)))
#undef DAT_1000d15b
#define DAT_1000d15b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6fU)))
#undef DAT_1000d15c
#define DAT_1000d15c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c70U)))
#undef DAT_1000d15d
#define DAT_1000d15d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c71U)))
#undef DAT_1000d15e
#define DAT_1000d15e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c72U)))
#undef DAT_1000d15f
#define DAT_1000d15f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c73U)))
#undef DAT_1000d160
#define DAT_1000d160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c74U)))
#undef DAT_1000d161
#define DAT_1000d161 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c75U)))
#undef DAT_1000d162
#define DAT_1000d162 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c76U)))
#undef DAT_1000d163
#define DAT_1000d163 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c77U)))
#undef DAT_1000d200
#define DAT_1000d200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d14U)))
#undef DAT_100152c0
#define DAT_100152c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd4U)))
#undef DAT_100152c1
#define DAT_100152c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd5U)))
#undef DAT_100152c2
#define DAT_100152c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd6U)))
#undef DAT_100152c3
#define DAT_100152c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd7U)))
#undef DAT_100152c4
#define DAT_100152c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd8U)))
#undef DAT_100152c5
#define DAT_100152c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd9U)))
#undef DAT_100152c6
#define DAT_100152c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddaU)))
#undef DAT_100152c7
#define DAT_100152c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddbU)))
#undef DAT_100152c8
#define DAT_100152c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddcU)))
#undef DAT_100152c9
#define DAT_100152c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dddU)))
#undef DAT_100152ca
#define DAT_100152ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddeU)))
#undef DAT_100152cb
#define DAT_100152cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddfU)))
#undef DAT_100152cc
#define DAT_100152cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de0U)))
#undef DAT_100152cd
#define DAT_100152cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de1U)))
#undef DAT_100152ce
#define DAT_100152ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de2U)))
#undef DAT_100152cf
#define DAT_100152cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de3U)))
#undef DAT_100152d0
#define DAT_100152d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de4U)))
#undef DAT_100152d4
#define DAT_100152d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de8U)))
#undef DAT_100152d5
#define DAT_100152d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de9U)))
#undef DAT_100152e0
#define DAT_100152e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df4U)))
#undef DAT_100152e1
#define DAT_100152e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df5U)))
#undef DAT_100152e2
#define DAT_100152e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df6U)))
#undef DAT_100152e3
#define DAT_100152e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df7U)))
#undef DAT_100152e4
#define DAT_100152e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df8U)))
#undef DAT_100152e5
#define DAT_100152e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df9U)))
#undef DAT_100152e6
#define DAT_100152e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dfaU)))
#undef DAT_100152e7
#define DAT_100152e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dfbU)))
#undef DAT_100152e8
#define DAT_100152e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dfcU)))
#undef DAT_100152e9
#define DAT_100152e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dfdU)))
#undef DAT_100152ea
#define DAT_100152ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dfeU)))
#undef DAT_100152eb
#define DAT_100152eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dffU)))
#undef DAT_100152f0
#define DAT_100152f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e04U)))
#undef _DAT_1000d00c
#define _DAT_1000d00c (*(uint *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef _DAT_1000d01c
#define _DAT_1000d01c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1b30U)))
#undef _DAT_1000d01e
#define _DAT_1000d01e (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b32U)))
#undef _DAT_1000d140
#define _DAT_1000d140 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c54U)))
#undef _DAT_100152d0
#define _DAT_100152d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9de4U)))
#undef str_1000b668
#define str_1000b668 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000b828
#define str_1000b828 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33cU)))
#undef str_1000b85f
#define str_1000b85f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1000b875
#define str_1000b875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_1000b886
#define str_1000b886 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39aU)))
#undef str_1000b89a
#define str_1000b89a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_1000b8ac
#define str_1000b8ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_1000bcb1
#define str_1000bcb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c5U)))
#undef str_1000bccf
#define str_1000bccf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e3U)))
#undef str_1000bceb
#define str_1000bceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
#undef str_1000bcf9
#define str_1000bcf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#undef str_1000bd11
#define str_1000bd11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_1000bd24
#define str_1000bd24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x838U)))
#undef str_1000bd3c
#define str_1000bd3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x850U)))
#undef str_1000bd53
#define str_1000bd53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x867U)))
#undef str_1000bd68
#define str_1000bd68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87cU)))
#undef str_1000bd85
#define str_1000bd85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x899U)))
#undef str_1000bd9b
#define str_1000bd9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8afU)))
#undef str_1000bdaa
#define str_1000bdaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8beU)))
#undef str_1000bdb9
#define str_1000bdb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_1000bdc8
#define str_1000bdc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1000bddb
#define str_1000bddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8efU)))
#undef str_1000bdf7
#define str_1000bdf7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90bU)))
#undef str_1000be18
#define str_1000be18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92cU)))
#undef str_1000be21
#define str_1000be21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x935U)))
#undef str_1000be2a
#define str_1000be2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93eU)))
#undef str_1000be32
#define str_1000be32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x946U)))
#undef str_1000be3d
#define str_1000be3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x951U)))
#define cStack_8ad (*(char *)(frame + 19))
#define auStack_7ec (*(undefined1 (*)[831])(frame + 212))
#define cStack_4ad (*(char *)(frame + 1043))
#define cStack_ad (*(char *)(frame + 2067))
#define local_8ac (*(undefined4 *)(frame + 20))
#define local_8a8 (*(int *)(frame + 24))
#define local_8a4 (*(uint *)(frame + 28))
#define local_8a0 (*(undefined4 *)(frame + 32))
#define local_89c (*(undefined2 *)(frame + 36))
#define local_89a (*(undefined4 *)(frame + 38))
#define local_86c (*(char (*)[64])(frame + 84))
#define local_82c (*(char (*)[64])(frame + 148))
#define local_4ac (*(undefined2 *)(frame + 1044))
#define local_ac (*(undefined4 *)(frame + 2068))
#define local_a0 (*(int *)(frame + 2080))
#define local_7c (*(uint *)(frame + 2116))
#define local_70 (*(byte *)(frame + 2128))
#define local_6c (*(uint *)(frame + 2132))
#define local_4c (*(undefined4 *)(frame + 2164))
#define local_48 (*(uint *)(frame + 2168))
#define local_44 (*(uint *)(frame + 2172))
#define local_40 (*(uint *)(frame + 2176))
#define local_3c (*(uint *)(frame + 2180))
#define local_38 (*(char * *)(frame + 2184))
#define local_34 (*(uint *)(frame + 2188))
#define local_2d (*(byte *)(frame + 2195))
#define local_2c (*(ushort *)(frame + 2196))
#define local_2a (*(undefined2 *)(frame + 2198))
#define local_28 (*(undefined4 *)(frame + 2200))
#define local_24 (*(byte (*)[12])(frame + 2204))
#define local_18 (*(ushort * *)(frame + 2216))
#define local_14 (*(int * *)(frame + 2220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a60(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  byte bVar12;
  byte bVar15;
  uint uVar13;
  int iVar14;
  char cVar16;
  byte bVar17;
  ushort uVar18;
  char *pcVar19;
  uint uVar20;
  ushort *puVar21;
  int *piVar22;
  undefined1 *puVar23;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  uVar18 = *(ushort *)(in_EDX + 4);
  bVar1 = false;
  local_18 = (ushort *)in_EDX;
  if (uVar18 < 0x10ec) {
    if (uVar18 == 0x106b) {
      bVar1 = false;
      if (*(short *)(in_EDX + 6) != 0x21) goto LAB_10001b0e;
    }
    else if ((uVar18 != 0x108e) || (bVar1 = false, *(short *)(in_EDX + 6) != 0x2bad))
    goto LAB_10001b0e;
  }
  else {
    if (uVar18 == 0x10ec) {
      bVar1 = false;
      if (*(short *)(in_EDX + 6) == -0x7fd7) goto LAB_10001b22;
    }
    else if (uVar18 == 0x8086) {
      bVar1 = false;
      if (*(short *)(in_EDX + 6) == 0x100e) goto LAB_10001b22;
    }
    else if (uVar18 == 0x1af4) {
      bVar1 = true;
      if ((1 < (uint)(*(ushort *)(in_EDX + 6)) - 0x1040U) && (*(ushort *)(in_EDX + 6) != 0x1000)) {
        bVar1 = false;
      }
      if (((uint)(*(ushort *)(in_EDX + 6)) - 0x1040U < 2) || (*(ushort *)(in_EDX + 6) == 0x1000))
      goto LAB_10001b22;
    }
LAB_10001b0e:
    if (in_EDX[8] != 2) {
      return;
    }
    if (in_EDX[9] != 0) {
      return;
    }
  }
LAB_10001b22:
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  PF_PART1(local_4ac, 0) = '\0';
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (auStack_7ec[uVar13 + 0x340] != '\0');
  local_14 = in_ECX;
  if (uVar13 + 1 < 0x400) {
    cVar16 = 'r';
    pcVar19 = str_1000b828;
    do {
      pcVar19 = pcVar19 + 1;
      auStack_7ec[uVar13 + 0x340] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  auStack_7ec[uVar13 + 0x340] = 0;
  piVar22 = local_14;
  puVar21 = local_18;
  if (bVar1) {
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (auStack_7ec[uVar13 + 0x340] != '\0');
    if (uVar13 + 1 < 0x400) {
      cVar16 = ' ';
      pcVar19 = str_1000b85f;
      do {
        pcVar19 = pcVar19 + 1;
        auStack_7ec[uVar13 + 0x340] = cVar16;
        uVar13 = uVar13 + 1;
        cVar16 = *pcVar19;
        if (cVar16 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
LAB_10001d17:
    auStack_7ec[uVar13 + 0x340] = 0;
  }
  else {
    if (uVar18 < 0x10ec) {
      if ((uVar18 != 0x106b) && (uVar18 != 0x108e)) goto LAB_10001d1f;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = str_1000b89a;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
      goto LAB_10001d17;
    }
    if (uVar18 == 0x10ec) {
      if (local_18[3] == 0x8029) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = ' ';
          pcVar19 = str_1000b886;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        goto LAB_10001d17;
      }
    }
    else if ((uVar18 == 0x8086) && (local_18[3] == 0x100e)) {
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = str_1000b875;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
      goto LAB_10001d17;
    }
  }
LAB_10001d1f:
  recovered_10004540((uint)&local_4ac,piVar22,(undefined1 *)puVar21,(int)&local_4ac);
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  if ((puVar21[2] != 0x1af4) || ((1 < (uint)puVar21[3] - 0x1040U && (puVar21[3] != 0x1000))))
  goto LAB_10002baf;
  local_2a = 0;
  local_28 = 0;
  DAT_1000d000 = (int *)0x0;
  DAT_1000d004 = 0;
  DAT_1000d008 = 0;
  _DAT_1000d00c = 0;
  DAT_1000d010 = 0;
  PF_PART1(DAT_1000d014, 0) = 0;
  PF_PART1(DAT_1000d014, 1) = 0;
  PF_PART1(DAT_1000d014, 2) = 0;
  PF_PART1(DAT_1000d014, 3) = 0;
  PF_PART1(DAT_1000d018, 0) = 0;
  PF_PART1(DAT_1000d018, 1) = 0;
  PF_PART1(DAT_1000d018, 2) = 0;
  PF_PART1(DAT_1000d018, 3) = 0;
  _DAT_1000d01c = 0;
  _DAT_1000d01e = 0;
  DAT_1000d022 = 0;
  DAT_1000d023 = 0;
  DAT_1000d024 = 0;
  DAT_1000d026 = 0;
  PF_PART1(DAT_1000d028, 0) = 0;
  PF_PART1(DAT_1000d028, 1) = 0;
  DAT_1000d02a = 0;
  DAT_1000d02b = 0;
  DAT_1000d02c = 0;
  DAT_1000d030 = 0;
  PF_PART1(DAT_1000d032, 0) = 0;
  PF_PART1(DAT_1000d032, 1) = 0;
  PF_PART1(DAT_1000d034, 0) = 0;
  PF_PART1(DAT_1000d034, 1) = 0;
  DAT_1000d036 = 0;
  DAT_1000d037 = 0;
  PF_PART1(DAT_1000d038, 0) = 0;
  PF_PART1(DAT_1000d038, 1) = 0;
  PF_PART1(DAT_1000d038, 2) = 0;
  PF_PART1(DAT_1000d038, 3) = 0;
  bVar1 = recovered_10009880(piVar22,puVar21,&local_ac);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (auStack_7ec[uVar13 + 0x340] != '\0');
    if (uVar13 + 1 < 0x400) {
      cVar16 = ' ';
      pcVar19 = str_1000bcb1;
      do {
        pcVar19 = pcVar19 + 1;
        auStack_7ec[uVar13 + 0x340] = cVar16;
        uVar13 = uVar13 + 1;
        cVar16 = *pcVar19;
        if (cVar16 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
  }
  else {
    recovered_1000a070(piVar22,&local_ac,0x18028);
    if ((local_70 & 8) == 0) {
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = str_1000bccf;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
    }
    else {
      if (local_a0 != 0) {
        iVar14 = 0;
        do {
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          if (((local_a0 != 0) && (piVar22 != (int *)0x0)) && (*piVar22 == 0x54584b57)) {
            if ((uint)piVar22[2] < 0xc0) {
              if (0x6b < (uint)piVar22[2]) goto LAB_1000208f;
            }
            else {
              pcVar11 = (code *)piVar22[0x2f];
              if (pcVar11 == (code *)0x0) {
LAB_1000208f:
                pcVar11 = (code *)piVar22[0x1a];
                if (pcVar11 == (code *)0x0) goto LAB_10002050;
              }
              iVar3 = (*pcVar11)(local_a0 + iVar14,1,local_24);
              if (iVar3 != 0) {
                local_24[iVar14 + -6] = local_24[0];
              }
            }
          }
LAB_10002050:
          iVar14 = iVar14 + 1;
        } while (iVar14 != 6);
        if (((local_a0 != 0) && (piVar22 != (int *)0x0)) && (*piVar22 == 0x54584b57)) {
          if ((uint)piVar22[2] < 0xc0) {
            if (0x6b < (uint)piVar22[2]) goto LAB_100020f0;
          }
          else {
            pcVar11 = (code *)piVar22[0x2f];
            if (pcVar11 == (code *)0x0) {
LAB_100020f0:
              pcVar11 = (code *)piVar22[0x1a];
              if (pcVar11 == (code *)0x0) goto LAB_1000211f;
            }
            (*pcVar11)(local_a0 + 6,2,&local_40);
            if ((local_a0 == 0) || (*piVar22 != 0x54584b57)) goto LAB_1000219b;
          }
LAB_1000211f:
          if ((uint)piVar22[2] < 0xc0) {
            if (0x6b < (uint)piVar22[2]) goto LAB_1000213b;
          }
          else {
            pcVar11 = (code *)piVar22[0x2f];
            if (pcVar11 == (code *)0x0) {
LAB_1000213b:
              pcVar11 = (code *)piVar22[0x1a];
              if (pcVar11 == (code *)0x0) goto LAB_10002166;
            }
            (*pcVar11)(local_a0 + 8,2,&local_48);
            if ((local_a0 == 0) || (*piVar22 != 0x54584b57)) goto LAB_1000219b;
          }
LAB_10002166:
          if ((uint)piVar22[2] < 0xc0) {
            if (0x6b < (uint)piVar22[2]) goto LAB_10002182;
          }
          else {
            pcVar11 = (code *)piVar22[0x2f];
            if (pcVar11 == (code *)0x0) {
LAB_10002182:
              pcVar11 = (code *)piVar22[0x1a];
              if (pcVar11 == (code *)0x0) goto LAB_1000219b;
            }
            (*pcVar11)(local_a0 + 10,2,&local_44);
          }
        }
      }
LAB_1000219b:
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = &DAT_1000bdd3;
        do {
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
          pcVar19 = pcVar19 + 1;
        } while (uVar13 < 0x3ff);
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      uVar5 = (uint)(byte)local_2a;
      if ((byte)local_2a < 0xa0) {
        uVar13 = (byte)local_2a >> 4 | 0x30;
      }
      else {
        uVar13 = (uint)(byte)(((byte)local_2a >> 4) + 0x37);
      }
      iVar14 = 0;
      do {
        uVar6 = (undefined1)uVar13;
        uVar13 = (uint)CONCAT11(uVar6,uVar6);
        uVar2 = (undefined1)uVar5;
        uVar5 = (uint)CONCAT11(uVar2,uVar2);
        if (iVar14 != 0) {
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar5 < 0x400) {
            auStack_7ec[uVar13 + 0x340] = 0x3a;
            uVar13 = uVar5;
          }
          auStack_7ec[uVar13 + 0x340] = 0;
          bVar12 = local_24[iVar14 + -6];
          uVar5 = (uint)CONCAT11(bVar12,uVar2);
          if (bVar12 < 0xa0) {
            uVar13 = CONCAT11(bVar12 >> 4,uVar6) | 0x3000;
          }
          else {
            uVar13 = (uint)CONCAT11((bVar12 >> 4) + 0x37,uVar6);
          }
        }
        uVar10 = 0;
        do {
          uVar20 = uVar10;
          uVar10 = uVar20 + 1;
        } while (auStack_7ec[uVar20 + 0x340] != '\0');
        if (uVar20 + 1 < 0x400) {
          auStack_7ec[uVar20 + 0x340] = (char)(uVar13 >> 8);
          auStack_7ec[uVar20 + 0x341] = 0;
        }
        uVar5 = uVar5 & 0xffff0fff;
        uVar10 = 0;
        do {
          uVar20 = uVar10;
          uVar10 = uVar20 + 1;
        } while (auStack_7ec[uVar20 + 0x340] != '\0');
        if (uVar20 + 1 < 0x400) {
          bVar12 = (byte)(uVar5 >> 8);
          if (bVar12 < 10) {
            bVar12 = bVar12 | 0x30;
          }
          else {
            bVar12 = bVar12 + 0x37;
          }
          uVar5 = (uint)CONCAT11(bVar12,(char)uVar5);
          auStack_7ec[uVar20 + 0x340] = bVar12;
          auStack_7ec[uVar20 + 0x341] = 0;
        }
        uVar10 = local_40;
        iVar14 = iVar14 + 1;
      } while (iVar14 != 6);
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar5 < 0x400) {
        auStack_7ec[uVar13 + 0x340] = 0x20;
        uVar13 = uVar5;
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = 'n';
        pcVar19 = str_1000bceb;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar5 < 0x400) {
        auStack_7ec[uVar13 + 0x340] = 0x3d;
        uVar13 = uVar5;
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      iVar14 = 8;
      do {
        uVar5 = uVar10 >> ((char)iVar14 * '\x04' - 4U & 0x1f) & 0xf;
        bVar12 = (byte)uVar5;
        if (uVar5 < 10) {
          bVar12 = bVar12 | 0x30;
        }
        else {
          bVar12 = bVar12 + 0x37;
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = bVar12;
          auStack_7ec[uVar13 + 0x341] = 0;
        }
        uVar5 = local_48;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar13 = 0;
      do {
        uVar20 = uVar13;
        uVar13 = uVar20 + 1;
      } while (auStack_7ec[uVar20 + 0x340] != '\0');
      if (uVar13 < 0x400) {
        auStack_7ec[uVar20 + 0x340] = 0x20;
        uVar20 = uVar13;
      }
      auStack_7ec[uVar20 + 0x340] = 0;
      uVar13 = 0;
      do {
        uVar20 = uVar13;
        uVar13 = uVar20 + 1;
      } while (auStack_7ec[uVar20 + 0x340] != '\0');
      if (uVar20 + 1 < 0x400) {
        cVar16 = 'n';
        pcVar19 = str_1000bcf9;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar20 + 0x340] = cVar16;
          uVar20 = uVar20 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar20 < 0x3ff);
      }
      auStack_7ec[uVar20 + 0x340] = 0;
      uVar13 = 0;
      do {
        uVar20 = uVar13;
        uVar13 = uVar20 + 1;
      } while (auStack_7ec[uVar20 + 0x340] != '\0');
      if (uVar13 < 0x400) {
        auStack_7ec[uVar20 + 0x340] = 0x3d;
        uVar20 = uVar13;
      }
      auStack_7ec[uVar20 + 0x340] = 0;
      piVar22 = local_14;
      local_34 = uVar10;
      if (uVar5 == 0) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          *(undefined2 *)(auStack_7ec + uVar13 + 0x340) = 0x30;
        }
      }
      else {
        uVar13 = 0;
        do {
          local_24[uVar13] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
          piVar22 = local_14;
          uVar10 = uVar13 + 1;
          if (8 < uVar13) break;
          bVar1 = 9 < uVar5;
          uVar5 = uVar5 / 10;
          uVar13 = uVar10;
        } while (bVar1);
        do {
          iVar14 = uVar10 - 1;
          uVar10 = uVar10 - 1;
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar13 + 1 < 0x400) {
            auStack_7ec[uVar13 + 0x340] = local_24[iVar14];
            auStack_7ec[uVar13 + 0x341] = 0;
          }
        } while (uVar10 != 0);
      }
      uVar5 = local_44;
      pcVar19 = (char *)local_44;
      if (local_44 != 0) {
        uVar13 = 0;
        do {
          uVar10 = uVar13;
          uVar13 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar13 < 0x400) {
          auStack_7ec[uVar10 + 0x340] = 0x20;
          uVar10 = uVar13;
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        uVar13 = 0;
        do {
          uVar10 = uVar13;
          uVar13 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar10 + 1 < 0x400) {
          cVar16 = 'n';
          pcVar19 = &DAT_1000bd0b;
          do {
            auStack_7ec[uVar10 + 0x340] = cVar16;
            uVar10 = uVar10 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
            pcVar19 = pcVar19 + 1;
          } while (uVar10 < 0x3ff);
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        uVar13 = 0;
        do {
          uVar10 = uVar13;
          uVar13 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar13 < 0x400) {
          auStack_7ec[uVar10 + 0x340] = 0x3d;
          uVar10 = uVar13;
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        local_38 = (char *)uVar5;
        uVar13 = 0;
        do {
          local_24[uVar13] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
          piVar22 = local_14;
          uVar10 = uVar13 + 1;
          if (8 < uVar13) break;
          bVar1 = 9 < uVar5;
          uVar5 = uVar5 / 10;
          uVar13 = uVar10;
        } while (bVar1);
        do {
          iVar14 = uVar10 - 1;
          uVar10 = uVar10 - 1;
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar13 + 1 < 0x400) {
            auStack_7ec[uVar13 + 0x340] = local_24[iVar14];
            auStack_7ec[uVar13 + 0x341] = 0;
          }
        } while (uVar10 != 0);
        pcVar19 = local_38;
      }
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar5 < 0x400) {
        auStack_7ec[uVar13 + 0x340] = 0x20;
        uVar13 = uVar5;
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar13 + 1 < 0x400) {
        cVar16 = 'n';
        pcVar4 = str_1000bd11;
        do {
          pcVar4 = pcVar4 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar4;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      if (uVar5 < 0x400) {
        auStack_7ec[uVar13 + 0x340] = 0x3d;
        uVar13 = uVar5;
      }
      auStack_7ec[uVar13 + 0x340] = 0;
      iVar14 = 8;
      do {
        uVar5 = local_7c >> ((char)iVar14 * '\x04' - 4U & 0x1f) & 0xf;
        bVar12 = (byte)uVar5;
        if (uVar5 < 10) {
          bVar12 = bVar12 | 0x30;
        }
        else {
          bVar12 = bVar12 + 0x37;
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = bVar12;
          auStack_7ec[uVar13 + 0x341] = 0;
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      if (1 < local_6c) {
        DAT_1000d008 = 0x5dc;
        if (pcVar19 != (char *)0x0) {
          DAT_1000d008 = (uint)pcVar19;
        }
        _DAT_1000d00c = local_34;
        DAT_1000d010 = (local_7c >> 0xe & 2) + 10;
        _DAT_1000d01c = local_2a;
        _DAT_1000d01e = local_28;
        iVar14 = -0x100;
        DAT_1000d000 = piVar22;
        do {
          (&DAT_1000d140)[iVar14] = 0;
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0);
        _DAT_1000d140 = 0;
        DAT_1000d144 = 0;
        DAT_1000d145 = 0;
        DAT_1000d146 = 0;
        DAT_1000d147 = 0;
        DAT_1000d148 = 0;
        DAT_1000d149 = 0;
        DAT_1000d14a = 0;
        DAT_1000d14b = 0;
        DAT_1000d14c = 0;
        DAT_1000d14d = 0;
        DAT_1000d14e = 0;
        DAT_1000d14f = 0;
        DAT_1000d150 = 0;
        DAT_1000d151 = 0;
        DAT_1000d152 = 0;
        DAT_1000d153 = 0;
        DAT_1000d154 = 0;
        DAT_1000d155 = 0;
        DAT_1000d156 = 0;
        DAT_1000d157 = 0;
        DAT_1000d158 = 0;
        DAT_1000d159 = 0;
        DAT_1000d15a = 0;
        DAT_1000d15b = 0;
        DAT_1000d15c = 0;
        DAT_1000d15d = 0;
        DAT_1000d15e = 0;
        DAT_1000d15f = 0;
        DAT_1000d160 = 0;
        DAT_1000d161 = 0;
        DAT_1000d162 = 0;
        DAT_1000d163 = 0;
        iVar14 = -0x84;
        do {
          *(undefined1 *)(iVar14 + ((uintptr_t)pf_module_state + 0x1d08U)) = 0;
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0);
        iVar14 = -0x80c0;
        do {
          (&DAT_100152c0)[iVar14] = 0;
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0);
        iVar14 = -0x20;
        puVar23 = &DAT_1000d200;
        cVar16 = '\0';
        while( true ) {
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          local_4c = 0;
          if ((((local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 0x74)
              ) || ((code *)local_14[0x1c] == (code *)0x0)) break;
          iVar3 = (*(code *)local_14[0x1c])(0,puVar23,0x80c,local_24,&local_4c);
          piVar22 = local_14;
          if (iVar3 == 0) break;
          (&DAT_1000d140)[iVar14 * 8] = local_24[0];
          (&DAT_1000d141)[iVar14 * 8] = local_24[1];
          (&DAT_1000d142)[iVar14 * 8] = local_24[2];
          (&DAT_1000d143)[iVar14 * 8] = local_24[3];
          (&DAT_1000d144)[iVar14 * 8] = (char)local_4c;
          (&DAT_1000d145)[iVar14 * 8] = (char)((uint)local_4c >> 8);
          (&DAT_1000d146)[iVar14 * 8] = (char)((uint)local_4c >> 0x10);
          (&DAT_1000d147)[iVar14 * 8] = (char)((uint)local_4c >> 0x18);
          *(undefined4 *)(&DAT_1000d148 + iVar14 * 8) = 0x80c;
          *(undefined4 *)(&DAT_1000d14c + iVar14 * 8) = 2;
          *(char *)(iVar14 + ((uintptr_t)pf_module_state + 0x1c78U)) = cVar16;
          *(undefined1 *)(iVar14 + ((uintptr_t)pf_module_state + 0x1c79U)) = 0;
          cVar16 = cVar16 + '\x01';
          puVar23 = puVar23 + 0x80c;
          iVar14 = iVar14 + 2;
          if (iVar14 == 0) goto code_r0x10002a42;
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = ' ';
          pcVar19 = str_1000bddb;
          while( true ) {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
            if (0x3fe < uVar13) break;
          }
        }
        goto LAB_10002b47;
      }
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (auStack_7ec[uVar13 + 0x340] != '\0');
      puVar21 = local_18;
      if (uVar13 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = str_1000bd24;
        do {
          pcVar19 = pcVar19 + 1;
          auStack_7ec[uVar13 + 0x340] = cVar16;
          uVar13 = uVar13 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar13 < 0x3ff);
      }
    }
  }
LAB_10002ba7:
  auStack_7ec[uVar13 + 0x340] = 0;
LAB_10002baf:
  local_38 = recovered_100096b0((int)puVar21);
  local_ac = local_ac & 0xffffff00;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)&local_ac + uVar13) != '\0');
  if (uVar13 + 1 < 0x60) {
    cVar16 = '/';
    pcVar19 = str_1000b8ac;
    do {
      pcVar19 = pcVar19 + 1;
      *(char *)((int)&local_ac + uVar13) = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x5f);
  }
  *(undefined1 *)((int)&local_ac + uVar13) = 0;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)&local_ac + uVar13) != '\0');
  if (uVar5 < 0x60) {
    *(undefined1 *)((int)&local_ac + uVar13) = 0x2f;
    uVar13 = uVar5;
  }
  *(undefined1 *)((int)&local_ac + uVar13) = 0;
  bVar12 = (byte)*puVar21;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)&local_ac + uVar13) != '\0');
  if (bVar12 < 0xa0) {
    bVar17 = bVar12 >> 4 | 0x30;
  }
  else {
    bVar17 = (bVar12 >> 4) + 0x37;
  }
  if (uVar13 + 1 < 0x60) {
    *(byte *)((int)&local_ac + uVar13) = bVar17;
    *(undefined1 *)((int)&local_ac + uVar13 + 1) = 0;
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)&local_ac + uVar13) != '\0');
  bVar15 = (byte)(bVar12 & 0xffff0f);
  if (bVar15 < 10) {
    uVar5 = (bVar12 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar5 = (uint)(byte)(bVar15 + 0x37) << 8;
  }
  bVar12 = (byte)(uVar5 >> 8);
  if (uVar13 + 1 < 0x60) {
    *(byte *)((int)&local_ac + uVar13) = bVar12;
    *(undefined1 *)((int)&local_ac + uVar13 + 1) = 0;
  }
  uVar13 = 0;
  do {
    uVar10 = uVar13;
    uVar13 = uVar10 + 1;
  } while (*(char *)((int)&local_ac + uVar10) != '\0');
  if (uVar13 < 0x60) {
    *(undefined1 *)((int)&local_ac + uVar10) = 0x3a;
    uVar10 = uVar13;
  }
  *(undefined1 *)((int)&local_ac + uVar10) = 0;
  bVar15 = *(byte *)((int)puVar21 + 1);
  uVar13 = 0;
  do {
    uVar10 = uVar13;
    uVar13 = uVar10 + 1;
  } while (*(char *)((int)&local_ac + uVar10) != '\0');
  if (bVar15 < 0xa0) {
    bVar7 = bVar15 >> 4 | 0x30;
  }
  else {
    bVar7 = (bVar15 >> 4) + 0x37;
  }
  if (uVar10 + 1 < 0x60) {
    *(byte *)((int)&local_ac + uVar10) = bVar7;
    *(undefined1 *)((int)&local_ac + uVar10 + 1) = 0;
  }
  uVar18 = CONCAT11(bVar15,bVar17) & 0xfff;
  uVar13 = 0;
  do {
    uVar10 = uVar13;
    uVar13 = uVar10 + 1;
  } while (*(char *)((int)&local_ac + uVar10) != '\0');
  bVar17 = (byte)(uVar18 >> 8);
  if (bVar17 < 10) {
    uVar18 = uVar18 | 0x3000;
  }
  else {
    uVar18 = CONCAT11(bVar17 + 0x37,(char)uVar18);
  }
  if (uVar10 + 1 < 0x60) {
    *(char *)((int)&local_ac + uVar10) = (char)(uVar18 >> 8);
    *(undefined1 *)((int)&local_ac + uVar10 + 1) = 0;
  }
  uVar13 = 0;
  do {
    uVar10 = uVar13;
    uVar13 = uVar10 + 1;
  } while (*(char *)((int)&local_ac + uVar10) != '\0');
  if (uVar13 < 0x60) {
    *(undefined1 *)((int)&local_ac + uVar10) = 0x2e;
    uVar10 = uVar13;
  }
  *(undefined1 *)((int)&local_ac + uVar10) = 0;
  uVar13 = (uint)(byte)puVar21[1];
  local_34 = CONCAT31(PF_PART3(local_34, 1),bVar7);
  if (uVar13 == 0) {
    uVar10 = 0;
    do {
      uVar20 = uVar10;
      uVar10 = uVar20 + 1;
    } while (*(char *)((int)&local_ac + uVar20) != '\0');
    if (uVar20 + 1 < 0x60) {
      *(undefined2 *)((int)&local_ac + uVar20) = 0x30;
    }
  }
  else {
    local_2c = uVar18;
    uVar18 = local_2c;
    local_2d = bVar12;
    uVar5 = uVar13;
    uVar10 = 0;
    do {
      local_24[uVar10] = (byte)(uVar5 % 10) | 0x30;
      uVar20 = uVar10 + 1;
      if (8 < uVar10) break;
      bVar1 = 9 < uVar5;
      uVar5 = uVar5 / 10;
      uVar10 = uVar20;
    } while (bVar1);
    uVar5 = (uint)bVar12 << 8;
    do {
      iVar14 = uVar20 - 1;
      uVar20 = uVar20 - 1;
      uVar10 = 0;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 + 1;
      } while (*(char *)((int)&local_ac + uVar9) != '\0');
      if (uVar9 + 1 < 0x60) {
        *(byte *)((int)&local_ac + uVar9) = local_24[iVar14];
        *(undefined1 *)((int)&local_ac + uVar9 + 1) = 0;
      }
    } while (uVar20 != 0);
  }
  local_8ac = local_8ac & 0xffffff00;
  uVar10 = 0;
  do {
    uVar20 = uVar10;
    uVar10 = uVar20 + 1;
  } while (local_86c[uVar20 - 0x40] != '\0');
  if (uVar20 + 1 < 0x400) {
    uVar5 = CONCAT31((int3)(uVar5 >> 8),0x70);
    pcVar19 = &DAT_1000be14;
    do {
      local_86c[uVar20 - 0x40] = (char)uVar5;
      uVar20 = uVar20 + 1;
      uVar5 = CONCAT31((int3)(uVar5 >> 8),*pcVar19);
      if (*pcVar19 == '\0') break;
      pcVar19 = pcVar19 + 1;
    } while (uVar20 < 0x3ff);
  }
  local_86c[uVar20 - 0x40] = '\0';
  uVar10 = 0;
  do {
    uVar20 = uVar10;
    uVar10 = uVar20 + 1;
  } while (local_86c[uVar20 - 0x40] != '\0');
  if (uVar20 + 1 < 0x400) {
    local_86c[uVar20 - 0x40] = (char)uVar18;
    local_86c[uVar20 - 0x3f] = '\0';
  }
  uVar10 = 0;
  do {
    uVar20 = uVar10;
    uVar10 = uVar20 + 1;
  } while (local_86c[uVar20 - 0x40] != '\0');
  if (uVar20 + 1 < 0x400) {
    local_86c[uVar20 - 0x40] = (char)(uVar5 >> 8);
    local_86c[uVar20 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar10 - 0x40] = ':';
    uVar10 = uVar5;
  }
  local_86c[uVar10 - 0x40] = '\0';
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar10 + 1 < 0x400) {
    local_86c[uVar10 - 0x40] = (char)local_34;
    local_86c[uVar10 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar10 + 1 < 0x400) {
    local_86c[uVar10 - 0x40] = (char)(uVar18 >> 8);
    local_86c[uVar10 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar10 - 0x40] = '.';
    uVar10 = uVar5;
  }
  local_86c[uVar10 - 0x40] = '\0';
  puVar21 = local_18;
  if (uVar13 == 0) {
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (local_86c[uVar13 - 0x40] != '\0');
    if (uVar13 + 1 < 0x400) {
      (local_86c + (uVar13 - 0x40))[0] = '0';
      (local_86c + (uVar13 - 0x40))[1] = '\0';
    }
  }
  else {
    uVar5 = 0;
    do {
      local_24[uVar5] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
      puVar21 = local_18;
      uVar10 = uVar5 + 1;
      if (8 < uVar5) break;
      bVar1 = 9 < uVar13;
      uVar5 = uVar10;
      uVar13 = uVar13 / 10;
    } while (bVar1);
    do {
      iVar14 = uVar10 - 1;
      uVar10 = uVar10 - 1;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (local_86c[uVar13 - 0x40] != '\0');
      if (uVar13 + 1 < 0x400) {
        local_86c[uVar13 - 0x40] = local_24[iVar14];
        local_86c[uVar13 - 0x3f] = '\0';
      }
    } while (uVar10 != 0);
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    cVar16 = ' ';
    pcVar19 = str_1000be18;
    do {
      pcVar19 = pcVar19 + 1;
      local_86c[uVar13 - 0x40] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  local_86c[uVar13 - 0x40] = '\0';
  uVar18 = puVar21[2];
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)(uVar18 >> 8);
    if (uVar18 < 0xa000) {
      bVar12 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar12 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar8 = uVar18 >> 8 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar8 = uVar18 >> 4 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)(uVar18 & 0xf);
    if ((uVar18 & 0xf) < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    cVar16 = ' ';
    pcVar19 = str_1000be21;
    do {
      pcVar19 = pcVar19 + 1;
      local_86c[uVar13 - 0x40] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  local_86c[uVar13 - 0x40] = '\0';
  uVar18 = puVar21[3];
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)(uVar18 >> 8);
    if (uVar18 < 0xa000) {
      bVar12 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar12 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar8 = uVar18 >> 8 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar8 = uVar18 >> 4 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    bVar12 = (byte)(uVar18 & 0xf);
    if ((uVar18 & 0xf) < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    cVar16 = ' ';
    pcVar19 = str_1000be2a;
    do {
      pcVar19 = pcVar19 + 1;
      local_86c[uVar13 - 0x40] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  local_86c[uVar13 - 0x40] = '\0';
  bVar12 = (byte)puVar21[4];
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar17 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar17;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar13 - 0x40] = '.';
    uVar13 = uVar5;
  }
  local_86c[uVar13 - 0x40] = '\0';
  bVar12 = *(byte *)((int)puVar21 + 9);
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar17 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar17;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar13 - 0x40] = '.';
    uVar13 = uVar5;
  }
  local_86c[uVar13 - 0x40] = '\0';
  bVar12 = (byte)puVar21[5];
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar17 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar17;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    cVar16 = ' ';
    pcVar19 = str_1000be32;
    do {
      pcVar19 = pcVar19 + 1;
      local_86c[uVar13 - 0x40] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  local_86c[uVar13 - 0x40] = '\0';
  bVar12 = *(byte *)((int)puVar21 + 0xb);
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 0xa0) {
      bVar17 = bVar12 >> 4 | 0x30;
    }
    else {
      bVar17 = (bVar12 >> 4) + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar17;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  bVar12 = bVar12 & 0xf;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (local_86c[uVar13 - 0x40] != '\0');
  if (uVar13 + 1 < 0x400) {
    if (bVar12 < 10) {
      bVar12 = bVar12 | 0x30;
    }
    else {
      bVar12 = bVar12 + 0x37;
    }
    local_86c[uVar13 - 0x40] = bVar12;
    local_86c[uVar13 - 0x3f] = '\0';
  }
  uVar13 = *(uint *)(puVar21 + 8);
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar10 - 0x40] = ' ';
    uVar10 = uVar5;
  }
  local_86c[uVar10 - 0x40] = '\0';
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar10 + 1 < 0x400) {
    cVar16 = 'c';
    pcVar19 = str_1000be3d;
    do {
      pcVar19 = pcVar19 + 1;
      local_86c[uVar10 - 0x40] = cVar16;
      uVar10 = uVar10 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar10 < 0x3ff);
  }
  local_86c[uVar10 - 0x40] = '\0';
  uVar5 = 0;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (local_86c[uVar10 - 0x40] != '\0');
  if (uVar5 < 0x400) {
    local_86c[uVar10 - 0x40] = '=';
    uVar10 = uVar5;
  }
  local_86c[uVar10 - 0x40] = '\0';
  iVar14 = 8;
  do {
    uVar10 = uVar13 >> ((char)iVar14 * '\x04' - 4U & 0x1f) & 0xf;
    bVar17 = (byte)uVar10;
    bVar12 = bVar17 + 0x37;
    uVar5 = 0;
    do {
      uVar20 = uVar5;
      uVar5 = uVar20 + 1;
    } while (local_86c[uVar20 - 0x40] != '\0');
    if (uVar20 + 1 < 0x400) {
      if (uVar10 < 10) {
        bVar12 = bVar17 | 0x30;
      }
      local_86c[uVar20 - 0x40] = bVar12;
      local_86c[uVar20 - 0x3f] = '\0';
    }
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  uVar5 = 0;
  puVar21 = local_18;
  do {
    local_34 = uVar5;
    uVar5 = *(uint *)(puVar21 + uVar5 * 2 + 10);
    if (uVar5 != 0) {
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        uVar13 = uVar10 + 1;
      } while (local_86c[uVar10 - 0x40] != '\0');
      if (uVar10 + 1 < 0x400) {
        cVar16 = ' ';
        pcVar19 = &DAT_1000be46;
        do {
          local_86c[uVar10 - 0x40] = cVar16;
          uVar10 = uVar10 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
          pcVar19 = pcVar19 + 1;
        } while (uVar10 < 0x3ff);
      }
      local_86c[uVar10 - 0x40] = '\0';
      if (local_34 == 0) {
        uVar13 = 0;
        do {
          uVar10 = uVar13;
          uVar13 = uVar10 + 1;
        } while (local_86c[uVar10 - 0x40] != '\0');
        if (uVar10 + 1 < 0x400) {
          (local_86c + (uVar10 - 0x40))[0] = '0';
          (local_86c + (uVar10 - 0x40))[1] = '\0';
        }
      }
      else {
        uVar13 = local_34;
        uVar10 = 0;
        do {
          local_24[uVar10] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
          uVar20 = uVar10 + 1;
          if (8 < uVar10) break;
          bVar1 = 9 < uVar13;
          uVar13 = uVar13 / 10;
          uVar10 = uVar20;
        } while (bVar1);
        do {
          iVar14 = uVar20 - 1;
          uVar20 = uVar20 - 1;
          uVar13 = 0;
          do {
            uVar10 = uVar13;
            uVar13 = uVar10 + 1;
          } while (local_86c[uVar10 - 0x40] != '\0');
          if (uVar10 + 1 < 0x400) {
            local_86c[uVar10 - 0x40] = local_24[iVar14];
            local_86c[uVar10 - 0x3f] = '\0';
          }
        } while (uVar20 != 0);
        puVar21 = local_18;
      }
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        uVar13 = uVar10 + 1;
      } while (local_86c[uVar10 - 0x40] != '\0');
      if (uVar13 < 0x400) {
        local_86c[uVar10 - 0x40] = '=';
        uVar10 = uVar13;
      }
      local_86c[uVar10 - 0x40] = '\0';
      iVar14 = 8;
      do {
        uVar10 = uVar5 >> ((char)iVar14 * '\x04' - 4U & 0x1f) & 0xf;
        bVar17 = (byte)uVar10;
        bVar12 = bVar17 + 0x37;
        uVar13 = 0;
        do {
          uVar20 = uVar13;
          uVar13 = uVar20 + 1;
        } while (local_86c[uVar20 - 0x40] != '\0');
        if (uVar20 + 1 < 0x400) {
          if (uVar10 < 10) {
            bVar12 = bVar17 | 0x30;
          }
          local_86c[uVar20 - 0x40] = bVar12;
          local_86c[uVar20 - 0x3f] = '\0';
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    piVar22 = local_14;
    cVar16 = (char)local_4ac;
    uVar5 = local_34 + 1;
  } while (uVar5 != 6);
  if ((char)local_4ac != '\0') {
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (local_86c[uVar13 - 0x40] != '\0');
    if (uVar5 < 0x400) {
      local_86c[uVar13 - 0x40] = ' ';
      uVar13 = uVar5;
    }
    local_86c[uVar13 - 0x40] = '\0';
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (local_86c[uVar13 - 0x40] != '\0');
    if (uVar13 + 1 < 0x400) {
      pcVar19 = (char *)((int)&local_4ac + 1);
      do {
        local_86c[uVar13 - 0x40] = cVar16;
        uVar13 = uVar13 + 1;
        cVar16 = *pcVar19;
        if (cVar16 == '\0') break;
        pcVar19 = pcVar19 + 1;
      } while (uVar13 < 0x3ff);
    }
    local_86c[uVar13 - 0x40] = '\0';
  }
  if ((piVar22 != (int *)0x0) && (pcVar11 = (code *)piVar22[3], pcVar11 != (code *)0x0)) {
    (*pcVar11)(&local_ac,local_38,&local_8ac);
  }
  return;
code_r0x10002a42:
  _DAT_1000d140 = 0x100000;
  iVar14 = recovered_1000abe0(local_14,&local_ac,0,0x10,((uintptr_t)pf_module_state + 0x1b54U),0x100,((uintptr_t)pf_module_state + 0x1c54U),0x24,((uintptr_t)pf_module_state + 0x1c84U),
                              0x84,&DAT_1000d024);
  if (iVar14 != 0) {
    DAT_1000d026 = 0x10;
    if ((DAT_1000d02c != 0) && (*piVar22 == 0x54584b57)) {
      uVar5 = piVar22[2];
      if (uVar5 < 0x7c) {
LAB_10002ae9:
        if (0x6f < uVar5) {
LAB_10002af2:
          pcVar11 = (code *)piVar22[0x1b];
          if (pcVar11 != (code *)0x0) goto LAB_1000398d;
        }
      }
      else {
        if ((code *)piVar22[0x1e] != (code *)0x0) {
          (*(code *)piVar22[0x1e])();
          if ((DAT_1000d02c == 0) || (*piVar22 != 0x54584b57)) goto LAB_1000399a;
          uVar5 = piVar22[2];
        }
        if (uVar5 < 0xc4) goto LAB_10002ae9;
        pcVar11 = (code *)piVar22[0x30];
        if (pcVar11 == (code *)0x0) goto LAB_10002af2;
LAB_1000398d:
        (*pcVar11)(DAT_1000d02c,2,0);
      }
    }
LAB_1000399a:
    DAT_100152c0 = 0;
    DAT_100152c1 = 0;
    DAT_100152c2 = 0;
    DAT_100152c3 = 0;
    DAT_100152c4 = 0;
    DAT_100152c5 = 0;
    DAT_100152c6 = 0;
    DAT_100152c7 = 0;
    DAT_100152c8 = 0;
    DAT_100152c9 = 0;
    DAT_100152ca = 0;
    DAT_100152cb = 0;
    DAT_100152cc = 0;
    DAT_100152cd = 0;
    DAT_100152ce = 0;
    DAT_100152cf = 0;
    _DAT_100152d0 = 0;
    DAT_100152d4 = 0;
    DAT_100152d5 = 0;
    DAT_100152e0 = 0;
    DAT_100152e1 = 0;
    DAT_100152e2 = 0;
    DAT_100152e3 = 0;
    DAT_100152e4 = 0;
    DAT_100152e5 = 0;
    DAT_100152e6 = 0;
    DAT_100152e7 = 0;
    DAT_100152e8 = 0;
    DAT_100152e9 = 0;
    DAT_100152ea = 0;
    DAT_100152eb = 0;
    iVar14 = -0x80c;
    do {
      *(undefined1 *)(iVar14 + ((uintptr_t)pf_module_state + 0xa610U)) = 0;
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0);
    if ((((*piVar22 == 0x54584b57) && (0x73 < (uint)piVar22[2])) &&
        ((code *)piVar22[0x1c] != (code *)0x0)) &&
       (iVar14 = (*(code *)piVar22[0x1c])(0,&DAT_100152f0,0x80c,&DAT_1000d014,&DAT_1000d018),
       iVar14 != 0)) {
      _DAT_100152d0 = 0;
      iVar14 = recovered_1000abe0(piVar22,&local_ac,1,1,((uintptr_t)pf_module_state + 0x9dd4U),0x10,((uintptr_t)pf_module_state + 0x9de4U),6,((uintptr_t)pf_module_state + 0x9df4U),0xc,
                                  &DAT_1000d030);
      if (iVar14 == 0) goto LAB_10002b4f;
      if ((local_ac != 0) && (*piVar22 == 0x54584b57)) {
        iVar14 = local_ac + 0x14;
        if ((uint)piVar22[2] < 0xc0) {
          if (0x6b < (uint)piVar22[2]) goto LAB_10003ba1;
        }
        else {
          pcVar11 = (code *)local_14[0x2f];
          if (pcVar11 == (code *)0x0) {
LAB_10003ba1:
            pcVar11 = (code *)local_14[0x1a];
            if (pcVar11 == (code *)0x0) goto LAB_10003bda;
          }
          (*pcVar11)(iVar14,1,&local_3c);
          piVar22 = local_14;
          if ((local_ac == 0) || (*local_14 != 0x54584b57)) goto LAB_10003c6b;
          iVar14 = local_ac + 0x14;
        }
LAB_10003bda:
        uVar5 = local_14[2];
        if (uVar5 < 0xc4) {
          if (0x6f < uVar5) goto LAB_10003bff;
LAB_10003c3e:
          piVar22 = local_14;
          if (0x6b < uVar5) {
LAB_10003c55:
            pcVar11 = (code *)local_14[0x1a];
            piVar22 = local_14;
            if (pcVar11 != (code *)0x0) goto LAB_10003c5c;
          }
        }
        else {
          pcVar11 = (code *)local_14[0x30];
          if (pcVar11 == (code *)0x0) {
LAB_10003bff:
            pcVar11 = (code *)local_14[0x1b];
            if (pcVar11 != (code *)0x0) goto LAB_10003c09;
          }
          else {
LAB_10003c09:
            (*pcVar11)(iVar14,1,local_3c | 4);
            piVar22 = local_14;
            if ((local_ac == 0) || (*local_14 != 0x54584b57)) goto LAB_10003c6b;
            iVar14 = local_ac + 0x14;
          }
          uVar5 = local_14[2];
          if (uVar5 < 0xc0) goto LAB_10003c3e;
          pcVar11 = (code *)local_14[0x2f];
          if (pcVar11 == (code *)0x0) goto LAB_10003c55;
LAB_10003c5c:
          piVar22 = local_14;
          (*pcVar11)(iVar14,1,&local_3c);
        }
      }
LAB_10003c6b:
      DAT_1000d004 = 1;
      if ((DAT_1000d02c != 0) && (*piVar22 == 0x54584b57)) {
        uVar5 = piVar22[2];
        if (uVar5 < 0x7c) {
LAB_10003cb9:
          if (0x6f < uVar5) {
LAB_10003cc1:
            pcVar11 = (code *)local_14[0x1b];
            if (pcVar11 != (code *)0x0) goto LAB_10003cd7;
          }
        }
        else {
          if ((code *)local_14[0x1e] != (code *)0x0) {
            (*(code *)local_14[0x1e])();
            if ((DAT_1000d02c == 0) || (*local_14 != 0x54584b57)) goto LAB_10003ce4;
            uVar5 = local_14[2];
          }
          if (uVar5 < 0xc4) goto LAB_10003cb9;
          pcVar11 = (code *)local_14[0x30];
          if (pcVar11 == (code *)0x0) goto LAB_10003cc1;
LAB_10003cd7:
          (*pcVar11)(DAT_1000d02c,2,0);
        }
      }
LAB_10003ce4:
      iVar14 = -0xc0;
      do {
        auStack_7ec[iVar14] = 0;
        iVar14 = iVar14 + 1;
      } while (iVar14 != 0);
      local_8ac = 0xc0;
      local_8a8 = (local_40 & 1) * 2 + 0xd;
      local_8a4 = DAT_1000d008;
      local_8a0 = 0x800;
      local_89c = local_2a;
      local_89a = local_28;
      local_86c[0] = '\0';
      uVar5 = 0xffffffff;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (local_86c[uVar13 + 1] != '\0');
      if (uVar13 + 2 < 0x40) {
        cVar16 = 'q';
        pcVar19 = str_1000bd53;
        do {
          pcVar19 = pcVar19 + 1;
          local_86c[uVar5] = cVar16;
          uVar5 = uVar5 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar5 < 0x3f);
      }
      local_86c[uVar5] = '\0';
      local_82c[0] = '\0';
      uVar5 = 0xffffffff;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (local_82c[uVar13 + 1] != '\0');
      if (uVar13 + 2 < 0x40) {
        cVar16 = 'q';
        pcVar19 = str_1000b668;
        do {
          pcVar19 = pcVar19 + 1;
          local_82c[uVar5] = cVar16;
          uVar5 = uVar5 + 1;
          cVar16 = *pcVar19;
          if (cVar16 == '\0') break;
        } while (uVar5 < 0x3f);
      }
      local_82c[uVar5] = '\0';
      if ((((*local_14 == 0x54584b57) && (0xcb < (uint)local_14[2])) &&
          ((code *)local_14[0x32] != (code *)0x0)) &&
         (iVar14 = (*(code *)local_14[0x32])(&local_8ac,recovered_1000a690,recovered_1000a8c0),
         iVar14 != 0)) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = ' ';
          pcVar19 = str_1000bd85;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x20;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = 'n';
          pcVar19 = str_1000bd9b;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x3d;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        if (DAT_1000d010 == 0) {
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar13 + 1 < 0x400) {
            *(undefined2 *)(auStack_7ec + uVar13 + 0x340) = 0x30;
          }
        }
        else {
          uVar5 = DAT_1000d010;
          uVar13 = 0;
          do {
            local_24[uVar13] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
            uVar10 = uVar13 + 1;
            if (8 < uVar13) break;
            bVar1 = 9 < uVar5;
            uVar5 = uVar5 / 10;
            uVar13 = uVar10;
          } while (bVar1);
          do {
            iVar14 = uVar10 - 1;
            uVar10 = uVar10 - 1;
            uVar5 = 0;
            do {
              uVar13 = uVar5;
              uVar5 = uVar13 + 1;
            } while (auStack_7ec[uVar13 + 0x340] != '\0');
            if (uVar13 + 1 < 0x400) {
              auStack_7ec[uVar13 + 0x340] = local_24[iVar14];
              auStack_7ec[uVar13 + 0x341] = 0;
            }
          } while (uVar10 != 0);
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x20;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = 'n';
          pcVar19 = str_1000bdaa;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x3d;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        if (DAT_1000d024 == 0) {
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar13 + 1 < 0x400) {
            *(undefined2 *)(auStack_7ec + uVar13 + 0x340) = 0x30;
          }
        }
        else {
          uVar5 = (uint)DAT_1000d024;
          uVar13 = 0;
          do {
            local_24[uVar13] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
            uVar10 = uVar13 + 1;
            if (8 < uVar13) break;
            bVar1 = 9 < uVar5;
            uVar5 = uVar5 / 10;
            uVar13 = uVar10;
          } while (bVar1);
          do {
            iVar14 = uVar10 - 1;
            uVar10 = uVar10 - 1;
            uVar5 = 0;
            do {
              uVar13 = uVar5;
              uVar5 = uVar13 + 1;
            } while (auStack_7ec[uVar13 + 0x340] != '\0');
            if (uVar13 + 1 < 0x400) {
              auStack_7ec[uVar13 + 0x340] = local_24[iVar14];
              auStack_7ec[uVar13 + 0x341] = 0;
            }
          } while (uVar10 != 0);
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x20;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar16 = 'n';
          pcVar19 = str_1000bdb9;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar13 + 0x340] = cVar16;
            uVar13 = uVar13 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (auStack_7ec[uVar13 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar13 + 0x340] = 0x3d;
          uVar13 = uVar5;
        }
        auStack_7ec[uVar13 + 0x340] = 0;
        if (DAT_1000d030 == 0) {
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (auStack_7ec[uVar13 + 0x340] != '\0');
          if (uVar13 + 1 < 0x400) {
            *(undefined2 *)(auStack_7ec + uVar13 + 0x340) = 0x30;
          }
        }
        else {
          uVar5 = (uint)DAT_1000d030;
          uVar13 = 0;
          do {
            local_24[uVar13] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
            uVar10 = uVar13 + 1;
            if (8 < uVar13) break;
            bVar1 = 9 < uVar5;
            uVar5 = uVar5 / 10;
            uVar13 = uVar10;
          } while (bVar1);
          do {
            iVar14 = uVar10 - 1;
            uVar10 = uVar10 - 1;
            uVar5 = 0;
            do {
              uVar13 = uVar5;
              uVar5 = uVar13 + 1;
            } while (auStack_7ec[uVar13 + 0x340] != '\0');
            if (uVar13 + 1 < 0x400) {
              auStack_7ec[uVar13 + 0x340] = local_24[iVar14];
              auStack_7ec[uVar13 + 0x341] = 0;
            }
          } while (uVar10 != 0);
        }
        uVar13 = local_3c;
        uVar5 = 0;
        do {
          uVar10 = uVar5;
          uVar5 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar10 + 0x340] = 0x20;
          uVar10 = uVar5;
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar10 = uVar5;
          uVar5 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar10 + 1 < 0x400) {
          cVar16 = 'n';
          pcVar19 = str_1000bdc8;
          do {
            pcVar19 = pcVar19 + 1;
            auStack_7ec[uVar10 + 0x340] = cVar16;
            uVar10 = uVar10 + 1;
            cVar16 = *pcVar19;
            if (cVar16 == '\0') break;
          } while (uVar10 < 0x3ff);
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        uVar5 = 0;
        do {
          uVar10 = uVar5;
          uVar5 = uVar10 + 1;
        } while (auStack_7ec[uVar10 + 0x340] != '\0');
        if (uVar5 < 0x400) {
          auStack_7ec[uVar10 + 0x340] = 0x3d;
          uVar10 = uVar5;
        }
        auStack_7ec[uVar10 + 0x340] = 0;
        puVar21 = local_18;
        iVar14 = 8;
        do {
          uVar5 = uVar13 >> ((char)iVar14 * '\x04' - 4U & 0x1f) & 0xf;
          bVar12 = (byte)uVar5;
          if (uVar5 < 10) {
            bVar12 = bVar12 | 0x30;
          }
          else {
            bVar12 = bVar12 + 0x37;
          }
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            uVar5 = uVar10 + 1;
          } while (auStack_7ec[uVar10 + 0x340] != '\0');
          if (uVar10 + 1 < 0x400) {
            auStack_7ec[uVar10 + 0x340] = bVar12;
            auStack_7ec[uVar10 + 0x341] = 0;
          }
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      else {
        recovered_100042c0((int)&local_4ac,0x400,str_1000bd68);
        DAT_1000d004 = 0;
        puVar21 = local_18;
      }
      goto LAB_10002baf;
    }
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (auStack_7ec[uVar13 + 0x340] != '\0');
    if (uVar13 + 1 < 0x400) {
      cVar16 = ' ';
      pcVar19 = str_1000bdf7;
      do {
        pcVar19 = pcVar19 + 1;
        auStack_7ec[uVar13 + 0x340] = cVar16;
        uVar13 = uVar13 + 1;
        cVar16 = *pcVar19;
        if (cVar16 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
LAB_10002b47:
    auStack_7ec[uVar13 + 0x340] = 0;
  }
LAB_10002b4f:
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (auStack_7ec[uVar13 + 0x340] != '\0');
  puVar21 = local_18;
  if (uVar13 + 1 < 0x400) {
    cVar16 = ' ';
    pcVar19 = str_1000bd3c;
    do {
      pcVar19 = pcVar19 + 1;
      auStack_7ec[uVar13 + 0x340] = cVar16;
      uVar13 = uVar13 + 1;
      cVar16 = *pcVar19;
      if (cVar16 == '\0') break;
    } while (uVar13 < 0x3ff);
  }
  goto LAB_10002ba7;
}

#undef DAT_1000bd0b
#undef DAT_1000bdd3
#undef DAT_1000be14
#undef DAT_1000be46
#undef DAT_1000d000
#undef DAT_1000d004
#undef DAT_1000d008
#undef DAT_1000d00c
#undef DAT_1000d010
#undef DAT_1000d014
#undef DAT_1000d018
#undef DAT_1000d01c
#undef DAT_1000d01e
#undef DAT_1000d022
#undef DAT_1000d023
#undef DAT_1000d024
#undef DAT_1000d026
#undef DAT_1000d028
#undef DAT_1000d02a
#undef DAT_1000d02b
#undef DAT_1000d02c
#undef DAT_1000d030
#undef DAT_1000d032
#undef DAT_1000d034
#undef DAT_1000d036
#undef DAT_1000d037
#undef DAT_1000d038
#undef DAT_1000d140
#undef DAT_1000d141
#undef DAT_1000d142
#undef DAT_1000d143
#undef DAT_1000d144
#undef DAT_1000d145
#undef DAT_1000d146
#undef DAT_1000d147
#undef DAT_1000d148
#undef DAT_1000d149
#undef DAT_1000d14a
#undef DAT_1000d14b
#undef DAT_1000d14c
#undef DAT_1000d14d
#undef DAT_1000d14e
#undef DAT_1000d14f
#undef DAT_1000d150
#undef DAT_1000d151
#undef DAT_1000d152
#undef DAT_1000d153
#undef DAT_1000d154
#undef DAT_1000d155
#undef DAT_1000d156
#undef DAT_1000d157
#undef DAT_1000d158
#undef DAT_1000d159
#undef DAT_1000d15a
#undef DAT_1000d15b
#undef DAT_1000d15c
#undef DAT_1000d15d
#undef DAT_1000d15e
#undef DAT_1000d15f
#undef DAT_1000d160
#undef DAT_1000d161
#undef DAT_1000d162
#undef DAT_1000d163
#undef DAT_1000d200
#undef DAT_100152c0
#undef DAT_100152c1
#undef DAT_100152c2
#undef DAT_100152c3
#undef DAT_100152c4
#undef DAT_100152c5
#undef DAT_100152c6
#undef DAT_100152c7
#undef DAT_100152c8
#undef DAT_100152c9
#undef DAT_100152ca
#undef DAT_100152cb
#undef DAT_100152cc
#undef DAT_100152cd
#undef DAT_100152ce
#undef DAT_100152cf
#undef DAT_100152d0
#undef DAT_100152d4
#undef DAT_100152d5
#undef DAT_100152e0
#undef DAT_100152e1
#undef DAT_100152e2
#undef DAT_100152e3
#undef DAT_100152e4
#undef DAT_100152e5
#undef DAT_100152e6
#undef DAT_100152e7
#undef DAT_100152e8
#undef DAT_100152e9
#undef DAT_100152ea
#undef DAT_100152eb
#undef DAT_100152f0
#undef _DAT_1000d00c
#undef _DAT_1000d01c
#undef _DAT_1000d01e
#undef _DAT_1000d140
#undef _DAT_100152d0
#undef str_1000b668
#undef str_1000b828
#undef str_1000b85f
#undef str_1000b875
#undef str_1000b886
#undef str_1000b89a
#undef str_1000b8ac
#undef str_1000bcb1
#undef str_1000bccf
#undef str_1000bceb
#undef str_1000bcf9
#undef str_1000bd11
#undef str_1000bd24
#undef str_1000bd3c
#undef str_1000bd53
#undef str_1000bd68
#undef str_1000bd85
#undef str_1000bd9b
#undef str_1000bdaa
#undef str_1000bdb9
#undef str_1000bdc8
#undef str_1000bddb
#undef str_1000bdf7
#undef str_1000be18
#undef str_1000be21
#undef str_1000be2a
#undef str_1000be32
#undef str_1000be3d
#undef cStack_8ad
#undef auStack_7ec
#undef cStack_4ad
#undef cStack_ad
#undef local_8ac
#undef local_8a8
#undef local_8a4
#undef local_8a0
#undef local_89c
#undef local_89a
#undef local_86c
#undef local_82c
#undef local_4ac
#undef local_ac
#undef local_a0
#undef local_7c
#undef local_70
#undef local_6c
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_2d
#undef local_2c
#undef local_2a
#undef local_28
#undef local_24
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

void recovered_100042c0(int in_ECX,uint in_EDX,char *param_3)

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


#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004330
 */

undefined4
recovered_10004330(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef DAT_1000bb66
#define DAT_1000bb66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67aU)))
#undef DAT_1000bb6e
#define DAT_1000bb6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682U)))
#undef DAT_1000bba1
#define DAT_1000bba1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b5U)))
#undef DAT_1000bba9
#define DAT_1000bba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bdU)))
#undef DAT_1000bbb1
#define DAT_1000bbb1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef DAT_1000bbc5
#define DAT_1000bbc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d9U)))
#undef DAT_1000bbcd
#define DAT_1000bbcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e1U)))
#undef DAT_1000bbd5
#define DAT_1000bbd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e9U)))
#undef DAT_1000bbdd
#define DAT_1000bbdd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f1U)))
#undef DAT_1000bbf0
#define DAT_1000bbf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x704U)))
#undef DAT_1000bca4
#define DAT_1000bca4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b8U)))
#undef str_1000b785
#define str_1000b785 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_1000b8b9
#define str_1000b8b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cdU)))
#undef str_1000b8c9
#define str_1000b8c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ddU)))
#undef str_1000b8e1
#define str_1000b8e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_1000b8f9
#define str_1000b8f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_1000b912
#define str_1000b912 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#undef str_1000b923
#define str_1000b923 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#undef str_1000b933
#define str_1000b933 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_1000b942
#define str_1000b942 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x456U)))
#undef str_1000b94b
#define str_1000b94b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45fU)))
#undef str_1000b967
#define str_1000b967 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_1000b972
#define str_1000b972 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_1000b982
#define str_1000b982 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_1000b989
#define str_1000b989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_1000b999
#define str_1000b999 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4adU)))
#undef str_1000b9a6
#define str_1000b9a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_1000b9bc
#define str_1000b9bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d0U)))
#undef str_1000b9d2
#define str_1000b9d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e6U)))
#undef str_1000b9e8
#define str_1000b9e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fcU)))
#undef str_1000b9fe
#define str_1000b9fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_1000ba17
#define str_1000ba17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#undef str_1000ba2f
#define str_1000ba2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_1000ba3c
#define str_1000ba3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x550U)))
#undef str_1000ba4d
#define str_1000ba4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x561U)))
#undef str_1000ba61
#define str_1000ba61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x575U)))
#undef str_1000ba71
#define str_1000ba71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_1000ba88
#define str_1000ba88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59cU)))
#undef str_1000ba9b
#define str_1000ba9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5afU)))
#undef str_1000baa5
#define str_1000baa5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b9U)))
#undef str_1000bab8
#define str_1000bab8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ccU)))
#undef str_1000bacf
#define str_1000bacf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e3U)))
#undef str_1000badb
#define str_1000badb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#undef str_1000bae7
#define str_1000bae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#undef str_1000baf4
#define str_1000baf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x608U)))
#undef str_1000bafe
#define str_1000bafe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x612U)))
#undef str_1000bb12
#define str_1000bb12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x626U)))
#undef str_1000bb21
#define str_1000bb21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x635U)))
#undef str_1000bb34
#define str_1000bb34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x648U)))
#undef str_1000bb46
#define str_1000bb46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65aU)))
#undef str_1000bb5c
#define str_1000bb5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x670U)))
#undef str_1000bb75
#define str_1000bb75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x689U)))
#undef str_1000bb7f
#define str_1000bb7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x693U)))
#undef str_1000bb8b
#define str_1000bb8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69fU)))
#undef str_1000bbb8
#define str_1000bbb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ccU)))
#undef str_1000bbe4
#define str_1000bbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f8U)))
#undef str_1000bbf5
#define str_1000bbf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x709U)))
#undef str_1000bbff
#define str_1000bbff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x713U)))
#undef str_1000bc14
#define str_1000bc14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x728U)))
#undef str_1000bc25
#define str_1000bc25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x739U)))
#undef str_1000bc31
#define str_1000bc31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x745U)))
#undef str_1000bc3d
#define str_1000bc3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x751U)))
#undef str_1000bc49
#define str_1000bc49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75dU)))
#undef str_1000bc58
#define str_1000bc58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76cU)))
#undef str_1000bc62
#define str_1000bc62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_1000bc70
#define str_1000bc70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x784U)))
#undef str_1000bc81
#define str_1000bc81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x795U)))
#undef str_1000bc8d
#define str_1000bc8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a1U)))
#undef str_1000bc99
#define str_1000bc99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7adU)))
#undef str_1000bca8
#define str_1000bca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
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
 * Address: 0x10004540
 */

void recovered_10004540(uint in_EAX,int *in_ECX,undefined1 *in_EDX,int param_4)

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
LAB_10004647:
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_1000b8c9;
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
joined_r0x1000469e:
    local_3c = 0;
    if (bVar16) {
LAB_100046a4:
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      local_48 = 0;
      if (local_14 == (ushort *)0x0) {
        uVar12 = 1;
        if (local_3c == 0) {
          uVar12 = 0;
        }
        goto LAB_1000707a;
      }
      if (((char)local_14[4] == '\x01') && (*(char *)((int)local_14 + 9) == '\x06')) {
        if (((((*(uint *)(local_14 + 0x12) & 7) != 4) &&
             ((uVar12 = *(uint *)(local_14 + 0x14), (uVar12 & 6) != 4 && (uVar12 != 0)))) &&
            ((uVar12 & 1) == 0)) && (uVar12 = uVar12 & 0xfffffff0, uVar12 != 0)) {
          local_28 = 0;
          local_a4 = 0;
          if (((char)local_2c == '\0') && (*in_ECX == 0x54584b57)) {
            if (0xbb < (uint)in_ECX[2]) {
              if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_10007315;
              iVar1 = (*(code *)in_ECX[0x2e])(uVar12,0,0x1000,&local_28);
              if (iVar1 == 0) goto LAB_100046e6;
              local_1c = local_28;
LAB_1000734b:
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
                  pcVar7 = str_1000bb5c;
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
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10008543;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10008543:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10008575;
                  }
                  (*pcVar4)(local_1c,4,&local_30);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10009207;
                }
LAB_10008575:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10008e7d;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10008e7d:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10008eb3;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 4,4,&local_38);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10009207;
                }
LAB_10008eb3:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10009172;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10009172:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_100091a0;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 0xc,4,&local_44);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_10009207;
                }
LAB_100091a0:
                local_28 = local_1c;
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_100091eb;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_100091eb:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10009207;
                  }
                  (*pcVar4)(local_1c + 0x10,4,&local_48);
                }
              }
LAB_10009207:
              if ((((int)local_38 < 0) || (local_28 == 0)) || (*in_ECX != 0x54584b57))
              goto LAB_100092a1;
              iVar1 = local_28 + 4;
              uVar12 = in_ECX[2];
              if (uVar12 < 0xc4) {
                if (0x6f < uVar12) goto LAB_10009244;
LAB_1000927a:
                if (uVar12 < 0x6c) goto LAB_100092a1;
LAB_1000928b:
                pcVar4 = (code *)in_ECX[0x1a];
                if (pcVar4 == (code *)0x0) goto LAB_100092a1;
              }
              else {
                pcVar4 = (code *)in_ECX[0x30];
                if (pcVar4 == (code *)0x0) {
LAB_10009244:
                  pcVar4 = (code *)in_ECX[0x1b];
                  if (pcVar4 != (code *)0x0) goto LAB_1000924b;
                }
                else {
LAB_1000924b:
                  (*pcVar4)(iVar1,4,local_38 | 0x80000000);
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_100092a1;
                  iVar1 = local_28 + 4;
                }
                uVar12 = in_ECX[2];
                if (uVar12 < 0xc0) goto LAB_1000927a;
                pcVar4 = (code *)in_ECX[0x2f];
                if (pcVar4 == (code *)0x0) goto LAB_1000928b;
              }
              (*pcVar4)(iVar1,4,&local_38);
LAB_100092a1:
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
                  pcVar7 = &DAT_1000bb66;
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
LAB_10009322:
              do {
                uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                bVar11 = (byte)uVar12;
                if (uVar12 < 10) {
                  bVar11 = bVar11 | 0x30;
                }
                else {
                  bVar11 = bVar11 + 0x37;
                }
                if (param_4 == 0) goto LAB_1000936b;
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
                pcVar7 = &DAT_1000bb6e;
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
LAB_100093e9:
              iVar1 = 8;
LAB_100093f3:
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
                if (iVar1 == 0) goto LAB_100094b9;
                goto LAB_100093f3;
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
              if (iVar1 != 0) goto LAB_100093f3;
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
                pcVar7 = str_1000bb75;
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
LAB_100094b9:
              iVar1 = 8;
LAB_100094c3:
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
                if (iVar1 == 0) goto LAB_10009589;
                goto LAB_100094c3;
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
              if (iVar1 != 0) goto LAB_100094c3;
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
                pcVar7 = str_1000bb7f;
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
LAB_10009589:
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
              goto LAB_1000474c;
            }
            if (0x67 < (uint)in_ECX[2]) {
LAB_10007315:
              if (((code *)in_ECX[0x19] != (code *)0x0) &&
                 (iVar1 = (*(code *)in_ECX[0x19])(uVar12,0,0x1000,&local_a4), iVar1 != 0)) {
                local_1c = local_a4;
                local_28 = local_a4;
                goto LAB_1000734b;
              }
            }
          }
        }
LAB_100046e6:
        if (param_4 == 0) goto LAB_1000473c;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000bb46;
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
LAB_1000473c:
        uVar12 = 0;
      }
LAB_1000474c:
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
                  goto LAB_10006557;
                }
              }
              else {
                iVar1 = (*(code *)in_ECX[0x2e])(uVar6,iVar1,0x1000,&local_28);
                in_ECX = local_18;
                if (iVar1 != 0) {
                  local_34 = uVar12;
LAB_10006557:
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
                      pcVar7 = &DAT_1000bba1;
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
LAB_10008809:
                  }
                  else if (*in_ECX == 0x54584b57) {
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_100082a2;
LAB_10008508:
                      if ((uint)in_ECX[2] < 0xc0) {
                        if (0x6b < (uint)in_ECX[2]) goto LAB_100087e9;
LAB_10008807:
                        uVar6 = local_28;
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) {
LAB_100087e9:
                          pcVar4 = (code *)in_ECX[0x1a];
                          if (pcVar4 == (code *)0x0) goto LAB_10008807;
                        }
                        (*pcVar4)(local_28 + 8,4,&local_38);
                        uVar6 = local_28;
                      }
                      goto LAB_10008809;
                    }
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) {
LAB_100082a2:
                      pcVar4 = (code *)in_ECX[0x1a];
                      if (pcVar4 == (code *)0x0) goto LAB_10008508;
                    }
                    (*pcVar4)(local_28,4,&local_30);
                    uVar6 = 0;
                    if (local_28 != 0) {
                      uVar6 = local_28;
                      if (*in_ECX == 0x54584b57) goto LAB_10008508;
                    }
                  }
                  else {
                    uVar6 = local_28;
                  }
                  if ((local_38 & 1) == 0) {
                    uVar12 = 0;
                    if (uVar6 != 0) {
                      if (*in_ECX != 0x54584b57) goto LAB_10008884;
                      local_1c = uVar6 + 8;
                      uVar3 = in_ECX[2];
                      if (uVar3 < 0xc4) {
                        if (0x6f < uVar3) goto LAB_10008b02;
LAB_10008b4d:
                        uVar12 = uVar6;
                        if (0x6b < uVar3) {
LAB_100091bb:
                          pcVar4 = (code *)in_ECX[0x1a];
                          uVar12 = uVar6;
                          if (pcVar4 != (code *)0x0) goto LAB_100091c8;
                        }
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x30];
                        if (pcVar4 == (code *)0x0) {
LAB_10008b02:
                          pcVar4 = (code *)in_ECX[0x1b];
                          if (pcVar4 != (code *)0x0) goto LAB_10008b09;
                        }
                        else {
LAB_10008b09:
                          (*pcVar4)(local_1c,4,local_38 | 1);
                          uVar12 = 0;
                          if (local_28 == 0) goto LAB_10008848;
                          if (*in_ECX != 0x54584b57) goto LAB_10008884;
                          local_1c = local_28 + 8;
                          uVar6 = local_28;
                        }
                        uVar3 = in_ECX[2];
                        if (uVar3 < 0xc0) goto LAB_10008b4d;
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) goto LAB_100091bb;
LAB_100091c8:
                        (*pcVar4)(local_1c,4,&local_38);
                        uVar12 = local_28;
                      }
                    }
                  }
                  else {
                    uVar12 = uVar6;
                  }
LAB_10008848:
                  if (*in_ECX != 0x54584b57) goto LAB_10008884;
                  if ((uint)in_ECX[2] < 0xc0) {
                    if ((uint)in_ECX[2] < 0x6c) goto LAB_10008884;
LAB_1000886b:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10008884;
                  }
                  else {
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) goto LAB_1000886b;
                  }
                  (*pcVar4)(uVar12 + 0xe,2,&local_44);
LAB_10008884:
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
                      pcVar7 = &DAT_1000bba9;
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
LAB_10008905:
                  do {
                    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar12;
                    if (uVar12 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    if (param_4 == 0) goto LAB_1000894b;
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
                    pcVar7 = &DAT_1000bbb1;
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
LAB_100089c9:
                  iVar1 = 8;
LAB_100089d3:
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
                    if (iVar1 == 0) goto LAB_10008a99;
                    goto LAB_100089d3;
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
                  if (iVar1 != 0) goto LAB_100089d3;
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
                    pcVar7 = str_1000bbb8;
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
LAB_10008a99:
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
                  goto LAB_100065c9;
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
            pcVar7 = str_1000bb8b;
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
LAB_100065c9:
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
      goto LAB_1000685c;
      uVar6 = *(uint *)(local_14 + 10);
      piVar13 = in_ECX;
      local_34 = uVar12;
      if ((uVar6 & 1) != 0 || uVar6 == 0) {
LAB_1000670d:
        uVar12 = 0;
        puVar10 = local_14;
LAB_1000672a:
        local_48 = 0;
        uVar6 = *(uint *)(puVar10 + uVar12 * 2 + 10);
        if ((uVar6 & 1) == 0) goto LAB_10006720;
        if ((((short)(uVar6 & 0xfffffffc) == 0 || (char)local_2c != '\0') ||
            (*piVar13 != 0x54584b57)) || ((uint)piVar13[2] < 0x58)) goto LAB_10006720;
        if ((code *)piVar13[0x15] == (code *)0x0) goto LAB_10006720;
        local_1c = uVar6 & 0xfffffffc;
        iVar1 = (*(code *)piVar13[0x15])(uVar6 & 0xfffc,2,&local_48);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_10006720;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_1000738a;
          goto LAB_1000756c;
        }
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000bbe4;
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
LAB_100067d7:
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
            pcVar7 = &DAT_1000bbf0;
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
LAB_1000738a:
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
              if (uVar12 == 0) goto LAB_100067d7;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_1000756c:
        iVar1 = 8;
LAB_10007576:
        uVar12 = local_1c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_10007594;
LAB_100075c2:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_10007640;
          goto LAB_10007576;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100075c2;
LAB_10007594:
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
        if (iVar1 != 0) goto LAB_10007576;
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
          pcVar7 = str_1000bbf5;
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
LAB_10007640:
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
        goto LAB_1000915b;
      }
      iVar1 = 0;
      if ((uVar6 & 6) == 4) {
        iVar1 = *(int *)(local_14 + 0xc);
      }
      uVar6 = uVar6 & 0xfffffff0;
      if (uVar6 == 0 && iVar1 == 0) goto LAB_1000670d;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*in_ECX != 0x54584b57)) goto LAB_1000670d;
      if (((uint)in_ECX[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        piVar13 = piVar15;
        if ((((uint)in_ECX[2] < 0x68 || iVar1 != 0) || ((code *)local_18[0x19] == (code *)0x0)) ||
           (iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4), iVar1 == 0))
        goto LAB_1000670d;
        local_28 = local_a4;
      }
      else {
        iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
        piVar13 = local_18;
        piVar15 = local_18;
        if (iVar1 == 0) goto LAB_1000670d;
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
          pcVar7 = &DAT_1000bbc5;
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
      if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10008ef2;
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_100082e8;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_100082e8:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10008315;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10008ef2;
      }
LAB_10008315:
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_10008793;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10008793:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_100087c3;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_10008ef2;
      }
LAB_100087c3:
      if ((uint)piVar15[2] < 0xc0) {
        if ((uint)piVar15[2] < 0x6c) goto LAB_10008ef2;
LAB_10008ed9:
        pcVar4 = (code *)piVar15[0x1a];
        if (pcVar4 == (code *)0x0) goto LAB_10008ef2;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) goto LAB_10008ed9;
      }
      (*pcVar4)(local_28 + 8,4,&local_44);
LAB_10008ef2:
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
          pcVar7 = &DAT_1000bbcd;
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
LAB_10008f73:
      do {
        uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 == 0) goto LAB_10008fbb;
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
        pcVar7 = &DAT_1000bbd5;
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
LAB_10009039:
      iVar1 = 8;
LAB_10009043:
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
        if (iVar1 == 0) goto LAB_10009109;
        goto LAB_10009043;
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
      if (iVar1 != 0) goto LAB_10009043;
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
        pcVar7 = &DAT_1000bbdd;
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
LAB_10009109:
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
LAB_1000915b:
      uVar12 = 1;
      goto LAB_10006839;
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
      goto LAB_10004647;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_2c = 0;
      goto LAB_10004647;
    }
    local_1c = uVar12;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_10004892:
      uVar12 = 0;
      if (param_4 != 0) {
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000b8e1;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        goto LAB_10004aa3;
      }
LAB_10004ac1:
      local_2c = 0;
      goto joined_r0x1000469e;
    }
    local_2c = (uint)(byte)in_EDX[2];
    local_18 = in_ECX;
    iVar1 = (*(code *)in_ECX[0x17])(*in_EDX,in_EDX[1],local_2c,4,2,&local_a4);
    piVar15 = local_18;
    if (iVar1 == 0) goto LAB_10004892;
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
              pcVar7 = str_1000b912;
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
LAB_10007a23:
          uVar12 = local_a4 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10007a40;
LAB_10007a72:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_10007af0;
            goto LAB_10007a23;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10007a72;
LAB_10007a40:
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
          if (iVar1 != 0) goto LAB_10007a23;
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
            pcVar7 = str_1000b923;
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
LAB_10007af0:
          iVar1 = 8;
LAB_10007afa:
          uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10007b17;
LAB_10007b42:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_10007bba;
            goto LAB_10007afa;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10007b42;
LAB_10007b17:
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
          if (iVar1 != 0) goto LAB_10007afa;
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
            pcVar7 = str_1000b933;
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
LAB_10007bba:
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
          goto LAB_10004ab7;
        }
      }
    }
    uVar12 = 0;
    if (param_4 == 0) goto LAB_10004ac1;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000b8f9;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
LAB_10004aa3:
    *(undefined1 *)(param_4 + uVar6) = 0;
    local_3c = 0;
    local_2c = 0;
LAB_10004ab7:
    local_2c = 0;
    if (local_1c == 0xffffffff) goto LAB_100046a4;
  }
  uVar12 = 0;
  if ((local_14 != (ushort *)0x0) && (local_14[2] == 0x1af4)) {
    local_18 = in_ECX;
    uVar6 = (uint)local_14[3];
    if ((uVar6 & 0xffffffc0) == 0x1000) {
      uVar6 = uVar6 - 0x1000;
    }
    else {
      if ((uVar6 & 0xffffffc0) != 0x1040) goto LAB_10007078;
      uVar6 = uVar6 - 0x1040;
    }
    if (uVar6 != 0xffffffff) {
      if (param_4 == 0) {
        if (uVar6 != 0) goto LAB_10004bc7;
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
          pcVar7 = str_1000b942;
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
LAB_10004bc7:
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
      bVar16 = recovered_10009880(local_18,local_14,&local_a4);
      if (CONCAT31(extraout_var,bVar16) != 0) {
        recovered_1000a070(piVar15,&local_a4,0);
        if (param_4 == 0) {
          if (local_80 != 0) goto LAB_10004e4a;
LAB_10004ed6:
          if (local_94 == 0) goto LAB_1000510d;
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
            pcVar7 = str_1000b972;
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
            pcVar7 = str_1000b982;
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
            pcVar7 = str_1000b967;
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
LAB_10004e4a:
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
LAB_10004e9a:
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
                if (uVar12 == 0) goto LAB_10004f17;
                goto LAB_10004e9a;
              }
              uVar6 = uVar12;
            } while (uVar12 != 0);
            goto LAB_10004ed6;
          }
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10004f17:
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
            pcVar7 = str_1000b989;
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
LAB_10005087:
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
              pcVar7 = str_1000b999;
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
            goto LAB_1000510d;
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
LAB_10005016:
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
            if (uVar12 == 0) goto LAB_10005087;
            goto LAB_10005016;
          }
          uVar6 = uVar12;
        } while (uVar12 != 0);
LAB_1000510d:
        iVar1 = 8;
LAB_10005127:
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
          if (param_4 == 0) goto LAB_10005120;
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
          pcVar7 = str_1000b9a6;
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
LAB_1000524d:
        iVar1 = 8;
LAB_10005263:
        do {
          uVar12 = local_7c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x10005279;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100052b7;
LAB_10005280:
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
          pcVar7 = str_1000b9bc;
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
LAB_1000534d:
        iVar1 = 8;
LAB_10005363:
        do {
          uVar12 = local_78 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x10005379;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100053b7;
LAB_10005380:
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
          pcVar7 = str_1000b9d2;
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
LAB_1000544d:
        iVar1 = 8;
LAB_10005463:
        uVar12 = local_74 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_10005480;
LAB_100054b7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000554d;
          goto LAB_10005463;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100054b7;
LAB_10005480:
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
        if (iVar1 != 0) goto LAB_10005463;
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
          pcVar7 = str_1000b9e8;
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
LAB_1000554d:
        iVar1 = 8;
LAB_10005563:
        uVar12 = local_70 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_10005580;
LAB_100055b7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000564d;
          goto LAB_10005563;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100055b7;
LAB_10005580:
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
        if (iVar1 != 0) goto LAB_10005563;
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
          pcVar7 = str_1000b9fe;
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
LAB_1000564d:
        iVar1 = 8;
LAB_10005663:
        uVar12 = local_6c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_10005680;
LAB_100056b7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000574d;
          goto LAB_10005663;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100056b7;
LAB_10005680:
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
        if (iVar1 != 0) goto LAB_10005663;
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
          pcVar7 = str_1000ba17;
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
LAB_1000574d:
        iVar1 = 8;
LAB_10005763:
        uVar12 = local_68 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_10005780;
LAB_100057b7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto code_r0x100057ba;
          goto LAB_10005763;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100057b7;
LAB_10005780:
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
        if (iVar1 != 0) goto LAB_10005763;
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
          pcVar7 = str_1000ba2f;
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
LAB_1000587a:
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
              if (uVar12 == 0) goto LAB_10005906;
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
          pcVar7 = str_1000ba3c;
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
LAB_100059da:
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
              if (uVar12 == 0) goto LAB_10005a66;
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
          pcVar7 = str_1000ba4d;
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
LAB_10005b46:
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
LAB_10005bfa:
            if (local_90 != 0) goto LAB_10005c8a;
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
              pcVar7 = str_1000ba61;
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
LAB_10005c8a:
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
                  if (uVar12 == 0) goto LAB_10005dbd;
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
              pcVar7 = str_1000ba71;
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
LAB_10005dbd:
          iVar1 = 8;
LAB_10005dd3:
          do {
            uVar12 = local_84 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (9 < uVar12) goto code_r0x10005de9;
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10005e27;
LAB_10005df0:
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
            pcVar7 = str_1000ba88;
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
LAB_10005ebd:
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
              pcVar7 = str_1000ba9b;
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
LAB_10005fdd:
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
              pcVar7 = str_1000baa5;
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
LAB_100060fd:
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
        if (param_4 == 0) goto LAB_10006fdc;
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
          pcVar7 = str_1000bab8;
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
        if (local_50 != 0) goto LAB_10006fe4;
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
        }
LAB_10006257:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        pcVar7 = str_1000bae7;
        if ((local_68 & 8) != 0) {
          pcVar7 = str_1000badb;
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
          pcVar9 = str_1000bacf;
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
        goto LAB_10007078;
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
            pcVar7 = str_1000b967;
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
LAB_1000648e:
        local_28 = 0;
        local_30 = 0;
        if ((*(uint *)(puVar10 + uVar12 * 2 + 10) & 1) == 0) goto LAB_10006480;
        if ((((char)local_2c != '\0') || (*local_18 != 0x54584b57)) || ((uint)local_18[2] < 0x58))
        goto LAB_10006480;
        if ((code *)local_18[0x15] == (code *)0x0) goto LAB_10006480;
        local_34 = *(uint *)(puVar10 + uVar12 * 2 + 10) & 0xfffffffc;
        local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
        uVar6 = local_34 + 0x12 & 0xffff;
        iVar1 = (*(code *)local_18[0x15])(uVar6,1,&local_28);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_10006480;
        local_14 = (ushort *)uVar6;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_10008658;
          goto LAB_10008bec;
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
          pcVar7 = str_1000b972;
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
          pcVar7 = str_1000baf4;
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
          pcVar7 = str_1000bafe;
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
LAB_10008b7c:
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
            pcVar7 = str_1000bb12;
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
LAB_10008658:
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
              if (uVar12 == 0) goto LAB_10008b7c;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_10008bec:
        puVar10 = local_14;
        piVar15 = local_18;
        iVar1 = 8;
LAB_10008bf6:
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
          if (iVar1 == 0) goto LAB_10008cb9;
          goto LAB_10008bf6;
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
        if (iVar1 != 0) goto LAB_10008bf6;
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
          pcVar7 = str_1000bb21;
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
LAB_10008cb9:
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
LAB_10008d22:
            if (uVar12 < 0x58) goto LAB_10009686;
          }
          else if ((code *)local_18[0x16] != (code *)0x0) {
            (*(code *)local_18[0x16])(local_14,1,0);
            if (*piVar15 != 0x54584b57) goto LAB_10009686;
            uVar12 = piVar15[2];
            if (0x5b < uVar12) {
              if ((code *)piVar15[0x16] == (code *)0x0) goto LAB_10008d7a;
              (*(code *)piVar15[0x16])(puVar10,1,3);
              if (*piVar15 != 0x54584b57) goto LAB_10009686;
              uVar12 = piVar15[2];
            }
            goto LAB_10008d22;
          }
LAB_10008d7a:
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
                pcVar7 = str_1000bb34;
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
LAB_10009686:
        if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_10006423;
        uVar12 = local_1c & 1;
        goto LAB_10007078;
      }
LAB_10006413:
      uVar12 = 0;
      if (param_4 != 0) {
LAB_10006423:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000b94b;
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
LAB_10007078:
  uVar12 = uVar12 | local_3c;
  goto LAB_1000707a;
LAB_1000936b:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_100093e9;
  goto LAB_10009322;
LAB_1000894b:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_100089c9;
  goto LAB_10008905;
LAB_10006720:
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_100067f7;
  goto LAB_1000672a;
LAB_10008fbb:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10009039;
  goto LAB_10008f73;
LAB_10006a7e:
  uVar12 = local_34;
  goto LAB_10006a88;
LAB_10005120:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000524d;
  goto LAB_10005127;
code_r0x10005279:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10005280;
LAB_100052b7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000534d;
  goto LAB_10005263;
code_r0x10005379:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10005380;
LAB_100053b7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000544d;
  goto LAB_10005363;
code_r0x100057ba:
  if (local_64 != 0) goto LAB_1000587a;
LAB_10005906:
  if (local_60 != 0) goto LAB_100059da;
LAB_10005a66:
  if (local_5c != 0) goto LAB_10005b46;
  if (local_54 != 0) goto LAB_10005bfa;
  if (local_9c != 0) goto LAB_10005fdd;
  if (local_98 != 0) goto LAB_100060fd;
LAB_10006fdc:
  if (local_50 == 0) {
    uVar12 = 1;
    goto LAB_10007078;
  }
LAB_10006fe4:
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
      if (uVar12 == 0) goto LAB_10006257;
    }
    uVar6 = uVar12;
  } while (uVar12 != 0);
  uVar12 = 1;
  goto LAB_10007078;
code_r0x10005de9:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10005df0;
LAB_10005e27:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10005ebd;
  goto LAB_10005dd3;
LAB_10006480:
  bVar16 = uVar12 < 5;
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_10006413;
  goto LAB_1000648e;
LAB_100067f7:
  uVar12 = local_34;
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000bbff;
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
LAB_10006839:
    puVar10 = local_14;
    uVar12 = local_34 | uVar12;
  }
LAB_1000685c:
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((char)puVar10[4] == '\x02') {
    uVar6 = 0;
    bVar16 = true;
    local_34 = uVar12;
LAB_10006892:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
    if ((uVar6 != 0) && ((*(uint *)(puVar10 + uVar6 * 2 + 8) & 7) == 4)) {
LAB_10006990:
      uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
      if ((uVar12 & 1) != 0) {
        if (((!((short)(uVar12 & 0xfffffffc) == 0 || (char)local_2c != '\0')) &&
            (*local_18 == 0x54584b57)) && (0x57 < (uint)local_18[2])) {
          if ((code *)local_18[0x15] != (code *)0x0) {
            iVar1 = (*(code *)local_18[0x15])(uVar12 & 0xfffc,2,&local_30);
            puVar10 = local_14;
            if (iVar1 == 0) goto LAB_10006880;
            if (param_4 == 0) {
              if (uVar6 != 0) goto LAB_100070db;
              goto LAB_100071aa;
            }
            uVar3 = 0;
            do {
              uVar2 = uVar3;
              uVar3 = uVar2 + 1;
            } while (*(char *)(param_4 + uVar2) != '\0');
            if (uVar2 + 1 < 0x400) {
              cVar8 = ' ';
              pcVar7 = str_1000bc49;
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
LAB_10006a55:
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
                pcVar7 = str_1000bc58;
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
LAB_100070db:
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
                  if (uVar6 == 0) goto LAB_10006a55;
                }
                uVar2 = uVar6;
              } while (uVar6 != 0);
            }
LAB_100071aa:
            iVar1 = 8;
LAB_100071b4:
            uVar6 = (uVar12 & 0xfffffffc) >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar6;
            if (9 < uVar6) {
              bVar11 = bVar11 + 0x37;
              if (param_4 != 0) goto LAB_100071d1;
LAB_10007202:
              iVar1 = iVar1 + -1;
              if (iVar1 == 0) goto LAB_10007280;
              goto LAB_100071b4;
            }
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10007202;
LAB_100071d1:
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
            if (iVar1 != 0) goto LAB_100071b4;
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
              pcVar7 = str_1000bc62;
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
LAB_10007280:
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
            goto LAB_100084eb;
          }
        }
      }
LAB_10006880:
      bVar16 = uVar6 < 5;
      uVar6 = uVar6 + 1;
      if (uVar6 == 6) goto LAB_10006a7e;
      goto LAB_10006892;
    }
    uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
    puVar10 = local_14;
    if ((uVar12 & 1) != 0 || uVar12 == 0) goto LAB_10006990;
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      if (uVar6 == 5) goto LAB_10006990;
      iVar1 = *(int *)(local_14 + uVar6 * 2 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_10006990;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10006990;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((!((uint)local_18[2] < 0x68 || iVar1 != 0)) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        puVar10 = local_14;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto LAB_1000740f;
        }
      }
      goto LAB_10006990;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    puVar10 = local_14;
    if (iVar1 == 0) goto LAB_10006990;
LAB_1000740f:
    if (param_4 == 0) {
      if (uVar6 != 0) goto LAB_1000748b;
      goto LAB_1000790c;
    }
    uVar12 = 0;
    do {
      uVar3 = uVar12;
      uVar12 = uVar3 + 1;
    } while (*(char *)(param_4 + uVar3) != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000bc14;
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
LAB_10007464:
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
        pcVar7 = str_1000bc25;
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
LAB_1000748b:
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
          if (uVar12 == 0) goto LAB_10007464;
        }
        uVar3 = uVar12;
      } while (uVar12 != 0);
    }
LAB_1000790c:
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
        if (0x6b < (uint)local_18[2]) goto LAB_10008147;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10008147:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_1000817a;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*local_18 != 0x54584b57)) goto LAB_10008357;
      }
LAB_1000817a:
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_1000833b;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_1000833b:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10008357;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
      }
    }
LAB_10008357:
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
        pcVar7 = str_1000bc31;
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
LAB_100083d8:
    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
    bVar11 = (byte)uVar12;
    if (9 < uVar12) {
      bVar11 = bVar11 + 0x37;
      if (param_4 != 0) goto LAB_100083f5;
LAB_10008422:
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) goto LAB_100084a0;
      goto LAB_100083d8;
    }
    bVar11 = bVar11 | 0x30;
    if (param_4 == 0) goto LAB_10008422;
LAB_100083f5:
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
    if (iVar1 != 0) goto LAB_100083d8;
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
      pcVar7 = str_1000bc3d;
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
LAB_100084a0:
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
LAB_100084eb:
    puVar10 = local_14;
    uVar12 = local_34 | local_1c & 1;
  }
LAB_10006a88:
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
      if (uVar6 == 0 && iVar1 == 0) goto LAB_10006b88;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10006b88;
      if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
          iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4);
          uVar6 = 0;
          if (iVar1 != 0) {
            local_28 = local_a4;
            goto joined_r0x10006b71;
          }
        }
        goto LAB_10006b88;
      }
      iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
      uVar6 = 0;
      uVar12 = local_34;
      if (iVar1 == 0) goto LAB_10006b88;
joined_r0x10006b71:
      uVar5 = (undefined3)((uint)iVar1 >> 8);
      if (param_4 == 0) {
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
      }
      else {
        uVar12 = 0;
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
LAB_10006cad:
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000bc70;
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
LAB_100076a0:
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
                goto LAB_1000772b;
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
LAB_1000772b:
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
            pcVar7 = str_1000bc81;
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
LAB_100078ad:
        uVar6 = local_1c;
        puVar10 = local_14;
      }
      else {
        if ((uint)local_18[2] < 0xc0) {
          if (0x6b < (uint)local_18[2]) goto LAB_10007863;
          goto LAB_100078ad;
        }
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10007863:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_100078ad;
        }
        iVar1 = (*pcVar4)(local_28,4,&local_30);
        if (iVar1 == 0) goto LAB_100078ad;
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
            pcVar7 = str_1000bc8d;
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
LAB_10006b88:
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
                      goto LAB_10006c9e;
                    }
                  }
                }
                else {
                  uVar6 = (*(code *)local_18[0x2e])(uVar3,iVar1,0x1000,&local_28);
                  uVar3 = 0;
                  puVar10 = local_14;
                  if (uVar6 != 0) {
LAB_10006c9e:
                    if (param_4 != 0) {
                      local_40 = 0;
                      goto LAB_10006cad;
                    }
                    local_4c = CONCAT31((int3)(uVar6 >> 8),1);
                    goto LAB_100076a0;
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
  if (uVar12 != 0) goto LAB_1000707a;
  local_30 = 0;
  uVar12 = *(uint *)(puVar10 + 10);
  if ((uVar12 & 1) == 0 && uVar12 != 0) {
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      iVar1 = *(int *)(local_14 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_10006e22;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10006e22;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        uVar12 = 0;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto joined_r0x10006e0b;
        }
      }
      goto LAB_10006e22;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    uVar12 = 0;
    if (iVar1 == 0) goto LAB_10006e22;
joined_r0x10006e0b:
    uVar5 = (undefined3)((uint)iVar1 >> 8);
    if (param_4 == 0) {
      bVar16 = true;
      local_1c = CONCAT31(uVar5,1);
    }
    else {
      uVar6 = 0;
      local_14 = (ushort *)CONCAT31(uVar5,1);
      local_1c = CONCAT31(uVar5,1);
LAB_10006f4d:
      uVar12 = 0;
      do {
        uVar3 = uVar12;
        uVar12 = uVar3 + 1;
      } while (*(char *)(param_4 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_1000bc99;
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
LAB_10007d27:
        uVar3 = 0;
        do {
          *(byte *)((int)&local_a4 + uVar3) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar2 = uVar3 + 1;
          if (8 < uVar3) break;
          bVar16 = 9 < uVar6;
          uVar6 = uVar6 / 10;
          uVar3 = uVar2;
        } while (bVar16);
LAB_10007d62:
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
            if (uVar6 == 0) goto LAB_10007da4;
            goto LAB_10007d62;
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
LAB_10007da4:
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
          pcVar7 = &DAT_1000bca4;
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
        if (0x6b < (uint)local_18[2]) goto LAB_10007edf;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10007edf:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10006faf;
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
              pcVar7 = str_1000bca8;
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
LAB_10006e22:
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
                    goto LAB_10006f3e;
                  }
                }
              }
              else {
                iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
                uVar12 = 0;
                puVar10 = local_14;
                if (iVar1 != 0) {
LAB_10006f3e:
                  if (param_4 != 0) {
                    local_14 = (ushort *)0x0;
                    goto LAB_10006f4d;
                  }
                  uVar12 = 1;
                  goto LAB_10007d27;
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
LAB_10006faf:
  uVar12 = local_1c & 1;
LAB_1000707a:
  pcVar7 = str_1000b785;
  if (uVar12 != 0) {
    pcVar7 = str_1000b8b9;
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

#undef DAT_1000bb66
#undef DAT_1000bb6e
#undef DAT_1000bba1
#undef DAT_1000bba9
#undef DAT_1000bbb1
#undef DAT_1000bbc5
#undef DAT_1000bbcd
#undef DAT_1000bbd5
#undef DAT_1000bbdd
#undef DAT_1000bbf0
#undef DAT_1000bca4
#undef str_1000b785
#undef str_1000b8b9
#undef str_1000b8c9
#undef str_1000b8e1
#undef str_1000b8f9
#undef str_1000b912
#undef str_1000b923
#undef str_1000b933
#undef str_1000b942
#undef str_1000b94b
#undef str_1000b967
#undef str_1000b972
#undef str_1000b982
#undef str_1000b989
#undef str_1000b999
#undef str_1000b9a6
#undef str_1000b9bc
#undef str_1000b9d2
#undef str_1000b9e8
#undef str_1000b9fe
#undef str_1000ba17
#undef str_1000ba2f
#undef str_1000ba3c
#undef str_1000ba4d
#undef str_1000ba61
#undef str_1000ba71
#undef str_1000ba88
#undef str_1000ba9b
#undef str_1000baa5
#undef str_1000bab8
#undef str_1000bacf
#undef str_1000badb
#undef str_1000bae7
#undef str_1000baf4
#undef str_1000bafe
#undef str_1000bb12
#undef str_1000bb21
#undef str_1000bb34
#undef str_1000bb46
#undef str_1000bb5c
#undef str_1000bb75
#undef str_1000bb7f
#undef str_1000bb8b
#undef str_1000bbb8
#undef str_1000bbe4
#undef str_1000bbf5
#undef str_1000bbff
#undef str_1000bc14
#undef str_1000bc25
#undef str_1000bc31
#undef str_1000bc3d
#undef str_1000bc49
#undef str_1000bc58
#undef str_1000bc62
#undef str_1000bc70
#undef str_1000bc81
#undef str_1000bc8d
#undef str_1000bc99
#undef str_1000bca8
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

#undef str_1000be4a
#define str_1000be4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95eU)))
#undef str_1000be55
#define str_1000be55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x969U)))
#undef str_1000be64
#define str_1000be64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x978U)))
#undef str_1000be75
#define str_1000be75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x989U)))
#undef str_1000be88
#define str_1000be88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99cU)))
#undef str_1000be9b
#define str_1000be9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9afU)))
#undef str_1000beab
#define str_1000beab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bfU)))
#undef str_1000beba
#define str_1000beba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9ceU)))
#undef str_1000bec9
#define str_1000bec9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9ddU)))
#undef str_1000beda
#define str_1000beda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eeU)))
#undef str_1000bee5
#define str_1000bee5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f9U)))
#undef str_1000bef1
#define str_1000bef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa05U)))
#undef str_1000befb
#define str_1000befb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0fU)))
#undef str_1000bf04
#define str_1000bf04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa18U)))
#undef str_1000bf0f
#define str_1000bf0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa23U)))
#undef str_1000bf18
#define str_1000bf18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2cU)))
#undef str_1000bf20
#define str_1000bf20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa34U)))
#undef str_1000bf29
#define str_1000bf29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3dU)))
#undef str_1000bf30
#define str_1000bf30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa44U)))
#undef str_1000bf43
#define str_1000bf43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa57U)))
#undef str_1000bf56
#define str_1000bf56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6aU)))
#undef str_1000bf69
#define str_1000bf69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096b0
 */

char * recovered_100096b0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_1000be4a;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_1000bf04;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_1000befb;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_1000bf29;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_1000bf29;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_1000bf20;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_1000bf0f;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_1000bee5;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_1000982f;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_1000bef1;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_1000bf18;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_1000be55;
    case 0x1001:
    case 0x1042:
      return str_1000be64;
    case 0x1002:
    case 0x1045:
      return str_1000be75;
    case 0x1003:
    case 0x1043:
      return str_1000be88;
    case 0x1004:
    case 0x1048:
      return str_1000be9b;
    case 0x1005:
    case 0x1044:
      return str_1000beab;
    default:
      return str_1000beda;
    case 0x1050:
      return str_1000beba;
    case 0x1052:
      return str_1000bec9;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_1000bf56;
  case 2:
    return str_1000bf43;
  case 3:
    return str_1000bf30;
  case 4:
    return str_1000bf69;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_1000982f:
      pcVar2 = recovered_1000b490((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_1000be4a;
}

#undef str_1000be4a
#undef str_1000be55
#undef str_1000be64
#undef str_1000be75
#undef str_1000be88
#undef str_1000be9b
#undef str_1000beab
#undef str_1000beba
#undef str_1000bec9
#undef str_1000beda
#undef str_1000bee5
#undef str_1000bef1
#undef str_1000befb
#undef str_1000bf04
#undef str_1000bf0f
#undef str_1000bf18
#undef str_1000bf20
#undef str_1000bf29
#undef str_1000bf30
#undef str_1000bf43
#undef str_1000bf56
#undef str_1000bf69

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
 * Address: 0x10009880
 */

bool recovered_10009880(int *in_ECX,ushort *in_EDX,int *param_3)

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
                            if (4 < local_28) goto LAB_10009cf0;
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
                                goto LAB_10009cdd;
                              }
                            }
                            else {
                              iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                              if (iVar3 != 0) {
                                iVar3 = local_20;
LAB_10009cdd:
                                *param_3 = iVar3 + local_18;
                                param_3[4] = local_28;
                                goto LAB_10009f05;
                              }
                            }
                          }
                        }
                      }
LAB_10009cf0:
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
                            if (4 < local_28) goto LAB_10009e9a;
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
                                  goto LAB_10009e18;
                                }
                              }
                              else {
                                iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                                if (iVar3 != 0) {
LAB_10009e18:
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
                                  goto LAB_10009f05;
                                }
                              }
                            }
                          }
                        }
                      }
LAB_10009e9a:
                      if ((local_3c == 3) &&
                         (iVar3 = recovered_10009f40(local_14,(int)local_1c,local_28,local_38,
                                                     local_34,&local_20), iVar3 != 0)) {
                        param_3[2] = local_20;
                        param_3[6] = local_28;
                      }
                      else if ((local_3c == 4) &&
                              (iVar3 = recovered_10009f40(local_14,(int)local_1c,local_28,local_38,
                                                          local_34,&local_20), iVar3 != 0)) {
                        param_3[3] = local_20;
                        param_3[7] = local_28;
                      }
                    }
                  }
                }
              }
            }
LAB_10009f05:
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

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f40
 */

undefined4
recovered_10009f40(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

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

#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a070
 */

void recovered_1000a070(int *in_ECX,int *in_EDX,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;

  local_14 = 0;
  if (in_EDX == (int *)0x0) {
    return;
  }
  iVar2 = *in_EDX;
  if (iVar2 == 0) {
    return;
  }
  if (in_ECX != (int *)0x0) {
    if (*in_ECX == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc0) {
        if (0x6b < (uint)in_ECX[2]) goto LAB_1000a0c9;
LAB_1000a0ec:
        if (*in_ECX == 0x54584b57) {
          if ((uint)in_ECX[2] < 0xc4) {
            if (0x6f < (uint)in_ECX[2]) {
LAB_1000a110:
              pcVar3 = (code *)in_ECX[0x1b];
              if (pcVar3 != (code *)0x0) goto LAB_1000a117;
            }
          }
          else {
            pcVar3 = (code *)in_ECX[0x30];
            if (pcVar3 == (code *)0x0) goto LAB_1000a110;
LAB_1000a117:
            (*pcVar3)(iVar2 + 0x14,1,0);
            iVar2 = *in_EDX;
            if (iVar2 == 0) goto LAB_1000a211;
          }
          if (*in_ECX == 0x54584b57) {
            if ((uint)in_ECX[2] < 0xc4) {
              if (0x6f < (uint)in_ECX[2]) {
LAB_1000a155:
                pcVar3 = (code *)in_ECX[0x1b];
                if (pcVar3 != (code *)0x0) goto LAB_1000a15c;
              }
            }
            else {
              pcVar3 = (code *)in_ECX[0x30];
              if (pcVar3 == (code *)0x0) goto LAB_1000a155;
LAB_1000a15c:
              (*pcVar3)(iVar2,4,0);
              iVar2 = *in_EDX;
              if (iVar2 == 0) goto LAB_1000a211;
            }
          }
        }
        goto LAB_1000a173;
      }
      pcVar3 = (code *)in_ECX[0x2f];
      if (pcVar3 == (code *)0x0) {
LAB_1000a0c9:
        pcVar3 = (code *)in_ECX[0x1a];
        if (pcVar3 == (code *)0x0) goto LAB_1000a0ec;
      }
      (*pcVar3)(iVar2 + 0x14,1,in_EDX + 0xe);
      iVar2 = *in_EDX;
      if (iVar2 != 0) goto LAB_1000a0ec;
LAB_1000a211:
      iVar2 = 0;
    }
    else {
LAB_1000a173:
      if (*in_ECX == 0x54584b57) {
        if ((uint)in_ECX[2] < 0xc0) {
          if (0x6b < (uint)in_ECX[2]) {
LAB_1000a19a:
            pcVar3 = (code *)in_ECX[0x1a];
            if (pcVar3 != (code *)0x0) goto LAB_1000a1a1;
          }
        }
        else {
          pcVar3 = (code *)in_ECX[0x2f];
          if (pcVar3 == (code *)0x0) goto LAB_1000a19a;
LAB_1000a1a1:
          (*pcVar3)(iVar2 + 4,4,in_EDX + 10);
          iVar2 = *in_EDX;
          if (iVar2 == 0) goto LAB_1000a211;
        }
        if (*in_ECX == 0x54584b57) {
          if ((uint)in_ECX[2] < 0xc4) {
            if (0x6f < (uint)in_ECX[2]) {
LAB_1000a1da:
              pcVar3 = (code *)in_ECX[0x1b];
              if (pcVar3 != (code *)0x0) goto LAB_1000a1e1;
            }
          }
          else {
            pcVar3 = (code *)in_ECX[0x30];
            if (pcVar3 == (code *)0x0) goto LAB_1000a1da;
LAB_1000a1e1:
            (*pcVar3)(iVar2,4,1);
            iVar2 = *in_EDX;
            if (iVar2 == 0) goto LAB_1000a211;
          }
        }
      }
      if (*in_ECX == 0x54584b57) {
        if ((uint)in_ECX[2] < 0xc0) {
          if (0x6b < (uint)in_ECX[2]) {
LAB_1000a21f:
            pcVar3 = (code *)in_ECX[0x1a];
            if (pcVar3 != (code *)0x0) goto LAB_1000a226;
          }
        }
        else {
          pcVar3 = (code *)in_ECX[0x2f];
          if (pcVar3 == (code *)0x0) goto LAB_1000a21f;
LAB_1000a226:
          (*pcVar3)(iVar2 + 4,4,in_EDX + 0xb);
          iVar2 = *in_EDX;
        }
      }
    }
  }
  uVar4 = param_3 & in_EDX[10];
  in_EDX[0xc] = uVar4;
  in_EDX[0xd] = in_EDX[0xb] & 1;
  if (iVar2 == 0) {
    if (in_ECX == (int *)0x0) goto LAB_1000a274;
LAB_1000a367:
    if (((*in_ECX == 0x54584b57) && (0x7b < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0x1e] != (code *)0x0)) {
      (*(code *)in_ECX[0x1e])();
    }
LAB_1000a37e:
    bVar1 = false;
  }
  else {
    if (in_ECX != (int *)0x0) {
      if (*in_ECX == 0x54584b57) {
        if ((uint)in_ECX[2] < 0xc4) {
          if (0x6f < (uint)in_ECX[2]) {
LAB_1000a285:
            pcVar3 = (code *)in_ECX[0x1b];
            if (pcVar3 != (code *)0x0) goto LAB_1000a28c;
          }
        }
        else {
          pcVar3 = (code *)in_ECX[0x30];
          if (pcVar3 == (code *)0x0) goto LAB_1000a285;
LAB_1000a28c:
          (*pcVar3)(iVar2 + 8,4,0);
          iVar2 = *in_EDX;
          if (iVar2 == 0) goto LAB_1000a367;
          uVar4 = in_EDX[0xc];
        }
        if (*in_ECX == 0x54584b57) {
          if ((uint)in_ECX[2] < 0xc4) {
            if (0x6f < (uint)in_ECX[2]) {
LAB_1000a2cd:
              pcVar3 = (code *)in_ECX[0x1b];
              if (pcVar3 != (code *)0x0) goto LAB_1000a2d4;
            }
          }
          else {
            pcVar3 = (code *)in_ECX[0x30];
            if (pcVar3 == (code *)0x0) goto LAB_1000a2cd;
LAB_1000a2d4:
            (*pcVar3)(iVar2 + 0xc,4,uVar4);
            iVar2 = *in_EDX;
            if (iVar2 == 0) goto LAB_1000a367;
          }
          if (*in_ECX == 0x54584b57) {
            if ((uint)in_ECX[2] < 0xc4) {
              if (0x6f < (uint)in_ECX[2]) {
LAB_1000a30d:
                pcVar3 = (code *)in_ECX[0x1b];
                if (pcVar3 != (code *)0x0) goto LAB_1000a314;
              }
            }
            else {
              pcVar3 = (code *)in_ECX[0x30];
              if (pcVar3 == (code *)0x0) goto LAB_1000a30d;
LAB_1000a314:
              (*pcVar3)(iVar2 + 8,4,1);
              iVar2 = *in_EDX;
              if (iVar2 == 0) goto LAB_1000a367;
            }
          }
        }
      }
      if (*in_ECX == 0x54584b57) {
        if ((uint)in_ECX[2] < 0xc4) {
          if ((uint)in_ECX[2] < 0x70) goto LAB_1000a367;
LAB_1000a351:
          pcVar3 = (code *)in_ECX[0x1b];
          if (pcVar3 == (code *)0x0) goto LAB_1000a367;
        }
        else {
          pcVar3 = (code *)in_ECX[0x30];
          if (pcVar3 == (code *)0x0) goto LAB_1000a351;
        }
        (*pcVar3)(iVar2 + 0xc,4,in_EDX[0xd]);
        goto LAB_1000a367;
      }
      goto LAB_1000a37e;
    }
LAB_1000a274:
    bVar1 = true;
  }
  iVar2 = *in_EDX;
  if (iVar2 == 0) {
    return;
  }
  if (bVar1) {
    return;
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) {
LAB_1000a3ba:
        pcVar3 = (code *)in_ECX[0x1b];
        if (pcVar3 != (code *)0x0) goto LAB_1000a3c1;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x30];
      if (pcVar3 == (code *)0x0) goto LAB_1000a3ba;
LAB_1000a3c1:
      (*pcVar3)(iVar2 + 0x14,1,1);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        return;
      }
    }
    if (*in_ECX == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) {
LAB_1000a3ff:
          pcVar3 = (code *)in_ECX[0x1b];
          if (pcVar3 != (code *)0x0) goto LAB_1000a406;
        }
      }
      else {
        pcVar3 = (code *)in_ECX[0x30];
        if (pcVar3 == (code *)0x0) goto LAB_1000a3ff;
LAB_1000a406:
        (*pcVar3)(iVar2 + 0x14,1,3);
        iVar2 = *in_EDX;
        if (iVar2 == 0) {
          return;
        }
      }
      if (*in_ECX == 0x54584b57) {
        if ((uint)in_ECX[2] < 0xc4) {
          if (0x6f < (uint)in_ECX[2]) {
LAB_1000a444:
            pcVar3 = (code *)in_ECX[0x1b];
            if (pcVar3 != (code *)0x0) goto LAB_1000a44b;
          }
        }
        else {
          pcVar3 = (code *)in_ECX[0x30];
          if (pcVar3 == (code *)0x0) goto LAB_1000a444;
LAB_1000a44b:
          (*pcVar3)(iVar2 + 0x14,1,0xb);
          iVar2 = *in_EDX;
          if (iVar2 == 0) {
            return;
          }
        }
      }
    }
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) {
LAB_1000a489:
        pcVar3 = (code *)in_ECX[0x1a];
        if (pcVar3 != (code *)0x0) goto LAB_1000a490;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x2f];
      if (pcVar3 == (code *)0x0) goto LAB_1000a489;
LAB_1000a490:
      (*pcVar3)(iVar2 + 0x14,1,in_EDX + 0xf);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        return;
      }
    }
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) {
LAB_1000a4d0:
        pcVar3 = (code *)in_ECX[0x1a];
        if (pcVar3 != (code *)0x0) goto LAB_1000a4d7;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x2f];
      if (pcVar3 == (code *)0x0) goto LAB_1000a4d0;
LAB_1000a4d7:
      (*pcVar3)(iVar2 + 0x12,2,in_EDX + 0x10);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        return;
      }
    }
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) {
LAB_1000a51b:
        pcVar3 = (code *)in_ECX[0x1a];
        if (pcVar3 != (code *)0x0) goto LAB_1000a522;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x2f];
      if (pcVar3 == (code *)0x0) goto LAB_1000a51b;
LAB_1000a522:
      (*pcVar3)(iVar2 + 0x15,1,in_EDX + 0x15);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        return;
      }
    }
    if (*in_ECX == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) {
LAB_1000a562:
          pcVar3 = (code *)in_ECX[0x1b];
          if (pcVar3 != (code *)0x0) goto LAB_1000a569;
        }
      }
      else {
        pcVar3 = (code *)in_ECX[0x30];
        if (pcVar3 == (code *)0x0) goto LAB_1000a562;
LAB_1000a569:
        (*pcVar3)(iVar2 + 0x16,2,0);
        iVar2 = *in_EDX;
        if (iVar2 == 0) {
          return;
        }
      }
    }
  }
  if (*in_ECX == 0x54584b57) {
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) {
LAB_1000a5a7:
        pcVar3 = (code *)in_ECX[0x1a];
        if (pcVar3 != (code *)0x0) goto LAB_1000a5ae;
      }
    }
    else {
      pcVar3 = (code *)in_ECX[0x2f];
      if (pcVar3 == (code *)0x0) goto LAB_1000a5a7;
LAB_1000a5ae:
      (*pcVar3)(iVar2 + 0x18,2,in_EDX + 0x11);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        return;
      }
    }
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) {
LAB_1000a5f2:
      pcVar3 = (code *)in_ECX[0x1a];
      if (pcVar3 != (code *)0x0) goto LAB_1000a5f9;
    }
  }
  else {
    pcVar3 = (code *)in_ECX[0x2f];
    if (pcVar3 == (code *)0x0) goto LAB_1000a5f2;
LAB_1000a5f9:
    (*pcVar3)(iVar2 + 0x1c,2,in_EDX + 0x12);
    iVar2 = *in_EDX;
    if (iVar2 == 0) {
      return;
    }
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
    pcVar3 = (code *)in_ECX[0x2f];
    if (pcVar3 != (code *)0x0) goto LAB_1000a64c;
  }
  pcVar3 = (code *)in_ECX[0x1a];
  if (pcVar3 == (code *)0x0) {
    return;
  }
LAB_1000a64c:
  iVar2 = (*pcVar3)(iVar2 + 0x1e,2,&local_14);
  if (iVar2 != 0) {
    in_EDX[0x13] = local_14;
    if (in_EDX[1] != 0) {
      in_EDX[0x14] = local_14 * in_EDX[8] + in_EDX[1];
    }
  }
  return;
}

#undef local_14

#undef DAT_1000d000
#define DAT_1000d000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_1000d004
#define DAT_1000d004 (*(int *)(((uintptr_t)pf_module_state + 0x1b18U)))
#undef DAT_1000d010
#define DAT_1000d010 (*(uint *)(((uintptr_t)pf_module_state + 0x1b24U)))
#undef DAT_1000d024
#define DAT_1000d024 (*(ushort *)(((uintptr_t)pf_module_state + 0x1b38U)))
#undef DAT_1000d028
#define DAT_1000d028 (*(ushort *)(((uintptr_t)pf_module_state + 0x1b3cU)))
#undef DAT_1000d170
#define DAT_1000d170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c84U)))
#undef DAT_1000d172
#define DAT_1000d172 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c86U)))
#undef DAT_1000d173
#define DAT_1000d173 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c87U)))
#undef DAT_1000d174
#define DAT_1000d174 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c88U)))
#undef DAT_1000d175
#define DAT_1000d175 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c89U)))
#undef DAT_1000d176
#define DAT_1000d176 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1000d177
#define DAT_1000d177 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8bU)))
#undef DAT_1000d178
#define DAT_1000d178 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8cU)))
#undef DAT_1000d179
#define DAT_1000d179 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8dU)))
#undef DAT_1000d17a
#define DAT_1000d17a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8eU)))
#undef DAT_1000d17b
#define DAT_1000d17b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8fU)))
#undef DAT_1000d200
#define DAT_1000d200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a690
 */

undefined4 recovered_1000a690(int param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  ushort in_CX;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;

  uVar12 = 10;
  if (DAT_1000d010 != 0) {
    uVar12 = DAT_1000d010;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_1000d004 == 0) {
    return 0;
  }
  if (DAT_1000d000 == (int *)0x0) {
    return 0;
  }
  if (DAT_1000d024 == 0) {
    return 0;
  }
  if (((*DAT_1000d000 == 0x54584b57) && (0x77 < (uint)DAT_1000d000[2])) &&
     ((code *)DAT_1000d000[0x1d] != (code *)0x0)) {
    (*(code *)DAT_1000d000[0x1d])(0,&DAT_1000d170,0x84);
  }
  if (CONCAT11(DAT_1000d173,DAT_1000d172) == DAT_1000d028) {
    return 0;
  }
  uVar10 = (uint)DAT_1000d028 % (uint)DAT_1000d024;
  bVar1 = (&DAT_1000d174)[uVar10 * 8];
  bVar2 = (&DAT_1000d175)[uVar10 * 8];
  bVar3 = (&DAT_1000d176)[uVar10 * 8];
  bVar4 = (&DAT_1000d177)[uVar10 * 8];
  uVar5 = (&DAT_1000d178)[uVar10 * 8];
  uVar6 = (&DAT_1000d179)[uVar10 * 8];
  bVar7 = (&DAT_1000d17a)[uVar10 * 8];
  bVar8 = (&DAT_1000d17b)[uVar10 * 8];
  DAT_1000d028 = DAT_1000d028 + 1;
  in_CX = CONCAT11(bVar2,bVar1);
  uVar10 = (uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)in_CX;
  uVar9 = 0;
  if (uVar10 < 0x10) {
    uVar13 = CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(uVar6,uVar5)));
    uVar14 = uVar13 - uVar12;
    if (uVar12 <= uVar13 && uVar14 != 0) {
      if (((DAT_1000d000 != (int *)0x0) && (*DAT_1000d000 == 0x54584b57)) &&
         ((0x77 < (uint)DAT_1000d000[2] && ((code *)DAT_1000d000[0x1d] != (code *)0x0)))) {
        (*(code *)DAT_1000d000[0x1d])(0,&DAT_1000d200 + uVar10 * 0x80c,0x80c);
      }
      uVar9 = 0;
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar14;
      }
      if (uVar14 < 0x801 && uVar14 <= param_2) {
        iVar11 = 0;
        do {
          *(undefined1 *)(param_1 + iVar11) =
               (&DAT_1000d200)
               [iVar11 + (uint)bVar2 * 0x80c00 +
                         (uint)bVar3 * 0x80c0000 + uVar12 + (uint)bVar4 * 0xc000000 +
                         (uint)bVar1 * 0x80c];
          iVar11 = iVar11 + 1;
        } while (((uint)CONCAT11(uVar6,uVar5) + (uint)bVar8 * 0x1000000 + (uint)bVar7 * 0x10000) -
                 uVar12 != iVar11);
        uVar9 = 1;
      }
      goto LAB_1000a8a8;
    }
  }
  if (0xf < uVar10) {
    return 0;
  }
LAB_1000a8a8:
  recovered_1000b340(in_CX);
  return uVar9;
}

#undef DAT_1000d000
#undef DAT_1000d004
#undef DAT_1000d010
#undef DAT_1000d024
#undef DAT_1000d028
#undef DAT_1000d170
#undef DAT_1000d172
#undef DAT_1000d173
#undef DAT_1000d174
#undef DAT_1000d175
#undef DAT_1000d176
#undef DAT_1000d177
#undef DAT_1000d178
#undef DAT_1000d179
#undef DAT_1000d17a
#undef DAT_1000d17b
#undef DAT_1000d200

#undef DAT_1000d000
#define DAT_1000d000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_1000d004
#define DAT_1000d004 (*(int *)(((uintptr_t)pf_module_state + 0x1b18U)))
#undef DAT_1000d010
#define DAT_1000d010 (*(int *)(((uintptr_t)pf_module_state + 0x1b24U)))
#undef DAT_1000d014
#define DAT_1000d014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b28U)))
#undef DAT_1000d018
#define DAT_1000d018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b2cU)))
#undef DAT_1000d030
#define DAT_1000d030 (*(short *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef DAT_1000d032
#define DAT_1000d032 (*(ushort *)(((uintptr_t)pf_module_state + 0x1b46U)))
#undef DAT_1000d034
#define DAT_1000d034 (*(short *)(((uintptr_t)pf_module_state + 0x1b48U)))
#undef DAT_1000d038
#define DAT_1000d038 (*(int *)(((uintptr_t)pf_module_state + 0x1b4cU)))
#undef DAT_100152c0
#define DAT_100152c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd4U)))
#undef DAT_100152c1
#define DAT_100152c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd5U)))
#undef DAT_100152c2
#define DAT_100152c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd6U)))
#undef DAT_100152c3
#define DAT_100152c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd7U)))
#undef DAT_100152c4
#define DAT_100152c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd8U)))
#undef DAT_100152c5
#define DAT_100152c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dd9U)))
#undef DAT_100152c6
#define DAT_100152c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddaU)))
#undef DAT_100152c7
#define DAT_100152c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddbU)))
#undef DAT_100152c8
#define DAT_100152c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddcU)))
#undef DAT_100152c9
#define DAT_100152c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dddU)))
#undef DAT_100152ca
#define DAT_100152ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ddeU)))
#undef DAT_100152ce
#define DAT_100152ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de2U)))
#undef DAT_100152d0
#define DAT_100152d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de4U)))
#undef DAT_100152d2
#define DAT_100152d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de6U)))
#undef DAT_100152d3
#define DAT_100152d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de7U)))
#undef DAT_100152d4
#define DAT_100152d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9de8U)))
#undef DAT_100152e0
#define DAT_100152e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df4U)))
#undef DAT_100152e2
#define DAT_100152e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df6U)))
#undef DAT_100152e3
#define DAT_100152e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df7U)))
#undef DAT_100152f0
#define DAT_100152f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e04U)))
#undef _DAT_100152ca
#define _DAT_100152ca (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9ddeU)))
#undef _DAT_100152ce
#define _DAT_100152ce (*(uint16_t *)(((uintptr_t)pf_module_state + 0x9de2U)))
#undef _DAT_100152d4
#define _DAT_100152d4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x9de8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a8c0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;

  piVar4 = DAT_1000d000;
  iVar2 = 10;
  if (DAT_1000d010 != 0) {
    iVar2 = DAT_1000d010;
  }
  if (param_1 == 0) {
    return false;
  }
  if (DAT_1000d004 == 0) {
    return false;
  }
  if (DAT_1000d000 == (int *)0x0) {
    return false;
  }
  if (param_2 - 0x801U < 0xfffff80d) {
    return false;
  }
  if (DAT_1000d030 == 0) {
    return false;
  }
  uVar5 = iVar2 + param_2;
  if (0x80c < uVar5) {
    return false;
  }
  iVar1 = -0x80c;
  do {
    *(undefined1 *)(iVar1 + ((uintptr_t)pf_module_state + 0xa610U)) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      (&DAT_100152f0)[iVar1 + iVar2] = *(undefined1 *)(param_1 + iVar1);
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  DAT_100152c0 = (undefined1)DAT_1000d014;
  DAT_100152c1 = (undefined1)((uint)DAT_1000d014 >> 8);
  DAT_100152c2 = (undefined1)((uint)DAT_1000d014 >> 0x10);
  DAT_100152c3 = (undefined1)((uint)DAT_1000d014 >> 0x18);
  DAT_100152c4 = (undefined1)DAT_1000d018;
  DAT_100152c5 = (undefined1)((uint)DAT_1000d018 >> 8);
  DAT_100152c6 = (undefined1)((uint)DAT_1000d018 >> 0x10);
  DAT_100152c7 = (undefined1)((uint)DAT_1000d018 >> 0x18);
  DAT_100152c8 = (undefined1)uVar5;
  DAT_100152c9 = (undefined1)(uVar5 >> 8);
  _DAT_100152ca = 0;
  _DAT_100152ce = 0;
  _DAT_100152d4 = 0;
  iVar2 = DAT_1000d032 + 1;
  DAT_1000d032 = (ushort)iVar2;
  DAT_100152d2 = (undefined1)iVar2;
  DAT_100152d3 = (undefined1)((uint)iVar2 >> 8);
  if (*piVar4 == 0x54584b57) {
    if (0x77 < (uint)piVar4[2]) {
      if ((code *)piVar4[0x1d] != (code *)0x0) {
        (*(code *)piVar4[0x1d])(0,&DAT_100152f0,uVar5);
        piVar4 = DAT_1000d000;
        if (DAT_1000d000 == (int *)0x0) goto LAB_1000ab01;
      }
    }
    if (*piVar4 == 0x54584b57) {
      if (0x77 < (uint)piVar4[2]) {
        if ((code *)piVar4[0x1d] != (code *)0x0) {
          (*(code *)piVar4[0x1d])(0,&DAT_100152c0,0x10);
          piVar4 = DAT_1000d000;
          if (DAT_1000d000 == (int *)0x0) goto LAB_1000ab01;
        }
      }
      if ((*piVar4 == 0x54584b57) && (0x77 < (uint)piVar4[2])) {
        if ((code *)piVar4[0x1d] != (code *)0x0) {
          (*(code *)piVar4[0x1d])(0,&DAT_100152d0,6);
          piVar4 = DAT_1000d000;
        }
      }
    }
  }
  if ((piVar4 == (int *)0x0 || DAT_1000d038 == 0) || (*piVar4 != 0x54584b57)) goto LAB_1000ab01;
  uVar5 = piVar4[2];
  if (uVar5 < 0x7c) {
LAB_1000aadc:
    if (uVar5 < 0x70) goto LAB_1000ab01;
LAB_1000aae1:
    pcVar3 = (code *)piVar4[0x1b];
    if (pcVar3 == (code *)0x0) goto LAB_1000ab01;
  }
  else {
    if (((code *)piVar4[0x1e] != (code *)0x0) &&
       (((*(code *)piVar4[0x1e])(), DAT_1000d038 == 0 || (*piVar4 != 0x54584b57))))
    goto LAB_1000ab01;
    uVar5 = piVar4[2];
    if (uVar5 < 0xc4) goto LAB_1000aadc;
    pcVar3 = (code *)piVar4[0x30];
    if (pcVar3 == (code *)0x0) goto LAB_1000aae1;
  }
  (*pcVar3)(DAT_1000d038,2,1);
LAB_1000ab01:
  uVar5 = 0;
  bVar6 = true;
  piVar4 = DAT_1000d000;
  while( true ) {
    if ((((piVar4 != (int *)0x0) && (*piVar4 == 0x54584b57)) && (0x77 < (uint)piVar4[2])) &&
       ((code *)piVar4[0x1d] != (code *)0x0)) {
      (*(code *)piVar4[0x1d])(0,&DAT_100152e0,0xc);
    }
    if (CONCAT11(DAT_100152e3,DAT_100152e2) != DAT_1000d034) break;
    piVar4 = (int *)0x0;
    if (((DAT_1000d000 != (int *)0x0) && (piVar4 = DAT_1000d000, *DAT_1000d000 == 0x54584b57)) &&
       ((0x33 < (uint)DAT_1000d000[2] && ((code *)DAT_1000d000[0xc] != (code *)0x0)))) {
      (*(code *)DAT_1000d000[0xc])(100);
      piVar4 = DAT_1000d000;
    }
    bVar6 = uVar5 < 999;
    uVar5 = uVar5 + 1;
    if (uVar5 == 1000) {
      return false;
    }
  }
  DAT_1000d034 = CONCAT11(DAT_100152e3,DAT_100152e2);
  return bVar6;
}

#undef DAT_1000d000
#undef DAT_1000d004
#undef DAT_1000d010
#undef DAT_1000d014
#undef DAT_1000d018
#undef DAT_1000d030
#undef DAT_1000d032
#undef DAT_1000d034
#undef DAT_1000d038
#undef DAT_100152c0
#undef DAT_100152c1
#undef DAT_100152c2
#undef DAT_100152c3
#undef DAT_100152c4
#undef DAT_100152c5
#undef DAT_100152c6
#undef DAT_100152c7
#undef DAT_100152c8
#undef DAT_100152c9
#undef DAT_100152ca
#undef DAT_100152ce
#undef DAT_100152d0
#undef DAT_100152d2
#undef DAT_100152d3
#undef DAT_100152d4
#undef DAT_100152e0
#undef DAT_100152e2
#undef DAT_100152e3
#undef DAT_100152f0
#undef _DAT_100152ca
#undef _DAT_100152ce
#undef _DAT_100152d4

#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(int *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(undefined4 *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 48))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_20 (*(undefined4 *)(frame + 64))
#define local_1c (*(int * *)(frame + 68))
#define local_18 (*(int *)(frame + 72))
#define local_14 (*(int * *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abe0
 */

undefined4
recovered_1000abe0(int *in_ECX,int *in_EDX,undefined4 param_3,uint param_4,int param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined2 *param_11)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;

  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_11 == (undefined2 *)0x0) {
    return 0;
  }
  local_44 = 0;
  local_40 = 0;
  if (in_EDX == (int *)0x0) {
    return 0;
  }
  iVar2 = *in_EDX;
  if (iVar2 == 0) {
    return 0;
  }
  if (in_ECX == (int *)0x0) {
    return 0;
  }
  if (*in_ECX != 0x54584b57) {
    return 0;
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if (0x6f < (uint)in_ECX[2]) {
LAB_1000ac76:
      pcVar5 = (code *)in_ECX[0x1b];
      if (pcVar5 != (code *)0x0) goto LAB_1000ac7d;
    }
  }
  else {
    pcVar5 = (code *)in_ECX[0x30];
    if (pcVar5 == (code *)0x0) goto LAB_1000ac76;
LAB_1000ac7d:
    (*pcVar5)(iVar2 + 0x16,2,param_3);
    iVar2 = *in_EDX;
    if (iVar2 == 0) {
      return 0;
    }
    if (*in_ECX != 0x54584b57) {
      return 0;
    }
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return 0;
    }
LAB_1000accd:
    pcVar5 = (code *)in_ECX[0x1a];
    if (pcVar5 == (code *)0x0) {
      return 0;
    }
  }
  else {
    pcVar5 = (code *)in_ECX[0x2f];
    if (pcVar5 == (code *)0x0) goto LAB_1000accd;
  }
  local_1c = in_EDX;
  local_14 = in_ECX;
  iVar2 = (*pcVar5)(iVar2 + 0x18,2,&local_44);
  uVar1 = local_44;
  if (local_44 == 0 || iVar2 == 0) {
    return 0;
  }
  if (*local_1c == 0) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0xc0) {
    if ((uint)local_14[2] < 0x6c) {
      return 0;
    }
LAB_1000ad44:
    pcVar5 = (code *)local_14[0x1a];
    if (pcVar5 == (code *)0x0) {
      return 0;
    }
  }
  else {
    pcVar5 = (code *)local_14[0x2f];
    if (pcVar5 == (code *)0x0) goto LAB_1000ad44;
  }
  iVar2 = (*pcVar5)(*local_1c + 0x1e,2,&local_40);
  if (iVar2 == 0) {
    return 0;
  }
  if (local_1c[1] == 0) {
    return 0;
  }
  iVar2 = local_1c[8] * local_40 + local_1c[1];
  if ((uVar1 & 0xffff) < param_4 || iVar2 == 0) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x74) {
    return 0;
  }
  if (param_5 == 0 || (code *)local_14[0x1c] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)local_14[0x1c])(0,param_5,param_6,&local_38,&local_34);
  if (iVar3 == 0) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x74) {
    return 0;
  }
  if (param_7 == 0 || (code *)local_14[0x1c] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)local_14[0x1c])(0,param_7,param_8,&local_30,&local_2c);
  if (iVar3 == 0) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x74) {
    return 0;
  }
  if (param_9 == 0 || (code *)local_14[0x1c] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)local_14[0x1c])(0,param_9,param_10,&local_28,&local_24);
  if (iVar3 == 0) {
    return 0;
  }
  local_18 = *local_1c;
  iVar3 = *local_14;
  if (local_18 == 0) {
LAB_1000b1b7:
    if (iVar3 == 0x54584b57) {
LAB_1000b1be:
      if ((((0x77 < (uint)local_14[2]) &&
           ((((code *)local_14[0x1d] == (code *)0x0 ||
             ((*(code *)local_14[0x1d])(0,param_5,param_6), *local_14 == 0x54584b57)) &&
            (0x77 < (uint)local_14[2])))) &&
          ((((code *)local_14[0x1d] == (code *)0x0 ||
            ((*(code *)local_14[0x1d])(0,param_7,param_8), *local_14 == 0x54584b57)) &&
           (0x77 < (uint)local_14[2])))) && ((code *)local_14[0x1d] != (code *)0x0)) {
        (*(code *)local_14[0x1d])(0,param_9,param_10);
      }
    }
  }
  else {
    if (iVar3 == 0x54584b57) {
      if ((uint)local_14[2] < 0xc4) {
        if (0x6f < (uint)local_14[2]) {
LAB_1000aed7:
          pcVar5 = (code *)local_14[0x1b];
          if (pcVar5 != (code *)0x0) goto LAB_1000aee1;
        }
      }
      else {
        pcVar5 = (code *)local_14[0x30];
        if (pcVar5 == (code *)0x0) goto LAB_1000aed7;
LAB_1000aee1:
        (*pcVar5)(local_18 + 0x16,2,param_3);
        local_18 = *local_1c;
        iVar3 = *local_14;
        if (local_18 == 0) goto LAB_1000b1b7;
        if (iVar3 != 0x54584b57) goto LAB_1000af71;
      }
      if ((uint)local_14[2] < 0xc4) {
        iVar3 = 0x54584b57;
        if (0x6f < (uint)local_14[2]) {
LAB_1000af38:
          pcVar5 = (code *)local_14[0x1b];
          if (pcVar5 != (code *)0x0) goto LAB_1000af42;
          iVar3 = 0x54584b57;
        }
      }
      else {
        pcVar5 = (code *)local_14[0x30];
        if (pcVar5 == (code *)0x0) goto LAB_1000af38;
LAB_1000af42:
        (*pcVar5)(local_18 + 0x18,2,param_4);
        local_18 = *local_1c;
        iVar3 = *local_14;
        if (local_18 == 0) {
          local_18 = 0;
          goto LAB_1000b1b7;
        }
      }
    }
LAB_1000af71:
    if (iVar3 == 0x54584b57) {
      local_20 = local_34;
      if ((uint)local_14[2] < 0xc4) {
        iVar3 = 0x54584b57;
        if (0x6f < (uint)local_14[2]) {
LAB_1000afaf:
          pcVar5 = (code *)local_14[0x1b];
          if (pcVar5 != (code *)0x0) goto LAB_1000afb9;
LAB_1000b027:
          iVar3 = 0x54584b57;
        }
      }
      else {
        pcVar5 = (code *)local_14[0x30];
        if (pcVar5 == (code *)0x0) goto LAB_1000afaf;
LAB_1000afb9:
        iVar4 = (*pcVar5)(local_18 + 0x20,4,local_38);
        iVar3 = *local_14;
        if ((iVar4 != 0) && (iVar3 == 0x54584b57)) {
          if ((uint)local_14[2] < 0xc4) {
            iVar3 = 0x54584b57;
            if ((uint)local_14[2] < 0x70) goto LAB_1000b02c;
LAB_1000b002:
            pcVar5 = (code *)local_14[0x1b];
            if (pcVar5 == (code *)0x0) goto LAB_1000b027;
          }
          else {
            pcVar5 = (code *)local_14[0x30];
            if (pcVar5 == (code *)0x0) goto LAB_1000b002;
          }
          (*pcVar5)(local_18 + 0x24,4,local_20);
          iVar3 = *local_14;
        }
      }
    }
LAB_1000b02c:
    local_18 = *local_1c;
    if (local_18 == 0) goto LAB_1000b1b7;
    if (iVar3 == 0x54584b57) {
      local_20 = local_2c;
      if ((uint)local_14[2] < 0xc4) {
        iVar3 = 0x54584b57;
        if (0x6f < (uint)local_14[2]) {
LAB_1000b07a:
          pcVar5 = (code *)local_14[0x1b];
          if (pcVar5 != (code *)0x0) goto LAB_1000b084;
LAB_1000b0f2:
          iVar3 = 0x54584b57;
        }
      }
      else {
        pcVar5 = (code *)local_14[0x30];
        if (pcVar5 == (code *)0x0) goto LAB_1000b07a;
LAB_1000b084:
        iVar4 = (*pcVar5)(local_18 + 0x28,4,local_30);
        iVar3 = *local_14;
        if ((iVar4 != 0) && (iVar3 == 0x54584b57)) {
          if ((uint)local_14[2] < 0xc4) {
            iVar3 = 0x54584b57;
            if ((uint)local_14[2] < 0x70) goto LAB_1000b0f7;
LAB_1000b0cd:
            pcVar5 = (code *)local_14[0x1b];
            if (pcVar5 == (code *)0x0) goto LAB_1000b0f2;
          }
          else {
            pcVar5 = (code *)local_14[0x30];
            if (pcVar5 == (code *)0x0) goto LAB_1000b0cd;
          }
          (*pcVar5)(local_18 + 0x2c,4,local_20);
          iVar3 = *local_14;
        }
      }
    }
LAB_1000b0f7:
    local_18 = *local_1c;
    if (local_18 == 0) goto LAB_1000b1b7;
    if (iVar3 == 0x54584b57) {
      local_20 = local_24;
      if (0xc3 < (uint)local_14[2]) {
        pcVar5 = (code *)local_14[0x30];
        if (pcVar5 == (code *)0x0) goto LAB_1000b140;
LAB_1000b14a:
        iVar4 = (*pcVar5)(local_18 + 0x30,4,local_28);
        iVar3 = *local_14;
        if (iVar4 == 0) goto LAB_1000b1b7;
        if (iVar3 == 0x54584b57) {
          if ((uint)local_14[2] < 0xc4) {
            if ((uint)local_14[2] < 0x70) goto LAB_1000b23b;
LAB_1000b194:
            pcVar5 = (code *)local_14[0x1b];
            if (pcVar5 == (code *)0x0) goto LAB_1000b1be;
          }
          else {
            pcVar5 = (code *)local_14[0x30];
            if (pcVar5 == (code *)0x0) goto LAB_1000b194;
          }
          (*pcVar5)(local_18 + 0x34,4,local_20);
          iVar3 = *local_14;
          goto LAB_1000b1b7;
        }
        goto LAB_1000b23b;
      }
      if ((uint)local_14[2] < 0x70) goto LAB_1000b23b;
LAB_1000b140:
      pcVar5 = (code *)local_14[0x1b];
      if (pcVar5 != (code *)0x0) goto LAB_1000b14a;
      goto LAB_1000b1be;
    }
  }
LAB_1000b23b:
  iVar3 = *local_1c;
  if (iVar3 == 0) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0xc4) {
    if (0x6f < (uint)local_14[2]) {
LAB_1000b279:
      pcVar5 = (code *)local_14[0x1b];
      if (pcVar5 != (code *)0x0) goto LAB_1000b283;
    }
  }
  else {
    pcVar5 = (code *)local_14[0x30];
    if (pcVar5 == (code *)0x0) goto LAB_1000b279;
LAB_1000b283:
    (*pcVar5)(iVar3 + 0x1c,2,1);
    iVar3 = *local_1c;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*local_14 == 0x54584b57) {
    if ((uint)local_14[2] < 0xc0) {
      if ((uint)local_14[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar5 = (code *)local_14[0x2f];
      if (pcVar5 != (code *)0x0) goto LAB_1000b2db;
    }
    pcVar5 = (code *)local_14[0x1a];
    if (pcVar5 != (code *)0x0) {
LAB_1000b2db:
      (*pcVar5)(iVar3 + 0x1c,2,&local_3c);
      if (local_3c == 0) {
        return 0;
      }
      *param_11 = (short)param_4;
      param_11[1] = *(undefined2 *)(param_7 + 2);
      param_11[2] = *(undefined2 *)(param_9 + 2);
      *(int *)(param_11 + 4) = iVar2;
      return 1;
    }
  }
  return 0;
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

#undef DAT_1000d000
#define DAT_1000d000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_1000d024
#define DAT_1000d024 (*(ushort *)(((uintptr_t)pf_module_state + 0x1b38U)))
#undef DAT_1000d026
#define DAT_1000d026 (*(ushort *)(((uintptr_t)pf_module_state + 0x1b3aU)))
#undef DAT_1000d02c
#define DAT_1000d02c (*(int *)(((uintptr_t)pf_module_state + 0x1b40U)))
#undef DAT_1000d140
#define DAT_1000d140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c54U)))
#undef DAT_1000d142
#define DAT_1000d142 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c56U)))
#undef DAT_1000d143
#define DAT_1000d143 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c57U)))
#undef DAT_1000d144
#define DAT_1000d144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c58U)))
#undef DAT_1000d200
#define DAT_1000d200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b340
 */

void recovered_1000b340(ushort in_CX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;

  piVar4 = DAT_1000d000;
  uVar3 = (uint)DAT_1000d024;
  if (DAT_1000d024 == 0 || DAT_1000d000 == (int *)0x0) {
    return;
  }
  iVar1 = -0x80c;
  do {
    *(undefined1 *)((uint)in_CX * 0x80c + ((uintptr_t)pf_module_state + 0x2520U) + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  *(ushort *)(&DAT_1000d144 + ((uint)DAT_1000d026 % uVar3) * 2) = in_CX;
  iVar1 = DAT_1000d026 + 1;
  DAT_1000d026 = (ushort)iVar1;
  DAT_1000d142 = (undefined1)iVar1;
  DAT_1000d143 = (undefined1)((uint)iVar1 >> 8);
  if (*piVar4 == 0x54584b57) {
    if (((0x77 < (uint)piVar4[2]) && ((code *)piVar4[0x1d] != (code *)0x0)) &&
       ((*(code *)piVar4[0x1d])(0,&DAT_1000d200 + (uint)in_CX * 0x80c,0x80c), piVar4 = DAT_1000d000,
       DAT_1000d000 == (int *)0x0)) {
      return;
    }
    if (((*piVar4 == 0x54584b57) && (0x77 < (uint)piVar4[2])) &&
       ((code *)piVar4[0x1d] != (code *)0x0)) {
      (*(code *)piVar4[0x1d])(0,&DAT_1000d140,0x24);
      piVar4 = DAT_1000d000;
    }
  }
  if (piVar4 == (int *)0x0 || DAT_1000d02c == 0) {
    return;
  }
  if (*piVar4 != 0x54584b57) {
    return;
  }
  uVar3 = piVar4[2];
  if (uVar3 < 0x7c) {
LAB_1000b462:
    if (uVar3 < 0x70) {
      return;
    }
  }
  else {
    if ((code *)piVar4[0x1e] != (code *)0x0) {
      (*(code *)piVar4[0x1e])();
      if (DAT_1000d02c == 0) {
        return;
      }
      if (*piVar4 != 0x54584b57) {
        return;
      }
    }
    uVar3 = piVar4[2];
    if (uVar3 < 0xc4) goto LAB_1000b462;
    pcVar2 = (code *)piVar4[0x30];
    if (pcVar2 != (code *)0x0) goto LAB_1000b480;
  }
  pcVar2 = (code *)piVar4[0x1b];
  if (pcVar2 == (code *)0x0) {
    return;
  }
LAB_1000b480:
  (*pcVar2)(DAT_1000d02c,2,0);
  return;
}

#undef DAT_1000d000
#undef DAT_1000d024
#undef DAT_1000d026
#undef DAT_1000d02c
#undef DAT_1000d140
#undef DAT_1000d142
#undef DAT_1000d143
#undef DAT_1000d144
#undef DAT_1000d200

#undef DAT_1000bf7f
#define DAT_1000bf7f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa93U)))
#undef DAT_1000bf84
#define DAT_1000bf84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa98U)))
#undef DAT_1000bf89
#define DAT_1000bf89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9dU)))
#undef DAT_1000bf8e
#define DAT_1000bf8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa2U)))
#undef str_1000bf93
#define str_1000bf93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa7U)))
#undef str_1000bf9e
#define str_1000bf9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab2U)))
#undef str_1000bfa7
#define str_1000bfa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b490
 */

char * recovered_1000b490(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_1000bf7f;
    }
    if (in_ECX == 0x10) {
      return &DAT_1000bf84;
    }
    if (in_ECX == 0x20) {
      return &DAT_1000bf89;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_1000bf8e;
    }
    if (in_ECX == 0x80) {
      return str_1000bf93;
    }
    if (in_ECX == 0xfe) {
      return str_1000bf9e;
    }
  }
  return str_1000bfa7;
}

#undef DAT_1000bf7f
#undef DAT_1000bf84
#undef DAT_1000bf89
#undef DAT_1000bf8e
#undef str_1000bf93
#undef str_1000bf9e
#undef str_1000bfa7

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
