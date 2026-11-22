/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10005000;
}

#undef DAT_10005000

#undef DAT_1000450d
#define DAT_1000450d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x102U)))
#undef str_1000440b
#define str_1000440b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000441f
#define str_1000441f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14U)))
#undef str_1000443d
#define str_1000443d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32U)))
#undef str_1000444e
#define str_1000444e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43U)))
#undef str_10004462
#define str_10004462 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_10004477
#define str_10004477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cU)))
#undef str_1000448b
#define str_1000448b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#undef str_100044a5
#define str_100044a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9aU)))
#undef str_100044d0
#define str_100044d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5U)))
#undef str_100044df
#define str_100044df (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_100044ef
#define str_100044ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_100044fe
#define str_100044fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3U)))
#undef str_10004700
#define str_10004700 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f5U)))
#undef str_10004716
#define str_10004716 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30bU)))
#undef str_10004729
#define str_10004729 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_10004738
#define str_10004738 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32dU)))
#define local_630 (*(uint *)(frame + 16))
#define cStack_5f9 (*(char *)(frame + 71))
#define local_62c (*(uint *)(frame + 20))
#define local_628 (*(uint *)(frame + 24))
#define auStack_5f6 (*(undefined1 (*)[1021])(frame + 74))
#define local_624 (*(uint *)(frame + 28))
#define cStack_1f9 (*(char *)(frame + 1095))
#define local_620 (*(uint *)(frame + 32))
#define local_61c (*(uint *)(frame + 36))
#define abStack_1ba (*(byte (*)[2])(frame + 1158))
#define local_618 (*(uint *)(frame + 40))
#define local_5f8 (*(undefined2 *)(frame + 72))
#define local_1f8 (*(undefined2 *)(frame + 1096))
#define local_1b8 (*(undefined2 *)(frame + 1160))
#define abStack_40 (*(byte (*)[12])(frame + 1536))
#define local_14c (*(undefined4 *)(frame + 1268))
#define local_148 (*(byte (*)[12])(frame + 1272))
#define local_13c (*(char *)(frame + 1284))
#define local_e4 (*(uint *)(frame + 1372))
#define local_a8 (*(uint *)(frame + 1432))
#define local_a4 (*(uint *)(frame + 1436))
#define local_34 (*(uint *)(frame + 1548))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000390
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10000390(int *api)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;

  local_34 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar14 = api[2];
  if (uVar14 < 0x10) {
    return 0;
  }
  local_148[0] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_148[uVar5] != 0);
  if (uVar5 + 1 < 0x60) {
    bVar12 = 0x71;
    pcVar9 = str_1000440b;
    do {
      pcVar9 = pcVar9 + 1;
      local_148[uVar5] = bVar12;
      uVar5 = uVar5 + 1;
      bVar12 = *pcVar9;
      if (bVar12 == 0) break;
    } while (uVar5 < 0x5f);
  }
  local_148[uVar5] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_148[uVar5] != 0);
  if (uVar5 + 1 < 0x60) {
    bVar12 = 0x3a;
    pcVar9 = str_100044d0;
    do {
      pcVar9 = pcVar9 + 1;
      local_148[uVar5] = bVar12;
      uVar5 = uVar5 + 1;
      bVar12 = *pcVar9;
      if (bVar12 == 0) break;
    } while (uVar5 < 0x5f);
  }
  local_148[uVar5] = 0;
  if (api[1] == 0) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_148[uVar5] != 0);
    if (uVar5 + 1 < 0x60) {
      (local_148 + uVar5)[0] = 0x30;
      (local_148 + uVar5)[1] = 0;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    uVar17 = api[1];
    do {
      uVar5 = uVar10;
      abStack_1ba[uVar5 + 3] = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
      uVar10 = uVar5 + 1;
      if (8 < uVar10) break;
      bVar18 = 9 < uVar17;
      uVar17 = uVar17 / 10;
    } while (bVar18);
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar15 = uVar6;
        uVar6 = uVar15 + 1;
      } while (local_148[uVar15] != 0);
      uVar6 = uVar10;
      if (uVar15 + 1 < 0x60) {
        local_148[uVar15] = abStack_1ba[uVar5 + 3];
        local_148[uVar15 + 1] = 0;
      }
    }
    else {
      uVar6 = uVar5 + 2;
    }
    while (uVar10 != 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_148[uVar5] != 0);
      if (uVar5 + 1 < 0x60) {
        local_148[uVar5] = abStack_1ba[uVar6 + 1];
        local_148[uVar5 + 1] = 0;
      }
      pbVar1 = abStack_1ba + uVar6;
      uVar6 = uVar6 - 2;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_148[uVar5] != 0);
      uVar10 = uVar6;
      if (uVar5 + 1 < 0x60) {
        local_148[uVar5] = *pbVar1;
        local_148[uVar5 + 1] = 0;
      }
    }
  }
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_148[uVar5 + 1] != 0);
  if (uVar5 + 2 < 0x60) {
    local_148[uVar5 + 1] = 0x20;
    bVar18 = uVar10 != 0x5e;
    uVar10 = uVar5 + 2;
    if (bVar18) {
      uVar10 = uVar5 + 3;
      local_148[uVar5 + 2] = 0x72;
      if (uVar10 < 0x5f) {
        uVar10 = uVar5 + 4;
        local_148[uVar5 + 3] = 0x65;
        if (uVar10 < 0x5f) {
          uVar10 = uVar5 + 5;
          local_148[uVar5 + 4] = 0x61;
          if (uVar10 < 0x5f) {
            uVar10 = uVar5 + 6;
            local_148[uVar5 + 5] = 100;
            if (uVar10 < 0x5f) {
              local_148[uVar5 + 6] = 0x79;
              uVar10 = uVar5 + 7;
            }
          }
        }
      }
    }
  }
  local_148[uVar10] = 0;
  if ((0x2b < uVar14) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(local_148);
  }
  PF_PART1(local_5f8, 0) = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 't';
    pcVar9 = str_1000441f;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 'r';
    pcVar9 = str_1000443d;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 'r';
    pcVar9 = str_1000444e;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 'w';
    pcVar9 = str_10004462;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 'f';
    pcVar9 = str_10004477;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x31;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    auStack_5f6[uVar5 - 1] = 0x66;
    bVar18 = uVar10 != 0x3fe;
    uVar10 = uVar5 + 2;
    if (bVar18) {
      uVar10 = uVar5 + 3;
      auStack_5f6[uVar5] = 0x6c;
      if (uVar10 < 0x3ff) {
        uVar10 = uVar5 + 4;
        auStack_5f6[uVar5 + 1] = 0x61;
        if (uVar10 < 0x3ff) {
          uVar10 = uVar5 + 5;
          auStack_5f6[uVar5 + 2] = 0x67;
          if (uVar10 < 0x3ff) {
            auStack_5f6[uVar5 + 3] = 0x73;
            uVar10 = uVar5 + 6;
          }
        }
      }
    }
  }
  auStack_5f6[uVar10 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x33;
  }
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(local_148), iVar3 != 0)) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar13 = 'h';
      pcVar9 = str_100044df;
      do {
        pcVar9 = pcVar9 + 1;
        auStack_5f6[uVar5 - 2] = cVar13;
        uVar5 = uVar5 + 1;
        cVar13 = *pcVar9;
        if (cVar13 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    if (local_e4 == 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_5f6[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
      }
    }
    else {
      uVar10 = 0xffffffffffffffff;
      uVar14 = local_e4;
      do {
        uVar5 = uVar10;
        abStack_1ba[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        uVar10 = uVar5 + 1;
        if (8 < uVar10) break;
        bVar18 = 9 < uVar14;
        uVar14 = uVar14 / 10;
      } while (bVar18);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar15 = uVar6;
          uVar6 = uVar15 + 1;
        } while (auStack_5f6[uVar15 - 2] != '\0');
        uVar6 = uVar10;
        if (uVar15 + 1 < 0x400) {
          auStack_5f6[uVar15 - 2] = abStack_1ba[uVar5 + 3];
          auStack_5f6[uVar15 - 1] = 0;
        }
      }
      else {
        uVar6 = uVar5 + 2;
      }
      while (uVar10 != 0) {
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (auStack_5f6[uVar5 - 2] != '\0');
        if (uVar5 + 1 < 0x400) {
          auStack_5f6[uVar5 - 2] = abStack_1ba[uVar6 + 1];
          auStack_5f6[uVar5 - 1] = 0;
        }
        pbVar1 = abStack_1ba + uVar6;
        uVar6 = uVar6 - 2;
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (auStack_5f6[uVar5 - 2] != '\0');
        uVar10 = uVar6;
        if (uVar5 + 1 < 0x400) {
          auStack_5f6[uVar5 - 2] = *pbVar1;
          auStack_5f6[uVar5 - 1] = 0;
        }
      }
    }
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar13 = 'm';
      pcVar9 = str_100044ef;
      do {
        pcVar9 = pcVar9 + 1;
        auStack_5f6[uVar5 - 2] = cVar13;
        uVar5 = uVar5 + 1;
        cVar13 = *pcVar9;
        if (cVar13 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    iVar3 = 8;
    do {
      uVar14 = local_a8 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar13 = (char)uVar14;
      cVar8 = cVar13 + '7';
      if (uVar14 < 10) {
        cVar8 = cVar13 + '0';
      }
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_5f6[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        auStack_5f6[uVar5 - 2] = cVar8;
        auStack_5f6[uVar5 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar13 = 'm';
      pcVar9 = str_100044fe;
      do {
        pcVar9 = pcVar9 + 1;
        auStack_5f6[uVar5 - 2] = cVar13;
        uVar5 = uVar5 + 1;
        cVar13 = *pcVar9;
        if (cVar13 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    auStack_5f6[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      auStack_5f6[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    auStack_5f6[uVar5 - 2] = 0;
    if (local_a4 == 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_5f6[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
      }
    }
    else {
      uVar10 = 0xffffffffffffffff;
      uVar14 = local_a4;
      do {
        uVar5 = uVar10;
        abStack_1ba[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        uVar10 = uVar5 + 1;
        if (8 < uVar10) break;
        bVar18 = 9 < uVar14;
        uVar14 = uVar14 / 10;
      } while (bVar18);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar15 = uVar6;
          uVar6 = uVar15 + 1;
        } while (auStack_5f6[uVar15 - 2] != '\0');
        uVar6 = uVar10;
        if (uVar15 + 1 < 0x400) {
          auStack_5f6[uVar15 - 2] = abStack_1ba[uVar5 + 3];
          auStack_5f6[uVar15 - 1] = 0;
        }
      }
      else {
        uVar6 = uVar5 + 2;
      }
      while (uVar10 != 0) {
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (auStack_5f6[uVar5 - 2] != '\0');
        if (uVar5 + 1 < 0x400) {
          auStack_5f6[uVar5 - 2] = abStack_1ba[uVar6 + 1];
          auStack_5f6[uVar5 - 1] = 0;
        }
        pbVar1 = abStack_1ba + uVar6;
        uVar6 = uVar6 - 2;
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (auStack_5f6[uVar5 - 2] != '\0');
        uVar10 = uVar6;
        if (uVar5 + 1 < 0x400) {
          auStack_5f6[uVar5 - 2] = *pbVar1;
          auStack_5f6[uVar5 - 1] = 0;
        }
      }
    }
  }
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)(ulong)(uint)api[3])(&DAT_1000450d,str_1000448b,&local_5f8);
  if ((iVar3 == 0) || ((code *)(ulong)(uint)api[6] == (code *)0x0)) {
    return 0;
  }
  iVar3 = (*(code *)(ulong)(uint)api[6])(0x1000,0x1000,0x1000,1,3);
  if (iVar3 == 0) {
    return 0;
  }
  if (*api == 0x54584b57) {
    uVar14 = api[2];
    if (0x5f < uVar14) {
      if (api[0x17] != 0) {
        uVar14 = 0;
        do {
          uVar17 = uVar14 & 0xff;
          iVar3 = 0;
          local_14c = uVar14;
          do {
            uVar11 = (undefined1)iVar3;
            uVar7 = recovered_10003d90(api,uVar17,uVar11,0,local_148);
            if (((int)uVar7 != 0) &&
               (recovered_10002710((long)api,local_148,(int *)&local_34), local_13c < '\0')) {
              uVar7 = recovered_10003d90(api,uVar17,uVar11,1,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,2,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,3,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,4,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,5,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,6,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
              uVar7 = recovered_10003d90(api,uVar17,uVar11,7,(undefined1 *)&local_1b8);
              if ((int)uVar7 != 0) {
                recovered_10002710((long)api,(byte *)&local_1b8,(int *)&local_34);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          uVar14 = local_14c + 1;
        } while (uVar14 != 8);
        if (*api != 0x54584b57) goto LAB_100024b8;
      }
      uVar14 = api[2];
    }
    if (((0x47 < uVar14) && ((code *)(ulong)(uint)api[0x11] != (code *)0x0)) &&
       (iVar3 = (*(code *)(ulong)(uint)api[0x11])(), iVar3 != 0)) {
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        if (((*api == 0x54584b57) && (0x4b < (uint)api[2])) &&
           ((code *)(ulong)(uint)api[0x12] != (code *)0x0)) {
          iVar4 = (*(code *)(ulong)(uint)api[0x12])(iVar16,&local_630);
          if (iVar4 != 0) {
            PF_PART1(local_1f8, 0) = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (auStack_5f6[uVar5 + 0x3fe] != '\0');
            if (uVar5 + 1 < 0x40) {
              cVar13 = '/';
              pcVar9 = str_10004700;
              do {
                pcVar9 = pcVar9 + 1;
                auStack_5f6[uVar5 + 0x3fe] = cVar13;
                uVar5 = uVar5 + 1;
                cVar13 = *pcVar9;
                if (cVar13 == '\0') break;
              } while (uVar5 < 0x3f);
            }
            auStack_5f6[uVar5 + 0x3fe] = 0;
            if (local_630 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (auStack_5f6[uVar5 + 0x3fe] != '\0');
              if (uVar5 + 1 < 0x40) {
                *(undefined2 *)(auStack_5f6 + uVar5 + 0x3fe) = 0x30;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_630;
              do {
                uVar5 = uVar10;
                abStack_1ba[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (auStack_5f6[uVar15 + 0x3fe] != '\0');
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x40) {
                  auStack_5f6[uVar15 + 0x3fe] = abStack_1ba[uVar5 + 3];
                  auStack_5f6[uVar15 + 0x3ff] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (auStack_5f6[uVar5 + 0x3fe] != '\0');
                if (uVar5 + 1 < 0x40) {
                  auStack_5f6[uVar5 + 0x3fe] = *(undefined1 *)((long)&local_1b8 + (uVar6 - 1));
                  auStack_5f6[uVar5 + 0x3ff] = 0;
                }
                pbVar1 = abStack_1ba + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (auStack_5f6[uVar5 + 0x3fe] != '\0');
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x40) {
                  auStack_5f6[uVar5 + 0x3fe] = *pbVar1;
                  auStack_5f6[uVar5 + 0x3ff] = 0;
                }
              }
            }
            PF_PART1(local_1b8, 0) = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (abStack_1ba[uVar5 + 2] != 0);
            if (uVar5 + 1 < 0x60) {
              bVar12 = 0x71;
              pcVar9 = str_10004716;
              do {
                pcVar9 = pcVar9 + 1;
                abStack_1ba[uVar5 + 2] = bVar12;
                uVar5 = uVar5 + 1;
                bVar12 = *pcVar9;
                if (bVar12 == 0) break;
              } while (uVar5 < 0x5f);
            }
            abStack_1ba[uVar5 + 2] = 0;
            if (local_630 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (abStack_1ba[uVar5 + 2] != 0);
              if (uVar5 + 1 < 0x60) {
                (abStack_1ba + uVar5 + 2)[0] = 0x30;
                (abStack_1ba + uVar5 + 2)[1] = 0;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_630;
              do {
                uVar5 = uVar10;
                abStack_40[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (abStack_1ba[uVar15 + 2] != 0);
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x60) {
                  abStack_1ba[uVar15 + 2] = abStack_40[uVar5 + 3];
                  abStack_1ba[uVar15 + 3] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (abStack_1ba[uVar5 + 2] != 0);
                if (uVar5 + 1 < 0x60) {
                  abStack_1ba[uVar5 + 2] = abStack_40[uVar6 + 1];
                  abStack_1ba[uVar5 + 3] = 0;
                }
                pbVar1 = abStack_40 + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (abStack_1ba[uVar5 + 2] != 0);
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x60) {
                  abStack_1ba[uVar5 + 2] = *pbVar1;
                  abStack_1ba[uVar5 + 3] = 0;
                }
              }
            }
            local_148[0] = 0;
            uVar10 = 0xffffffffffffffff;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5 + 1] != 0);
            if (uVar5 + 2 < 0x100) {
              local_148[uVar5 + 1] = 100;
              bVar18 = uVar10 != 0xfe;
              uVar10 = uVar5 + 2;
              if (bVar18) {
                uVar10 = uVar5 + 3;
                local_148[uVar5 + 2] = 0x72;
                if (uVar10 < 0xff) {
                  uVar10 = uVar5 + 4;
                  local_148[uVar5 + 3] = 0x69;
                  if (uVar10 < 0xff) {
                    uVar10 = uVar5 + 5;
                    local_148[uVar5 + 4] = 0x76;
                    if (uVar10 < 0xff) {
                      uVar10 = uVar5 + 6;
                      local_148[uVar5 + 5] = 0x65;
                      if (uVar10 < 0xff) {
                        local_148[uVar5 + 6] = 0x3d;
                        uVar10 = uVar5 + 7;
                      }
                    }
                  }
                }
              }
            }
            local_148[uVar10] = 0;
            uVar14 = local_62c >> 4 & 0xf;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar5 + 1 < 0x100) {
              cVar13 = (char)uVar14;
              bVar12 = cVar13 + 0x37;
              if (uVar14 < 10) {
                bVar12 = cVar13 + 0x30;
              }
              local_148[uVar5] = bVar12;
              local_148[uVar5 + 1] = 0;
            }
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar5 + 1 < 0x100) {
              cVar13 = (char)(local_62c & 0xf);
              bVar12 = cVar13 + 0x37;
              if ((local_62c & 0xf) < 10) {
                bVar12 = cVar13 + 0x30;
              }
              local_148[uVar5] = bVar12;
              local_148[uVar5 + 1] = 0;
            }
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x20;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            uVar10 = 0xffffffffffffffff;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5 + 1] != 0);
            if (uVar5 + 2 < 0x100) {
              local_148[uVar5 + 1] = 0x73;
              bVar18 = uVar10 != 0xfe;
              uVar10 = uVar5 + 2;
              if (bVar18) {
                uVar10 = uVar5 + 3;
                local_148[uVar5 + 2] = 0x74;
                if (uVar10 < 0xff) {
                  uVar10 = uVar5 + 4;
                  local_148[uVar5 + 3] = 0x61;
                  if (uVar10 < 0xff) {
                    uVar10 = uVar5 + 5;
                    local_148[uVar5 + 4] = 0x72;
                    if (uVar10 < 0xff) {
                      uVar10 = uVar5 + 6;
                      local_148[uVar5 + 5] = 0x74;
                      if (uVar10 < 0xff) {
                        uVar10 = uVar5 + 7;
                        local_148[uVar5 + 6] = 0x4c;
                        if (uVar10 < 0xff) {
                          uVar10 = uVar5 + 8;
                          local_148[uVar5 + 7] = 0x62;
                          if (uVar10 < 0xff) {
                            local_148[uVar5 + 8] = 0x61;
                            uVar10 = uVar5 + 9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_148[uVar10] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x3d;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            if (local_628 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (local_148[uVar5] != 0);
              if (uVar5 + 1 < 0x100) {
                (local_148 + uVar5)[0] = 0x30;
                (local_148 + uVar5)[1] = 0;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_628;
              do {
                uVar5 = uVar10;
                abStack_40[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (local_148[uVar15] != 0);
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x100) {
                  local_148[uVar15] = abStack_40[uVar5 + 3];
                  local_148[uVar15 + 1] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = abStack_40[uVar6 + 1];
                  local_148[uVar5 + 1] = 0;
                }
                pbVar1 = abStack_40 + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = *pbVar1;
                  local_148[uVar5 + 1] = 0;
                }
              }
            }
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x20;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            uVar10 = 0xffffffffffffffff;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5 + 1] != 0);
            if (uVar5 + 2 < 0x100) {
              local_148[uVar5 + 1] = 0x73;
              bVar18 = uVar10 != 0xfe;
              uVar10 = uVar5 + 2;
              if (bVar18) {
                uVar10 = uVar5 + 3;
                local_148[uVar5 + 2] = 0x65;
                if (uVar10 < 0xff) {
                  uVar10 = uVar5 + 4;
                  local_148[uVar5 + 3] = 99;
                  if (uVar10 < 0xff) {
                    uVar10 = uVar5 + 5;
                    local_148[uVar5 + 4] = 0x74;
                    if (uVar10 < 0xff) {
                      uVar10 = uVar5 + 6;
                      local_148[uVar5 + 5] = 0x6f;
                      if (uVar10 < 0xff) {
                        uVar10 = uVar5 + 7;
                        local_148[uVar5 + 6] = 0x72;
                        if (uVar10 < 0xff) {
                          local_148[uVar5 + 7] = 0x73;
                          uVar10 = uVar5 + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            local_148[uVar10] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x3d;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            if (local_624 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (local_148[uVar5] != 0);
              if (uVar5 + 1 < 0x100) {
                (local_148 + uVar5)[0] = 0x30;
                (local_148 + uVar5)[1] = 0;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_624;
              do {
                uVar5 = uVar10;
                abStack_40[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (local_148[uVar15] != 0);
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x100) {
                  local_148[uVar15] = abStack_40[uVar5 + 3];
                  local_148[uVar15 + 1] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = abStack_40[uVar6 + 1];
                  local_148[uVar5 + 1] = 0;
                }
                pbVar1 = abStack_40 + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = *pbVar1;
                  local_148[uVar5 + 1] = 0;
                }
              }
            }
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x20;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar5 + 1 < 0x100) {
              bVar12 = 0x62;
              pcVar9 = str_10004729;
              do {
                pcVar9 = pcVar9 + 1;
                local_148[uVar5] = bVar12;
                uVar5 = uVar5 + 1;
                bVar12 = *pcVar9;
                if (bVar12 == 0) break;
              } while (uVar5 < 0xff);
            }
            local_148[uVar5] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x3d;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            if (local_620 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (local_148[uVar5] != 0);
              if (uVar5 + 1 < 0x100) {
                (local_148 + uVar5)[0] = 0x30;
                (local_148 + uVar5)[1] = 0;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_620;
              do {
                uVar5 = uVar10;
                abStack_40[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (local_148[uVar15] != 0);
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x100) {
                  local_148[uVar15] = abStack_40[uVar5 + 3];
                  local_148[uVar15 + 1] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = abStack_40[uVar6 + 1];
                  local_148[uVar5 + 1] = 0;
                }
                pbVar1 = abStack_40 + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = *pbVar1;
                  local_148[uVar5 + 1] = 0;
                }
              }
            }
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x20;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            uVar10 = 0xffffffffffffffff;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5 + 1] != 0);
            if (uVar5 + 2 < 0x100) {
              local_148[uVar5 + 1] = 0x66;
              bVar18 = uVar10 != 0xfe;
              uVar10 = uVar5 + 2;
              if (bVar18) {
                uVar10 = uVar5 + 3;
                local_148[uVar5 + 2] = 0x6c;
                if (uVar10 < 0xff) {
                  uVar10 = uVar5 + 4;
                  local_148[uVar5 + 3] = 0x61;
                  if (uVar10 < 0xff) {
                    uVar10 = uVar5 + 5;
                    local_148[uVar5 + 4] = 0x67;
                    if (uVar10 < 0xff) {
                      local_148[uVar5 + 5] = 0x73;
                      uVar10 = uVar5 + 6;
                    }
                  }
                }
              }
            }
            local_148[uVar10] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x3d;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            iVar4 = 8;
            do {
              uVar14 = local_61c >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
              cVar13 = (char)uVar14;
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (local_148[uVar5] != 0);
              if (uVar5 + 1 < 0x100) {
                bVar12 = cVar13 + 0x37;
                if (uVar14 < 10) {
                  bVar12 = cVar13 + 0x30;
                }
                local_148[uVar5] = bVar12;
                local_148[uVar5 + 1] = 0;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x20;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar5 + 1 < 0x100) {
              bVar12 = 0x70;
              pcVar9 = str_10004738;
              do {
                pcVar9 = pcVar9 + 1;
                local_148[uVar5] = bVar12;
                uVar5 = uVar5 + 1;
                bVar12 = *pcVar9;
                if (bVar12 == 0) break;
              } while (uVar5 < 0xff);
            }
            local_148[uVar5] = 0;
            uVar10 = 0;
            do {
              uVar5 = uVar10;
              uVar10 = uVar5 + 1;
            } while (local_148[uVar5] != 0);
            if (uVar10 < 0x100) {
              local_148[uVar5] = 0x3d;
              uVar5 = uVar10;
            }
            local_148[uVar5] = 0;
            if (local_618 == 0) {
              uVar10 = 0;
              do {
                uVar5 = uVar10;
                uVar10 = uVar5 + 1;
              } while (local_148[uVar5] != 0);
              if (uVar5 + 1 < 0x100) {
                (local_148 + uVar5)[0] = 0x30;
                (local_148 + uVar5)[1] = 0;
              }
            }
            else {
              uVar10 = 0xffffffffffffffff;
              uVar14 = local_618;
              do {
                uVar5 = uVar10;
                abStack_40[uVar5 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                uVar10 = uVar5 + 1;
                if (8 < uVar10) break;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
              if ((uVar10 & 1) == 0) {
                uVar6 = 0;
                do {
                  uVar15 = uVar6;
                  uVar6 = uVar15 + 1;
                } while (local_148[uVar15] != 0);
                uVar6 = uVar10;
                if (uVar15 + 1 < 0x100) {
                  local_148[uVar15] = abStack_40[uVar5 + 3];
                  local_148[uVar15 + 1] = 0;
                }
              }
              else {
                uVar6 = uVar5 + 2;
              }
              while (uVar10 != 0) {
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = abStack_40[uVar6 + 1];
                  local_148[uVar5 + 1] = 0;
                }
                pbVar1 = abStack_40 + uVar6;
                uVar6 = uVar6 - 2;
                uVar10 = 0;
                do {
                  uVar5 = uVar10;
                  uVar10 = uVar5 + 1;
                } while (local_148[uVar5] != 0);
                uVar10 = uVar6;
                if (uVar5 + 1 < 0x100) {
                  local_148[uVar5] = *pbVar1;
                  local_148[uVar5 + 1] = 0;
                }
              }
            }
            if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
              (*(code *)(ulong)(uint)api[3])(&local_1f8,&local_1b8,local_148);
            }
          }
        }
      } while (iVar16 != iVar3);
    }
  }
LAB_100024b8:
  uVar14 = local_34;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar13 = 'p';
    pcVar9 = str_100044a5;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_5f6[uVar5 - 2] = cVar13;
      uVar5 = uVar5 + 1;
      cVar13 = *pcVar9;
      if (cVar13 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_5f6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_5f6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_5f6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_5f6[uVar5 - 2] = 0;
  if (uVar14 == 0) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (auStack_5f6[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      *(undefined2 *)(auStack_5f6 + (uVar5 - 2)) = 0x30;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar5 = uVar10;
      local_148[uVar5 + 1] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
      uVar10 = uVar5 + 1;
      if (8 < uVar10) break;
      bVar18 = 9 < uVar14;
      uVar14 = uVar14 / 10;
    } while (bVar18);
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar15 = uVar6;
        uVar6 = uVar15 + 1;
      } while (auStack_5f6[uVar15 - 2] != '\0');
      uVar6 = uVar10;
      if (uVar15 + 1 < 0x400) {
        auStack_5f6[uVar15 - 2] = local_148[uVar5 + 1];
        auStack_5f6[uVar15 - 1] = 0;
      }
    }
    else {
      uVar6 = uVar5 + 2;
    }
    while (uVar10 != 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_5f6[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        auStack_5f6[uVar5 - 2] = local_148[uVar6 - 1];
        auStack_5f6[uVar5 - 1] = 0;
      }
      lVar2 = uVar6 - 2;
      uVar6 = uVar6 - 2;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_5f6[uVar5 - 2] != '\0');
      uVar10 = uVar6;
      if (uVar5 + 1 < 0x400) {
        auStack_5f6[uVar5 - 2] = local_148[lVar2];
        auStack_5f6[uVar5 - 1] = 0;
      }
    }
  }
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[3])(&DAT_1000450d,str_1000448b,&local_5f8);
  }
  return 1;
}

#undef DAT_1000450d
#undef str_1000440b
#undef str_1000441f
#undef str_1000443d
#undef str_1000444e
#undef str_10004462
#undef str_10004477
#undef str_1000448b
#undef str_100044a5
#undef str_100044d0
#undef str_100044df
#undef str_100044ef
#undef str_100044fe
#undef str_10004700
#undef str_10004716
#undef str_10004729
#undef str_10004738
#undef local_630
#undef cStack_5f9
#undef local_62c
#undef local_628
#undef auStack_5f6
#undef local_624
#undef cStack_1f9
#undef local_620
#undef local_61c
#undef abStack_1ba
#undef local_618
#undef local_5f8
#undef local_1f8
#undef local_1b8
#undef abStack_40
#undef local_14c
#undef local_148
#undef local_13c
#undef local_e4
#undef local_a8
#undef local_a4
#undef local_34

#undef str_1000450e
#define str_1000450e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x103U)))
#undef str_1000451b
#define str_1000451b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#undef str_10004535
#define str_10004535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_10004545
#define str_10004545 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13aU)))
#undef str_10004554
#define str_10004554 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10004571
#define str_10004571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10004589
#define str_10004589 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17eU)))
#define acStack_8c9 (*(char (*)[1024])(frame + 23))
#define cStack_4c9 (*(char *)(frame + 1047))
#define abStack_3c (*(byte (*)[12])(frame + 2212))
#define local_4c8 (*(undefined2 *)(frame + 1048))
#define local_4c6 (*(undefined1 (*)[1030])(frame + 1050))
#define local_c0 (*(long *)(frame + 2080))
#define local_b8 (*(ulong *)(frame + 2088))
#define local_b0 (*(undefined8 *)(frame + 2096))
#define local_a8 (*(byte (*)[108])(frame + 2104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002710
 */

void recovered_10002710(long param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  byte bVar15;
  char cVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;

  bVar10 = param_2[8];
  local_b8 = (ulong)bVar10;
  local_b0 = (ulong)*(ushort *)(param_2 + 4);
  if (*(ushort *)(param_2 + 4) == 0x1af4) {
    uVar3 = *(ushort *)(param_2 + 6);
    bVar24 = true;
    if (uVar3 < 0x1042) {
      if ((uVar3 != 0x1001) && (uVar3 != 0x1004)) goto LAB_1000276b;
    }
    else if (uVar3 != 0x1042) {
      if (uVar3 != 0x1048) goto LAB_1000276b;
      goto LAB_1000276d;
    }
  }
  else {
LAB_1000276b:
    bVar24 = false;
LAB_1000276d:
    if ((bool)(bVar10 != 1 & (bVar24 ^ 1U))) {
      return;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8c9[1] = '\0';
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 1] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = 'r';
    pcVar12 = str_1000450e;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_8c9[uVar5 + 1] = cVar9;
      uVar5 = uVar5 + 1;
      cVar9 = *pcVar12;
      if (cVar9 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_8c9[uVar5 + 1] = '\0';
  if (bVar24) {
    uVar23 = 0;
    do {
      uVar5 = uVar23;
      uVar23 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 1] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar12 = str_1000451b;
      do {
        pcVar12 = pcVar12 + 1;
        acStack_8c9[uVar5 + 1] = cVar9;
        uVar5 = uVar5 + 1;
        cVar9 = *pcVar12;
        if (cVar9 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
  }
  else {
    if (bVar10 != 1) goto LAB_10002924;
    if (param_2[9] == 6) {
      uVar23 = 0;
      do {
        uVar5 = uVar23;
        uVar23 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar12 = str_10004535;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_8c9[uVar5 + 1] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar12;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
    else {
      if (param_2[9] != 1) goto LAB_10002924;
      uVar23 = 0;
      do {
        uVar5 = uVar23;
        uVar23 = uVar5 + 1;
      } while (acStack_8c9[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar12 = str_10004545;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_8c9[uVar5 + 1] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar12;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
  }
  acStack_8c9[uVar5 + 1] = '\0';
LAB_10002924:
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 1] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = ' ';
    pcVar12 = str_10004554;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_8c9[uVar5 + 1] = cVar9;
      uVar5 = uVar5 + 1;
      cVar9 = *pcVar12;
      if (cVar9 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  local_c0 = param_1;
  acStack_8c9[uVar5 + 1] = '\0';
  pcVar12 = recovered_10004010((long)param_2);
  local_a8[0] = 0;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  if (uVar5 + 1 < 0x60) {
    bVar10 = 0x2f;
    pcVar13 = str_10004571;
    do {
      pcVar13 = pcVar13 + 1;
      local_a8[uVar5] = bVar10;
      uVar5 = uVar5 + 1;
      bVar10 = *pcVar13;
      if (bVar10 == 0) break;
    } while (uVar5 < 0x5f);
  }
  local_a8[uVar5] = 0;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  if (uVar23 < 0x60) {
    local_a8[uVar5] = 0x2f;
    uVar5 = uVar23;
  }
  local_a8[uVar5] = 0;
  bVar10 = *param_2;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  bVar15 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar15 = bVar10 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_a8[uVar5] = bVar15;
    local_a8[uVar5 + 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  bVar17 = bVar10 + 0x37;
  if (bVar10 < 10) {
    bVar17 = bVar10 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_a8[uVar5] = bVar17;
    local_a8[uVar5 + 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  if (uVar23 < 0x60) {
    local_a8[uVar5] = 0x3a;
    uVar5 = uVar23;
  }
  local_a8[uVar5] = 0;
  bVar10 = param_2[1];
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  bVar20 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar20 = bVar10 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_a8[uVar5] = bVar20;
    local_a8[uVar5 + 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  bVar1 = bVar10 + 0x37;
  if (bVar10 < 10) {
    bVar1 = bVar10 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_a8[uVar5] = bVar1;
    local_a8[uVar5 + 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_a8[uVar5] != 0);
  if (uVar23 < 0x60) {
    local_a8[uVar5] = 0x2e;
    uVar5 = uVar23;
  }
  local_a8[uVar5] = 0;
  bVar10 = param_2[2];
  if (bVar10 == 0) {
    uVar23 = 0;
    do {
      uVar5 = uVar23;
      uVar23 = uVar5 + 1;
    } while (local_a8[uVar5] != 0);
    if (uVar5 + 1 < 0x60) {
      (local_a8 + uVar5)[0] = 0x30;
      (local_a8 + uVar5)[1] = 0;
    }
  }
  else {
    uVar5 = (ulong)(uint)bVar10;
    uVar23 = 0xffffffffffffffff;
    do {
      uVar14 = uVar23;
      uVar11 = (uint)uVar5;
      abStack_3c[uVar14 + 3] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      uVar23 = uVar14 + 1;
      if (8 < uVar23) break;
      uVar5 = uVar5 / 10;
    } while (9 < uVar11);
    if ((uVar23 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
      } while (local_a8[uVar6] != 0);
      uVar5 = uVar23;
      if (uVar6 + 1 < 0x60) {
        local_a8[uVar6] = abStack_3c[uVar14 + 3];
        local_a8[uVar6 + 1] = 0;
      }
    }
    else {
      uVar5 = uVar14 + 2;
    }
    while (uVar23 != 0) {
      uVar23 = 0;
      do {
        uVar14 = uVar23;
        uVar23 = uVar14 + 1;
      } while (local_a8[uVar14] != 0);
      if (uVar14 + 1 < 0x60) {
        local_a8[uVar14] = abStack_3c[uVar5 + 1];
        local_a8[uVar14 + 1] = 0;
      }
      pbVar2 = abStack_3c + uVar5;
      uVar5 = uVar5 - 2;
      uVar23 = 0;
      do {
        uVar14 = uVar23;
        uVar23 = uVar14 + 1;
      } while (local_a8[uVar14] != 0);
      uVar23 = uVar5;
      if (uVar14 + 1 < 0x60) {
        local_a8[uVar14] = *pbVar2;
        local_a8[uVar14 + 1] = 0;
      }
    }
  }
  PF_PART1(local_4c8, 0) = 0;
  uVar23 = 0xffffffffffffffff;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_4c6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    *(undefined1 *)((long)&local_4c8 + uVar23) = 0x70;
    bVar24 = uVar23 != 0x3fe;
    uVar23 = uVar5 + 2;
    if (bVar24) {
      uVar23 = uVar5 + 3;
      local_4c6[uVar5] = 99;
      if (uVar23 < 0x3ff) {
        uVar23 = uVar5 + 4;
        local_4c6[uVar5 + 1] = 0x69;
        if (uVar23 < 0x3ff) {
          local_4c6[uVar5 + 2] = 0x3d;
          uVar23 = uVar5 + 5;
        }
      }
    }
  }
  acStack_8c9[uVar23 + 0x401] = '\0';
  uVar23 = local_b0;
  uVar5 = 0;
  do {
    uVar14 = uVar5;
    uVar5 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    acStack_8c9[uVar14 + 0x401] = bVar15;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar5 = local_b8;
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    acStack_8c9[uVar6 + 0x401] = bVar17;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar14 < 0x400) {
    acStack_8c9[uVar6 + 0x401] = ':';
    uVar6 = uVar14;
  }
  acStack_8c9[uVar6 + 0x401] = '\0';
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    acStack_8c9[uVar6 + 0x401] = bVar20;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    acStack_8c9[uVar6 + 0x401] = bVar1;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar14 < 0x400) {
    acStack_8c9[uVar6 + 0x401] = '.';
    uVar6 = uVar14;
  }
  acStack_8c9[uVar6 + 0x401] = '\0';
  if (bVar10 == 0) {
    uVar14 = 0;
    do {
      uVar6 = uVar14;
      uVar14 = uVar6 + 1;
    } while (acStack_8c9[uVar6 + 0x401] != '\0');
    if (uVar6 + 1 < 0x400) {
      (acStack_8c9 + uVar6 + 0x401)[0] = '0';
      (acStack_8c9 + uVar6 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar14 = 0xffffffffffffffff;
    uVar11 = (uint)bVar10;
    do {
      uVar6 = uVar14;
      abStack_3c[uVar6 + 3] = (byte)(uVar11 % 10) | 0x30;
      uVar14 = uVar6 + 1;
      if (8 < uVar14) break;
      bVar24 = 9 < uVar11;
      uVar11 = uVar11 / 10;
    } while (bVar24);
    if ((uVar14 & 1) == 0) {
      uVar7 = 0;
      do {
        uVar22 = uVar7;
        uVar7 = uVar22 + 1;
      } while (acStack_8c9[uVar22 + 0x401] != '\0');
      uVar7 = uVar14;
      if (uVar22 + 1 < 0x400) {
        acStack_8c9[uVar22 + 0x401] = abStack_3c[uVar6 + 3];
        local_4c6[uVar22 - 1] = 0;
      }
    }
    else {
      uVar7 = uVar6 + 2;
    }
    while (uVar14 != 0) {
      uVar14 = 0;
      do {
        uVar6 = uVar14;
        uVar14 = uVar6 + 1;
      } while (acStack_8c9[uVar6 + 0x401] != '\0');
      if (uVar6 + 1 < 0x400) {
        acStack_8c9[uVar6 + 0x401] = abStack_3c[uVar7 + 1];
        local_4c6[uVar6 - 1] = 0;
      }
      pbVar2 = abStack_3c + uVar7;
      uVar7 = uVar7 - 2;
      uVar14 = 0;
      do {
        uVar6 = uVar14;
        uVar14 = uVar6 + 1;
      } while (acStack_8c9[uVar6 + 0x401] != '\0');
      uVar14 = uVar7;
      if (uVar6 + 1 < 0x400) {
        acStack_8c9[uVar6 + 0x401] = *pbVar2;
        local_4c6[uVar6 - 1] = 0;
      }
    }
  }
  uVar14 = 0xffffffffffffffff;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (local_4c6[uVar6 - 1] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_4c6[uVar6 - 1] = 0x20;
    bVar24 = uVar14 != 0x3fe;
    uVar14 = uVar6 + 2;
    if (bVar24) {
      uVar14 = uVar6 + 3;
      local_4c6[uVar6] = 0x76;
      if (uVar14 < 0x3ff) {
        uVar14 = uVar6 + 4;
        local_4c6[uVar6 + 1] = 0x65;
        if (uVar14 < 0x3ff) {
          uVar14 = uVar6 + 5;
          local_4c6[uVar6 + 2] = 0x6e;
          if (uVar14 < 0x3ff) {
            uVar14 = uVar6 + 6;
            *(undefined1 *)((long)&local_4c8 + uVar6 + 5) = 100;
            if (uVar14 < 0x3ff) {
              uVar14 = uVar6 + 7;
              local_4c6[uVar6 + 4] = 0x6f;
              if (uVar14 < 0x3ff) {
                uVar14 = uVar6 + 8;
                local_4c6[uVar6 + 5] = 0x72;
                if (uVar14 < 0x3ff) {
                  local_4c6[uVar6 + 6] = 0x3d;
                  uVar14 = uVar6 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar14 + 0x401] = '\0';
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar10 = (byte)(uVar23 >> 0xc);
    bVar15 = bVar10 + 0x37;
    if (((uint)uVar23 & 0xffff) < 0xa000) {
      bVar15 = bVar10 | 0x30;
    }
    acStack_8c9[uVar6 + 0x401] = bVar15;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar11 = (uint)(uVar23 >> 8) & 0xf;
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar16 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar6 + 0x401] = cVar16;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar11 = (uint)(uVar23 >> 4) & 0xf;
  uVar14 = 0;
  do {
    uVar6 = uVar14;
    uVar14 = uVar6 + 1;
  } while (acStack_8c9[uVar6 + 0x401] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar16 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar6 + 0x401] = cVar16;
    local_4c6[uVar6 - 1] = 0;
  }
  uVar11 = (uint)uVar23 & 0xf;
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    cVar9 = (char)uVar11;
    cVar16 = cVar9 + '7';
    if (uVar11 < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar14 + 0x401] = cVar16;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar23 = 0xffffffffffffffff;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (local_4c6[uVar14 - 1] != '\0');
  if (uVar14 + 2 < 0x400) {
    local_4c6[uVar14 - 1] = 0x20;
    bVar24 = uVar23 != 0x3fe;
    uVar23 = uVar14 + 2;
    if (bVar24) {
      uVar23 = uVar14 + 3;
      local_4c6[uVar14] = 100;
      if (uVar23 < 0x3ff) {
        uVar23 = uVar14 + 4;
        local_4c6[uVar14 + 1] = 0x65;
        if (uVar23 < 0x3ff) {
          uVar23 = uVar14 + 5;
          local_4c6[uVar14 + 2] = 0x76;
          if (uVar23 < 0x3ff) {
            uVar23 = uVar14 + 6;
            *(undefined1 *)((long)&local_4c8 + uVar14 + 5) = 0x69;
            if (uVar23 < 0x3ff) {
              uVar23 = uVar14 + 7;
              local_4c6[uVar14 + 4] = 99;
              if (uVar23 < 0x3ff) {
                uVar23 = uVar14 + 8;
                local_4c6[uVar14 + 5] = 0x65;
                if (uVar23 < 0x3ff) {
                  local_4c6[uVar14 + 6] = 0x3d;
                  uVar23 = uVar14 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar23 + 0x401] = '\0';
  uVar3 = *(ushort *)(param_2 + 6);
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    bVar10 = (byte)(uVar3 >> 8);
    bVar15 = (bVar10 >> 4) + 0x37;
    if (uVar3 < 0xa000) {
      bVar15 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar14 + 0x401] = bVar15;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar18 = uVar3 >> 8 & 0xf;
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    cVar9 = (char)uVar18;
    cVar16 = cVar9 + '7';
    if (uVar18 < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar14 + 0x401] = cVar16;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar18 = uVar3 >> 4 & 0xf;
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    cVar9 = (char)uVar18;
    cVar16 = cVar9 + '7';
    if (uVar18 < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar14 + 0x401] = cVar16;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  if (uVar14 + 1 < 0x400) {
    cVar9 = (char)(uVar3 & 0xf);
    cVar16 = cVar9 + '7';
    if ((uVar3 & 0xf) < 10) {
      cVar16 = cVar9 + '0';
    }
    acStack_8c9[uVar14 + 0x401] = cVar16;
    local_4c6[uVar14 - 1] = 0;
  }
  uVar23 = 0xffffffffffffffff;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (local_4c6[uVar14 - 1] != '\0');
  if (uVar14 + 2 < 0x400) {
    local_4c6[uVar14 - 1] = 0x20;
    bVar24 = uVar23 != 0x3fe;
    uVar23 = uVar14 + 2;
    if (bVar24) {
      uVar23 = uVar14 + 3;
      local_4c6[uVar14] = 99;
      if (uVar23 < 0x3ff) {
        uVar23 = uVar14 + 4;
        local_4c6[uVar14 + 1] = 0x6c;
        if (uVar23 < 0x3ff) {
          uVar23 = uVar14 + 5;
          *(undefined1 *)((long)&local_4c8 + uVar14 + 4) = 0x61;
          if (uVar23 < 0x3ff) {
            uVar23 = uVar14 + 6;
            local_4c6[uVar14 + 3] = 0x73;
            if (uVar23 < 0x3ff) {
              uVar23 = uVar14 + 7;
              local_4c6[uVar14 + 4] = 0x73;
              if (uVar23 < 0x3ff) {
                local_4c6[uVar14 + 5] = 0x3d;
                uVar23 = uVar14 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar23 + 0x401] = '\0';
  uVar23 = 0;
  do {
    uVar14 = uVar23;
    uVar23 = uVar14 + 1;
  } while (acStack_8c9[uVar14 + 0x401] != '\0');
  bVar10 = (byte)uVar5;
  if (uVar14 + 1 < 0x400) {
    bVar15 = (byte)((uVar5 & 0xffffffff) >> 4) & 0xf;
    bVar17 = bVar15 + 0x37;
    if (bVar10 < 0xa0) {
      bVar17 = bVar15 | 0x30;
    }
    acStack_8c9[uVar14 + 0x401] = bVar17;
    local_4c6[uVar14 - 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    local_4c6[uVar5 - 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar23 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '.';
    uVar5 = uVar23;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[9];
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar15 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar15;
    local_4c6[uVar5 - 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    local_4c6[uVar5 - 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar23 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '.';
    uVar5 = uVar23;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[10];
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar15 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar15;
    local_4c6[uVar5 - 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    local_4c6[uVar5 - 1] = 0;
  }
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = ' ';
    pcVar13 = str_10004589;
    do {
      pcVar13 = pcVar13 + 1;
      acStack_8c9[uVar5 + 0x401] = cVar9;
      uVar5 = uVar5 + 1;
      cVar9 = *pcVar13;
      if (cVar9 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  bVar10 = param_2[0xb];
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar15 = bVar10 >> 4 | 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = bVar15;
    local_4c6[uVar5 - 1] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar9 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar9 = bVar10 + 0x30;
    }
    acStack_8c9[uVar5 + 0x401] = cVar9;
    local_4c6[uVar5 - 1] = 0;
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar23 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = ' ';
    uVar5 = uVar23;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  uVar23 = 0xffffffffffffffff;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (local_4c6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    local_4c6[uVar5 - 1] = 99;
    bVar24 = uVar23 != 0x3fe;
    uVar23 = uVar5 + 2;
    if (bVar24) {
      uVar23 = uVar5 + 3;
      local_4c6[uVar5] = 0x6f;
      if (uVar23 < 0x3ff) {
        uVar23 = uVar5 + 4;
        local_4c6[uVar5 + 1] = 0x6d;
        if (uVar23 < 0x3ff) {
          uVar23 = uVar5 + 5;
          *(undefined1 *)((long)&local_4c8 + uVar5 + 4) = 0x6d;
          if (uVar23 < 0x3ff) {
            uVar23 = uVar5 + 6;
            local_4c6[uVar5 + 3] = 0x61;
            if (uVar23 < 0x3ff) {
              uVar23 = uVar5 + 7;
              local_4c6[uVar5 + 4] = 0x6e;
              if (uVar23 < 0x3ff) {
                local_4c6[uVar5 + 5] = 100;
                uVar23 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8c9[uVar23 + 0x401] = '\0';
  uVar23 = 0;
  do {
    uVar5 = uVar23;
    uVar23 = uVar5 + 1;
  } while (acStack_8c9[uVar5 + 0x401] != '\0');
  if (uVar23 < 0x400) {
    acStack_8c9[uVar5 + 0x401] = '=';
    uVar5 = uVar23;
  }
  acStack_8c9[uVar5 + 0x401] = '\0';
  iVar19 = 8;
  do {
    uVar21 = uVar11 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
    cVar9 = (char)uVar21;
    uVar23 = 0;
    do {
      uVar5 = uVar23;
      uVar23 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar16 = cVar9 + '7';
      if (uVar21 < 10) {
        cVar16 = cVar9 + '0';
      }
      acStack_8c9[uVar5 + 0x401] = cVar16;
      local_4c6[uVar5 - 1] = 0;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  uVar23 = 0;
  do {
    uVar11 = *(uint *)(param_2 + uVar23 * 4 + 0x14);
    if (uVar11 != 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar14 = uVar5;
        uVar5 = uVar14 + 1;
      } while (local_4c6[uVar14 - 1] != '\0');
      if (uVar14 + 2 < 0x400) {
        local_4c6[uVar14 - 1] = 0x20;
        bVar24 = uVar5 != 0x3fe;
        uVar5 = uVar14 + 2;
        if (bVar24) {
          uVar5 = uVar14 + 3;
          local_4c6[uVar14] = 0x62;
          if (uVar5 < 0x3ff) {
            uVar5 = uVar14 + 4;
            local_4c6[uVar14 + 1] = 0x61;
            if (uVar5 < 0x3ff) {
              local_4c6[uVar14 + 2] = 0x72;
              uVar5 = uVar14 + 5;
            }
          }
        }
      }
      acStack_8c9[uVar5 + 0x401] = '\0';
      if (uVar23 == 0) {
        uVar5 = 0;
        do {
          uVar14 = uVar5;
          uVar5 = uVar14 + 1;
        } while (acStack_8c9[uVar14 + 0x401] != '\0');
        if (uVar14 + 1 < 0x400) {
          (acStack_8c9 + uVar14 + 0x401)[0] = '0';
          (acStack_8c9 + uVar14 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar14 = 0xffffffffffffffff;
        uVar5 = uVar23;
        do {
          uVar6 = uVar14;
          uVar14 = uVar5 & 0xffffffff;
          uVar21 = (uint)uVar5;
          uVar5 = uVar14 / 10;
          abStack_3c[uVar6 + 3] = (char)uVar14 + (char)uVar5 * -10 | 0x30;
          uVar14 = uVar6 + 1;
          if (8 < uVar14) break;
        } while (9 < uVar21);
        if ((uVar14 & 1) == 0) {
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            uVar5 = uVar7 + 1;
          } while (acStack_8c9[uVar7 + 0x401] != '\0');
          uVar5 = uVar14;
          if (uVar7 + 1 < 0x400) {
            acStack_8c9[uVar7 + 0x401] = abStack_3c[uVar6 + 3];
            local_4c6[uVar7 - 1] = 0;
          }
        }
        else {
          uVar5 = uVar6 + 2;
        }
        while (uVar14 != 0) {
          uVar14 = 0;
          do {
            uVar6 = uVar14;
            uVar14 = uVar6 + 1;
          } while (acStack_8c9[uVar6 + 0x401] != '\0');
          if (uVar6 + 1 < 0x400) {
            acStack_8c9[uVar6 + 0x401] = abStack_3c[uVar5 + 1];
            local_4c6[uVar6 - 1] = 0;
          }
          pbVar2 = abStack_3c + uVar5;
          uVar5 = uVar5 - 2;
          uVar14 = 0;
          do {
            uVar6 = uVar14;
            uVar14 = uVar6 + 1;
          } while (acStack_8c9[uVar6 + 0x401] != '\0');
          uVar14 = uVar5;
          if (uVar6 + 1 < 0x400) {
            acStack_8c9[uVar6 + 0x401] = *pbVar2;
            local_4c6[uVar6 - 1] = 0;
          }
        }
      }
      uVar5 = 0;
      do {
        uVar14 = uVar5;
        uVar5 = uVar14 + 1;
      } while (acStack_8c9[uVar14 + 0x401] != '\0');
      if (uVar5 < 0x400) {
        acStack_8c9[uVar14 + 0x401] = '=';
        uVar14 = uVar5;
      }
      acStack_8c9[uVar14 + 0x401] = '\0';
      iVar19 = 8;
      do {
        uVar21 = uVar11 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar21;
        uVar5 = 0;
        do {
          uVar14 = uVar5;
          uVar5 = uVar14 + 1;
        } while (acStack_8c9[uVar14 + 0x401] != '\0');
        if (uVar14 + 1 < 0x400) {
          cVar16 = cVar9 + '7';
          if (uVar21 < 10) {
            cVar16 = cVar9 + '0';
          }
          acStack_8c9[uVar14 + 0x401] = cVar16;
          local_4c6[uVar14 - 1] = 0;
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    lVar4 = local_c0;
    uVar23 = uVar23 + 1;
  } while (uVar23 != 6);
  if (acStack_8c9[1] != '\0') {
    uVar23 = 0;
    do {
      uVar5 = uVar23;
      uVar23 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar23 < 0x400) {
      acStack_8c9[uVar5 + 0x401] = ' ';
      uVar5 = uVar23;
    }
    acStack_8c9[uVar5 + 0x401] = '\0';
    uVar23 = 0;
    do {
      uVar5 = uVar23;
      uVar23 = uVar5 + 1;
    } while (acStack_8c9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      pcVar13 = acStack_8c9 + 2;
      cVar9 = acStack_8c9[1];
      do {
        acStack_8c9[uVar5 + 0x401] = cVar9;
        uVar5 = uVar5 + 1;
        cVar9 = *pcVar13;
        if (cVar9 == '\0') break;
        pcVar13 = pcVar13 + 1;
      } while (uVar5 < 0x3ff);
    }
    acStack_8c9[uVar5 + 0x401] = '\0';
  }
  if ((lVar4 != 0) && (pcVar8 = (code *)(ulong)*(uint *)(lVar4 + 0xc), pcVar8 != (code *)0x0)) {
    (*pcVar8)(local_a8,pcVar12,&local_4c8);
  }
  return;
}

#undef str_1000450e
#undef str_1000451b
#undef str_10004535
#undef str_10004545
#undef str_10004554
#undef str_10004571
#undef str_10004589
#undef acStack_8c9
#undef cStack_4c9
#undef abStack_3c
#undef local_4c8
#undef local_4c6
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

undefined8
recovered_10003d90(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef str_10004594
#define str_10004594 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x189U)))
#undef str_1000459f
#define str_1000459f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x194U)))
#undef str_100045ae
#define str_100045ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a3U)))
#undef str_100045bf
#define str_100045bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_100045d2
#define str_100045d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_100045e5
#define str_100045e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_100045f5
#define str_100045f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#undef str_10004604
#define str_10004604 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_10004613
#define str_10004613 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10004624
#define str_10004624 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x219U)))
#undef str_1000462f
#define str_1000462f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000463b
#define str_1000463b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x230U)))
#undef str_10004645
#define str_10004645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_1000464e
#define str_1000464e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10004659
#define str_10004659 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#undef str_10004662
#define str_10004662 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x257U)))
#undef str_1000466a
#define str_1000466a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
#undef str_10004673
#define str_10004673 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x268U)))
#undef str_1000467a
#define str_1000467a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_1000468d
#define str_1000468d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x282U)))
#undef str_100046a0
#define str_100046a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x295U)))
#undef str_100046b3
#define str_100046b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004010
 */

char * recovered_10004010(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_10004594;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000464e;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_10004645;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_10004126;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_10004126:
        return str_10004673;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000466a;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_10004659;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000462f;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100041ca;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000463b;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10004662;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000459f;
      case 0x1001:
      case 0x1042:
        return str_100045ae;
      case 0x1002:
      case 0x1045:
        return str_100045bf;
      case 0x1003:
      case 0x1043:
        return str_100045d2;
      case 0x1004:
      case 0x1048:
        return str_100045e5;
      case 0x1005:
      case 0x1044:
        return str_100045f5;
      default:
        return str_10004624;
      case 0x1050:
        return str_10004604;
      case 0x1052:
        return str_10004613;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_100046a0;
    case 2:
      return str_1000468d;
    case 3:
      return str_1000467a;
    case 4:
      pcVar2 = str_100046b3;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100041ca:
        pcVar2 = recovered_100043a0((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_10004594
#undef str_1000459f
#undef str_100045ae
#undef str_100045bf
#undef str_100045d2
#undef str_100045e5
#undef str_100045f5
#undef str_10004604
#undef str_10004613
#undef str_10004624
#undef str_1000462f
#undef str_1000463b
#undef str_10004645
#undef str_1000464e
#undef str_10004659
#undef str_10004662
#undef str_1000466a
#undef str_10004673
#undef str_1000467a
#undef str_1000468d
#undef str_100046a0
#undef str_100046b3

#undef DAT_100046c9
#define DAT_100046c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef DAT_100046ce
#define DAT_100046ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c3U)))
#undef DAT_100046d3
#define DAT_100046d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100046d8
#define DAT_100046d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_100046dd
#define str_100046dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_100046e8
#define str_100046e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_100046f1
#define str_100046f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043a0
 */

char * recovered_100043a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_100046c9;
    }
    if (param_1 == 0x10) {
      return &DAT_100046ce;
    }
    if (param_1 == 0x20) {
      return &DAT_100046d3;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_100046d8;
    }
    if (param_1 == 0x80) {
      return str_100046dd;
    }
    if (param_1 == 0xfe) {
      return str_100046e8;
    }
  }
  return str_100046f1;
}

#undef DAT_100046c9
#undef DAT_100046ce
#undef DAT_100046d3
#undef DAT_100046d8
#undef str_100046dd
#undef str_100046e8
#undef str_100046f1

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
