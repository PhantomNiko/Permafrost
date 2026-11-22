/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe85U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000c000;
}

#undef DAT_1000c000

#undef DAT_1000b218
#define DAT_1000b218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000b17b
#define str_1000b17b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000b18b
#define str_1000b18b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_1000b1ad
#define str_1000b1ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32U)))
#undef str_1000b1c0
#define str_1000b1c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45U)))
#undef str_1000b1db
#define str_1000b1db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60U)))
#undef str_1000b1ea
#define str_1000b1ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fU)))
#undef str_1000b1fa
#define str_1000b1fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_1000b209
#define str_1000b209 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
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
 * Address: 0x10000430
 */

int recovered_10000430(int *api)

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
    pcVar8 = str_1000b17b;
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
    pcVar8 = str_1000b1db;
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
    pcVar8 = str_1000b18b;
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
      pcVar8 = str_1000b1ea;
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
      pcVar8 = str_1000b1fa;
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
      pcVar8 = str_1000b209;
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
    iVar4 = (*(code *)(ulong)(uint)api[3])(&DAT_1000b218,str_1000b1ad,local_468);
    iVar3 = 0;
    if (iVar4 != 0) {
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        uVar12 = 0;
        pbVar1 = abStack_66 + 2;
        do {
          uVar14 = uVar12 & 0xff;
          iVar3 = 0;
          local_38 = uVar12;
          do {
            uVar10 = (undefined1)iVar3;
            uVar7 = recovered_10003300(api,uVar14,uVar10,0,abStack_512 + 2);
            if (((int)uVar7 != 0) &&
               (recovered_10001150(api,abStack_512 + 2,(int *)&local_34), local_504 < '\0')) {
              uVar7 = recovered_10003300(api,uVar14,uVar10,1,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,2,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,3,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,4,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,5,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,6,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10003300(api,uVar14,uVar10,7,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001150(api,pbVar1,(int *)&local_34);
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
        pcVar8 = str_1000b1c0;
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
        (*(code *)(ulong)(uint)api[3])(&DAT_1000b218,str_1000b1ad,local_468);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

#undef DAT_1000b218
#undef str_1000b17b
#undef str_1000b18b
#undef str_1000b1ad
#undef str_1000b1c0
#undef str_1000b1db
#undef str_1000b1ea
#undef str_1000b1fa
#undef str_1000b209
#undef abStack_66
#undef local_504
#undef local_4ac
#undef local_470
#undef local_46c
#undef local_468
#undef local_38
#undef local_34
#undef abStack_512

#undef DAT_1000d000
#define DAT_1000d000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e85U)))
#undef DAT_1000d001
#define DAT_1000d001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e86U)))
#undef DAT_1000d002
#define DAT_1000d002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e87U)))
#undef DAT_1000d003
#define DAT_1000d003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e88U)))
#undef DAT_1000d004
#define DAT_1000d004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e89U)))
#undef DAT_1000d005
#define DAT_1000d005 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8aU)))
#undef DAT_1000d006
#define DAT_1000d006 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8bU)))
#undef DAT_1000d007
#define DAT_1000d007 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8cU)))
#undef DAT_1000d008
#define DAT_1000d008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8dU)))
#undef DAT_1000d00c
#define DAT_1000d00c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e91U)))
#undef DAT_1000d00e
#define DAT_1000d00e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e93U)))
#undef DAT_1000d00f
#define DAT_1000d00f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e94U)))
#undef DAT_1000d010
#define DAT_1000d010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e95U)))
#undef DAT_1000d014
#define DAT_1000d014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e99U)))
#undef DAT_1000d020
#define DAT_1000d020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea5U)))
#undef DAT_1000d021
#define DAT_1000d021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea6U)))
#undef DAT_1000d022
#define DAT_1000d022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea7U)))
#undef DAT_1000d023
#define DAT_1000d023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea8U)))
#undef DAT_1000d024
#define DAT_1000d024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea9U)))
#undef DAT_1000d025
#define DAT_1000d025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eaaU)))
#undef DAT_1000d026
#define DAT_1000d026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eabU)))
#undef DAT_1000d027
#define DAT_1000d027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eacU)))
#undef DAT_1000d028
#define DAT_1000d028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eadU)))
#undef DAT_1000d029
#define DAT_1000d029 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eaeU)))
#undef DAT_1000d02a
#define DAT_1000d02a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eafU)))
#undef DAT_1000d02b
#define DAT_1000d02b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb0U)))
#undef DAT_1000d030
#define DAT_1000d030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb5U)))
#undef DAT_1000d031
#define DAT_1000d031 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb6U)))
#undef DAT_1000d032
#define DAT_1000d032 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb7U)))
#undef DAT_1000d033
#define DAT_1000d033 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb8U)))
#undef DAT_1000d034
#define DAT_1000d034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eb9U)))
#undef DAT_1000d035
#define DAT_1000d035 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebaU)))
#undef DAT_1000d036
#define DAT_1000d036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebbU)))
#undef DAT_1000d037
#define DAT_1000d037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebcU)))
#undef DAT_1000d038
#define DAT_1000d038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#undef DAT_1000d039
#define DAT_1000d039 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebeU)))
#undef DAT_1000d03a
#define DAT_1000d03a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebfU)))
#undef DAT_1000d03b
#define DAT_1000d03b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec0U)))
#undef DAT_1000d03c
#define DAT_1000d03c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec1U)))
#undef DAT_1000d03d
#define DAT_1000d03d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec2U)))
#undef DAT_1000d03e
#define DAT_1000d03e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec3U)))
#undef DAT_1000d03f
#define DAT_1000d03f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec4U)))
#undef DAT_1000d040
#define DAT_1000d040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec5U)))
#undef DAT_1000d041
#define DAT_1000d041 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec6U)))
#undef DAT_1000d042
#define DAT_1000d042 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec7U)))
#undef DAT_1000d043
#define DAT_1000d043 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec8U)))
#undef DAT_1000d044
#define DAT_1000d044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ec9U)))
#undef DAT_1000d045
#define DAT_1000d045 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecaU)))
#undef DAT_1000d046
#define DAT_1000d046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecbU)))
#undef DAT_1000d047
#define DAT_1000d047 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eccU)))
#undef DAT_1000d048
#define DAT_1000d048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecdU)))
#undef DAT_1000d049
#define DAT_1000d049 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eceU)))
#undef DAT_1000d04a
#define DAT_1000d04a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecfU)))
#undef DAT_1000d04b
#define DAT_1000d04b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ed0U)))
#undef DAT_1000d04c
#define DAT_1000d04c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ed1U)))
#undef DAT_1000d04d
#define DAT_1000d04d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ed2U)))
#undef DAT_1000d04e
#define DAT_1000d04e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ed3U)))
#undef DAT_1000d04f
#define DAT_1000d04f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ed4U)))
#undef _DAT_1000d008
#define _DAT_1000d008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e8dU)))
#undef _DAT_1000d00c
#define _DAT_1000d00c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1e91U)))
#undef _DAT_1000d010
#define _DAT_1000d010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e95U)))
#undef _DAT_1000d014
#define _DAT_1000d014 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1e99U)))
#undef str_1000b219
#define str_1000b219 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eU)))
#undef str_1000b5d2
#define str_1000b5d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_1000b5f0
#define str_1000b5f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x475U)))
#undef str_1000b60c
#define str_1000b60c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x491U)))
#undef str_1000b622
#define str_1000b622 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a7U)))
#undef str_1000b63c
#define str_1000b63c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c1U)))
#undef str_1000b650
#define str_1000b650 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d5U)))
#undef str_1000b65c
#define str_1000b65c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e1U)))
#undef str_1000b66c
#define str_1000b66c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f1U)))
#undef str_1000b679
#define str_1000b679 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4feU)))
#undef str_1000b689
#define str_1000b689 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50eU)))
#undef str_1000b693
#define str_1000b693 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_1000b69b
#define str_1000b69b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x520U)))
#undef str_1000b6a4
#define str_1000b6a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x529U)))
#undef str_1000b6ae
#define str_1000b6ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x533U)))
#define local_4c8 (*(undefined8 *)(frame + 1048))
#define local_4c0 (*(undefined1 (*)[68])(frame + 1056))
#define acStack_8c9 (*(char (*)[1024])(frame + 23))
#define local_47c (*(byte *)(frame + 1124))
#define cStack_4c9 (*(char *)(frame + 1047))
#define local_474 (*(int *)(frame + 1132))
#define local_468 (*(long *)(frame + 1144))
#define local_c8 (*(undefined4 *)(frame + 2072))
#define local_68 (*(undefined8 *)(frame + 2168))
#define local_60 (*(undefined4 *)(frame + 2176))
#define local_5c (*(undefined4 *)(frame + 2180))
#define local_58 (*(undefined4 *)(frame + 2184))
#define auStack_c4 (*(undefined1 (*)[92])(frame + 2076))
#define local_54 (*(undefined4 *)(frame + 2188))
#define local_50 (*(undefined4 *)(frame + 2192))
#define local_4c (*(undefined4 *)(frame + 2196))
#define local_48 (*(uint *)(frame + 2200))
#define local_44 (*(int *)(frame + 2204))
#define local_40 (*(undefined4 *)(frame + 2208))
#define local_3c (*(undefined4 *)(frame + 2212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001150
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001150(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2304] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined7 extraout_var = 0;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if ((*(short *)(param_2 + 6) != 0x1044) && (*(short *)(param_2 + 6) != 0x1005)) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8c9[1] = '\0';
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 1] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = 'r';
    pcVar6 = str_1000b219;
    do {
      pcVar6 = pcVar6 + 1;
      acStack_8c9[uVar5 + 1] = cVar9;
      uVar5 = uVar5 + 1;
      cVar9 = *pcVar6;
      if (cVar9 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_8c9[uVar5 + 1] = '\0';
  recovered_10003580(param_1,param_2,(long)(acStack_8c9 + 1));
  local_c8 = 0;
  local_3c = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_48 = 0;
  local_40 = 0;
  bVar3 = recovered_10009de0(param_1,param_2,&local_4c8);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 1] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar6 = str_1000b5d2;
      do {
        pcVar6 = pcVar6 + 1;
        acStack_8c9[uVar5 + 1] = cVar9;
        uVar5 = uVar5 + 1;
        cVar9 = *pcVar6;
        if (cVar9 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
  }
  else {
    recovered_1000a440(param_1,&local_4c8);
    if ((local_47c & 8) == 0) {
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar6 = str_1000b5f0;
        do {
          pcVar6 = pcVar6 + 1;
          acStack_8c9[uVar5 + 1] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar6;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
    else if ((local_474 == 0) || (local_468 == 0)) {
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar6 = str_1000b60c;
        do {
          pcVar6 = pcVar6 + 1;
          acStack_8c9[uVar5 + 1] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar6;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
    else {
      DAT_1000d000 = 0;
      DAT_1000d001 = 0;
      DAT_1000d002 = 0;
      DAT_1000d003 = 0;
      DAT_1000d004 = 0;
      DAT_1000d005 = 0;
      DAT_1000d006 = 0;
      DAT_1000d007 = 0;
      _DAT_1000d008 = 0;
      _DAT_1000d00c = 0;
      DAT_1000d00e = 0;
      DAT_1000d00f = 0;
      _DAT_1000d010 = 0;
      _DAT_1000d014 = 0;
      DAT_1000d020 = 0;
      DAT_1000d021 = 0;
      DAT_1000d022 = 0;
      DAT_1000d023 = 0;
      DAT_1000d024 = 0;
      DAT_1000d025 = 0;
      DAT_1000d026 = 0;
      DAT_1000d027 = 0;
      DAT_1000d028 = 0;
      DAT_1000d029 = 0;
      DAT_1000d02a = 0;
      DAT_1000d02b = 0;
      DAT_1000d030 = 0;
      DAT_1000d031 = 0;
      DAT_1000d032 = 0;
      DAT_1000d033 = 0;
      DAT_1000d034 = 0;
      DAT_1000d035 = 0;
      DAT_1000d036 = 0;
      DAT_1000d037 = 0;
      DAT_1000d038 = 0;
      DAT_1000d039 = 0;
      DAT_1000d03a = 0;
      DAT_1000d03b = 0;
      DAT_1000d03c = 0;
      DAT_1000d03d = 0;
      DAT_1000d03e = 0;
      DAT_1000d03f = 0;
      DAT_1000d040 = 0;
      DAT_1000d041 = 0;
      DAT_1000d042 = 0;
      DAT_1000d043 = 0;
      DAT_1000d044 = 0;
      DAT_1000d045 = 0;
      DAT_1000d046 = 0;
      DAT_1000d047 = 0;
      DAT_1000d048 = 0;
      DAT_1000d049 = 0;
      DAT_1000d04a = 0;
      DAT_1000d04b = 0;
      DAT_1000d04c = 0;
      DAT_1000d04d = 0;
      DAT_1000d04e = 0;
      DAT_1000d04f = 0;
      if (((((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x73 < (uint)param_1[2])) &&
            (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
             (iVar12 = (*(code *)(ulong)(uint)param_1[0x1c])
                                 (0,&DAT_1000d000,0x10,&local_c8,&local_3c), iVar12 != 0)))) &&
           ((*param_1 == 0x54584b57 &&
            ((0x73 < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)))))) &&
          (iVar12 = (*(code *)(ulong)(uint)param_1[0x1c])(0,&DAT_1000d010,6,&local_60,&local_5c),
          iVar12 != 0)) &&
         ((((*param_1 == 0x54584b57 && (0x73 < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)) &&
          (((iVar12 = (*(code *)(ulong)(uint)param_1[0x1c])(0,&DAT_1000d020,0xc,&local_58,&local_54)
            , iVar12 != 0 && (*param_1 == 0x54584b57)) &&
           ((0x73 < (uint)param_1[2] &&
            (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
             (iVar12 = (*(code *)(ulong)(uint)param_1[0x1c])
                                 (0,&DAT_1000d030,0x20,&local_50,&local_4c), iVar12 != 0)))))))))) {
        if (CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8) != 0) {
          if (*param_1 == 0x54584b57) {
            uVar7 = CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8) + 0x16;
            if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
              if ((uVar7 >> 0x20 == 0) &&
                 ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0))))
              {
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar7,2,0);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x30])(uVar7,2,0);
            }
          }
          if ((CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8) != 0) && (*param_1 == 0x54584b57)) {
            uVar7 = CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8) + 0x18;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((uVar7 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                 ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar7,2,&local_44);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar7,2,&local_44);
            }
          }
        }
        if (local_44 == 0) {
          recovered_10003180((long)(acStack_8c9 + 1),0x400,str_1000b63c);
          recovered_10003020((long)(acStack_8c9 + 1),str_1000b650,0);
        }
        else {
          DAT_1000d000 = (undefined1)local_50;
          DAT_1000d001 = (undefined1)((uint)local_50 >> 8);
          DAT_1000d002 = (undefined1)((uint)local_50 >> 0x10);
          DAT_1000d003 = (undefined1)((uint)local_50 >> 0x18);
          DAT_1000d004 = (undefined1)local_4c;
          DAT_1000d005 = (undefined1)((uint)local_4c >> 8);
          DAT_1000d006 = (undefined1)((uint)local_4c >> 0x10);
          DAT_1000d007 = (undefined1)((uint)local_4c >> 0x18);
          _DAT_1000d008 = 0x20;
          _DAT_1000d00c = 2;
          _DAT_1000d010 = 0x10000;
          _DAT_1000d014 = 0;
          recovered_1000af90(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x18,1);
          recovered_1000b000(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x20,local_c8,
                             local_3c);
          recovered_1000b000(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x28,local_60,
                             local_5c);
          recovered_1000b000(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x30,local_58,
                             local_54);
          if (((((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
               (((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0 &&
                (((*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d000,0x10),
                 *param_1 == 0x54584b57 && (0x77 < (uint)param_1[2])))))) &&
              ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) &&
             ((((((*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d010,6), *param_1 == 0x54584b57
                 && (0x77 < (uint)param_1[2])) &&
                ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) &&
               (((*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d020,0xc), *param_1 == 0x54584b57
                && (0x77 < (uint)param_1[2])))) &&
              ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d030,0x20);
          }
          recovered_1000af90(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x1c,1);
          recovered_1000af10(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x1c,
                             (long)&local_48);
          recovered_1000ae30(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x14,
                             (long)&local_40);
          recovered_1000aeb0(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8));
          recovered_1000ae30(param_1,CONCAT71(PF_PART7(local_4c8, 1),(undefined1)local_4c8),0x14,
                             (long)&local_40);
          if (((*param_1 == 0x54584b57) && (0x7b < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x1e])();
          }
          recovered_1000af90(param_1,local_468,0,0);
          iVar12 = 100;
          do {
            if (((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
               ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d020,0xc);
            }
            uVar18 = (uint)CONCAT11(DAT_1000d023,DAT_1000d022);
            if (uVar18 != 0) goto LAB_10002ede;
            if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
               ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0xc])();
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          uVar18 = 0;
LAB_10002ede:
          if (((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000d030,0x20);
          }
          if (uVar18 == 0) {
            uVar15 = 0;
            local_68 = (char *)((ulong)PF_PART4(local_68, 4) << 0x20);
          }
          else {
            uVar15 = CONCAT13(DAT_1000d02b,
                              CONCAT12(DAT_1000d02a,CONCAT11(DAT_1000d029,DAT_1000d028)));
            local_68 = (char *)CONCAT44(PF_PART4(local_68, 4),
                                        CONCAT13(DAT_1000d033,
                                                 CONCAT12(DAT_1000d032,
                                                          CONCAT11(DAT_1000d031,DAT_1000d030))));
          }
          pcVar6 = acStack_8c9 + 1;
          recovered_10003180((long)pcVar6,0x400,str_1000b65c);
          recovered_10003020((long)pcVar6,str_1000b66c,1);
          recovered_10003020((long)pcVar6,str_1000b679,(ulong)local_48);
          recovered_100031f0((long)pcVar6,str_1000b689,local_40);
          recovered_10003020((long)pcVar6,str_1000b693,(ulong)uVar18);
          recovered_10003020((long)pcVar6,str_1000b69b,(ulong)uVar15);
          if (uVar18 != 0) {
            recovered_100031f0((long)(acStack_8c9 + 1),str_1000b6a4,(uint)local_68);
          }
        }
        goto LAB_10001744;
      }
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar6 = str_1000b622;
        do {
          pcVar6 = pcVar6 + 1;
          acStack_8c9[uVar5 + 1] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar6;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
  }
  acStack_8c9[uVar5 + 1] = '\0';
LAB_10001744:
  local_68 = recovered_10009a50((long)param_2);
  local_c8 = local_c8 & 0xffffff00;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 3] != '\0');
  if (uVar5 + 2 < 0x60) {
    auStack_c4[uVar5 - 3] = 0x2f;
    bVar3 = uVar7 != 0x5e;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      auStack_c4[uVar5 - 2] = 0x72;
      if (uVar7 < 0x5f) {
        uVar7 = uVar5 + 4;
        auStack_c4[uVar5 - 1] = 0x6e;
        if (uVar7 < 0x5f) {
          uVar7 = uVar5 + 5;
          auStack_c4[uVar5] = 0x67;
          if (uVar7 < 0x5f) {
            uVar7 = uVar5 + 6;
            auStack_c4[uVar5 + 1] = 0x2f;
            if (uVar7 < 0x5f) {
              uVar7 = uVar5 + 7;
              auStack_c4[uVar5 + 2] = 0x70;
              if (uVar7 < 0x5f) {
                uVar7 = uVar5 + 8;
                auStack_c4[uVar5 + 3] = 99;
                if (uVar7 < 0x5f) {
                  auStack_c4[uVar5 + 4] = 0x69;
                  uVar7 = uVar5 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_c4[uVar7 - 4] = 0;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  if (uVar7 < 0x60) {
    auStack_c4[uVar5 - 4] = 0x2f;
    uVar5 = uVar7;
  }
  auStack_c4[uVar5 - 4] = 0;
  bVar10 = *param_2;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  bVar4 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar4 = bVar10 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    auStack_c4[uVar5 - 4] = bVar4;
    auStack_c4[uVar5 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  cVar9 = bVar10 + 0x37;
  if (bVar10 < 10) {
    cVar9 = bVar10 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    auStack_c4[uVar5 - 4] = cVar9;
    auStack_c4[uVar5 - 3] = 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  if (uVar7 < 0x60) {
    auStack_c4[uVar5 - 4] = 0x3a;
    uVar5 = uVar7;
  }
  auStack_c4[uVar5 - 4] = 0;
  bVar10 = param_2[1];
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  bVar13 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar13 = bVar10 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    auStack_c4[uVar5 - 4] = bVar13;
    auStack_c4[uVar5 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  cVar14 = bVar10 + 0x37;
  if (bVar10 < 10) {
    cVar14 = bVar10 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    auStack_c4[uVar5 - 4] = cVar14;
    auStack_c4[uVar5 - 3] = 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (auStack_c4[uVar5 - 4] != '\0');
  if (uVar7 < 0x60) {
    auStack_c4[uVar5 - 4] = 0x2e;
    uVar5 = uVar7;
  }
  auStack_c4[uVar5 - 4] = 0;
  bVar10 = param_2[2];
  if (bVar10 == 0) {
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (auStack_c4[uVar5 - 4] != '\0');
    if (uVar5 + 1 < 0x60) {
      *(undefined2 *)(auStack_c4 + (uVar5 - 4)) = 0x30;
    }
  }
  else {
    uVar5 = (ulong)(uint)bVar10;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar8 = uVar7;
      uVar18 = (uint)uVar5;
      *(byte *)((long)&local_3c + uVar8 + 1) = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      uVar7 = uVar8 + 1;
      if (8 < uVar7) break;
      uVar5 = uVar5 / 10;
    } while (9 < uVar18);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar16 = uVar5;
        uVar5 = uVar16 + 1;
      } while (auStack_c4[uVar16 - 4] != '\0');
      uVar5 = uVar7;
      if (uVar16 + 1 < 0x60) {
        auStack_c4[uVar16 - 4] = *(undefined1 *)((long)&local_3c + uVar8 + 1);
        auStack_c4[uVar16 - 3] = 0;
      }
    }
    else {
      uVar5 = uVar8 + 2;
    }
    while (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
      } while (auStack_c4[uVar8 - 4] != '\0');
      if (uVar8 + 1 < 0x60) {
        auStack_c4[uVar8 - 4] = *(undefined1 *)((long)&local_40 + uVar5 + 3);
        auStack_c4[uVar8 - 3] = 0;
      }
      lVar2 = uVar5 + 2;
      uVar5 = uVar5 - 2;
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
      } while (auStack_c4[uVar8 - 4] != '\0');
      uVar7 = uVar5;
      if (uVar8 + 1 < 0x60) {
        auStack_c4[uVar8 - 4] = *(undefined1 *)((long)&local_40 + lVar2);
        auStack_c4[uVar8 - 3] = 0;
      }
    }
  }
  PF_PART1(local_4c8, 0) = 0;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_8c9[uVar5 + 0x402] = 'p';
    bVar3 = uVar7 != 0x3fe;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      acStack_8c9[uVar5 + 0x403] = 'c';
      if (uVar7 < 0x3ff) {
        uVar7 = uVar5 + 4;
        acStack_8c9[uVar5 + 0x404] = 'i';
        if (uVar7 < 0x3ff) {
          local_4c0[uVar5 - 4] = 0x3d;
          uVar7 = uVar5 + 5;
        }
      }
    }
  }
  acStack_8c9[uVar7 + 0x401] = '\0';
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = cVar9;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = ':';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = bVar13;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '.';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  if (bVar10 == 0) {
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      (acStack_8c9 + uVar5 + 0x401)[0] = '0';
      (acStack_8c9 + uVar5 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    uVar18 = (uint)bVar10;
    do {
      uVar5 = uVar7;
      *(byte *)((long)&local_3c + uVar5 + 1) = (byte)(uVar18 % 10) | 0x30;
      uVar7 = uVar5 + 1;
      if (8 < uVar7) break;
      bVar3 = 9 < uVar18;
      uVar18 = uVar18 / 10;
    } while (bVar3);
    if ((uVar7 & 1) == 0) {
      uVar8 = 0;
      do {
        uVar16 = uVar8;
        uVar8 = uVar16 + 1;
      } while (acStack_8c9[uVar16 + 0x401] != '\0');
      uVar8 = uVar7;
      if (uVar16 + 1 < 0x400) {
        acStack_8c9[uVar16 + 0x401] = *(char *)((long)&local_3c + uVar5 + 1);
        acStack_8c9[uVar16 + 0x402] = '\0';
      }
    }
    else {
      uVar8 = uVar5 + 2;
    }
    while (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        acStack_8c9[uVar5 + 0x401] = *(char *)((long)&local_40 + uVar8 + 3);
        acStack_8c9[uVar5 + 0x402] = '\0';
      }
      lVar2 = uVar8 + 2;
      uVar8 = uVar8 - 2;
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 0x401] != '\0');
      uVar7 = uVar8;
      if (uVar5 + 1 < 0x400) {
        acStack_8c9[uVar5 + 0x401] = *(char *)((long)&local_40 + lVar2);
        acStack_8c9[uVar5 + 0x402] = '\0';
      }
    }
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_8c9[uVar5 + 0x402] = ' ';
    bVar3 = uVar7 != 0x3fe;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      acStack_8c9[uVar5 + 0x403] = 'v';
      if (uVar7 < 0x3ff) {
        uVar7 = uVar5 + 4;
        acStack_8c9[uVar5 + 0x404] = 'e';
        if (uVar7 < 0x3ff) {
          uVar7 = uVar5 + 5;
          local_4c0[uVar5 - 4] = 0x6e;
          if (uVar7 < 0x3ff) {
            uVar7 = uVar5 + 6;
            local_4c0[uVar5 - 3] = 100;
            if (uVar7 < 0x3ff) {
              uVar7 = uVar5 + 7;
              local_4c0[uVar5 - 2] = 0x6f;
              if (uVar7 < 0x3ff) {
                uVar7 = uVar5 + 8;
                local_4c0[uVar5 - 1] = 0x72;
                if (uVar7 < 0x3ff) {
                  local_4c0[uVar5] = 0x3d;
                  uVar7 = uVar5 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar7 + 0x401] = '\0';
  uVar1 = *(ushort *)(param_2 + 4);
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar10 = (byte)(uVar1 >> 8);
    bVar4 = (bVar10 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar11 = uVar1 >> 8 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar14 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar11 = uVar1 >> 4 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar14 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)(uVar1 & 0xf);
    cVar14 = cVar9 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_8c9[uVar5 + 0x402] = ' ';
    bVar3 = uVar7 != 0x3fe;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      acStack_8c9[uVar5 + 0x403] = 'd';
      if (uVar7 < 0x3ff) {
        uVar7 = uVar5 + 4;
        acStack_8c9[uVar5 + 0x404] = 'e';
        if (uVar7 < 0x3ff) {
          uVar7 = uVar5 + 5;
          local_4c0[uVar5 - 4] = 0x76;
          if (uVar7 < 0x3ff) {
            uVar7 = uVar5 + 6;
            local_4c0[uVar5 - 3] = 0x69;
            if (uVar7 < 0x3ff) {
              uVar7 = uVar5 + 7;
              local_4c0[uVar5 - 2] = 99;
              if (uVar7 < 0x3ff) {
                uVar7 = uVar5 + 8;
                local_4c0[uVar5 - 1] = 0x65;
                if (uVar7 < 0x3ff) {
                  local_4c0[uVar5] = 0x3d;
                  uVar7 = uVar5 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar7 + 0x401] = '\0';
  uVar1 = *(ushort *)(param_2 + 6);
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar10 = (byte)(uVar1 >> 8);
    bVar4 = (bVar10 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar11 = uVar1 >> 8 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar14 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar11 = uVar1 >> 4 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar14 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = (char)(uVar1 & 0xf);
    cVar14 = cVar9 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar14 = cVar9 + '0';
    }
    acStack_8c9[uVar5 + 0x401] = cVar14;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_8c9[uVar5 + 0x402] = ' ';
    bVar3 = uVar7 != 0x3fe;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      acStack_8c9[uVar5 + 0x403] = 'c';
      if (uVar7 < 0x3ff) {
        uVar7 = uVar5 + 4;
        acStack_8c9[uVar5 + 0x404] = 'l';
        if (uVar7 < 0x3ff) {
          uVar7 = uVar5 + 5;
          local_4c0[uVar5 - 4] = 0x61;
          if (uVar7 < 0x3ff) {
            uVar7 = uVar5 + 6;
            local_4c0[uVar5 - 3] = 0x73;
            if (uVar7 < 0x3ff) {
              uVar7 = uVar5 + 7;
              local_4c0[uVar5 - 2] = 0x73;
              if (uVar7 < 0x3ff) {
                local_4c0[uVar5 - 1] = 0x3d;
                uVar7 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar7 + 0x401] = '\0';
  bVar10 = param_2[8];
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar4 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '.';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[9];
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar4 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '.';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[10];
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar4 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = ' ';
    pcVar6 = str_1000b6ae;
    do {
      pcVar6 = pcVar6 + 1;
      acStack_8c9[uVar5 + 0x401] = cVar9;
      uVar5 = uVar5 + 1;
      cVar9 = *pcVar6;
      if (cVar9 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[0xb];
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar4 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar4 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar4;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  bVar10 = bVar10 & 0xf;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    acStack_8c9[uVar5 + 0x402] = '\0';
  }
  uVar18 = *(uint *)(param_2 + 0x10);
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = ' ';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  uVar7 = 0xffffffffffffffff;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_8c9[uVar5 + 0x402] = 'c';
    bVar3 = uVar7 != 0x3fe;
    uVar7 = uVar5 + 2;
    if (bVar3) {
      uVar7 = uVar5 + 3;
      acStack_8c9[uVar5 + 0x403] = 'o';
      if (uVar7 < 0x3ff) {
        uVar7 = uVar5 + 4;
        acStack_8c9[uVar5 + 0x404] = 'm';
        if (uVar7 < 0x3ff) {
          uVar7 = uVar5 + 5;
          local_4c0[uVar5 - 4] = 0x6d;
          if (uVar7 < 0x3ff) {
            uVar7 = uVar5 + 6;
            local_4c0[uVar5 - 3] = 0x61;
            if (uVar7 < 0x3ff) {
              uVar7 = uVar5 + 7;
              local_4c0[uVar5 - 2] = 0x6e;
              if (uVar7 < 0x3ff) {
                local_4c0[uVar5 - 1] = 100;
                uVar7 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar7 + 0x401] = '\0';
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar7 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '=';
    uVar5 = uVar7;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  iVar12 = 8;
  do {
    uVar15 = uVar18 >> ((char)iVar12 * '\x04' - 4U & 0x1f) & 0xf;
    cVar9 = (char)uVar15;
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar14 = cVar9 + '7';
      if (uVar15 < 10) {
        cVar14 = cVar9 + '0';
      }
      acStack_8c9[uVar5 + 0x401] = cVar14;
      acStack_8c9[uVar5 + 0x402] = '\0';
    }
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  uVar7 = 0;
  do {
    uVar18 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
    if (uVar18 != 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (acStack_8c9[uVar8 + 0x402] != '\0');
      if (uVar8 + 2 < 0x400) {
        acStack_8c9[uVar8 + 0x402] = ' ';
        bVar3 = uVar5 != 0x3fe;
        uVar5 = uVar8 + 2;
        if (bVar3) {
          uVar5 = uVar8 + 3;
          acStack_8c9[uVar8 + 0x403] = 'b';
          if (uVar5 < 0x3ff) {
            uVar5 = uVar8 + 4;
            acStack_8c9[uVar8 + 0x404] = 'a';
            if (uVar5 < 0x3ff) {
              local_4c0[uVar8 - 4] = 0x72;
              uVar5 = uVar8 + 5;
            }
          }
        }
      }
      acStack_8c9[uVar5 + 0x401] = '\0';
      if (uVar7 == 0) {
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (acStack_8c9[uVar8 + 0x401] != '\0');
        if (uVar8 + 1 < 0x400) {
          (acStack_8c9 + uVar8 + 0x401)[0] = '0';
          (acStack_8c9 + uVar8 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar8 = 0xffffffffffffffff;
        uVar5 = uVar7;
        do {
          uVar16 = uVar8;
          uVar8 = uVar5 & 0xffffffff;
          uVar15 = (uint)uVar5;
          uVar5 = uVar8 / 10;
          *(byte *)((long)&local_3c + uVar16 + 1) = (char)uVar8 + (char)uVar5 * -10 | 0x30;
          uVar8 = uVar16 + 1;
          if (8 < uVar8) break;
        } while (9 < uVar15);
        if ((uVar8 & 1) == 0) {
          uVar5 = 0;
          do {
            uVar17 = uVar5;
            uVar5 = uVar17 + 1;
          } while (acStack_8c9[uVar17 + 0x401] != '\0');
          uVar5 = uVar8;
          if (uVar17 + 1 < 0x400) {
            acStack_8c9[uVar17 + 0x401] = *(char *)((long)&local_3c + uVar16 + 1);
            acStack_8c9[uVar17 + 0x402] = '\0';
          }
        }
        else {
          uVar5 = uVar16 + 2;
        }
        while (uVar8 != 0) {
          uVar8 = 0;
          do {
            uVar16 = uVar8;
            uVar8 = uVar16 + 1;
          } while (acStack_8c9[uVar16 + 0x401] != '\0');
          if (uVar16 + 1 < 0x400) {
            acStack_8c9[uVar16 + 0x401] = *(char *)((long)&local_40 + uVar5 + 3);
            acStack_8c9[uVar16 + 0x402] = '\0';
          }
          lVar2 = uVar5 + 2;
          uVar5 = uVar5 - 2;
          uVar8 = 0;
          do {
            uVar16 = uVar8;
            uVar8 = uVar16 + 1;
          } while (acStack_8c9[uVar16 + 0x401] != '\0');
          uVar8 = uVar5;
          if (uVar16 + 1 < 0x400) {
            acStack_8c9[uVar16 + 0x401] = *(char *)((long)&local_40 + lVar2);
            acStack_8c9[uVar16 + 0x402] = '\0';
          }
        }
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (acStack_8c9[uVar8 + 0x401] != '\0');
      if (uVar5 < 0x400) {
        acStack_8c9[uVar8 + 0x401] = '=';
        uVar8 = uVar5;
      }
      acStack_8c9[uVar8 + 0x401] = '\0';
      iVar12 = 8;
      do {
        uVar15 = uVar18 >> ((char)iVar12 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar15;
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (acStack_8c9[uVar8 + 0x401] != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar14 = cVar9 + '7';
          if (uVar15 < 10) {
            cVar14 = cVar9 + '0';
          }
          acStack_8c9[uVar8 + 0x401] = cVar14;
          acStack_8c9[uVar8 + 0x402] = '\0';
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 6);
  if (acStack_8c9[1] != '\0') {
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar7 < 0x400) {
      acStack_8c9[uVar5 + 0x401] = ' ';
      uVar5 = uVar7;
    }
    acStack_8c9[uVar5 + 0x401] = '\0';
    uVar7 = 0;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      pcVar6 = acStack_8c9 + 2;
      cVar9 = acStack_8c9[1];
      do {
        acStack_8c9[uVar5 + 0x401] = cVar9;
        uVar5 = uVar5 + 1;
        cVar9 = *pcVar6;
        if (cVar9 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar5 < 0x3ff);
    }
    acStack_8c9[uVar5 + 0x401] = '\0';
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_c8,local_68,&local_4c8);
  }
  return;
}

#undef DAT_1000d000
#undef DAT_1000d001
#undef DAT_1000d002
#undef DAT_1000d003
#undef DAT_1000d004
#undef DAT_1000d005
#undef DAT_1000d006
#undef DAT_1000d007
#undef DAT_1000d008
#undef DAT_1000d00c
#undef DAT_1000d00e
#undef DAT_1000d00f
#undef DAT_1000d010
#undef DAT_1000d014
#undef DAT_1000d020
#undef DAT_1000d021
#undef DAT_1000d022
#undef DAT_1000d023
#undef DAT_1000d024
#undef DAT_1000d025
#undef DAT_1000d026
#undef DAT_1000d027
#undef DAT_1000d028
#undef DAT_1000d029
#undef DAT_1000d02a
#undef DAT_1000d02b
#undef DAT_1000d030
#undef DAT_1000d031
#undef DAT_1000d032
#undef DAT_1000d033
#undef DAT_1000d034
#undef DAT_1000d035
#undef DAT_1000d036
#undef DAT_1000d037
#undef DAT_1000d038
#undef DAT_1000d039
#undef DAT_1000d03a
#undef DAT_1000d03b
#undef DAT_1000d03c
#undef DAT_1000d03d
#undef DAT_1000d03e
#undef DAT_1000d03f
#undef DAT_1000d040
#undef DAT_1000d041
#undef DAT_1000d042
#undef DAT_1000d043
#undef DAT_1000d044
#undef DAT_1000d045
#undef DAT_1000d046
#undef DAT_1000d047
#undef DAT_1000d048
#undef DAT_1000d049
#undef DAT_1000d04a
#undef DAT_1000d04b
#undef DAT_1000d04c
#undef DAT_1000d04d
#undef DAT_1000d04e
#undef DAT_1000d04f
#undef _DAT_1000d008
#undef _DAT_1000d00c
#undef _DAT_1000d010
#undef _DAT_1000d014
#undef str_1000b219
#undef str_1000b5d2
#undef str_1000b5f0
#undef str_1000b60c
#undef str_1000b622
#undef str_1000b63c
#undef str_1000b650
#undef str_1000b65c
#undef str_1000b66c
#undef str_1000b679
#undef str_1000b689
#undef str_1000b693
#undef str_1000b69b
#undef str_1000b6a4
#undef str_1000b6ae
#undef local_4c8
#undef local_4c0
#undef acStack_8c9
#undef local_47c
#undef cStack_4c9
#undef local_474
#undef local_468
#undef local_c8
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef auStack_c4
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003020
 */

void recovered_10003020(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;

  if (param_1 == 0) {
    if ((int)param_3 == 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (uVar3 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar3) = 0x20;
      uVar2 = uVar3;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (param_2 != (char *)0x0) {
      cVar4 = *param_2;
      if (uVar2 + 1 < 0x400 && cVar4 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar2) = cVar4;
          uVar2 = uVar2 + 1;
          cVar4 = *param_2;
          if (cVar4 == '\0') break;
        } while (uVar2 < 0x3ff);
      }
      *(undefined1 *)(param_1 + uVar2) = 0;
    }
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (uVar3 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar3) = 0x3d;
      uVar2 = uVar3;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
    if ((int)param_3 == 0) {
      uVar3 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar1 != '\0');
      if (uVar3 < 0x400) {
        *(undefined2 *)(param_1 + -1 + uVar3) = 0x30;
        return;
      }
      return;
    }
  }
  uVar3 = 0;
  do {
    uVar5 = (uint)param_3;
    uVar6 = (param_3 & 0xffffffff) / 10;
    abStack_13[uVar3 + 1] = (char)param_3 + (char)uVar6 * -10 | 0x30;
    uVar2 = uVar3 + 1;
    if (8 < uVar3) break;
    uVar3 = uVar2;
    param_3 = uVar6;
  } while (9 < uVar5);
  do {
    if (param_1 != 0) {
      uVar3 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar1 != '\0');
      if (uVar3 < 0x400) {
        *(byte *)(param_1 + -1 + uVar3) = abStack_13[uVar2];
        *(undefined1 *)(param_1 + uVar3) = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

#undef abStack_13

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003180
 */

void recovered_10003180(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;

  if (param_1 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      uVar4 = uVar1 + 1;
    } while (*(char *)(param_1 + uVar1) != '\0');
    if (param_3 != (char *)0x0) {
      cVar3 = *param_3;
      if (uVar1 + 1 < param_2 && cVar3 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(param_1 + uVar1) = cVar3;
          cVar3 = *param_3;
          uVar4 = uVar1 + 1;
          if (cVar3 == '\0') break;
          uVar2 = uVar1 + 2;
          uVar1 = uVar4;
        } while (uVar2 < param_2);
      }
      else {
        uVar4 = uVar1;
      }
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f0
 */

void recovered_100031f0(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;

  if (param_1 != 0) {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar7) = 0x20;
      uVar3 = uVar7;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (param_2 != (char *)0x0) {
      cVar4 = *param_2;
      if (uVar3 + 1 < 0x400 && cVar4 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar3) = cVar4;
          uVar3 = uVar3 + 1;
          cVar4 = *param_2;
          if (cVar4 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(param_1 + uVar3) = 0;
    }
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar7) = 0x3d;
      uVar3 = uVar7;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
  }
  iVar2 = 8;
  do {
    uVar6 = param_3 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
    cVar4 = (char)uVar6;
    cVar5 = cVar4 + '7';
    if (uVar6 < 10) {
      cVar5 = cVar4 + '0';
    }
    if (param_1 != 0) {
      uVar7 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar7);
        uVar7 = uVar7 + 1;
      } while (*pcVar1 != '\0');
      if (uVar7 < 0x400) {
        *(char *)(param_1 + -1 + uVar7) = cVar5;
        *(undefined1 *)(param_1 + uVar7) = 0;
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


#define local_34 (*(uint *)(frame + 44))
#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003300
 */

undefined8
recovered_10003300(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef local_34
#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38

#undef str_1000b23b
#define str_1000b23b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0U)))
#undef str_1000b24b
#define str_1000b24b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_1000b25f
#define str_1000b25f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000b277
#define str_1000b277 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_1000b28f
#define str_1000b28f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000b2a8
#define str_1000b2a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_1000b2b9
#define str_1000b2b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13eU)))
#undef str_1000b2c9
#define str_1000b2c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14eU)))
#undef str_1000b2d8
#define str_1000b2d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_1000b2f4
#define str_1000b2f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x179U)))
#undef str_1000b2ff
#define str_1000b2ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
#undef str_1000b30f
#define str_1000b30f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x194U)))
#undef str_1000b31f
#define str_1000b31f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_1000b32c
#define str_1000b32c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_1000b342
#define str_1000b342 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000b358
#define str_1000b358 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_1000b36e
#define str_1000b36e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f3U)))
#undef str_1000b384
#define str_1000b384 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
#undef str_1000b39d
#define str_1000b39d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_1000b3b5
#define str_1000b3b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_1000b3c2
#define str_1000b3c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
#undef str_1000b3d3
#define str_1000b3d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#undef str_1000b3e7
#define str_1000b3e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26cU)))
#undef str_1000b3f7
#define str_1000b3f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_1000b40e
#define str_1000b40e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_1000b421
#define str_1000b421 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_1000b42b
#define str_1000b42b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b0U)))
#undef str_1000b43e
#define str_1000b43e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
#undef str_1000b455
#define str_1000b455 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_1000b461
#define str_1000b461 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e6U)))
#undef str_1000b46d
#define str_1000b46d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_1000b47a
#define str_1000b47a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ffU)))
#undef str_1000b484
#define str_1000b484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x309U)))
#undef str_1000b498
#define str_1000b498 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000b4a7
#define str_1000b4a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32cU)))
#undef str_1000b4ba
#define str_1000b4ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33fU)))
#undef str_1000b4cc
#define str_1000b4cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
#undef str_1000b4e2
#define str_1000b4e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x367U)))
#undef str_1000b4ec
#define str_1000b4ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000b4f8
#define str_1000b4f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_1000b50d
#define str_1000b50d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x392U)))
#undef str_1000b519
#define str_1000b519 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_1000b524
#define str_1000b524 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1000b52e
#define str_1000b52e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b3U)))
#undef str_1000b543
#define str_1000b543 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c8U)))
#undef str_1000b554
#define str_1000b554 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_1000b560
#define str_1000b560 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_1000b56c
#define str_1000b56c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f1U)))
#undef str_1000b578
#define str_1000b578 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef str_1000b587
#define str_1000b587 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40cU)))
#undef str_1000b591
#define str_1000b591 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x416U)))
#undef str_1000b59f
#define str_1000b59f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_1000b5b0
#define str_1000b5b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x435U)))
#undef str_1000b5bc
#define str_1000b5bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x441U)))
#undef str_1000b5c8
#define str_1000b5c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#define bStack_e1 (*(byte *)(frame + 31))
#define local_e0 (*(undefined8 *)(frame + 32))
#define local_d0 (*(ulong *)(frame + 48))
#define local_c8 (*(ulong *)(frame + 56))
#define local_c0 (*(uint *)(frame + 64))
#define local_bc (*(uint *)(frame + 68))
#define local_b0 (*(uint *)(frame + 80))
#define local_ac (*(uint *)(frame + 84))
#define local_a8 (*(uint *)(frame + 88))
#define local_a4 (*(uint *)(frame + 92))
#define local_a0 (*(uint *)(frame + 96))
#define local_9c (*(uint *)(frame + 100))
#define local_98 (*(uint *)(frame + 104))
#define local_94 (*(uint *)(frame + 108))
#define local_90 (*(uint *)(frame + 112))
#define local_8c (*(uint *)(frame + 116))
#define local_88 (*(uint *)(frame + 120))
#define local_80 (*(ulong *)(frame + 128))
#define local_78 (*(uint *)(frame + 136))
#define local_70 (*(int * *)(frame + 144))
#define local_68 (*(undefined1 * *)(frame + 152))
#define local_5c (*(uint *)(frame + 164))
#define local_58 (*(uint *)(frame + 168))
#define local_54 (*(uint *)(frame + 172))
#define local_50 (*(uint *)(frame + 176))
#define local_4c (*(undefined4 *)(frame + 180))
#define local_48 (*(undefined8 *)(frame + 184))
#define local_38 (*(uint *)(frame + 200))
#define local_34 (*(uint *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003580
 */

void recovered_10003580(int *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var = 0;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int *piVar18;
  undefined8 in_R11;
  undefined7 uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;

  uVar19 = (undefined7)((ulong)in_R11 >> 8);
  if (param_2 == (undefined1 *)0x0) {
    uVar9 = CONCAT71(uVar19,param_1 == (int *)0x0);
    bVar24 = true;
joined_r0x10003804:
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000b25f;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
LAB_1000384c:
    local_34 = (uint)uVar9;
    uVar3 = 0;
    uVar21 = uVar3;
    if (!bVar24) {
LAB_10003b0f:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_10008111;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        uVar3 = uVar1 - 0x1000;
      }
      else {
        if (uVar3 != 0x1040) goto LAB_10008111;
        uVar3 = uVar1 - 0x1040;
      }
      if (uVar3 == 0xffffffff) goto LAB_10008111;
      if (param_3 == 0) {
        if (uVar3 != 0) goto LAB_10003c99;
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + 1 + uVar11) != '\0');
        if (uVar11 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar9) = 0x76;
          uVar6 = uVar11 + 2;
          if (uVar9 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar9) = 0x69;
            uVar6 = uVar11 + 3;
            if (uVar11 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar9) = 0x72;
              uVar6 = uVar11 + 4;
              if (uVar11 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar9) = 0x74;
                uVar6 = uVar11 + 5;
                if (uVar11 + 5 < 0x3ff) {
                  *(undefined1 *)(uVar11 + 5 + param_3) = 0x69;
                  uVar6 = uVar11 + 6;
                  if (uVar11 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar9) = 0x6f;
                    uVar6 = uVar11 + 7;
                    if (uVar11 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar9) = 0x49;
                      uVar6 = uVar11 + 8;
                      if (uVar11 + 8 < 0x3ff) {
                        *(undefined1 *)(param_3 + 7 + uVar9) = 100;
                        uVar9 = uVar11 + 9;
                        goto LAB_10003c5e;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10003c5e:
          uVar6 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (uVar3 == 0) {
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
          }
        }
        else {
LAB_10003c99:
          uVar9 = 0;
          do {
            *(byte *)((long)&local_e0 + uVar9) = (byte)(uVar3 % 10) | 0x30;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < uVar3;
            uVar9 = uVar11;
            uVar3 = uVar3 / 10;
          } while (bVar24);
          do {
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(byte *)(param_3 + -1 + uVar9) = (&bStack_e1)[uVar11];
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      bVar24 = recovered_10009de0(param_1,param_2,&local_e0);
      uVar3 = local_34;
      if ((int)CONCAT71(extraout_var,bVar24) == 0) {
        local_50 = uVar21;
        if (local_ac != 0) {
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar8 = str_1000b2f4;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar11) = cVar12;
                uVar11 = uVar11 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          uVar9 = 0;
          do {
            *(byte *)((long)&local_48 + uVar9) = (byte)(local_ac % 10) | 0x30;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < local_ac;
            uVar9 = uVar11;
            local_ac = local_ac / 10;
          } while (bVar24);
          do {
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar9) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (*(ushort *)(param_2 + 6) < 0x1040) {
          bVar24 = true;
          uVar9 = 0;
          local_70 = param_1;
LAB_10005a49:
          local_48 = local_48 & 0xffffffff00000000;
          local_38 = 0;
          if ((*(uint *)(param_2 + uVar9 * 4 + 0x14) & 1) == 0) goto LAB_10005a30;
          if ((char)uVar3 != '\0') goto LAB_10005a30;
          if (*param_1 != 0x54584b57) goto LAB_10005a30;
          if ((uint)param_1[2] < 0x58) goto LAB_10005a30;
          if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10005a30;
          uVar15 = *(uint *)(param_2 + uVar9 * 4 + 0x14) & 0xfffffffc;
          uVar14 = uVar15 + 0x12;
          local_54 = CONCAT31(PF_PART3(local_54, 1),bVar24);
          iVar22 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar14,1,&local_48);
          piVar18 = local_70;
          uVar16 = local_54 & 0xff;
          param_1 = local_70;
          uVar3 = local_34;
          if (iVar22 == 0) goto LAB_10005a30;
          if (param_3 == 0) {
            if (uVar9 == 0) goto LAB_10008b96;
            goto LAB_100089ec;
          }
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b2ff;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'l';
            pcVar8 = str_1000b47a;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = ' ';
            pcVar8 = str_1000b484;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          if (uVar9 == 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
            }
LAB_10008b14:
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar8 = str_1000b498;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar11) = cVar12;
                uVar11 = uVar11 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          else {
LAB_100089ec:
            uVar11 = 0;
            do {
              uVar3 = (uint)uVar9;
              uVar5 = (uVar9 & 0xffffffff) / 10;
              *(byte *)((long)&local_e0 + uVar11) = (char)uVar9 + (char)uVar5 * -10 | 0x30;
              uVar6 = uVar11 + 1;
              if (8 < uVar11) break;
              uVar11 = uVar6;
              uVar9 = uVar5;
            } while (9 < uVar3);
            do {
              while (uVar9 = uVar6 - 1, param_3 != 0) {
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(byte *)(param_3 + -1 + uVar11) = (&bStack_e1)[uVar6];
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                uVar6 = uVar9;
                if (uVar9 == 0) goto LAB_10008b14;
              }
              uVar6 = uVar9;
            } while (uVar9 != 0);
          }
LAB_10008b96:
          uVar21 = local_50;
          iVar22 = 8;
LAB_10008ba1:
          uVar3 = uVar15 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_10008c8c;
            goto LAB_10008ba1;
          }
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(char *)(param_3 + -1 + uVar9) = cVar7;
            *(undefined1 *)(param_3 + uVar9) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_10008ba1;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b4a7;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10008c8c:
          iVar22 = 8;
          do {
            uVar3 = (uint)local_48 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar3;
            cVar7 = cVar12 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(char *)(param_3 + -1 + uVar9) = cVar7;
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          if (*piVar18 == 0x54584b57) {
            uVar3 = piVar18[2];
            if (uVar3 < 0x5c) {
LAB_10008d03:
              if (uVar3 < 0x58) goto LAB_10009a21;
            }
            else if ((code *)(ulong)(uint)piVar18[0x16] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x16])(uVar14 & 0xffff,1,0);
              uVar16 = local_54 & 0xff;
              if (*local_70 != 0x54584b57) goto LAB_10009a21;
              uVar3 = local_70[2];
              piVar18 = local_70;
              if (0x5b < uVar3) {
                if ((code *)(ulong)(uint)local_70[0x16] == (code *)0x0) goto LAB_10008d76;
                (*(code *)(ulong)(uint)local_70[0x16])(uVar14 & 0xffff,1,3);
                uVar16 = local_54 & 0xff;
                if (*local_70 != 0x54584b57) goto LAB_10009a21;
                uVar3 = local_70[2];
                piVar18 = local_70;
              }
              goto LAB_10008d03;
            }
LAB_10008d76:
            if ((code *)(ulong)(uint)piVar18[0x15] != (code *)0x0) {
              iVar22 = (*(code *)(ulong)(uint)piVar18[0x15])(uVar14 & 0xffff,1,&local_38);
              uVar16 = local_54 & 0xff;
              if (iVar22 != 0) {
                if (param_3 != 0) {
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar9 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
                    uVar11 = uVar9;
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar11 + 1 < 0x400) {
                    cVar12 = 'v';
                    pcVar8 = str_1000b4ba;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar11) = cVar12;
                      uVar11 = uVar11 + 1;
                      cVar12 = *pcVar8;
                      if (cVar12 == '\0') break;
                    } while (uVar11 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar9 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
                    uVar11 = uVar9;
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                iVar22 = 8;
                uVar16 = local_54 & 0xff;
                do {
                  uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar12 = (char)uVar3;
                  cVar7 = cVar12 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar12 + '0';
                  }
                  if (param_3 != 0) {
                    uVar9 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar9);
                      uVar9 = uVar9 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar9 < 0x400) {
                      *(char *)(param_3 + -1 + uVar9) = cVar7;
                      *(undefined1 *)(param_3 + uVar9) = 0;
                    }
                  }
                  iVar22 = iVar22 + -1;
                  uVar21 = local_50;
                } while (iVar22 != 0);
              }
            }
          }
LAB_10009a21:
          if (param_3 != 0 && (uVar16 & 1) == 0) goto LAB_100059c5;
          uVar21 = uVar16 & 1 | uVar21;
          goto LAB_10008111;
        }
LAB_100059b6:
        uVar21 = local_50;
        if (param_3 != 0) {
LAB_100059c5:
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = ' ';
            pcVar8 = str_1000b2d8;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        goto LAB_10008111;
      }
      recovered_1000a440(param_1,&local_e0);
      if (param_3 == 0) {
        if (local_ac != 0) goto LAB_10003fb9;
LAB_10004048:
        if (local_c0 == 0) goto LAB_100042f1;
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000b2ff;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + 1 + uVar11) != '\0');
        if (uVar11 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar9) = 0x6d;
          uVar6 = uVar11 + 2;
          if (uVar9 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar9) = 0x6f;
            uVar6 = uVar11 + 3;
            if (uVar11 + 3 < 0x3ff) {
              *(undefined1 *)(uVar11 + 3 + param_3) = 100;
              uVar6 = uVar11 + 4;
              if (uVar11 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar9) = 0x65;
                uVar6 = uVar11 + 5;
                if (uVar11 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar9) = 0x72;
                  uVar6 = uVar11 + 6;
                  if (uVar11 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar9) = 0x6e;
                    uVar9 = uVar11 + 7;
                    goto LAB_10003ee5;
                  }
                }
              }
            }
          }
        }
        else {
LAB_10003ee5:
          uVar6 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000b2f4;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (local_ac != 0) {
LAB_10003fb9:
          uVar9 = 0;
          do {
            *(byte *)((long)&local_48 + uVar9) = (char)local_ac + (char)(local_ac / 10) * -10 | 0x30
            ;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < local_ac;
            uVar9 = uVar11;
            local_ac = local_ac / 10;
          } while (bVar24);
LAB_10004008:
          do {
            uVar9 = uVar11 - 1;
            if (param_3 != 0) {
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar6) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar11 = uVar9;
              if (uVar9 == 0) goto LAB_10004079;
              goto LAB_10004008;
            }
            uVar11 = uVar9;
          } while (uVar9 != 0);
          goto LAB_10004048;
        }
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
LAB_10004079:
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000b30f;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (local_c0 == 0) {
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
          }
LAB_10004219:
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b31f;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          goto LAB_100042f1;
        }
      }
      uVar9 = 0;
      do {
        *(byte *)((long)&local_48 + uVar9) = (char)local_c0 + (char)(local_c0 / 10) * -10 | 0x30;
        uVar11 = uVar9 + 1;
        if (8 < uVar9) break;
        bVar24 = 9 < local_c0;
        uVar9 = uVar11;
        local_c0 = local_c0 / 10;
      } while (bVar24);
LAB_1000419c:
      do {
        uVar9 = uVar11 - 1;
        if (param_3 != 0) {
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
          if (uVar9 == 0) goto LAB_10004219;
          goto LAB_1000419c;
        }
        uVar11 = uVar9;
      } while (uVar9 != 0);
LAB_100042f1:
      iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
LAB_10004308:
      do {
        uVar21 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar3 = (uint)(byte)((char)uVar21 + 0x37);
        if (uVar21 < 10) {
          uVar3 = uVar21 + 0x30;
        }
        PF_PART2(local_48, 0) = (ushort)(byte)local_48;
        if (param_3 == 0) goto LAB_10004300;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_48 + 1);
          do {
            *(char *)(param_3 + uVar11) = (char)uVar3;
            uVar11 = uVar11 + 1;
            uVar3 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b32c;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10004451:
      iVar22 = 8;
LAB_10004464:
      uVar3 = local_a8 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10004581;
        goto LAB_10004464;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10004464;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b342;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10004581:
      iVar22 = 8;
LAB_10004594:
      uVar3 = local_a4 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_100046b1;
        goto LAB_10004594;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10004594;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b358;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_100046b1:
      iVar22 = 8;
LAB_100046c4:
      uVar3 = local_a0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_100047e1;
        goto LAB_100046c4;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_100046c4;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b36e;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_100047e1:
      iVar22 = 8;
LAB_100047f4:
      uVar3 = local_9c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10004911;
        goto LAB_100047f4;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_100047f4;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b384;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10004911:
      iVar22 = 8;
LAB_10004924:
      uVar3 = local_98 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10004a41;
        goto LAB_10004924;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10004924;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b39d;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10004a41:
      iVar22 = 8;
LAB_10004a54:
      uVar3 = local_94 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto code_r0x10004aa4;
        goto LAB_10004a54;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10004a54;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b3b5;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_90 == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_10004b79:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_90;
          uVar9 = uVar11;
          local_90 = local_90 / 10;
        } while (bVar24);
        do {
          while (uVar9 = uVar11 - 1, param_3 == 0) {
            uVar11 = uVar9;
            if (uVar9 == 0) goto LAB_10004c08;
          }
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b3c2;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_8c == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_10004d09:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_8c + (char)(local_8c / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_8c;
          uVar9 = uVar11;
          local_8c = local_8c / 10;
        } while (bVar24);
        do {
          while (uVar9 = uVar11 - 1, param_3 == 0) {
            uVar11 = uVar9;
            if (uVar9 == 0) goto LAB_10004d98;
          }
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b3d3;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_88 == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_10004e99:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_88 + (char)(local_88 / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_88;
          uVar9 = uVar11;
          local_88 = local_88 / 10;
        } while (bVar24);
        do {
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
              *(undefined1 *)(param_3 + uVar9) = 0;
            }
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (local_80 != 0) {
        if (param_3 == 0) {
LAB_10004f7a:
          if (local_bc != 0) goto LAB_10005019;
        }
        else {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b3e7;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          if (local_bc == 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
            }
          }
          else {
LAB_10005019:
            uVar9 = 0;
            do {
              *(byte *)((long)&local_48 + uVar9) =
                   (char)local_bc + (char)(local_bc / 10) * -10 | 0x30;
              uVar11 = uVar9 + 1;
              if (8 < uVar9) break;
              bVar24 = 9 < local_bc;
              uVar9 = uVar11;
              local_bc = local_bc / 10;
            } while (bVar24);
            do {
              while (uVar9 = uVar11 - 1, param_3 == 0) {
                uVar11 = uVar9;
                if (uVar9 == 0) goto LAB_10005191;
              }
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar6) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar11 = uVar9;
            } while (uVar9 != 0);
          }
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b3f7;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_10005191:
        iVar22 = 8;
LAB_100051a4:
        do {
          uVar3 = local_b0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) goto LAB_100051f0;
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(char *)(param_3 + -1 + uVar9) = cVar7;
            *(undefined1 *)(param_3 + uVar9) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000b40e;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
LAB_100052e1:
        iVar22 = (uint)(local_80 >> 0x20 != 0) * 8 + 8;
        do {
          uVar21 = (uint)(local_80 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (local_d0 != 0) {
        iVar22 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b421;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_10005461:
        do {
          uVar21 = (uint)(local_d0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (local_c8 != 0) {
        iVar22 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000b42b;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_100055e1:
        do {
          uVar21 = (uint)(local_c8 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (param_3 == 0) goto LAB_1000806d;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000b43e;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_78 != 0) goto LAB_10008075;
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
      }
LAB_10005769:
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      pcVar8 = str_1000b461;
      if ((local_94 & 8) == 0) {
        pcVar8 = str_1000b46d;
      }
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar10 = str_1000b455;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if ((uVar11 + 1 < 0x400) && (cVar12 = *pcVar8, cVar12 != '\0')) {
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      goto LAB_10008108;
    }
  }
  else {
    iVar22 = -1;
    if (*(short *)(param_2 + 4) == 0x1af4) {
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        iVar22 = uVar1 - 0x1000;
      }
      else {
        iVar22 = uVar1 - 0x1040;
        if (uVar3 != 0x1040) {
          iVar22 = -1;
        }
      }
    }
    bVar24 = iVar22 == -1;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_48 = local_48 & 0xffffffff00000000;
    if (param_1 == (int *)0x0) {
      uVar9 = CONCAT71(uVar19,1);
      goto joined_r0x10003804;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar9 = 0;
      goto joined_r0x10003804;
    }
    if (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0) &&
       (iVar4 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_e0),
       iVar4 != 0)) {
      uVar3 = 1;
      if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
        uVar3 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x18) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      uVar3 = uVar21 | 2;
      if (*(uint *)(param_2 + 0x1c) == 0) {
        uVar3 = uVar21;
      }
      if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
        uVar3 = uVar21 | 1;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x20) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      uVar3 = uVar21 | 2;
      if (*(uint *)(param_2 + 0x24) == 0) {
        uVar3 = uVar21;
      }
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        uVar3 = uVar21 | 1;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x28) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      local_34 = uVar21 | 4;
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        local_34 = uVar21 | 6;
      }
      local_48 = CONCAT44(PF_PART4(local_48, 4),(uint)local_e0 | local_34);
      if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x18] != (code *)0x0)) {
        iVar4 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2);
        uVar9 = (ulong)local_34;
        if (iVar4 != 0) {
          if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_48);
            uVar9 = (ulong)local_34;
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar12 = 'p';
              pcVar8 = str_1000b2a8;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar6) = cVar12;
                uVar6 = uVar6 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          iVar4 = 8;
LAB_100069c8:
          do {
            uVar3 = (uint)local_e0 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar3;
            cVar7 = cVar12 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_10006a1d;
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar8 = str_1000b2b9;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006ab4:
          iVar4 = 8;
LAB_10006abf:
          uVar3 = (uint)local_48 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_10006b9e;
            goto LAB_10006abf;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar4 = iVar4 + -1;
          if (iVar4 != 0) goto LAB_10006abf;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar8 = str_1000b2c9;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006b9e:
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x1c) | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x18) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)((uint)uVar9 >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)uVar9 & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          uVar3 = (uint)(((uint)uVar9 & ~(uint)local_48) == 0);
          goto joined_r0x10006d1b;
        }
      }
      if (param_3 != 0) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000b28f;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        goto LAB_10003af8;
      }
LAB_10003d1d:
      uVar9 = 0;
      goto LAB_1000384c;
    }
    if (param_3 == 0) goto LAB_10003d1d;
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (*(char *)(param_3 + uVar11) != '\0');
    if (uVar11 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000b277;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar11) = cVar12;
        uVar11 = uVar11 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar11 < 0x3ff);
    }
LAB_10003af8:
    uVar3 = 0;
    *(undefined1 *)(param_3 + uVar11) = 0;
joined_r0x10006d1b:
    local_34 = 0;
    uVar9 = 0;
    uVar21 = uVar3;
    if (iVar22 != -1) goto LAB_10003b0f;
  }
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  if (param_2 == (undefined1 *)0x0) {
    uVar21 = 1;
    if (uVar3 == 0) {
      uVar21 = 0;
    }
    goto LAB_10008111;
  }
  local_34 = (uint)uVar9;
  if ((param_2[8] == '\x01') && (param_2[9] == '\x06')) {
    if (((*(uint *)(param_2 + 0x24) & 7) != 4) &&
       ((((uVar21 = *(uint *)(param_2 + 0x28), (uVar21 & 6) != 4 && (uVar21 != 0)) &&
         ((uVar21 & 1) == 0)) && (uVar21 = uVar21 & 0xfffffff0, uVar21 != 0)))) {
      local_e0 = 0;
      local_48 = local_48 & 0xffffffff00000000;
      if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
        if (0xbb < (uint)param_1[2]) {
          if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_10006364;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar21,0,0x1000);
          uVar9 = (ulong)local_34;
          if (iVar22 == 0) goto LAB_1000389f;
LAB_1000639a:
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0xffffffffffffffff;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + 1 + uVar6) != '\0');
            if (uVar6 + 2 < 0x400) {
              *(undefined1 *)(param_3 + uVar11) = 0x61;
              uVar5 = uVar6 + 2;
              if (uVar11 != 0x3fe) {
                *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
                uVar5 = uVar6 + 3;
                if (uVar6 + 3 < 0x3ff) {
                  *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                  uVar5 = uVar6 + 4;
                  if (uVar6 + 4 < 0x3ff) {
                    *(undefined1 *)(param_3 + 3 + uVar11) = 0x69;
                    uVar5 = uVar6 + 5;
                    if (uVar6 + 5 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 5 + param_3) = 0x4d;
                      uVar5 = uVar6 + 6;
                      if (uVar6 + 6 < 0x3ff) {
                        *(undefined1 *)(param_3 + 5 + uVar11) = 0x6d;
                        uVar5 = uVar6 + 7;
                        if (uVar6 + 7 < 0x3ff) {
                          *(undefined1 *)(param_3 + 6 + uVar11) = 0x69;
                          uVar5 = uVar6 + 8;
                          if (uVar6 + 8 < 0x3ff) {
                            *(undefined1 *)(param_3 + 7 + uVar11) = 0x6f;
                            uVar11 = uVar6 + 9;
                            goto LAB_10007f59;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_10007f59:
              uVar5 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar5) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
          do {
            uVar14 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
            uVar21 = (uint)(byte)((char)uVar14 + 0x37);
            if (uVar14 < 10) {
              uVar21 = uVar14 + 0x30;
            }
            PF_PART2(local_48, 0) = (ushort)(byte)local_48;
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar17 = (byte *)((long)&local_48 + 1);
                do {
                  *(char *)(param_3 + uVar6) = (char)uVar21;
                  uVar6 = uVar6 + 1;
                  uVar21 = (uint)*pbVar17;
                  if (*pbVar17 == 0) break;
                  pbVar17 = pbVar17 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((local_e0 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                 ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100083b9;
              (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
            }
            uVar9 = (ulong)local_34;
          }
LAB_100083b9:
          if (local_e0 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                   )) goto LAB_10008429;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
LAB_10008429:
            if (local_e0 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar11 = local_e0 + 0xc;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar11 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x6c ||
                      ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10008aa6;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
                }
                uVar9 = (ulong)local_34;
              }
LAB_10008aa6:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 0x10;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100092d3;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_5c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_5c);
                }
                uVar9 = (ulong)local_34;
              }
            }
          }
LAB_100092d3:
          if ((-1 < (int)local_4c) && (local_e0 != 0)) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))
                   )) goto LAB_1000934c;
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 0x80000000);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
              }
              uVar9 = (ulong)local_34;
            }
LAB_1000934c:
            if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100093b8;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
          }
LAB_100093b8:
          if (param_3 == 0) goto LAB_1000949a;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x61;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x43;
                    uVar5 = uVar6 + 6;
                    if (uVar6 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar11) = 0x61;
                      uVar5 = uVar6 + 7;
                      if (uVar6 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar11) = 0x70;
                        uVar11 = uVar6 + 8;
                        goto LAB_10009471;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_10009471:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000949a:
          iVar22 = 8;
LAB_100094a8:
          do {
            uVar21 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar21;
            cVar7 = cVar12 + '7';
            if (uVar21 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_100094fd;
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x61;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x47;
                    uVar5 = uVar6 + 6;
                    if (uVar6 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar11) = 0x68;
                      uVar5 = uVar6 + 7;
                      if (uVar6 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar11) = 99;
                        uVar11 = uVar6 + 8;
                        goto LAB_100095be;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_100095be:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100095e8:
          iVar22 = 8;
LAB_100095f3:
          uVar21 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_100096d4;
            goto LAB_100095f3;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_100095f3;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar8 = str_1000b4e2;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100096d4:
          iVar22 = 8;
LAB_100096df:
          uVar21 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_100097c4;
            goto LAB_100096df;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_100096df;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar8 = str_1000b4ec;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100097c4:
          iVar22 = 8;
          uVar21 = 1;
          do {
            uVar14 = local_5c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar14;
            cVar7 = cVar12 + '7';
            if (uVar14 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar8 != '\0');
              if (uVar11 < 0x400) {
                *(char *)(param_3 + -1 + uVar11) = cVar7;
                *(undefined1 *)(param_3 + uVar11) = 0;
              }
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          goto LAB_10003910;
        }
        if (0x67 < (uint)param_1[2]) {
LAB_10006364:
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar21,0,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
              local_e0 = local_48 & 0xffffffff;
              goto LAB_1000639a;
            }
          }
        }
      }
    }
LAB_1000389f:
    if (param_3 == 0) goto LAB_100038ff;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000b4cc;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar21 = 0;
  }
  else {
LAB_100038ff:
    uVar21 = 0;
  }
LAB_10003910:
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  if ((param_2[8] == '\x04') && (param_2[9] == '\x03')) {
    uVar14 = *(uint *)(param_2 + 0x14);
    if ((uVar14 & 1) == 0 && uVar14 != 0) {
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 != 0 || iVar22 != 0) {
        local_e0 = 0;
        local_48 = (ulong)PF_PART4(local_48, 4) << 0x20;
        if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
               ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
              iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000);
              uVar9 = (ulong)local_34;
              if (iVar22 != 0) {
                local_e0 = local_48 & 0xffffffff;
                goto LAB_10005b18;
              }
            }
          }
          else {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
LAB_10005b18:
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + 1 + uVar6) != '\0');
                if (uVar6 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar11) = 0x68;
                  uVar5 = uVar6 + 2;
                  if (uVar11 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                    uVar5 = uVar6 + 3;
                    if (uVar6 + 3 < 0x3ff) {
                      *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                      uVar5 = uVar6 + 4;
                      if (uVar6 + 4 < 0x3ff) {
                        *(undefined1 *)(uVar6 + 4 + param_3) = 0x4d;
                        uVar5 = uVar6 + 5;
                        if (uVar6 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                          uVar5 = uVar6 + 6;
                          if (uVar6 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                            uVar5 = uVar6 + 7;
                            if (uVar6 + 7 < 0x3ff) {
                              *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                              uVar11 = uVar6 + 8;
                              goto LAB_10007bbe;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10007bbe:
                  uVar5 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar5) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
              do {
                uVar16 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar14 = (uint)(byte)((char)uVar16 + 0x37);
                if (uVar16 < 10) {
                  uVar14 = uVar16 + 0x30;
                }
                PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    pbVar17 = (byte *)((long)&local_48 + 1);
                    do {
                      *(char *)(param_3 + uVar6) = (char)uVar14;
                      uVar6 = uVar6 + 1;
                      uVar14 = (uint)*pbVar17;
                      if (*pbVar17 == 0) break;
                      pbVar17 = pbVar17 + 1;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((local_e0 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100081b7;
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
                }
                uVar9 = (ulong)local_34;
              }
LAB_100081b7:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 8;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100082ae;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                }
                uVar9 = (ulong)local_34;
              }
LAB_100082ae:
              if (((local_4c & 1) == 0) && (local_e0 != 0)) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x70 ||
                        ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_100088ad;
                    (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 1);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
                  }
                  uVar9 = (ulong)local_34;
                }
LAB_100088ad:
                if (local_e0 == 0) goto LAB_10008ec9;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10008ec9;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                  }
                  uVar9 = (ulong)local_34;
                  goto LAB_10008ec9;
                }
              }
              else {
LAB_10008ec9:
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xe;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10008f30;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2,&local_58);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2,&local_58);
                  }
                  uVar9 = (ulong)local_34;
                }
              }
