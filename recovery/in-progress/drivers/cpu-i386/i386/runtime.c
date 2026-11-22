/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000620
 */

void * recovered_10000620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_10000fb0
#define DAT_10000fb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_10000eea
#define str_10000eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10000efa
#define str_10000efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10000f29
#define str_10000f29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fU)))
#undef str_10000f3a
#define str_10000f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10000f48
#define str_10000f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eU)))
#undef str_10000f58
#define str_10000f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_10000f62
#define str_10000f62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78U)))
#undef str_10000f6b
#define str_10000f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81U)))
#undef str_10000f74
#define str_10000f74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_10000f9a
#define str_10000f9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_10000fa9
#define str_10000fa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#define local_1c4 (*(byte *)(frame + 28))
#define local_1c3 (*(byte (*)[95])(frame + 29))
#define local_164 (*(uint *)(frame + 124))
#define local_128 (*(uint *)(frame + 184))
#define local_124 (*(uint *)(frame + 188))
#define local_114 (*(undefined2 *)(frame + 204))
#define local_14 (*(uint *)(frame + 460))
#define abStack_1c9 (*(byte (*)[5])(frame + 23))
#define abStack_11f (*(byte (*)[10])(frame + 193))
#define bStack_115 (*(byte *)(frame + 203))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000630
 */

int recovered_10000630(int *api)

