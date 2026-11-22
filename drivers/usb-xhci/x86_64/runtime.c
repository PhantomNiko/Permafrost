/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b000
#define DAT_1000b000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12afU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b000;
}

#undef DAT_1000b000

#undef DAT_10009dfd
#define DAT_10009dfd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef str_10009d51
#define str_10009d51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10009d61
#define str_10009d61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10009d8c
#define str_10009d8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bU)))
#undef str_10009da1
#define str_10009da1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10009dc0
#define str_10009dc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fU)))
#undef str_10009dcf
#define str_10009dcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_10009ddf
#define str_10009ddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_10009dee
#define str_10009dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
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
    pcVar8 = str_10009d51;
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
    pcVar8 = str_10009dc0;
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
    pcVar8 = str_10009d61;
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
      pcVar8 = str_10009dcf;
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
      pcVar8 = str_10009ddf;
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
      pcVar8 = str_10009dee;
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
    iVar4 = (*(code *)(ulong)(uint)api[3])(&DAT_10009dfd,str_10009d8c,local_468);
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
            uVar7 = recovered_10002610(api,uVar14,uVar10,0,abStack_512 + 2);
            if (((int)uVar7 != 0) &&
               (recovered_100010b0(api,abStack_512 + 2,(int *)&local_34), local_504 < '\0')) {
              uVar7 = recovered_10002610(api,uVar14,uVar10,1,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,2,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,3,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,4,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,5,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,6,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
              }
              uVar7 = recovered_10002610(api,uVar14,uVar10,7,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_100010b0(api,pbVar1,(int *)&local_34);
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
        pcVar8 = str_10009da1;
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
        (*(code *)(ulong)(uint)api[3])(&DAT_10009dfd,str_10009d8c,local_468);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

#undef DAT_10009dfd
#undef str_10009d51
#undef str_10009d61
#undef str_10009d8c
#undef str_10009da1
#undef str_10009dc0
#undef str_10009dcf
#undef str_10009ddf
#undef str_10009dee
#undef abStack_66
#undef local_504
#undef local_4ac
#undef local_470
#undef local_46c
#undef local_468
#undef local_38
#undef local_34
#undef abStack_512

#undef DAT_10009e31
#define DAT_10009e31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef DAT_10009e36
#define DAT_10009e36 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe5U)))
#undef DAT_10009e3b
#define DAT_10009e3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef DAT_10009e40
#define DAT_10009e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef str_10009dfe
#define str_10009dfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadU)))
#undef str_10009e1d
#define str_10009e1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
#undef str_10009e45
#define str_10009e45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10009e50
#define str_10009e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10009e59
#define str_10009e59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
#undef str_1000a1ff
#define str_1000a1ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#define local_4a8 (*(undefined2 *)(frame + 1048))
#define local_4a6 (*(undefined1 (*)[1021])(frame + 1050))
#define local_a8 (*(undefined2 *)(frame + 2072))
#define acStack_8a9 (*(char (*)[1024])(frame + 23))
#define cStack_4a9 (*(char *)(frame + 1047))
#define cStack_a9 (*(char *)(frame + 2071))
#define abStack_3c (*(byte (*)[12])(frame + 2180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b0
 */

void recovered_100010b0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;

  if (param_2[8] != 0xc) {
    return;
  }
  if (param_2[9] != 3) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8a9[1] = '\0';
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 1] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = 'r';
    pcVar4 = str_10009dfe;
    do {
      pcVar4 = pcVar4 + 1;
      acStack_8a9[uVar3 + 1] = cVar6;
      uVar3 = uVar3 + 1;
      cVar6 = *pcVar4;
      if (cVar6 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8a9[uVar3 + 1] = '\0';
  bVar7 = param_2[10];
  if (bVar7 < 0x30) {
    if (bVar7 == 0) {
      pcVar4 = &DAT_10009e31;
      goto LAB_100011ab;
    }
    if (bVar7 == 0x10) {
      pcVar4 = &DAT_10009e36;
      goto LAB_100011ab;
    }
    if (bVar7 == 0x20) {
      pcVar4 = &DAT_10009e3b;
      goto LAB_100011ab;
    }
  }
  else {
    if (bVar7 == 0x30) {
      pcVar4 = &DAT_10009e40;
      goto LAB_100011ab;
    }
    if (bVar7 == 0x80) {
      pcVar4 = str_10009e45;
      goto LAB_100011ab;
    }
    if (bVar7 == 0xfe) {
      pcVar4 = str_10009e50;
      goto LAB_100011ab;
    }
  }
  pcVar4 = str_10009e59;
LAB_100011ab:
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 1] != '\0');
  cVar6 = *pcVar4;
  if (uVar3 + 1 < 0x400 && cVar6 != '\0') {
    do {
      pcVar4 = pcVar4 + 1;
      acStack_8a9[uVar3 + 1] = cVar6;
      uVar3 = uVar3 + 1;
      cVar6 = *pcVar4;
      if (cVar6 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8a9[uVar3 + 1] = '\0';
  recovered_10002900(param_1,param_2,(long)(acStack_8a9 + 1));
  pcVar4 = recovered_10009870((long)param_2);
  if (param_2 == (byte *)0x0) {
    return;
  }
  PF_PART1(local_a8, 0) = 0;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  if (uVar3 + 1 < 0x60) {
    cVar6 = '/';
    pcVar8 = str_10009e1d;
    do {
      pcVar8 = pcVar8 + 1;
      local_4a6[uVar3 + 0x3fe] = cVar6;
      uVar3 = uVar3 + 1;
      cVar6 = *pcVar8;
      if (cVar6 == '\0') break;
    } while (uVar3 < 0x5f);
  }
  local_4a6[uVar3 + 0x3fe] = 0;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = 0x2f;
    uVar3 = uVar17;
  }
  local_4a6[uVar3 + 0x3fe] = 0;
  bVar7 = *param_2;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  bVar13 = (bVar7 >> 4) + 0x37;
  if (bVar7 < 0xa0) {
    bVar13 = bVar7 >> 4 | 0x30;
  }
  if (uVar3 + 1 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = bVar13;
    local_4a6[uVar3 + 0x3ff] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  cVar6 = bVar7 + 0x37;
  if (bVar7 < 10) {
    cVar6 = bVar7 + 0x30;
  }
  if (uVar3 + 1 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = cVar6;
    local_4a6[uVar3 + 0x3ff] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = 0x3a;
    uVar3 = uVar17;
  }
  local_4a6[uVar3 + 0x3fe] = 0;
  bVar7 = param_2[1];
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  bVar12 = (bVar7 >> 4) + 0x37;
  if (bVar7 < 0xa0) {
    bVar12 = bVar7 >> 4 | 0x30;
  }
  if (uVar3 + 1 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = bVar12;
    local_4a6[uVar3 + 0x3ff] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  cVar14 = bVar7 + 0x37;
  if (bVar7 < 10) {
    cVar14 = bVar7 + 0x30;
  }
  if (uVar3 + 1 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = cVar14;
    local_4a6[uVar3 + 0x3ff] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar3 + 0x3fe] = 0x2e;
    uVar3 = uVar17;
  }
  local_4a6[uVar3 + 0x3fe] = 0;
  bVar7 = param_2[2];
  if (bVar7 == 0) {
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      uVar17 = uVar3 + 1;
    } while (local_4a6[uVar3 + 0x3fe] != '\0');
    if (uVar3 + 1 < 0x60) {
      *(undefined2 *)(local_4a6 + uVar3 + 0x3fe) = 0x30;
    }
  }
  else {
    uVar3 = (ulong)(uint)bVar7;
    uVar17 = 0xffffffffffffffff;
    do {
      uVar5 = uVar17;
      uVar10 = (uint)uVar3;
      abStack_3c[uVar5 + 3] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
      uVar17 = uVar5 + 1;
      if (8 < uVar17) break;
      uVar3 = uVar3 / 10;
    } while (9 < uVar10);
    if ((uVar17 & 1) == 0) {
      uVar3 = 0;
      do {
        uVar16 = uVar3;
        uVar3 = uVar16 + 1;
      } while (local_4a6[uVar16 + 0x3fe] != '\0');
      uVar3 = uVar17;
      if (uVar16 + 1 < 0x60) {
        local_4a6[uVar16 + 0x3fe] = abStack_3c[uVar5 + 3];
        local_4a6[uVar16 + 0x3ff] = 0;
      }
    }
    else {
      uVar3 = uVar5 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (local_4a6[uVar5 + 0x3fe] != '\0');
      if (uVar5 + 1 < 0x60) {
        local_4a6[uVar5 + 0x3fe] = abStack_3c[uVar3 + 1];
        local_4a6[uVar5 + 0x3ff] = 0;
      }
      pbVar1 = abStack_3c + uVar3;
      uVar3 = uVar3 - 2;
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (local_4a6[uVar5 + 0x3fe] != '\0');
      uVar17 = uVar3;
      if (uVar5 + 1 < 0x60) {
        local_4a6[uVar5 + 0x3fe] = *pbVar1;
        local_4a6[uVar5 + 0x3ff] = 0;
      }
    }
  }
  PF_PART1(local_4a8, 0) = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 - 1] != '\0');
  if (uVar3 + 2 < 0x400) {
    *(undefined1 *)((long)&local_4a8 + uVar17) = 0x70;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar3 + 2;
    if (bVar19) {
      uVar17 = uVar3 + 3;
      local_4a6[uVar3] = 99;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar3 + 4;
        local_4a6[uVar3 + 1] = 0x69;
        if (uVar17 < 0x3ff) {
          local_4a6[uVar3 + 2] = 0x3d;
          uVar17 = uVar3 + 5;
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = cVar6;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = ':';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = bVar12;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = '.';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  if (bVar7 == 0) {
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      uVar17 = uVar3 + 1;
    } while (acStack_8a9[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      (acStack_8a9 + uVar3 + 0x401)[0] = '0';
      (acStack_8a9 + uVar3 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    uVar10 = (uint)bVar7;
    do {
      uVar3 = uVar17;
      abStack_3c[uVar3 + 3] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar17 = uVar3 + 1;
      if (8 < uVar17) break;
      bVar19 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar19);
    if ((uVar17 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar16 = uVar5;
        uVar5 = uVar16 + 1;
      } while (acStack_8a9[uVar16 + 0x401] != '\0');
      uVar5 = uVar17;
      if (uVar16 + 1 < 0x400) {
        acStack_8a9[uVar16 + 0x401] = abStack_3c[uVar3 + 3];
        local_4a6[uVar16 - 1] = 0;
      }
    }
    else {
      uVar5 = uVar3 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar3 = uVar17;
        uVar17 = uVar3 + 1;
      } while (acStack_8a9[uVar3 + 0x401] != '\0');
      if (uVar3 + 1 < 0x400) {
        acStack_8a9[uVar3 + 0x401] = abStack_3c[uVar5 + 1];
        local_4a6[uVar3 - 1] = 0;
      }
      pbVar1 = abStack_3c + uVar5;
      uVar5 = uVar5 - 2;
      uVar17 = 0;
      do {
        uVar3 = uVar17;
        uVar17 = uVar3 + 1;
      } while (acStack_8a9[uVar3 + 0x401] != '\0');
      uVar17 = uVar5;
      if (uVar3 + 1 < 0x400) {
        acStack_8a9[uVar3 + 0x401] = *pbVar1;
        local_4a6[uVar3 - 1] = 0;
      }
    }
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 - 1] != '\0');
  if (uVar3 + 2 < 0x400) {
    local_4a6[uVar3 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar3 + 2;
    if (bVar19) {
      uVar17 = uVar3 + 3;
      local_4a6[uVar3] = 0x76;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar3 + 4;
        local_4a6[uVar3 + 1] = 0x65;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar3 + 5;
          local_4a6[uVar3 + 2] = 0x6e;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar3 + 6;
            *(undefined1 *)((long)&local_4a8 + uVar3 + 5) = 100;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar3 + 7;
              local_4a6[uVar3 + 4] = 0x6f;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar3 + 8;
                local_4a6[uVar3 + 5] = 0x72;
                if (uVar17 < 0x3ff) {
                  local_4a6[uVar3 + 6] = 0x3d;
                  uVar17 = uVar3 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  uVar2 = *(ushort *)(param_2 + 4);
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar7 = (byte)(uVar2 >> 8);
    bVar13 = (bVar7 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar9 = uVar2 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)uVar9;
    cVar14 = cVar6 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar9 = uVar2 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)uVar9;
    cVar14 = cVar6 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)(uVar2 & 0xf);
    cVar14 = cVar6 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 - 1] != '\0');
  if (uVar3 + 2 < 0x400) {
    local_4a6[uVar3 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar3 + 2;
    if (bVar19) {
      uVar17 = uVar3 + 3;
      local_4a6[uVar3] = 100;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar3 + 4;
        local_4a6[uVar3 + 1] = 0x65;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar3 + 5;
          local_4a6[uVar3 + 2] = 0x76;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar3 + 6;
            *(undefined1 *)((long)&local_4a8 + uVar3 + 5) = 0x69;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar3 + 7;
              local_4a6[uVar3 + 4] = 99;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar3 + 8;
                local_4a6[uVar3 + 5] = 0x65;
                if (uVar17 < 0x3ff) {
                  local_4a6[uVar3 + 6] = 0x3d;
                  uVar17 = uVar3 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  uVar2 = *(ushort *)(param_2 + 6);
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar7 = (byte)(uVar2 >> 8);
    bVar13 = (bVar7 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar9 = uVar2 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)uVar9;
    cVar14 = cVar6 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar9 = uVar2 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)uVar9;
    cVar14 = cVar6 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = (char)(uVar2 & 0xf);
    cVar14 = cVar6 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar14 = cVar6 + '0';
    }
    acStack_8a9[uVar3 + 0x401] = cVar14;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 - 1] != '\0');
  if (uVar3 + 2 < 0x400) {
    local_4a6[uVar3 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar3 + 2;
    if (bVar19) {
      uVar17 = uVar3 + 3;
      local_4a6[uVar3] = 99;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar3 + 4;
        local_4a6[uVar3 + 1] = 0x6c;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar3 + 5;
          *(undefined1 *)((long)&local_4a8 + uVar3 + 4) = 0x61;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar3 + 6;
            local_4a6[uVar3 + 3] = 0x73;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar3 + 7;
              local_4a6[uVar3 + 4] = 0x73;
              if (uVar17 < 0x3ff) {
                local_4a6[uVar3 + 5] = 0x3d;
                uVar17 = uVar3 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  bVar7 = param_2[8];
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar13 = (bVar7 >> 4) + 0x37;
    if (bVar7 < 0xa0) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = bVar7 + 0x37;
    if (bVar7 < 10) {
      cVar6 = bVar7 + 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = cVar6;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = '.';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  bVar7 = param_2[9];
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar13 = (bVar7 >> 4) + 0x37;
    if (bVar7 < 0xa0) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = bVar7 + 0x37;
    if (bVar7 < 10) {
      cVar6 = bVar7 + 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = cVar6;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = '.';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  bVar7 = param_2[10];
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar13 = (bVar7 >> 4) + 0x37;
    if (bVar7 < 0xa0) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = bVar7 + 0x37;
    if (bVar7 < 10) {
      cVar6 = bVar7 + 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = cVar6;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = ' ';
    pcVar8 = str_1000a1ff;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_8a9[uVar3 + 0x401] = cVar6;
      uVar3 = uVar3 + 1;
      cVar6 = *pcVar8;
      if (cVar6 == '\0') break;
    } while (uVar3 < 0x3ff);
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  bVar7 = param_2[0xb];
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    bVar13 = (bVar7 >> 4) + 0x37;
    if (bVar7 < 0xa0) {
      bVar13 = bVar7 >> 4 | 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = bVar13;
    local_4a6[uVar3 - 1] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar3 + 1 < 0x400) {
    cVar6 = bVar7 + 0x37;
    if (bVar7 < 10) {
      cVar6 = bVar7 + 0x30;
    }
    acStack_8a9[uVar3 + 0x401] = cVar6;
    local_4a6[uVar3 - 1] = 0;
  }
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = ' ';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  uVar17 = 0xffffffffffffffff;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (local_4a6[uVar3 - 1] != '\0');
  if (uVar3 + 2 < 0x400) {
    local_4a6[uVar3 - 1] = 99;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar3 + 2;
    if (bVar19) {
      uVar17 = uVar3 + 3;
      local_4a6[uVar3] = 0x6f;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar3 + 4;
        local_4a6[uVar3 + 1] = 0x6d;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar3 + 5;
          *(undefined1 *)((long)&local_4a8 + uVar3 + 4) = 0x6d;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar3 + 6;
            local_4a6[uVar3 + 3] = 0x61;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar3 + 7;
              local_4a6[uVar3 + 4] = 0x6e;
              if (uVar17 < 0x3ff) {
                local_4a6[uVar3 + 5] = 100;
                uVar17 = uVar3 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  uVar17 = 0;
  do {
    uVar3 = uVar17;
    uVar17 = uVar3 + 1;
  } while (acStack_8a9[uVar3 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar3 + 0x401] = '=';
    uVar3 = uVar17;
  }
  acStack_8a9[uVar3 + 0x401] = '\0';
  iVar11 = 8;
  do {
    uVar15 = uVar10 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
    cVar6 = (char)uVar15;
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      uVar17 = uVar3 + 1;
    } while (acStack_8a9[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar14 = cVar6 + '7';
      if (uVar15 < 10) {
        cVar14 = cVar6 + '0';
      }
      acStack_8a9[uVar3 + 0x401] = cVar14;
      local_4a6[uVar3 - 1] = 0;
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar17 = 0;
  do {
    uVar10 = *(uint *)(param_2 + uVar17 * 4 + 0x14);
    if (uVar10 != 0) {
      uVar3 = 0xffffffffffffffff;
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 + 1;
      } while (local_4a6[uVar5 - 1] != '\0');
      if (uVar5 + 2 < 0x400) {
        local_4a6[uVar5 - 1] = 0x20;
        bVar19 = uVar3 != 0x3fe;
        uVar3 = uVar5 + 2;
        if (bVar19) {
          uVar3 = uVar5 + 3;
          local_4a6[uVar5] = 0x62;
          if (uVar3 < 0x3ff) {
            uVar3 = uVar5 + 4;
            local_4a6[uVar5 + 1] = 0x61;
            if (uVar3 < 0x3ff) {
              local_4a6[uVar5 + 2] = 0x72;
              uVar3 = uVar5 + 5;
            }
          }
        }
      }
      acStack_8a9[uVar3 + 0x401] = '\0';
      if (uVar17 == 0) {
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          uVar3 = uVar5 + 1;
        } while (acStack_8a9[uVar5 + 0x401] != '\0');
        if (uVar5 + 1 < 0x400) {
          (acStack_8a9 + uVar5 + 0x401)[0] = '0';
          (acStack_8a9 + uVar5 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar5 = 0xffffffffffffffff;
        uVar3 = uVar17;
        do {
          uVar16 = uVar5;
          uVar5 = uVar3 & 0xffffffff;
          uVar15 = (uint)uVar3;
          uVar3 = uVar5 / 10;
          abStack_3c[uVar16 + 3] = (char)uVar5 + (char)uVar3 * -10 | 0x30;
          uVar5 = uVar16 + 1;
          if (8 < uVar5) break;
        } while (9 < uVar15);
        if ((uVar5 & 1) == 0) {
          uVar3 = 0;
          do {
            uVar18 = uVar3;
            uVar3 = uVar18 + 1;
          } while (acStack_8a9[uVar18 + 0x401] != '\0');
          uVar3 = uVar5;
          if (uVar18 + 1 < 0x400) {
            acStack_8a9[uVar18 + 0x401] = abStack_3c[uVar16 + 3];
            local_4a6[uVar18 - 1] = 0;
          }
        }
        else {
          uVar3 = uVar16 + 2;
        }
        while (uVar5 != 0) {
          uVar5 = 0;
          do {
            uVar16 = uVar5;
            uVar5 = uVar16 + 1;
          } while (acStack_8a9[uVar16 + 0x401] != '\0');
          if (uVar16 + 1 < 0x400) {
            acStack_8a9[uVar16 + 0x401] = abStack_3c[uVar3 + 1];
            local_4a6[uVar16 - 1] = 0;
          }
          pbVar1 = abStack_3c + uVar3;
          uVar3 = uVar3 - 2;
          uVar5 = 0;
          do {
            uVar16 = uVar5;
            uVar5 = uVar16 + 1;
          } while (acStack_8a9[uVar16 + 0x401] != '\0');
          uVar5 = uVar3;
          if (uVar16 + 1 < 0x400) {
            acStack_8a9[uVar16 + 0x401] = *pbVar1;
            local_4a6[uVar16 - 1] = 0;
          }
        }
      }
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 + 1;
      } while (acStack_8a9[uVar5 + 0x401] != '\0');
      if (uVar3 < 0x400) {
        acStack_8a9[uVar5 + 0x401] = '=';
        uVar5 = uVar3;
      }
      acStack_8a9[uVar5 + 0x401] = '\0';
      iVar11 = 8;
      do {
        uVar15 = uVar10 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
        cVar6 = (char)uVar15;
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          uVar3 = uVar5 + 1;
        } while (acStack_8a9[uVar5 + 0x401] != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar14 = cVar6 + '7';
          if (uVar15 < 10) {
            cVar14 = cVar6 + '0';
          }
          acStack_8a9[uVar5 + 0x401] = cVar14;
          local_4a6[uVar5 - 1] = 0;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if (acStack_8a9[1] != '\0') {
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      uVar17 = uVar3 + 1;
    } while (acStack_8a9[uVar3 + 0x401] != '\0');
    if (uVar17 < 0x400) {
      acStack_8a9[uVar3 + 0x401] = ' ';
      uVar3 = uVar17;
    }
    acStack_8a9[uVar3 + 0x401] = '\0';
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      uVar17 = uVar3 + 1;
    } while (acStack_8a9[uVar3 + 0x401] != '\0');
    if (uVar3 + 1 < 0x400) {
      pcVar8 = acStack_8a9 + 2;
      cVar6 = acStack_8a9[1];
      do {
        acStack_8a9[uVar3 + 0x401] = cVar6;
        uVar3 = uVar3 + 1;
        cVar6 = *pcVar8;
        if (cVar6 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar3 < 0x3ff);
    }
    acStack_8a9[uVar3 + 0x401] = '\0';
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_a8,pcVar4,&local_4a8);
  }
  return;
}

#undef DAT_10009e31
#undef DAT_10009e36
#undef DAT_10009e3b
#undef DAT_10009e40
#undef str_10009dfe
#undef str_10009e1d
#undef str_10009e45
#undef str_10009e50
#undef str_10009e59
#undef str_1000a1ff
#undef local_4a8
#undef local_4a6
#undef local_a8
#undef acStack_8a9
#undef cStack_4a9
#undef cStack_a9
#undef abStack_3c

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

undefined8
recovered_10002610(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10009e31
#define DAT_10009e31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef DAT_10009e36
#define DAT_10009e36 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe5U)))
#undef DAT_10009e3b
#define DAT_10009e3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef DAT_10009e40
#define DAT_10009e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef str_10009e45
#define str_10009e45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10009e50
#define str_10009e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10009e59
#define str_10009e59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

char * recovered_10002890(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_10009e31;
    }
    if (param_1 == 0x10) {
      return &DAT_10009e36;
    }
    if (param_1 == 0x20) {
      return &DAT_10009e3b;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_10009e40;
    }
    if (param_1 == 0x80) {
      return str_10009e45;
    }
    if (param_1 == 0xfe) {
      return str_10009e50;
    }
  }
  return str_10009e59;
}

#undef DAT_10009e31
#undef DAT_10009e36
#undef DAT_10009e3b
#undef DAT_10009e40
#undef str_10009e45
#undef str_10009e50
#undef str_10009e59

#undef str_10009e68
#define str_10009e68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_10009e78
#define str_10009e78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x127U)))
#undef str_10009e8c
#define str_10009e8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_10009ea4
#define str_10009ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_10009ebc
#define str_10009ebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16bU)))
#undef str_10009ed5
#define str_10009ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
#undef str_10009ee6
#define str_10009ee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_10009ef6
#define str_10009ef6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
#undef str_10009f05
#define str_10009f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10009f21
#define str_10009f21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10009f2c
#define str_10009f2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_10009f3c
#define str_10009f3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_10009f4c
#define str_10009f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_10009f59
#define str_10009f59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10009f6f
#define str_10009f6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
#undef str_10009f85
#define str_10009f85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x234U)))
#undef str_10009f9b
#define str_10009f9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24aU)))
#undef str_10009fb1
#define str_10009fb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x260U)))
#undef str_10009fca
#define str_10009fca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x279U)))
#undef str_10009fe2
#define str_10009fe2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10009fef
#define str_10009fef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29eU)))
#undef str_1000a000
#define str_1000a000 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_1000a014
#define str_1000a014 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
#undef str_1000a024
#define str_1000a024 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d3U)))
#undef str_1000a03b
#define str_1000a03b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_1000a04e
#define str_1000a04e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fdU)))
#undef str_1000a058
#define str_1000a058 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x307U)))
#undef str_1000a06b
#define str_1000a06b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_1000a082
#define str_1000a082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#undef str_1000a08e
#define str_1000a08e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_1000a09a
#define str_1000a09a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x349U)))
#undef str_1000a0a7
#define str_1000a0a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x356U)))
#undef str_1000a0b1
#define str_1000a0b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x360U)))
#undef str_1000a0c5
#define str_1000a0c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_1000a0d4
#define str_1000a0d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x383U)))
#undef str_1000a0e7
#define str_1000a0e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x396U)))
#undef str_1000a0f9
#define str_1000a0f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a8U)))
#undef str_1000a10f
#define str_1000a10f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_1000a119
#define str_1000a119 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c8U)))
#undef str_1000a125
#define str_1000a125 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d4U)))
#undef str_1000a13a
#define str_1000a13a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e9U)))
#undef str_1000a146
#define str_1000a146 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_1000a151
#define str_1000a151 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x400U)))
#undef str_1000a15b
#define str_1000a15b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_1000a170
#define str_1000a170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41fU)))
#undef str_1000a181
#define str_1000a181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_1000a18d
#define str_1000a18d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_1000a199
#define str_1000a199 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x448U)))
#undef str_1000a1a5
#define str_1000a1a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x454U)))
#undef str_1000a1b4
#define str_1000a1b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x463U)))
#undef str_1000a1be
#define str_1000a1be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_1000a1cc
#define str_1000a1cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_1000a1dd
#define str_1000a1dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#undef str_1000a1e9
#define str_1000a1e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_1000a1f5
#define str_1000a1f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a4U)))
#define local_f0 (*(undefined8 *)(frame + 16))
#define local_e8 (*(undefined8 *)(frame + 24))
#define local_e0 (*(ulong *)(frame + 32))
#define local_d8 (*(ulong *)(frame + 40))
#define local_d0 (*(ulong *)(frame + 48))
#define local_c8 (*(uint *)(frame + 56))
#define local_c4 (*(uint *)(frame + 60))
#define local_c0 (*(uint *)(frame + 64))
#define local_bc (*(uint *)(frame + 68))
#define local_b8 (*(uint *)(frame + 72))
#define local_b4 (*(uint *)(frame + 76))
#define local_b0 (*(uint *)(frame + 80))
#define local_ac (*(uint *)(frame + 84))
#define local_a8 (*(uint *)(frame + 88))
#define local_a4 (*(uint *)(frame + 92))
#define local_a0 (*(uint *)(frame + 96))
#define local_9c (*(uint *)(frame + 100))
#define local_98 (*(uint *)(frame + 104))
#define local_94 (*(uint *)(frame + 108))
#define local_90 (*(uint *)(frame + 112))
#define local_8c (*(undefined4 *)(frame + 116))
#define local_88 (*(ulong *)(frame + 120))
#define local_80 (*(uint *)(frame + 128))
#define local_78 (*(int *)(frame + 136))
#define local_74 (*(uint *)(frame + 140))
#define local_70 (*(uint *)(frame + 144))
#define local_6c (*(uint *)(frame + 148))
#define local_68 (*(ulong *)(frame + 152))
#define local_60 (*(uint *)(frame + 160))
#define local_5c (*(uint *)(frame + 164))
#define local_58 (*(uint *)(frame + 168))
#define local_54 (*(undefined4 *)(frame + 172))
#define local_50 (*(undefined8 *)(frame + 176))
#define local_40 (*(int * *)(frame + 192))
#define local_38 (*(uint *)(frame + 200))
#define local_34 (*(uint *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002900
 */

void recovered_10002900(int *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  char *pcVar10;
  ulong uVar11;
  char cVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined8 in_R10;
  undefined7 uVar20;
  int *piVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;

  uVar20 = (undefined7)((ulong)in_R10 >> 8);
  if (param_2 == (undefined1 *)0x0) {
    uVar11 = CONCAT71(uVar20,param_1 == (int *)0x0);
    bVar26 = true;
joined_r0x10002b84:
    if (param_3 != 0) {
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar10 = str_10009e8c;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar8) = cVar12;
          uVar8 = uVar8 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
    }
LAB_10002bcc:
    uVar4 = 0;
    uVar23 = uVar4;
    if (!bVar26) {
LAB_10002e8f:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_10005431;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar4 = uVar1 & 0xffffffc0;
      if (uVar4 == 0x1000) {
        uVar4 = uVar1 - 0x1000;
      }
      else {
        if (uVar4 != 0x1040) goto LAB_10005431;
        uVar4 = uVar1 - 0x1040;
      }
      if (uVar4 == 0xffffffff) goto LAB_10005431;
      if (param_3 == 0) {
        if (uVar4 != 0) goto LAB_10003009;
      }
      else {
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0xffffffffffffffff;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + 1 + uVar8) != '\0');
        if (uVar8 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar13) = 0x76;
          uVar7 = uVar8 + 2;
          if (uVar13 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar13) = 0x69;
            uVar7 = uVar8 + 3;
            if (uVar8 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar13) = 0x72;
              uVar7 = uVar8 + 4;
              if (uVar8 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar13) = 0x74;
                uVar7 = uVar8 + 5;
                if (uVar8 + 5 < 0x3ff) {
                  *(undefined1 *)(uVar8 + 5 + param_3) = 0x69;
                  uVar7 = uVar8 + 6;
                  if (uVar8 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar13) = 0x6f;
                    uVar7 = uVar8 + 7;
                    if (uVar8 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar13) = 0x49;
                      uVar7 = uVar8 + 8;
                      if (uVar8 + 8 < 0x3ff) {
                        *(undefined1 *)(param_3 + 7 + uVar13) = 100;
                        uVar13 = uVar8 + 9;
                        goto LAB_10002fce;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10002fce:
          uVar7 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        if (uVar4 == 0) {
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar13) = 0x30;
          }
        }
        else {
LAB_10003009:
          uVar13 = (ulong)uVar4;
          uVar8 = 0;
          do {
            uVar4 = (uint)uVar13;
            *(byte *)((long)&local_e8 + uVar8) = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
            uVar7 = uVar8 + 1;
            if (8 < uVar8) break;
            uVar13 = uVar13 / 10;
            uVar8 = uVar7;
          } while (9 < uVar4);
          do {
            if (param_3 != 0) {
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) =
                     *(undefined1 *)((long)&local_f0 + uVar7 + 7);
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
            }
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      local_58 = 0;
      lVar22 = 0;
      do {
        *(undefined1 *)((long)&local_e8 + lVar22) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 1) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 2) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 3) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 4) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 5) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 6) = 0;
        *(undefined1 *)((long)&local_e8 + lVar22 + 7) = 0;
        lVar22 = lVar22 + 8;
      } while (lVar22 != 0x70);
      local_54 = uVar23;
      uVar13 = uVar11;
      if (((((param_2[0x12] & 0x10) != 0) && ((char)uVar11 == '\0')) && (*param_1 == 0x54584b57)) &&
         ((0x5f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) {
        uVar13 = uVar11 & 0xffffffff;
        local_40 = param_1;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x17])
                           (*param_2,param_2[1],param_2[2],0x34,1,&local_58);
        param_1 = local_40;
        if (iVar24 != 0) {
          if (local_58 - 0x40 < 0xb0) {
            uVar4 = 0;
            while( true ) {
              local_5c = 0;
              local_60 = 0;
              local_78 = 0;
              local_6c = 0;
              local_74 = 0;
              local_70 = 0;
              if (((*local_40 != 0x54584b57) || ((uint)local_40[2] < 0x60)) ||
                 ((((code *)(ulong)(uint)local_40[0x17] == (code *)0x0 ||
                   (((iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                         (*param_2,param_2[1],param_2[2],local_58 & 0xffff,1,
                                          &local_5c), iVar24 == 0 || (*local_40 != 0x54584b57)) ||
                    ((uint)local_40[2] < 0x60)))) ||
                  (((code *)(ulong)(uint)local_40[0x17] == (code *)0x0 ||
                   (iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                       (*param_2,param_2[1],param_2[2],local_58 + 1 & 0xffff,1,
                                        &local_60), iVar24 == 0)))))) break;
              if ((((local_5c == 9) &&
                   ((((*local_40 == 0x54584b57 && (0x5f < (uint)local_40[2])) &&
                     (((code *)(ulong)(uint)local_40[0x17] != (code *)0x0 &&
                      (((iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                            (*param_2,param_2[1],param_2[2],local_58 + 3 & 0xffff,1,
                                             &local_78), iVar24 != 0 && (*local_40 == 0x54584b57))
                       && (0x5f < (uint)local_40[2])))))) &&
                    (((code *)(ulong)(uint)local_40[0x17] != (code *)0x0 &&
                     (iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                         (*param_2,param_2[1],param_2[2],local_58 + 4 & 0xffff,1,
                                          &local_6c), iVar24 != 0)))))) && (*local_40 == 0x54584b57)
                  ) && (((0x5f < (uint)local_40[2] &&
                         ((code *)(ulong)(uint)local_40[0x17] != (code *)0x0)) &&
                        ((iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                             (*param_2,param_2[1],param_2[2],local_58 + 8 & 0xffff,4
                                              ,&local_74), iVar24 != 0 &&
                         ((((*local_40 == 0x54584b57 && (0x5f < (uint)local_40[2])) &&
                           ((code *)(ulong)(uint)local_40[0x17] != (code *)0x0)) &&
                          (iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                              (*param_2,param_2[1],param_2[2],
                                               local_58 + 0xc & 0xffff,4,&local_70), iVar24 != 0))))
                        )))) {
                local_b4 = local_b4 + 1;
                local_50 = 0;
                if ((((local_78 == 1) && (local_68 = (ulong)local_74, !CARRY4(local_70,local_74)))
                    && ((uVar13 = (ulong)local_6c, local_6c < 6 &&
                        ((local_70 != 0 &&
                         ((uVar13 == 0 ||
                          ((*(uint *)(param_2 + (ulong)(local_6c - 1) * 4 + 0x14) & 7) != 4))))))))
                   && (uVar23 = *(uint *)(param_2 + uVar13 * 4 + 0x14),
                      (uVar23 & 1) == 0 && uVar23 != 0)) {
                  iVar24 = 0;
                  if ((uVar23 & 6) == 4) {
                    if (4 < local_6c) goto LAB_100034fd;
                    iVar24 = *(int *)(param_2 + uVar13 * 4 + 0x18);
                  }
                  if (((local_70 + local_74 != 0) && ((uVar23 & 0xfffffff0) != 0 || iVar24 != 0)) &&
                     (local_38 = 0, *local_40 == 0x54584b57)) {
                    if (((uint)local_40[2] < 0xbc) ||
                       ((code *)(ulong)(uint)local_40[0x2e] == (code *)0x0)) {
                      if ((0x67 < (uint)local_40[2] && iVar24 == 0) &&
                         (((code *)(ulong)(uint)local_40[0x19] != (code *)0x0 &&
                          (iVar24 = (*(code *)(ulong)(uint)local_40[0x19])(uVar23 & 0xfffffff0,0),
                          iVar24 != 0)))) {
                        uVar13 = (ulong)local_38;
                        goto LAB_100034e1;
                      }
                    }
                    else {
                      iVar24 = (*(code *)(ulong)(uint)local_40[0x2e])();
                      if (iVar24 != 0) {
                        uVar13 = local_50;
LAB_100034e1:
                        local_e8 = uVar13 + local_68;
                        local_c8 = local_6c;
                        goto LAB_100035c6;
                      }
                    }
                  }
                }
LAB_100034fd:
                if (((((local_78 == 2) && (local_68 = (ulong)local_74, !CARRY4(local_70,local_74)))
                     && (uVar13 = (ulong)local_6c, local_6c < 6)) &&
                    ((local_70 != 0 &&
                     ((uVar13 == 0 ||
                      ((*(uint *)(param_2 + (ulong)(local_6c - 1) * 4 + 0x14) & 7) != 4)))))) &&
                   (uVar23 = *(uint *)(param_2 + uVar13 * 4 + 0x14),
                   (uVar23 & 1) == 0 && uVar23 != 0)) {
                  iVar24 = 0;
                  if ((uVar23 & 6) == 4) {
                    if (4 < local_6c) goto LAB_1000354c;
                    iVar24 = *(int *)(param_2 + uVar13 * 4 + 0x18);
                  }
                  if ((local_70 + local_74 != 0) && ((uVar23 & 0xfffffff0) != 0 || iVar24 != 0)) {
                    local_50 = 0;
                    local_38 = 0;
                    if (*local_40 == 0x54584b57) {
                      if (((uint)local_40[2] < 0xbc) ||
                         ((code *)(ulong)(uint)local_40[0x2e] == (code *)0x0)) {
                        if ((0x67 < (uint)local_40[2] && iVar24 == 0) &&
                           (((code *)(ulong)(uint)local_40[0x19] != (code *)0x0 &&
                            (iVar24 = (*(code *)(ulong)(uint)local_40[0x19])(uVar23 & 0xfffffff0,0),
                            iVar24 != 0)))) {
                          local_50 = (ulong)local_38;
                          goto LAB_100036bd;
                        }
                      }
                      else {
                        iVar24 = (*(code *)(ulong)(uint)local_40[0x2e])();
                        if (iVar24 != 0) {
LAB_100036bd:
                          local_50 = local_50 + local_68;
                          local_38 = 0;
                          local_e0 = local_50;
                          local_c4 = local_6c;
                          if ((((*local_40 == 0x54584b57) && (0x5f < (uint)local_40[2])) &&
                              ((code *)(ulong)(uint)local_40[0x17] != (code *)0x0)) &&
                             (iVar24 = (*(code *)(ulong)(uint)local_40[0x17])
                                                 (*param_2,param_2[1],param_2[2],
                                                  local_58 + 0x10 & 0xffff,4,&local_38), iVar24 != 0
                             )) {
                            local_b8 = local_38;
                          }
                          goto LAB_100035c6;
                        }
                      }
                    }
                  }
                }
LAB_1000354c:
                if ((local_78 == 3) &&
                   (uVar6 = recovered_10009c00(local_40,(long)param_2,local_6c,local_74,local_70,
                                               &local_50), (int)uVar6 != 0)) {
                  local_d8 = local_50;
                  local_c0 = local_6c;
                }
                else if ((local_78 == 4) &&
                        (uVar6 = recovered_10009c00(local_40,(long)param_2,local_6c,local_74,
                                                    local_70,&local_50), (int)uVar6 != 0)) {
                  local_d0 = local_50;
                  local_bc = local_6c;
                }
              }
LAB_100035c6:
              if ((((local_60 == 0) || (local_60 == local_58)) ||
                  (local_58 = local_60, 0x1e < uVar4)) ||
                 (uVar4 = uVar4 + 1, 0xaf < local_60 - 0x40)) break;
            }
          }
          uVar4 = local_54;
          uVar13 = uVar11 & 0xffffffff;
          param_1 = local_40;
          if (local_e8 != 0) {
            local_50 = local_50 & 0xffffffff00000000;
            if (*local_40 == 0x54584b57) {
              uVar11 = local_e8 + 0x14;
              if (((uint)local_40[2] < 0xc0) || ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)
                 ) {
                if ((uVar11 >> 0x20 == 0) &&
                   ((0x6b < (uint)local_40[2] &&
                    ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                  (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,1);
                }
              }
              else {
                (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,1);
              }
            }
            if (local_e8 != 0) {
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 0x14;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,1,0);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,1,0);
                }
              }
              if ((local_e8 != 0) && (*local_40 == 0x54584b57)) {
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if (((local_e8 >> 0x20 == 0) && (0x6f < (uint)local_40[2])) &&
                     ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(local_e8,4,0);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(local_e8,4,0);
                }
                if (local_e8 != 0) {
                  if (*local_40 == 0x54584b57) {
                    uVar11 = local_e8 + 4;
                    if (((uint)local_40[2] < 0xc0) ||
                       ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                      if ((uVar11 >> 0x20 == 0) &&
                         ((0x6b < (uint)local_40[2] &&
                          ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                        (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,4);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,4);
                    }
                  }
                  if ((local_e8 != 0) && (*local_40 == 0x54584b57)) {
                    if (((uint)local_40[2] < 0xc4) ||
                       ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                      if (((local_e8 >> 0x20 == 0) && (0x6f < (uint)local_40[2])) &&
                         ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)) {
                        (*(code *)(ulong)(uint)local_40[0x1b])(local_e8,4,1);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)local_40[0x30])(local_e8,4,1);
                    }
                    uVar4 = local_54;
                    if ((local_e8 != 0) && (*local_40 == 0x54584b57)) {
                      uVar11 = local_e8 + 4;
                      if (((uint)local_40[2] < 0xc0) ||
                         ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                        if (((uVar11 >> 0x20 == 0) && (0x6b < (uint)local_40[2])) &&
                           ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)) {
                          (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,4);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,4);
                        uVar4 = local_54;
                      }
                    }
                  }
                }
              }
            }
            local_a8 = 0;
            local_a4 = local_ac & 1;
            if (local_e8 == 0) {
LAB_10007cce:
              if (((*local_40 == 0x54584b57) && (0x7b < (uint)local_40[2])) &&
                 ((code *)(ulong)(uint)local_40[0x1e] != (code *)0x0)) {
                (*(code *)(ulong)(uint)local_40[0x1e])();
              }
            }
            else {
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 8;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,4,0);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,4,0);
                }
              }
              if (local_e8 == 0) goto LAB_10007cce;
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 0xc;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,4);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,4);
                }
              }
              if (local_e8 == 0) goto LAB_10007cce;
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 8;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,4,1);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,4,1);
                }
              }
              if (local_e8 == 0) goto LAB_10007cce;
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 0xc;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,4);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,4);
                }
                goto LAB_10007cce;
              }
            }
            if (local_e8 != 0) {
              if (*local_40 == 0x54584b57) {
                uVar11 = local_e8 + 0x14;
                if (((uint)local_40[2] < 0xc4) ||
                   ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6f < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,1,1);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)local_40[0x30])(uVar11,1,1);
                }
              }
              if (local_e8 != 0) {
                if (*local_40 == 0x54584b57) {
                  uVar11 = local_e8 + 0x14;
                  if (((uint)local_40[2] < 0xc4) ||
                     ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)local_40[2] &&
                        ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,1,3);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)local_40[0x30])(uVar11,1,3);
                  }
                }
                if (local_e8 != 0) {
                  if (*local_40 == 0x54584b57) {
                    uVar11 = local_e8 + 0x14;
                    if (((uint)local_40[2] < 0xc4) ||
                       ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                      if ((uVar11 >> 0x20 == 0) &&
                         ((0x6f < (uint)local_40[2] &&
                          ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                        (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,1,0xb);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)local_40[0x30])(uVar11,1,0xb);
                    }
                  }
                  if (local_e8 != 0) {
                    if (*local_40 == 0x54584b57) {
                      uVar11 = local_e8 + 0x14;
                      if (((uint)local_40[2] < 0xc0) ||
                         ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                        if ((uVar11 >> 0x20 == 0) &&
                           ((0x6b < (uint)local_40[2] &&
                            ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,1);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,1);
                      }
                    }
                    if (local_e8 != 0) {
                      if (*local_40 == 0x54584b57) {
                        uVar11 = local_e8 + 0x12;
                        if (((uint)local_40[2] < 0xc0) ||
                           ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                          uVar4 = local_54;
                          if ((uVar11 >> 0x20 == 0) &&
                             ((0x6b < (uint)local_40[2] &&
                              ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                            (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,2);
                          }
                        }
                        else {
                          (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,2);
                          uVar4 = local_54;
                        }
                      }
                      uVar23 = local_54;
                      if (local_e8 != 0) {
                        if (*local_40 == 0x54584b57) {
                          uVar11 = local_e8 + 0x15;
                          if (((uint)local_40[2] < 0xc0) ||
                             ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                            uVar4 = local_54;
                            if ((uVar11 >> 0x20 != 0) ||
                               (((uint)local_40[2] < 0x6c ||
                                ((code *)(ulong)(uint)local_40[0x1a] == (code *)0x0))))
                            goto LAB_10007f72;
                            (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,1);
                          }
                          else {
                            (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,1);
                            uVar23 = local_54;
                          }
                          uVar4 = uVar23;
                        }
LAB_10007f72:
                        if (local_e8 != 0) {
                          if (*local_40 == 0x54584b57) {
                            uVar11 = local_e8 + 0x16;
                            if (((uint)local_40[2] < 0xc4) ||
                               ((code *)(ulong)(uint)local_40[0x30] == (code *)0x0)) {
                              if ((uVar11 >> 0x20 == 0) &&
                                 ((0x6f < (uint)local_40[2] &&
                                  ((code *)(ulong)(uint)local_40[0x1b] != (code *)0x0)))) {
                                (*(code *)(ulong)(uint)local_40[0x1b])(uVar11,2,0);
                              }
                            }
                            else {
                              (*(code *)(ulong)(uint)local_40[0x30])(uVar11,2,0);
                            }
                          }
                          uVar4 = local_54;
                          if (local_e8 != 0) {
                            if (*local_40 == 0x54584b57) {
                              uVar11 = local_e8 + 0x18;
                              if (((uint)local_40[2] < 0xc0) ||
                                 ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                                if ((uVar11 >> 0x20 == 0) &&
                                   ((0x6b < (uint)local_40[2] &&
                                    ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                                  (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,2);
                                }
                              }
                              else {
                                (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,2);
                              }
                            }
                            uVar4 = local_54;
                            if (local_e8 != 0) {
                              if (*local_40 == 0x54584b57) {
                                uVar11 = local_e8 + 0x1c;
                                if (((uint)local_40[2] < 0xc0) ||
                                   ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                                  if ((uVar11 >> 0x20 == 0) &&
                                     ((0x6b < (uint)local_40[2] &&
                                      ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                                    (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,2);
                                  }
                                }
                                else {
                                  (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,2);
                                }
                              }
                              uVar4 = local_54;
                              if ((local_e8 != 0) && (*local_40 == 0x54584b57)) {
                                uVar11 = local_e8 + 0x1e;
                                if (((uint)local_40[2] < 0xc0) ||
                                   ((code *)(ulong)(uint)local_40[0x2f] == (code *)0x0)) {
                                  if (((uVar11 >> 0x20 != 0) || ((uint)local_40[2] < 0x6c)) ||
                                     ((code *)(ulong)(uint)local_40[0x1a] == (code *)0x0))
                                  goto LAB_10008176;
                                  iVar24 = (*(code *)(ulong)(uint)local_40[0x1a])
                                                     (uVar11,2,&local_50);
                                }
                                else {
                                  iVar24 = (*(code *)(ulong)(uint)local_40[0x2f])
                                                     (uVar11,2,&local_50);
                                }
                                uVar4 = local_54;
                                if (iVar24 != 0) {
                                  local_8c = (uint)local_50;
                                  if (local_e0 != 0) {
                                    local_88 = (ulong)local_b8 * (local_50 & 0xffffffff) + local_e0;
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
LAB_10008176:
            if (param_3 == 0) {
              if (local_b4 != 0) goto LAB_10008329;
LAB_100083a5:
              if (local_c8 == 0) goto LAB_100085c1;
            }
            else {
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                cVar12 = 'v';
                pcVar10 = str_10009f2c;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar13) = cVar12;
                  uVar13 = uVar13 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + 1 + uVar13) != '\0');
              if (uVar13 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x6d;
                uVar8 = uVar13 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 0x6f;
                  uVar8 = uVar13 + 3;
                  if (uVar13 + 3 < 0x3ff) {
                    *(undefined1 *)(uVar13 + 3 + param_3) = 100;
                    uVar8 = uVar13 + 4;
                    if (uVar13 + 4 < 0x3ff) {
                      *(undefined1 *)(param_3 + 3 + uVar11) = 0x65;
                      uVar8 = uVar13 + 5;
                      if (uVar13 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar11) = 0x72;
                        uVar8 = uVar13 + 6;
                        if (uVar13 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x6e;
                          uVar11 = uVar13 + 7;
                          goto LAB_1000828c;
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000828c:
                uVar8 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                cVar12 = 'v';
                pcVar10 = str_10009f21;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar13) = cVar12;
                  uVar13 = uVar13 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              if (local_b4 != 0) {
LAB_10008329:
                uVar11 = 0;
                do {
                  *(byte *)((long)&local_50 + uVar11) =
                       (char)local_b4 + (char)(local_b4 / 10) * -10 | 0x30;
                  uVar13 = uVar11 + 1;
                  if (8 < uVar11) break;
                  bVar26 = 9 < local_b4;
                  uVar11 = uVar13;
                  local_b4 = local_b4 / 10;
                } while (bVar26);
LAB_1000836d:
                do {
                  uVar11 = uVar13 - 1;
                  if (param_3 != 0) {
                    uVar8 = 0;
                    do {
                      pcVar10 = (char *)(param_3 + uVar8);
                      uVar8 = uVar8 + 1;
                    } while (*pcVar10 != '\0');
                    if (uVar8 < 0x400) {
                      *(undefined1 *)(param_3 + -1 + uVar8) =
                           *(undefined1 *)((long)&local_54 + uVar13 + 3);
                      *(undefined1 *)(param_3 + uVar8) = 0;
                    }
                    uVar13 = uVar11;
                    if (uVar11 == 0) goto LAB_100083d3;
                    goto LAB_1000836d;
                  }
                  uVar13 = uVar11;
                } while (uVar11 != 0);
                goto LAB_100083a5;
              }
              uVar11 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar10 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
LAB_100083d3:
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                cVar12 = 'v';
                pcVar10 = str_10009f3c;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar13) = cVar12;
                  uVar13 = uVar13 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              if (local_c8 == 0) {
                uVar11 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar10 != '\0');
                if (uVar11 < 0x400) {
                  *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                }
LAB_1000851f:
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar12 = 'v';
                  pcVar10 = str_10009f4c;
                  do {
                    pcVar10 = pcVar10 + 1;
                    *(char *)(param_3 + uVar13) = cVar12;
                    uVar13 = uVar13 + 1;
                    cVar12 = *pcVar10;
                    if (cVar12 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                goto LAB_100085c1;
              }
            }
            uVar11 = 0;
            do {
              *(byte *)((long)&local_50 + uVar11) =
                   (char)local_c8 + (char)(local_c8 / 10) * -10 | 0x30;
              uVar13 = uVar11 + 1;
              if (8 < uVar11) break;
              bVar26 = 9 < local_c8;
              uVar11 = uVar13;
              local_c8 = local_c8 / 10;
            } while (bVar26);
LAB_100084ad:
            do {
              uVar11 = uVar13 - 1;
              if (param_3 != 0) {
                uVar8 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar8);
                  uVar8 = uVar8 + 1;
                } while (*pcVar10 != '\0');
                if (uVar8 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar8) =
                       *(undefined1 *)((long)&local_54 + uVar13 + 3);
                  *(undefined1 *)(param_3 + uVar8) = 0;
                }
                uVar13 = uVar11;
                if (uVar11 == 0) goto LAB_1000851f;
                goto LAB_100084ad;
              }
              uVar13 = uVar11;
            } while (uVar11 != 0);
LAB_100085c1:
            iVar24 = (uint)(local_e8 >> 0x20 != 0) * 8 + 8;
LAB_100085cf:
            do {
              uVar16 = (uint)(local_e8 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
              uVar23 = (uint)(byte)((char)uVar16 + 0x37);
              if (uVar16 < 10) {
                uVar23 = uVar16 + 0x30;
              }
              PF_PART2(local_50, 0) = (ushort)(byte)local_50;
              if (param_3 == 0) goto LAB_100085c7;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                pbVar19 = (byte *)((long)&local_50 + 1);
                do {
                  *(char *)(param_3 + uVar13) = (char)uVar23;
                  uVar13 = uVar13 + 1;
                  uVar23 = (uint)*pbVar19;
                  if (*pbVar19 == 0) break;
                  pbVar19 = pbVar19 + 1;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009f59;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_100086f4:
            iVar24 = 8;
LAB_100086ff:
            uVar23 = local_b0 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_100087ea;
              goto LAB_100086ff;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_100086ff;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009f6f;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_100087ea:
            iVar24 = 8;
LAB_100087f5:
            uVar23 = local_ac >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_100088da;
              goto LAB_100087f5;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_100087f5;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009f85;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_100088da:
            iVar24 = 8;
LAB_100088e5:
            uVar23 = local_a8 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_100089ca;
              goto LAB_100088e5;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_100088e5;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009f9b;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_100089ca:
            iVar24 = 8;
LAB_100089d5:
            uVar23 = local_a4 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10008aba;
              goto LAB_100089d5;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_100089d5;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009fb1;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_10008aba:
            iVar24 = 8;
LAB_10008ac5:
            uVar23 = local_a0 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10008baa;
              goto LAB_10008ac5;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_10008ac5;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009fca;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
LAB_10008baa:
            iVar24 = 8;
LAB_10008bb5:
            uVar23 = local_9c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto code_r0x10008c01;
              goto LAB_10008bb5;
            }
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_10008bb5;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009fe2;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            if (local_98 == 0) {
              uVar11 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar10 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
            }
            else {
LAB_10008caa:
              uVar11 = 0;
              do {
                *(byte *)((long)&local_50 + uVar11) =
                     (char)local_98 + (char)(local_98 / 10) * -10 | 0x30;
                uVar13 = uVar11 + 1;
                if (8 < uVar11) break;
                bVar26 = 9 < local_98;
                uVar11 = uVar13;
                local_98 = local_98 / 10;
              } while (bVar26);
              do {
                while (uVar11 = uVar13 - 1, param_3 == 0) {
                  uVar13 = uVar11;
                  if (uVar11 == 0) goto LAB_10008d25;
                }
                uVar8 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar8);
                  uVar8 = uVar8 + 1;
                } while (*pcVar10 != '\0');
                if (uVar8 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar8) =
                       *(undefined1 *)((long)&local_54 + uVar13 + 3);
                  *(undefined1 *)(param_3 + uVar8) = 0;
                }
                uVar13 = uVar11;
              } while (uVar11 != 0);
            }
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_10009fef;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            if (local_94 == 0) {
              uVar11 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar10 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
            }
            else {
LAB_10008de9:
              uVar11 = 0;
              do {
                *(byte *)((long)&local_50 + uVar11) =
                     (char)local_94 + (char)(local_94 / 10) * -10 | 0x30;
                uVar13 = uVar11 + 1;
                if (8 < uVar11) break;
                bVar26 = 9 < local_94;
                uVar11 = uVar13;
                local_94 = local_94 / 10;
              } while (bVar26);
              do {
                while (uVar11 = uVar13 - 1, param_3 == 0) {
                  uVar13 = uVar11;
                  if (uVar11 == 0) goto LAB_10008e65;
                }
                uVar8 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar8);
                  uVar8 = uVar8 + 1;
                } while (*pcVar10 != '\0');
                if (uVar8 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar8) =
                       *(undefined1 *)((long)&local_54 + uVar13 + 3);
                  *(undefined1 *)(param_3 + uVar8) = 0;
                }
                uVar13 = uVar11;
              } while (uVar11 != 0);
            }
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_1000a000;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            if (local_90 == 0) {
              uVar11 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar10 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
            }
            else {
LAB_10008f36:
              uVar11 = 0;
              do {
                *(byte *)((long)&local_50 + uVar11) =
                     (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
                uVar13 = uVar11 + 1;
                if (8 < uVar11) break;
                bVar26 = 9 < local_90;
                uVar11 = uVar13;
                local_90 = local_90 / 10;
              } while (bVar26);
              do {
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    pcVar10 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar10 != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) =
                         *(undefined1 *)((long)&local_54 + uVar13 + 3);
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (local_88 != 0) {
              if (param_3 == 0) {
LAB_10008ffa:
                if (local_c4 != 0) goto LAB_10009077;
              }
              else {
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar12 = 'v';
                  pcVar10 = str_1000a014;
                  do {
                    pcVar10 = pcVar10 + 1;
                    *(char *)(param_3 + uVar13) = cVar12;
                    uVar13 = uVar13 + 1;
                    cVar12 = *pcVar10;
                    if (cVar12 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                if (local_c4 == 0) {
                  uVar11 = 0;
                  do {
                    pcVar10 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar10 != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                  }
                }
                else {
LAB_10009077:
                  uVar11 = 0;
                  do {
                    *(byte *)((long)&local_50 + uVar11) =
                         (char)local_c4 + (char)(local_c4 / 10) * -10 | 0x30;
                    uVar13 = uVar11 + 1;
                    if (8 < uVar11) break;
                    bVar26 = 9 < local_c4;
                    uVar11 = uVar13;
                    local_c4 = local_c4 / 10;
                  } while (bVar26);
                  do {
                    while (uVar11 = uVar13 - 1, param_3 == 0) {
                      uVar13 = uVar11;
                      if (uVar11 == 0) goto LAB_100091a9;
                    }
                    uVar8 = 0;
                    do {
                      pcVar10 = (char *)(param_3 + uVar8);
                      uVar8 = uVar8 + 1;
                    } while (*pcVar10 != '\0');
                    if (uVar8 < 0x400) {
                      *(undefined1 *)(param_3 + -1 + uVar8) =
                           *(undefined1 *)((long)&local_54 + uVar13 + 3);
                      *(undefined1 *)(param_3 + uVar8) = 0;
                    }
                    uVar13 = uVar11;
                  } while (uVar11 != 0);
                }
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar12 = 'v';
                  pcVar10 = str_1000a024;
                  do {
                    pcVar10 = pcVar10 + 1;
                    *(char *)(param_3 + uVar13) = cVar12;
                    uVar13 = uVar13 + 1;
                    cVar12 = *pcVar10;
                    if (cVar12 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
LAB_100091a9:
              iVar24 = 8;
LAB_100091b4:
              do {
                uVar23 = local_b8 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar23;
                cVar9 = cVar12 + '7';
                if (uVar23 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_100091fd;
                uVar11 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar10 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar9;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                cVar12 = 'v';
                pcVar10 = str_1000a03b;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar13) = cVar12;
                  uVar13 = uVar13 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
LAB_100092bc:
              iVar24 = (uint)(local_88 >> 0x20 != 0) * 8 + 8;
              do {
                uVar16 = (uint)(local_88 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar23 = (uint)(byte)((char)uVar16 + 0x37);
                if (uVar16 < 10) {
                  uVar23 = uVar16 + 0x30;
                }
                PF_PART2(local_50, 0) = (ushort)(byte)local_50;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar13 = uVar11;
                    uVar11 = uVar13 + 1;
                  } while (*(char *)(param_3 + uVar13) != '\0');
                  if (uVar13 + 1 < 0x400) {
                    pbVar19 = (byte *)((long)&local_50 + 1);
                    do {
                      *(char *)(param_3 + uVar13) = (char)uVar23;
                      uVar13 = uVar13 + 1;
                      uVar23 = (uint)*pbVar19;
                      if (*pbVar19 == 0) break;
                      pbVar19 = pbVar19 + 1;
                    } while (uVar13 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
            }
            if (local_d8 != 0) {
              iVar24 = (uint)(local_d8 >> 0x20 != 0) * 8 + 8;
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar12 = 'v';
                  pcVar10 = str_1000a04e;
                  do {
                    pcVar10 = pcVar10 + 1;
                    *(char *)(param_3 + uVar13) = cVar12;
                    uVar13 = uVar13 + 1;
                    cVar12 = *pcVar10;
                    if (cVar12 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
LAB_10009403:
              do {
                uVar16 = (uint)(local_d8 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar23 = (uint)(byte)((char)uVar16 + 0x37);
                if (uVar16 < 10) {
                  uVar23 = uVar16 + 0x30;
                }
                PF_PART2(local_50, 0) = (ushort)(byte)local_50;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar13 = uVar11;
                    uVar11 = uVar13 + 1;
                  } while (*(char *)(param_3 + uVar13) != '\0');
                  if (uVar13 + 1 < 0x400) {
                    pbVar19 = (byte *)((long)&local_50 + 1);
                    do {
                      *(char *)(param_3 + uVar13) = (char)uVar23;
                      uVar13 = uVar13 + 1;
                      uVar23 = (uint)*pbVar19;
                      if (*pbVar19 == 0) break;
                      pbVar19 = pbVar19 + 1;
                    } while (uVar13 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
            }
            if (local_d0 != 0) {
              iVar24 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar12 = 'v';
                  pcVar10 = str_1000a058;
                  do {
                    pcVar10 = pcVar10 + 1;
                    *(char *)(param_3 + uVar13) = cVar12;
                    uVar13 = uVar13 + 1;
                    cVar12 = *pcVar10;
                    if (cVar12 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar11 = 0;
                do {
                  uVar13 = uVar11;
                  uVar11 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar13 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
LAB_10009540:
              do {
                uVar16 = (uint)(local_d0 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar23 = (uint)(byte)((char)uVar16 + 0x37);
                if (uVar16 < 10) {
                  uVar23 = uVar16 + 0x30;
                }
                PF_PART2(local_50, 0) = (ushort)(byte)local_50;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar13 = uVar11;
                    uVar11 = uVar13 + 1;
                  } while (*(char *)(param_3 + uVar13) != '\0');
                  if (uVar13 + 1 < 0x400) {
                    pbVar19 = (byte *)((long)&local_50 + 1);
                    do {
                      *(char *)(param_3 + uVar13) = (char)uVar23;
                      uVar13 = uVar13 + 1;
                      uVar23 = (uint)*pbVar19;
                      if (*pbVar19 == 0) break;
                      pbVar19 = pbVar19 + 1;
                    } while (uVar13 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
            }
            local_54 = uVar4;
            if (param_3 == 0) goto LAB_100097c1;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar10 = str_1000a06b;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            if (local_80 != 0) goto LAB_100097c9;
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
            }
LAB_10009683:
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            pcVar10 = str_1000a08e;
            if ((local_9c & 8) == 0) {
              pcVar10 = str_1000a09a;
            }
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar13 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar14 = str_1000a082;
              do {
                pcVar14 = pcVar14 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar14;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar13 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            if ((uVar13 + 1 < 0x400) && (cVar12 = *pcVar10, cVar12 != '\0')) {
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar13) = cVar12;
                uVar13 = uVar13 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar13 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            goto LAB_10009855;
          }
        }
      }
      if (local_b4 != 0) {
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            uVar8 = uVar11;
            uVar11 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar8 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar11 = 0;
          do {
            uVar8 = uVar11;
            uVar11 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar10 = str_10009f21;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar11 = 0;
          do {
            uVar8 = uVar11;
            uVar11 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar8 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
        }
        uVar11 = 0;
        uVar4 = local_b4;
        do {
          *(byte *)((long)&local_50 + uVar11) = (byte)(uVar4 % 10) | 0x30;
          uVar8 = uVar11 + 1;
          if (8 < uVar11) break;
          bVar26 = 9 < uVar4;
          uVar11 = uVar8;
          uVar4 = uVar4 / 10;
        } while (bVar26);
        do {
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = *(undefined1 *)((long)&local_54 + uVar8 + 3);
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (*(ushort *)(param_2 + 6) < 0x1040) {
        bVar26 = true;
        uVar11 = 0;
        local_34 = (uint)uVar13;
        local_40 = param_1;
LAB_1000400a:
        local_50 = local_50 & 0xffffffff00000000;
        local_38 = 0;
        if ((((*(uint *)(param_2 + uVar11 * 4 + 0x14) & 1) == 0) || ((char)uVar13 != '\0')) ||
           ((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)))) goto LAB_10003ff0;
        if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10003ff0;
        uVar16 = *(uint *)(param_2 + uVar11 * 4 + 0x14) & 0xfffffffc;
        uVar4 = uVar16 + 0x12;
        local_68 = CONCAT71(PF_PART7(local_68, 1),bVar26);
        iVar24 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar4,1,&local_50);
        piVar21 = local_40;
        uVar13 = (ulong)local_34;
        bVar3 = (byte)local_68;
        uVar8 = local_68 & 0xff;
        param_1 = local_40;
        if (iVar24 == 0) goto LAB_10003ff0;
        if (param_3 == 0) {
          if (uVar11 == 0) goto LAB_100064a4;
          goto LAB_10005f26;
        }
        uVar13 = 0;
        do {
          uVar7 = uVar13;
          uVar13 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
          uVar7 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar7 = uVar13;
          uVar13 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar10 = str_10009f2c;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar7) = cVar12;
            uVar7 = uVar7 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar7 = uVar13;
          uVar13 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
          uVar7 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar7 = uVar13;
          uVar13 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = 'l';
          pcVar10 = str_1000a0a7;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar7) = cVar12;
            uVar7 = uVar7 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar7 = uVar13;
          uVar13 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000a0b1;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar7) = cVar12;
            uVar7 = uVar7 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        if (uVar11 == 0) {
          uVar11 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar10 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
LAB_10006422:
          uVar11 = 0;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + uVar13) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar13 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
          uVar11 = 0;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + uVar13) != '\0');
          if (uVar13 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar10 = str_1000a0c5;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar13) = cVar12;
              uVar13 = uVar13 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar13 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
          uVar11 = 0;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + uVar13) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar13 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
        }
        else {
LAB_10005f26:
          uVar13 = 0;
          do {
            uVar23 = (uint)uVar11;
            uVar15 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e8 + uVar13) = (char)uVar11 + (char)uVar15 * -10 | 0x30;
            uVar7 = uVar13 + 1;
            if (8 < uVar13) break;
            uVar13 = uVar7;
            uVar11 = uVar15;
          } while (9 < uVar23);
          do {
            while (uVar11 = uVar7 - 1, param_3 != 0) {
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) =
                     *(undefined1 *)((long)&local_f0 + uVar7 + 7);
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
              uVar7 = uVar11;
              if (uVar11 == 0) goto LAB_10006422;
            }
            uVar7 = uVar11;
          } while (uVar11 != 0);
        }
LAB_100064a4:
        uVar23 = local_54;
        uVar4 = uVar4 & 0xffff;
        iVar24 = 8;
LAB_100064af:
        uVar18 = uVar16 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar18;
        cVar9 = cVar12 + '7';
        if (uVar18 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 == 0) {
          iVar24 = iVar24 + -1;
          if (iVar24 == 0) goto LAB_10006594;
          goto LAB_100064af;
        }
        uVar11 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar10 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar9;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar24 = iVar24 + -1;
        if (iVar24 != 0) goto LAB_100064af;
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar13 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar10 = str_1000a0d4;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar13) = cVar12;
            uVar13 = uVar13 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar13 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
LAB_10006594:
        iVar24 = 8;
        do {
          uVar16 = (uint)local_50 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar16;
          cVar9 = cVar12 + '7';
          if (uVar16 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        if (*piVar21 == 0x54584b57) {
          uVar16 = piVar21[2];
          if (uVar16 < 0x5c) {
LAB_10006603:
            if (uVar16 < 0x58) goto LAB_10007a56;
          }
          else if ((code *)(ulong)(uint)piVar21[0x16] != (code *)0x0) {
            (*(code *)(ulong)(uint)piVar21[0x16])(uVar4,1,0);
            uVar8 = (ulong)(uint)bVar3;
            if (*local_40 != 0x54584b57) goto LAB_10007a56;
            uVar16 = local_40[2];
            piVar21 = local_40;
            if (0x5b < uVar16) {
              if ((code *)(ulong)(uint)local_40[0x16] == (code *)0x0) goto LAB_10006675;
              (*(code *)(ulong)(uint)local_40[0x16])(uVar4,1,3);
              uVar8 = (ulong)(uint)bVar3;
              if (*local_40 != 0x54584b57) goto LAB_10007a56;
              uVar16 = local_40[2];
              piVar21 = local_40;
            }
            goto LAB_10006603;
          }
LAB_10006675:
          if (((code *)(ulong)(uint)piVar21[0x15] != (code *)0x0) &&
             (iVar24 = (*(code *)(ulong)(uint)piVar21[0x15])(uVar4,1,&local_38), iVar24 != 0)) {
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar13 + 1 < 0x400) {
                cVar12 = 'v';
                pcVar10 = str_1000a0e7;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar13) = cVar12;
                  uVar13 = uVar13 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar13 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar11 = 0;
              do {
                uVar13 = uVar11;
                uVar11 = uVar13 + 1;
              } while (*(char *)(param_3 + uVar13) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar13 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar13) = 0;
              uVar8 = local_68 & 0xff;
              uVar23 = local_54;
            }
            iVar24 = 8;
            do {
              uVar4 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar4;
              cVar9 = cVar12 + '7';
              if (uVar4 < 10) {
                cVar9 = cVar12 + '0';
              }
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar10 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar9;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
              }
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
        }
LAB_10007a56:
        if (param_3 != 0 && (uVar8 & 1) == 0) goto LAB_10003f7f;
        uVar23 = (uint)uVar8 & 1 | uVar23;
        goto LAB_10005431;
      }
LAB_10003f76:
      uVar23 = local_54;
      if (param_3 != 0) {
LAB_10003f7f:
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_10009f05;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar13) = cVar12;
            uVar13 = uVar13 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
      }
      goto LAB_10005431;
    }
  }
  else {
    iVar24 = -1;
    if (*(short *)(param_2 + 4) == 0x1af4) {
      uVar1 = *(ushort *)(param_2 + 6);
      uVar4 = uVar1 & 0xffffffc0;
      if (uVar4 == 0x1000) {
        iVar24 = uVar1 - 0x1000;
      }
      else {
        iVar24 = uVar1 - 0x1040;
        if (uVar4 != 0x1040) {
          iVar24 = -1;
        }
      }
    }
    bVar26 = iVar24 == -1;
    local_e8 = local_e8 & 0xffffffff00000000;
    local_50 = local_50 & 0xffffffff00000000;
    if (param_1 == (int *)0x0) {
      uVar11 = CONCAT71(uVar20,1);
      goto joined_r0x10002b84;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar11 = 0;
      goto joined_r0x10002b84;
    }
    if (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0) &&
       (iVar5 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_e8),
       iVar5 != 0)) {
      uVar4 = 1;
      if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
        uVar4 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
      }
      uVar23 = uVar4 | 2;
      if (*(uint *)(param_2 + 0x18) == 0) {
        uVar23 = uVar4;
      }
      if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
        uVar23 = uVar4 | 1;
      }
      uVar4 = uVar23 | 2;
      if (*(uint *)(param_2 + 0x1c) == 0) {
        uVar4 = uVar23;
      }
      if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
        uVar4 = uVar23 | 1;
      }
      uVar23 = uVar4 | 2;
      if (*(uint *)(param_2 + 0x20) == 0) {
        uVar23 = uVar4;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        uVar23 = uVar4 | 1;
      }
      uVar4 = uVar23 | 2;
      if (*(uint *)(param_2 + 0x24) == 0) {
        uVar4 = uVar23;
      }
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        uVar4 = uVar23 | 1;
      }
      uVar23 = uVar4 | 2;
      if (*(uint *)(param_2 + 0x28) == 0) {
        uVar23 = uVar4;
      }
      if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
        uVar23 = uVar4 | 1;
      }
      uVar4 = uVar23 | 4;
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        uVar4 = uVar23 | 6;
      }
      local_50 = CONCAT44(PF_PART4(local_50, 4),(uint)local_e8 | uVar4);
      if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x18] != (code *)0x0)) {
        local_34 = uVar4;
        iVar5 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2);
        uVar11 = (ulong)local_34;
        if (iVar5 != 0) {
          if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_50);
            uVar11 = (ulong)local_34;
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar12 = 'p';
              pcVar10 = str_10009ed5;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar8) = cVar12;
                uVar8 = uVar8 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
          }
          iVar5 = 8;
LAB_100048c8:
          do {
            uVar4 = (uint)local_e8 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar4;
            cVar9 = cVar12 + '7';
            if (uVar4 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_1000491d;
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(char *)(param_3 + -1 + uVar13) = cVar9;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar10 = str_10009ee6;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_100049b4:
          iVar5 = 8;
LAB_100049bf:
          uVar4 = (uint)local_50 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar4;
          cVar9 = cVar12 + '7';
          if (uVar4 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_10004a9e;
            goto LAB_100049bf;
          }
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(char *)(param_3 + -1 + uVar13) = cVar9;
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
          iVar5 = iVar5 + -1;
          if (iVar5 != 0) goto LAB_100049bf;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar10 = str_10009ef6;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10004a9e:
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 0x1c) | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 0x18) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)((uint)uVar11 >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)(uVar11 >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(byte *)(param_3 + -1 + uVar13) = (byte)uVar11 & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          uVar4 = (uint)(((uint)uVar11 & ~(uint)local_50) == 0);
          goto joined_r0x10004c1b;
        }
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_10009ebc;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar13) = cVar12;
            uVar13 = uVar13 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        goto LAB_10002e78;
      }
LAB_1000308d:
      uVar11 = 0;
      goto LAB_10002bcc;
    }
    if (param_3 == 0) goto LAB_1000308d;
    uVar11 = 0;
    do {
      uVar13 = uVar11;
      uVar11 = uVar13 + 1;
    } while (*(char *)(param_3 + uVar13) != '\0');
    if (uVar13 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_10009ea4;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar13) = cVar12;
        uVar13 = uVar13 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
LAB_10002e78:
    uVar4 = 0;
    *(undefined1 *)(param_3 + uVar13) = 0;
joined_r0x10004c1b:
    uVar11 = 0;
    uVar23 = uVar4;
    if (iVar24 != -1) goto LAB_10002e8f;
  }
  local_38 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  if (param_2 == (undefined1 *)0x0) {
    uVar23 = 1;
    if (uVar4 == 0) {
      uVar23 = 0;
    }
    goto LAB_10005431;
  }
  local_34 = (uint)uVar11;
  if ((param_2[8] == '\x01') && (param_2[9] == '\x06')) {
    if (((*(uint *)(param_2 + 0x24) & 7) != 4) &&
       ((((uVar23 = *(uint *)(param_2 + 0x28), (uVar23 & 6) != 4 && (uVar23 != 0)) &&
         ((uVar23 & 1) == 0)) && (uVar23 = uVar23 & 0xfffffff0, uVar23 != 0)))) {
      local_e8 = 0;
      local_50 = local_50 & 0xffffffff00000000;
      if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
        if (0xbb < (uint)param_1[2]) {
          if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_10004284;
          iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar23,0,0x1000);
          uVar11 = (ulong)local_34;
          if (iVar24 == 0) goto LAB_10002c1f;
LAB_100042ba:
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
            uVar13 = 0xffffffffffffffff;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + 1 + uVar8) != '\0');
            if (uVar8 + 2 < 0x400) {
              *(undefined1 *)(param_3 + uVar13) = 0x61;
              uVar7 = uVar8 + 2;
              if (uVar13 != 0x3fe) {
                *(undefined1 *)(param_3 + 1 + uVar13) = 0x68;
                uVar7 = uVar8 + 3;
                if (uVar8 + 3 < 0x3ff) {
                  *(undefined1 *)(param_3 + 2 + uVar13) = 99;
                  uVar7 = uVar8 + 4;
                  if (uVar8 + 4 < 0x3ff) {
                    *(undefined1 *)(param_3 + 3 + uVar13) = 0x69;
                    uVar7 = uVar8 + 5;
                    if (uVar8 + 5 < 0x3ff) {
                      *(undefined1 *)(uVar8 + 5 + param_3) = 0x4d;
                      uVar7 = uVar8 + 6;
                      if (uVar8 + 6 < 0x3ff) {
                        *(undefined1 *)(param_3 + 5 + uVar13) = 0x6d;
                        uVar7 = uVar8 + 7;
                        if (uVar8 + 7 < 0x3ff) {
                          *(undefined1 *)(param_3 + 6 + uVar13) = 0x69;
                          uVar7 = uVar8 + 8;
                          if (uVar8 + 8 < 0x3ff) {
                            *(undefined1 *)(param_3 + 7 + uVar13) = 0x6f;
                            uVar13 = uVar8 + 9;
                            goto LAB_100060f9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_100060f9:
              uVar7 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar7) = 0;
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
          }
          iVar24 = (uint)(local_e8 >> 0x20 != 0) * 8 + 8;
          do {
            uVar16 = (uint)(local_e8 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
            uVar23 = (uint)(byte)((char)uVar16 + 0x37);
            if (uVar16 < 10) {
              uVar23 = uVar16 + 0x30;
            }
            PF_PART2(local_50, 0) = (ushort)(byte)local_50;
            if (param_3 != 0) {
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                pbVar19 = (byte *)((long)&local_50 + 1);
                do {
                  *(char *)(param_3 + uVar8) = (char)uVar23;
                  uVar8 = uVar8 + 1;
                  uVar23 = (uint)*pbVar19;
                  if (*pbVar19 == 0) break;
                  pbVar19 = pbVar19 + 1;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
            }
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
          if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((local_e8 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                 ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006768;
              (*(code *)(ulong)(uint)param_1[0x1a])(local_e8,4,&local_38);
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(local_e8,4,&local_38);
            }
            uVar11 = (ulong)local_34;
          }
LAB_10006768:
          if (local_e8 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar13 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                   )) goto LAB_100067d8;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
              }
              uVar11 = (ulong)local_34;
            }
LAB_100067d8:
            if (local_e8 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar13 = local_e8 + 0xc;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar13 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x6c ||
                      ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10006d45;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_5c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_5c);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10006d45:
              if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
                uVar13 = local_e8 + 0x10;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007293;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_60);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_60);
                }
                uVar11 = (ulong)local_34;
              }
            }
          }
LAB_10007293:
          if ((-1 < (int)local_58) && (local_e8 != 0)) {
            if (*param_1 == 0x54584b57) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0))
              {
                if ((uVar13 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))
                   )) goto LAB_1000730c;
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar13,4,local_58 | 0x80000000);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x30])(uVar13,4);
              }
              uVar11 = (ulong)local_34;
            }