LAB_10008f30:
              if (param_3 == 0) goto LAB_10009012;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + 1 + uVar6) != '\0');
              if (uVar6 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x68;
                uVar5 = uVar6 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                  uVar5 = uVar6 + 3;
                  if (uVar6 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                    uVar5 = uVar6 + 4;
                    if (uVar6 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                      uVar5 = uVar6 + 5;
                      if (uVar6 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar11) = 99;
                        uVar5 = uVar6 + 6;
                        if (uVar6 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x61;
                          uVar5 = uVar6 + 7;
                          if (uVar6 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar11) = 0x70;
                            uVar11 = uVar6 + 8;
                            goto LAB_10008fe9;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_10008fe9:
                uVar5 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar5) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10009012:
              iVar22 = 8;
LAB_10009020:
              do {
                uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar14;
                cVar7 = cVar12 + '7';
                if (uVar14 < 10) {
                  cVar7 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000906d;
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar7;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + 1 + uVar6) != '\0');
              if (uVar6 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x68;
                uVar5 = uVar6 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                  uVar5 = uVar6 + 3;
                  if (uVar6 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                    uVar5 = uVar6 + 4;
                    if (uVar6 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                      uVar5 = uVar6 + 5;
                      if (uVar6 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar11) = 99;
                        uVar5 = uVar6 + 6;
                        if (uVar6 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x74;
                          uVar5 = uVar6 + 7;
                          if (uVar6 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar11) = 0x6c;
                            uVar11 = uVar6 + 8;
                            goto LAB_1000912e;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000912e:
                uVar5 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar5) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10009158:
              iVar22 = 8;
LAB_10009163:
              uVar14 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar14;
              cVar7 = cVar12 + '7';
              if (uVar14 < 10) {
                cVar7 = cVar12 + '0';
              }
              if (param_3 == 0) {
                iVar22 = iVar22 + -1;
                if (iVar22 == 0) goto LAB_10009244;
                goto LAB_10009163;
              }
              uVar11 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar8 != '\0');
              if (uVar11 < 0x400) {
                *(char *)(param_3 + -1 + uVar11) = cVar7;
                *(undefined1 *)(param_3 + uVar11) = 0;
              }
              iVar22 = iVar22 + -1;
              if (iVar22 != 0) goto LAB_10009163;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar12 = 'h';
                pcVar8 = str_1000b50d;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar6) = cVar12;
                  uVar6 = uVar6 + 1;
                  cVar12 = *pcVar8;
                  if (cVar12 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10009244:
              iVar22 = 8;
              do {
                uVar14 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar14;
                cVar7 = cVar12 + '7';
                if (uVar14 < 10) {
                  cVar7 = cVar12 + '0';
                }
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(char *)(param_3 + -1 + uVar11) = cVar7;
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar14 = 1;
              goto LAB_10005b9e;
            }
          }
        }
      }
    }
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000b4f8;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar14 = 0;
LAB_10005b9e:
      uVar21 = uVar21 | uVar14;
    }
  }
  local_48 = 0;
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  local_50 = uVar3;
  if (param_2[8] == '\f') {
    if (param_2[9] == '\x03') {
      uVar14 = *(uint *)(param_2 + 0x14);
      if ((uVar14 & 1) != 0 || uVar14 == 0) {
LAB_10005ce2:
        uVar11 = 0;
        local_54 = uVar21;
LAB_10005cfd:
        local_5c = 0;
        uVar21 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
        if (((((uVar21 & 1) == 0) || ((short)(uVar21 & 0xfffffffc) == 0 || (char)uVar9 != '\0')) ||
            (*param_1 != 0x54584b57)) ||
           (((uint)param_1[2] < 0x58 || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0))))
        goto LAB_10005cf0;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x15])(uVar21 & 0xfffc,2,&local_5c);
        uVar3 = local_50;
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10005cf0;
        if (param_3 == 0) {
          if (uVar11 != 0) goto LAB_100063df;
          goto LAB_10006696;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000b519;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar5) = cVar12;
            uVar5 = uVar5 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        if (uVar11 == 0) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
