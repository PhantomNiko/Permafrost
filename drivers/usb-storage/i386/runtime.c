/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da0
 */

void * recovered_10000da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef str_10003c28
#define str_10003c28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_10003c3c
#define str_10003c3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_10003c5a
#define str_10003c5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_10003c6b
#define str_10003c6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bfU)))
#undef str_10003c7f
#define str_10003c7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10003c94
#define str_10003c94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10003ca8
#define str_10003ca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10003cae
#define str_10003cae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
#undef str_10003cc8
#define str_10003cc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_10003cf3
#define str_10003cf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
#undef str_10003d02
#define str_10003d02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#undef str_10003d09
#define str_10003d09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_10003d19
#define str_10003d19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_10003d28
#define str_10003d28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10003f56
#define str_10003f56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aaU)))
#undef str_10003f6c
#define str_10003f6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_10003f7f
#define str_10003f7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_10003f86
#define str_10003f86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4daU)))
#undef str_10003f8f
#define str_10003f8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e3U)))
#undef str_10003f97
#define str_10003f97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ebU)))
#undef str_10003fa6
#define str_10003fa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4faU)))
#define local_600 (*(uint *)(frame + 16))
#define local_5fc (*(uint *)(frame + 20))
#define local_5f8 (*(uint *)(frame + 24))
#define local_5f4 (*(uint *)(frame + 28))
#define local_5f0 (*(uint *)(frame + 32))
#define local_5ec (*(uint *)(frame + 36))
#define local_5e8 (*(uint *)(frame + 40))
#define local_5c8 (*(undefined2 *)(frame + 72))
#define local_588 (*(undefined2 *)(frame + 136))
#define local_528 (*(undefined2 *)(frame + 232))
#define local_128 (*(undefined2 *)(frame + 1256))
#define local_11c (*(char *)(frame + 1268))
#define local_c4 (*(uint *)(frame + 1356))
#define local_88 (*(uint *)(frame + 1416))
#define local_84 (*(uint *)(frame + 1420))
#define local_1c (*(uint *)(frame + 1524))
#define local_18 (*(uint *)(frame + 1528))
#define local_14 (*(uint *)(frame + 1532))
#define cStack_5c9 (*(char *)(frame + 71))
#define cStack_589 (*(char *)(frame + 135))
#define cStack_529 (*(char *)(frame + 231))
#define bStack_129 (*(byte *)(frame + 1255))
#define abStack_27 (*(byte (*)[11])(frame + 1513))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db0
 */

int recovered_10000db0(int *api)