LAB_1000730c:
            if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007378;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
              }
              uVar11 = (ulong)local_34;
            }
          }
LAB_10007378:
          if (param_3 == 0) goto LAB_1000745a;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0xffffffffffffffff;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + 1 + uVar8) != '\0');
          if (uVar8 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar13) = 0x61;
            uVar7 = uVar8 + 2;
            if (uVar13 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar13) = 0x68;
              uVar7 = uVar8 + 3;
              if (uVar8 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar13) = 99;
                uVar7 = uVar8 + 4;
                if (uVar8 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar8 + 4 + param_3) = 0x69;
                  uVar7 = uVar8 + 5;
                  if (uVar8 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar13) = 0x43;
                    uVar7 = uVar8 + 6;
                    if (uVar8 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar13) = 0x61;
                      uVar7 = uVar8 + 7;
                      if (uVar8 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar13) = 0x70;
                        uVar13 = uVar8 + 8;
                        goto LAB_10007431;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_10007431:
            uVar7 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar7) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_1000745a:
          iVar24 = 8;
LAB_10007468:
          do {
            uVar23 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_100074bd;
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(char *)(param_3 + -1 + uVar13) = cVar9;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0xffffffffffffffff;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + 1 + uVar8) != '\0');
          if (uVar8 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar13) = 0x61;
            uVar7 = uVar8 + 2;
            if (uVar13 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar13) = 0x68;
              uVar7 = uVar8 + 3;
              if (uVar8 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar13) = 99;
                uVar7 = uVar8 + 4;
                if (uVar8 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar8 + 4 + param_3) = 0x69;
                  uVar7 = uVar8 + 5;
                  if (uVar8 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar13) = 0x47;
                    uVar7 = uVar8 + 6;
                    if (uVar8 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar13) = 0x68;
                      uVar7 = uVar8 + 7;
                      if (uVar8 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar13) = 99;
                        uVar13 = uVar8 + 8;
                        goto LAB_1000757e;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000757e:
            uVar7 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar7) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_100075a8:
          iVar24 = 8;