LAB_10005dca:
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x75;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(uVar6 + 2 + param_3) = 0x73;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar11) = 0x49;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x6f;
                    uVar11 = uVar6 + 6;
                    goto LAB_1000666d;
                  }
                }
              }
            }
          }
          else {
LAB_1000666d:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        else {
LAB_100063df:
          uVar6 = 0;
          do {
            uVar14 = (uint)uVar11;
            uVar13 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
            uVar5 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar6 = uVar5;
            uVar11 = uVar13;
          } while (9 < uVar14);
          do {
            while (uVar11 = uVar5 - 1, param_3 != 0) {
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar5 = uVar11;
              if (uVar11 == 0) goto LAB_10005dca;
            }
            uVar5 = uVar11;
          } while (uVar11 != 0);
        }
LAB_10006696:
        iVar22 = 8;
        do {
          while( true ) {
            uVar14 = (uVar21 & 0xfffffffc) >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar14;
            cVar7 = cVar12 + '7';
            if (uVar14 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) break;
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000678c;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar12 = 'u';
          pcVar8 = str_1000b524;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar12;
            uVar6 = uVar6 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000678c:
        iVar22 = 8;
        do {
          uVar21 = local_5c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          iVar22 = iVar22 + -1;
          uVar21 = local_54;
        } while (iVar22 != 0);
        goto LAB_1000886d;
      }
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 == 0 && iVar22 == 0) goto LAB_10005ce2;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10005ce2;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar22 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_10005ce2;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10005ce2;
        local_48 = local_e0 & 0xffffffff;
      }
      else {
        iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10005ce2;
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0xffffffffffffffff;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + 1 + uVar6) != '\0');
        if (uVar6 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar11) = 0x75;
          uVar5 = uVar6 + 2;
          if (uVar11 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
            uVar5 = uVar6 + 3;
            if (uVar6 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
              uVar5 = uVar6 + 4;
              if (uVar6 + 4 < 0x3ff) {
                *(undefined1 *)(uVar6 + 4 + param_3) = 0x4d;
                uVar5 = uVar6 + 5;
                if (uVar6 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                  uVar5 = uVar6 + 6;
                  if (uVar6 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                    uVar5 = uVar6 + 7;
                    if (uVar6 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                      uVar11 = uVar6 + 8;
                      goto LAB_10007c7e;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10007c7e:
          uVar5 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
      }
      iVar22 = (uint)(local_48 >> 0x20 != 0) * 8 + 8;
      do {
        uVar16 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar14 = (uint)(byte)((char)uVar16 + 0x37);
        if (uVar16 < 10) {
          uVar14 = uVar16 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar6) = (char)uVar14;
              uVar6 = uVar6 + 1;
              uVar14 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((local_48 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10008232;
          (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
        }
        uVar9 = (ulong)local_34;
      }
LAB_10008232:
      if (local_48 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar11 = local_48 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar11 >> 0x20 != 0) ||
               (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
            goto LAB_10008338;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
          }
          uVar9 = (ulong)local_34;
        }
LAB_10008338:
        if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
          uVar11 = local_48 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
               ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100084a8;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
          }
          uVar9 = (ulong)local_34;
        }
      }
LAB_100084a8:
      if (param_3 == 0) goto LAB_1000858a;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x30;
                    uVar11 = uVar6 + 8;
                    goto LAB_10008561;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10008561:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000858a:
      iVar22 = 8;
LAB_10008598:
      do {
        uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar14;
        cVar7 = cVar12 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 == 0) goto LAB_100085ed;
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x34;
                    uVar11 = uVar6 + 8;
                    goto LAB_100086ae;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_100086ae:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100086d8:
      iVar22 = 8;
      do {
        while( true ) {
          uVar14 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar14;
          cVar7 = cVar12 + '7';
          if (uVar14 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 != 0) break;
          iVar22 = iVar22 + -1;
          if (iVar22 == 0) goto LAB_10008818;
        }
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x38;
                    uVar11 = uVar6 + 8;
                    goto LAB_100087ee;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_100087ee:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10008818:
      iVar22 = 8;
      do {
        uVar14 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar14;
        cVar7 = cVar12 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
LAB_1000886d:
      uVar14 = 1;
      goto LAB_10005e3e;
    }
  }
  goto LAB_10005e41;
LAB_10006a1d:
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) goto LAB_10006ab4;
  goto LAB_100069c8;
LAB_10004300:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10004451;
  goto LAB_10004308;
code_r0x10004aa4:
  if (local_90 != 0) goto LAB_10004b79;
LAB_10004c08:
  if (local_8c != 0) goto LAB_10004d09;
LAB_10004d98:
  if (local_88 != 0) goto LAB_10004e99;
  if (local_80 != 0) goto LAB_10004f7a;
  if (local_d0 != 0) {
    iVar22 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_10005461;
  }
  if (local_c8 != 0) {
    iVar22 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
    goto LAB_100055e1;
  }
LAB_1000806d:
  if (local_78 != 0) {
LAB_10008075:
    uVar9 = 0;
    do {
      *(byte *)((long)&local_48 + uVar9) = (char)local_78 + (char)(local_78 / 10) * -10 | 0x30;
      uVar11 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar24 = 9 < local_78;
      uVar9 = uVar11;
      local_78 = local_78 / 10;
    } while (bVar24);
    do {
      while (uVar9 = uVar11 - 1, param_3 != 0) {
        uVar6 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar6);
          uVar6 = uVar6 + 1;
        } while (*pcVar8 != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        uVar11 = uVar9;
        if (uVar9 == 0) goto LAB_10005769;
      }
      uVar11 = uVar9;
    } while (uVar9 != 0);
  }
LAB_10008108:
  uVar21 = 1;
  goto LAB_10008111;
LAB_100051f0:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_100052e1;
  goto LAB_100051a4;
LAB_10005a30:
  bVar24 = uVar9 < 5;
  uVar9 = uVar9 + 1;
  if (uVar9 == 6) goto LAB_100059b6;
  goto LAB_10005a49;
LAB_100094fd:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_100095e8;
  goto LAB_100094a8;
LAB_1000906d:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10009158;
  goto LAB_10009020;
LAB_10005cf0:
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_10005dec;
  goto LAB_10005cfd;
LAB_100085ed:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_100086d8;
  goto LAB_10008598;
LAB_100060a8:
  uVar3 = local_50;
  goto LAB_10006fbe;
LAB_10005dec:
  uVar21 = local_54;
  uVar3 = local_50;
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000b52e;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar14 = 0;
LAB_10005e3e:
    uVar21 = uVar21 | uVar14;
  }