{
  unsigned char frame[1584] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char cVar8;
  undefined1 in_DL;
  byte bVar9;
  uint uVar10;
  uint uVar11;

  local_14 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  local_18 = api[2];
  PF_PART1(local_528, 0) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x60) {
    cVar8 = 'q';
    pcVar7 = str_10003c28;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x5f);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x60) {
    cVar8 = ':';
    pcVar7 = str_10003cf3;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x5f);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  if (api[1] == 0) {
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar4 + 1 < 0x60) {
      *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
    }
  }
  else {
    uVar10 = api[1];
    uVar4 = 0;
    do {
      *(byte *)((int)&local_128 + uVar4) = (byte)(uVar10 % 10) | 0x30;
      uVar11 = uVar4 + 1;
      if (8 < uVar4) break;
      bVar2 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar4 = uVar11;
    } while (bVar2);
    do {
      pbVar1 = &bStack_129 + uVar11;
      uVar11 = uVar11 - 1;
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        uVar10 = uVar4 + 1;
      } while (*(char *)((int)&local_528 + uVar4) != '\0');
      if (uVar4 + 1 < 0x60) {
        *(byte *)((int)&local_528 + uVar4) = *pbVar1;
        *(undefined1 *)((int)&local_528 + uVar4 + 1) = 0;
      }
    } while (uVar11 != 0);
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x60) {
    cVar8 = ' ';
    pcVar7 = str_10003d02;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x5f);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  if ((0x2b < local_18) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(&local_528);
  }
  PF_PART1(local_528, 0) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 't';
    pcVar7 = str_10003c3c;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 'r';
    pcVar7 = str_10003c5a;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 'r';
    pcVar7 = str_10003c6b;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 'w';
    pcVar7 = str_10003c7f;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x34;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x39;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x36;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 'f';
    pcVar7 = str_10003c94;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x31;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar8 = 'f';
    pcVar7 = str_10003ca8;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar4) = cVar8;
      uVar4 = uVar4 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
    uVar4 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar4) = 0;
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)&local_528 + uVar4) != '\0');
  if (uVar4 + 1 < 0x400) {
    *(undefined2 *)((int)&local_528 + uVar4) = 0x33;
  }
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) && ((code *)api[0xf] != (code *)0x0)) &&
     (iVar5 = (*(code *)api[0xf])(&local_128), iVar5 != 0)) {
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar8 = 'h';
      pcVar7 = str_10003d09;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)((int)&local_528 + uVar4) = cVar8;
        uVar4 = uVar4 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    if (local_c4 == 0) {
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        uVar10 = uVar4 + 1;
      } while (*(char *)((int)&local_528 + uVar4) != '\0');
      if (uVar4 + 1 < 0x400) {
        *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
      }
    }
    else {
      uVar10 = local_c4;
      uVar4 = 0;
      do {
        *(byte *)((int)&local_588 + uVar4) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar11 = uVar4 + 1;
        if (8 < uVar4) break;
        bVar2 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar4 = uVar11;
      } while (bVar2);
      do {
        pcVar7 = &cStack_589 + uVar11;
        uVar11 = uVar11 - 1;
        uVar10 = 0;
        do {
          uVar4 = uVar10;
          uVar10 = uVar4 + 1;
        } while (*(char *)((int)&local_528 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          *(char *)((int)&local_528 + uVar4) = *pcVar7;
          *(undefined1 *)((int)&local_528 + uVar4 + 1) = 0;
        }
      } while (uVar11 != 0);
    }
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar8 = 'm';
      pcVar7 = str_10003d19;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)((int)&local_528 + uVar4) = cVar8;
        uVar4 = uVar4 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    iVar5 = 8;
    do {
      uVar10 = local_88 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
      bVar9 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar9 = bVar9 | 0x30;
      }
      else {
        bVar9 = bVar9 + 0x37;
      }
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        uVar10 = uVar4 + 1;
      } while (*(char *)((int)&local_528 + uVar4) != '\0');
      if (uVar4 + 1 < 0x400) {
        *(byte *)((int)&local_528 + uVar4) = bVar9;
        *(undefined1 *)((int)&local_528 + uVar4 + 1) = 0;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x20;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar8 = 'm';
      pcVar7 = str_10003d28;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)((int)&local_528 + uVar4) = cVar8;
        uVar4 = uVar4 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_528 + uVar4) = 0x3d;
      uVar4 = uVar10;
    }
    *(undefined1 *)((int)&local_528 + uVar4) = 0;
    if (local_84 == 0) {
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        uVar10 = uVar4 + 1;
      } while (*(char *)((int)&local_528 + uVar4) != '\0');
      if (uVar4 + 1 < 0x400) {
        *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
      }
    }
    else {
      uVar10 = local_84;
      uVar4 = 0;
      do {
        *(byte *)((int)&local_588 + uVar4) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar11 = uVar4 + 1;
        if (8 < uVar4) break;
        bVar2 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar4 = uVar11;
      } while (bVar2);
      do {
        pcVar7 = &cStack_589 + uVar11;
        uVar11 = uVar11 - 1;
        uVar10 = 0;
        do {
          uVar4 = uVar10;
          uVar10 = uVar4 + 1;
        } while (*(char *)((int)&local_528 + uVar4) != '\0');
        if (uVar4 + 1 < 0x400) {
          *(char *)((int)&local_528 + uVar4) = *pcVar7;
          *(undefined1 *)((int)&local_528 + uVar4 + 1) = 0;
        }
      } while (uVar11 != 0);
    }
  }
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar5 = (*(code *)api[3])(str_10003d28 + 0xf,str_10003cae,&local_528);
  if ((iVar5 == 0) || ((code *)api[6] == (code *)0x0)) {
    return 0;
  }
  iVar5 = (*(code *)api[6])(0x1000,0x1000,0x1000,1,3);
  if (iVar5 == 0) {
    return 0;
  }
  if (*api == 0x54584b57) {
    uVar10 = api[2];
    if (0x5f < uVar10) {
      if (api[0x17] != 0) {
        uVar10 = 0;
        do {
          local_18 = uVar10 & 0xff;
          iVar5 = 0;
          local_1c = uVar10;
          do {
            bVar9 = (byte)iVar5;
            iVar6 = recovered_10003670(api,(char)local_18,bVar9,0,(undefined1 *)&local_128);
            if ((iVar6 != 0) &&
               (recovered_10002680((int)api,(byte *)&local_128,(int *)&local_14), local_11c < '\0'))
            {
              in_DL = (undefined1)local_18;
              iVar6 = recovered_10003670(api,in_DL,bVar9,1,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,2,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,3,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,4,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,5,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,6,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
              iVar6 = recovered_10003670(api,in_DL,bVar9,7,(undefined1 *)&local_588);
              if (iVar6 != 0) {
                recovered_10002680((int)api,(byte *)&local_588,(int *)&local_14);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x20);
          uVar10 = local_1c + 1;
        } while (uVar10 != 8);
        if (*api != 0x54584b57) goto LAB_100024df;
      }
      uVar10 = api[2];
    }
    if (((0x47 < uVar10) && ((code *)api[0x11] != (code *)0x0)) &&
       (uVar10 = (*(code *)api[0x11])(), uVar10 != 0)) {
      uVar4 = 0;
      local_1c = uVar10;
      do {
        uVar4 = uVar4 + 1;
        if ((*api == 0x54584b57) && (0x4b < (uint)api[2])) {
          if ((code *)api[0x12] != (code *)0x0) {
            local_18 = uVar4;
            iVar5 = (*(code *)api[0x12])(uVar4,&local_600);
            uVar4 = local_18;
            if (iVar5 != 0) {
              PF_PART1(local_5c8, 0) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_5c8 + uVar4) != '\0');
              if (uVar4 + 1 < 0x40) {
                cVar8 = '/';
                pcVar7 = str_10003f56;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_5c8 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0x3f);
              }
              *(undefined1 *)((int)&local_5c8 + uVar4) = 0;
              if (local_600 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_5c8 + uVar4) != '\0');
                if (uVar4 + 1 < 0x40) {
                  *(undefined2 *)((int)&local_5c8 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = 0;
                uVar4 = local_600;
                do {
                  *(byte *)((int)&local_128 + uVar10) = (byte)(uVar4 % 10) | 0x30;
                  uVar11 = uVar10 + 1;
                  if (8 < uVar10) break;
                  bVar2 = 9 < uVar4;
                  uVar10 = uVar11;
                  uVar4 = uVar4 / 10;
                } while (bVar2);
                do {
                  pbVar1 = &bStack_129 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_5c8 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x40) {
                    *(byte *)((int)&local_5c8 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_5c8 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              PF_PART1(local_588, 0) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_588 + uVar4) != '\0');
              if (uVar4 + 1 < 0x60) {
                cVar8 = 'q';
                pcVar7 = str_10003f6c;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_588 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0x5f);
              }
              *(undefined1 *)((int)&local_588 + uVar4) = 0;
              if (local_600 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_588 + uVar4) != '\0');
                if (uVar4 + 1 < 0x60) {
                  *(undefined2 *)((int)&local_588 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = 0;
                uVar4 = local_600;
                do {
                  *(byte *)((int)&local_128 + uVar10) = (byte)(uVar4 % 10) | 0x30;
                  uVar11 = uVar10 + 1;
                  if (8 < uVar10) break;
                  bVar2 = 9 < uVar4;
                  uVar10 = uVar11;
                  uVar4 = uVar4 / 10;
                } while (bVar2);
                do {
                  pbVar1 = &bStack_129 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_588 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x60) {
                    *(byte *)((int)&local_588 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_588 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              PF_PART1(local_128, 0) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 'd';
                pcVar7 = str_10003f7f;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar4 = local_5fc >> 4 & 0xf;
              uVar10 = 0;
              do {
                uVar11 = uVar10;
                uVar10 = uVar11 + 1;
              } while (*(char *)((int)&local_128 + uVar11) != '\0');
              if (uVar11 + 1 < 0x100) {
                bVar9 = (byte)uVar4;
                if (uVar4 < 10) {
                  bVar9 = bVar9 | 0x30;
                }
                else {
                  bVar9 = bVar9 + 0x37;
                }
                *(byte *)((int)&local_128 + uVar11) = bVar9;
                *(undefined1 *)((int)&local_128 + uVar11 + 1) = 0;
              }
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                bVar9 = (byte)(local_5fc & 0xf);
                if ((local_5fc & 0xf) < 10) {
                  bVar9 = bVar9 | 0x30;
                }
                else {
                  bVar9 = bVar9 + 0x37;
                }
                *(byte *)((int)&local_128 + uVar4) = bVar9;
                *(undefined1 *)((int)&local_128 + uVar4 + 1) = 0;
              }
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x20;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 's';
                pcVar7 = str_10003f86;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x3d;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              if (local_5f8 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_128 + uVar4) != '\0');
                if (uVar4 + 1 < 0x100) {
                  *(undefined2 *)((int)&local_128 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = local_5f8;
                uVar4 = 0;
                do {
                  abStack_27[uVar4 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
                  uVar11 = uVar4 + 1;
                  if (8 < uVar4) break;
                  bVar2 = 9 < uVar10;
                  uVar10 = uVar10 / 10;
                  uVar4 = uVar11;
                } while (bVar2);
                do {
                  pbVar1 = abStack_27 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_128 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x100) {
                    *(byte *)((int)&local_128 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_128 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x20;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 's';
                pcVar7 = str_10003f8f;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x3d;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              if (local_5f4 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_128 + uVar4) != '\0');
                if (uVar4 + 1 < 0x100) {
                  *(undefined2 *)((int)&local_128 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = local_5f4;
                uVar4 = 0;
                do {
                  abStack_27[uVar4 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
                  uVar11 = uVar4 + 1;
                  if (8 < uVar4) break;
                  bVar2 = 9 < uVar10;
                  uVar10 = uVar10 / 10;
                  uVar4 = uVar11;
                } while (bVar2);
                do {
                  pbVar1 = abStack_27 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_128 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x100) {
                    *(byte *)((int)&local_128 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_128 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x20;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 'b';
                pcVar7 = str_10003f97;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x3d;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              if (local_5f0 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_128 + uVar4) != '\0');
                if (uVar4 + 1 < 0x100) {
                  *(undefined2 *)((int)&local_128 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = local_5f0;
                uVar4 = 0;
                do {
                  abStack_27[uVar4 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
                  uVar11 = uVar4 + 1;
                  if (8 < uVar4) break;
                  bVar2 = 9 < uVar10;
                  uVar10 = uVar10 / 10;
                  uVar4 = uVar11;
                } while (bVar2);
                do {
                  pbVar1 = abStack_27 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_128 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x100) {
                    *(byte *)((int)&local_128 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_128 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x20;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 'f';
                pcVar7 = str_10003ca8;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x3d;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              iVar5 = 8;
              do {
                uVar4 = local_5ec >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
                bVar3 = (byte)uVar4;
                bVar9 = bVar3 + 0x37;
                uVar10 = 0;
                do {
                  uVar11 = uVar10;
                  uVar10 = uVar11 + 1;
                } while (*(char *)((int)&local_128 + uVar11) != '\0');
                if (uVar11 + 1 < 0x100) {
                  if (uVar4 < 10) {
                    bVar9 = bVar3 | 0x30;
                  }
                  *(byte *)((int)&local_128 + uVar11) = bVar9;
                  *(undefined1 *)((int)&local_128 + uVar11 + 1) = 0;
                }
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x20;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar4 + 1 < 0x100) {
                cVar8 = 'p';
                pcVar7 = str_10003fa6;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)((int)&local_128 + uVar4) = cVar8;
                  uVar4 = uVar4 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar4 < 0xff);
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              uVar10 = 0;
              do {
                uVar4 = uVar10;
                uVar10 = uVar4 + 1;
              } while (*(char *)((int)&local_128 + uVar4) != '\0');
              if (uVar10 < 0x100) {
                *(undefined1 *)((int)&local_128 + uVar4) = 0x3d;
                uVar4 = uVar10;
              }
              *(undefined1 *)((int)&local_128 + uVar4) = 0;
              if (local_5e8 == 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar10;
                  uVar10 = uVar4 + 1;
                } while (*(char *)((int)&local_128 + uVar4) != '\0');
                if (uVar4 + 1 < 0x100) {
                  *(undefined2 *)((int)&local_128 + uVar4) = 0x30;
                }
              }
              else {
                uVar10 = local_5e8;
                uVar4 = 0;
                do {
                  abStack_27[uVar4 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
                  uVar11 = uVar4 + 1;
                  if (8 < uVar4) break;
                  bVar2 = 9 < uVar10;
                  uVar10 = uVar10 / 10;
                  uVar4 = uVar11;
                } while (bVar2);
                do {
                  pbVar1 = abStack_27 + uVar11;
                  uVar11 = uVar11 - 1;
                  uVar10 = 0;
                  do {
                    uVar4 = uVar10;
                    uVar10 = uVar4 + 1;
                  } while (*(char *)((int)&local_128 + uVar4) != '\0');
                  if (uVar4 + 1 < 0x100) {
                    *(byte *)((int)&local_128 + uVar4) = *pbVar1;
                    *(undefined1 *)((int)&local_128 + uVar4 + 1) = 0;
                  }
                } while (uVar11 != 0);
              }
              uVar10 = local_1c;
              uVar4 = local_18;
              if ((code *)api[3] != (code *)0x0) {
                (*(code *)api[3])(&local_5c8,&local_588,&local_128);
                uVar4 = local_18;
              }
            }
          }
        }
      } while (uVar4 != uVar10);
    }
  }
LAB_100024df:
  uVar4 = local_14;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_528 + uVar11) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_528 + uVar11) != '\0');
  if (uVar11 + 1 < 0x400) {
    cVar8 = 'p';
    pcVar7 = str_10003cc8;
    do {
      pcVar7 = pcVar7 + 1;
      *(char *)((int)&local_528 + uVar11) = cVar8;
      uVar11 = uVar11 + 1;
      cVar8 = *pcVar7;
      if (cVar8 == '\0') break;
    } while (uVar11 < 0x3ff);
  }
  *(undefined1 *)((int)&local_528 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_528 + uVar11) != '\0');
  if (uVar10 < 0x400) {
    *(undefined1 *)((int)&local_528 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_528 + uVar11) = 0;
  if (uVar4 == 0) {
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
    } while (*(char *)((int)&local_528 + uVar4) != '\0');
    if (uVar4 + 1 < 0x400) {
      *(undefined2 *)((int)&local_528 + uVar4) = 0x30;
    }
  }
  else {
    uVar10 = 0;
    do {
      *(byte *)((int)&local_128 + uVar10) = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      uVar11 = uVar10 + 1;
      if (8 < uVar10) break;
      bVar2 = 9 < uVar4;
      uVar4 = uVar4 / 10;
      uVar10 = uVar11;
    } while (bVar2);
    do {
      pbVar1 = &bStack_129 + uVar11;
      uVar11 = uVar11 - 1;
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        uVar10 = uVar4 + 1;
      } while (*(char *)((int)&local_528 + uVar4) != '\0');
      if (uVar4 + 1 < 0x400) {
        *(byte *)((int)&local_528 + uVar4) = *pbVar1;
        *(undefined1 *)((int)&local_528 + uVar4 + 1) = 0;
      }
    } while (uVar11 != 0);
  }
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_10003d28 + 0xf,str_10003cae,&local_528);
  }
  return 1;
}

#undef str_10003c28
#undef str_10003c3c
#undef str_10003c5a
#undef str_10003c6b
#undef str_10003c7f
#undef str_10003c94
#undef str_10003ca8
#undef str_10003cae
#undef str_10003cc8
#undef str_10003cf3
#undef str_10003d02
#undef str_10003d09
#undef str_10003d19
#undef str_10003d28
#undef str_10003f56
#undef str_10003f6c
#undef str_10003f7f
#undef str_10003f86
#undef str_10003f8f
#undef str_10003f97
#undef str_10003fa6
#undef local_600
#undef local_5fc
#undef local_5f8
#undef local_5f4
#undef local_5f0
#undef local_5ec
#undef local_5e8
#undef local_5c8
#undef local_588
#undef local_528
#undef local_128
#undef local_11c
#undef local_c4
#undef local_88
#undef local_84
#undef local_1c
#undef local_18
#undef local_14
#undef cStack_5c9
#undef cStack_589
#undef cStack_529
#undef bStack_129
#undef abStack_27

#undef DAT_10003db4
#define DAT_10003db4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x308U)))
#undef DAT_10003de6
#define DAT_10003de6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10003d38
#define str_10003d38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28cU)))
#undef str_10003d45
#define str_10003d45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_10003d5f
#define str_10003d5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b3U)))
#undef str_10003d6f
#define str_10003d6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
#undef str_10003d7e
#define str_10003d7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_10003d9b
#define str_10003d9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2efU)))
#undef str_10003db8
#define str_10003db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30cU)))
#undef str_10003dc1
#define str_10003dc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#undef str_10003dca
#define str_10003dca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_10003dd2
#define str_10003dd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10003ddd
#define str_10003ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#define local_492 (*(undefined2 *)(frame + 1054))
#define local_92 (*(undefined2 *)(frame + 2078))
#define local_28 (*(int *)(frame + 2184))
#define local_24 (*(char * *)(frame + 2188))
#define acStack_893 (*(char (*)[1024])(frame + 29))
#define local_20 (*(uint *)(frame + 2192))
#define bStack_493 (*(byte *)(frame + 1053))
#define local_1c (*(byte *)(frame + 2196))
#define local_1b (*(byte *)(frame + 2197))
#define bStack_93 (*(byte *)(frame + 2077))
#define local_1a (*(byte *)(frame + 2198))
#define local_19 (*(byte *)(frame + 2199))
#define abStack_33 (*(byte (*)[11])(frame + 2173))
#define local_18 (*(byte * *)(frame + 2200))
#define local_11 (*(byte *)(frame + 2207))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

void recovered_10002680(int in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2256] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  byte bVar14;
  char *pcVar12;
  int iVar13;
  undefined3 uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;

  bVar14 = in_EDX[8];
  iVar13 = (uint)bVar14 << 8;
  local_20 = (uint)*(ushort *)(in_EDX + 4);
  local_18 = in_EDX;
  if (*(ushort *)(in_EDX + 4) == 0x1af4) {
    uVar2 = *(ushort *)(in_EDX + 6);
    bVar4 = true;
    if (uVar2 < 0x1042) {
      if ((uVar2 != 0x1001) && (uVar2 != 0x1004)) goto LAB_100026d2;
    }
    else if (uVar2 != 0x1042) {
      if (uVar2 != 0x1048) goto LAB_100026d2;
      goto LAB_100026d4;
    }
  }
  else {
LAB_100026d2:
    bVar4 = false;
LAB_100026d4:
    if ((bool)(bVar14 != 1 & (bVar4 ^ 1U))) {
      return;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_893[1] = '\0';
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 1] != '\0');
  if (uVar9 + 1 < 0x400) {
    iVar13 = CONCAT31((uint3)bVar14,0x72);
    pcVar12 = str_10003d38;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar9 + 1] = (char)iVar13;
      uVar9 = uVar9 + 1;
      iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),*pcVar12);
      if (*pcVar12 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_893[uVar9 + 1] = '\0';
  if (bVar4) {
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      uVar6 = uVar9 + 1;
    } while (acStack_893[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x400) {
      cVar11 = ' ';
      pcVar12 = str_10003d45;
      do {
        pcVar12 = pcVar12 + 1;
        acStack_893[uVar9 + 1] = cVar11;
        uVar9 = uVar9 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar9 < 0x3ff);
    }
  }
  else {
    if ((char)((uint)iVar13 >> 8) != '\x01') goto LAB_1000283f;
    if (local_18[9] == 6) {
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        uVar6 = uVar9 + 1;
      } while (acStack_893[uVar9 + 1] != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar12 = str_10003d5f;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_893[uVar9 + 1] = cVar11;
          uVar9 = uVar9 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar9 < 0x3ff);
      }
    }
    else {
      if (local_18[9] != 1) goto LAB_1000283f;
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        uVar6 = uVar9 + 1;
      } while (acStack_893[uVar9 + 1] != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar12 = str_10003d6f;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_893[uVar9 + 1] = cVar11;
          uVar9 = uVar9 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar9 < 0x3ff);
      }
    }
  }
  acStack_893[uVar9 + 1] = '\0';