LAB_100075b3:
          uVar23 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar23;
          cVar9 = cVar12 + '7';
          if (uVar23 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar24 = iVar24 + -1;
            if (iVar24 == 0) goto LAB_10007694;
            goto LAB_100075b3;
          }
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(char *)(param_3 + -1 + uVar13) = cVar9;
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
          iVar24 = iVar24 + -1;
          if (iVar24 != 0) goto LAB_100075b3;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar10 = str_1000a10f;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10007694:
          iVar24 = 8;
LAB_1000769f:
          uVar23 = local_5c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar23;
          cVar9 = cVar12 + '7';
          if (uVar23 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar24 = iVar24 + -1;
            if (iVar24 == 0) goto LAB_10007784;
            goto LAB_1000769f;
          }
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(char *)(param_3 + -1 + uVar13) = cVar9;
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
          iVar24 = iVar24 + -1;
          if (iVar24 != 0) goto LAB_1000769f;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar10 = str_1000a119;
            do {
              pcVar10 = pcVar10 + 1;
              *(char *)(param_3 + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
              cVar12 = *pcVar10;
              if (cVar12 == '\0') break;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10007784:
          iVar24 = 8;
          uVar23 = 1;
          do {
            uVar16 = local_60 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar16;
            cVar9 = cVar12 + '7';
            if (uVar16 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 != 0) {
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(char *)(param_3 + -1 + uVar13) = cVar9;
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
            }
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
          goto LAB_10002c90;
        }
        if (0x67 < (uint)param_1[2]) {
LAB_10004284:
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar23,0,0x1000);
            uVar11 = (ulong)local_34;
            if (iVar24 != 0) {
              local_e8 = local_50 & 0xffffffff;
              goto LAB_100042ba;
            }
          }
        }
      }
    }