LAB_10005e41:
  local_48 = 0;
  local_38 = 0;
  local_4c = 0;
  if (param_2[8] == '\x02') {
    uVar14 = 1;
    uVar11 = 0;
    local_68 = param_2;
    local_54 = uVar21;
LAB_10005e9a:
    if ((uVar11 != 0) && ((*(uint *)(param_2 + uVar11 * 4 + 0x10) & 7) == 4)) {
LAB_10005fa0:
      uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
      if ((uVar3 & 1) != 0) {
        if (!((short)(uVar3 & 0xfffffffc) == 0 || (char)uVar9 != '\0')) {
          if (*param_1 == 0x54584b57) {
            if (0x57 < (uint)param_1[2]) {
              if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
                iVar22 = (*(code *)(ulong)(uint)param_1[0x15])(uVar3 & 0xfffc,2,&local_38);
                uVar21 = local_54;
                param_2 = local_68;
                uVar9 = (ulong)local_34;
                if (iVar22 == 0) goto LAB_10005e80;
                if (param_3 == 0) {
                  if (uVar11 == 0) goto LAB_100061de;
                  goto LAB_100060e9;
                }
                uVar6 = 0;
                do {
                  uVar5 = uVar6;
                  uVar6 = uVar5 + 1;
                } while (*(char *)(param_3 + uVar5) != '\0');
                if (uVar5 + 1 < 0x400) {
                  cVar12 = ' ';
                  pcVar8 = str_1000b578;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar5) = cVar12;
                    uVar5 = uVar5 + 1;
                    cVar12 = *pcVar8;
                    if (cVar12 == '\0') break;
                  } while (uVar5 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar5) = 0;
                if (uVar11 == 0) {
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                  }
LAB_10006086:
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar6 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar12 = 'n';
                    pcVar8 = str_1000b587;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar6) = cVar12;
                      uVar6 = uVar6 + 1;
                      cVar12 = *pcVar8;
                      if (cVar12 == '\0') break;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar6 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                }
                else {
LAB_100060e9:
                  uVar6 = 0;
                  do {
                    uVar16 = (uint)uVar11;
                    uVar13 = (uVar11 & 0xffffffff) / 10;
                    *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
                    uVar5 = uVar6 + 1;
                    if (8 < uVar6) break;
                    uVar6 = uVar5;
                    uVar11 = uVar13;
                  } while (9 < uVar16);
                  do {
                    while (uVar11 = uVar5 - 1, param_3 != 0) {
                      uVar6 = 0;
                      do {
                        pcVar8 = (char *)(param_3 + uVar6);
                        uVar6 = uVar6 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar6 < 0x400) {
                        *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
                        *(undefined1 *)(param_3 + uVar6) = 0;
                      }
                      uVar5 = uVar11;
                      if (uVar11 == 0) goto LAB_10006086;
                    }
                    uVar5 = uVar11;
                  } while (uVar11 != 0);
                }
LAB_100061de:
                iVar22 = 8;
                do {
                  while( true ) {
                    uVar16 = (uVar3 & 0xfffffffc) >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                    cVar12 = (char)uVar16;
                    cVar7 = cVar12 + '7';
                    if (uVar16 < 10) {
                      cVar7 = cVar12 + '0';
                    }
                    if (param_3 != 0) break;
                    iVar22 = iVar22 + -1;
                    if (iVar22 == 0) goto LAB_100062d4;
                  }
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(char *)(param_3 + -1 + uVar11) = cVar7;
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar12 = 'n';
                  pcVar8 = str_1000b591;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar6) = cVar12;
                    uVar6 = uVar6 + 1;
                    cVar12 = *pcVar8;
                    if (cVar12 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100062d4:
                iVar22 = 8;
                do {
                  uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar12 = (char)uVar3;
                  cVar7 = cVar12 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar12 + '0';
                  }
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar11);
                      uVar11 = uVar11 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar11 < 0x400) {
                      *(char *)(param_3 + -1 + uVar11) = cVar7;
                      *(undefined1 *)(param_3 + uVar11) = 0;
                    }
                  }
                  iVar22 = iVar22 + -1;
                  uVar3 = local_50;
                } while (iVar22 != 0);
                goto LAB_10006fad;
              }
            }
          }
        }
      }