LAB_1000283f:
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 1] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar12 = str_10003d7e;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar9 + 1] = cVar11;
      uVar9 = uVar9 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_893[uVar9 + 1] = '\0';
  local_24 = recovered_10003880((int)local_18);
  PF_PART1(local_92, 0) = 0;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_33[uVar9 - 0x5f] != 0);
  if (uVar9 + 1 < 0x60) {
    bVar14 = 0x2f;
    pcVar12 = str_10003d9b;
    do {
      pcVar12 = pcVar12 + 1;
      abStack_33[uVar9 - 0x5f] = bVar14;
      uVar9 = uVar9 + 1;
      bVar14 = *pcVar12;
      if (bVar14 == 0) break;
    } while (uVar9 < 0x5f);
  }
  abStack_33[uVar9 - 0x5f] = 0;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_33[uVar9 - 0x5f] != 0);
  if (uVar6 < 0x60) {
    abStack_33[uVar9 - 0x5f] = 0x2f;
    uVar9 = uVar6;
  }
  abStack_33[uVar9 - 0x5f] = 0;
  bVar14 = *local_18;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (abStack_33[uVar9 - 0x5f] != 0);
  uVar15 = (undefined3)((uint)iVar13 >> 8);
  if (bVar14 < 0xa0) {
    uVar6 = CONCAT31(uVar15,bVar14 >> 4) | 0x30;
  }
  else {
    uVar6 = CONCAT31(uVar15,(bVar14 >> 4) + 0x37);
  }
  if (uVar9 + 1 < 0x60) {
    abStack_33[uVar9 - 0x5f] = (byte)uVar6;
    abStack_33[uVar9 - 0x5e] = 0;
  }
  bVar14 = bVar14 & 0xf;
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (abStack_33[uVar18 - 0x5f] != 0);
  if (bVar14 < 10) {
    bVar14 = bVar14 | 0x30;
  }
  else {
    bVar14 = bVar14 + 0x37;
  }
  if (uVar18 + 1 < 0x60) {
    abStack_33[uVar18 - 0x5f] = bVar14;
    abStack_33[uVar18 - 0x5e] = 0;
  }
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (abStack_33[uVar18 - 0x5f] != 0);
  if (uVar9 < 0x60) {
    abStack_33[uVar18 - 0x5f] = 0x3a;
    uVar18 = uVar9;
  }
  abStack_33[uVar18 - 0x5f] = 0;
  bVar7 = local_18[1];
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (abStack_33[uVar18 - 0x5f] != 0);
  if (bVar7 < 0xa0) {
    uVar9 = CONCAT11(bVar14,bVar7 >> 4) | 0x30;
  }
  else {
    uVar9 = (uint)CONCAT11(bVar14,(bVar7 >> 4) + 0x37);
  }
  if (uVar18 + 1 < 0x60) {
    abStack_33[uVar18 - 0x5f] = (byte)uVar9;
    abStack_33[uVar18 - 0x5e] = 0;
  }
  bVar7 = bVar7 & 0xf;
  uVar18 = 0;
  do {
    uVar16 = uVar18;
    uVar18 = uVar16 + 1;
  } while (abStack_33[uVar16 - 0x5f] != 0);
  if (bVar7 < 10) {
    bVar7 = bVar7 | 0x30;
  }
  else {
    bVar7 = bVar7 + 0x37;
  }
  if (uVar16 + 1 < 0x60) {
    abStack_33[uVar16 - 0x5f] = bVar7;
    abStack_33[uVar16 - 0x5e] = 0;
  }
  uVar18 = 0;
  do {
    uVar16 = uVar18;
    uVar18 = uVar16 + 1;
  } while (abStack_33[uVar16 - 0x5f] != 0);
  local_28 = in_ECX;
  if (uVar18 < 0x60) {
    abStack_33[uVar16 - 0x5f] = 0x2e;
    uVar16 = uVar18;
  }
  abStack_33[uVar16 - 0x5f] = 0;
  uVar18 = (uint)local_18[2];
  local_11 = (byte)(uVar6 >> 8);
  local_1c = bVar7;
  local_1b = (byte)uVar9;
  if (uVar18 == 0) {
    uVar16 = 0;
    do {
      uVar5 = uVar16;
      uVar16 = uVar5 + 1;
    } while (abStack_33[uVar5 - 0x5f] != 0);
    if (uVar5 + 1 < 0x60) {
      (abStack_33 + (uVar5 - 0x5f))[0] = 0x30;
      (abStack_33 + (uVar5 - 0x5f))[1] = 0;
    }
  }
  else {
    local_19 = (byte)uVar6;
    local_1a = (byte)(uVar9 >> 8);
    uVar6 = uVar18;
    uVar9 = 0;
    do {
      acStack_893[uVar9 + 0x401] = (byte)(uVar6 % 10) | 0x30;
      uVar16 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar4 = 9 < uVar6;
      uVar6 = uVar6 / 10;
      uVar9 = uVar16;
    } while (bVar4);
    uVar9 = (uint)local_1a << 8;
    uVar6 = (uint)CONCAT11(local_11,local_19);
    do {
      iVar13 = uVar16 + 0x400;
      uVar16 = uVar16 - 1;
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        uVar5 = uVar10 + 1;
      } while (abStack_33[uVar10 - 0x5f] != 0);
      if (uVar10 + 1 < 0x60) {
        abStack_33[uVar10 - 0x5f] = acStack_893[iVar13];
        abStack_33[uVar10 - 0x5e] = 0;
      }
    } while (uVar16 != 0);
  }
  PF_PART1(local_492, 0) = 0;
  uVar16 = 0;
  do {
    uVar5 = uVar16;
    uVar16 = uVar5 + 1;
  } while (acStack_893[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    uVar9 = CONCAT31((int3)(uVar9 >> 8),0x70);
    pcVar12 = &DAT_10003db4;
    do {
      acStack_893[uVar5 + 0x401] = (char)uVar9;
      uVar5 = uVar5 + 1;
      uVar9 = CONCAT31((int3)(uVar9 >> 8),*pcVar12);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar5 < 0x3ff);
  }
  acStack_893[uVar5 + 0x401] = '\0';
  bVar7 = local_1b;
  bVar14 = local_1c;
  uVar16 = 0;
  do {
    uVar5 = uVar16;
    uVar16 = uVar5 + 1;
  } while (acStack_893[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_893[uVar5 + 0x401] = (char)uVar6;
    acStack_893[uVar5 + 0x402] = '\0';
  }
  uVar16 = 0;
  do {
    uVar5 = uVar16;
    uVar16 = uVar5 + 1;
  } while (acStack_893[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_893[uVar5 + 0x401] = (char)(uVar9 >> 8);
    acStack_893[uVar5 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar16 = uVar9;
    uVar9 = uVar16 + 1;
  } while (acStack_893[uVar16 + 0x401] != '\0');
  if (uVar9 < 0x400) {
    acStack_893[uVar16 + 0x401] = ':';
    uVar16 = uVar9;
  }
  acStack_893[uVar16 + 0x401] = '\0';
  uVar9 = 0;
  do {
    uVar16 = uVar9;
    uVar9 = uVar16 + 1;
  } while (acStack_893[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    acStack_893[uVar16 + 0x401] = bVar7;
    acStack_893[uVar16 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar16 = uVar9;
    uVar9 = uVar16 + 1;
  } while (acStack_893[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    acStack_893[uVar16 + 0x401] = bVar14;
    acStack_893[uVar16 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar16 = uVar9;
    uVar9 = uVar16 + 1;
  } while (acStack_893[uVar16 + 0x401] != '\0');
  if (uVar9 < 0x400) {
    acStack_893[uVar16 + 0x401] = '.';
    uVar16 = uVar9;
  }
  acStack_893[uVar16 + 0x401] = '\0';
  pbVar17 = local_18;
  if (uVar18 == 0) {
    uVar9 = 0;
    do {
      uVar18 = uVar9;
      uVar9 = uVar18 + 1;
    } while (acStack_893[uVar18 + 0x401] != '\0');
    if (uVar18 + 1 < 0x400) {
      (acStack_893 + uVar18 + 0x401)[0] = '0';
      (acStack_893 + uVar18 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar6 = 0;
    do {
      abStack_33[uVar6 + 1] = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
      pbVar17 = local_18;
      uVar9 = uVar6 + 1;
      if (8 < uVar6) break;
      bVar4 = 9 < uVar18;
      uVar6 = uVar9;
      uVar18 = uVar18 / 10;
    } while (bVar4);
    uVar6 = (uint)local_11 << 8;
    do {
      pbVar1 = abStack_33 + uVar9;
      uVar9 = uVar9 - 1;
      uVar18 = 0;
      do {
        uVar16 = uVar18;
        uVar18 = uVar16 + 1;
      } while (acStack_893[uVar16 + 0x401] != '\0');
      if (uVar16 + 1 < 0x400) {
        acStack_893[uVar16 + 0x401] = *pbVar1;
        acStack_893[uVar16 + 0x402] = '\0';
      }
    } while (uVar9 != 0);
  }
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar12 = str_10003db8;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar18 + 0x401] = cVar11;
      uVar18 = uVar18 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar18 < 0x3ff);
  }
  acStack_893[uVar18 + 0x401] = '\0';
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  uVar9 = local_20;
  if (uVar18 + 1 < 0x400) {
    bVar14 = (byte)(local_20 >> 0xc);
    if ((local_20 & 0xffff) < 0xa000) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar14;
    acStack_893[uVar18 + 0x402] = '\0';
    uVar9 = local_20;
  }
  uVar16 = uVar9 >> 8 & 0xf;
  uVar18 = 0;
  do {
    uVar5 = uVar18;
    uVar18 = uVar5 + 1;
  } while (acStack_893[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar14 = (byte)uVar16;
    if (uVar16 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar5 + 0x401] = bVar14;
    acStack_893[uVar5 + 0x402] = '\0';
  }
  uVar16 = uVar9 >> 4 & 0xf;
  uVar18 = 0;
  do {
    uVar5 = uVar18;
    uVar18 = uVar5 + 1;
  } while (acStack_893[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar14 = (byte)uVar16;
    if (uVar16 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar5 + 0x401] = bVar14;
    acStack_893[uVar5 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar16 = uVar18;
    uVar18 = uVar16 + 1;
  } while (acStack_893[uVar16 + 0x401] != '\0');
  if (uVar16 + 1 < 0x400) {
    bVar14 = (byte)(uVar9 & 0xf);
    if ((uVar9 & 0xf) < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar16 + 0x401] = bVar14;
    acStack_893[uVar16 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar12 = str_10003dc1;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar18 + 0x401] = cVar11;
      uVar18 = uVar18 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar18 < 0x3ff);
  }
  acStack_893[uVar18 + 0x401] = '\0';
  uVar2 = *(ushort *)(pbVar17 + 6);
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    bVar14 = (byte)(uVar2 >> 8);
    if (uVar2 < 0xa000) {
      bVar14 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar14 >> 4) + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar14;
    acStack_893[uVar18 + 0x402] = '\0';
  }
  uVar8 = uVar2 >> 8 & 0xf;
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    bVar14 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar14;
    acStack_893[uVar18 + 0x402] = '\0';
  }
  uVar8 = uVar2 >> 4 & 0xf;
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    bVar14 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar14;
    acStack_893[uVar18 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    bVar14 = (byte)(uVar2 & 0xf);
    if ((uVar2 & 0xf) < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar14;
    acStack_893[uVar18 + 0x402] = '\0';
  }
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar12 = str_10003dca;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar18 + 0x401] = cVar11;
      uVar18 = uVar18 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar18 < 0x3ff);
  }
  acStack_893[uVar18 + 0x401] = '\0';
  uVar9 = 0;
  do {
    uVar18 = uVar9;
    uVar9 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  bVar14 = (byte)(uVar6 >> 8);
  if (uVar18 + 1 < 0x400) {
    if (bVar14 < 0xa0) {
      bVar7 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar7 = (bVar14 >> 4) + 0x37;
    }
    acStack_893[uVar18 + 0x401] = bVar7;
    acStack_893[uVar18 + 0x402] = '\0';
  }
  bVar14 = bVar14 & 0xf;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar14;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar6 < 0x400) {
    acStack_893[uVar9 + 0x401] = '.';
    uVar9 = uVar6;
  }
  acStack_893[uVar9 + 0x401] = '\0';
  bVar14 = pbVar17[9];
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 0xa0) {
      bVar7 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar7 = (bVar14 >> 4) + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar7;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  bVar14 = bVar14 & 0xf;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar14;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar6 < 0x400) {
    acStack_893[uVar9 + 0x401] = '.';
    uVar9 = uVar6;
  }
  acStack_893[uVar9 + 0x401] = '\0';
  bVar14 = pbVar17[10];
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 0xa0) {
      bVar7 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar7 = (bVar14 >> 4) + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar7;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  bVar14 = bVar14 & 0xf;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar14;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar11 = ' ';
    pcVar12 = str_10003dd2;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar9 + 0x401] = cVar11;
      uVar9 = uVar9 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_893[uVar9 + 0x401] = '\0';
  bVar14 = pbVar17[0xb];
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 0xa0) {
      bVar7 = bVar14 >> 4 | 0x30;
    }
    else {
      bVar7 = (bVar14 >> 4) + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar7;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  bVar14 = bVar14 & 0xf;
  uVar6 = 0;
  do {
    uVar9 = uVar6;
    uVar6 = uVar9 + 1;
  } while (acStack_893[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    if (bVar14 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    acStack_893[uVar9 + 0x401] = bVar14;
    acStack_893[uVar9 + 0x402] = '\0';
  }
  uVar9 = *(uint *)(pbVar17 + 0x10);
  uVar6 = 0;
  do {
    uVar18 = uVar6;
    uVar6 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar6 < 0x400) {
    acStack_893[uVar18 + 0x401] = ' ';
    uVar18 = uVar6;
  }
  acStack_893[uVar18 + 0x401] = '\0';
  uVar6 = 0;
  do {
    uVar18 = uVar6;
    uVar6 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar18 + 1 < 0x400) {
    cVar11 = 'c';
    pcVar12 = str_10003ddd;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_893[uVar18 + 0x401] = cVar11;
      uVar18 = uVar18 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar18 < 0x3ff);
  }
  acStack_893[uVar18 + 0x401] = '\0';
  uVar6 = 0;
  do {
    uVar18 = uVar6;
    uVar6 = uVar18 + 1;
  } while (acStack_893[uVar18 + 0x401] != '\0');
  if (uVar6 < 0x400) {
    acStack_893[uVar18 + 0x401] = '=';
    uVar18 = uVar6;
  }
  acStack_893[uVar18 + 0x401] = '\0';
  iVar13 = 8;
  do {
    uVar18 = uVar9 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
    bVar7 = (byte)uVar18;
    bVar14 = bVar7 + 0x37;
    uVar6 = 0;
    do {
      uVar16 = uVar6;
      uVar6 = uVar16 + 1;
    } while (acStack_893[uVar16 + 0x401] != '\0');
    if (uVar16 + 1 < 0x400) {
      if (uVar18 < 10) {
        bVar14 = bVar7 | 0x30;
      }
      acStack_893[uVar16 + 0x401] = bVar14;
      acStack_893[uVar16 + 0x402] = '\0';
    }
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  uVar6 = 0;
  pbVar17 = local_18;
  do {
    local_20 = uVar6;
    uVar6 = *(uint *)(pbVar17 + uVar6 * 4 + 0x14);
    if (uVar6 != 0) {
      uVar9 = 0;
      do {
        uVar18 = uVar9;
        uVar9 = uVar18 + 1;
      } while (acStack_893[uVar18 + 0x401] != '\0');
      if (uVar18 + 1 < 0x400) {
        cVar11 = ' ';
        pcVar12 = &DAT_10003de6;
        do {
          acStack_893[uVar18 + 0x401] = cVar11;
          uVar18 = uVar18 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar18 < 0x3ff);
      }
      acStack_893[uVar18 + 0x401] = '\0';
      if (local_20 == 0) {
        uVar9 = 0;
        do {
          uVar18 = uVar9;
          uVar9 = uVar18 + 1;
        } while (acStack_893[uVar18 + 0x401] != '\0');
        if (uVar18 + 1 < 0x400) {
          (acStack_893 + uVar18 + 0x401)[0] = '0';
          (acStack_893 + uVar18 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar9 = local_20;
        uVar18 = 0;
        do {
          abStack_33[uVar18 + 1] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
          uVar16 = uVar18 + 1;
          if (8 < uVar18) break;
          bVar4 = 9 < uVar9;
          uVar9 = uVar9 / 10;
          uVar18 = uVar16;
        } while (bVar4);
        do {
          pbVar17 = abStack_33 + uVar16;
          uVar16 = uVar16 - 1;
          uVar9 = 0;
          do {
            uVar18 = uVar9;
            uVar9 = uVar18 + 1;
          } while (acStack_893[uVar18 + 0x401] != '\0');
          if (uVar18 + 1 < 0x400) {
            acStack_893[uVar18 + 0x401] = *pbVar17;
            acStack_893[uVar18 + 0x402] = '\0';
          }
        } while (uVar16 != 0);
        pbVar17 = local_18;
      }
      uVar9 = 0;
      do {
        uVar18 = uVar9;
        uVar9 = uVar18 + 1;
      } while (acStack_893[uVar18 + 0x401] != '\0');
      if (uVar9 < 0x400) {
        acStack_893[uVar18 + 0x401] = '=';
        uVar18 = uVar9;
      }
      acStack_893[uVar18 + 0x401] = '\0';
      iVar13 = 8;
      do {
        uVar18 = uVar6 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
        bVar7 = (byte)uVar18;
        bVar14 = bVar7 + 0x37;
        uVar9 = 0;
        do {
          uVar16 = uVar9;
          uVar9 = uVar16 + 1;
        } while (acStack_893[uVar16 + 0x401] != '\0');
        if (uVar16 + 1 < 0x400) {
          if (uVar18 < 10) {
            bVar14 = bVar7 | 0x30;
          }
          acStack_893[uVar16 + 0x401] = bVar14;
          acStack_893[uVar16 + 0x402] = '\0';
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar13 = local_28;
    uVar6 = local_20 + 1;
  } while (uVar6 != 6);
  if (acStack_893[1] != '\0') {
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      uVar6 = uVar9 + 1;
    } while (acStack_893[uVar9 + 0x401] != '\0');
    if (uVar6 < 0x400) {
      acStack_893[uVar9 + 0x401] = ' ';
      uVar9 = uVar6;
    }
    acStack_893[uVar9 + 0x401] = '\0';
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      uVar6 = uVar9 + 1;
    } while (acStack_893[uVar9 + 0x401] != '\0');
    if (uVar9 + 1 < 0x400) {
      pcVar12 = acStack_893 + 2;
      cVar11 = acStack_893[1];
      do {
        acStack_893[uVar9 + 0x401] = cVar11;
        uVar9 = uVar9 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar9 < 0x3ff);
    }
    acStack_893[uVar9 + 0x401] = '\0';
  }
  if ((iVar13 != 0) && (pcVar3 = *(code **)(iVar13 + 0xc), pcVar3 != (code *)0x0)) {
    (*pcVar3)(&local_92,local_24,&local_492);
  }
  return;
}

#undef DAT_10003db4
#undef DAT_10003de6
#undef str_10003d38
#undef str_10003d45
#undef str_10003d5f
#undef str_10003d6f
#undef str_10003d7e
#undef str_10003d9b
#undef str_10003db8
#undef str_10003dc1
#undef str_10003dca
#undef str_10003dd2
#undef str_10003ddd
#undef local_492
#undef local_92
#undef local_28
#undef local_24
#undef acStack_893
#undef local_20
#undef bStack_493
#undef local_1c
#undef local_1b
#undef bStack_93
#undef local_1a
#undef local_19
#undef abStack_33
#undef local_18
#undef local_11

#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

undefined4
recovered_10003670(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_30
#undef local_2c
#undef local_28

#undef str_10003dea
#define str_10003dea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33eU)))
#undef str_10003df5
#define str_10003df5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x349U)))
#undef str_10003e04
#define str_10003e04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x358U)))
#undef str_10003e15
#define str_10003e15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x369U)))
#undef str_10003e28
#define str_10003e28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37cU)))
#undef str_10003e3b
#define str_10003e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10003e4b
#define str_10003e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39fU)))
#undef str_10003e5a
#define str_10003e5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_10003e69
#define str_10003e69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bdU)))
#undef str_10003e7a
#define str_10003e7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_10003e85
#define str_10003e85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_10003e91
#define str_10003e91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_10003e9b
#define str_10003e9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_10003ea4
#define str_10003ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f8U)))
#undef str_10003eaf
#define str_10003eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_10003eb8
#define str_10003eb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40cU)))
#undef str_10003ec0
#define str_10003ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x414U)))
#undef str_10003ec9
#define str_10003ec9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_10003ed0
#define str_10003ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_10003ee3
#define str_10003ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#undef str_10003ef6
#define str_10003ef6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44aU)))
#undef str_10003f09
#define str_10003f09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

char * recovered_10003880(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_10003dea;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_10003ea4;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_10003e9b;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_10003ec9;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_10003ec9;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10003ec0;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_10003eaf;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_10003e85;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_100039ff;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_10003e91;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_10003eb8;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_10003df5;
    case 0x1001:
    case 0x1042:
      return str_10003e04;
    case 0x1002:
    case 0x1045:
      return str_10003e15;
    case 0x1003:
    case 0x1043:
      return str_10003e28;
    case 0x1004:
    case 0x1048:
      return str_10003e3b;
    case 0x1005:
    case 0x1044:
      return str_10003e4b;
    default:
      return str_10003e7a;
    case 0x1050:
      return str_10003e5a;
    case 0x1052:
      return str_10003e69;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_10003ef6;
  case 2:
    return str_10003ee3;
  case 3:
    return str_10003ed0;
  case 4:
    return str_10003f09;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_100039ff:
      pcVar2 = recovered_10003a50((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_10003dea;
}

#undef str_10003dea
#undef str_10003df5
#undef str_10003e04
#undef str_10003e15
#undef str_10003e28
#undef str_10003e3b
#undef str_10003e4b
#undef str_10003e5a
#undef str_10003e69
#undef str_10003e7a
#undef str_10003e85
#undef str_10003e91
#undef str_10003e9b
#undef str_10003ea4
#undef str_10003eaf
#undef str_10003eb8
#undef str_10003ec0
#undef str_10003ec9
#undef str_10003ed0
#undef str_10003ee3
#undef str_10003ef6
#undef str_10003f09

#undef DAT_10003f1f
#define DAT_10003f1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x473U)))
#undef DAT_10003f24
#define DAT_10003f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x478U)))
#undef DAT_10003f29
#define DAT_10003f29 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47dU)))
#undef DAT_10003f2e
#define DAT_10003f2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x482U)))
#undef str_10003f33
#define str_10003f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x487U)))
#undef str_10003f3e
#define str_10003f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x492U)))
#undef str_10003f47
#define str_10003f47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a50
 */

char * recovered_10003a50(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_10003f1f;
    }
    if (in_ECX == 0x10) {
      return &DAT_10003f24;
    }
    if (in_ECX == 0x20) {
      return &DAT_10003f29;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_10003f2e;
    }
    if (in_ECX == 0x80) {
      return str_10003f33;
    }
    if (in_ECX == 0xfe) {
      return str_10003f3e;
    }
  }
  return str_10003f47;
}

#undef DAT_10003f1f
#undef DAT_10003f24
#undef DAT_10003f29
#undef DAT_10003f2e
#undef str_10003f33
#undef str_10003f3e
#undef str_10003f47

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