LAB_10002c1f:
    if (param_3 == 0) goto LAB_10002c7f;
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000a0f9;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar8) = cVar12;
        uVar8 = uVar8 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar8) = 0;
    uVar23 = 0;
  }
  else {
LAB_10002c7f:
    uVar23 = 0;
  }
LAB_10002c90:
  local_38 = 0;
  local_58 = 0;
  local_5c = 0;
  if ((param_2[8] == '\x04') && (param_2[9] == '\x03')) {
    uVar16 = *(uint *)(param_2 + 0x14);
    if ((uVar16 & 1) == 0 && uVar16 != 0) {
      iVar24 = 0;
      if ((uVar16 & 6) == 4) {
        iVar24 = *(int *)(param_2 + 0x18);
      }
      uVar16 = uVar16 & 0xfffffff0;
      if (uVar16 != 0 || iVar24 != 0) {
        local_e8 = 0;
        local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
        if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)param_1[2] && iVar24 == 0) &&
               ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
              iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar16,0,0x1000);
              uVar11 = (ulong)local_34;
              if (iVar24 != 0) {
                local_e8 = local_50 & 0xffffffff;
                goto LAB_10003780;
              }
            }
          }
          else {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000);
            uVar11 = (ulong)local_34;
            if (iVar24 != 0) {
LAB_10003780:
              if (param_3 != 0) {
                uVar13 = 0;
                do {
                  uVar8 = uVar13;
                  uVar13 = uVar8 + 1;
                } while (*(char *)(param_3 + uVar8) != '\0');
                if (uVar13 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                  uVar8 = uVar13;
                }
                *(undefined1 *)(param_3 + uVar8) = 0;
                uVar13 = 0xffffffffffffffff;
                do {
                  uVar8 = uVar13;
                  uVar13 = uVar8 + 1;
                } while (*(char *)(param_3 + 1 + uVar8) != '\0');
                if (uVar8 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar13) = 0x68;
                  uVar7 = uVar8 + 2;
                  if (uVar13 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar13) = 100;
                    uVar7 = uVar8 + 3;
                    if (uVar8 + 3 < 0x3ff) {
                      *(undefined1 *)(param_3 + 2 + uVar13) = 0x61;
                      uVar7 = uVar8 + 4;
                      if (uVar8 + 4 < 0x3ff) {
                        *(undefined1 *)(uVar8 + 4 + param_3) = 0x4d;
                        uVar7 = uVar8 + 5;
                        if (uVar8 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar13) = 0x6d;
                          uVar7 = uVar8 + 6;
                          if (uVar8 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar13) = 0x69;
                            uVar7 = uVar8 + 7;
                            if (uVar8 + 7 < 0x3ff) {
                              *(undefined1 *)(param_3 + 6 + uVar13) = 0x6f;
                              uVar13 = uVar8 + 8;
                              goto LAB_10005b73;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10005b73:
                  uVar7 = uVar13;
                }
                *(undefined1 *)(param_3 + uVar7) = 0;
                uVar13 = 0;
                do {
                  uVar8 = uVar13;
                  uVar13 = uVar8 + 1;
                } while (*(char *)(param_3 + uVar8) != '\0');
                if (uVar13 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                  uVar8 = uVar13;
                }
                *(undefined1 *)(param_3 + uVar8) = 0;
              }
              iVar24 = (uint)(local_e8 >> 0x20 != 0) * 8 + 8;
              do {
                uVar18 = (uint)(local_e8 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar16 = (uint)(byte)((char)uVar18 + 0x37);
                if (uVar18 < 10) {
                  uVar16 = uVar18 + 0x30;
                }
                PF_PART2(local_50, 0) = (ushort)(byte)local_50;
                if (param_3 != 0) {
                  uVar13 = 0;
                  do {
                    uVar8 = uVar13;
                    uVar13 = uVar8 + 1;
                  } while (*(char *)(param_3 + uVar8) != '\0');
                  if (uVar8 + 1 < 0x400) {
                    pbVar19 = (byte *)((long)&local_50 + 1);
                    do {
                      *(char *)(param_3 + uVar8) = (char)uVar16;
                      uVar8 = uVar8 + 1;
                      uVar16 = (uint)*pbVar19;
                      if (*pbVar19 == 0) break;
                      pbVar19 = pbVar19 + 1;
                    } while (uVar8 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar8) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((local_e8 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006232;
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e8,4,&local_38);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(local_e8,4,&local_38);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10006232:
              if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
                uVar13 = local_e8 + 8;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006329;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10006329:
              if (((local_58 & 1) == 0) && (local_e8 != 0)) {
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x70 ||
                        ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_10006c4f;
                    (*(code *)(ulong)(uint)param_1[0x1b])(uVar13,4,local_58 | 1);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar13,4);
                  }
                  uVar11 = (ulong)local_34;
                }
LAB_10006c4f:
                if (local_e8 == 0) goto LAB_10006e89;
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10006e89;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
                  }
                  uVar11 = (ulong)local_34;
                  goto LAB_10006e89;
                }
              }
              else {
LAB_10006e89:
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 0xe;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10006ef0;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,2,&local_5c);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,2,&local_5c);
                  }
                  uVar11 = (ulong)local_34;
                }
              }