LAB_10005e80:
      bVar24 = uVar11 < 5;
      uVar11 = uVar11 + 1;
      uVar14 = (uint)bVar24;
      if (uVar11 == 6) goto LAB_100060a8;
      goto LAB_10005e9a;
    }
    uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
    if ((uVar3 & 1) != 0 || uVar3 == 0) goto LAB_10005fa0;
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      if (uVar11 == 5) goto LAB_10005fa0;
      iVar22 = *(int *)(param_2 + uVar11 * 4 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_10005fa0;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10005fa0;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar22 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
          uVar9 = (ulong)local_34;
          uVar21 = local_54;
          if (iVar22 != 0) {
            local_48 = local_e0 & 0xffffffff;
            goto LAB_10006474;
          }
        }
      }
      goto LAB_10005fa0;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000);
    uVar9 = (ulong)local_34;
    uVar21 = local_54;
    if (iVar22 == 0) goto LAB_10005fa0;
LAB_10006474:
    uVar21 = local_54;
    if (param_3 == 0) {
      if (uVar11 != 0) goto LAB_10006522;
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      goto LAB_10006866;
    }
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)(param_3 + uVar5) != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000b543;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar5) = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar5) = 0;
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (*pcVar8 != '\0');
      if (uVar11 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
      }
