/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc85U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100034a9
#define DAT_100034a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12eU)))
#undef str_1000337b
#define str_1000337b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000338e
#define str_1000338e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13U)))
#undef str_100033d2
#define str_100033d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_100033e7
#define str_100033e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cU)))
#undef str_10003405
#define str_10003405 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_1000341d
#define str_1000341d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_10003448
#define str_10003448 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdU)))
#undef str_1000346c
#define str_1000346c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1U)))
#undef str_1000347b
#define str_1000347b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_1000348b
#define str_1000348b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#undef str_1000349a
#define str_1000349a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11fU)))
#define abStack_66 (*(byte (*)[46])(frame + 1226))
#define local_504 (*(char *)(frame + 44))
#define local_4ac (*(uint *)(frame + 132))
#define local_470 (*(uint *)(frame + 192))
#define local_46c (*(undefined4 *)(frame + 196))
#define local_468 (*(byte (*)[1026])(frame + 200))
#define local_38 (*(uint *)(frame + 1272))
#define local_34 (*(uint *)(frame + 1276))
#define abStack_512 (*(byte (*)[14])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000390
 */

int recovered_10000390(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;

  local_34 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar12 = api[2];
  if (uVar12 < 0x10) {
    return 0;
  }
  local_468[0] = 0;
  uVar9 = 0;
  do {
    uVar5 = uVar9;
    uVar9 = uVar5 + 1;
  } while (local_468[uVar5] != 0);
  if (uVar5 + 1 < 0x60) {
    bVar11 = 0x71;
    pcVar8 = str_1000337b;
    do {
      pcVar8 = pcVar8 + 1;
      local_468[uVar5] = bVar11;
      uVar5 = uVar5 + 1;
      bVar11 = *pcVar8;
      if (bVar11 == 0) break;
    } while (uVar5 < 0x5f);
  }
  local_468[uVar5] = 0;
  uVar9 = 0;
  do {
    uVar5 = uVar9;
    uVar9 = uVar5 + 1;
  } while (local_468[uVar5] != 0);
  if (uVar5 + 1 < 0x60) {
    bVar11 = 0x3a;
    pcVar8 = str_1000346c;
    do {
      pcVar8 = pcVar8 + 1;
      local_468[uVar5] = bVar11;
      uVar5 = uVar5 + 1;
      bVar11 = *pcVar8;
      if (bVar11 == 0) break;
    } while (uVar5 < 0x5f);
  }
  local_468[uVar5] = 0;
  if (api[1] == 0) {
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar5 + 1 < 0x60) {
      (local_468 + uVar5)[0] = 0x30;
      (local_468 + uVar5)[1] = 0;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar14 = api[1];
    do {
      uVar5 = uVar9;
      abStack_512[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
      uVar9 = uVar5 + 1;
      if (8 < uVar9) break;
      bVar15 = 9 < uVar14;
      uVar14 = uVar14 / 10;
    } while (bVar15);
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar13 = uVar6;
        uVar6 = uVar13 + 1;
      } while (local_468[uVar13] != 0);
      uVar6 = uVar9;
      if (uVar13 + 1 < 0x60) {
        local_468[uVar13] = abStack_512[uVar5 + 3];
        local_468[uVar13 + 1] = 0;
      }
    }
    else {
      uVar6 = uVar5 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar5 + 1 < 0x60) {
        local_468[uVar5] = abStack_512[uVar6 + 1];
        local_468[uVar5 + 1] = 0;
      }
      pbVar1 = abStack_512 + uVar6;
      uVar6 = uVar6 - 2;
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      uVar9 = uVar6;
      if (uVar5 + 1 < 0x60) {
        local_468[uVar5] = *pbVar1;
        local_468[uVar5 + 1] = 0;
      }
    }
  }
  uVar9 = 0xffffffffffffffff;
  do {
    uVar5 = uVar9;
    uVar9 = uVar5 + 1;
  } while (local_468[uVar5 + 1] != 0);
  if (uVar5 + 2 < 0x60) {
    local_468[uVar5 + 1] = 0x20;
    bVar15 = uVar9 != 0x5e;
    uVar9 = uVar5 + 2;
    if (bVar15) {
      uVar9 = uVar5 + 3;
      local_468[uVar5 + 2] = 0x72;
      if (uVar9 < 0x5f) {
        uVar9 = uVar5 + 4;
        local_468[uVar5 + 3] = 0x65;
        if (uVar9 < 0x5f) {
          uVar9 = uVar5 + 5;
          local_468[uVar5 + 4] = 0x61;
          if (uVar9 < 0x5f) {
            uVar9 = uVar5 + 6;
            local_468[uVar5 + 5] = 100;
            if (uVar9 < 0x5f) {
              local_468[uVar5 + 6] = 0x79;
              uVar9 = uVar5 + 7;
            }
          }
        }
      }
    }
  }
  local_468[uVar9] = 0;
  if ((0x2b < uVar12) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(local_468);
  }
  local_468[0] = 0;
  uVar9 = 0;
  do {
    uVar5 = uVar9;
    uVar9 = uVar5 + 1;
  } while (local_468[uVar5] != 0);
  if (uVar5 + 1 < 0x400) {
    bVar11 = 0x73;
    pcVar8 = str_1000338e;
    do {
      pcVar8 = pcVar8 + 1;
      local_468[uVar5] = bVar11;
      uVar5 = uVar5 + 1;
      bVar11 = *pcVar8;
      if (bVar11 == 0) break;
    } while (uVar5 < 0x3ff);
  }
  local_468[uVar5] = 0;
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(abStack_512 + 2), iVar3 != 0)) {
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x20;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar5 + 1 < 0x400) {
      bVar11 = 0x68;
      pcVar8 = str_1000347b;
      do {
        pcVar8 = pcVar8 + 1;
        local_468[uVar5] = bVar11;
        uVar5 = uVar5 + 1;
        bVar11 = *pcVar8;
        if (bVar11 == 0) break;
      } while (uVar5 < 0x3ff);
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x3d;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    if (local_4ac == 0) {
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar5 + 1 < 0x400) {
        (local_468 + uVar5)[0] = 0x30;
        (local_468 + uVar5)[1] = 0;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar5 = uVar9;
        abStack_66[uVar5 + 3] = (char)local_4ac + (char)(local_4ac / 10) * -10 | 0x30;
        uVar9 = uVar5 + 1;
        if (8 < uVar9) break;
        bVar15 = 9 < local_4ac;
        local_4ac = local_4ac / 10;
      } while (bVar15);
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (local_468[uVar13] != 0);
        uVar6 = uVar9;
        if (uVar13 + 1 < 0x400) {
          local_468[uVar13] = abStack_66[uVar5 + 3];
          local_468[uVar13 + 1] = 0;
        }
      }
      else {
        uVar6 = uVar5 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          uVar9 = uVar5 + 1;
        } while (local_468[uVar5] != 0);
        if (uVar5 + 1 < 0x400) {
          local_468[uVar5] = abStack_66[uVar6 + 1];
          local_468[uVar5 + 1] = 0;
        }
        pbVar1 = abStack_66 + uVar6;
        uVar6 = uVar6 - 2;
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          uVar9 = uVar5 + 1;
        } while (local_468[uVar5] != 0);
        uVar9 = uVar6;
        if (uVar5 + 1 < 0x400) {
          local_468[uVar5] = *pbVar1;
          local_468[uVar5 + 1] = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x20;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar5 + 1 < 0x400) {
      bVar11 = 0x6d;
      pcVar8 = str_1000348b;
      do {
        pcVar8 = pcVar8 + 1;
        local_468[uVar5] = bVar11;
        uVar5 = uVar5 + 1;
        bVar11 = *pcVar8;
        if (bVar11 == 0) break;
      } while (uVar5 < 0x3ff);
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x3d;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    iVar3 = 8;
    do {
      uVar12 = local_470 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar12;
      bVar11 = cVar2 + 0x37;
      if (uVar12 < 10) {
        bVar11 = cVar2 + 0x30;
      }
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar5 + 1 < 0x400) {
        local_468[uVar5] = bVar11;
        local_468[uVar5 + 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x20;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar5 + 1 < 0x400) {
      bVar11 = 0x6d;
      pcVar8 = str_1000349a;
      do {
        pcVar8 = pcVar8 + 1;
        local_468[uVar5] = bVar11;
        uVar5 = uVar5 + 1;
        bVar11 = *pcVar8;
        if (bVar11 == 0) break;
      } while (uVar5 < 0x3ff);
    }
    local_468[uVar5] = 0;
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      uVar9 = uVar5 + 1;
    } while (local_468[uVar5] != 0);
    if (uVar9 < 0x400) {
      local_468[uVar5] = 0x3d;
      uVar5 = uVar9;
    }
    local_468[uVar5] = 0;
    if (local_46c == 0) {
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar5 + 1 < 0x400) {
        (local_468 + uVar5)[0] = 0x30;
        (local_468 + uVar5)[1] = 0;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar5 = uVar9;
        abStack_66[uVar5 + 3] = (char)local_46c + (char)(local_46c / 10) * -10 | 0x30;
        uVar9 = uVar5 + 1;
        if (8 < uVar9) break;
        bVar15 = 9 < local_46c;
        local_46c = local_46c / 10;
      } while (bVar15);
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (local_468[uVar13] != 0);
        uVar6 = uVar9;
        if (uVar13 + 1 < 0x400) {
          local_468[uVar13] = abStack_66[uVar5 + 3];
          local_468[uVar13 + 1] = 0;
        }
      }
      else {
        uVar6 = uVar5 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          uVar9 = uVar5 + 1;
        } while (local_468[uVar5] != 0);
        if (uVar5 + 1 < 0x400) {
          local_468[uVar5] = abStack_66[uVar6 + 1];
          local_468[uVar5 + 1] = 0;
        }
        pbVar1 = abStack_66 + uVar6;
        uVar6 = uVar6 - 2;
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          uVar9 = uVar5 + 1;
        } while (local_468[uVar5] != 0);
        uVar9 = uVar6;
        if (uVar5 + 1 < 0x400) {
          local_468[uVar5] = *pbVar1;
          local_468[uVar5 + 1] = 0;
        }
      }
    }
  }
  iVar3 = 0;
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    iVar4 = (*(code *)(ulong)(uint)api[3])(&DAT_100034a9,str_100033d2,local_468);
    iVar3 = 0;
    if (iVar4 != 0) {
      if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
        (*(code *)(ulong)(uint)api[3])(str_100033e7,str_10003405,str_1000341d);
      }
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        uVar12 = 0;
        pbVar1 = abStack_66 + 2;
        do {
          uVar14 = uVar12 & 0xff;
          iVar3 = 0;
          local_38 = uVar12;
          do {
            uVar10 = (undefined1)iVar3;
            uVar7 = recovered_10002d00(api,uVar14,uVar10,0,abStack_512 + 2);
            if (((int)uVar7 != 0) &&
               (recovered_100010d0(api,abStack_512 + 2,(int *)&local_34), local_504 < '\0')) {
              uVar7 = recovered_10002d00(api,uVar14,uVar10,1,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,2,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,3,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,4,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,5,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,6,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002d00(api,uVar14,uVar10,7,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010d0(api,pbVar1,(int *)&local_34);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          uVar12 = local_38 + 1;
        } while (uVar12 != 8);
      }
      uVar12 = local_34;
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar9 < 0x400) {
        local_468[uVar5] = 0x20;
        uVar5 = uVar9;
      }
      local_468[uVar5] = 0;
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar5 + 1 < 0x400) {
        bVar11 = 0x70;
        pcVar8 = str_10003448;
        do {
          pcVar8 = pcVar8 + 1;
          local_468[uVar5] = bVar11;
          uVar5 = uVar5 + 1;
          bVar11 = *pcVar8;
          if (bVar11 == 0) break;
        } while (uVar5 < 0x3ff);
      }
      local_468[uVar5] = 0;
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 + 1;
      } while (local_468[uVar5] != 0);
      if (uVar9 < 0x400) {
        local_468[uVar5] = 0x3d;
        uVar5 = uVar9;
      }
      local_468[uVar5] = 0;
      if (uVar12 == 0) {
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          uVar9 = uVar5 + 1;
        } while (local_468[uVar5] != 0);
        if (uVar5 + 1 < 0x400) {
          (local_468 + uVar5)[0] = 0x30;
          (local_468 + uVar5)[1] = 0;
        }
      }
      else {
        uVar9 = 0xffffffffffffffff;
        do {
          uVar5 = uVar9;
          abStack_512[uVar5 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
          uVar9 = uVar5 + 1;
          if (8 < uVar9) break;
          bVar15 = 9 < uVar12;
          uVar12 = uVar12 / 10;
        } while (bVar15);
        if ((uVar9 & 1) == 0) {
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (local_468[uVar13] != 0);
          uVar6 = uVar9;
          if (uVar13 + 1 < 0x400) {
            local_468[uVar13] = abStack_512[uVar5 + 3];
            local_468[uVar13 + 1] = 0;
          }
        }
        else {
          uVar6 = uVar5 + 2;
        }
        while (uVar9 != 0) {
          uVar9 = 0;
          do {
            uVar5 = uVar9;
            uVar9 = uVar5 + 1;
          } while (local_468[uVar5] != 0);
          if (uVar5 + 1 < 0x400) {
            local_468[uVar5] = abStack_512[uVar6 + 1];
            local_468[uVar5 + 1] = 0;
          }
          pbVar1 = abStack_512 + uVar6;
          uVar6 = uVar6 - 2;
          uVar9 = 0;
          do {
            uVar5 = uVar9;
            uVar9 = uVar5 + 1;
          } while (local_468[uVar5] != 0);
          uVar9 = uVar6;
          if (uVar5 + 1 < 0x400) {
            local_468[uVar5] = *pbVar1;
            local_468[uVar5 + 1] = 0;
          }
        }
      }
      iVar3 = 1;
      if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
        (*(code *)(ulong)(uint)api[3])(&DAT_100034a9,str_100033d2,local_468);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

#undef DAT_100034a9
#undef str_1000337b
#undef str_1000338e
#undef str_100033d2
#undef str_100033e7
#undef str_10003405
#undef str_1000341d
#undef str_10003448
#undef str_1000346c
#undef str_1000347b
#undef str_1000348b
#undef str_1000349a
#undef abStack_66
#undef local_504
#undef local_4ac
#undef local_470
#undef local_46c
#undef local_468
#undef local_38
#undef local_34
#undef abStack_512

#undef str_100034aa
#define str_100034aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_100034ce
#define str_100034ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_100034e2
#define str_100034e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_100034ee
#define str_100034ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x173U)))
#undef str_10003506
#define str_10003506 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_1000351e
#define str_1000351e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a3U)))
#undef str_10003537
#define str_10003537 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_10003548
#define str_10003548 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_10003558
#define str_10003558 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_10003567
#define str_10003567 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#define cStack_8b9 (*(char *)(frame + 23))
#define cStack_4b9 (*(char *)(frame + 1047))
#define local_8b8 (*(undefined2 *)(frame + 24))
#define local_4b8 (*(undefined4 *)(frame + 1048))
#define local_4b4 (*(undefined1 (*)[1028])(frame + 1052))
#define abStack_3c (*(byte (*)[12])(frame + 2196))
#define local_b0 (*(undefined8 *)(frame + 2080))
#define local_a8 (*(undefined4 *)(frame + 2088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d0
 */

void recovered_100010d0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2288] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if ((*(ushort *)(param_2 + 6) | 0x40) != 0x1043) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  PF_PART1(local_8b8, 0) = '\0';
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = 'r';
    pcVar7 = str_100034aa;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((long)&local_8b8 + uVar6) = cVar9;
      uVar6 = uVar6 + 1;
      cVar9 = *pcVar7;
      if (cVar9 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
  local_4b8 = 0;
  local_a8 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar7 = str_100034ee;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)((long)&local_8b8 + uVar6) = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar7;
        if (cVar9 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
  }
  else if (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) ||
          (iVar5 = (*(code *)(ulong)(uint)param_1[0x17])
                             (*param_2,param_2[1],param_2[2],4,2,&local_4b8), iVar5 == 0)) {
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar7 = str_10003506;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)((long)&local_8b8 + uVar6) = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar7;
        if (cVar9 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
  }
  else {
    uVar14 = 1;
    if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
      uVar14 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
    }
    uVar12 = uVar14 | 2;
    if (*(uint *)(param_2 + 0x18) == 0) {
      uVar12 = uVar14;
    }
    if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
      uVar12 = uVar14 | 1;
    }
    uVar14 = uVar12 | 2;
    if (*(uint *)(param_2 + 0x1c) == 0) {
      uVar14 = uVar12;
    }
    if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
      uVar14 = uVar12 | 1;
    }
    uVar12 = uVar14 | 2;
    if (*(uint *)(param_2 + 0x20) == 0) {
      uVar12 = uVar14;
    }
    if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
      uVar12 = uVar14 | 1;
    }
    uVar14 = uVar12 | 2;
    if (*(uint *)(param_2 + 0x24) == 0) {
      uVar14 = uVar12;
    }
    if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
      uVar14 = uVar12 | 1;
    }
    uVar12 = uVar14 | 2;
    if (*(uint *)(param_2 + 0x28) == 0) {
      uVar12 = uVar14;
    }
    if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
      uVar12 = uVar14 | 1;
    }
    uVar14 = uVar12 | 4;
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar14 = uVar12 | 6;
    }
    local_a8 = local_4b8 | uVar14;
    if ((((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
        ((code *)(ulong)(uint)param_1[0x18] != (code *)0x0)) &&
       (iVar5 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2]), iVar5 != 0))
    {
      if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_a8);
      }
      uVar12 = local_4b8;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x20;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = 'p';
        pcVar7 = str_10003537;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)((long)&local_8b8 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar7;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x3d;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      iVar5 = 8;
      do {
        uVar11 = uVar12 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar11;
        cVar17 = cVar9 + '7';
        if (uVar11 < 10) {
          cVar17 = cVar9 + '0';
        }
        uVar19 = 0;
        do {
          uVar6 = uVar19;
          uVar19 = uVar6 + 1;
        } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          *(char *)((long)&local_8b8 + uVar6) = cVar17;
          *(undefined1 *)((long)&local_8b8 + uVar6 + 1) = 0;
        }
        uVar11 = local_a8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x20;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = 'p';
        pcVar7 = str_10003548;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)((long)&local_8b8 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar7;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x3d;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      iVar5 = 8;
      do {
        uVar12 = uVar11 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar12;
        cVar17 = cVar9 + '7';
        if (uVar12 < 10) {
          cVar17 = cVar9 + '0';
        }
        uVar19 = 0;
        do {
          uVar6 = uVar19;
          uVar19 = uVar6 + 1;
        } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          *(char *)((long)&local_8b8 + uVar6) = cVar17;
          *(undefined1 *)((long)&local_8b8 + uVar6 + 1) = 0;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x20;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = 'p';
        pcVar7 = str_10003558;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)((long)&local_8b8 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar7;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar19 < 0x400) {
        *(undefined1 *)((long)&local_8b8 + uVar6) = 0x3d;
        uVar6 = uVar19;
      }
      *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined2 *)((long)&local_8b8 + uVar6) = 0x30;
      }
      uVar6 = 0;
      do {
        uVar19 = uVar6;
        uVar6 = uVar19 + 1;
      } while (*(char *)((long)&local_8b8 + uVar19) != '\0');
      if (0x3ff < uVar6) goto LAB_100013e4;
      *(byte *)((long)&local_8b8 + uVar19) = (byte)uVar14 | 0x30;
    }
    else {
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar7 = str_1000351e;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)((long)&local_8b8 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar7;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
    }
  }
  *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