LAB_10006ef0:
              if (param_3 == 0) goto LAB_10006fd2;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0xffffffffffffffff;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + 1 + uVar8) != '\0');
              if (uVar8 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar13) = 0x68;
                uVar7 = uVar8 + 2;
                if (uVar13 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar13) = 100;
                  uVar7 = uVar8 + 3;
                  if (uVar8 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar13) = 0x61;
                    uVar7 = uVar8 + 4;
                    if (uVar8 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar8 + 4 + param_3) = 0x47;
                      uVar7 = uVar8 + 5;
                      if (uVar8 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar13) = 99;
                        uVar7 = uVar8 + 6;
                        if (uVar8 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar13) = 0x61;
                          uVar7 = uVar8 + 7;
                          if (uVar8 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar13) = 0x70;
                            uVar13 = uVar8 + 8;
                            goto LAB_10006fa9;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_10006fa9:
                uVar7 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar7) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10006fd2:
              iVar24 = 8;
LAB_10006fe0:
              do {
                uVar16 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar16;
                cVar9 = cVar12 + '7';
                if (uVar16 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000702d;
                uVar13 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar13);
                  uVar13 = uVar13 + 1;
                } while (*pcVar10 != '\0');
                if (uVar13 < 0x400) {
                  *(char *)(param_3 + -1 + uVar13) = cVar9;
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0xffffffffffffffff;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + 1 + uVar8) != '\0');
              if (uVar8 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar13) = 0x68;
                uVar7 = uVar8 + 2;
                if (uVar13 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar13) = 100;
                  uVar7 = uVar8 + 3;
                  if (uVar8 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar13) = 0x61;
                    uVar7 = uVar8 + 4;
                    if (uVar8 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar8 + 4 + param_3) = 0x47;
                      uVar7 = uVar8 + 5;
                      if (uVar8 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar13) = 99;
                        uVar7 = uVar8 + 6;
                        if (uVar8 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar13) = 0x74;
                          uVar7 = uVar8 + 7;
                          if (uVar8 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar13) = 0x6c;
                            uVar13 = uVar8 + 8;
                            goto LAB_100070ee;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_100070ee:
                uVar7 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar7) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10007118:
              iVar24 = 8;