LAB_100064df:
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar8 = str_1000b554;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
    else {
LAB_10006522:
      uVar6 = 0;
      do {
        uVar3 = (uint)uVar11;
        uVar13 = (uVar11 & 0xffffffff) / 10;
        *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
        uVar5 = uVar6 + 1;
        if (8 < uVar6) break;
        uVar6 = uVar5;
        uVar11 = uVar13;
      } while (9 < uVar3);
      do {
        while (uVar11 = uVar5 - 1, param_3 != 0) {
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar5 = uVar11;
          if (uVar11 == 0) goto LAB_100064df;
        }
        uVar5 = uVar11;
      } while (uVar11 != 0);
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
    }
LAB_10006866:
    uVar3 = local_50;
    do {
      uVar15 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar16 = (uint)(byte)((char)uVar15 + 0x37);
      if (uVar15 < 10) {
        uVar16 = uVar15 + 0x30;
      }
      PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_e0 + 1);
          do {
            *(char *)(param_3 + uVar6) = (char)uVar16;
            uVar6 = uVar6 + 1;
            uVar16 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar24) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006d57;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_10006d57:
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      uVar11 = local_48 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006dcd;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_10006dcd:
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar8 = str_1000b560;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
    iVar22 = 8;
    do {
      while( true ) {
        uVar16 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar16;
        cVar7 = cVar12 + '7';
        if (uVar16 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 != 0) break;
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10006f54;
      }
      uVar11 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (*pcVar8 != '\0');
      if (uVar11 < 0x400) {
        *(char *)(param_3 + -1 + uVar11) = cVar7;
        *(undefined1 *)(param_3 + uVar11) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar11 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
      uVar6 = uVar11;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = 'n';
      pcVar8 = str_1000b56c;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar11 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
      uVar6 = uVar11;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006f54:
    iVar22 = 8;
    do {
      uVar16 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar16;
      cVar7 = cVar12 + '7';
      if (uVar16 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
LAB_10006fad:
    uVar21 = uVar21 | uVar14;
  }
LAB_10006fbe:
  local_38 = 0;
  uVar14 = 0;
  if (param_2[8] == '\x03') {
    uVar14 = *(uint *)(param_2 + 0x14);
    local_54 = uVar21;
    if ((uVar14 & 1) == 0 && uVar14 != 0) {
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 == 0 && iVar22 == 0) goto LAB_100070cd;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100070cd;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
           ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
          uVar11 = 0;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000,&local_e0);
          uVar9 = (ulong)local_34;
          if (iVar22 != 0) {
            local_48 = local_e0 & 0xffffffff;
            bVar24 = true;
            bVar23 = true;
            if (param_3 == 0) goto LAB_10007880;
            goto LAB_1000721f;
          }
        }
        goto LAB_100070cd;
      }
      iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000,&local_48);
      uVar9 = (ulong)local_34;
      if (iVar22 == 0) goto LAB_100070cd;
      if (param_3 == 0) {
LAB_10007880:
        bVar24 = local_48 >> 0x20 != 0;
        iVar22 = (uint)bVar24 * 8 + 8;
        bVar2 = true;
        bVar23 = true;
      }
      else {
        uVar11 = 0;
        bVar24 = true;
        bVar23 = true;
LAB_1000721f:
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000b59f;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar5) = cVar12;
            uVar5 = uVar5 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        if (bVar24) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
        }
        else {
          bVar24 = false;
LAB_10007722:
          uVar6 = 0;
          do {
            uVar21 = (uint)uVar11;
            uVar13 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
            uVar5 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar6 = uVar5;
            uVar11 = uVar13;
          } while (9 < uVar21);
LAB_1000776c:
          do {
            uVar11 = uVar5 - 1;
            if (bVar24) {
              uVar5 = uVar11;
              if (uVar11 == 0) {
                bVar24 = local_48 >> 0x20 != 0;
                iVar22 = (uint)bVar24 * 8 + 8;
                bVar2 = true;
                goto LAB_10007899;
              }
              goto LAB_1000776c;
            }
            uVar6 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pcVar8 != '\0');
            if (uVar6 < 0x400) {
              *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            uVar5 = uVar11;
          } while (uVar11 != 0);
        }
        bVar24 = local_48 >> 0x20 != 0;
        iVar22 = (uint)bVar24 * 8 + 8;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar12 = 'd';
          pcVar8 = str_1000b5b0;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar12;
            uVar6 = uVar6 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        bVar2 = false;
      }