LAB_100013e4:
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (*(char *)((long)&local_8b8 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = ' ';
    pcVar7 = str_100034ce;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((long)&local_8b8 + uVar6) = cVar9;
      uVar6 = uVar6 + 1;
      cVar9 = *pcVar7;
      if (cVar9 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((long)&local_8b8 + uVar6) = 0;
  local_b0 = recovered_10002f80((long)param_2);
  local_a8 = local_a8 & 0xffffff00;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  if (uVar6 + 1 < 0x60) {
    bVar10 = 0x2f;
    pcVar7 = str_100034e2;
    do {
      pcVar7 = pcVar7 + 1;
      abStack_3c[uVar6 - 0x6c] = bVar10;
      uVar6 = uVar6 + 1;
      bVar10 = *pcVar7;
      if (bVar10 == 0) break;
    } while (uVar6 < 0x5f);
  }
  abStack_3c[uVar6 - 0x6c] = 0;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  if (uVar19 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = 0x2f;
    uVar6 = uVar19;
  }
  abStack_3c[uVar6 - 0x6c] = 0;
  bVar10 = *param_2;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  bVar16 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar16 = bVar10 >> 4 | 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = bVar16;
    abStack_3c[uVar6 - 0x6b] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  bVar1 = bVar10 + 0x37;
  if (bVar10 < 10) {
    bVar1 = bVar10 + 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = bVar1;
    abStack_3c[uVar6 - 0x6b] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  if (uVar19 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = 0x3a;
    uVar6 = uVar19;
  }
  abStack_3c[uVar6 - 0x6c] = 0;
  bVar10 = param_2[1];
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  bVar15 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar15 = bVar10 >> 4 | 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = bVar15;
    abStack_3c[uVar6 - 0x6b] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  bVar2 = bVar10 + 0x37;
  if (bVar10 < 10) {
    bVar2 = bVar10 + 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = bVar2;
    abStack_3c[uVar6 - 0x6b] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (abStack_3c[uVar6 - 0x6c] != 0);
  if (uVar19 < 0x60) {
    abStack_3c[uVar6 - 0x6c] = 0x2e;
    uVar6 = uVar19;
  }
  abStack_3c[uVar6 - 0x6c] = 0;
  bVar10 = param_2[2];
  if (bVar10 == 0) {
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (abStack_3c[uVar6 - 0x6c] != 0);
    if (uVar6 + 1 < 0x60) {
      (abStack_3c + (uVar6 - 0x6c))[0] = 0x30;
      (abStack_3c + (uVar6 - 0x6c))[1] = 0;
    }
  }
  else {
    uVar6 = (ulong)(uint)bVar10;
    uVar19 = 0xffffffffffffffff;
    do {
      uVar8 = uVar19;
      uVar14 = (uint)uVar6;
      abStack_3c[uVar8 + 3] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar19 = uVar8 + 1;
      if (8 < uVar19) break;
      uVar6 = uVar6 / 10;
    } while (9 < uVar14);
    if ((uVar19 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar18 = uVar6;
        uVar6 = uVar18 + 1;
      } while (abStack_3c[uVar18 - 0x6c] != 0);
      uVar6 = uVar19;
      if (uVar18 + 1 < 0x60) {
        abStack_3c[uVar18 - 0x6c] = abStack_3c[uVar8 + 3];
        abStack_3c[uVar18 - 0x6b] = 0;
      }
    }
    else {
      uVar6 = uVar8 + 2;
    }
    while (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar8 = uVar19;
        uVar19 = uVar8 + 1;
      } while (abStack_3c[uVar8 - 0x6c] != 0);
      if (uVar8 + 1 < 0x60) {
        abStack_3c[uVar8 - 0x6c] = abStack_3c[uVar6 + 1];
        abStack_3c[uVar8 - 0x6b] = 0;
      }
      pbVar3 = abStack_3c + uVar6;
      uVar6 = uVar6 - 2;
      uVar19 = 0;
      do {
        uVar8 = uVar19;
        uVar19 = uVar8 + 1;
      } while (abStack_3c[uVar8 - 0x6c] != 0);
      uVar19 = uVar6;
      if (uVar8 + 1 < 0x60) {
        abStack_3c[uVar8 - 0x6c] = *pbVar3;
        abStack_3c[uVar8 - 0x6b] = 0;
      }
    }
  }
  local_4b8 = local_4b8 & 0xffffff00;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 3] != '\0');
  if (uVar6 + 2 < 0x400) {
    *(undefined1 *)(uVar19 + (long)&local_4b8) = 0x70;
    bVar21 = uVar19 != 0x3fe;
    uVar19 = uVar6 + 2;
    if (bVar21) {
      uVar19 = uVar6 + 3;
      local_4b4[uVar6 - 2] = 99;
      if (uVar19 < 0x3ff) {
        uVar19 = uVar6 + 4;
        local_4b4[uVar6 - 1] = 0x69;
        if (uVar19 < 0x3ff) {
          local_4b4[uVar6] = 0x3d;
          uVar19 = uVar6 + 5;
        }
      }
    }
  }
  local_4b4[uVar19 - 4] = 0;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_4b4[uVar6 - 4] = bVar1;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x3a;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_4b4[uVar6 - 4] = bVar15;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_4b4[uVar6 - 4] = bVar2;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x2e;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  if (bVar10 == 0) {
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (local_4b4[uVar6 - 4] != '\0');
    if (uVar6 + 1 < 0x400) {
      *(undefined2 *)(local_4b4 + (uVar6 - 4)) = 0x30;
    }
  }
  else {
    uVar19 = 0xffffffffffffffff;
    uVar14 = (uint)bVar10;
    do {
      uVar6 = uVar19;
      abStack_3c[uVar6 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
      uVar19 = uVar6 + 1;
      if (8 < uVar19) break;
      bVar21 = 9 < uVar14;
      uVar14 = uVar14 / 10;
    } while (bVar21);
    if ((uVar19 & 1) == 0) {
      uVar8 = 0;
      do {
        uVar18 = uVar8;
        uVar8 = uVar18 + 1;
      } while (local_4b4[uVar18 - 4] != '\0');
      uVar8 = uVar19;
      if (uVar18 + 1 < 0x400) {
        local_4b4[uVar18 - 4] = abStack_3c[uVar6 + 3];
        local_4b4[uVar18 - 3] = 0;
      }
    }
    else {
      uVar8 = uVar6 + 2;
    }
    while (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (local_4b4[uVar6 - 4] != '\0');
      if (uVar6 + 1 < 0x400) {
        local_4b4[uVar6 - 4] = abStack_3c[uVar8 + 1];
        local_4b4[uVar6 - 3] = 0;
      }
      pbVar3 = abStack_3c + uVar8;
      uVar8 = uVar8 - 2;
      uVar19 = 0;
      do {
        uVar6 = uVar19;
        uVar19 = uVar6 + 1;
      } while (local_4b4[uVar6 - 4] != '\0');
      uVar19 = uVar8;
      if (uVar6 + 1 < 0x400) {
        local_4b4[uVar6 - 4] = *pbVar3;
        local_4b4[uVar6 - 3] = 0;
      }
    }
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 3] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_4b4[uVar6 - 3] = 0x20;
    bVar21 = uVar19 != 0x3fe;
    uVar19 = uVar6 + 2;
    if (bVar21) {
      uVar19 = uVar6 + 3;
      local_4b4[uVar6 - 2] = 0x76;
      if (uVar19 < 0x3ff) {
        uVar19 = uVar6 + 4;
        local_4b4[uVar6 - 1] = 0x65;
        if (uVar19 < 0x3ff) {
          uVar19 = uVar6 + 5;
          local_4b4[uVar6] = 0x6e;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar6 + 6;
            *(undefined1 *)(uVar6 + 5 + (long)&local_4b8) = 100;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar6 + 7;
              local_4b4[uVar6 + 2] = 0x6f;
              if (uVar19 < 0x3ff) {
                uVar19 = uVar6 + 8;
                local_4b4[uVar6 + 3] = 0x72;
                if (uVar19 < 0x3ff) {
                  local_4b4[uVar6 + 4] = 0x3d;
                  uVar19 = uVar6 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_4b4[uVar19 - 4] = 0;
  uVar4 = *(ushort *)(param_2 + 4);
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar10 = (byte)(uVar4 >> 8);
    bVar16 = (bVar10 >> 4) + 0x37;
    if (uVar4 < 0xa000) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar13 = uVar4 >> 8 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar13;
    cVar17 = cVar9 + '7';
    if (uVar13 < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar13 = uVar4 >> 4 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar13;
    cVar17 = cVar9 + '7';
    if (uVar13 < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)(uVar4 & 0xf);
    cVar17 = cVar9 + '7';
    if ((uVar4 & 0xf) < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 3] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_4b4[uVar6 - 3] = 0x20;
    bVar21 = uVar19 != 0x3fe;
    uVar19 = uVar6 + 2;
    if (bVar21) {
      uVar19 = uVar6 + 3;
      local_4b4[uVar6 - 2] = 100;
      if (uVar19 < 0x3ff) {
        uVar19 = uVar6 + 4;
        local_4b4[uVar6 - 1] = 0x65;
        if (uVar19 < 0x3ff) {
          uVar19 = uVar6 + 5;
          local_4b4[uVar6] = 0x76;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar6 + 6;
            *(undefined1 *)(uVar6 + 5 + (long)&local_4b8) = 0x69;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar6 + 7;
              local_4b4[uVar6 + 2] = 99;
              if (uVar19 < 0x3ff) {
                uVar19 = uVar6 + 8;
                local_4b4[uVar6 + 3] = 0x65;
                if (uVar19 < 0x3ff) {
                  local_4b4[uVar6 + 4] = 0x3d;
                  uVar19 = uVar6 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_4b4[uVar19 - 4] = 0;
  uVar4 = *(ushort *)(param_2 + 6);
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar10 = (byte)(uVar4 >> 8);
    bVar16 = (bVar10 >> 4) + 0x37;
    if (uVar4 < 0xa000) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar13 = uVar4 >> 8 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar13;
    cVar17 = cVar9 + '7';
    if (uVar13 < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar13 = uVar4 >> 4 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar13;
    cVar17 = cVar9 + '7';
    if (uVar13 < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)(uVar4 & 0xf);
    cVar17 = cVar9 + '7';
    if ((uVar4 & 0xf) < 10) {
      cVar17 = cVar9 + '0';
    }
    local_4b4[uVar6 - 4] = cVar17;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 3] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_4b4[uVar6 - 3] = 0x20;
    bVar21 = uVar19 != 0x3fe;
    uVar19 = uVar6 + 2;
    if (bVar21) {
      uVar19 = uVar6 + 3;
      local_4b4[uVar6 - 2] = 99;
      if (uVar19 < 0x3ff) {
        uVar19 = uVar6 + 4;
        local_4b4[uVar6 - 1] = 0x6c;
        if (uVar19 < 0x3ff) {
          uVar19 = uVar6 + 5;
          *(undefined1 *)(uVar6 + 4 + (long)&local_4b8) = 0x61;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar6 + 6;
            local_4b4[uVar6 + 1] = 0x73;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar6 + 7;
              local_4b4[uVar6 + 2] = 0x73;
              if (uVar19 < 0x3ff) {
                local_4b4[uVar6 + 3] = 0x3d;
                uVar19 = uVar6 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_4b4[uVar19 - 4] = 0;
  bVar10 = param_2[8];
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar16 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    local_4b4[uVar6 - 4] = cVar9;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x2e;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  bVar10 = param_2[9];
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar16 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    local_4b4[uVar6 - 4] = cVar9;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x2e;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  bVar10 = param_2[10];
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar16 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    local_4b4[uVar6 - 4] = cVar9;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = ' ';
    pcVar7 = str_10003567;
    do {
      pcVar7 = pcVar7 + 1;
      local_4b4[uVar6 - 4] = cVar9;
      uVar6 = uVar6 + 1;
      cVar9 = *pcVar7;
      if (cVar9 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  local_4b4[uVar6 - 4] = 0;
  bVar10 = param_2[0xb];
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar16 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar16 = bVar10 >> 4 | 0x30;
    }
    local_4b4[uVar6 - 4] = bVar16;
    local_4b4[uVar6 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    local_4b4[uVar6 - 4] = cVar9;
    local_4b4[uVar6 - 3] = 0;
  }
  uVar14 = *(uint *)(param_2 + 0x10);
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x20;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 3] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_4b4[uVar6 - 3] = 99;
    bVar21 = uVar19 != 0x3fe;
    uVar19 = uVar6 + 2;
    if (bVar21) {
      uVar19 = uVar6 + 3;
      local_4b4[uVar6 - 2] = 0x6f;
      if (uVar19 < 0x3ff) {
        uVar19 = uVar6 + 4;
        local_4b4[uVar6 - 1] = 0x6d;
        if (uVar19 < 0x3ff) {
          uVar19 = uVar6 + 5;
          *(undefined1 *)(uVar6 + 4 + (long)&local_4b8) = 0x6d;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar6 + 6;
            local_4b4[uVar6 + 1] = 0x61;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar6 + 7;
              local_4b4[uVar6 + 2] = 0x6e;
              if (uVar19 < 0x3ff) {
                local_4b4[uVar6 + 3] = 100;
                uVar19 = uVar6 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_4b4[uVar19 - 4] = 0;
  uVar19 = 0;
  do {
    uVar6 = uVar19;
    uVar19 = uVar6 + 1;
  } while (local_4b4[uVar6 - 4] != '\0');
  if (uVar19 < 0x400) {
    local_4b4[uVar6 - 4] = 0x3d;
    uVar6 = uVar19;
  }
  local_4b4[uVar6 - 4] = 0;
  iVar5 = 8;
  do {
    uVar12 = uVar14 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
    cVar9 = (char)uVar12;
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (local_4b4[uVar6 - 4] != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar17 = cVar9 + '7';
      if (uVar12 < 10) {
        cVar17 = cVar9 + '0';
      }
      local_4b4[uVar6 - 4] = cVar17;
      local_4b4[uVar6 - 3] = 0;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar19 = 0;
  do {
    uVar14 = *(uint *)(param_2 + uVar19 * 4 + 0x14);
    if (uVar14 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar8 = uVar6;
        uVar6 = uVar8 + 1;
      } while (local_4b4[uVar8 - 3] != '\0');
      if (uVar8 + 2 < 0x400) {
        local_4b4[uVar8 - 3] = 0x20;
        bVar21 = uVar6 != 0x3fe;
        uVar6 = uVar8 + 2;
        if (bVar21) {
          uVar6 = uVar8 + 3;
          local_4b4[uVar8 - 2] = 0x62;
          if (uVar6 < 0x3ff) {
            uVar6 = uVar8 + 4;
            local_4b4[uVar8 - 1] = 0x61;
            if (uVar6 < 0x3ff) {
              local_4b4[uVar8] = 0x72;
              uVar6 = uVar8 + 5;
            }
          }
        }
      }
      local_4b4[uVar6 - 4] = 0;
      if (uVar19 == 0) {
        uVar6 = 0;
        do {
          uVar8 = uVar6;
          uVar6 = uVar8 + 1;
        } while (local_4b4[uVar8 - 4] != '\0');
        if (uVar8 + 1 < 0x400) {
          *(undefined2 *)(local_4b4 + (uVar8 - 4)) = 0x30;
        }
      }
      else {
        uVar8 = 0xffffffffffffffff;
        uVar6 = uVar19;
        do {
          uVar18 = uVar8;
          uVar12 = (uint)uVar6;
          uVar20 = (uVar6 & 0xffffffff) / 10;
          abStack_3c[uVar18 + 3] = (char)uVar6 + (char)uVar20 * -10 | 0x30;
          uVar8 = uVar18 + 1;
          if (8 < uVar8) break;
          uVar6 = uVar20;
        } while (9 < uVar12);
        if ((uVar8 & 1) == 0) {
          uVar6 = 0;
          do {
            uVar20 = uVar6;
            uVar6 = uVar20 + 1;
          } while (local_4b4[uVar20 - 4] != '\0');
          uVar6 = uVar8;
          if (uVar20 + 1 < 0x400) {
            local_4b4[uVar20 - 4] = abStack_3c[uVar18 + 3];
            local_4b4[uVar20 - 3] = 0;
          }
        }
        else {
          uVar6 = uVar18 + 2;
        }
        while (uVar8 != 0) {
          uVar8 = 0;
          do {
            uVar18 = uVar8;
            uVar8 = uVar18 + 1;
          } while (local_4b4[uVar18 - 4] != '\0');
          if (uVar18 + 1 < 0x400) {
            local_4b4[uVar18 - 4] = abStack_3c[uVar6 + 1];
            local_4b4[uVar18 - 3] = 0;
          }
          pbVar3 = abStack_3c + uVar6;
          uVar6 = uVar6 - 2;
          uVar8 = 0;
          do {
            uVar18 = uVar8;
            uVar8 = uVar18 + 1;
          } while (local_4b4[uVar18 - 4] != '\0');
          uVar8 = uVar6;
          if (uVar18 + 1 < 0x400) {
            local_4b4[uVar18 - 4] = *pbVar3;
            local_4b4[uVar18 - 3] = 0;
          }
        }
      }
      uVar6 = 0;
      do {
        uVar8 = uVar6;
        uVar6 = uVar8 + 1;
      } while (local_4b4[uVar8 - 4] != '\0');
      if (uVar6 < 0x400) {
        local_4b4[uVar8 - 4] = 0x3d;
        uVar8 = uVar6;
      }
      local_4b4[uVar8 - 4] = 0;
      iVar5 = 8;
      do {
        uVar12 = uVar14 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar12;
        uVar6 = 0;
        do {
          uVar8 = uVar6;
          uVar6 = uVar8 + 1;
        } while (local_4b4[uVar8 - 4] != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar17 = cVar9 + '7';
          if (uVar12 < 10) {
            cVar17 = cVar9 + '0';
          }
          local_4b4[uVar8 - 4] = cVar17;
          local_4b4[uVar8 - 3] = 0;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != 6);
  if ((char)local_8b8 != '\0') {
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (local_4b4[uVar6 - 4] != '\0');
    if (uVar19 < 0x400) {
      local_4b4[uVar6 - 4] = 0x20;
      uVar6 = uVar19;
    }
    local_4b4[uVar6 - 4] = 0;
    uVar19 = 0;
    do {
      uVar6 = uVar19;
      uVar19 = uVar6 + 1;
    } while (local_4b4[uVar6 - 4] != '\0');
    if (uVar6 + 1 < 0x400) {
      pcVar7 = (char *)((long)&local_8b8 + 1);
      cVar9 = (char)local_8b8;
      do {
        local_4b4[uVar6 - 4] = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar7;
        if (cVar9 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar6 < 0x3ff);
    }
    local_4b4[uVar6 - 4] = 0;
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_a8,local_b0,&local_4b8);
  }
  return;
}

#undef str_100034aa
#undef str_100034ce
#undef str_100034e2
#undef str_100034ee
#undef str_10003506
#undef str_1000351e
#undef str_10003537
#undef str_10003548
#undef str_10003558
#undef str_10003567
#undef cStack_8b9
#undef cStack_4b9
#undef local_8b8
#undef local_4b8
#undef local_4b4
#undef abStack_3c
#undef local_b0
#undef local_a8

#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d00
 */

undefined8
recovered_10002d00(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_1 == (int *)0x0 || param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if (*param_1 != 0x54584b57) {
    return 0;
  }
  if ((uint)param_1[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) {
    return 0;
  }
  uVar4 = param_2 & 0xff;
  local_48 = param_1;
  local_34 = param_2;
  iVar1 = (*(code *)(ulong)(uint)param_1[0x17])(uVar4,param_3,param_4,0,4,&local_3c);
  if (iVar1 == 0) {
    return 0;
  }
  if ((short)local_3c == 0) {
    return 0;
  }
  if ((short)local_3c == -1) {
    return 0;
  }
  if (*local_48 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_48[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,8,4,&local_50);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_48 != 0x54584b57) || ((uint)local_48[2] < 0x60)) ||
      ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,4,4,param_5 + 0x10),
     iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  if (((*local_48 == 0x54584b57) && (0x5f < (uint)local_48[2])) &&
     (((code *)(ulong)(uint)local_48[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,0xc,4,&local_38),
      iVar1 != 0)))) {
  }
  else {
    local_38 = 0;
    PF_PART1(local_38, 2) = 0;
  }
  *param_5 = (char)local_34;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(undefined4 *)(param_5 + 4) = local_3c;
  *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
  param_5[9] = (char)((uint)local_50 >> 0x10);
  param_5[8] = (char)((uint)local_50 >> 0x18);
  param_5[0xc] = PF_PART1(local_38, 2);
  lVar5 = 0;
  piVar3 = local_48;
  do {
    local_4c = 0;
    uVar2 = 0;
    if (((*piVar3 == 0x54584b57) && (0x5f < (uint)piVar3[2])) &&
       ((code *)(ulong)(uint)piVar3[0x17] != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)(uint)piVar3[0x17])
                        (uVar4,param_3,param_4,lVar5 + 0x10U & 0xffff,4,&local_4c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = local_4c;
      }
      piVar3 = local_48;
    }
    *(undefined4 *)(param_5 + lVar5 + 0x14) = uVar2;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x18);
  return 1;
}

#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef local_50
#undef local_4c

#undef str_10003572
#define str_10003572 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef str_1000357d
#define str_1000357d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
#undef str_1000358c
#define str_1000358c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1000359d
#define str_1000359d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_100035b0
#define str_100035b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x235U)))
#undef str_100035c3
#define str_100035c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x248U)))
#undef str_100035d3
#define str_100035d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#undef str_100035e2
#define str_100035e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_100035f1
#define str_100035f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10003602
#define str_10003602 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x287U)))
#undef str_1000360d
#define str_1000360d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_10003619
#define str_10003619 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29eU)))
#undef str_10003623
#define str_10003623 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a8U)))
#undef str_1000362c
#define str_1000362c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_10003637
#define str_10003637 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_10003640
#define str_10003640 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_10003648
#define str_10003648 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10003651
#define str_10003651 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_10003658
#define str_10003658 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_1000366b
#define str_1000366b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#undef str_1000367e
#define str_1000367e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_10003691
#define str_10003691 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x316U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f80
 */

char * recovered_10002f80(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_10003572;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000362c;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_10003623;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_10003096;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_10003096:
        return str_10003651;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_10003648;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_10003637;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000360d;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000313a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10003619;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10003640;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000357d;
      case 0x1001:
      case 0x1042:
        return str_1000358c;
      case 0x1002:
      case 0x1045:
        return str_1000359d;
      case 0x1003:
      case 0x1043:
        return str_100035b0;
      case 0x1004:
      case 0x1048:
        return str_100035c3;
      case 0x1005:
      case 0x1044:
        return str_100035d3;
      default:
        return str_10003602;
      case 0x1050:
        return str_100035e2;
      case 0x1052:
        return str_100035f1;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000367e;
    case 2:
      return str_1000366b;
    case 3:
      return str_10003658;
    case 4:
      pcVar2 = str_10003691;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000313a:
        pcVar2 = recovered_10003310((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_10003572
#undef str_1000357d
#undef str_1000358c
#undef str_1000359d
#undef str_100035b0
#undef str_100035c3
#undef str_100035d3
#undef str_100035e2
#undef str_100035f1
#undef str_10003602
#undef str_1000360d
#undef str_10003619
#undef str_10003623
#undef str_1000362c
#undef str_10003637
#undef str_10003640
#undef str_10003648
#undef str_10003651
#undef str_10003658
#undef str_1000366b
#undef str_1000367e
#undef str_10003691

#undef DAT_100036a7
#define DAT_100036a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef DAT_100036ac
#define DAT_100036ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_100036b1
#define DAT_100036b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x336U)))
#undef DAT_100036b6
#define DAT_100036b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bU)))
#undef str_100036bb
#define str_100036bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#undef str_100036c6
#define str_100036c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34bU)))
#undef str_100036cf
#define str_100036cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x354U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003310
 */

char * recovered_10003310(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_100036a7;
    }
    if (param_1 == 0x10) {
      return &DAT_100036ac;
    }
    if (param_1 == 0x20) {
      return &DAT_100036b1;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_100036b6;
    }
    if (param_1 == 0x80) {
      return str_100036bb;
    }
    if (param_1 == 0xfe) {
      return str_100036c6;
    }
  }
  return str_100036cf;
}

#undef DAT_100036a7
#undef DAT_100036ac
#undef DAT_100036b1
#undef DAT_100036b6
#undef str_100036bb
#undef str_100036c6
#undef str_100036cf

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