LAB_10007123:
              uVar16 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar16;
              cVar9 = cVar12 + '7';
              if (uVar16 < 10) {
                cVar9 = cVar12 + '0';
              }
              if (param_3 == 0) {
                iVar24 = iVar24 + -1;
                if (iVar24 == 0) goto LAB_10007204;
                goto LAB_10007123;
              }
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(char *)(param_3 + -1 + uVar13) = cVar9;
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
              iVar24 = iVar24 + -1;
              if (iVar24 != 0) goto LAB_10007123;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar12 = 'h';
                pcVar10 = str_1000a13a;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar8) = cVar12;
                  uVar8 = uVar8 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10007204:
              iVar24 = 8;
              do {
                uVar16 = local_5c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar16;
                cVar9 = cVar12 + '7';
                if (uVar16 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 != 0) {
                  uVar13 = 0;
                  do {
                    pcVar10 = (char *)(param_3 + uVar13);
                    uVar13 = uVar13 + 1;
                  } while (*pcVar10 != '\0');
                  if (uVar13 < 0x400) {
                    *(char *)(param_3 + -1 + uVar13) = cVar9;
                    *(undefined1 *)(param_3 + uVar13) = 0;
                  }
                }
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              uVar16 = 1;
              goto LAB_100037fe;
            }
          }
        }
      }
    }
    if (param_3 != 0) {
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar10 = str_1000a125;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar8) = cVar12;
          uVar8 = uVar8 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar16 = 0;
LAB_100037fe:
      uVar23 = uVar23 | uVar16;
    }
  }
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  local_5c = 0;
  local_54 = uVar4;
  if (param_2[8] == '\f') {
    if (param_2[9] == '\x03') {
      uVar16 = *(uint *)(param_2 + 0x14);
      if ((uVar16 & 1) != 0 || uVar16 == 0) {
LAB_10003942:
        local_68 = CONCAT44(PF_PART4(local_68, 4),uVar23);
        uVar13 = 0;
LAB_1000395d:
        local_60 = 0;
        uVar23 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
        if (((((uVar23 & 1) == 0) || ((short)(uVar23 & 0xfffffffc) == 0 || (char)uVar11 != '\0')) ||
            (*param_1 != 0x54584b57)) ||
           (((uint)param_1[2] < 0x58 || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0))))
        goto LAB_10003950;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x15])(uVar23 & 0xfffc,2,&local_60);
        uVar4 = local_54;
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10003950;
        if (param_3 == 0) {
          if (uVar13 != 0) goto LAB_100042ff;
          goto LAB_1000458e;
        }
        uVar8 = 0;
        do {
          uVar7 = uVar8;
          uVar8 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000a146;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar7) = cVar12;
            uVar7 = uVar7 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        if (uVar13 == 0) {
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar13) = 0x30;
          }
LAB_10003a2a:
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar13 = 0xffffffffffffffff;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + 1 + uVar8) != '\0');
          if (uVar8 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar13) = 0x75;
            uVar7 = uVar8 + 2;
            if (uVar13 != 0x3fe) {
              *(undefined1 *)(uVar8 + 2 + param_3) = 0x73;
              uVar7 = uVar8 + 3;
              if (uVar8 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar13) = 0x62;
                uVar7 = uVar8 + 4;
                if (uVar8 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar13) = 0x49;
                  uVar7 = uVar8 + 5;
                  if (uVar8 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar13) = 0x6f;
                    uVar13 = uVar8 + 6;
                    goto LAB_10004565;
                  }
                }
              }
            }
          }
          else {
LAB_10004565:
            uVar7 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar7) = 0;
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
            uVar8 = uVar13;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
        }
        else {
LAB_100042ff:
          uVar8 = 0;
          do {
            uVar16 = (uint)uVar13;
            uVar15 = (uVar13 & 0xffffffff) / 10;
            *(byte *)((long)&local_e8 + uVar8) = (char)uVar13 + (char)uVar15 * -10 | 0x30;
            uVar7 = uVar8 + 1;
            if (8 < uVar8) break;
            uVar8 = uVar7;
            uVar13 = uVar15;
          } while (9 < uVar16);
          do {
            while (uVar13 = uVar7 - 1, param_3 != 0) {
              uVar8 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar8);
                uVar8 = uVar8 + 1;
              } while (*pcVar10 != '\0');
              if (uVar8 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar8) = *(undefined1 *)((long)&local_f0 + uVar7 + 7)
                ;
                *(undefined1 *)(param_3 + uVar8) = 0;
              }
              uVar7 = uVar13;
              if (uVar13 == 0) goto LAB_10003a2a;
            }
            uVar7 = uVar13;
          } while (uVar13 != 0);
        }
LAB_1000458e:
        iVar24 = 8;
        do {
          while( true ) {
            uVar16 = (uVar23 & 0xfffffffc) >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar16;
            cVar9 = cVar12 + '7';
            if (uVar16 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 != 0) break;
            iVar24 = iVar24 + -1;
            if (iVar24 == 0) goto LAB_1000468c;
          }
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(char *)(param_3 + -1 + uVar13) = cVar9;
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar12 = 'u';
          pcVar10 = str_1000a151;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar8) = cVar12;
            uVar8 = uVar8 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
LAB_1000468c:
        iVar24 = 8;
        do {
          uVar23 = local_60 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar23;
          cVar9 = cVar12 + '7';
          if (uVar23 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 != 0) {
            uVar13 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar13);
              uVar13 = uVar13 + 1;
            } while (*pcVar10 != '\0');
            if (uVar13 < 0x400) {
              *(char *)(param_3 + -1 + uVar13) = cVar9;
              *(undefined1 *)(param_3 + uVar13) = 0;
            }
          }
          iVar24 = iVar24 + -1;
          uVar23 = (uint)local_68;
        } while (iVar24 != 0);
        goto LAB_10006c1d;
      }
      iVar24 = 0;
      if ((uVar16 & 6) == 4) {
        iVar24 = *(int *)(param_2 + 0x18);
      }
      uVar16 = uVar16 & 0xfffffff0;
      if (uVar16 == 0 && iVar24 == 0) goto LAB_10003942;
      local_50 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10003942;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar24 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_10003942;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar16,0,0x1000);
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10003942;
        local_50 = local_e8 & 0xffffffff;
      }
      else {
        iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000);
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10003942;
      }
      if (param_3 != 0) {
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0xffffffffffffffff;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + 1 + uVar8) != '\0');
        if (uVar8 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar13) = 0x75;
          uVar7 = uVar8 + 2;
          if (uVar13 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar13) = 0x73;
            uVar7 = uVar8 + 3;
            if (uVar8 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar13) = 0x62;
              uVar7 = uVar8 + 4;
              if (uVar8 + 4 < 0x3ff) {
                *(undefined1 *)(uVar8 + 4 + param_3) = 0x4d;
                uVar7 = uVar8 + 5;
                if (uVar8 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar13) = 0x6d;
                  uVar7 = uVar8 + 6;
                  if (uVar8 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar13) = 0x69;
                    uVar7 = uVar8 + 7;
                    if (uVar8 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar13) = 0x6f;
                      uVar13 = uVar8 + 8;
                      goto LAB_10005c33;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10005c33:
          uVar7 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
      }
      iVar24 = (uint)(local_50 >> 0x20 != 0) * 8 + 8;
      do {
        uVar18 = (uint)(local_50 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar16 = (uint)(byte)((char)uVar18 + 0x37);
        if (uVar18 < 10) {
          uVar16 = uVar18 + 0x30;
        }
        PF_PART2(local_e8, 0) = (ushort)(byte)local_e8;
        if (param_3 != 0) {
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            pbVar19 = (byte *)((long)&local_e8 + 1);
            do {
              *(char *)(param_3 + uVar8) = (char)uVar16;
              uVar8 = uVar8 + 1;
              uVar16 = (uint)*pbVar19;
              if (*pbVar19 == 0) break;
              pbVar19 = pbVar19 + 1;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
        }
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((local_50 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100062ad;
          (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
        }
        uVar11 = (ulong)local_34;
      }
LAB_100062ad:
      if (local_50 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar13 = local_50 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar13 >> 0x20 != 0) ||
               (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
            goto LAB_100063b3;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
          }
          uVar11 = (ulong)local_34;
        }
LAB_100063b3:
        if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
          uVar13 = local_50 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
               ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006857;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_5c);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_5c);
          }
          uVar11 = (ulong)local_34;
        }
      }
LAB_10006857:
      if (param_3 == 0) goto LAB_10006939;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0xffffffffffffffff;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + 1 + uVar8) != '\0');
      if (uVar8 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar13) = 0x75;
        uVar7 = uVar8 + 2;
        if (uVar13 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar13) = 0x73;
          uVar7 = uVar8 + 3;
          if (uVar8 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar13) = 0x62;
            uVar7 = uVar8 + 4;
            if (uVar8 + 4 < 0x3ff) {
              *(undefined1 *)(uVar8 + 4 + param_3) = 0x52;
              uVar7 = uVar8 + 5;
              if (uVar8 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar13) = 0x65;
                uVar7 = uVar8 + 6;
                if (uVar8 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar13) = 0x67;
                  uVar7 = uVar8 + 7;
                  if (uVar8 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar13) = 0x30;
                    uVar13 = uVar8 + 8;
                    goto LAB_10006910;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10006910:
        uVar7 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar7) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10006939:
      iVar24 = 8;
LAB_10006947:
      do {
        uVar16 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar16;
        cVar9 = cVar12 + '7';
        if (uVar16 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 == 0) goto LAB_1000699d;
        uVar13 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar13);
          uVar13 = uVar13 + 1;
        } while (*pcVar10 != '\0');
        if (uVar13 < 0x400) {
          *(char *)(param_3 + -1 + uVar13) = cVar9;
          *(undefined1 *)(param_3 + uVar13) = 0;
        }
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0xffffffffffffffff;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + 1 + uVar8) != '\0');
      if (uVar8 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar13) = 0x75;
        uVar7 = uVar8 + 2;
        if (uVar13 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar13) = 0x73;
          uVar7 = uVar8 + 3;
          if (uVar8 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar13) = 0x62;
            uVar7 = uVar8 + 4;
            if (uVar8 + 4 < 0x3ff) {
              *(undefined1 *)(uVar8 + 4 + param_3) = 0x52;
              uVar7 = uVar8 + 5;
              if (uVar8 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar13) = 0x65;
                uVar7 = uVar8 + 6;
                if (uVar8 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar13) = 0x67;
                  uVar7 = uVar8 + 7;
                  if (uVar8 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar13) = 0x34;
                    uVar13 = uVar8 + 8;
                    goto LAB_10006a5e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10006a5e:
        uVar7 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar7) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10006a88:
      iVar24 = 8;
      do {
        while( true ) {
          uVar16 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar16;
          cVar9 = cVar12 + '7';
          if (uVar16 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 != 0) break;
          iVar24 = iVar24 + -1;
          if (iVar24 == 0) goto LAB_10006bc8;
        }
        uVar13 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar13);
          uVar13 = uVar13 + 1;
        } while (*pcVar10 != '\0');
        if (uVar13 < 0x400) {
          *(char *)(param_3 + -1 + uVar13) = cVar9;
          *(undefined1 *)(param_3 + uVar13) = 0;
        }
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0xffffffffffffffff;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + 1 + uVar8) != '\0');
      if (uVar8 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar13) = 0x75;
        uVar7 = uVar8 + 2;
        if (uVar13 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar13) = 0x73;
          uVar7 = uVar8 + 3;
          if (uVar8 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar13) = 0x62;
            uVar7 = uVar8 + 4;
            if (uVar8 + 4 < 0x3ff) {
              *(undefined1 *)(uVar8 + 4 + param_3) = 0x52;
              uVar7 = uVar8 + 5;
              if (uVar8 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar13) = 0x65;
                uVar7 = uVar8 + 6;
                if (uVar8 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar13) = 0x67;
                  uVar7 = uVar8 + 7;
                  if (uVar8 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar13) = 0x38;
                    uVar13 = uVar8 + 8;
                    goto LAB_10006b9e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10006b9e:
        uVar7 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar7) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10006bc8:
      iVar24 = 8;
      do {
        uVar16 = local_5c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar16;
        cVar9 = cVar12 + '7';
        if (uVar16 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 != 0) {
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(char *)(param_3 + -1 + uVar13) = cVar9;
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
        }
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
LAB_10006c1d:
      uVar16 = 1;
      goto LAB_10003a9e;
    }
  }
  goto LAB_10003aa1;