LAB_10007899:
      do {
        uVar14 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar21 = (uint)(byte)((char)uVar14 + 0x37);
        if (uVar14 < 10) {
          uVar21 = uVar14 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (!bVar2) {
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar6) = (char)uVar21;
              uVar6 = uVar6 + 1;
              uVar21 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if ((!bVar24) && (0x6b < (uint)param_1[2])) {
            if ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
              local_70 = param_1;
              iVar22 = (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
              goto LAB_1000799d;
            }
          }
        }
        else {
          local_70 = param_1;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
LAB_1000799d:
          uVar9 = (ulong)local_34;
          param_1 = local_70;
          if (iVar22 == 0) {
          }
          else {
            if (!bVar2) {
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar12 = 'd';
                pcVar8 = str_1000b5bc;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar6) = cVar12;
                  uVar6 = uVar6 + 1;
                  cVar12 = *pcVar8;
                  if (cVar12 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            iVar22 = 8;
            do {
              uVar21 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar21;
              cVar7 = cVar12 + '7';
              if (uVar21 < 10) {
                cVar7 = cVar12 + '0';
              }
              if (!bVar2) {
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar7;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
              }
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
      }
    }
    else {
LAB_100070cd:
      bVar23 = true;
      uVar11 = 1;
      lVar20 = 5;
      do {
        if ((*(uint *)(param_2 + uVar11 * 4 + 0x10) & 7) != 4) {
          uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
          if ((uVar3 & 1) == 0 && uVar3 != 0) {
            iVar22 = 0;
            if ((uVar3 & 6) == 4) {
              if (lVar20 == 1) break;
              iVar22 = *(int *)(param_2 + uVar11 * 4 + 0x18);
            }
            uVar3 = uVar3 & 0xfffffff0;
            if (uVar3 != 0 || iVar22 != 0) {
              local_48 = 0;
              local_e0 = local_e0 & 0xffffffff00000000;
              if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)
                   ) {
                  if (0x67 < (uint)param_1[2] && iVar22 == 0) {
                    if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
                      local_68 = param_2;
                      iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
                      uVar9 = (ulong)local_34;
                      param_2 = local_68;
                      if (iVar22 != 0) {
                        local_48 = local_e0 & 0xffffffff;
                        goto LAB_10007210;
                      }
                    }
                  }
                }
                else {
                  local_68 = param_2;
                  iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
                  uVar9 = (ulong)local_34;
                  param_2 = local_68;
                  if (iVar22 != 0) {
LAB_10007210:
                    param_2 = local_68;
                    uVar3 = local_50;
                    if (param_3 != 0) {
                      bVar24 = false;
                      goto LAB_1000721f;
                    }
                    bVar24 = true;
                    goto LAB_10007722;
                  }
                }
              }
            }
          }
        }
        bVar23 = uVar11 < 5;
        uVar11 = uVar11 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      bVar23 = false;
      uVar3 = local_50;
    }
    uVar14 = (uint)bVar23;
    uVar21 = local_54;
  }
  uVar21 = uVar21 | uVar14 | uVar3;
  if (uVar21 != 0) goto LAB_10008111;
  local_38 = 0;
  uVar3 = *(uint *)(param_2 + 0x14);
  if ((uVar3 & 1) == 0 && uVar3 != 0) {
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      iVar22 = *(int *)(param_2 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_100073bd;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100073bd;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
         ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
        uVar11 = 0;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
        uVar9 = (ulong)local_34;
        if (iVar22 != 0) {
          local_48 = local_e0 & 0xffffffff;
          bVar24 = true;
          bVar23 = true;
          if (param_3 == 0) goto LAB_100079d8;
          goto LAB_1000752a;
        }
      }
      goto LAB_100073bd;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
    uVar9 = (ulong)local_34;
    if (iVar22 == 0) goto LAB_100073bd;
    if (param_3 == 0) {
LAB_100079d8:
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      bVar2 = true;
      bVar23 = true;
    }
    else {
      uVar11 = 0;
      bVar24 = true;
      bVar23 = true;
LAB_1000752a:
      uVar9 = 0;
      do {
        uVar6 = uVar9;
        uVar9 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000b5c8;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      if (bVar24) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
        bVar24 = false;
LAB_100075a9:
        uVar9 = 0;
        do {
          uVar3 = (uint)uVar11;
          uVar5 = (uVar11 & 0xffffffff) / 10;
          *(byte *)((long)&local_e0 + uVar9) = (char)uVar11 + (char)uVar5 * -10 | 0x30;
          uVar6 = uVar9 + 1;
          if (8 < uVar9) break;
          uVar9 = uVar6;
          uVar11 = uVar5;
        } while (9 < uVar3);
LAB_100075f3:
        do {
          uVar9 = uVar6 - 1;
          if (bVar24) {
            uVar6 = uVar9;
            if (uVar9 == 0) {
              bVar24 = local_48 >> 0x20 != 0;
              iVar22 = (uint)bVar24 * 8 + 8;
              bVar2 = true;
              goto LAB_100079f1;
            }
            goto LAB_100075f3;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(byte *)(param_3 + -1 + uVar11) = (&bStack_e1)[uVar6];
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          uVar6 = uVar9;
        } while (uVar9 != 0);
      }
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + 1 + uVar11) != '\0');
      if (uVar11 + 2 < 0x400) {
        *(undefined1 *)(uVar9 + param_3) = 0x6d;
        uVar6 = uVar11 + 2;
        if (uVar9 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar9) = 0x6d;
          uVar6 = uVar11 + 3;
          if (uVar11 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar9) = 0x69;
            uVar6 = uVar11 + 4;
            if (uVar11 + 4 < 0x3ff) {
              *(undefined1 *)(param_3 + 3 + uVar9) = 0x6f;
              uVar9 = uVar11 + 5;
              goto LAB_100076ea;
            }
          }
        }
      }
      else {
LAB_100076ea:
        uVar6 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      bVar2 = false;
    }
LAB_100079f1:
    do {
      uVar21 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar3 = (uint)(byte)((char)uVar21 + 0x37);
      if (uVar21 < 10) {
        uVar3 = uVar21 + 0x30;
      }
      PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
      if (!bVar2) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_e0 + 1);
          do {
            *(char *)(param_3 + uVar11) = (char)uVar3;
            uVar11 = uVar11 + 1;
            uVar3 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar24) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000750f;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        iVar22 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      if (iVar22 != 0) {
        if (!bVar2) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0xffffffffffffffff;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + 1 + uVar11) != '\0');
          if (uVar11 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar9) = 0x6d;
            uVar6 = uVar11 + 2;
            if (uVar9 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar9) = 0x6d;
              uVar6 = uVar11 + 3;
              if (uVar11 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar9) = 0x69;
                uVar6 = uVar11 + 4;
                if (uVar11 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar9) = 0x6f;
                  uVar6 = uVar11 + 5;
                  if (uVar11 + 5 < 0x3ff) {
                    *(undefined1 *)(uVar11 + 5 + param_3) = 0x52;
                    uVar6 = uVar11 + 6;
                    if (uVar11 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar9) = 0x65;
                      uVar6 = uVar11 + 7;
                      if (uVar11 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar9) = 0x67;
                        uVar6 = uVar11 + 8;
                        if (uVar11 + 8 < 0x3ff) {
                          *(undefined1 *)(param_3 + 7 + uVar9) = 0x30;
                          uVar9 = uVar11 + 9;
                          goto LAB_100098d8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_100098d8:
            uVar6 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = 8;
        do {
          uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (!bVar2) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(char *)(param_3 + -1 + uVar9) = cVar7;
              *(undefined1 *)(param_3 + uVar9) = 0;
            }
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
    }
  }
  else {
LAB_100073bd:
    bVar23 = true;
    uVar11 = 1;
    lVar20 = 5;
    local_68 = param_2;
    do {
      if (((*(uint *)(local_68 + uVar11 * 4 + 0x10) & 7) != 4) &&
         (uVar3 = *(uint *)(local_68 + uVar11 * 4 + 0x14), (uVar3 & 1) == 0 && uVar3 != 0)) {
        iVar22 = 0;
        if ((uVar3 & 6) == 4) {
          if (lVar20 == 1) break;
          iVar22 = *(int *)(local_68 + uVar11 * 4 + 0x18);
        }
        uVar3 = uVar3 & 0xfffffff0;
        if (uVar3 != 0 || iVar22 != 0) {
          local_48 = 0;
          local_e0 = local_e0 & 0xffffffff00000000;
          if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
                 ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
                iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
                uVar9 = (ulong)local_34;
                if (iVar22 != 0) {
                  local_48 = local_e0 & 0xffffffff;
                  goto joined_r0x10007503;
                }
              }
            }
            else {
              iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
              uVar9 = (ulong)local_34;
              if (iVar22 != 0) {
joined_r0x10007503:
                if (param_3 != 0) {
                  bVar24 = false;
                  goto LAB_1000752a;
                }
                bVar24 = true;
                goto LAB_100075a9;
              }
            }
          }
        }
      }
      bVar23 = uVar11 < 5;
      uVar11 = uVar11 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    bVar23 = false;
  }
LAB_1000750f:
  uVar21 = (uint)bVar23;
LAB_10008111:
  pcVar8 = str_1000b23b;
  if (uVar21 == 0) {
    pcVar8 = str_1000b24b;
  }
  if (param_3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (*(char *)(param_3 + uVar11) != '\0');
    if ((uVar11 + 1 < 0x400) && (cVar12 = *pcVar8, cVar12 != '\0')) {
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar11) = cVar12;
        uVar11 = uVar11 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar11 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar11) = 0;
  }
  return;
}

#undef str_1000b23b
#undef str_1000b24b
#undef str_1000b25f
#undef str_1000b277
#undef str_1000b28f
#undef str_1000b2a8
#undef str_1000b2b9
#undef str_1000b2c9
#undef str_1000b2d8
#undef str_1000b2f4
#undef str_1000b2ff
#undef str_1000b30f
#undef str_1000b31f
#undef str_1000b32c
#undef str_1000b342
#undef str_1000b358
#undef str_1000b36e
#undef str_1000b384
#undef str_1000b39d
#undef str_1000b3b5
#undef str_1000b3c2
#undef str_1000b3d3
#undef str_1000b3e7
#undef str_1000b3f7
#undef str_1000b40e
#undef str_1000b421
#undef str_1000b42b
#undef str_1000b43e
#undef str_1000b455
#undef str_1000b461
#undef str_1000b46d
#undef str_1000b47a
#undef str_1000b484
#undef str_1000b498
#undef str_1000b4a7
#undef str_1000b4ba
#undef str_1000b4cc
#undef str_1000b4e2
#undef str_1000b4ec
#undef str_1000b4f8
#undef str_1000b50d
#undef str_1000b519
#undef str_1000b524
#undef str_1000b52e
#undef str_1000b543
#undef str_1000b554
#undef str_1000b560
#undef str_1000b56c
#undef str_1000b578
#undef str_1000b587
#undef str_1000b591
#undef str_1000b59f
#undef str_1000b5b0
#undef str_1000b5bc
#undef str_1000b5c8
#undef bStack_e1
#undef local_e0
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_bc
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
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_38
#undef local_34

#undef str_1000b6b9
#define str_1000b6b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53eU)))
#undef str_1000b6c4
#define str_1000b6c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_1000b6d3
#define str_1000b6d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x558U)))
#undef str_1000b6e4
#define str_1000b6e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_1000b6f7
#define str_1000b6f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57cU)))
#undef str_1000b70a
#define str_1000b70a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58fU)))
#undef str_1000b71a
#define str_1000b71a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000b729
#define str_1000b729 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aeU)))
#undef str_1000b738
#define str_1000b738 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bdU)))
#undef str_1000b749
#define str_1000b749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ceU)))
#undef str_1000b754
#define str_1000b754 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d9U)))
#undef str_1000b760
#define str_1000b760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_1000b76a
#define str_1000b76a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#undef str_1000b773
#define str_1000b773 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f8U)))
#undef str_1000b77e
#define str_1000b77e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x603U)))
#undef str_1000b787
#define str_1000b787 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60cU)))
#undef str_1000b78f
#define str_1000b78f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x614U)))
#undef str_1000b798
#define str_1000b798 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_1000b79f
#define str_1000b79f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x624U)))
#undef str_1000b7b2
#define str_1000b7b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_1000b7c5
#define str_1000b7c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64aU)))
#undef str_1000b7d8
#define str_1000b7d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a50
 */