{
  unsigned char frame[512] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    local_14 = api[2];
    PF_PART1(local_114, 0) = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x71;
      pcVar4 = str_10000eea;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x3a;
      pcVar4 = str_10000f9a;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    if (api[1] == 0) {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x60) {
        (abStack_11f + uVar3 + 0xb)[0] = 0x30;
        (abStack_11f + uVar3 + 0xb)[1] = 0;
      }
    }
    else {
      uVar8 = 0;
      uVar3 = api[1];
      do {
        abStack_1c9[uVar8 + 1] = (byte)(uVar3 % 10) | 0x30;
        uVar7 = uVar8 + 1;
        if (8 < uVar8) break;
        bVar1 = 9 < uVar3;
        uVar8 = uVar7;
        uVar3 = uVar3 / 10;
      } while (bVar1);
      do {
        pbVar5 = abStack_1c9 + uVar7;
        uVar7 = uVar7 - 1;
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (abStack_11f[uVar3 + 0xb] != 0);
        if (uVar3 + 1 < 0x60) {
          abStack_11f[uVar3 + 0xb] = *pbVar5;
          abStack_11f[uVar3 + 0xc] = 0;
        }
      } while (uVar7 != 0);
    }
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x60) {
      bVar6 = 0x20;
      pcVar4 = str_10000fa9;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0x5f);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    if ((0x2b < local_14) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(&local_114);
    }
    PF_PART1(local_114, 0) = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x100) {
      bVar6 = 0x6c;
      pcVar4 = str_10000efa;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0xff);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar8 < 0x100) {
      abStack_11f[uVar3 + 0xb] = 0x20;
      uVar3 = uVar8;
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x100) {
      bVar6 = 0x74;
      pcVar4 = str_10000f29;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0xff);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar8 < 0x100) {
      abStack_11f[uVar3 + 0xb] = 0x3d;
      uVar3 = uVar8;
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x100) {
      (abStack_11f + uVar3 + 0xb)[0] = 0x30;
      (abStack_11f + uVar3 + 0xb)[1] = 0;
    }
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar8 < 0x100) {
      abStack_11f[uVar3 + 0xb] = 0x20;
      uVar3 = uVar8;
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x100) {
      bVar6 = 100;
      pcVar4 = str_10000f3a;
      do {
        pcVar4 = pcVar4 + 1;
        abStack_11f[uVar3 + 0xb] = bVar6;
        uVar3 = uVar3 + 1;
        bVar6 = *pcVar4;
        if (bVar6 == 0) break;
      } while (uVar3 < 0xff);
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar8 < 0x100) {
      abStack_11f[uVar3 + 0xb] = 0x3d;
      uVar3 = uVar8;
    }
    abStack_11f[uVar3 + 0xb] = 0;
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 + 1;
    } while (abStack_11f[uVar3 + 0xb] != 0);
    if (uVar3 + 1 < 0x100) {
      (abStack_11f + uVar3 + 0xb)[0] = 0x30;
      (abStack_11f + uVar3 + 0xb)[1] = 0;
    }
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 &&
        (iVar2 = (*(code *)api[0xf])(abStack_1c9 + 1), iVar2 != 0)))) {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x20;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x100) {
        bVar6 = 0x68;
        pcVar4 = str_10000f48;
        do {
          pcVar4 = pcVar4 + 1;
          abStack_11f[uVar3 + 0xb] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar4;
          if (bVar6 == 0) break;
        } while (uVar3 < 0xff);
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x3d;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      if (local_164 == 0) {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (abStack_11f[uVar3 + 0xb] != 0);
        if (uVar3 + 1 < 0x100) {
          (abStack_11f + uVar3 + 0xb)[0] = 0x30;
          (abStack_11f + uVar3 + 0xb)[1] = 0;
        }
      }
      else {
        uVar8 = 0;
        do {
          abStack_11f[uVar8 + 1] = (char)local_164 + (char)(local_164 / 10) * -10 | 0x30;
          uVar3 = uVar8 + 1;
          if (8 < uVar8) break;
          bVar1 = 9 < local_164;
          local_164 = local_164 / 10;
          uVar8 = uVar3;
        } while (bVar1);
        do {
          pbVar5 = abStack_11f + uVar3;
          uVar3 = uVar3 - 1;
          uVar8 = 0;
          do {
            uVar7 = uVar8;
            uVar8 = uVar7 + 1;
          } while (abStack_11f[uVar7 + 0xb] != 0);
          if (uVar7 + 1 < 0x100) {
            abStack_11f[uVar7 + 0xb] = *pbVar5;
            abStack_11f[uVar7 + 0xc] = 0;
          }
        } while (uVar3 != 0);
      }
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x20;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x100) {
        bVar6 = 0x70;
        pcVar4 = str_10000f58;
        do {
          pcVar4 = pcVar4 + 1;
          abStack_11f[uVar3 + 0xb] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar4;
          if (bVar6 == 0) break;
        } while (uVar3 < 0xff);
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x3d;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x100 && local_1c4 != 0) {
        pbVar5 = local_1c3;
        do {
          abStack_11f[uVar3 + 0xb] = local_1c4;
          uVar3 = uVar3 + 1;
          local_1c4 = *pbVar5;
          if (local_1c4 == 0) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar3 < 0xff);
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x20;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x100) {
        bVar6 = 0x6d;
        pcVar4 = str_10000f62;
        do {
          pcVar4 = pcVar4 + 1;
          abStack_11f[uVar3 + 0xb] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar4;
          if (bVar6 == 0) break;
        } while (uVar3 < 0xff);
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x3d;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      iVar2 = 8;
      do {
        uVar8 = local_128 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar6 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar6 = bVar6 | 0x30;
        }
        else {
          bVar6 = bVar6 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (abStack_11f[uVar3 + 0xb] != 0);
        if (uVar3 + 1 < 0x100) {
          abStack_11f[uVar3 + 0xb] = bVar6;
          abStack_11f[uVar3 + 0xc] = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x20;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar3 + 1 < 0x100) {
        bVar6 = 0x6d;
        pcVar4 = str_10000f6b;
        do {
          pcVar4 = pcVar4 + 1;
          abStack_11f[uVar3 + 0xb] = bVar6;
          uVar3 = uVar3 + 1;
          bVar6 = *pcVar4;
          if (bVar6 == 0) break;
        } while (uVar3 < 0xff);
      }
      abStack_11f[uVar3 + 0xb] = 0;
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
      } while (abStack_11f[uVar3 + 0xb] != 0);
      if (uVar8 < 0x100) {
        abStack_11f[uVar3 + 0xb] = 0x3d;
        uVar3 = uVar8;
      }
      abStack_11f[uVar3 + 0xb] = 0;
      iVar2 = 8;
      do {
        uVar8 = local_124 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
        bVar6 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar6 = bVar6 | 0x30;
        }
        else {
          bVar6 = bVar6 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (abStack_11f[uVar3 + 0xb] != 0);
        if (uVar3 + 1 < 0x100) {
          abStack_11f[uVar3 + 0xb] = bVar6;
          abStack_11f[uVar3 + 0xc] = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = 0;
    if ((code *)api[3] != (code *)0x0) {
      iVar2 = (*(code *)api[3])(&DAT_10000fb0,str_10000f74,&local_114);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        if ((code *)api[4] != (code *)0x0) {
          iVar2 = (*(code *)api[4])(0,0);
        }
      }
    }
  }
  return iVar2;
}

#undef DAT_10000fb0
#undef str_10000eea
#undef str_10000efa
#undef str_10000f29
#undef str_10000f3a
#undef str_10000f48
#undef str_10000f58
#undef str_10000f62
#undef str_10000f6b
#undef str_10000f74
#undef str_10000f9a
#undef str_10000fa9
#undef local_1c4
#undef local_1c3
#undef local_164
#undef local_128
#undef local_124
#undef local_114
#undef local_14
#undef abStack_1c9
#undef abStack_11f
#undef bStack_115

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