LAB_1000491d:
  iVar5 = iVar5 + -1;
  if (iVar5 == 0) goto LAB_100049b4;
  goto LAB_100048c8;
LAB_100085c7:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_100086f4;
  goto LAB_100085cf;
code_r0x10008c01:
  if (local_98 != 0) goto LAB_10008caa;
LAB_10008d25:
  if (local_94 != 0) goto LAB_10008de9;
LAB_10008e65:
  if (local_90 != 0) goto LAB_10008f36;
  if (local_88 != 0) goto LAB_10008ffa;
  uVar4 = local_54;
  if (local_d8 != 0) {
    iVar24 = (uint)(local_d8 >> 0x20 != 0) * 8 + 8;
    goto LAB_10009403;
  }
  if (local_d0 != 0) {
    iVar24 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_10009540;
  }
LAB_100097c1:
  if (local_80 != 0) {
LAB_100097c9:
    uVar11 = 0;
    do {
      *(byte *)((long)&local_50 + uVar11) = (char)local_80 + (char)(local_80 / 10) * -10 | 0x30;
      uVar13 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar26 = 9 < local_80;
      uVar11 = uVar13;
      local_80 = local_80 / 10;
    } while (bVar26);
    do {
      while (uVar11 = uVar13 - 1, param_3 != 0) {
        uVar8 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar8);
          uVar8 = uVar8 + 1;
        } while (*pcVar10 != '\0');
        if (uVar8 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar8) = *(undefined1 *)((long)&local_54 + uVar13 + 3);
          *(undefined1 *)(param_3 + uVar8) = 0;
        }
        uVar13 = uVar11;
        if (uVar11 == 0) goto LAB_10009683;
      }
      uVar13 = uVar11;
    } while (uVar11 != 0);
  }
LAB_10009855:
  uVar23 = local_54 | 1;
  goto LAB_10005431;
LAB_100091fd:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_100092bc;
  goto LAB_100091b4;
LAB_10003ff0:
  bVar26 = uVar11 < 5;
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_10003f76;
  goto LAB_1000400a;
LAB_100074bd:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_100075a8;
  goto LAB_10007468;
LAB_1000702d:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_10007118;
  goto LAB_10006fe0;
LAB_10003950:
  uVar13 = uVar13 + 1;
  if (uVar13 == 6) goto LAB_10003a4c;
  goto LAB_1000395d;
LAB_1000699d:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_10006a88;
  goto LAB_10006947;
LAB_10003d0d:
  uVar4 = local_54;
  goto LAB_10004ebe;
LAB_10003a4c:
  uVar23 = (uint)local_68;
  uVar4 = local_54;
  if (param_3 != 0) {
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000a15b;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar8) = cVar12;
        uVar8 = uVar8 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar8) = 0;
    uVar16 = 0;
LAB_10003a9e:
    uVar23 = uVar23 | uVar16;
  }
LAB_10003aa1:
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  if (param_2[8] == '\x02') {
    uVar16 = 1;
    uVar13 = 0;
    local_68 = CONCAT44(PF_PART4(local_68, 4),uVar23);
LAB_10003afa:
    if ((uVar13 != 0) && ((*(uint *)(param_2 + uVar13 * 4 + 0x10) & 7) == 4)) {
LAB_10003c00:
      uVar4 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
      if ((uVar4 & 1) != 0) {
        if (((!((short)(uVar4 & 0xfffffffc) == 0 || (char)uVar11 != '\0')) &&
            (*param_1 == 0x54584b57)) && (0x57 < (uint)param_1[2])) {
          if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x15])(uVar4 & 0xfffc,2,&local_38);
            uVar11 = (ulong)local_34;
            uVar23 = (uint)local_68;
            if (iVar24 == 0) goto LAB_10003ae0;
            if (param_3 == 0) {
              if (uVar13 == 0) goto LAB_10004105;
              goto LAB_10003d26;
            }
            uVar8 = 0;
            do {
              uVar7 = uVar8;
              uVar8 = uVar7 + 1;
            } while (*(char *)(param_3 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar12 = ' ';
              pcVar10 = str_1000a1a5;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar7) = cVar12;
                uVar7 = uVar7 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar7 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar7) = 0;
            if (uVar13 == 0) {
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar13) = 0x30;
              }
LAB_10003ceb:
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar12 = 'n';
                pcVar10 = str_1000a1b4;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar8) = cVar12;
                  uVar8 = uVar8 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
            }
            else {
LAB_10003d26:
              uVar8 = 0;
              do {
                uVar18 = (uint)uVar13;
                uVar15 = (uVar13 & 0xffffffff) / 10;
                *(byte *)((long)&local_e8 + uVar8) = (char)uVar13 + (char)uVar15 * -10 | 0x30;
                uVar7 = uVar8 + 1;
                if (8 < uVar8) break;
                uVar8 = uVar7;
                uVar13 = uVar15;
              } while (9 < uVar18);
              do {
                while (uVar13 = uVar7 - 1, param_3 != 0) {
                  uVar8 = 0;
                  do {
                    pcVar10 = (char *)(param_3 + uVar8);
                    uVar8 = uVar8 + 1;
                  } while (*pcVar10 != '\0');
                  if (uVar8 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar8) =
                         *(undefined1 *)((long)&local_f0 + uVar7 + 7);
                    *(undefined1 *)(param_3 + uVar8) = 0;
                  }
                  uVar7 = uVar13;
                  if (uVar13 == 0) goto LAB_10003ceb;
                }
                uVar7 = uVar13;
              } while (uVar13 != 0);
            }
LAB_10004105:
            iVar24 = 8;
            do {
              while( true ) {
                uVar18 = (uVar4 & 0xfffffffc) >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar18;
                cVar9 = cVar12 + '7';
                if (uVar18 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 != 0) break;
                iVar24 = iVar24 + -1;
                if (iVar24 == 0) goto LAB_100041f4;
              }
              uVar13 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar13);
                uVar13 = uVar13 + 1;
              } while (*pcVar10 != '\0');
              if (uVar13 < 0x400) {
                *(char *)(param_3 + -1 + uVar13) = cVar9;
                *(undefined1 *)(param_3 + uVar13) = 0;
              }
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar8 + 1 < 0x400) {
              cVar12 = 'n';
              pcVar10 = str_1000a1be;
              do {
                pcVar10 = pcVar10 + 1;
                *(char *)(param_3 + uVar8) = cVar12;
                uVar8 = uVar8 + 1;
                cVar12 = *pcVar10;
                if (cVar12 == '\0') break;
              } while (uVar8 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
            uVar13 = 0;
            do {
              uVar8 = uVar13;
              uVar13 = uVar8 + 1;
            } while (*(char *)(param_3 + uVar8) != '\0');
            if (uVar13 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
              uVar8 = uVar13;
            }
            *(undefined1 *)(param_3 + uVar8) = 0;
LAB_100041f4:
            iVar24 = 8;
            do {
              uVar4 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar4;
              cVar9 = cVar12 + '7';
              if (uVar4 < 10) {
                cVar9 = cVar12 + '0';
              }
              if (param_3 != 0) {
                uVar13 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar13);
                  uVar13 = uVar13 + 1;
                } while (*pcVar10 != '\0');
                if (uVar13 < 0x400) {
                  *(char *)(param_3 + -1 + uVar13) = cVar9;
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
              }
              iVar24 = iVar24 + -1;
              uVar4 = local_54;
            } while (iVar24 != 0);
            goto LAB_10004ead;
          }
        }
      }
LAB_10003ae0:
      bVar26 = uVar13 < 5;
      uVar13 = uVar13 + 1;
      uVar16 = (uint)bVar26;
      if (uVar13 == 6) goto LAB_10003d0d;
      goto LAB_10003afa;
    }
    uVar4 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
    if ((uVar4 & 1) != 0 || uVar4 == 0) goto LAB_10003c00;
    iVar24 = 0;
    if ((uVar4 & 6) == 4) {
      if (uVar13 == 5) goto LAB_10003c00;
      iVar24 = *(int *)(param_2 + uVar13 * 4 + 0x18);
    }
    uVar4 = uVar4 & 0xfffffff0;
    if (uVar4 == 0 && iVar24 == 0) goto LAB_10003c00;
    local_50 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10003c00;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar24 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,0x1000);
          uVar11 = (ulong)local_34;
          uVar23 = (uint)local_68;
          if (iVar24 != 0) {
            local_50 = local_e8 & 0xffffffff;
            goto LAB_10004394;
          }
        }
      }
      goto LAB_10003c00;
    }
    iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000);
    uVar11 = (ulong)local_34;
    uVar23 = (uint)local_68;
    if (iVar24 == 0) goto LAB_10003c00;
LAB_10004394:
    if (param_3 == 0) {
      if (uVar13 != 0) goto LAB_10004442;
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      goto LAB_10004766;
    }
    uVar8 = 0;
    do {
      uVar7 = uVar8;
      uVar8 = uVar7 + 1;
    } while (*(char *)(param_3 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000a170;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar7) = cVar12;
        uVar7 = uVar7 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar7) = 0;
    if (uVar13 == 0) {
      uVar13 = 0;
      do {
        pcVar10 = (char *)(param_3 + uVar13);
        uVar13 = uVar13 + 1;
      } while (*pcVar10 != '\0');
      if (uVar13 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar13) = 0x30;
      }
LAB_100043ff:
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar10 = str_1000a181;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar8) = cVar12;
          uVar8 = uVar8 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
    }
    else {
LAB_10004442:
      uVar8 = 0;
      do {
        uVar4 = (uint)uVar13;
        uVar15 = (uVar13 & 0xffffffff) / 10;
        *(byte *)((long)&local_e8 + uVar8) = (char)uVar13 + (char)uVar15 * -10 | 0x30;
        uVar7 = uVar8 + 1;
        if (8 < uVar8) break;
        uVar8 = uVar7;
        uVar13 = uVar15;
      } while (9 < uVar4);
      do {
        while (uVar13 = uVar7 - 1, param_3 != 0) {
          uVar8 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pcVar10 != '\0');
          if (uVar8 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar8) = *(undefined1 *)((long)&local_f0 + uVar7 + 7);
            *(undefined1 *)(param_3 + uVar8) = 0;
          }
          uVar7 = uVar13;
          if (uVar13 == 0) goto LAB_100043ff;
        }
        uVar7 = uVar13;
      } while (uVar13 != 0);
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
    }
LAB_10004766:
    uVar4 = local_54;
    do {
      uVar17 = (uint)(local_50 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar18 = (uint)(byte)((char)uVar17 + 0x37);
      if (uVar17 < 10) {
        uVar18 = uVar17 + 0x30;
      }
      PF_PART2(local_e8, 0) = (ushort)(byte)local_e8;
      if (param_3 != 0) {
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          pbVar19 = (byte *)((long)&local_e8 + 1);
          do {
            *(char *)(param_3 + uVar8) = (char)uVar18;
            uVar8 = uVar8 + 1;
            uVar18 = (uint)*pbVar19;
            if (*pbVar19 == 0) break;
            pbVar19 = pbVar19 + 1;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
      }
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar26) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10004c57;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
      }
      uVar11 = (ulong)local_34;
      uVar23 = (uint)local_68;
    }
LAB_10004c57:
    if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
      uVar13 = local_50 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10004ccd;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
      }
      uVar11 = (ulong)local_34;
      uVar23 = (uint)local_68;
    }
LAB_10004ccd:
    if (param_3 != 0) {
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar10 = str_1000a18d;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar8) = cVar12;
          uVar8 = uVar8 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar13 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
        uVar8 = uVar13;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
    }
    iVar24 = 8;
    do {
      while( true ) {
        uVar18 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar18;
        cVar9 = cVar12 + '7';
        if (uVar18 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 != 0) break;
        iVar24 = iVar24 + -1;
        if (iVar24 == 0) goto LAB_10004e54;
      }
      uVar13 = 0;
      do {
        pcVar10 = (char *)(param_3 + uVar13);
        uVar13 = uVar13 + 1;
      } while (*pcVar10 != '\0');
      if (uVar13 < 0x400) {
        *(char *)(param_3 + -1 + uVar13) = cVar9;
        *(undefined1 *)(param_3 + uVar13) = 0;
      }
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar13 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
      uVar8 = uVar13;
    }
    *(undefined1 *)(param_3 + uVar8) = 0;
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar12 = 'n';
      pcVar10 = str_1000a199;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar8) = cVar12;
        uVar8 = uVar8 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar8 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar8) = 0;
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar13 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
      uVar8 = uVar13;
    }
    *(undefined1 *)(param_3 + uVar8) = 0;
LAB_10004e54:
    iVar24 = 8;
    do {
      uVar18 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar18;
      cVar9 = cVar12 + '7';
      if (uVar18 < 10) {
        cVar9 = cVar12 + '0';
      }
      if (param_3 != 0) {
        uVar13 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar13);
          uVar13 = uVar13 + 1;
        } while (*pcVar10 != '\0');
        if (uVar13 < 0x400) {
          *(char *)(param_3 + -1 + uVar13) = cVar9;
          *(undefined1 *)(param_3 + uVar13) = 0;
        }
      }
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
LAB_10004ead:
    uVar23 = uVar23 | uVar16;
  }
LAB_10004ebe:
  local_38 = 0;
  uVar16 = 0;
  if (param_2[8] == '\x03') {
    uVar16 = *(uint *)(param_2 + 0x14);
    local_68 = CONCAT44(PF_PART4(local_68, 4),uVar23);
    if ((uVar16 & 1) == 0 && uVar16 != 0) {
      iVar24 = 0;
      if ((uVar16 & 6) == 4) {
        iVar24 = *(int *)(param_2 + 0x18);
      }
      uVar16 = uVar16 & 0xfffffff0;
      if (uVar16 == 0 && iVar24 == 0) goto LAB_10004fcd;
      local_50 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10004fcd;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)param_1[2] && iVar24 == 0) &&
           ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
          uVar13 = 0;
          iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar16,0,0x1000,&local_e8);
          uVar11 = (ulong)local_34;
          if (iVar24 != 0) {
            local_50 = local_e8 & 0xffffffff;
            bVar26 = true;
            bVar25 = true;
            if (param_3 == 0) goto LAB_10005820;
            goto LAB_10005125;
          }
        }
        goto LAB_10004fcd;
      }
      iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000,&local_50);
      uVar11 = (ulong)local_34;
      if (iVar24 == 0) goto LAB_10004fcd;
      if (param_3 == 0) {
LAB_10005820:
        bVar26 = local_50 >> 0x20 != 0;
        iVar24 = (uint)bVar26 * 8 + 8;
        bVar2 = true;
        bVar25 = true;
      }
      else {
        uVar13 = 0;
        bVar26 = true;
        bVar25 = true;
LAB_10005125:
        uVar8 = 0;
        do {
          uVar7 = uVar8;
          uVar8 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000a1cc;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar7) = cVar12;
            uVar7 = uVar7 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar7 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar7) = 0;
        if (bVar26) {
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar13) = 0x30;
          }
        }
        else {
          bVar26 = false;
LAB_100056c2:
          uVar8 = 0;
          do {
            uVar23 = (uint)uVar13;
            uVar15 = (uVar13 & 0xffffffff) / 10;
            *(byte *)((long)&local_e8 + uVar8) = (char)uVar13 + (char)uVar15 * -10 | 0x30;
            uVar7 = uVar8 + 1;
            if (8 < uVar8) break;
            uVar8 = uVar7;
            uVar13 = uVar15;
          } while (9 < uVar23);
LAB_1000570c:
          do {
            uVar13 = uVar7 - 1;
            if (bVar26) {
              uVar7 = uVar13;
              if (uVar13 == 0) {
                bVar26 = local_50 >> 0x20 != 0;
                iVar24 = (uint)bVar26 * 8 + 8;
                bVar2 = true;
                goto LAB_10005839;
              }
              goto LAB_1000570c;
            }
            uVar8 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar8);
              uVar8 = uVar8 + 1;
            } while (*pcVar10 != '\0');
            if (uVar8 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar8) = *(undefined1 *)((long)&local_f0 + uVar7 + 7);
              *(undefined1 *)(param_3 + uVar8) = 0;
            }
            uVar7 = uVar13;
          } while (uVar13 != 0);
        }
        bVar26 = local_50 >> 0x20 != 0;
        iVar24 = (uint)bVar26 * 8 + 8;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar8 + 1 < 0x400) {
          cVar12 = 'd';
          pcVar10 = str_1000a1dd;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar8) = cVar12;
            uVar8 = uVar8 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar8 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        uVar13 = 0;
        do {
          uVar8 = uVar13;
          uVar13 = uVar8 + 1;
        } while (*(char *)(param_3 + uVar8) != '\0');
        if (uVar13 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
          uVar8 = uVar13;
        }
        *(undefined1 *)(param_3 + uVar8) = 0;
        bVar2 = false;
      }