char * recovered_10009a50(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_1000b6b9;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000b773;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_1000b76a;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_10009b66;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_10009b66:
        return str_1000b798;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000b78f;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_1000b77e;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000b754;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10009c0a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000b760;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000b787;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000b6c4;
      case 0x1001:
      case 0x1042:
        return str_1000b6d3;
      case 0x1002:
      case 0x1045:
        return str_1000b6e4;
      case 0x1003:
      case 0x1043:
        return str_1000b6f7;
      case 0x1004:
      case 0x1048:
        return str_1000b70a;
      case 0x1005:
      case 0x1044:
        return str_1000b71a;
      default:
        return str_1000b749;
      case 0x1050:
        return str_1000b729;
      case 0x1052:
        return str_1000b738;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000b7c5;
    case 2:
      return str_1000b7b2;
    case 3:
      return str_1000b79f;
    case 4:
      pcVar2 = str_1000b7d8;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10009c0a:
        pcVar2 = recovered_1000b110((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_1000b6b9
#undef str_1000b6c4
#undef str_1000b6d3
#undef str_1000b6e4
#undef str_1000b6f7
#undef str_1000b70a
#undef str_1000b71a
#undef str_1000b729
#undef str_1000b738
#undef str_1000b749
#undef str_1000b754
#undef str_1000b760
#undef str_1000b76a
#undef str_1000b773
#undef str_1000b77e
#undef str_1000b787
#undef str_1000b78f
#undef str_1000b798
#undef str_1000b79f
#undef str_1000b7b2
#undef str_1000b7c5
#undef str_1000b7d8

#define local_60 (*(int *)(frame + 16))
#define local_5c (*(uint *)(frame + 20))
#define local_58 (*(ulong *)(frame + 24))
#define local_50 (*(ulong *)(frame + 32))
#define local_48 (*(int *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(uint *)(frame + 48))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009de0
 */

bool recovered_10009de0(int *param_1,undefined1 *param_2,long *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;

  local_34 = 0;
  if (param_3 == (long *)0x0) {
    bVar7 = false;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined1 *)((long)param_3 + lVar3) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 1) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 2) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 3) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 4) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 5) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 6) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 7) = 0;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x70);
    bVar7 = false;
    if ((((param_2 != (undefined1 *)0x0) && ((param_2[0x12] & 0x10) != 0)) &&
        (param_1 != (int *)0x0)) &&
       (((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
        ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) {
      iVar2 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],0x34,1,&local_34)
      ;
      bVar7 = false;
      if (iVar2 != 0) {
        if (local_34 - 0x40 < 0xb0) {
          uVar6 = 0;
          while( true ) {
            local_60 = 0;
            local_5c = 0;
            local_48 = 0;
            local_38 = 0;
            local_44 = 0;
            local_40 = 0;
            if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 0x60)) ||
               ((((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                 (((iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                      (*param_2,param_2[1],param_2[2],local_34 & 0xffff,1,&local_60)
                   , iVar2 == 0 || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)))) ||
                (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                 (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                    (*param_2,param_2[1],param_2[2],local_34 + 1 & 0xffff,1,
                                     &local_5c), iVar2 == 0)))))) break;
            if (((local_60 == 9) &&
                (((((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
                   (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0 &&
                    (((((iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                           (*param_2,param_2[1],param_2[2],local_34 + 3 & 0xffff,1,
                                            &local_48), iVar2 != 0 && (*param_1 == 0x54584b57)) &&
                       (0x5f < (uint)param_1[2])) &&
                      (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0 &&
                       (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                          (*param_2,param_2[1],param_2[2],local_34 + 4 & 0xffff,1,
                                           &local_38), iVar2 != 0)))) && (*param_1 == 0x54584b57))))
                   )) && ((0x5f < (uint)param_1[2] &&
                          ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) &&
                 (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                    (*param_2,param_2[1],param_2[2],local_34 + 8 & 0xffff,4,
                                     &local_44), iVar2 != 0)))) &&
               ((((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
                 ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                   (*param_2,param_2[1],param_2[2],local_34 + 0xc & 0xffff,4,
                                    &local_40), iVar2 != 0)))) {
              local_50 = 0;
              *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + 1;
              if (((((local_48 == 1) && (local_58 = (ulong)local_44, !CARRY4(local_40,local_44))) &&
                   ((uVar4 = (ulong)local_38, local_38 < 6 && (local_40 != 0)))) &&
                  ((uVar4 == 0 || ((*(uint *)(param_2 + (ulong)(local_38 - 1) * 4 + 0x14) & 7) != 4)
                   ))) && (uVar1 = *(uint *)(param_2 + uVar4 * 4 + 0x14),
                          (uVar1 & 1) == 0 && uVar1 != 0)) {
                iVar2 = 0;
                if ((uVar1 & 6) == 4) {
                  if (4 < local_38) goto LAB_1000a208;
                  iVar2 = *(int *)(param_2 + uVar4 * 4 + 0x18);
                }
                if (((local_40 + local_44 != 0) && ((uVar1 & 0xfffffff0) != 0 || iVar2 != 0)) &&
                   (local_3c = 0, *param_1 == 0x54584b57)) {
                  if (((uint)param_1[2] < 0xbc) ||
                     ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                    if ((!((uint)param_1[2] < 0x68 || iVar2 != 0)) &&
                       (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                        (iVar2 = (*(code *)(ulong)(uint)param_1[0x19])
                                           (uVar1 & 0xfffffff0,0,local_40 + local_44,&local_3c),
                        iVar2 != 0)))) {
                      uVar4 = (ulong)local_3c;
                      goto LAB_1000a1f1;
                    }
                  }
                  else {
                    iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                    if (iVar2 != 0) {
                      uVar4 = local_50;
LAB_1000a1f1:
                      *param_3 = uVar4 + local_58;
                      *(uint *)(param_3 + 4) = local_38;
                      goto LAB_1000a3ee;
                    }
                  }
                }
              }
LAB_1000a208:
              if (((((local_48 == 2) && (local_58 = (ulong)local_44, !CARRY4(local_40,local_44))) &&
                   (uVar4 = (ulong)local_38, local_38 < 6)) && (local_40 != 0)) &&
                 (((uVar4 == 0 || ((*(uint *)(param_2 + (ulong)(local_38 - 1) * 4 + 0x14) & 7) != 4)
                   ) && (uVar1 = *(uint *)(param_2 + uVar4 * 4 + 0x14),
                        (uVar1 & 1) == 0 && uVar1 != 0)))) {
                iVar2 = 0;
                if ((uVar1 & 6) == 4) {
                  if (4 < local_38) goto LAB_1000a37e;
                  iVar2 = *(int *)(param_2 + uVar4 * 4 + 0x18);
                }
                if ((local_40 + local_44 != 0) && ((uVar1 & 0xfffffff0) != 0 || iVar2 != 0)) {
                  local_50 = 0;
                  local_3c = 0;
                  if (*param_1 == 0x54584b57) {
                    if (((uint)param_1[2] < 0xbc) ||
                       ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                      if ((0x67 < (uint)param_1[2] && iVar2 == 0) &&
                         (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                          (iVar2 = (*(code *)(ulong)(uint)param_1[0x19])
                                             (uVar1 & 0xfffffff0,0,local_40 + local_44,&local_3c),
                          iVar2 != 0)))) {
                        local_50 = (ulong)local_3c;
                        goto LAB_1000a312;
                      }
                    }
                    else {
                      iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                      if (iVar2 != 0) {
LAB_1000a312:
                        local_50 = local_50 + local_58;
                        local_3c = 0;
                        param_3[1] = local_50;
                        *(uint *)((long)param_3 + 0x24) = local_38;
                        if ((((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
                            ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                           (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                              (*param_2,param_2[1],param_2[2],
                                               local_34 + 0x10 & 0xffff,4,&local_3c), iVar2 != 0)) {
                          *(uint *)(param_3 + 6) = local_3c;
                        }
                        goto LAB_1000a3ee;
                      }
                    }
                  }
                }
              }
LAB_1000a37e:
              if ((local_48 == 3) &&
                 (uVar5 = recovered_1000acd0(param_1,(long)param_2,local_38,local_44,local_40,
                                             &local_50), (int)uVar5 != 0)) {
                param_3[2] = local_50;
                *(uint *)(param_3 + 5) = local_38;
              }
              else if ((local_48 == 4) &&
                      (uVar5 = recovered_1000acd0(param_1,(long)param_2,local_38,local_44,local_40,
                                                  &local_50), (int)uVar5 != 0)) {
                param_3[3] = local_50;
                *(uint *)((long)param_3 + 0x2c) = local_38;
              }
            }
LAB_1000a3ee:
            if ((((local_5c == 0) || (local_5c == local_34)) || (local_34 = local_5c, 0x1e < uVar6))
               || (uVar6 = uVar6 + 1, 0xaf < local_5c - 0x40)) break;
          }
        }
        bVar7 = *param_3 != 0;
      }
    }
  }
  return bVar7;
}

#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a440
 */

void recovered_1000a440(int *param_1,ulong *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  local_1c = 0;
  if (param_2 == (ulong *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
    return;
  }
  if (*param_1 == 0x54584b57) {
    uVar2 = *param_2 + 0x14;
    if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
      if ((uVar2 >> 0x20 == 0) &&
         ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
      }
    }
    else {
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
    }
  }
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 0x14;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,0);
      }
    }
    uVar2 = *param_2;
    if ((uVar2 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,0);
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4);
          }
        }
        uVar2 = *param_2;
        if ((uVar2 != 0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
               ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,1);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,1);
          }
          if ((*param_2 != 0) && (*param_1 == 0x54584b57)) {
            uVar2 = *param_2 + 4;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((uVar2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                 ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 8;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,0);
      }
    }
    if (*param_2 != 0) {
      if (*param_1 == 0x54584b57) {
        uVar2 = *param_2 + 0xc;
        if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
          if ((uVar2 >> 0x20 == 0) &&
             ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
        }
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 8;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,1);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,1);
          }
        }
        if (*param_2 != 0) {
          if (*param_1 != 0x54584b57) goto LAB_1000a89d;
          uVar2 = *param_2 + 0xc;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
          }
        }
      }
    }
  }
  if (((*param_1 == 0x54584b57) && (0x7b < (uint)param_1[2])) &&
     ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[0x1e])();
  }
LAB_1000a89d:
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 0x14;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,1);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,1);
      }
    }
    if (*param_2 != 0) {
      if (*param_1 == 0x54584b57) {
        uVar2 = *param_2 + 0x14;
        if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
          if ((uVar2 >> 0x20 == 0) &&
             ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,3);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,3);
        }
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 0x14;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,0xb);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,0xb);
          }
        }
        if (*param_2 != 0) {
          if (*param_1 == 0x54584b57) {
            uVar2 = *param_2 + 0x14;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if ((uVar2 >> 0x20 == 0) &&
                 ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))))
              {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
            }
          }
          if (*param_2 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar2 = *param_2 + 0x12;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar2 >> 0x20 == 0) &&
                   ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))
                   )) {
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,2);
                }
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
              }
            }
            if (*param_2 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar2 = *param_2 + 0x15;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar2 >> 0x20 == 0) &&
                     ((0x6b < (uint)param_1[2] &&
                      ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
                }
              }
              if (*param_2 != 0) {
                if (*param_1 == 0x54584b57) {
                  uVar2 = *param_2 + 0x16;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar2 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,2,0);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar2,2,0);
                  }
                }
                if (*param_2 != 0) {
                  if (*param_1 == 0x54584b57) {
                    uVar2 = *param_2 + 0x18;
                    if (((uint)param_1[2] < 0xc0) ||
                       ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                      if ((uVar2 >> 0x20 == 0) &&
                         ((0x6b < (uint)param_1[2] &&
                          ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                        (*(code *)(ulong)(uint)param_1[0x1a])
                                  (uVar2 & 0xffffffff,2,(long)param_2 + 0x54);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
                    }
                  }
                  if (*param_2 != 0) {
                    if (*param_1 == 0x54584b57) {
                      uVar2 = *param_2 + 0x1c;
                      if (((uint)param_1[2] < 0xc0) ||
                         ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                        if ((uVar2 >> 0x20 == 0) &&
                           ((0x6b < (uint)param_1[2] &&
                            ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,2,param_2 + 0xb);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
                      }
                    }
                    if ((*param_2 != 0) && (*param_1 == 0x54584b57)) {
                      uVar2 = *param_2 + 0x1e;
                      if (((uint)param_1[2] < 0xc0) ||
                         ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                        if (uVar2 >> 0x20 != 0) {
                          return;
                        }
                        if ((uint)param_1[2] < 0x6c) {
                          return;
                        }
                        if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
                          return;
                        }
                        iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])
                                          (uVar2 & 0xffffffff,2,&local_1c);
                      }
                      else {
                        iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2,&local_1c);
                      }
                      if (iVar1 != 0) {
                        *(uint *)((long)param_2 + 0x5c) = local_1c;
                        if (param_2[1] != 0) {
                          param_2[0xc] = (ulong)(uint)param_2[6] * (ulong)local_1c + param_2[1];
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef local_1c

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acd0
 */

undefined8
recovered_1000acd0(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  uVar2 = 0;
  iVar3 = param_5 + param_4;
  if (((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
      (param_6 != (ulong *)0x0)) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + 0x14 + (ulong)(param_3 - 1) * 4) & 7) != 4)))) {
    uVar4 = *(uint *)(param_2 + 0x14 + (ulong)param_3 * 4);
    if ((uVar4 & 1) == 0 && uVar4 != 0) {
      uVar2 = 0;
      iVar5 = 0;
      if ((uVar4 & 6) == 4) {
        if (4 < param_3) {
          return 0;
        }
        iVar5 = *(int *)(param_2 + 0x18 + (ulong)param_3 * 4);
      }
      uVar4 = uVar4 & 0xfffffff0;
      if ((iVar3 != 0) && (uVar4 != 0 || iVar5 != 0)) {
        *param_6 = 0;
        local_1c = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((uint)param_1[2] < 0x68 || iVar5 != 0) {
              return 0;
            }
            if ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0) {
              return 0;
            }
            iVar3 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,iVar3,&local_1c);
            if (iVar3 == 0) {
              return 0;
            }
            uVar1 = (ulong)local_1c;
          }
          else {
            iVar3 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar5,iVar3,param_6);
            if (iVar3 == 0) {
              return 0;
            }
            uVar1 = *param_6;
          }
          *param_6 = param_4 + uVar1;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae30
 */

void recovered_1000ae30(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0 && param_4 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000ae7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000aea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1a])(uVar1 & 0xffffffff,1,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aeb0
 */

void recovered_1000aeb0(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = param_2 + 0x14;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000aee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af10
 */

void recovered_1000af10(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0 && param_4 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000af5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1a])(uVar1 & 0xffffffff,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af90
 */

void recovered_1000af90(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000afcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000aff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b000
 */

void recovered_1000b000(int *param_1,long param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar2 = (ulong)param_3 + param_2;
    if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
      if (uVar2 >> 0x20 != 0) {
        return;
      }
      if ((uint)param_1[2] < 0x70) {
        return;
      }
      if ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0) {
        return;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,param_4);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,param_4);
    }
    if ((iVar1 != 0) && (*param_1 == 0x54584b57)) {
      uVar2 = (ulong)param_3 + param_2 + 4;
      if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
        return;
      }
      if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b0fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)param_1[0x1b])(uVar2,4,param_5);
        return;
      }
    }
  }
  return;
}


#undef DAT_1000b7ee
#define DAT_1000b7ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x673U)))
#undef DAT_1000b7f3
#define DAT_1000b7f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_1000b7f8
#define DAT_1000b7f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67dU)))
#undef DAT_1000b7fd
#define DAT_1000b7fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682U)))
#undef str_1000b802
#define str_1000b802 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_1000b80d
#define str_1000b80d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#undef str_1000b816
#define str_1000b816 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b110
 */

char * recovered_1000b110(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_1000b7ee;
    }
    if (param_1 == 0x10) {
      return &DAT_1000b7f3;
    }
    if (param_1 == 0x20) {
      return &DAT_1000b7f8;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_1000b7fd;
    }
    if (param_1 == 0x80) {
      return str_1000b802;
    }
    if (param_1 == 0xfe) {
      return str_1000b80d;
    }
  }
  return str_1000b816;
}

#undef DAT_1000b7ee
#undef DAT_1000b7f3
#undef DAT_1000b7f8
#undef DAT_1000b7fd
#undef str_1000b802
#undef str_1000b80d
#undef str_1000b816

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
