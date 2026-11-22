/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002000;
}

#undef DAT_10002000

#undef DAT_100010a0
#define DAT_100010a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef str_10000ff3
#define str_10000ff3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10001003
#define str_10001003 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10001032
#define str_10001032 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fU)))
#undef str_10001043
#define str_10001043 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10001051
#define str_10001051 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eU)))
#undef str_10001061
#define str_10001061 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_1000106b
#define str_1000106b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78U)))
#undef str_10001091
#define str_10001091 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eU)))
#define local_1c7 (*(byte (*)[95])(frame + 25))
#define local_168 (*(uint *)(frame + 120))
#define local_12c (*(uint *)(frame + 180))
#define local_128 (*(uint *)(frame + 184))
#define local_118 (*(undefined2 *)(frame + 200))
#define local_116 (*(undefined1 (*)[254])(frame + 202))
#define abStack_1ce (*(byte (*)[7])(frame + 18))
#define abStack_124 (*(byte (*)[11])(frame + 188))
#define bStack_119 (*(byte *)(frame + 199))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000390
 */

int recovered_10000390(int *api)

{
  unsigned char frame[512] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar10 = api[2];
  if (uVar10 < 0x10) {
    return 0;
  }
  PF_PART1(local_118, 0) = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x60) {
    bVar9 = 0x71;
    pcVar6 = str_10000ff3;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_124[uVar4 + 0xc] = bVar9;
      uVar4 = uVar4 + 1;
      bVar9 = *pcVar6;
      if (bVar9 == 0) break;
    } while (uVar4 < 0x5f);
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x60) {
    bVar9 = 0x3a;
    pcVar6 = str_10001091;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_124[uVar4 + 0xc] = bVar9;
      uVar4 = uVar4 + 1;
      bVar9 = *pcVar6;
      if (bVar9 == 0) break;
    } while (uVar4 < 0x5f);
  }
  abStack_124[uVar4 + 0xc] = 0;
  if (api[1] == 0) {
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar4 + 1 < 0x60) {
      (abStack_124 + uVar4 + 0xc)[0] = 0x30;
      (abStack_124 + uVar4 + 0xc)[1] = 0;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    uVar2 = api[1];
    do {
      uVar4 = uVar7;
      abStack_1ce[uVar4 + 3] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      uVar7 = uVar4 + 1;
      if (8 < uVar7) break;
      bVar12 = 9 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar12);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar11 = uVar5;
        uVar5 = uVar11 + 1;
      } while (abStack_124[uVar11 + 0xc] != 0);
      uVar5 = uVar7;
      if (uVar11 + 1 < 0x60) {
        abStack_124[uVar11 + 0xc] = abStack_1ce[uVar4 + 3];
        local_116[uVar11 - 1] = 0;
      }
    }
    else {
      uVar5 = uVar4 + 2;
    }
    while (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (abStack_124[uVar4 + 0xc] != 0);
      if (uVar4 + 1 < 0x60) {
        abStack_124[uVar4 + 0xc] = abStack_1ce[uVar5 + 1];
        local_116[uVar4 - 1] = 0;
      }
      pbVar8 = abStack_1ce + uVar5;
      uVar5 = uVar5 - 2;
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (abStack_124[uVar4 + 0xc] != 0);
      uVar7 = uVar5;
      if (uVar4 + 1 < 0x60) {
        abStack_124[uVar4 + 0xc] = *pbVar8;
        local_116[uVar4 - 1] = 0;
      }
    }
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (local_116[uVar4 - 1] != '\0');
  if (uVar4 + 2 < 0x60) {
    local_116[uVar4 - 1] = 0x20;
    bVar12 = uVar7 != 0x5e;
    uVar7 = uVar4 + 2;
    if (bVar12) {
      uVar7 = uVar4 + 3;
      local_116[uVar4] = 0x72;
      if (uVar7 < 0x5f) {
        uVar7 = uVar4 + 4;
        *(undefined1 *)((long)&local_118 + uVar4 + 3) = 0x65;
        if (uVar7 < 0x5f) {
          uVar7 = uVar4 + 5;
          local_116[uVar4 + 2] = 0x61;
          if (uVar7 < 0x5f) {
            uVar7 = uVar4 + 6;
            local_116[uVar4 + 3] = 100;
            if (uVar7 < 0x5f) {
              local_116[uVar4 + 4] = 0x79;
              uVar7 = uVar4 + 7;
            }
          }
        }
      }
    }
  }
  abStack_124[uVar7 + 0xc] = 0;
  if ((0x2b < uVar10) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_118);
  }
  PF_PART1(local_118, 0) = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x100) {
    bVar9 = 0x6c;
    pcVar6 = str_10001003;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_124[uVar4 + 0xc] = bVar9;
      uVar4 = uVar4 + 1;
      bVar9 = *pcVar6;
      if (bVar9 == 0) break;
    } while (uVar4 < 0xff);
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar7 < 0x100) {
    abStack_124[uVar4 + 0xc] = 0x20;
    uVar4 = uVar7;
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x100) {
    bVar9 = 0x74;
    pcVar6 = str_10001032;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_124[uVar4 + 0xc] = bVar9;
      uVar4 = uVar4 + 1;
      bVar9 = *pcVar6;
      if (bVar9 == 0) break;
    } while (uVar4 < 0xff);
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar7 < 0x100) {
    abStack_124[uVar4 + 0xc] = 0x3d;
    uVar4 = uVar7;
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x100) {
    (abStack_124 + uVar4 + 0xc)[0] = 0x30;
    (abStack_124 + uVar4 + 0xc)[1] = 0;
  }
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar7 < 0x100) {
    abStack_124[uVar4 + 0xc] = 0x20;
    uVar4 = uVar7;
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x100) {
    bVar9 = 100;
    pcVar6 = str_10001043;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_124[uVar4 + 0xc] = bVar9;
      uVar4 = uVar4 + 1;
      bVar9 = *pcVar6;
      if (bVar9 == 0) break;
    } while (uVar4 < 0xff);
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar7 < 0x100) {
    abStack_124[uVar4 + 0xc] = 0x3d;
    uVar4 = uVar7;
  }
  abStack_124[uVar4 + 0xc] = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    uVar7 = uVar4 + 1;
  } while (abStack_124[uVar4 + 0xc] != 0);
  if (uVar4 + 1 < 0x100) {
    (abStack_124 + uVar4 + 0xc)[0] = 0x30;
    (abStack_124 + uVar4 + 0xc)[1] = 0;
  }
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(abStack_1ce + 2), iVar3 != 0)) {
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x20;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar4 + 1 < 0x100) {
      bVar9 = 0x68;
      pcVar6 = str_10001051;
      do {
        pcVar6 = pcVar6 + 1;
        abStack_124[uVar4 + 0xc] = bVar9;
        uVar4 = uVar4 + 1;
        bVar9 = *pcVar6;
        if (bVar9 == 0) break;
      } while (uVar4 < 0xff);
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x3d;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    if (local_168 == 0) {
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (abStack_124[uVar4 + 0xc] != 0);
      if (uVar4 + 1 < 0x100) {
        (abStack_124 + uVar4 + 0xc)[0] = 0x30;
        (abStack_124 + uVar4 + 0xc)[1] = 0;
      }
    }
    else {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar4 = uVar7;
        abStack_124[uVar4 + 3] = (char)local_168 + (char)(local_168 / 10) * -10 | 0x30;
        uVar7 = uVar4 + 1;
        if (8 < uVar7) break;
        bVar12 = 9 < local_168;
        local_168 = local_168 / 10;
      } while (bVar12);
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
        do {
          uVar11 = uVar5;
          uVar5 = uVar11 + 1;
        } while (abStack_124[uVar11 + 0xc] != 0);
        uVar5 = uVar7;
        if (uVar11 + 1 < 0x100) {
          abStack_124[uVar11 + 0xc] = abStack_124[uVar4 + 3];
          local_116[uVar11 - 1] = 0;
        }
      }
      else {
        uVar5 = uVar4 + 2;
      }
      while (uVar7 != 0) {
        uVar7 = 0;
        do {
          uVar4 = uVar7;
          uVar7 = uVar4 + 1;
        } while (abStack_124[uVar4 + 0xc] != 0);
        if (uVar4 + 1 < 0x100) {
          abStack_124[uVar4 + 0xc] = abStack_124[uVar5 + 1];
          local_116[uVar4 - 1] = 0;
        }
        pbVar8 = abStack_124 + uVar5;
        uVar5 = uVar5 - 2;
        uVar7 = 0;
        do {
          uVar4 = uVar7;
          uVar7 = uVar4 + 1;
        } while (abStack_124[uVar4 + 0xc] != 0);
        uVar7 = uVar5;
        if (uVar4 + 1 < 0x100) {
          abStack_124[uVar4 + 0xc] = *pbVar8;
          local_116[uVar4 - 1] = 0;
        }
      }
    }
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x20;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar4 + 1 < 0x100) {
      bVar9 = 0x70;
      pcVar6 = str_10001061;
      do {
        pcVar6 = pcVar6 + 1;
        abStack_124[uVar4 + 0xc] = bVar9;
        uVar4 = uVar4 + 1;
        bVar9 = *pcVar6;
        if (bVar9 == 0) break;
      } while (uVar4 < 0xff);
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x3d;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar4 + 1 < 0x100 && abStack_1ce[6] != 0) {
      pbVar8 = local_1c7;
      do {
        abStack_124[uVar4 + 0xc] = abStack_1ce[6];
        uVar4 = uVar4 + 1;
        abStack_1ce[6] = *pbVar8;
        if (abStack_1ce[6] == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar4 < 0xff);
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x20;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (local_116[uVar4 - 1] != '\0');
    if (uVar4 + 2 < 0x100) {
      local_116[uVar4 - 1] = 0x6d;
      bVar12 = uVar7 != 0xfe;
      uVar7 = uVar4 + 2;
      if (bVar12) {
        uVar7 = uVar4 + 3;
        local_116[uVar4] = 0x6d;
        if (uVar7 < 0xff) {
          uVar7 = uVar4 + 4;
          local_116[uVar4 + 1] = 0x69;
          if (uVar7 < 0xff) {
            uVar7 = uVar4 + 5;
            local_116[uVar4 + 2] = 0x6f;
            if (uVar7 < 0xff) {
              uVar7 = uVar4 + 6;
              *(undefined1 *)((long)&local_118 + uVar4 + 5) = 0x42;
              if (uVar7 < 0xff) {
                uVar7 = uVar4 + 7;
                local_116[uVar4 + 4] = 0x61;
                if (uVar7 < 0xff) {
                  uVar7 = uVar4 + 8;
                  local_116[uVar4 + 5] = 0x73;
                  if (uVar7 < 0xff) {
                    local_116[uVar4 + 6] = 0x65;
                    uVar7 = uVar4 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    abStack_124[uVar7 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x3d;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    iVar3 = 8;
    do {
      uVar10 = local_12c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar1 = (char)uVar10;
      bVar9 = cVar1 + 0x37;
      if (uVar10 < 10) {
        bVar9 = cVar1 + 0x30;
      }
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (abStack_124[uVar4 + 0xc] != 0);
      if (uVar4 + 1 < 0x100) {
        abStack_124[uVar4 + 0xc] = bVar9;
        local_116[uVar4 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x20;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (local_116[uVar4 - 1] != '\0');
    if (uVar4 + 2 < 0x100) {
      local_116[uVar4 - 1] = 0x6d;
      bVar12 = uVar7 != 0xfe;
      uVar7 = uVar4 + 2;
      if (bVar12) {
        uVar7 = uVar4 + 3;
        local_116[uVar4] = 0x6d;
        if (uVar7 < 0xff) {
          uVar7 = uVar4 + 4;
          local_116[uVar4 + 1] = 0x69;
          if (uVar7 < 0xff) {
            uVar7 = uVar4 + 5;
            local_116[uVar4 + 2] = 0x6f;
            if (uVar7 < 0xff) {
              uVar7 = uVar4 + 6;
              *(undefined1 *)((long)&local_118 + uVar4 + 5) = 0x53;
              if (uVar7 < 0xff) {
                uVar7 = uVar4 + 7;
                local_116[uVar4 + 4] = 0x69;
                if (uVar7 < 0xff) {
                  uVar7 = uVar4 + 8;
                  local_116[uVar4 + 5] = 0x7a;
                  if (uVar7 < 0xff) {
                    local_116[uVar4 + 6] = 0x65;
                    uVar7 = uVar4 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    abStack_124[uVar7 + 0xc] = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 1;
    } while (abStack_124[uVar4 + 0xc] != 0);
    if (uVar7 < 0x100) {
      abStack_124[uVar4 + 0xc] = 0x3d;
      uVar4 = uVar7;
    }
    abStack_124[uVar4 + 0xc] = 0;
    iVar3 = 8;
    do {
      uVar10 = local_128 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar1 = (char)uVar10;
      bVar9 = cVar1 + 0x37;
      if (uVar10 < 10) {
        bVar9 = cVar1 + 0x30;
      }
      uVar7 = 0;
      do {
        uVar4 = uVar7;
        uVar7 = uVar4 + 1;
      } while (abStack_124[uVar4 + 0xc] != 0);
      if (uVar4 + 1 < 0x100) {
        abStack_124[uVar4 + 0xc] = bVar9;
        local_116[uVar4 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    iVar3 = (*(code *)(ulong)(uint)api[3])(&DAT_100010a0,str_1000106b,&local_118);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      if ((code *)(ulong)(uint)api[4] != (code *)0x0) {
        iVar3 = (*(code *)(ulong)(uint)api[4])(0,0);
      }
    }
  }
  return iVar3;
}

#undef DAT_100010a0
#undef str_10000ff3
#undef str_10001003
#undef str_10001032
#undef str_10001043
#undef str_10001051
#undef str_10001061
#undef str_1000106b
#undef str_10001091
#undef local_1c7
#undef local_168
#undef local_12c
#undef local_128
#undef local_118
#undef local_116
#undef abStack_1ce
#undef abStack_124
#undef bStack_119

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