LAB_10005839:
      do {
        uVar16 = (uint)(local_50 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar23 = (uint)(byte)((char)uVar16 + 0x37);
        if (uVar16 < 10) {
          uVar23 = uVar16 + 0x30;
        }
        PF_PART2(local_e8, 0) = (ushort)(byte)local_e8;
        if (!bVar2) {
          uVar13 = 0;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (*(char *)(param_3 + uVar8) != '\0');
          if (uVar8 + 1 < 0x400) {
            pbVar19 = (byte *)((long)&local_e8 + 1);
            do {
              *(char *)(param_3 + uVar8) = (char)uVar23;
              uVar8 = uVar8 + 1;
              uVar23 = (uint)*pbVar19;
              if (*pbVar19 == 0) break;
              pbVar19 = pbVar19 + 1;
            } while (uVar8 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
        }
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if ((!bVar26) && (0x6b < (uint)param_1[2])) {
            if ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
              local_40 = param_1;
              iVar24 = (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
              goto LAB_1000593d;
            }
          }
        }
        else {
          local_40 = param_1;
          iVar24 = (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
LAB_1000593d:
          uVar11 = (ulong)local_34;
          param_1 = local_40;
          if (iVar24 == 0) {
          }
          else {
            if (!bVar2) {
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x20;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar8 + 1 < 0x400) {
                cVar12 = 'd';
                pcVar10 = str_1000a1e9;
                do {
                  pcVar10 = pcVar10 + 1;
                  *(char *)(param_3 + uVar8) = cVar12;
                  uVar8 = uVar8 + 1;
                  cVar12 = *pcVar10;
                  if (cVar12 == '\0') break;
                } while (uVar8 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
              uVar13 = 0;
              do {
                uVar8 = uVar13;
                uVar13 = uVar8 + 1;
              } while (*(char *)(param_3 + uVar8) != '\0');
              if (uVar13 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar13) = 0x3d;
                uVar8 = uVar13;
              }
              *(undefined1 *)(param_3 + uVar8) = 0;
            }
            iVar24 = 8;
            do {
              uVar23 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar23;
              cVar9 = cVar12 + '7';
              if (uVar23 < 10) {
                cVar9 = cVar12 + '0';
              }
              if (!bVar2) {
                uVar13 = 0;
                do {
                  pcVar10 = (char *)(param_3 + uVar13);
                  uVar13 = uVar13 + 1;
                } while (*pcVar10 != '\0');
                if (uVar13 < 0x400) {
                  *(char *)(param_3 + -1 + uVar13) = cVar9;
                  *(undefined1 *)(param_3 + uVar13) = 0;
                }
              }
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
        }
      }
    }
    else {
LAB_10004fcd:
      bVar25 = true;
      uVar13 = 1;
      lVar22 = 5;
      do {
        if ((*(uint *)(param_2 + uVar13 * 4 + 0x10) & 7) != 4) {
          uVar4 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
          if ((uVar4 & 1) == 0 && uVar4 != 0) {
            iVar24 = 0;
            if ((uVar4 & 6) == 4) {
              if (lVar22 == 1) break;
              iVar24 = *(int *)(param_2 + uVar13 * 4 + 0x18);
            }
            uVar4 = uVar4 & 0xfffffff0;
            if (uVar4 != 0 || iVar24 != 0) {
              local_50 = 0;
              local_e8 = local_e8 & 0xffffffff00000000;
              if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)
                   ) {
                  if (0x67 < (uint)param_1[2] && iVar24 == 0) {
                    if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
                      local_f0 = param_2;
                      iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,0x1000,&local_e8);
                      uVar11 = (ulong)local_34;
                      param_2 = local_f0;
                      if (iVar24 != 0) {
                        local_50 = local_e8 & 0xffffffff;
                        goto LAB_10005116;
                      }
                    }
                  }
                }
                else {
                  local_f0 = param_2;
                  iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000,&local_50);
                  uVar11 = (ulong)local_34;
                  param_2 = local_f0;
                  if (iVar24 != 0) {
LAB_10005116:
                    uVar4 = local_54;
                    param_2 = local_f0;
                    if (param_3 != 0) {
                      bVar26 = false;
                      goto LAB_10005125;
                    }
                    bVar26 = true;
                    goto LAB_100056c2;
                  }
                }
              }
            }
          }
        }
        bVar25 = uVar13 < 5;
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      bVar25 = false;
      uVar4 = local_54;
    }
    uVar16 = (uint)bVar25;
    uVar23 = (uint)local_68;
  }
  uVar23 = uVar23 | uVar16 | uVar4;
  if (uVar23 != 0) goto LAB_10005431;
  local_38 = 0;
  uVar4 = *(uint *)(param_2 + 0x14);
  if ((uVar4 & 1) == 0 && uVar4 != 0) {
    iVar24 = 0;
    if ((uVar4 & 6) == 4) {
      iVar24 = *(int *)(param_2 + 0x18);
    }
    uVar4 = uVar4 & 0xfffffff0;
    if (uVar4 == 0 && iVar24 == 0) goto LAB_100052c3;
    local_50 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100052c3;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)param_1[2] && iVar24 == 0) &&
         ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
        uVar13 = 0;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,0x1000,&local_e8);
        uVar11 = (ulong)local_34;
        if (iVar24 != 0) {
          local_50 = local_e8 & 0xffffffff;
          bVar26 = true;
          bVar25 = true;
          if (param_3 == 0) goto LAB_10005978;
          goto LAB_100054c1;
        }
      }
      goto LAB_100052c3;
    }
    iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000,&local_50);
    uVar11 = (ulong)local_34;
    if (iVar24 == 0) goto LAB_100052c3;
    if (param_3 == 0) {
LAB_10005978:
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      bVar2 = true;
      bVar25 = true;
    }
    else {
      uVar13 = 0;
      bVar26 = true;
      bVar25 = true;
LAB_100054c1:
      uVar11 = 0;
      do {
        uVar8 = uVar11;
        uVar11 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar10 = str_1000a1f5;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar8) = cVar12;
          uVar8 = uVar8 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar8 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      if (bVar26) {
        uVar11 = 0;
        do {
          pcVar10 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar10 != '\0');
        if (uVar11 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
        }
      }
      else {
        bVar26 = false;
LAB_10005540:
        uVar11 = 0;
        do {
          uVar4 = (uint)uVar13;
          uVar7 = (uVar13 & 0xffffffff) / 10;
          *(byte *)((long)&local_e8 + uVar11) = (char)uVar13 + (char)uVar7 * -10 | 0x30;
          uVar8 = uVar11 + 1;
          if (8 < uVar11) break;
          uVar11 = uVar8;
          uVar13 = uVar7;
        } while (9 < uVar4);
LAB_1000558a:
        do {
          uVar11 = uVar8 - 1;
          if (bVar26) {
            uVar8 = uVar11;
            if (uVar11 == 0) {
              bVar26 = local_50 >> 0x20 != 0;
              iVar24 = (uint)bVar26 * 8 + 8;
              bVar2 = true;
              goto LAB_10005991;
            }
            goto LAB_1000558a;
          }
          uVar13 = 0;
          do {
            pcVar10 = (char *)(param_3 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pcVar10 != '\0');
          if (uVar13 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar13) = *(undefined1 *)((long)&local_f0 + uVar8 + 7);
            *(undefined1 *)(param_3 + uVar13) = 0;
          }
          uVar8 = uVar11;
        } while (uVar11 != 0);
      }
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      uVar11 = 0;
      do {
        uVar13 = uVar11;
        uVar11 = uVar13 + 1;
      } while (*(char *)(param_3 + uVar13) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar13 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar13) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar11;
        uVar11 = uVar13 + 1;
      } while (*(char *)(param_3 + 1 + uVar13) != '\0');
      if (uVar13 + 2 < 0x400) {
        *(undefined1 *)(uVar11 + param_3) = 0x6d;
        uVar8 = uVar13 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x6d;
          uVar8 = uVar13 + 3;
          if (uVar13 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x69;
            uVar8 = uVar13 + 4;
            if (uVar13 + 4 < 0x3ff) {
              *(undefined1 *)(param_3 + 3 + uVar11) = 0x6f;
              uVar11 = uVar13 + 5;
              goto LAB_1000568a;
            }
          }
        }
      }
      else {
LAB_1000568a:
        uVar8 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar8) = 0;
      uVar11 = 0;
      do {
        uVar13 = uVar11;
        uVar11 = uVar13 + 1;
      } while (*(char *)(param_3 + uVar13) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar13 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar13) = 0;
      bVar2 = false;
    }
LAB_10005991:
    do {
      uVar23 = (uint)(local_50 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar4 = (uint)(byte)((char)uVar23 + 0x37);
      if (uVar23 < 10) {
        uVar4 = uVar23 + 0x30;
      }
      PF_PART2(local_e8, 0) = (ushort)(byte)local_e8;
      if (!bVar2) {
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          pbVar19 = (byte *)((long)&local_e8 + 1);
          do {
            *(char *)(param_3 + uVar13) = (char)uVar4;
            uVar13 = uVar13 + 1;
            uVar4 = (uint)*pbVar19;
            if (*pbVar19 == 0) break;
            pbVar19 = pbVar19 + 1;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
      }
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar26) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10005429;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
      }
      else {
        iVar24 = (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
      }
      if (iVar24 != 0) {
        if (!bVar2) {
          uVar11 = 0;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + uVar13) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar13 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + 1 + uVar13) != '\0');
          if (uVar13 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x6d;
            uVar8 = uVar13 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar11) = 0x6d;
              uVar8 = uVar13 + 3;
              if (uVar13 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 0x69;
                uVar8 = uVar13 + 4;
                if (uVar13 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar11) = 0x6f;
                  uVar8 = uVar13 + 5;
                  if (uVar13 + 5 < 0x3ff) {
                    *(undefined1 *)(uVar13 + 5 + param_3) = 0x52;
                    uVar8 = uVar13 + 6;
                    if (uVar13 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar11) = 0x65;
                      uVar8 = uVar13 + 7;
                      if (uVar13 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar11) = 0x67;
                        uVar8 = uVar13 + 8;
                        if (uVar13 + 8 < 0x3ff) {
                          *(undefined1 *)(param_3 + 7 + uVar11) = 0x30;
                          uVar11 = uVar13 + 9;
                          goto LAB_10007898;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_10007898:
            uVar8 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar8) = 0;
          uVar11 = 0;
          do {
            uVar13 = uVar11;
            uVar11 = uVar13 + 1;
          } while (*(char *)(param_3 + uVar13) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar13 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
        }
        iVar24 = 8;
        do {
          uVar4 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar4;
          cVar9 = cVar12 + '7';
          if (uVar4 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (!bVar2) {
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar9;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
    }
  }
  else {
LAB_100052c3:
    bVar25 = true;
    uVar13 = 1;
    lVar22 = 5;
    local_f0 = param_2;
    do {
      if (((*(uint *)(local_f0 + uVar13 * 4 + 0x10) & 7) != 4) &&
         (uVar4 = *(uint *)(local_f0 + uVar13 * 4 + 0x14), (uVar4 & 1) == 0 && uVar4 != 0)) {
        iVar24 = 0;
        if ((uVar4 & 6) == 4) {
          if (lVar22 == 1) break;
          iVar24 = *(int *)(local_f0 + uVar13 * 4 + 0x18);
        }
        uVar4 = uVar4 & 0xfffffff0;
        if (uVar4 != 0 || iVar24 != 0) {
          local_50 = 0;
          local_e8 = local_e8 & 0xffffffff00000000;
          if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)param_1[2] && iVar24 == 0) &&
                 ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
                iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,0x1000,&local_e8);
                uVar11 = (ulong)local_34;
                if (iVar24 != 0) {
                  local_50 = local_e8 & 0xffffffff;
                  goto joined_r0x10005419;
                }
              }
            }
            else {
              iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000,&local_50);
              uVar11 = (ulong)local_34;
              if (iVar24 != 0) {
joined_r0x10005419:
                if (param_3 != 0) {
                  bVar26 = false;
                  goto LAB_100054c1;
                }
                bVar26 = true;
                goto LAB_10005540;
              }
            }
          }
        }
      }
      bVar25 = uVar13 < 5;
      uVar13 = uVar13 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    bVar25 = false;
  }
LAB_10005429:
  uVar23 = (uint)bVar25;
LAB_10005431:
  pcVar10 = str_10009e68;
  if (uVar23 == 0) {
    pcVar10 = str_10009e78;
  }
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar13 = uVar11;
      uVar11 = uVar13 + 1;
    } while (*(char *)(param_3 + uVar13) != '\0');
    if ((uVar13 + 1 < 0x400) && (cVar12 = *pcVar10, cVar12 != '\0')) {
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar13) = cVar12;
        uVar13 = uVar13 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar13) = 0;
  }
  return;
}

#undef str_10009e68
#undef str_10009e78
#undef str_10009e8c
#undef str_10009ea4
#undef str_10009ebc
#undef str_10009ed5
#undef str_10009ee6
#undef str_10009ef6
#undef str_10009f05
#undef str_10009f21
#undef str_10009f2c
#undef str_10009f3c
#undef str_10009f4c
#undef str_10009f59
#undef str_10009f6f
#undef str_10009f85
#undef str_10009f9b
#undef str_10009fb1
#undef str_10009fca
#undef str_10009fe2
#undef str_10009fef
#undef str_1000a000
#undef str_1000a014
#undef str_1000a024
#undef str_1000a03b
#undef str_1000a04e
#undef str_1000a058
#undef str_1000a06b
#undef str_1000a082
#undef str_1000a08e
#undef str_1000a09a
#undef str_1000a0a7
#undef str_1000a0b1
#undef str_1000a0c5
#undef str_1000a0d4
#undef str_1000a0e7
#undef str_1000a0f9
#undef str_1000a10f
#undef str_1000a119
#undef str_1000a125
#undef str_1000a13a
#undef str_1000a146
#undef str_1000a151
#undef str_1000a15b
#undef str_1000a170
#undef str_1000a181
#undef str_1000a18d
#undef str_1000a199
#undef str_1000a1a5
#undef str_1000a1b4
#undef str_1000a1be
#undef str_1000a1cc
#undef str_1000a1dd
#undef str_1000a1e9
#undef str_1000a1f5
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
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
#undef local_80
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_40
#undef local_38
#undef local_34

#undef str_1000a20a
#define str_1000a20a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b9U)))
#undef str_1000a215
#define str_1000a215 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_1000a224
#define str_1000a224 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_1000a235
#define str_1000a235 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e4U)))
#undef str_1000a248
#define str_1000a248 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f7U)))
#undef str_1000a25b
#define str_1000a25b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_1000a26b
#define str_1000a26b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51aU)))
#undef str_1000a27a
#define str_1000a27a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x529U)))
#undef str_1000a289
#define str_1000a289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x538U)))
#undef str_1000a29a
#define str_1000a29a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_1000a2a5
#define str_1000a2a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x554U)))
#undef str_1000a2b1
#define str_1000a2b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x560U)))
#undef str_1000a2bb
#define str_1000a2bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56aU)))
#undef str_1000a2c4
#define str_1000a2c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_1000a2cf
#define str_1000a2cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57eU)))
#undef str_1000a2d8
#define str_1000a2d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x587U)))
#undef str_1000a2e0
#define str_1000a2e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58fU)))
#undef str_1000a2e9
#define str_1000a2e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_1000a2f0
#define str_1000a2f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000a303
#define str_1000a303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b2U)))
#undef str_1000a316
#define str_1000a316 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c5U)))
#undef str_1000a329
#define str_1000a329 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009870
 */

char * recovered_10009870(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_1000a20a;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000a2c4;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_1000a2bb;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_10009986;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_10009986:
        return str_1000a2e9;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000a2e0;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_1000a2cf;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000a2a5;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10009a2a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000a2b1;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000a2d8;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000a215;
      case 0x1001:
      case 0x1042:
        return str_1000a224;
      case 0x1002:
      case 0x1045:
        return str_1000a235;
      case 0x1003:
      case 0x1043:
        return str_1000a248;
      case 0x1004:
      case 0x1048:
        return str_1000a25b;
      case 0x1005:
      case 0x1044:
        return str_1000a26b;
      default:
        return str_1000a29a;
      case 0x1050:
        return str_1000a27a;
      case 0x1052:
        return str_1000a289;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000a316;
    case 2:
      return str_1000a303;
    case 3:
      return str_1000a2f0;
    case 4:
      pcVar2 = str_1000a329;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10009a2a:
        pcVar2 = recovered_10002890((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_1000a20a
#undef str_1000a215
#undef str_1000a224
#undef str_1000a235
#undef str_1000a248
#undef str_1000a25b
#undef str_1000a26b
#undef str_1000a27a
#undef str_1000a289
#undef str_1000a29a
#undef str_1000a2a5
#undef str_1000a2b1
#undef str_1000a2bb
#undef str_1000a2c4
#undef str_1000a2cf
#undef str_1000a2d8
#undef str_1000a2e0
#undef str_1000a2e9
#undef str_1000a2f0
#undef str_1000a303
#undef str_1000a316
#undef str_1000a329

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c00
 */

undefined8
recovered_10009c00(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

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

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
