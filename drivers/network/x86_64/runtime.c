/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f000
#define DAT_1000f000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1525U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f000;
}

#undef DAT_1000f000

#undef DAT_1000dc8c
#define DAT_1000dc8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_1000dadb
#define str_1000dadb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000daef
#define str_1000daef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14U)))
#undef str_1000db5b
#define str_1000db5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#undef str_1000db71
#define str_1000db71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000dbdd
#define str_1000dbdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_1000dbf1
#define str_1000dbf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116U)))
#undef str_1000dc05
#define str_1000dc05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_1000dc1e
#define str_1000dc1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_1000dc27
#define str_1000dc27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_1000dc4f
#define str_1000dc4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000dc5e
#define str_1000dc5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_1000dc6e
#define str_1000dc6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#undef str_1000dc7d
#define str_1000dc7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#define local_518 (*(undefined2 *)(frame + 24))
#define local_516 (*(undefined1 (*)[1020])(frame + 26))
#define local_b4 (*(uint *)(frame + 1148))
#define local_78 (*(uint *)(frame + 1208))
#define local_74 (*(undefined4 *)(frame + 1212))
#define local_70 (*(undefined4 *)(frame + 1216))
#define local_44 (*(uint *)(frame + 1260))
#define local_40 (*(int * *)(frame + 1264))
#define local_34 (*(uint *)(frame + 1276))
#define cStack_519 (*(char *)(frame + 23))
#define acStack_11a (*(char (*)[102])(frame + 1046))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000430
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10000430(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  long lVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char cVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 uVar10;
  char cVar11;
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
  PF_PART1(local_518, 0) = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar4 + 1 < 0x60) {
    cVar11 = 'q';
    pcVar8 = str_1000dadb;
    do {
      pcVar8 = pcVar8 + 1;
      local_516[uVar4 - 2] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x5f);
  }
  local_516[uVar4 - 2] = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar4 + 1 < 0x60) {
    cVar11 = ':';
    pcVar8 = str_1000dc4f;
    do {
      pcVar8 = pcVar8 + 1;
      local_516[uVar4 - 2] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x5f);
  }
  local_516[uVar4 - 2] = 0;
  if (api[1] == 0) {
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x60) {
      *(undefined2 *)(local_516 + (uVar4 - 2)) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar14 = api[1];
    do {
      uVar4 = uVar9;
      acStack_11a[uVar4 + 3] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
      uVar9 = uVar4 + 1;
      if (8 < uVar9) break;
      bVar15 = 9 < uVar14;
      uVar14 = uVar14 / 10;
    } while (bVar15);
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (local_516[uVar13 - 2] != '\0');
      uVar5 = uVar9;
      if (uVar13 + 1 < 0x60) {
        local_516[uVar13 - 2] = acStack_11a[uVar4 + 3];
        local_516[uVar13 - 1] = 0;
      }
    }
    else {
      uVar5 = uVar4 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x60) {
        local_516[uVar4 - 2] = acStack_11a[uVar5 + 1];
        local_516[uVar4 - 1] = 0;
      }
      pcVar8 = acStack_11a + uVar5;
      uVar5 = uVar5 - 2;
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      uVar9 = uVar5;
      if (uVar4 + 1 < 0x60) {
        local_516[uVar4 - 2] = *pcVar8;
        local_516[uVar4 - 1] = 0;
      }
    }
  }
  uVar9 = 0xffffffffffffffff;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 1] != '\0');
  if (uVar4 + 2 < 0x60) {
    local_516[uVar4 - 1] = 0x20;
    bVar15 = uVar9 != 0x5e;
    uVar9 = uVar4 + 2;
    if (bVar15) {
      uVar9 = uVar4 + 3;
      local_516[uVar4] = 0x72;
      if (uVar9 < 0x5f) {
        uVar9 = uVar4 + 4;
        local_516[uVar4 + 1] = 0x65;
        if (uVar9 < 0x5f) {
          uVar9 = uVar4 + 5;
          local_516[uVar4 + 2] = 0x61;
          if (uVar9 < 0x5f) {
            uVar9 = uVar4 + 6;
            local_516[uVar4 + 3] = 100;
            if (uVar9 < 0x5f) {
              local_516[uVar4 + 4] = 0x79;
              uVar9 = uVar4 + 7;
            }
          }
        }
      }
    }
  }
  local_516[uVar9 - 2] = 0;
  if ((0x2b < uVar12) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_518);
  }
  PF_PART1(local_518, 0) = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar11 = 's';
    pcVar8 = str_1000daef;
    do {
      pcVar8 = pcVar8 + 1;
      local_516[uVar4 - 2] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  local_516[uVar4 - 2] = 0;
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(acStack_11a + 2), iVar3 != 0)) {
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x20;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = 'h';
      pcVar8 = str_1000dc5e;
      do {
        pcVar8 = pcVar8 + 1;
        local_516[uVar4 - 2] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x3d;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    if (local_b4 == 0) {
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x400) {
        *(undefined2 *)(local_516 + (uVar4 - 2)) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar4 = uVar9;
        *(byte *)((long)&local_70 + uVar4 + 1) = (char)local_b4 + (char)(local_b4 / 10) * -10 | 0x30
        ;
        uVar9 = uVar4 + 1;
        if (8 < uVar9) break;
        bVar15 = 9 < local_b4;
        local_b4 = local_b4 / 10;
      } while (bVar15);
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (local_516[uVar13 - 2] != '\0');
        uVar5 = uVar9;
        if (uVar13 + 1 < 0x400) {
          local_516[uVar13 - 2] = *(undefined1 *)((long)&local_70 + uVar4 + 1);
          local_516[uVar13 - 1] = 0;
        }
      }
      else {
        uVar5 = uVar4 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          uVar9 = uVar4 + 1;
        } while (local_516[uVar4 - 2] != '\0');
        if (uVar4 + 1 < 0x400) {
          local_516[uVar4 - 2] = *(undefined1 *)((long)&local_74 + uVar5 + 3);
          local_516[uVar4 - 1] = 0;
        }
        lVar1 = uVar5 + 2;
        uVar5 = uVar5 - 2;
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          uVar9 = uVar4 + 1;
        } while (local_516[uVar4 - 2] != '\0');
        uVar9 = uVar5;
        if (uVar4 + 1 < 0x400) {
          local_516[uVar4 - 2] = *(undefined1 *)((long)&local_74 + lVar1);
          local_516[uVar4 - 1] = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x20;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = 'm';
      pcVar8 = str_1000dc6e;
      do {
        pcVar8 = pcVar8 + 1;
        local_516[uVar4 - 2] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x3d;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    iVar3 = 8;
    do {
      uVar12 = local_78 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar11 = (char)uVar12;
      cVar7 = cVar11 + '7';
      if (uVar12 < 10) {
        cVar7 = cVar11 + '0';
      }
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x400) {
        local_516[uVar4 - 2] = cVar7;
        local_516[uVar4 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x20;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x400) {
      cVar11 = 'm';
      pcVar8 = str_1000dc7d;
      do {
        pcVar8 = pcVar8 + 1;
        local_516[uVar4 - 2] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x3ff);
    }
    local_516[uVar4 - 2] = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar9 < 0x400) {
      local_516[uVar4 - 2] = 0x3d;
      uVar4 = uVar9;
    }
    local_516[uVar4 - 2] = 0;
    if (local_74 == 0) {
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x400) {
        *(undefined2 *)(local_516 + (uVar4 - 2)) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar4 = uVar9;
        *(byte *)((long)&local_70 + uVar4 + 1) = (char)local_74 + (char)(local_74 / 10) * -10 | 0x30
        ;
        uVar9 = uVar4 + 1;
        if (8 < uVar9) break;
        bVar15 = 9 < local_74;
        local_74 = local_74 / 10;
      } while (bVar15);
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (local_516[uVar13 - 2] != '\0');
        uVar5 = uVar9;
        if (uVar13 + 1 < 0x400) {
          local_516[uVar13 - 2] = *(undefined1 *)((long)&local_70 + uVar4 + 1);
          local_516[uVar13 - 1] = 0;
        }
      }
      else {
        uVar5 = uVar4 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          uVar9 = uVar4 + 1;
        } while (local_516[uVar4 - 2] != '\0');
        if (uVar4 + 1 < 0x400) {
          local_516[uVar4 - 2] = *(undefined1 *)((long)&local_74 + uVar5 + 3);
          local_516[uVar4 - 1] = 0;
        }
        lVar1 = uVar5 + 2;
        uVar5 = uVar5 - 2;
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          uVar9 = uVar4 + 1;
        } while (local_516[uVar4 - 2] != '\0');
        uVar9 = uVar5;
        if (uVar4 + 1 < 0x400) {
          local_516[uVar4 - 2] = *(undefined1 *)((long)&local_74 + lVar1);
          local_516[uVar4 - 1] = 0;
        }
      }
    }
  }
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)(ulong)(uint)api[3])(&DAT_1000dc8c,str_1000db5b,&local_518);
  if (iVar3 == 0) {
    return 0;
  }
  local_40 = api;
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    uVar12 = 0;
    do {
      uVar14 = uVar12 & 0xff;
      iVar3 = 0;
      local_44 = uVar12;
      do {
        uVar10 = (undefined1)iVar3;
        uVar6 = recovered_10004b60(api,uVar14,uVar10,0,acStack_11a + 2);
        if (((int)uVar6 != 0) &&
           (recovered_10001420(api,(byte *)(acStack_11a + 2),(int *)&local_34),
           acStack_11a[0xe] < '\0')) {
          uVar6 = recovered_10004b60(api,uVar14,uVar10,1,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,2,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,3,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,4,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,5,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,6,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar6 = recovered_10004b60(api,uVar14,uVar10,7,(undefined1 *)&local_70);
          if ((int)uVar6 != 0) {
            recovered_10001420(api,(byte *)&local_70,(int *)&local_34);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      uVar12 = local_44 + 1;
    } while (uVar12 != 8);
  }
  piVar2 = local_40;
  if (local_34 != 0) goto LAB_10001036;
  local_70 = 0;
  acStack_11a[2] = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (acStack_11a[uVar4 + 2] != '\0');
  if (uVar4 + 1 < 0xa0) {
    cVar11 = 'i';
    pcVar8 = str_1000db71;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_11a[uVar4 + 2] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x9f);
  }
  acStack_11a[uVar4 + 2] = '\0';
  if (((*piVar2 == 0x54584b57) && (0x57 < (uint)piVar2[2])) &&
     ((code *)(ulong)(uint)piVar2[0x15] != (code *)0x0)) {
    iVar3 = (*(code *)(ulong)(uint)piVar2[0x15])(0x300,1,&local_70);
    uVar12 = local_70;
    if (iVar3 == 0) goto LAB_10000fbb;
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (acStack_11a[uVar4 + 2] != '\0');
    if (uVar9 < 0xa0) {
      acStack_11a[uVar4 + 2] = ' ';
      uVar4 = uVar9;
    }
    acStack_11a[uVar4 + 2] = '\0';
    uVar9 = 0xffffffffffffffff;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (acStack_11a[uVar4 + 3] != '\0');
    if (uVar4 + 2 < 0xa0) {
      acStack_11a[uVar4 + 3] = 'i';
      bVar15 = uVar9 != 0x9e;
      uVar9 = uVar4 + 2;
      if (bVar15) {
        uVar9 = uVar4 + 3;
        acStack_11a[uVar4 + 4] = 'o';
        if (uVar9 < 0x9f) {
          uVar9 = uVar4 + 4;
          acStack_11a[uVar4 + 5] = 'R';
          if (uVar9 < 0x9f) {
            uVar9 = uVar4 + 5;
            acStack_11a[uVar4 + 6] = 'e';
            if (uVar9 < 0x9f) {
              uVar9 = uVar4 + 6;
              acStack_11a[uVar4 + 7] = 'g';
              if (uVar9 < 0x9f) {
                acStack_11a[uVar4 + 8] = '0';
                uVar9 = uVar4 + 7;
              }
            }
          }
        }
      }
    }
    acStack_11a[uVar9 + 2] = '\0';
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (acStack_11a[uVar4 + 2] != '\0');
    if (uVar9 < 0xa0) {
      acStack_11a[uVar4 + 2] = '=';
      uVar4 = uVar9;
    }
    acStack_11a[uVar4 + 2] = '\0';
    iVar3 = 8;
    do {
      uVar14 = uVar12 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar11 = (char)uVar14;
      cVar7 = cVar11 + '7';
      if (uVar14 < 10) {
        cVar7 = cVar11 + '0';
      }
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (acStack_11a[uVar4 + 2] != '\0');
      if (uVar4 + 1 < 0xa0) {
        acStack_11a[uVar4 + 2] = cVar7;
        acStack_11a[uVar4 + 3] = '\0';
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (acStack_11a[uVar4 + 2] != '\0');
    if (uVar4 + 1 < 0xa0) {
      cVar11 = ' ';
      pcVar8 = str_1000dbdd;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_11a[uVar4 + 2] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x9f);
    }
  }
  else {
LAB_10000fbb:
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (acStack_11a[uVar4 + 2] != '\0');
    if (uVar4 + 1 < 0xa0) {
      cVar11 = ' ';
      pcVar8 = str_1000dbf1;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_11a[uVar4 + 2] = cVar11;
        uVar4 = uVar4 + 1;
        cVar11 = *pcVar8;
        if (cVar11 == '\0') break;
      } while (uVar4 < 0x9f);
    }
  }
  acStack_11a[uVar4 + 2] = '\0';
  if ((code *)(ulong)(uint)piVar2[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)piVar2[3])(str_1000dc05,str_1000dc1e,acStack_11a + 2);
  }
LAB_10001036:
  uVar12 = local_34;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar9 < 0x400) {
    local_516[uVar4 - 2] = 0x20;
    uVar4 = uVar9;
  }
  piVar2 = local_40;
  local_516[uVar4 - 2] = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar4 + 1 < 0x400) {
    cVar11 = 'p';
    pcVar8 = str_1000dc27;
    do {
      pcVar8 = pcVar8 + 1;
      local_516[uVar4 - 2] = cVar11;
      uVar4 = uVar4 + 1;
      cVar11 = *pcVar8;
      if (cVar11 == '\0') break;
    } while (uVar4 < 0x3ff);
  }
  local_516[uVar4 - 2] = 0;
  uVar9 = 0;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (local_516[uVar4 - 2] != '\0');
  if (uVar9 < 0x400) {
    local_516[uVar4 - 2] = 0x3d;
    uVar4 = uVar9;
  }
  local_516[uVar4 - 2] = 0;
  if (uVar12 == 0) {
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 + 1;
    } while (local_516[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x400) {
      *(undefined2 *)(local_516 + (uVar4 - 2)) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    do {
      uVar4 = uVar9;
      acStack_11a[uVar4 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
      uVar9 = uVar4 + 1;
      if (8 < uVar9) break;
      bVar15 = 9 < uVar12;
      uVar12 = uVar12 / 10;
    } while (bVar15);
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (local_516[uVar13 - 2] != '\0');
      uVar5 = uVar9;
      if (uVar13 + 1 < 0x400) {
        local_516[uVar13 - 2] = acStack_11a[uVar4 + 3];
        local_516[uVar13 - 1] = 0;
      }
    }
    else {
      uVar5 = uVar4 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x400) {
        local_516[uVar4 - 2] = acStack_11a[uVar5 + 1];
        local_516[uVar4 - 1] = 0;
      }
      pcVar8 = acStack_11a + uVar5;
      uVar5 = uVar5 - 2;
      uVar9 = 0;
      do {
        uVar4 = uVar9;
        uVar9 = uVar4 + 1;
      } while (local_516[uVar4 - 2] != '\0');
      uVar9 = uVar5;
      if (uVar4 + 1 < 0x400) {
        local_516[uVar4 - 2] = *pcVar8;
        local_516[uVar4 - 1] = 0;
      }
    }
  }
  if ((code *)(ulong)(uint)piVar2[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)piVar2[3])(&DAT_1000dc8c,str_1000db5b,&local_518);
  }
  return 1;
}

#undef DAT_1000dc8c
#undef str_1000dadb
#undef str_1000daef
#undef str_1000db5b
#undef str_1000db71
#undef str_1000dbdd
#undef str_1000dbf1
#undef str_1000dc05
#undef str_1000dc1e
#undef str_1000dc27
#undef str_1000dc4f
#undef str_1000dc5e
#undef str_1000dc6e
#undef str_1000dc7d
#undef local_518
#undef local_516
#undef local_b4
#undef local_78
#undef local_74
#undef local_70
#undef local_44
#undef local_40
#undef local_34
#undef cStack_519
#undef acStack_11a

#undef DAT_10010000
#define DAT_10010000 (*(int * *)(((uintptr_t)pf_module_state + 0x2525U)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x252dU)))
#undef DAT_1001000c
#define DAT_1001000c (*(uint *)(((uintptr_t)pf_module_state + 0x2531U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2535U)))
#undef DAT_10010014
#define DAT_10010014 (*(uint *)(((uintptr_t)pf_module_state + 0x2539U)))
#undef DAT_10010018
#define DAT_10010018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x253dU)))
#undef DAT_1001001c
#define DAT_1001001c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2541U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2545U)))
#undef DAT_10010024
#define DAT_10010024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010026
#define DAT_10010026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x254bU)))
#undef DAT_10010027
#define DAT_10010027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x254cU)))
#undef DAT_10010028
#define DAT_10010028 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x254dU)))
#undef DAT_1001002a
#define DAT_1001002a (*(uint16_t *)(((uintptr_t)pf_module_state + 0x254fU)))
#undef DAT_1001002c
#define DAT_1001002c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2551U)))
#undef DAT_1001002e
#define DAT_1001002e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2553U)))
#undef DAT_1001002f
#define DAT_1001002f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2554U)))
#undef DAT_10010030
#define DAT_10010030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2555U)))
#undef DAT_10010038
#define DAT_10010038 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x255dU)))
#undef DAT_1001003a
#define DAT_1001003a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255fU)))
#undef DAT_1001003c
#define DAT_1001003c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_1001003e
#define DAT_1001003e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2563U)))
#undef DAT_1001003f
#define DAT_1001003f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2564U)))
#undef DAT_10010040
#define DAT_10010040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2565U)))
#undef DAT_10010050
#define DAT_10010050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2575U)))
#undef DAT_10010051
#define DAT_10010051 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2576U)))
#undef DAT_10010052
#define DAT_10010052 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2577U)))
#undef DAT_10010053
#define DAT_10010053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2578U)))
#undef DAT_10010054
#define DAT_10010054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2579U)))
#undef DAT_10010055
#define DAT_10010055 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257aU)))
#undef DAT_10010056
#define DAT_10010056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257bU)))
#undef DAT_10010057
#define DAT_10010057 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257cU)))
#undef DAT_10010058
#define DAT_10010058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x257dU)))
#undef DAT_10010150
#define DAT_10010150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2675U)))
#undef DAT_10010154
#define DAT_10010154 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2679U)))
#undef DAT_10010155
#define DAT_10010155 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267aU)))
#undef DAT_10010156
#define DAT_10010156 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267bU)))
#undef DAT_10010157
#define DAT_10010157 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267cU)))
#undef DAT_10010158
#define DAT_10010158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267dU)))
#undef DAT_10010159
#define DAT_10010159 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267eU)))
#undef DAT_1001015a
#define DAT_1001015a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267fU)))
#undef DAT_1001015b
#define DAT_1001015b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2680U)))
#undef DAT_1001015c
#define DAT_1001015c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2681U)))
#undef DAT_1001015d
#define DAT_1001015d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2682U)))
#undef DAT_1001015e
#define DAT_1001015e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2683U)))
#undef DAT_1001015f
#define DAT_1001015f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2684U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2685U)))
#undef DAT_10010161
#define DAT_10010161 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2686U)))
#undef DAT_10010162
#define DAT_10010162 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2687U)))
#undef DAT_10010163
#define DAT_10010163 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2688U)))
#undef DAT_10010164
#define DAT_10010164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2689U)))
#undef DAT_10010165
#define DAT_10010165 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268aU)))
#undef DAT_10010166
#define DAT_10010166 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268bU)))
#undef DAT_10010167
#define DAT_10010167 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268cU)))
#undef DAT_10010168
#define DAT_10010168 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268dU)))
#undef DAT_10010169
#define DAT_10010169 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268eU)))
#undef DAT_1001016a
#define DAT_1001016a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268fU)))
#undef DAT_1001016b
#define DAT_1001016b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2690U)))
#undef DAT_1001016c
#define DAT_1001016c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2691U)))
#undef DAT_1001016d
#define DAT_1001016d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2692U)))
#undef DAT_1001016e
#define DAT_1001016e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2693U)))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2694U)))
#undef DAT_10010170
#define DAT_10010170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2695U)))
#undef DAT_10010171
#define DAT_10010171 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2696U)))
#undef DAT_10010172
#define DAT_10010172 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2697U)))
#undef DAT_10010173
#define DAT_10010173 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2698U)))
#undef DAT_10010180
#define DAT_10010180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a5U)))
#undef DAT_10010181
#define DAT_10010181 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a6U)))
#undef DAT_10010182
#define DAT_10010182 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a7U)))
#undef DAT_10010183
#define DAT_10010183 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a8U)))
#undef DAT_10010184
#define DAT_10010184 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a9U)))
#undef DAT_10010185
#define DAT_10010185 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aaU)))
#undef DAT_10010186
#define DAT_10010186 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26abU)))
#undef DAT_10010187
#define DAT_10010187 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26acU)))
#undef DAT_10010188
#define DAT_10010188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26adU)))
#undef DAT_10010189
#define DAT_10010189 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aeU)))
#undef DAT_1001018a
#define DAT_1001018a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26afU)))
#undef DAT_1001018b
#define DAT_1001018b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26b0U)))
#undef DAT_10010210
#define DAT_10010210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2735U)))
#undef DAT_10010211
#define DAT_10010211 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2736U)))
#undef DAT_10010212
#define DAT_10010212 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2737U)))
#undef DAT_10010213
#define DAT_10010213 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2738U)))
#undef DAT_10010214
#define DAT_10010214 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2739U)))
#undef DAT_10010215
#define DAT_10010215 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273aU)))
#undef DAT_10010216
#define DAT_10010216 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273bU)))
#undef DAT_10010217
#define DAT_10010217 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273cU)))
#undef DAT_10010218
#define DAT_10010218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273dU)))
#undef DAT_10010219
#define DAT_10010219 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273eU)))
#undef DAT_100182d0
#define DAT_100182d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f5U)))
#undef DAT_100182d1
#define DAT_100182d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f6U)))
#undef DAT_100182d2
#define DAT_100182d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f7U)))
#undef DAT_100182d3
#define DAT_100182d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f8U)))
#undef DAT_100182d4
#define DAT_100182d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f9U)))
#undef DAT_100182d5
#define DAT_100182d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7faU)))
#undef DAT_100182d6
#define DAT_100182d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fbU)))
#undef DAT_100182d7
#define DAT_100182d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fcU)))
#undef DAT_100182d8
#define DAT_100182d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fdU)))
#undef DAT_100182d9
#define DAT_100182d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7feU)))
#undef DAT_100182da
#define DAT_100182da (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7ffU)))
#undef DAT_100182db
#define DAT_100182db (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa800U)))
#undef DAT_100182dc
#define DAT_100182dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa801U)))
#undef DAT_100182dd
#define DAT_100182dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa802U)))
#undef DAT_100182de
#define DAT_100182de (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa803U)))
#undef DAT_100182df
#define DAT_100182df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa804U)))
#undef DAT_100182e0
#define DAT_100182e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa805U)))
#undef DAT_100182e4
#define DAT_100182e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa809U)))
#undef DAT_100182e5
#define DAT_100182e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa80aU)))
#undef DAT_100182f0
#define DAT_100182f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa815U)))
#undef DAT_100182f1
#define DAT_100182f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa816U)))
#undef DAT_100182f2
#define DAT_100182f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa817U)))
#undef DAT_100182f3
#define DAT_100182f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa818U)))
#undef DAT_100182f4
#define DAT_100182f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa819U)))
#undef DAT_100182f5
#define DAT_100182f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81aU)))
#undef DAT_100182f6
#define DAT_100182f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81bU)))
#undef DAT_100182f7
#define DAT_100182f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81cU)))
#undef DAT_100182f8
#define DAT_100182f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81dU)))
#undef DAT_100182f9
#define DAT_100182f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81eU)))
#undef DAT_100182fa
#define DAT_100182fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81fU)))
#undef DAT_100182fb
#define DAT_100182fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa820U)))
#undef DAT_10018300
#define DAT_10018300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa825U)))
#undef DAT_10018301
#define DAT_10018301 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa826U)))
#undef DAT_10018302
#define DAT_10018302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa827U)))
#undef DAT_10018303
#define DAT_10018303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa828U)))
#undef DAT_10018304
#define DAT_10018304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa829U)))
#undef DAT_10018305
#define DAT_10018305 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82aU)))
#undef DAT_10018306
#define DAT_10018306 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82bU)))
#undef DAT_10018307
#define DAT_10018307 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82cU)))
#undef DAT_10018308
#define DAT_10018308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82dU)))
#undef DAT_10018309
#define DAT_10018309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82eU)))
#undef _DAT_10010010
#define _DAT_10010010 (*(uint *)(((uintptr_t)pf_module_state + 0x2535U)))
#undef _DAT_10010020
#define _DAT_10010020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2545U)))
#undef _DAT_10010024
#define _DAT_10010024 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef _DAT_10010150
#define _DAT_10010150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2675U)))
#undef _DAT_100182e0
#define _DAT_100182e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa805U)))
#undef str_1000dadb
#define str_1000dadb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000dc8d
#define str_1000dc8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b2U)))
#undef str_1000dcc4
#define str_1000dcc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_1000dcda
#define str_1000dcda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ffU)))
#undef str_1000dceb
#define str_1000dceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000dcff
#define str_1000dcff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000dd11
#define str_1000dd11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x236U)))
#undef str_1000e0a1
#define str_1000e0a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_1000e0bf
#define str_1000e0bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_1000e0db
#define str_1000e0db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x600U)))
#undef str_1000e0e9
#define str_1000e0e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60eU)))
#undef str_1000e0fa
#define str_1000e0fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61fU)))
#undef str_1000e10d
#define str_1000e10d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x632U)))
#undef str_1000e125
#define str_1000e125 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64aU)))
#undef str_1000e13c
#define str_1000e13c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x661U)))
#undef str_1000e151
#define str_1000e151 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x676U)))
#undef str_1000e16e
#define str_1000e16e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x693U)))
#undef str_1000e184
#define str_1000e184 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a9U)))
#undef str_1000e193
#define str_1000e193 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b8U)))
#undef str_1000e1a2
#define str_1000e1a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c7U)))
#undef str_1000e1b1
#define str_1000e1b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_1000e1bb
#define str_1000e1bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e0U)))
#undef str_1000e1d7
#define str_1000e1d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_1000e1f3
#define str_1000e1f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x718U)))
#define cStack_8d9 (*(char *)(frame + 23))
#define cStack_4d9 (*(char *)(frame + 1047))
#define acStack_499 (*(char (*)[64])(frame + 1111))
#define acStack_459 (*(char (*)[896])(frame + 1175))
#define cStack_d9 (*(char *)(frame + 2071))
#define abStack_3e (*(byte (*)[2])(frame + 2226))
#define local_8d8 (*(undefined2 *)(frame + 24))
#define local_8d6 (*(undefined1 (*)[1021])(frame + 26))
#define local_4d8 (*(undefined4 *)(frame + 1048))
#define local_4d4 (*(undefined4 *)(frame + 1052))
#define local_4d0 (*(undefined4 *)(frame + 1056))
#define local_4cc (*(undefined4 *)(frame + 1060))
#define local_4c8 (*(undefined4 *)(frame + 1064))
#define local_4c4 (*(undefined2 *)(frame + 1068))
#define local_d8 (*(undefined8 *)(frame + 2072))
#define local_c0 (*(long *)(frame + 2096))
#define local_98 (*(uint *)(frame + 2136))
#define local_8c (*(byte *)(frame + 2148))
#define local_88 (*(uint *)(frame + 2152))
#define local_64 (*(undefined4 *)(frame + 2188))
#define local_60 (*(uint *)(frame + 2192))
#define local_5c (*(uint *)(frame + 2196))
#define local_58 (*(uint *)(frame + 2200))
#define local_54 (*(uint *)(frame + 2204))
#define local_50 (*(undefined4 *)(frame + 2208))
#define local_4c (*(undefined2 *)(frame + 2212))
#define local_48 (*(int * *)(frame + 2216))
#define local_3c (*(undefined4 *)(frame + 2228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001420
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001420(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2320] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  bool bVar3;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  char *pcVar14;
  char cVar15;
  byte bVar16;
  char cVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  undefined1 *puVar26;

  if (param_2 == (byte *)0x0) {
    return;
  }
  uVar2 = *(ushort *)(param_2 + 4);
  bVar3 = false;
  if (uVar2 < 0x10ec) {
    if (uVar2 == 0x106b) {
      bVar3 = false;
      if (*(short *)(param_2 + 6) != 0x21) goto LAB_100014da;
    }
    else if ((uVar2 != 0x108e) || (bVar3 = false, *(short *)(param_2 + 6) != 0x2bad))
    goto LAB_100014da;
  }
  else {
    if (uVar2 == 0x10ec) {
      bVar3 = false;
      if (*(short *)(param_2 + 6) == -0x7fd7) goto LAB_100014f0;
    }
    else if (uVar2 == 0x8086) {
      bVar3 = false;
      if (*(short *)(param_2 + 6) == 0x100e) goto LAB_100014f0;
    }
    else if (uVar2 == 0x1af4) {
      bVar3 = true;
      if ((1 < (uint)(*(ushort *)(param_2 + 6)) - 0x1040U) && (*(ushort *)(param_2 + 6) != 0x1000)) {
        bVar3 = false;
      }
      if (((uint)(*(ushort *)(param_2 + 6)) - 0x1040U < 2) || (*(ushort *)(param_2 + 6) == 0x1000))
      goto LAB_100014f0;
    }
LAB_100014da:
    if (param_2[8] != 2) {
      return;
    }
    if (param_2[9] != 0) {
      return;
    }
  }
LAB_100014f0:
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  PF_PART1(local_8d8, 0) = '\0';
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 - 2] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = 'r';
    pcVar14 = str_1000dc8d;
    do {
      pcVar14 = pcVar14 + 1;
      local_8d6[uVar6 - 2] = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar14;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  local_8d6[uVar6 - 2] = 0;
  if (bVar3) {
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 - 2] != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar14 = str_1000dcc4;
      do {
        pcVar14 = pcVar14 + 1;
        local_8d6[uVar6 - 2] = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar14;
        if (cVar15 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
LAB_1000170c:
    local_8d6[uVar6 - 2] = 0;
  }
  else {
    if (uVar2 < 0x10ec) {
      if ((uVar2 != 0x106b) && (uVar2 != 0x108e)) goto LAB_10001714;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar14 = str_1000dcff;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      goto LAB_1000170c;
    }
    if (uVar2 == 0x10ec) {
      if (*(short *)(param_2 + 6) == -0x7fd7) {
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar15 = ' ';
          pcVar14 = str_1000dceb;
          do {
            pcVar14 = pcVar14 + 1;
            local_8d6[uVar6 - 2] = cVar15;
            uVar6 = uVar6 + 1;
            cVar15 = *pcVar14;
            if (cVar15 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        goto LAB_1000170c;
      }
    }
    else if ((uVar2 == 0x8086) && (*(short *)(param_2 + 6) == 0x100e)) {
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar14 = str_1000dcda;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      goto LAB_1000170c;
    }
  }
LAB_10001714:
  recovered_10004de0(param_1,param_2,(long)&local_8d8);
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_5c = 0;
  if ((*(short *)(param_2 + 4) != 0x1af4) ||
     ((1 < (uint)(*(ushort *)(param_2 + 6)) - 0x1040U && (*(ushort *)(param_2 + 6) != 0x1000))))
  goto LAB_10002a54;
  local_50 = 0;
  local_4c = 0;
  DAT_10010000 = (int *)0x0;
  DAT_10010008 = 0;
  DAT_1001000c = 0;
  _DAT_10010010 = 0;
  DAT_10010014 = 0;
  PF_PART1(DAT_10010018, 0) = 0;
  PF_PART1(DAT_10010018, 1) = 0;
  PF_PART1(DAT_10010018, 2) = 0;
  PF_PART1(DAT_10010018, 3) = 0;
  PF_PART1(DAT_1001001c, 0) = 0;
  PF_PART1(DAT_1001001c, 1) = 0;
  PF_PART1(DAT_1001001c, 2) = 0;
  PF_PART1(DAT_1001001c, 3) = 0;
  _DAT_10010020 = 0;
  _DAT_10010024 = 0;
  DAT_10010026 = 0;
  DAT_10010027 = 0;
  DAT_10010028 = 0;
  DAT_1001002a = 0;
  PF_PART1(DAT_1001002c, 0) = 0;
  PF_PART1(DAT_1001002c, 1) = 0;
  DAT_1001002e = 0;
  DAT_1001002f = 0;
  PF_PART1(DAT_10010030, 0) = 0;
  PF_PART1(DAT_10010030, 1) = 0;
  PF_PART1(DAT_10010030, 2) = 0;
  PF_PART1(DAT_10010030, 3) = 0;
  PF_PART1(DAT_10010030, 4) = 0;
  PF_PART1(DAT_10010030, 5) = 0;
  PF_PART1(DAT_10010030, 6) = 0;
  PF_PART1(DAT_10010030, 7) = 0;
  DAT_10010038 = 0;
  PF_PART1(DAT_1001003a, 0) = 0;
  PF_PART1(DAT_1001003a, 1) = 0;
  PF_PART1(DAT_1001003c, 0) = 0;
  PF_PART1(DAT_1001003c, 1) = 0;
  DAT_1001003e = 0;
  DAT_1001003f = 0;
  PF_PART1(DAT_10010040, 0) = 0;
  PF_PART1(DAT_10010040, 1) = 0;
  PF_PART1(DAT_10010040, 2) = 0;
  PF_PART1(DAT_10010040, 3) = 0;
  PF_PART1(DAT_10010040, 4) = 0;
  PF_PART1(DAT_10010040, 5) = 0;
  PF_PART1(DAT_10010040, 6) = 0;
  PF_PART1(DAT_10010040, 7) = 0;
  bVar3 = recovered_1000b640(param_1,param_2,&local_d8);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 - 2] != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar14 = str_1000e0a1;
      do {
        pcVar14 = pcVar14 + 1;
        local_8d6[uVar6 - 2] = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar14;
        if (cVar15 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
  }
  else {
    recovered_1000be00(param_1,&local_d8,0x18028);
    if ((local_8c & 8) == 0) {
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar14 = str_1000e0bf;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
    }
    else {
      if (local_c0 != 0) {
        lVar8 = 0;
        do {
          local_3c = 0;
          if (((local_c0 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
            uVar21 = local_c0 + lVar8;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if ((uVar21 >> 0x20 != 0) ||
                 (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
              goto LAB_10001aa0;
              iVar13 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar21,1,&local_3c);
            }
            else {
              iVar13 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar21,1,&local_3c);
            }
            if (iVar13 != 0) {
              abStack_3e[lVar8 + -0x12] = (byte)local_3c;
            }
          }
LAB_10001aa0:
          lVar8 = lVar8 + 1;
        } while (lVar8 != 6);
        if ((local_c0 != 0) && (param_1 != (int *)0x0)) {
          if (*param_1 == 0x54584b57) {
            uVar21 = local_c0 + 6;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if ((uVar21 >> 0x20 == 0) &&
                 ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))))
              {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar21,2,&local_58);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar21,2,&local_58);
            }
          }
          if (local_c0 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar21 = local_c0 + 8;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar21 >> 0x20 == 0) &&
                   ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))
                   )) {
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar21,2,&local_60);
                }
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar21,2,&local_60);
              }
            }
            if ((local_c0 != 0) && (*param_1 == 0x54584b57)) {
              uVar21 = local_c0 + 10;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar21 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                   ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar21,2,&local_5c);
                }
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar21,2,&local_5c);
              }
            }
          }
        }
      }
      uVar21 = 0xffffffffffffffff;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 1] != '\0');
      if (uVar6 + 2 < 0x400) {
        local_8d6[uVar6 - 1] = 0x20;
        bVar3 = uVar21 != 0x3fe;
        uVar21 = uVar6 + 2;
        if (bVar3) {
          uVar21 = uVar6 + 3;
          local_8d6[uVar6] = 0x6e;
          if (uVar21 < 0x3ff) {
            uVar21 = uVar6 + 4;
            local_8d6[uVar6 + 1] = 0x65;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 5;
              local_8d6[uVar6 + 2] = 0x74;
              if (uVar21 < 0x3ff) {
                uVar21 = uVar6 + 6;
                *(undefined1 *)((long)&local_8d8 + uVar6 + 5) = 0x4d;
                if (uVar21 < 0x3ff) {
                  uVar21 = uVar6 + 7;
                  local_8d6[uVar6 + 4] = 0x61;
                  if (uVar21 < 0x3ff) {
                    uVar21 = uVar6 + 8;
                    local_8d6[uVar6 + 5] = 99;
                    if (uVar21 < 0x3ff) {
                      local_8d6[uVar6 + 6] = 0x3d;
                      uVar21 = uVar6 + 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_8d6[uVar21 - 2] = 0;
      bVar5 = (byte)local_50;
      cVar15 = ((byte)local_50 >> 4) + 0x37;
      if ((byte)local_50 < 0xa0) {
        cVar15 = ((byte)local_50 >> 4) + 0x30;
      }
      lVar8 = 0;
      do {
        bVar11 = bVar5;
        cVar17 = cVar15;
        if (lVar8 != 0) {
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x3a;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          bVar11 = abStack_3e[lVar8 + -0x12];
          cVar17 = (bVar11 >> 4) + 0x37;
          if (bVar11 < 0xa0) {
            cVar17 = (bVar11 >> 4) + 0x30;
          }
        }
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          local_8d6[uVar6 - 2] = cVar17;
          local_8d6[uVar6 - 1] = 0;
        }
        bVar11 = bVar11 & 0xf;
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar17 = bVar11 + 0x37;
          if (bVar11 < 10) {
            cVar17 = bVar11 + 0x30;
          }
          local_8d6[uVar6 - 2] = cVar17;
          local_8d6[uVar6 - 1] = 0;
        }
        uVar22 = local_58;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 6);
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x20;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = 'n';
        pcVar14 = str_1000e0db;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x3d;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      iVar13 = 8;
      do {
        uVar18 = uVar22 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
        cVar17 = (char)uVar18;
        cVar15 = cVar17 + '7';
        if (uVar18 < 10) {
          cVar15 = cVar17 + '0';
        }
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          local_8d6[uVar6 - 2] = cVar15;
          local_8d6[uVar6 - 1] = 0;
        }
        uVar18 = local_60;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x20;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = 'n';
        pcVar14 = str_1000e0e9;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x3d;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      if (uVar18 == 0) {
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          *(undefined2 *)(local_8d6 + (uVar6 - 2)) = 0x30;
        }
      }
      else {
        uVar21 = 0xffffffffffffffff;
        do {
          uVar6 = uVar21;
          abStack_3e[uVar6 + 3] = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
          uVar21 = uVar6 + 1;
          if (8 < uVar21) break;
          bVar3 = 9 < uVar18;
          uVar18 = uVar18 / 10;
        } while (bVar3);
        if ((uVar21 & 1) == 0) {
          uVar4 = 0;
          do {
            uVar10 = uVar4;
            uVar4 = uVar10 + 1;
          } while (local_8d6[uVar10 - 2] != '\0');
          uVar4 = uVar21;
          if (uVar10 + 1 < 0x400) {
            local_8d6[uVar10 - 2] = abStack_3e[uVar6 + 3];
            local_8d6[uVar10 - 1] = 0;
          }
        }
        else {
          uVar4 = uVar6 + 2;
        }
        while (uVar21 != 0) {
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            local_8d6[uVar6 - 2] = abStack_3e[uVar4 + 1];
            local_8d6[uVar6 - 1] = 0;
          }
          pbVar1 = abStack_3e + uVar4;
          uVar4 = uVar4 - 2;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          uVar21 = uVar4;
          if (uVar6 + 1 < 0x400) {
            local_8d6[uVar6 - 2] = *pbVar1;
            local_8d6[uVar6 - 1] = 0;
          }
        }
      }
      uVar18 = local_5c;
      if (local_5c != 0) {
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar21 < 0x400) {
          local_8d6[uVar6 - 2] = 0x20;
          uVar6 = uVar21;
        }
        local_8d6[uVar6 - 2] = 0;
        uVar21 = 0xffffffffffffffff;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 1] != '\0');
        if (uVar6 + 2 < 0x400) {
          local_8d6[uVar6 - 1] = 0x6e;
          bVar3 = uVar21 != 0x3fe;
          uVar21 = uVar6 + 2;
          if (bVar3) {
            uVar21 = uVar6 + 3;
            local_8d6[uVar6] = 0x65;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 4;
              *(undefined1 *)((long)&local_8d8 + uVar6 + 3) = 0x74;
              if (uVar21 < 0x3ff) {
                uVar21 = uVar6 + 5;
                local_8d6[uVar6 + 2] = 0x4d;
                if (uVar21 < 0x3ff) {
                  uVar21 = uVar6 + 6;
                  local_8d6[uVar6 + 3] = 0x74;
                  if (uVar21 < 0x3ff) {
                    local_8d6[uVar6 + 4] = 0x75;
                    uVar21 = uVar6 + 7;
                  }
                }
              }
            }
          }
        }
        local_8d6[uVar21 - 2] = 0;
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar21 < 0x400) {
          local_8d6[uVar6 - 2] = 0x3d;
          uVar6 = uVar21;
        }
        local_8d6[uVar6 - 2] = 0;
        uVar21 = 0xffffffffffffffff;
        uVar20 = uVar18;
        do {
          uVar6 = uVar21;
          abStack_3e[uVar6 + 3] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
          uVar21 = uVar6 + 1;
          if (8 < uVar21) break;
          bVar3 = 9 < uVar20;
          uVar20 = uVar20 / 10;
        } while (bVar3);
        if ((uVar21 & 1) == 0) {
          uVar4 = 0;
          do {
            uVar10 = uVar4;
            uVar4 = uVar10 + 1;
          } while (local_8d6[uVar10 - 2] != '\0');
          uVar4 = uVar21;
          if (uVar10 + 1 < 0x400) {
            local_8d6[uVar10 - 2] = abStack_3e[uVar6 + 3];
            local_8d6[uVar10 - 1] = 0;
          }
        }
        else {
          uVar4 = uVar6 + 2;
        }
        while (uVar21 != 0) {
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            local_8d6[uVar6 - 2] = abStack_3e[uVar4 + 1];
            local_8d6[uVar6 - 1] = 0;
          }
          pbVar1 = abStack_3e + uVar4;
          uVar4 = uVar4 - 2;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          uVar21 = uVar4;
          if (uVar6 + 1 < 0x400) {
            local_8d6[uVar6 - 2] = *pbVar1;
            local_8d6[uVar6 - 1] = 0;
          }
        }
      }
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x20;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = 'n';
        pcVar14 = str_1000e0fa;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      local_8d6[uVar6 - 2] = 0;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar21 < 0x400) {
        local_8d6[uVar6 - 2] = 0x3d;
        uVar6 = uVar21;
      }
      local_8d6[uVar6 - 2] = 0;
      iVar13 = 8;
      do {
        uVar20 = local_98 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
        cVar15 = (char)uVar20;
        cVar17 = cVar15 + '7';
        if (uVar20 < 10) {
          cVar17 = cVar15 + '0';
        }
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        if (uVar6 + 1 < 0x400) {
          local_8d6[uVar6 - 2] = cVar17;
          local_8d6[uVar6 - 1] = 0;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (1 < local_88) {
        local_48 = param_1;
        DAT_1001000c = 0x5dc;
        if (uVar18 != 0) {
          DAT_1001000c = uVar18;
        }
        _DAT_10010010 = uVar22;
        DAT_10010014 = (local_98 >> 0xe & 2) + 10;
        _DAT_10010020 = local_50;
        _DAT_10010024 = local_4c;
        lVar8 = 0;
        DAT_10010000 = param_1;
        do {
          (&DAT_10010050)[lVar8] = 0;
          (&DAT_10010051)[lVar8] = 0;
          (&DAT_10010052)[lVar8] = 0;
          (&DAT_10010053)[lVar8] = 0;
          (&DAT_10010054)[lVar8] = 0;
          (&DAT_10010055)[lVar8] = 0;
          (&DAT_10010056)[lVar8] = 0;
          (&DAT_10010057)[lVar8] = 0;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x100);
        _DAT_10010150 = 0;
        DAT_10010154 = 0;
        DAT_10010155 = 0;
        DAT_10010156 = 0;
        DAT_10010157 = 0;
        DAT_10010158 = 0;
        DAT_10010159 = 0;
        DAT_1001015a = 0;
        DAT_1001015b = 0;
        DAT_1001015c = 0;
        DAT_1001015d = 0;
        DAT_1001015e = 0;
        DAT_1001015f = 0;
        DAT_10010160 = 0;
        DAT_10010161 = 0;
        DAT_10010162 = 0;
        DAT_10010163 = 0;
        DAT_10010164 = 0;
        DAT_10010165 = 0;
        DAT_10010166 = 0;
        DAT_10010167 = 0;
        DAT_10010168 = 0;
        DAT_10010169 = 0;
        DAT_1001016a = 0;
        DAT_1001016b = 0;
        DAT_1001016c = 0;
        DAT_1001016d = 0;
        DAT_1001016e = 0;
        DAT_1001016f = 0;
        DAT_10010170 = 0;
        DAT_10010171 = 0;
        DAT_10010172 = 0;
        DAT_10010173 = 0;
        lVar8 = 0;
        do {
          (&DAT_10010180)[lVar8] = 0;
          (&DAT_10010181)[lVar8] = 0;
          (&DAT_10010182)[lVar8] = 0;
          (&DAT_10010183)[lVar8] = 0;
          (&DAT_10010184)[lVar8] = 0;
          (&DAT_10010185)[lVar8] = 0;
          (&DAT_10010186)[lVar8] = 0;
          (&DAT_10010187)[lVar8] = 0;
          (&DAT_10010188)[lVar8] = 0;
          (&DAT_10010189)[lVar8] = 0;
          (&DAT_1001018a)[lVar8] = 0;
          (&DAT_1001018b)[lVar8] = 0;
          lVar8 = lVar8 + 0xc;
        } while (lVar8 != 0x84);
        lVar8 = 0;
        puVar26 = &DAT_10010210;
        do {
          (&DAT_10010210)[lVar8] = 0;
          (&DAT_10010211)[lVar8] = 0;
          (&DAT_10010212)[lVar8] = 0;
          (&DAT_10010213)[lVar8] = 0;
          (&DAT_10010214)[lVar8] = 0;
          (&DAT_10010215)[lVar8] = 0;
          (&DAT_10010216)[lVar8] = 0;
          (&DAT_10010217)[lVar8] = 0;
          (&DAT_10010218)[lVar8] = 0;
          (&DAT_10010219)[lVar8] = 0;
          lVar8 = lVar8 + 10;
        } while (lVar8 != 0x80c0);
        puVar9 = &DAT_10010058;
        lVar8 = 0;
        while( true ) {
          local_3c = 0;
          local_64 = 0;
          if (((local_48 == (int *)0x0) || (*local_48 != 0x54584b57)) ||
             (((uint)local_48[2] < 0x74 || ((code *)(ulong)(uint)local_48[0x1c] == (code *)0x0))))
          break;
          iVar13 = (*(code *)(ulong)(uint)local_48[0x1c])(0,puVar26,0x80c,&local_3c,&local_64);
          param_1 = local_48;
          if (iVar13 == 0) break;
          *(char *)(puVar9 + -1) = (char)local_3c;
          *(char *)((long)puVar9 + -7) = (char)((uint)local_3c >> 8);
          *(char *)((long)puVar9 + -6) = (char)((uint)local_3c >> 0x10);
          *(char *)((long)puVar9 + -5) = (char)((uint)local_3c >> 0x18);
          *(char *)((long)puVar9 + -4) = (char)local_64;
          *(char *)((long)puVar9 + -3) = (char)((uint)local_64 >> 8);
          *(char *)((long)puVar9 + -2) = (char)((uint)local_64 >> 0x10);
          *(char *)((long)puVar9 + -1) = (char)((uint)local_64 >> 0x18);
          *puVar9 = 0x20000080c;
          (&DAT_10010154)[lVar8 * 2] = (char)lVar8;
          (&DAT_10010155)[lVar8 * 2] = 0;
          lVar8 = lVar8 + 1;
          puVar9 = puVar9 + 2;
          puVar26 = puVar26 + 0x80c;
          if (lVar8 == 0x10) goto code_r0x100028af;
        }
        uVar21 = 0;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (local_8d6[uVar6 - 2] != '\0');
        param_1 = local_48;
        if (uVar6 + 1 < 0x400) {
          cVar15 = ' ';
          pcVar14 = str_1000e1bb;
          while( true ) {
            pcVar14 = pcVar14 + 1;
            local_8d6[uVar6 - 2] = cVar15;
            uVar6 = uVar6 + 1;
            cVar15 = *pcVar14;
            if (cVar15 == '\0') break;
            if (0x3fe < uVar6) break;
          }
        }
        goto LAB_100029ec;
      }
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar14 = str_1000e10d;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
    }
  }
LAB_10002a4c:
  local_8d6[uVar6 - 2] = 0;
LAB_10002a54:
  pcVar14 = recovered_1000b2b0((long)param_2);
  PF_PART1(local_d8, 0) = 0;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  if (uVar6 + 1 < 0x60) {
    cVar15 = '/';
    pcVar7 = str_1000dd11;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_459[uVar6 + 0x381] = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar7;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x5f);
  }
  acStack_459[uVar6 + 0x381] = '\0';
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  if (uVar21 < 0x60) {
    acStack_459[uVar6 + 0x381] = '/';
    uVar6 = uVar21;
  }
  acStack_459[uVar6 + 0x381] = '\0';
  bVar5 = *param_2;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  bVar11 = (bVar5 >> 4) + 0x37;
  if (bVar5 < 0xa0) {
    bVar11 = bVar5 >> 4 | 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    acStack_459[uVar6 + 0x381] = bVar11;
    acStack_459[uVar6 + 0x382] = '\0';
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  cVar15 = bVar5 + 0x37;
  if (bVar5 < 10) {
    cVar15 = bVar5 + 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    acStack_459[uVar6 + 0x381] = cVar15;
    acStack_459[uVar6 + 0x382] = '\0';
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  if (uVar21 < 0x60) {
    acStack_459[uVar6 + 0x381] = ':';
    uVar6 = uVar21;
  }
  acStack_459[uVar6 + 0x381] = '\0';
  bVar5 = param_2[1];
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  bVar16 = (bVar5 >> 4) + 0x37;
  if (bVar5 < 0xa0) {
    bVar16 = bVar5 >> 4 | 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    acStack_459[uVar6 + 0x381] = bVar16;
    acStack_459[uVar6 + 0x382] = '\0';
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  bVar19 = bVar5 + 0x37;
  if (bVar5 < 10) {
    bVar19 = bVar5 + 0x30;
  }
  if (uVar6 + 1 < 0x60) {
    acStack_459[uVar6 + 0x381] = bVar19;
    acStack_459[uVar6 + 0x382] = '\0';
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (acStack_459[uVar6 + 0x381] != '\0');
  if (uVar21 < 0x60) {
    acStack_459[uVar6 + 0x381] = '.';
    uVar6 = uVar21;
  }
  acStack_459[uVar6 + 0x381] = '\0';
  bVar5 = param_2[2];
  if (bVar5 == 0) {
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (acStack_459[uVar6 + 0x381] != '\0');
    if (uVar6 + 1 < 0x60) {
      (acStack_459 + uVar6 + 0x381)[0] = '0';
      (acStack_459 + uVar6 + 0x381)[1] = '\0';
    }
  }
  else {
    local_48 = (int *)CONCAT44(PF_PART4(local_48, 4),(uint)bVar19);
    uVar21 = 0xffffffffffffffff;
    uVar6 = (ulong)(uint)bVar5;
    do {
      uVar4 = uVar21;
      uVar22 = (uint)uVar6;
      abStack_3e[uVar4 + 3] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar21 = uVar4 + 1;
      if (8 < uVar21) break;
      uVar6 = uVar6 / 10;
    } while (9 < uVar22);
    if ((uVar21 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar10 = uVar6;
        uVar6 = uVar10 + 1;
      } while (acStack_459[uVar10 + 0x381] != '\0');
      uVar6 = uVar21;
      if (uVar10 + 1 < 0x60) {
        acStack_459[uVar10 + 0x381] = abStack_3e[uVar4 + 3];
        acStack_459[uVar10 + 0x382] = '\0';
      }
    }
    else {
      uVar6 = uVar4 + 2;
    }
    bVar19 = (byte)local_48;
    while (uVar21 != 0) {
      uVar21 = 0;
      do {
        uVar4 = uVar21;
        uVar21 = uVar4 + 1;
      } while (acStack_459[uVar4 + 0x381] != '\0');
      if (uVar4 + 1 < 0x60) {
        acStack_459[uVar4 + 0x381] = abStack_3e[uVar6 + 1];
        acStack_459[uVar4 + 0x382] = '\0';
      }
      pbVar1 = abStack_3e + uVar6;
      uVar6 = uVar6 - 2;
      uVar21 = 0;
      do {
        uVar4 = uVar21;
        uVar21 = uVar4 + 1;
      } while (acStack_459[uVar4 + 0x381] != '\0');
      uVar21 = uVar6;
      if (uVar4 + 1 < 0x60) {
        acStack_459[uVar4 + 0x381] = *pbVar1;
        acStack_459[uVar4 + 0x382] = '\0';
      }
    }
  }
  local_4d8 = local_4d8 & 0xffffff00;
  uVar21 = 0xffffffffffffffff;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3ff] != '\0');
  if (uVar6 + 2 < 0x400) {
    *(undefined1 *)(uVar21 + (long)&local_4d8) = 0x70;
    bVar3 = uVar21 != 0x3fe;
    uVar21 = uVar6 + 2;
    if (bVar3) {
      uVar21 = uVar6 + 3;
      local_8d6[uVar6 + 0x400] = 99;
      if (uVar21 < 0x3ff) {
        uVar21 = uVar6 + 4;
        local_8d6[uVar6 + 0x401] = 0x69;
        if (uVar21 < 0x3ff) {
          local_8d6[uVar6 + 0x402] = 0x3d;
          uVar21 = uVar6 + 5;
        }
      }
    }
  }
  local_8d6[uVar21 + 0x3fe] = 0;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = cVar15;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x3a;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = bVar16;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = bVar19;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x2e;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  if (bVar5 == 0) {
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 + 0x3fe] != '\0');
    if (uVar6 + 1 < 0x400) {
      *(undefined2 *)(local_8d6 + uVar6 + 0x3fe) = 0x30;
    }
  }
  else {
    uVar21 = 0xffffffffffffffff;
    uVar22 = (uint)bVar5;
    do {
      uVar6 = uVar21;
      abStack_3e[uVar6 + 3] = (byte)(uVar22 % 10) | 0x30;
      uVar21 = uVar6 + 1;
      if (8 < uVar21) break;
      bVar3 = 9 < uVar22;
      uVar22 = uVar22 / 10;
    } while (bVar3);
    if ((uVar21 & 1) == 0) {
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        uVar4 = uVar10 + 1;
      } while (local_8d6[uVar10 + 0x3fe] != '\0');
      uVar4 = uVar21;
      if (uVar10 + 1 < 0x400) {
        local_8d6[uVar10 + 0x3fe] = abStack_3e[uVar6 + 3];
        local_8d6[uVar10 + 0x3ff] = 0;
      }
    }
    else {
      uVar4 = uVar6 + 2;
    }
    while (uVar21 != 0) {
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 + 0x3fe] != '\0');
      if (uVar6 + 1 < 0x400) {
        local_8d6[uVar6 + 0x3fe] = abStack_3e[uVar4 + 1];
        local_8d6[uVar6 + 0x3ff] = 0;
      }
      pbVar1 = abStack_3e + uVar4;
      uVar4 = uVar4 - 2;
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 + 0x3fe] != '\0');
      uVar21 = uVar4;
      if (uVar6 + 1 < 0x400) {
        local_8d6[uVar6 + 0x3fe] = *pbVar1;
        local_8d6[uVar6 + 0x3ff] = 0;
      }
    }
  }
  uVar21 = 0xffffffffffffffff;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3ff] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_8d6[uVar6 + 0x3ff] = 0x20;
    bVar3 = uVar21 != 0x3fe;
    uVar21 = uVar6 + 2;
    if (bVar3) {
      uVar21 = uVar6 + 3;
      local_8d6[uVar6 + 0x400] = 0x76;
      if (uVar21 < 0x3ff) {
        uVar21 = uVar6 + 4;
        local_8d6[uVar6 + 0x401] = 0x65;
        if (uVar21 < 0x3ff) {
          uVar21 = uVar6 + 5;
          local_8d6[uVar6 + 0x402] = 0x6e;
          if (uVar21 < 0x3ff) {
            uVar21 = uVar6 + 6;
            *(undefined1 *)(uVar6 + 5 + (long)&local_4d8) = 100;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 7;
              local_8d6[uVar6 + 0x404] = 0x6f;
              if (uVar21 < 0x3ff) {
                uVar21 = uVar6 + 8;
                acStack_499[uVar6 - 0x38] = 'r';
                if (uVar21 < 0x3ff) {
                  acStack_499[uVar6 - 0x37] = '=';
                  uVar21 = uVar6 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_8d6[uVar21 + 0x3fe] = 0;
  uVar2 = *(ushort *)(param_2 + 4);
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar2 >> 8);
    bVar11 = (bVar5 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar12 = uVar2 >> 8 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)uVar12;
    cVar17 = cVar15 + '7';
    if (uVar12 < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar12 = uVar2 >> 4 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)uVar12;
    cVar17 = cVar15 + '7';
    if (uVar12 < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)(uVar2 & 0xf);
    cVar17 = cVar15 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0xffffffffffffffff;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3ff] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_8d6[uVar6 + 0x3ff] = 0x20;
    bVar3 = uVar21 != 0x3fe;
    uVar21 = uVar6 + 2;
    if (bVar3) {
      uVar21 = uVar6 + 3;
      local_8d6[uVar6 + 0x400] = 100;
      if (uVar21 < 0x3ff) {
        uVar21 = uVar6 + 4;
        local_8d6[uVar6 + 0x401] = 0x65;
        if (uVar21 < 0x3ff) {
          uVar21 = uVar6 + 5;
          local_8d6[uVar6 + 0x402] = 0x76;
          if (uVar21 < 0x3ff) {
            uVar21 = uVar6 + 6;
            *(undefined1 *)(uVar6 + 5 + (long)&local_4d8) = 0x69;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 7;
              local_8d6[uVar6 + 0x404] = 99;
              if (uVar21 < 0x3ff) {
                uVar21 = uVar6 + 8;
                acStack_499[uVar6 - 0x38] = 'e';
                if (uVar21 < 0x3ff) {
                  acStack_499[uVar6 - 0x37] = '=';
                  uVar21 = uVar6 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_8d6[uVar21 + 0x3fe] = 0;
  uVar2 = *(ushort *)(param_2 + 6);
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar5 = (byte)(uVar2 >> 8);
    bVar11 = (bVar5 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar12 = uVar2 >> 8 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)uVar12;
    cVar17 = cVar15 + '7';
    if (uVar12 < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar12 = uVar2 >> 4 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)uVar12;
    cVar17 = cVar15 + '7';
    if (uVar12 < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = (char)(uVar2 & 0xf);
    cVar17 = cVar15 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar17 = cVar15 + '0';
    }
    local_8d6[uVar6 + 0x3fe] = cVar17;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0xffffffffffffffff;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3ff] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_8d6[uVar6 + 0x3ff] = 0x20;
    bVar3 = uVar21 != 0x3fe;
    uVar21 = uVar6 + 2;
    if (bVar3) {
      uVar21 = uVar6 + 3;
      local_8d6[uVar6 + 0x400] = 99;
      if (uVar21 < 0x3ff) {
        uVar21 = uVar6 + 4;
        local_8d6[uVar6 + 0x401] = 0x6c;
        if (uVar21 < 0x3ff) {
          uVar21 = uVar6 + 5;
          *(undefined1 *)(uVar6 + 4 + (long)&local_4d8) = 0x61;
          if (uVar21 < 0x3ff) {
            uVar21 = uVar6 + 6;
            local_8d6[uVar6 + 0x403] = 0x73;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 7;
              local_8d6[uVar6 + 0x404] = 0x73;
              if (uVar21 < 0x3ff) {
                acStack_499[uVar6 - 0x38] = '=';
                uVar21 = uVar6 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_8d6[uVar21 + 0x3fe] = 0;
  bVar5 = param_2[8];
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar11 = (bVar5 >> 4) + 0x37;
    if (bVar5 < 0xa0) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = bVar5 + 0x37;
    if (bVar5 < 10) {
      cVar15 = bVar5 + 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = cVar15;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x2e;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  bVar5 = param_2[9];
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar11 = (bVar5 >> 4) + 0x37;
    if (bVar5 < 0xa0) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = bVar5 + 0x37;
    if (bVar5 < 10) {
      cVar15 = bVar5 + 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = cVar15;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x2e;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  bVar5 = param_2[10];
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar11 = (bVar5 >> 4) + 0x37;
    if (bVar5 < 0xa0) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = bVar5 + 0x37;
    if (bVar5 < 10) {
      cVar15 = bVar5 + 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = cVar15;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar7 = str_1000e1f3;
    do {
      pcVar7 = pcVar7 + 1;
      local_8d6[uVar6 + 0x3fe] = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar7;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  bVar5 = param_2[0xb];
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    bVar11 = (bVar5 >> 4) + 0x37;
    if (bVar5 < 0xa0) {
      bVar11 = bVar5 >> 4 | 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = bVar11;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  bVar5 = bVar5 & 0xf;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = bVar5 + 0x37;
    if (bVar5 < 10) {
      cVar15 = bVar5 + 0x30;
    }
    local_8d6[uVar6 + 0x3fe] = cVar15;
    local_8d6[uVar6 + 0x3ff] = 0;
  }
  uVar22 = *(uint *)(param_2 + 0x10);
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x20;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  uVar21 = 0xffffffffffffffff;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3ff] != '\0');
  if (uVar6 + 2 < 0x400) {
    local_8d6[uVar6 + 0x3ff] = 99;
    bVar3 = uVar21 != 0x3fe;
    uVar21 = uVar6 + 2;
    if (bVar3) {
      uVar21 = uVar6 + 3;
      local_8d6[uVar6 + 0x400] = 0x6f;
      if (uVar21 < 0x3ff) {
        uVar21 = uVar6 + 4;
        local_8d6[uVar6 + 0x401] = 0x6d;
        if (uVar21 < 0x3ff) {
          uVar21 = uVar6 + 5;
          *(undefined1 *)(uVar6 + 4 + (long)&local_4d8) = 0x6d;
          if (uVar21 < 0x3ff) {
            uVar21 = uVar6 + 6;
            local_8d6[uVar6 + 0x403] = 0x61;
            if (uVar21 < 0x3ff) {
              uVar21 = uVar6 + 7;
              local_8d6[uVar6 + 0x404] = 0x6e;
              if (uVar21 < 0x3ff) {
                acStack_499[uVar6 - 0x38] = 'd';
                uVar21 = uVar6 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_8d6[uVar21 + 0x3fe] = 0;
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 + 0x3fe] != '\0');
  if (uVar21 < 0x400) {
    local_8d6[uVar6 + 0x3fe] = 0x3d;
    uVar6 = uVar21;
  }
  local_8d6[uVar6 + 0x3fe] = 0;
  iVar13 = 8;
  do {
    uVar18 = uVar22 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
    cVar15 = (char)uVar18;
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 + 0x3fe] != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar17 = cVar15 + '7';
      if (uVar18 < 10) {
        cVar17 = cVar15 + '0';
      }
      local_8d6[uVar6 + 0x3fe] = cVar17;
      local_8d6[uVar6 + 0x3ff] = 0;
    }
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  uVar21 = 0;
  do {
    uVar22 = *(uint *)(param_2 + uVar21 * 4 + 0x14);
    if (uVar22 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (local_8d6[uVar4 + 0x3ff] != '\0');
      if (uVar4 + 2 < 0x400) {
        local_8d6[uVar4 + 0x3ff] = 0x20;
        bVar3 = uVar6 != 0x3fe;
        uVar6 = uVar4 + 2;
        if (bVar3) {
          uVar6 = uVar4 + 3;
          local_8d6[uVar4 + 0x400] = 0x62;
          if (uVar6 < 0x3ff) {
            uVar6 = uVar4 + 4;
            local_8d6[uVar4 + 0x401] = 0x61;
            if (uVar6 < 0x3ff) {
              local_8d6[uVar4 + 0x402] = 0x72;
              uVar6 = uVar4 + 5;
            }
          }
        }
      }
      local_8d6[uVar6 + 0x3fe] = 0;
      if (uVar21 == 0) {
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (local_8d6[uVar4 + 0x3fe] != '\0');
        if (uVar4 + 1 < 0x400) {
          *(undefined2 *)(local_8d6 + uVar4 + 0x3fe) = 0x30;
        }
      }
      else {
        uVar4 = 0xffffffffffffffff;
        uVar6 = uVar21;
        do {
          uVar10 = uVar4;
          uVar4 = uVar6 & 0xffffffff;
          uVar18 = (uint)uVar6;
          uVar6 = uVar4 / 10;
          abStack_3e[uVar10 + 3] = (char)uVar4 + (char)uVar6 * -10 | 0x30;
          uVar4 = uVar10 + 1;
          if (8 < uVar4) break;
        } while (9 < uVar18);
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
          do {
            uVar23 = uVar6;
            uVar6 = uVar23 + 1;
          } while (local_8d6[uVar23 + 0x3fe] != '\0');
          uVar6 = uVar4;
          if (uVar23 + 1 < 0x400) {
            local_8d6[uVar23 + 0x3fe] = abStack_3e[uVar10 + 3];
            local_8d6[uVar23 + 0x3ff] = 0;
          }
        }
        else {
          uVar6 = uVar10 + 2;
        }
        while (uVar4 != 0) {
          uVar4 = 0;
          do {
            uVar10 = uVar4;
            uVar4 = uVar10 + 1;
          } while (local_8d6[uVar10 + 0x3fe] != '\0');
          if (uVar10 + 1 < 0x400) {
            local_8d6[uVar10 + 0x3fe] = abStack_3e[uVar6 + 1];
            local_8d6[uVar10 + 0x3ff] = 0;
          }
          pbVar1 = abStack_3e + uVar6;
          uVar6 = uVar6 - 2;
          uVar4 = 0;
          do {
            uVar10 = uVar4;
            uVar4 = uVar10 + 1;
          } while (local_8d6[uVar10 + 0x3fe] != '\0');
          uVar4 = uVar6;
          if (uVar10 + 1 < 0x400) {
            local_8d6[uVar10 + 0x3fe] = *pbVar1;
            local_8d6[uVar10 + 0x3ff] = 0;
          }
        }
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (local_8d6[uVar4 + 0x3fe] != '\0');
      if (uVar6 < 0x400) {
        local_8d6[uVar4 + 0x3fe] = 0x3d;
        uVar4 = uVar6;
      }
      local_8d6[uVar4 + 0x3fe] = 0;
      iVar13 = 8;
      do {
        uVar18 = uVar22 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
        cVar15 = (char)uVar18;
        uVar6 = 0;
        do {
          uVar4 = uVar6;
          uVar6 = uVar4 + 1;
        } while (local_8d6[uVar4 + 0x3fe] != '\0');
        if (uVar4 + 1 < 0x400) {
          cVar17 = cVar15 + '7';
          if (uVar18 < 10) {
            cVar17 = cVar15 + '0';
          }
          local_8d6[uVar4 + 0x3fe] = cVar17;
          local_8d6[uVar4 + 0x3ff] = 0;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 6);
  if ((char)local_8d8 != '\0') {
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 + 0x3fe] != '\0');
    if (uVar21 < 0x400) {
      local_8d6[uVar6 + 0x3fe] = 0x20;
      uVar6 = uVar21;
    }
    local_8d6[uVar6 + 0x3fe] = 0;
    uVar21 = 0;
    do {
      uVar6 = uVar21;
      uVar21 = uVar6 + 1;
    } while (local_8d6[uVar6 + 0x3fe] != '\0');
    if (uVar6 + 1 < 0x400) {
      pcVar7 = (char *)((long)&local_8d8 + 1);
      cVar15 = (char)local_8d8;
      do {
        local_8d6[uVar6 + 0x3fe] = cVar15;
        uVar6 = uVar6 + 1;
        cVar15 = *pcVar7;
        if (cVar15 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar6 < 0x3ff);
    }
    local_8d6[uVar6 + 0x3fe] = 0;
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_d8,pcVar14,&local_4d8);
  }
  return;
code_r0x100028af:
  _DAT_10010150 = 0x100000;
  bVar3 = recovered_1000cfd0(local_48,&local_d8,0,0x10,((uintptr_t)pf_module_state + 0x2575U),0x100,((uintptr_t)pf_module_state + 0x2675U),0x24,((uintptr_t)pf_module_state + 0x26a5U),
                             0x84,&DAT_10010028);
  if ((int)CONCAT71(extraout_var_00,bVar3) != 0) {
    DAT_1001002a = 0x10;
    uVar21 = CONCAT17(PF_PART1(DAT_10010030, 7),
                      CONCAT16(PF_PART1(DAT_10010030, 6),
                               CONCAT15(PF_PART1(DAT_10010030, 5),
                                        CONCAT14(PF_PART1(DAT_10010030, 4),
                                                 CONCAT13(PF_PART1(DAT_10010030, 3),
                                                          CONCAT12(PF_PART1(DAT_10010030, 2),
                                                                   CONCAT11(PF_PART1(DAT_10010030, 1),
                                                                            (undefined1)DAT_10010030
                                                                           )))))));
    if ((uVar21 != 0) && (*param_1 == 0x54584b57)) {
      uVar22 = param_1[2];
      if (0x7b < uVar22) {
        if ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0) {
          (*(code *)(ulong)(uint)param_1[0x1e])();
          uVar21 = CONCAT17(PF_PART1(DAT_10010030, 7),
                            CONCAT16(PF_PART1(DAT_10010030, 6),
                                     CONCAT15(PF_PART1(DAT_10010030, 5),
                                              CONCAT14(PF_PART1(DAT_10010030, 4),
                                                       CONCAT13(PF_PART1(DAT_10010030, 3),
                                                                CONCAT12(PF_PART1(DAT_10010030, 2),
                                                                         CONCAT11(PF_PART1(DAT_10010030, 1)
                                                                                  ,(undefined1)
                                                                                   DAT_10010030)))))
                                    ));
          if ((uVar21 == 0) || (*param_1 != 0x54584b57)) goto LAB_10003e56;
          uVar22 = param_1[2];
        }
        if ((0xc3 < uVar22) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0x30])(uVar21,2,0);
          goto LAB_10003e56;
        }
      }
      if (((uVar21 >> 0x20 == 0) && (0x6f < uVar22)) &&
         ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0x1b])(uVar21,2,0);
      }
    }
LAB_10003e56:
    DAT_100182d0 = 0;
    DAT_100182d1 = 0;
    DAT_100182d2 = 0;
    DAT_100182d3 = 0;
    DAT_100182d4 = 0;
    DAT_100182d5 = 0;
    DAT_100182d6 = 0;
    DAT_100182d7 = 0;
    DAT_100182d8 = 0;
    DAT_100182d9 = 0;
    DAT_100182da = 0;
    DAT_100182db = 0;
    DAT_100182dc = 0;
    DAT_100182dd = 0;
    DAT_100182de = 0;
    DAT_100182df = 0;
    _DAT_100182e0 = 0;
    DAT_100182e4 = 0;
    DAT_100182e5 = 0;
    DAT_100182f0 = 0;
    DAT_100182f1 = 0;
    DAT_100182f2 = 0;
    DAT_100182f3 = 0;
    DAT_100182f4 = 0;
    DAT_100182f5 = 0;
    DAT_100182f6 = 0;
    DAT_100182f7 = 0;
    DAT_100182f8 = 0;
    DAT_100182f9 = 0;
    DAT_100182fa = 0;
    DAT_100182fb = 0;
    lVar8 = 0;
    do {
      (&DAT_10018300)[lVar8] = 0;
      (&DAT_10018301)[lVar8] = 0;
      (&DAT_10018302)[lVar8] = 0;
      (&DAT_10018303)[lVar8] = 0;
      (&DAT_10018304)[lVar8] = 0;
      (&DAT_10018305)[lVar8] = 0;
      (&DAT_10018306)[lVar8] = 0;
      (&DAT_10018307)[lVar8] = 0;
      (&DAT_10018308)[lVar8] = 0;
      (&DAT_10018309)[lVar8] = 0;
      lVar8 = lVar8 + 10;
    } while (lVar8 != 0x80c);
    if (((*param_1 == 0x54584b57) && (0x73 < (uint)param_1[2])) &&
       (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
        (iVar13 = (*(code *)(ulong)(uint)param_1[0x1c])
                            (0,&DAT_10018300,0x80c,&DAT_10010018,&DAT_1001001c), iVar13 != 0)))) {
      _DAT_100182e0 = 0;
      bVar3 = recovered_1000cfd0(param_1,&local_d8,1,1,((uintptr_t)pf_module_state + 0xa7f5U),0x10,((uintptr_t)pf_module_state + 0xa805U),6,((uintptr_t)pf_module_state + 0xa815U),0xc,
                                 &DAT_10010038);
      if ((int)CONCAT71(extraout_var_01,bVar3) != 0) {
        if (CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) != 0) {
          piVar24 = param_1;
          if (*param_1 == 0x54584b57) {
            uVar21 = CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) + 0x14;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)local_48[0x2f] == (code *)0x0)) {
              piVar24 = local_48;
              if ((uVar21 >> 0x20 == 0) &&
                 ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)local_48[0x1a] != (code *)0x0)))
                 ) {
                (*(code *)(ulong)(uint)local_48[0x1a])(uVar21,1,&local_54);
              }
            }
            else {
              (*(code *)(ulong)(uint)local_48[0x2f])(uVar21,1,&local_54);
              piVar24 = local_48;
            }
          }
          param_1 = piVar24;
          if (CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) != 0) {
            piVar25 = piVar24;
            if (*piVar24 == 0x54584b57) {
              uVar21 = CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) + 0x14;
              if (((uint)piVar24[2] < 0xc4) || ((code *)(ulong)(uint)local_48[0x30] == (code *)0x0))
              {
                piVar25 = local_48;
                if ((uVar21 >> 0x20 == 0) &&
                   ((0x6f < (uint)piVar24[2] && ((code *)(ulong)(uint)local_48[0x1b] != (code *)0x0)
                    ))) {
                  (*(code *)(ulong)(uint)local_48[0x1b])(uVar21,1);
                }
              }
              else {
                (*(code *)(ulong)(uint)local_48[0x30])(uVar21,1);
                piVar25 = local_48;
              }
            }
            param_1 = piVar25;
            if ((CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) != 0) && (*piVar25 == 0x54584b57)) {
              uVar21 = CONCAT71(PF_PART7(local_d8, 1),(undefined1)local_d8) + 0x14;
              if (((uint)piVar25[2] < 0xc0) || ((code *)(ulong)(uint)local_48[0x2f] == (code *)0x0))
              {
                param_1 = local_48;
                if (((uVar21 >> 0x20 == 0) && (0x6b < (uint)piVar25[2])) &&
                   ((code *)(ulong)(uint)local_48[0x1a] != (code *)0x0)) {
                  (*(code *)(ulong)(uint)local_48[0x1a])(uVar21,1,&local_54);
                }
              }
              else {
                (*(code *)(ulong)(uint)local_48[0x2f])(uVar21,1,&local_54);
                param_1 = local_48;
              }
            }
          }
        }
        DAT_10010008 = 1;
        uVar21 = CONCAT17(PF_PART1(DAT_10010030, 7),
                          CONCAT16(PF_PART1(DAT_10010030, 6),
                                   CONCAT15(PF_PART1(DAT_10010030, 5),
                                            CONCAT14(PF_PART1(DAT_10010030, 4),
                                                     CONCAT13(PF_PART1(DAT_10010030, 3),
                                                              CONCAT12(PF_PART1(DAT_10010030, 2),
                                                                       CONCAT11(PF_PART1(DAT_10010030, 1),
                                                                                (undefined1)
                                                                                DAT_10010030)))))));
        if ((uVar21 != 0) && (*param_1 == 0x54584b57)) {
          uVar22 = param_1[2];
          if (0x7b < uVar22) {
            if ((code *)(ulong)(uint)local_48[0x1e] != (code *)0x0) {
              (*(code *)(ulong)(uint)local_48[0x1e])();
              uVar21 = CONCAT17(PF_PART1(DAT_10010030, 7),
                                CONCAT16(PF_PART1(DAT_10010030, 6),
                                         CONCAT15(PF_PART1(DAT_10010030, 5),
                                                  CONCAT14(PF_PART1(DAT_10010030, 4),
                                                           CONCAT13(PF_PART1(DAT_10010030, 3),
                                                                    CONCAT12(PF_PART1(DAT_10010030, 2),
                                                                             CONCAT11(PF_PART1(DAT_10010030, 1),(
                                                  undefined1)DAT_10010030)))))));
              if ((uVar21 == 0) || (*local_48 != 0x54584b57)) goto LAB_10004271;
              uVar22 = local_48[2];
            }
            if ((0xc3 < uVar22) && ((code *)(ulong)(uint)local_48[0x30] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_48[0x30])(uVar21,2,0);
              goto LAB_10004271;
            }
          }
          if (((uVar21 >> 0x20 == 0) && (0x6f < uVar22)) &&
             ((code *)(ulong)(uint)local_48[0x1b] != (code *)0x0)) {
            (*(code *)(ulong)(uint)local_48[0x1b])(uVar21,2,0);
          }
        }
LAB_10004271:
        lVar8 = 0;
        do {
          local_8d6[lVar8 + 0x3fe] = 0;
          local_8d6[lVar8 + 0x3ff] = 0;
          local_8d6[lVar8 + 0x400] = 0;
          local_8d6[lVar8 + 0x401] = 0;
          local_8d6[lVar8 + 0x402] = 0;
          local_8d6[lVar8 + 0x403] = 0;
          local_8d6[lVar8 + 0x404] = 0;
          acStack_499[lVar8 + -0x38] = '\0';
          acStack_499[lVar8 + -0x37] = '\0';
          acStack_499[lVar8 + -0x36] = '\0';
          acStack_499[lVar8 + -0x35] = '\0';
          acStack_499[lVar8 + -0x34] = '\0';
          lVar8 = lVar8 + 0xc;
        } while (lVar8 != 0xc0);
        local_4d8 = 0xc0;
        local_4d4 = (local_58 & 1) * 2 + 0xd;
        local_4d0 = DAT_1001000c;
        local_4cc = 0x800;
        local_4c8 = local_50;
        local_4c4 = local_4c;
        acStack_499[1] = 0;
        uVar21 = 0xffffffffffffffff;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (acStack_499[uVar6 + 2] != '\0');
        if (uVar6 + 2 < 0x40) {
          cVar15 = 'q';
          pcVar14 = str_1000e13c;
          uVar6 = uVar6 + 2;
          do {
            uVar21 = uVar6;
            pcVar14 = pcVar14 + 1;
            acStack_499[uVar21] = cVar15;
            cVar15 = *pcVar14;
            if (cVar15 == '\0') break;
            uVar6 = uVar21 + 1;
          } while (uVar21 < 0x3f);
        }
        acStack_499[uVar21 + 1] = '\0';
        acStack_459[1] = 0;
        uVar21 = 0xffffffffffffffff;
        do {
          uVar6 = uVar21;
          uVar21 = uVar6 + 1;
        } while (acStack_459[uVar6 + 2] != '\0');
        if (uVar6 + 2 < 0x40) {
          cVar15 = 'q';
          pcVar14 = str_1000dadb;
          uVar6 = uVar6 + 2;
          do {
            uVar21 = uVar6;
            pcVar14 = pcVar14 + 1;
            acStack_459[uVar21] = cVar15;
            cVar15 = *pcVar14;
            if (cVar15 == '\0') break;
            uVar6 = uVar21 + 1;
          } while (uVar21 < 0x3f);
        }
        acStack_459[uVar21 + 1] = '\0';
        param_1 = local_48;
        if (((*local_48 == 0x54584b57) && (0xcb < (uint)local_48[2])) &&
           (((code *)(ulong)(uint)local_48[0x32] != (code *)0x0 &&
            (iVar13 = (*(code *)(ulong)(uint)local_48[0x32])
                                (&local_4d8,recovered_1000c7d0,recovered_1000cb40), iVar13 != 0))))
        {
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar15 = ' ';
            pcVar14 = str_1000e16e;
            do {
              pcVar14 = pcVar14 + 1;
              local_8d6[uVar6 - 2] = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar14;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x20;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar15 = 'n';
            pcVar14 = str_1000e184;
            do {
              pcVar14 = pcVar14 + 1;
              local_8d6[uVar6 - 2] = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar14;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x3d;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          if (DAT_10010014 == 0) {
            uVar21 = 0;
            do {
              uVar6 = uVar21;
              uVar21 = uVar6 + 1;
            } while (local_8d6[uVar6 - 2] != '\0');
            if (uVar6 + 1 < 0x400) {
              *(undefined2 *)(local_8d6 + (uVar6 - 2)) = 0x30;
            }
          }
          else {
            uVar21 = 0xffffffffffffffff;
            uVar22 = DAT_10010014;
            do {
              uVar6 = uVar21;
              abStack_3e[uVar6 + 3] = (char)uVar22 + (char)(uVar22 / 10) * -10 | 0x30;
              uVar21 = uVar6 + 1;
              if (8 < uVar21) break;
              bVar3 = 9 < uVar22;
              uVar22 = uVar22 / 10;
            } while (bVar3);
            if ((uVar21 & 1) == 0) {
              uVar4 = 0;
              do {
                uVar10 = uVar4;
                uVar4 = uVar10 + 1;
              } while (local_8d6[uVar10 - 2] != '\0');
              uVar4 = uVar21;
              if (uVar10 + 1 < 0x400) {
                local_8d6[uVar10 - 2] = abStack_3e[uVar6 + 3];
                local_8d6[uVar10 - 1] = 0;
              }
            }
            else {
              uVar4 = uVar6 + 2;
            }
            while (uVar21 != 0) {
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = abStack_3e[uVar4 + 1];
                local_8d6[uVar6 - 1] = 0;
              }
              pbVar1 = abStack_3e + uVar4;
              uVar4 = uVar4 - 2;
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              uVar21 = uVar4;
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = *pbVar1;
                local_8d6[uVar6 - 1] = 0;
              }
            }
          }
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x20;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar15 = 'n';
            pcVar14 = str_1000e193;
            do {
              pcVar14 = pcVar14 + 1;
              local_8d6[uVar6 - 2] = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar14;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x3d;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          if (DAT_10010028 == 0) {
            uVar21 = 0;
            do {
              uVar6 = uVar21;
              uVar21 = uVar6 + 1;
            } while (local_8d6[uVar6 - 2] != '\0');
            if (uVar6 + 1 < 0x400) {
              *(undefined2 *)(local_8d6 + (uVar6 - 2)) = 0x30;
            }
          }
          else {
            uVar21 = 0xffffffffffffffff;
            uVar22 = (uint)DAT_10010028;
            do {
              uVar6 = uVar21;
              abStack_3e[uVar6 + 3] = (char)uVar22 + (char)(uVar22 / 10) * -10 | 0x30;
              uVar21 = uVar6 + 1;
              if (8 < uVar21) break;
              bVar3 = 9 < uVar22;
              uVar22 = uVar22 / 10;
            } while (bVar3);
            if ((uVar21 & 1) == 0) {
              uVar4 = 0;
              do {
                uVar10 = uVar4;
                uVar4 = uVar10 + 1;
              } while (local_8d6[uVar10 - 2] != '\0');
              uVar4 = uVar21;
              if (uVar10 + 1 < 0x400) {
                local_8d6[uVar10 - 2] = abStack_3e[uVar6 + 3];
                local_8d6[uVar10 - 1] = 0;
              }
            }
            else {
              uVar4 = uVar6 + 2;
            }
            while (uVar21 != 0) {
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = abStack_3e[uVar4 + 1];
                local_8d6[uVar6 - 1] = 0;
              }
              pbVar1 = abStack_3e + uVar4;
              uVar4 = uVar4 - 2;
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              uVar21 = uVar4;
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = *pbVar1;
                local_8d6[uVar6 - 1] = 0;
              }
            }
          }
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x20;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar15 = 'n';
            pcVar14 = str_1000e1a2;
            do {
              pcVar14 = pcVar14 + 1;
              local_8d6[uVar6 - 2] = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar14;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x3d;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          if (DAT_10010038 == 0) {
            uVar21 = 0;
            do {
              uVar6 = uVar21;
              uVar21 = uVar6 + 1;
            } while (local_8d6[uVar6 - 2] != '\0');
            if (uVar6 + 1 < 0x400) {
              *(undefined2 *)(local_8d6 + (uVar6 - 2)) = 0x30;
            }
          }
          else {
            uVar21 = 0xffffffffffffffff;
            uVar22 = (uint)DAT_10010038;
            do {
              uVar6 = uVar21;
              abStack_3e[uVar6 + 3] = (char)uVar22 + (char)(uVar22 / 10) * -10 | 0x30;
              uVar21 = uVar6 + 1;
              if (8 < uVar21) break;
              bVar3 = 9 < uVar22;
              uVar22 = uVar22 / 10;
            } while (bVar3);
            if ((uVar21 & 1) == 0) {
              uVar4 = 0;
              do {
                uVar10 = uVar4;
                uVar4 = uVar10 + 1;
              } while (local_8d6[uVar10 - 2] != '\0');
              uVar4 = uVar21;
              if (uVar10 + 1 < 0x400) {
                local_8d6[uVar10 - 2] = abStack_3e[uVar6 + 3];
                local_8d6[uVar10 - 1] = 0;
              }
            }
            else {
              uVar4 = uVar6 + 2;
            }
            while (uVar21 != 0) {
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = abStack_3e[uVar4 + 1];
                local_8d6[uVar6 - 1] = 0;
              }
              pbVar1 = abStack_3e + uVar4;
              uVar4 = uVar4 - 2;
              uVar21 = 0;
              do {
                uVar6 = uVar21;
                uVar21 = uVar6 + 1;
              } while (local_8d6[uVar6 - 2] != '\0');
              uVar21 = uVar4;
              if (uVar6 + 1 < 0x400) {
                local_8d6[uVar6 - 2] = *pbVar1;
                local_8d6[uVar6 - 1] = 0;
              }
            }
          }
          uVar22 = local_54;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x20;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar15 = 'n';
            pcVar14 = str_1000e1b1;
            do {
              pcVar14 = pcVar14 + 1;
              local_8d6[uVar6 - 2] = cVar15;
              uVar6 = uVar6 + 1;
              cVar15 = *pcVar14;
              if (cVar15 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          local_8d6[uVar6 - 2] = 0;
          uVar21 = 0;
          do {
            uVar6 = uVar21;
            uVar21 = uVar6 + 1;
          } while (local_8d6[uVar6 - 2] != '\0');
          if (uVar21 < 0x400) {
            local_8d6[uVar6 - 2] = 0x3d;
            uVar6 = uVar21;
          }
          local_8d6[uVar6 - 2] = 0;
          param_1 = local_48;
          iVar13 = 8;
          do {
            uVar18 = uVar22 >> ((char)iVar13 * '\x04' - 4U & 0x1f) & 0xf;
            cVar15 = (char)uVar18;
            cVar17 = cVar15 + '7';
            if (uVar18 < 10) {
              cVar17 = cVar15 + '0';
            }
            uVar21 = 0;
            do {
              uVar6 = uVar21;
              uVar21 = uVar6 + 1;
            } while (local_8d6[uVar6 - 2] != '\0');
            if (uVar6 + 1 < 0x400) {
              local_8d6[uVar6 - 2] = cVar17;
              local_8d6[uVar6 - 1] = 0;
            }
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        else {
          recovered_10004af0((long)&local_8d8,0x400,str_1000e151);
          DAT_10010008 = 0;
        }
        goto LAB_10002a54;
      }
    }
    else {
      uVar21 = 0;
      do {
        uVar6 = uVar21;
        uVar21 = uVar6 + 1;
      } while (local_8d6[uVar6 - 2] != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar14 = str_1000e1d7;
        do {
          pcVar14 = pcVar14 + 1;
          local_8d6[uVar6 - 2] = cVar15;
          uVar6 = uVar6 + 1;
          cVar15 = *pcVar14;
          if (cVar15 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
LAB_100029ec:
      local_8d6[uVar6 - 2] = 0;
    }
  }
  uVar21 = 0;
  do {
    uVar6 = uVar21;
    uVar21 = uVar6 + 1;
  } while (local_8d6[uVar6 - 2] != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar15 = ' ';
    pcVar14 = str_1000e125;
    do {
      pcVar14 = pcVar14 + 1;
      local_8d6[uVar6 - 2] = cVar15;
      uVar6 = uVar6 + 1;
      cVar15 = *pcVar14;
      if (cVar15 == '\0') break;
    } while (uVar6 < 0x3ff);
  }
  goto LAB_10002a4c;
}

#undef DAT_10010000
#undef DAT_10010008
#undef DAT_1001000c
#undef DAT_10010010
#undef DAT_10010014
#undef DAT_10010018
#undef DAT_1001001c
#undef DAT_10010020
#undef DAT_10010024
#undef DAT_10010026
#undef DAT_10010027
#undef DAT_10010028
#undef DAT_1001002a
#undef DAT_1001002c
#undef DAT_1001002e
#undef DAT_1001002f
#undef DAT_10010030
#undef DAT_10010038
#undef DAT_1001003a
#undef DAT_1001003c
#undef DAT_1001003e
#undef DAT_1001003f
#undef DAT_10010040
#undef DAT_10010050
#undef DAT_10010051
#undef DAT_10010052
#undef DAT_10010053
#undef DAT_10010054
#undef DAT_10010055
#undef DAT_10010056
#undef DAT_10010057
#undef DAT_10010058
#undef DAT_10010150
#undef DAT_10010154
#undef DAT_10010155
#undef DAT_10010156
#undef DAT_10010157
#undef DAT_10010158
#undef DAT_10010159
#undef DAT_1001015a
#undef DAT_1001015b
#undef DAT_1001015c
#undef DAT_1001015d
#undef DAT_1001015e
#undef DAT_1001015f
#undef DAT_10010160
#undef DAT_10010161
#undef DAT_10010162
#undef DAT_10010163
#undef DAT_10010164
#undef DAT_10010165
#undef DAT_10010166
#undef DAT_10010167
#undef DAT_10010168
#undef DAT_10010169
#undef DAT_1001016a
#undef DAT_1001016b
#undef DAT_1001016c
#undef DAT_1001016d
#undef DAT_1001016e
#undef DAT_1001016f
#undef DAT_10010170
#undef DAT_10010171
#undef DAT_10010172
#undef DAT_10010173
#undef DAT_10010180
#undef DAT_10010181
#undef DAT_10010182
#undef DAT_10010183
#undef DAT_10010184
#undef DAT_10010185
#undef DAT_10010186
#undef DAT_10010187
#undef DAT_10010188
#undef DAT_10010189
#undef DAT_1001018a
#undef DAT_1001018b
#undef DAT_10010210
#undef DAT_10010211
#undef DAT_10010212
#undef DAT_10010213
#undef DAT_10010214
#undef DAT_10010215
#undef DAT_10010216
#undef DAT_10010217
#undef DAT_10010218
#undef DAT_10010219
#undef DAT_100182d0
#undef DAT_100182d1
#undef DAT_100182d2
#undef DAT_100182d3
#undef DAT_100182d4
#undef DAT_100182d5
#undef DAT_100182d6
#undef DAT_100182d7
#undef DAT_100182d8
#undef DAT_100182d9
#undef DAT_100182da
#undef DAT_100182db
#undef DAT_100182dc
#undef DAT_100182dd
#undef DAT_100182de
#undef DAT_100182df
#undef DAT_100182e0
#undef DAT_100182e4
#undef DAT_100182e5
#undef DAT_100182f0
#undef DAT_100182f1
#undef DAT_100182f2
#undef DAT_100182f3
#undef DAT_100182f4
#undef DAT_100182f5
#undef DAT_100182f6
#undef DAT_100182f7
#undef DAT_100182f8
#undef DAT_100182f9
#undef DAT_100182fa
#undef DAT_100182fb
#undef DAT_10018300
#undef DAT_10018301
#undef DAT_10018302
#undef DAT_10018303
#undef DAT_10018304
#undef DAT_10018305
#undef DAT_10018306
#undef DAT_10018307
#undef DAT_10018308
#undef DAT_10018309
#undef _DAT_10010010
#undef _DAT_10010020
#undef _DAT_10010024
#undef _DAT_10010150
#undef _DAT_100182e0
#undef str_1000dadb
#undef str_1000dc8d
#undef str_1000dcc4
#undef str_1000dcda
#undef str_1000dceb
#undef str_1000dcff
#undef str_1000dd11
#undef str_1000e0a1
#undef str_1000e0bf
#undef str_1000e0db
#undef str_1000e0e9
#undef str_1000e0fa
#undef str_1000e10d
#undef str_1000e125
#undef str_1000e13c
#undef str_1000e151
#undef str_1000e16e
#undef str_1000e184
#undef str_1000e193
#undef str_1000e1a2
#undef str_1000e1b1
#undef str_1000e1bb
#undef str_1000e1d7
#undef str_1000e1f3
#undef cStack_8d9
#undef cStack_4d9
#undef acStack_499
#undef acStack_459
#undef cStack_d9
#undef abStack_3e
#undef local_8d8
#undef local_8d6
#undef local_4d8
#undef local_4d4
#undef local_4d0
#undef local_4cc
#undef local_4c8
#undef local_4c4
#undef local_d8
#undef local_c0
#undef local_98
#undef local_8c
#undef local_88
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004af0
 */

void recovered_10004af0(long param_1,ulong param_2,char *param_3)

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


#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b60
 */

undefined8
recovered_10004b60(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef str_1000dbf1
#define str_1000dbf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116U)))
#undef str_1000dd1e
#define str_1000dd1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_1000dd2e
#define str_1000dd2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#undef str_1000dd46
#define str_1000dd46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26bU)))
#undef str_1000dd5e
#define str_1000dd5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x283U)))
#undef str_1000dd77
#define str_1000dd77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_1000dd88
#define str_1000dd88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_1000dd98
#define str_1000dd98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_1000dda7
#define str_1000dda7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_1000ddc3
#define str_1000ddc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_1000ddce
#define str_1000ddce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_1000ddde
#define str_1000ddde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000ddee
#define str_1000ddee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_1000ddfb
#define str_1000ddfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
#undef str_1000de11
#define str_1000de11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_1000de27
#define str_1000de27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34cU)))
#undef str_1000de3d
#define str_1000de3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x362U)))
#undef str_1000de53
#define str_1000de53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
#undef str_1000de6c
#define str_1000de6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000de84
#define str_1000de84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1000de91
#define str_1000de91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b6U)))
#undef str_1000dea2
#define str_1000dea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c7U)))
#undef str_1000deb6
#define str_1000deb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dbU)))
#undef str_1000dec6
#define str_1000dec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_1000dedd
#define str_1000dedd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x402U)))
#undef str_1000def0
#define str_1000def0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x415U)))
#undef str_1000defa
#define str_1000defa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41fU)))
#undef str_1000df0d
#define str_1000df0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x432U)))
#undef str_1000df24
#define str_1000df24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x449U)))
#undef str_1000df30
#define str_1000df30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x455U)))
#undef str_1000df3c
#define str_1000df3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x461U)))
#undef str_1000df49
#define str_1000df49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#undef str_1000df53
#define str_1000df53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#undef str_1000df67
#define str_1000df67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48cU)))
#undef str_1000df76
#define str_1000df76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
#undef str_1000df89
#define str_1000df89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#undef str_1000df9b
#define str_1000df9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_1000dfb1
#define str_1000dfb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d6U)))
#undef str_1000dfbb
#define str_1000dfbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e0U)))
#undef str_1000dfc7
#define str_1000dfc7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ecU)))
#undef str_1000dfdc
#define str_1000dfdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x501U)))
#undef str_1000dfe8
#define str_1000dfe8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50dU)))
#undef str_1000dff3
#define str_1000dff3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_1000dffd
#define str_1000dffd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x522U)))
#undef str_1000e012
#define str_1000e012 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x537U)))
#undef str_1000e023
#define str_1000e023 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x548U)))
#undef str_1000e02f
#define str_1000e02f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x554U)))
#undef str_1000e03b
#define str_1000e03b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x560U)))
#undef str_1000e047
#define str_1000e047 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56cU)))
#undef str_1000e056
#define str_1000e056 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_1000e060
#define str_1000e060 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_1000e06e
#define str_1000e06e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x593U)))
#undef str_1000e07f
#define str_1000e07f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a4U)))
#undef str_1000e08b
#define str_1000e08b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b0U)))
#undef str_1000e097
#define str_1000e097 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bcU)))
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
 * Address: 0x10004de0
 */

void recovered_10004de0(int *param_1,undefined1 *param_2,long param_3)

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
joined_r0x10005064:
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000dd2e;
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
LAB_100050ac:
    local_34 = (uint)uVar9;
    uVar3 = 0;
    uVar21 = uVar3;
    if (!bVar24) {
LAB_1000536f:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_10009971;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        uVar3 = uVar1 - 0x1000;
      }
      else {
        if (uVar3 != 0x1040) goto LAB_10009971;
        uVar3 = uVar1 - 0x1040;
      }
      if (uVar3 == 0xffffffff) goto LAB_10009971;
      if (param_3 == 0) {
        if (uVar3 != 0) goto LAB_100054f9;
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
                        goto LAB_100054be;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_100054be:
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
LAB_100054f9:
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
      bVar24 = recovered_1000b640(param_1,param_2,&local_e0);
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
              pcVar8 = str_1000ddc3;
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
LAB_100072a9:
          local_48 = local_48 & 0xffffffff00000000;
          local_38 = 0;
          if ((*(uint *)(param_2 + uVar9 * 4 + 0x14) & 1) == 0) goto LAB_10007290;
          if ((char)uVar3 != '\0') goto LAB_10007290;
          if (*param_1 != 0x54584b57) goto LAB_10007290;
          if ((uint)param_1[2] < 0x58) goto LAB_10007290;
          if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10007290;
          uVar15 = *(uint *)(param_2 + uVar9 * 4 + 0x14) & 0xfffffffc;
          uVar14 = uVar15 + 0x12;
          local_54 = CONCAT31(PF_PART3(local_54, 1),bVar24);
          iVar22 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar14,1,&local_48);
          piVar18 = local_70;
          uVar16 = local_54 & 0xff;
          param_1 = local_70;
          uVar3 = local_34;
          if (iVar22 == 0) goto LAB_10007290;
          if (param_3 == 0) {
            if (uVar9 == 0) goto LAB_1000a3f6;
            goto LAB_1000a24c;
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
            pcVar8 = str_1000ddce;
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
            pcVar8 = str_1000df49;
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
            pcVar8 = str_1000df53;
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
LAB_1000a374:
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
              pcVar8 = str_1000df67;
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
LAB_1000a24c:
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
                if (uVar9 == 0) goto LAB_1000a374;
              }
              uVar6 = uVar9;
            } while (uVar9 != 0);
          }
LAB_1000a3f6:
          uVar21 = local_50;
          iVar22 = 8;
LAB_1000a401:
          uVar3 = uVar15 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000a4ec;
            goto LAB_1000a401;
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
          if (iVar22 != 0) goto LAB_1000a401;
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
            pcVar8 = str_1000df76;
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
LAB_1000a4ec:
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
LAB_1000a563:
              if (uVar3 < 0x58) goto LAB_1000b281;
            }
            else if ((code *)(ulong)(uint)piVar18[0x16] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x16])(uVar14 & 0xffff,1,0);
              uVar16 = local_54 & 0xff;
              if (*local_70 != 0x54584b57) goto LAB_1000b281;
              uVar3 = local_70[2];
              piVar18 = local_70;
              if (0x5b < uVar3) {
                if ((code *)(ulong)(uint)local_70[0x16] == (code *)0x0) goto LAB_1000a5d6;
                (*(code *)(ulong)(uint)local_70[0x16])(uVar14 & 0xffff,1,3);
                uVar16 = local_54 & 0xff;
                if (*local_70 != 0x54584b57) goto LAB_1000b281;
                uVar3 = local_70[2];
                piVar18 = local_70;
              }
              goto LAB_1000a563;
            }
LAB_1000a5d6:
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
                    pcVar8 = str_1000df89;
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
LAB_1000b281:
          if (param_3 != 0 && (uVar16 & 1) == 0) goto LAB_10007225;
          uVar21 = uVar16 & 1 | uVar21;
          goto LAB_10009971;
        }
LAB_10007216:
        uVar21 = local_50;
        if (param_3 != 0) {
LAB_10007225:
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = ' ';
            pcVar8 = str_1000dda7;
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
        goto LAB_10009971;
      }
      recovered_1000be00(param_1,&local_e0,0);
      if (param_3 == 0) {
        if (local_ac != 0) goto LAB_10005819;
LAB_100058a8:
        if (local_c0 == 0) goto LAB_10005b51;
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
          pcVar8 = str_1000ddce;
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
                    goto LAB_10005745;
                  }
                }
              }
            }
          }
        }
        else {
LAB_10005745:
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
          pcVar8 = str_1000ddc3;
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
LAB_10005819:
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
LAB_10005868:
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
              if (uVar9 == 0) goto LAB_100058d9;
              goto LAB_10005868;
            }
            uVar11 = uVar9;
          } while (uVar9 != 0);
          goto LAB_100058a8;
        }
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
LAB_100058d9:
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
          pcVar8 = str_1000ddde;
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
LAB_10005a79:
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
            pcVar8 = str_1000ddee;
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
          goto LAB_10005b51;
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
LAB_100059fc:
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
          if (uVar9 == 0) goto LAB_10005a79;
          goto LAB_100059fc;
        }
        uVar11 = uVar9;
      } while (uVar9 != 0);
LAB_10005b51:
      iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
LAB_10005b68:
      do {
        uVar21 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar3 = (uint)(byte)((char)uVar21 + 0x37);
        if (uVar21 < 10) {
          uVar3 = uVar21 + 0x30;
        }
        PF_PART2(local_48, 0) = (ushort)(byte)local_48;
        if (param_3 == 0) goto LAB_10005b60;
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
        pcVar8 = str_1000ddfb;
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
LAB_10005cb1:
      iVar22 = 8;
LAB_10005cc4:
      uVar3 = local_a8 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10005de1;
        goto LAB_10005cc4;
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
      if (iVar22 != 0) goto LAB_10005cc4;
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
        pcVar8 = str_1000de11;
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
LAB_10005de1:
      iVar22 = 8;
LAB_10005df4:
      uVar3 = local_a4 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10005f11;
        goto LAB_10005df4;
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
      if (iVar22 != 0) goto LAB_10005df4;
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
        pcVar8 = str_1000de27;
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
LAB_10005f11:
      iVar22 = 8;
LAB_10005f24:
      uVar3 = local_a0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10006041;
        goto LAB_10005f24;
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
      if (iVar22 != 0) goto LAB_10005f24;
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
        pcVar8 = str_1000de3d;
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
LAB_10006041:
      iVar22 = 8;
LAB_10006054:
      uVar3 = local_9c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10006171;
        goto LAB_10006054;
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
      if (iVar22 != 0) goto LAB_10006054;
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
        pcVar8 = str_1000de53;
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
LAB_10006171:
      iVar22 = 8;
LAB_10006184:
      uVar3 = local_98 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_100062a1;
        goto LAB_10006184;
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
      if (iVar22 != 0) goto LAB_10006184;
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
        pcVar8 = str_1000de6c;
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
LAB_100062a1:
      iVar22 = 8;
LAB_100062b4:
      uVar3 = local_94 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto code_r0x10006304;
        goto LAB_100062b4;
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
      if (iVar22 != 0) goto LAB_100062b4;
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
        pcVar8 = str_1000de84;
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
LAB_100063d9:
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
            if (uVar9 == 0) goto LAB_10006468;
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
        pcVar8 = str_1000de91;
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
LAB_10006569:
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
            if (uVar9 == 0) goto LAB_100065f8;
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
        pcVar8 = str_1000dea2;
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
LAB_100066f9:
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
LAB_100067da:
          if (local_bc != 0) goto LAB_10006879;
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
            pcVar8 = str_1000deb6;
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
LAB_10006879:
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
                if (uVar9 == 0) goto LAB_100069f1;
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
            pcVar8 = str_1000dec6;
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
LAB_100069f1:
        iVar22 = 8;
LAB_10006a04:
        do {
          uVar3 = local_b0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) goto LAB_10006a50;
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
          pcVar8 = str_1000dedd;
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
LAB_10006b41:
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
            pcVar8 = str_1000def0;
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
LAB_10006cc1:
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
            pcVar8 = str_1000defa;
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
LAB_10006e41:
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
      if (param_3 == 0) goto LAB_100098cd;
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
        pcVar8 = str_1000df0d;
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
      if (local_78 != 0) goto LAB_100098d5;
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
      }
LAB_10006fc9:
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      pcVar8 = str_1000df30;
      if ((local_94 & 8) == 0) {
        pcVar8 = str_1000df3c;
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
        pcVar10 = str_1000df24;
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
      goto LAB_10009968;
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
      goto joined_r0x10005064;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar9 = 0;
      goto joined_r0x10005064;
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
              pcVar8 = str_1000dd77;
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
LAB_10008228:
          do {
            uVar3 = (uint)local_e0 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar3;
            cVar7 = cVar12 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_1000827d;
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
            pcVar8 = str_1000dd88;
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
LAB_10008314:
          iVar4 = 8;
LAB_1000831f:
          uVar3 = (uint)local_48 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_100083fe;
            goto LAB_1000831f;
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
          if (iVar4 != 0) goto LAB_1000831f;
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
            pcVar8 = str_1000dd98;
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
LAB_100083fe:
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
          goto joined_r0x1000857b;
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
          pcVar8 = str_1000dd5e;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        goto LAB_10005358;
      }
LAB_1000557d:
      uVar9 = 0;
      goto LAB_100050ac;
    }
    if (param_3 == 0) goto LAB_1000557d;
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (*(char *)(param_3 + uVar11) != '\0');
    if (uVar11 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000dd46;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar11) = cVar12;
        uVar11 = uVar11 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar11 < 0x3ff);
    }
LAB_10005358:
    uVar3 = 0;
    *(undefined1 *)(param_3 + uVar11) = 0;
joined_r0x1000857b:
    local_34 = 0;
    uVar9 = 0;
    uVar21 = uVar3;
    if (iVar22 != -1) goto LAB_1000536f;
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
    goto LAB_10009971;
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
          if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_10007bc4;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar21,0,0x1000);
          uVar9 = (ulong)local_34;
          if (iVar22 == 0) goto LAB_100050ff;
LAB_10007bfa:
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
                            goto LAB_100097b9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_100097b9:
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
                 ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009c19;
              (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
            }
            uVar9 = (ulong)local_34;
          }
LAB_10009c19:
          if (local_e0 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                   )) goto LAB_10009c89;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
LAB_10009c89:
            if (local_e0 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar11 = local_e0 + 0xc;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar11 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x6c ||
                      ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000a306;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
                }
                uVar9 = (ulong)local_34;
              }
LAB_1000a306:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 0x10;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ab33;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_5c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_5c);
                }
                uVar9 = (ulong)local_34;
              }
            }
          }
LAB_1000ab33:
          if ((-1 < (int)local_4c) && (local_e0 != 0)) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))
                   )) goto LAB_1000abac;
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 0x80000000);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
              }
              uVar9 = (ulong)local_34;
            }
LAB_1000abac:
            if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ac18;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
          }
LAB_1000ac18:
          if (param_3 == 0) goto LAB_1000acfa;
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
                        goto LAB_1000acd1;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000acd1:
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
LAB_1000acfa:
          iVar22 = 8;
LAB_1000ad08:
          do {
            uVar21 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar21;
            cVar7 = cVar12 + '7';
            if (uVar21 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_1000ad5d;
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
                        goto LAB_1000ae1e;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000ae1e:
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
LAB_1000ae48:
          iVar22 = 8;
LAB_1000ae53:
          uVar21 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000af34;
            goto LAB_1000ae53;
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
          if (iVar22 != 0) goto LAB_1000ae53;
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
            pcVar8 = str_1000dfb1;
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
LAB_1000af34:
          iVar22 = 8;
LAB_1000af3f:
          uVar21 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000b024;
            goto LAB_1000af3f;
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
          if (iVar22 != 0) goto LAB_1000af3f;
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
            pcVar8 = str_1000dfbb;
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
LAB_1000b024:
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
          goto LAB_10005170;
        }
        if (0x67 < (uint)param_1[2]) {
LAB_10007bc4:
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar21,0,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
              local_e0 = local_48 & 0xffffffff;
              goto LAB_10007bfa;
            }
          }
        }
      }
    }
LAB_100050ff:
    if (param_3 == 0) goto LAB_1000515f;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000df9b;
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
LAB_1000515f:
    uVar21 = 0;
  }
LAB_10005170:
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
                goto LAB_10007378;
              }
            }
          }
          else {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
LAB_10007378:
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
                              goto LAB_1000941e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_1000941e:
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
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009a17;
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
                }
                uVar9 = (ulong)local_34;
              }
LAB_10009a17:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 8;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009b0e;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                }
                uVar9 = (ulong)local_34;
              }
LAB_10009b0e:
              if (((local_4c & 1) == 0) && (local_e0 != 0)) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x70 ||
                        ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_1000a10d;
                    (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 1);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
                  }
                  uVar9 = (ulong)local_34;
                }
LAB_1000a10d:
                if (local_e0 == 0) goto LAB_1000a729;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000a729;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                  }
                  uVar9 = (ulong)local_34;
                  goto LAB_1000a729;
                }
              }
              else {
LAB_1000a729:
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xe;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000a790;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2,&local_58);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2,&local_58);
                  }
                  uVar9 = (ulong)local_34;
                }
              }
LAB_1000a790:
              if (param_3 == 0) goto LAB_1000a872;
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
                            goto LAB_1000a849;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000a849:
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
LAB_1000a872:
              iVar22 = 8;
LAB_1000a880:
              do {
                uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar14;
                cVar7 = cVar12 + '7';
                if (uVar14 < 10) {
                  cVar7 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000a8cd;
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
                            goto LAB_1000a98e;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000a98e:
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
LAB_1000a9b8:
              iVar22 = 8;
LAB_1000a9c3:
              uVar14 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar14;
              cVar7 = cVar12 + '7';
              if (uVar14 < 10) {
                cVar7 = cVar12 + '0';
              }
              if (param_3 == 0) {
                iVar22 = iVar22 + -1;
                if (iVar22 == 0) goto LAB_1000aaa4;
                goto LAB_1000a9c3;
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
              if (iVar22 != 0) goto LAB_1000a9c3;
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
                pcVar8 = str_1000dfdc;
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
LAB_1000aaa4:
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
              goto LAB_100073fe;
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
        pcVar8 = str_1000dfc7;
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
LAB_100073fe:
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
LAB_10007542:
        uVar11 = 0;
        local_54 = uVar21;
LAB_1000755d:
        local_5c = 0;
        uVar21 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
        if (((((uVar21 & 1) == 0) || ((short)(uVar21 & 0xfffffffc) == 0 || (char)uVar9 != '\0')) ||
            (*param_1 != 0x54584b57)) ||
           (((uint)param_1[2] < 0x58 || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0))))
        goto LAB_10007550;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x15])(uVar21 & 0xfffc,2,&local_5c);
        uVar3 = local_50;
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10007550;
        if (param_3 == 0) {
          if (uVar11 != 0) goto LAB_10007c3f;
          goto LAB_10007ef6;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000dfe8;
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
LAB_1000762a:
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
                    goto LAB_10007ecd;
                  }
                }
              }
            }
          }
          else {
LAB_10007ecd:
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
LAB_10007c3f:
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
              if (uVar11 == 0) goto LAB_1000762a;
            }
            uVar5 = uVar11;
          } while (uVar11 != 0);
        }
LAB_10007ef6:
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
            if (iVar22 == 0) goto LAB_10007fec;
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
          pcVar8 = str_1000dff3;
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
LAB_10007fec:
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
        goto LAB_1000a0cd;
      }
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 == 0 && iVar22 == 0) goto LAB_10007542;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10007542;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar22 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_10007542;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10007542;
        local_48 = local_e0 & 0xffffffff;
      }
      else {
        iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10007542;
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
                      goto LAB_100094de;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_100094de:
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
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009a92;
          (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
        }
        uVar9 = (ulong)local_34;
      }
LAB_10009a92:
      if (local_48 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar11 = local_48 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar11 >> 0x20 != 0) ||
               (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
            goto LAB_10009b98;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
          }
          uVar9 = (ulong)local_34;
        }
LAB_10009b98:
        if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
          uVar11 = local_48 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
               ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009d08;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
          }
          uVar9 = (ulong)local_34;
        }
      }
LAB_10009d08:
      if (param_3 == 0) goto LAB_10009dea;
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
                    goto LAB_10009dc1;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10009dc1:
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
LAB_10009dea:
      iVar22 = 8;
LAB_10009df8:
      do {
        uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar14;
        cVar7 = cVar12 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 == 0) goto LAB_10009e4d;
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
                    goto LAB_10009f0e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10009f0e:
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
LAB_10009f38:
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
          if (iVar22 == 0) goto LAB_1000a078;
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
                    goto LAB_1000a04e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1000a04e:
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
LAB_1000a078:
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
LAB_1000a0cd:
      uVar14 = 1;
      goto LAB_1000769e;
    }
  }
  goto LAB_100076a1;
LAB_1000827d:
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) goto LAB_10008314;
  goto LAB_10008228;
LAB_10005b60:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10005cb1;
  goto LAB_10005b68;
code_r0x10006304:
  if (local_90 != 0) goto LAB_100063d9;
LAB_10006468:
  if (local_8c != 0) goto LAB_10006569;
LAB_100065f8:
  if (local_88 != 0) goto LAB_100066f9;
  if (local_80 != 0) goto LAB_100067da;
  if (local_d0 != 0) {
    iVar22 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_10006cc1;
  }
  if (local_c8 != 0) {
    iVar22 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
    goto LAB_10006e41;
  }
LAB_100098cd:
  if (local_78 != 0) {
LAB_100098d5:
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
        if (uVar9 == 0) goto LAB_10006fc9;
      }
      uVar11 = uVar9;
    } while (uVar9 != 0);
  }
LAB_10009968:
  uVar21 = 1;
  goto LAB_10009971;
LAB_10006a50:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10006b41;
  goto LAB_10006a04;
LAB_10007290:
  bVar24 = uVar9 < 5;
  uVar9 = uVar9 + 1;
  if (uVar9 == 6) goto LAB_10007216;
  goto LAB_100072a9;
LAB_1000ad5d:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_1000ae48;
  goto LAB_1000ad08;
LAB_1000a8cd:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_1000a9b8;
  goto LAB_1000a880;
LAB_10007550:
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_1000764c;
  goto LAB_1000755d;
LAB_10009e4d:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10009f38;
  goto LAB_10009df8;
LAB_10007908:
  uVar3 = local_50;
  goto LAB_1000881e;
LAB_1000764c:
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
      pcVar8 = str_1000dffd;
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
LAB_1000769e:
    uVar21 = uVar21 | uVar14;
  }
LAB_100076a1:
  local_48 = 0;
  local_38 = 0;
  local_4c = 0;
  if (param_2[8] == '\x02') {
    uVar14 = 1;
    uVar11 = 0;
    local_68 = param_2;
    local_54 = uVar21;
LAB_100076fa:
    if ((uVar11 != 0) && ((*(uint *)(param_2 + uVar11 * 4 + 0x10) & 7) == 4)) {
LAB_10007800:
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
                if (iVar22 == 0) goto LAB_100076e0;
                if (param_3 == 0) {
                  if (uVar11 == 0) goto LAB_10007a3e;
                  goto LAB_10007949;
                }
                uVar6 = 0;
                do {
                  uVar5 = uVar6;
                  uVar6 = uVar5 + 1;
                } while (*(char *)(param_3 + uVar5) != '\0');
                if (uVar5 + 1 < 0x400) {
                  cVar12 = ' ';
                  pcVar8 = str_1000e047;
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
LAB_100078e6:
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
                    pcVar8 = str_1000e056;
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
LAB_10007949:
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
                      if (uVar11 == 0) goto LAB_100078e6;
                    }
                    uVar5 = uVar11;
                  } while (uVar11 != 0);
                }
LAB_10007a3e:
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
                    if (iVar22 == 0) goto LAB_10007b34;
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
                  pcVar8 = str_1000e060;
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
LAB_10007b34:
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
                goto LAB_1000880d;
              }
            }
          }
        }
      }
LAB_100076e0:
      bVar24 = uVar11 < 5;
      uVar11 = uVar11 + 1;
      uVar14 = (uint)bVar24;
      if (uVar11 == 6) goto LAB_10007908;
      goto LAB_100076fa;
    }
    uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
    if ((uVar3 & 1) != 0 || uVar3 == 0) goto LAB_10007800;
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      if (uVar11 == 5) goto LAB_10007800;
      iVar22 = *(int *)(param_2 + uVar11 * 4 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_10007800;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10007800;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar22 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
          uVar9 = (ulong)local_34;
          uVar21 = local_54;
          if (iVar22 != 0) {
            local_48 = local_e0 & 0xffffffff;
            goto LAB_10007cd4;
          }
        }
      }
      goto LAB_10007800;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000);
    uVar9 = (ulong)local_34;
    uVar21 = local_54;
    if (iVar22 == 0) goto LAB_10007800;
LAB_10007cd4:
    uVar21 = local_54;
    if (param_3 == 0) {
      if (uVar11 != 0) goto LAB_10007d82;
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      goto LAB_100080c6;
    }
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)(param_3 + uVar5) != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000e012;
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
LAB_10007d3f:
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
        pcVar8 = str_1000e023;
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
LAB_10007d82:
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
          if (uVar11 == 0) goto LAB_10007d3f;
        }
        uVar5 = uVar11;
      } while (uVar11 != 0);
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
    }
LAB_100080c6:
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
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100085b7;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_100085b7:
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      uVar11 = local_48 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000862d;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_1000862d:
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
        pcVar8 = str_1000e02f;
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
        if (iVar22 == 0) goto LAB_100087b4;
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
      pcVar8 = str_1000e03b;
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
LAB_100087b4:
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
LAB_1000880d:
    uVar21 = uVar21 | uVar14;
  }
LAB_1000881e:
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
      if (uVar14 == 0 && iVar22 == 0) goto LAB_1000892d;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_1000892d;
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
            if (param_3 == 0) goto LAB_100090e0;
            goto LAB_10008a7f;
          }
        }
        goto LAB_1000892d;
      }
      iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000,&local_48);
      uVar9 = (ulong)local_34;
      if (iVar22 == 0) goto LAB_1000892d;
      if (param_3 == 0) {
LAB_100090e0:
        bVar24 = local_48 >> 0x20 != 0;
        iVar22 = (uint)bVar24 * 8 + 8;
        bVar2 = true;
        bVar23 = true;
      }
      else {
        uVar11 = 0;
        bVar24 = true;
        bVar23 = true;
LAB_10008a7f:
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000e06e;
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
LAB_10008f82:
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
LAB_10008fcc:
          do {
            uVar11 = uVar5 - 1;
            if (bVar24) {
              uVar5 = uVar11;
              if (uVar11 == 0) {
                bVar24 = local_48 >> 0x20 != 0;
                iVar22 = (uint)bVar24 * 8 + 8;
                bVar2 = true;
                goto LAB_100090f9;
              }
              goto LAB_10008fcc;
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
          pcVar8 = str_1000e07f;
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
LAB_100090f9:
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
              goto LAB_100091fd;
            }
          }
        }
        else {
          local_70 = param_1;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
LAB_100091fd:
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
                pcVar8 = str_1000e08b;
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
LAB_1000892d:
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
                        goto LAB_10008a70;
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
LAB_10008a70:
                    param_2 = local_68;
                    uVar3 = local_50;
                    if (param_3 != 0) {
                      bVar24 = false;
                      goto LAB_10008a7f;
                    }
                    bVar24 = true;
                    goto LAB_10008f82;
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
  if (uVar21 != 0) goto LAB_10009971;
  local_38 = 0;
  uVar3 = *(uint *)(param_2 + 0x14);
  if ((uVar3 & 1) == 0 && uVar3 != 0) {
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      iVar22 = *(int *)(param_2 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_10008c1d;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10008c1d;
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
          if (param_3 == 0) goto LAB_10009238;
          goto LAB_10008d8a;
        }
      }
      goto LAB_10008c1d;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
    uVar9 = (ulong)local_34;
    if (iVar22 == 0) goto LAB_10008c1d;
    if (param_3 == 0) {
LAB_10009238:
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      bVar2 = true;
      bVar23 = true;
    }
    else {
      uVar11 = 0;
      bVar24 = true;
      bVar23 = true;
LAB_10008d8a:
      uVar9 = 0;
      do {
        uVar6 = uVar9;
        uVar9 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000e097;
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
LAB_10008e09:
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
LAB_10008e53:
        do {
          uVar9 = uVar6 - 1;
          if (bVar24) {
            uVar6 = uVar9;
            if (uVar9 == 0) {
              bVar24 = local_48 >> 0x20 != 0;
              iVar22 = (uint)bVar24 * 8 + 8;
              bVar2 = true;
              goto LAB_10009251;
            }
            goto LAB_10008e53;
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
              goto LAB_10008f4a;
            }
          }
        }
      }
      else {
LAB_10008f4a:
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
LAB_10009251:
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
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10008d6f;
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
                          goto LAB_1000b138;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000b138:
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
LAB_10008c1d:
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
                  goto joined_r0x10008d63;
                }
              }
            }
            else {
              iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
              uVar9 = (ulong)local_34;
              if (iVar22 != 0) {
joined_r0x10008d63:
                if (param_3 != 0) {
                  bVar24 = false;
                  goto LAB_10008d8a;
                }
                bVar24 = true;
                goto LAB_10008e09;
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
LAB_10008d6f:
  uVar21 = (uint)bVar23;
LAB_10009971:
  pcVar8 = str_1000dd1e;
  if (uVar21 == 0) {
    pcVar8 = str_1000dbf1;
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

#undef str_1000dbf1
#undef str_1000dd1e
#undef str_1000dd2e
#undef str_1000dd46
#undef str_1000dd5e
#undef str_1000dd77
#undef str_1000dd88
#undef str_1000dd98
#undef str_1000dda7
#undef str_1000ddc3
#undef str_1000ddce
#undef str_1000ddde
#undef str_1000ddee
#undef str_1000ddfb
#undef str_1000de11
#undef str_1000de27
#undef str_1000de3d
#undef str_1000de53
#undef str_1000de6c
#undef str_1000de84
#undef str_1000de91
#undef str_1000dea2
#undef str_1000deb6
#undef str_1000dec6
#undef str_1000dedd
#undef str_1000def0
#undef str_1000defa
#undef str_1000df0d
#undef str_1000df24
#undef str_1000df30
#undef str_1000df3c
#undef str_1000df49
#undef str_1000df53
#undef str_1000df67
#undef str_1000df76
#undef str_1000df89
#undef str_1000df9b
#undef str_1000dfb1
#undef str_1000dfbb
#undef str_1000dfc7
#undef str_1000dfdc
#undef str_1000dfe8
#undef str_1000dff3
#undef str_1000dffd
#undef str_1000e012
#undef str_1000e023
#undef str_1000e02f
#undef str_1000e03b
#undef str_1000e047
#undef str_1000e056
#undef str_1000e060
#undef str_1000e06e
#undef str_1000e07f
#undef str_1000e08b
#undef str_1000e097
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

#undef str_1000e1fe
#define str_1000e1fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x723U)))
#undef str_1000e209
#define str_1000e209 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72eU)))
#undef str_1000e218
#define str_1000e218 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73dU)))
#undef str_1000e229
#define str_1000e229 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74eU)))
#undef str_1000e23c
#define str_1000e23c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x761U)))
#undef str_1000e24f
#define str_1000e24f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x774U)))
#undef str_1000e25f
#define str_1000e25f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x784U)))
#undef str_1000e26e
#define str_1000e26e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x793U)))
#undef str_1000e27d
#define str_1000e27d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a2U)))
#undef str_1000e28e
#define str_1000e28e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b3U)))
#undef str_1000e299
#define str_1000e299 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7beU)))
#undef str_1000e2a5
#define str_1000e2a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7caU)))
#undef str_1000e2af
#define str_1000e2af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d4U)))
#undef str_1000e2b8
#define str_1000e2b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ddU)))
#undef str_1000e2c3
#define str_1000e2c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e8U)))
#undef str_1000e2cc
#define str_1000e2cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f1U)))
#undef str_1000e2d4
#define str_1000e2d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f9U)))
#undef str_1000e2dd
#define str_1000e2dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x802U)))
#undef str_1000e2e4
#define str_1000e2e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x809U)))
#undef str_1000e2f7
#define str_1000e2f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81cU)))
#undef str_1000e30a
#define str_1000e30a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82fU)))
#undef str_1000e31d
#define str_1000e31d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x842U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2b0
 */

char * recovered_1000b2b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_1000e1fe;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000e2b8;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_1000e2af;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_1000b3c6;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_1000b3c6:
        return str_1000e2dd;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000e2d4;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_1000e2c3;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000e299;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000b46a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000e2a5;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000e2cc;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000e209;
      case 0x1001:
      case 0x1042:
        return str_1000e218;
      case 0x1002:
      case 0x1045:
        return str_1000e229;
      case 0x1003:
      case 0x1043:
        return str_1000e23c;
      case 0x1004:
      case 0x1048:
        return str_1000e24f;
      case 0x1005:
      case 0x1044:
        return str_1000e25f;
      default:
        return str_1000e28e;
      case 0x1050:
        return str_1000e26e;
      case 0x1052:
        return str_1000e27d;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000e30a;
    case 2:
      return str_1000e2f7;
    case 3:
      return str_1000e2e4;
    case 4:
      pcVar2 = str_1000e31d;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000b46a:
        pcVar2 = recovered_1000da70((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_1000e1fe
#undef str_1000e209
#undef str_1000e218
#undef str_1000e229
#undef str_1000e23c
#undef str_1000e24f
#undef str_1000e25f
#undef str_1000e26e
#undef str_1000e27d
#undef str_1000e28e
#undef str_1000e299
#undef str_1000e2a5
#undef str_1000e2af
#undef str_1000e2b8
#undef str_1000e2c3
#undef str_1000e2cc
#undef str_1000e2d4
#undef str_1000e2dd
#undef str_1000e2e4
#undef str_1000e2f7
#undef str_1000e30a
#undef str_1000e31d

#define local_48 (*(int *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(uint *)(frame + 48))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(uint *)(frame + 60))
#define local_60 (*(int *)(frame + 16))
#define local_5c (*(uint *)(frame + 20))
#define local_58 (*(ulong *)(frame + 24))
#define local_50 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b640
 */

bool recovered_1000b640(int *param_1,undefined1 *param_2,long *param_3)

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
                  if (4 < local_38) goto LAB_1000ba68;
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
                      goto LAB_1000ba51;
                    }
                  }
                  else {
                    iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                    if (iVar2 != 0) {
                      uVar4 = local_50;
LAB_1000ba51:
                      *param_3 = uVar4 + local_58;
                      *(uint *)(param_3 + 4) = local_38;
                      goto LAB_1000bc4e;
                    }
                  }
                }
              }
LAB_1000ba68:
              if (((((local_48 == 2) && (local_58 = (ulong)local_44, !CARRY4(local_40,local_44))) &&
                   (uVar4 = (ulong)local_38, local_38 < 6)) && (local_40 != 0)) &&
                 (((uVar4 == 0 || ((*(uint *)(param_2 + (ulong)(local_38 - 1) * 4 + 0x14) & 7) != 4)
                   ) && (uVar1 = *(uint *)(param_2 + uVar4 * 4 + 0x14),
                        (uVar1 & 1) == 0 && uVar1 != 0)))) {
                iVar2 = 0;
                if ((uVar1 & 6) == 4) {
                  if (4 < local_38) goto LAB_1000bbde;
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
                        goto LAB_1000bb72;
                      }
                    }
                    else {
                      iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                      if (iVar2 != 0) {
LAB_1000bb72:
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
                        goto LAB_1000bc4e;
                      }
                    }
                  }
                }
              }
LAB_1000bbde:
              if ((local_48 == 3) &&
                 (uVar5 = recovered_1000bca0(param_1,(long)param_2,local_38,local_44,local_40,
                                             &local_50), (int)uVar5 != 0)) {
                param_3[2] = local_50;
                *(uint *)(param_3 + 5) = local_38;
              }
              else if ((local_48 == 4) &&
                      (uVar5 = recovered_1000bca0(param_1,(long)param_2,local_38,local_44,local_40,
                                                  &local_50), (int)uVar5 != 0)) {
                param_3[3] = local_50;
                *(uint *)((long)param_3 + 0x2c) = local_38;
              }
            }
LAB_1000bc4e:
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

#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_60
#undef local_5c
#undef local_58
#undef local_50

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bca0
 */

undefined8
recovered_1000bca0(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

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

#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be00
 */

void recovered_1000be00(int *param_1,ulong *param_2,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  int iVar1;
  ulong uVar2;

  uStack_28 = (ulong)in_EAX;
  if (param_2 == (ulong *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 0x14;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1,param_2 + 9);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1,param_2 + 9);
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
      if (uVar2 != 0) {
        if (*param_1 == 0x54584b57) {
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,0);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,0);
          }
          if (*param_2 == 0) goto LAB_1000c122;
          if (*param_1 == 0x54584b57) {
            uVar2 = *param_2 + 4;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if ((uVar2 >> 0x20 == 0) &&
                 ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))))
              {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4,param_2 + 7);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4,param_2 + 7);
            }
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
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4,(long)param_2 + 0x3c);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4,(long)param_2 + 0x3c);
            }
          }
        }
      }
    }
  }
LAB_1000c122:
  *(uint *)(param_2 + 8) = param_3 & (uint)param_2[7];
  *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
  if (*param_2 == 0) {
    if (param_1 == (int *)0x0) {
      return;
    }
  }
  else {
    if (param_1 == (int *)0x0) {
      return;
    }
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
          if (*param_1 != 0x54584b57) goto LAB_1000c330;
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
LAB_1000c330:
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
                                          (uVar2 & 0xffffffff,2,(long)&uStack_28 + 4);
                      }
                      else {
                        iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2,(long)&uStack_28 + 4);
                      }
                      if (iVar1 != 0) {
                        *(uint *)((long)param_2 + 0x5c) = PF_PART4(uStack_28, 4);
                        if (param_2[1] != 0) {
                          param_2[0xc] = (ulong)(uint)param_2[6] * (ulong)PF_PART4(uStack_28, 4) +
                                         param_2[1];
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

#undef uStack_28

#undef DAT_10010000
#define DAT_10010000 (*(int * *)(((uintptr_t)pf_module_state + 0x2525U)))
#undef DAT_10010008
#define DAT_10010008 (*(int *)(((uintptr_t)pf_module_state + 0x252dU)))
#undef DAT_10010014
#define DAT_10010014 (*(uint *)(((uintptr_t)pf_module_state + 0x2539U)))
#undef DAT_10010028
#define DAT_10010028 (*(ushort *)(((uintptr_t)pf_module_state + 0x254dU)))
#undef DAT_1001002c
#define DAT_1001002c (*(ushort *)(((uintptr_t)pf_module_state + 0x2551U)))
#undef DAT_10010180
#define DAT_10010180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a5U)))
#undef DAT_10010182
#define DAT_10010182 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a7U)))
#undef DAT_10010183
#define DAT_10010183 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a8U)))
#undef DAT_10010184
#define DAT_10010184 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26a9U)))
#undef DAT_10010185
#define DAT_10010185 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aaU)))
#undef DAT_10010186
#define DAT_10010186 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26abU)))
#undef DAT_10010187
#define DAT_10010187 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26acU)))
#undef DAT_10010188
#define DAT_10010188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26adU)))
#undef DAT_10010189
#define DAT_10010189 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aeU)))
#undef DAT_1001018a
#define DAT_1001018a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26afU)))
#undef DAT_1001018b
#define DAT_1001018b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26b0U)))
#undef DAT_10010210
#define DAT_10010210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2735U)))
#undef DAT_10010211
#define DAT_10010211 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2736U)))
#undef DAT_10010212
#define DAT_10010212 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2737U)))
#undef DAT_10010213
#define DAT_10010213 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2738U)))
#undef DAT_10010220
#define DAT_10010220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2745U)))
#define local_58 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7d0
 */

undefined8 recovered_1000c7d0(long param_1,uint param_2,uint *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;

  uVar16 = 10;
  if (DAT_10010014 != 0) {
    uVar16 = DAT_10010014;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_10010008 == 0) {
    return 0;
  }
  if (DAT_10010000 == (int *)0x0) {
    return 0;
  }
  if (DAT_10010028 == 0) {
    return 0;
  }
  if (((*DAT_10010000 == 0x54584b57) && (0x77 < (uint)DAT_10010000[2])) &&
     ((code *)(ulong)(uint)DAT_10010000[0x1d] != (code *)0x0)) {
    (*(code *)(ulong)(uint)DAT_10010000[0x1d])(0,&DAT_10010180,0x84);
  }
  if (CONCAT11(DAT_10010183,DAT_10010182) == DAT_1001002c) {
    return 0;
  }
  uVar20 = 0;
  uVar10 = (ulong)(DAT_1001002c % DAT_10010028);
  uVar2 = (&DAT_10010184)[uVar10 * 8];
  uVar3 = (&DAT_10010185)[uVar10 * 8];
  uVar9 = (uint)(byte)(&DAT_10010187)[uVar10 * 8] << 0x18 |
          (uint)(byte)(&DAT_10010186)[uVar10 * 8] << 0x10 | (uint)CONCAT11(uVar3,uVar2);
  bVar4 = (&DAT_10010188)[uVar10 * 8];
  bVar5 = (&DAT_1001018a)[uVar10 * 8];
  bVar6 = (&DAT_1001018b)[uVar10 * 8];
  DAT_1001002c = DAT_1001002c + 1;
  if (uVar9 < 0x10) {
    local_58 = (uint)(byte)(&DAT_10010189)[uVar10 * 8] * 0x100;
    uVar18 = CONCAT13(bVar6,CONCAT12(bVar5,CONCAT11((&DAT_10010189)[uVar10 * 8],bVar4)));
    uVar19 = uVar18 - uVar16;
    if (uVar16 <= uVar18 && uVar19 != 0) {
      lVar15 = (ulong)uVar9 * 0x80c;
      if (((DAT_10010000 != (int *)0x0) && (*DAT_10010000 == 0x54584b57)) &&
         ((0x77 < (uint)DAT_10010000[2] && ((code *)(ulong)(uint)DAT_10010000[0x1d] != (code *)0x0))
         )) {
        (*(code *)(ulong)(uint)DAT_10010000[0x1d])(0,&DAT_10010210 + lVar15,0x80c);
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar19;
      }
      if (0x800 < uVar19 || param_2 < uVar19) goto LAB_1000ca62;
      uVar10 = (ulong)uVar16;
      if ((uVar19 < 4) || ((ulong)(param_1 - (long)(&DAT_10010210 + lVar15 + uVar10)) < 0x20)) {
        uVar11 = 0;
      }
      else {
        if (uVar19 < 0x20) {
          uVar12 = 0;
        }
        else {
          uVar11 = (ulong)(uVar19 & 0xfe0);
          uVar12 = 0;
          do {
            uVar20 = *(undefined8 *)((long)(&DAT_10010210 + uVar12 + lVar15 + uVar10) + 8);
            uVar7 = *(undefined8 *)(&DAT_10010220 + uVar12 + lVar15 + uVar10);
            uVar8 = *(undefined8 *)((long)(&DAT_10010220 + uVar12 + lVar15 + uVar10) + 8);
            *(undefined8 *)(param_1 + uVar12) =
                 *(undefined8 *)(&DAT_10010210 + uVar12 + lVar15 + uVar10);
            ((undefined8 *)(param_1 + uVar12))[1] = uVar20;
            puVar1 = (undefined8 *)(param_1 + 0x10 + uVar12);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            uVar12 = uVar12 + 0x20;
          } while (uVar11 != uVar12);
          uVar20 = 1;
          if ((uVar19 & 0xfe0) == uVar19) goto LAB_1000ca62;
          uVar12 = uVar11;
          if ((uVar19 & 0x1c) == 0) goto LAB_1000c9da;
        }
        uVar11 = (ulong)(uVar19 & 0xffc);
        lVar14 = 0;
        do {
          *(undefined4 *)(param_1 + uVar12 + lVar14) =
               *(undefined4 *)(&DAT_10010210 + lVar14 + uVar12 + lVar15 + uVar10);
          lVar14 = lVar14 + 4;
        } while (uVar11 - uVar12 != lVar14);
        uVar20 = 1;
        if ((uVar19 & 0xffc) == uVar19) goto LAB_1000ca62;
      }
LAB_1000c9da:
      uVar16 = ((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | local_58 | (uint)bVar4) - uVar16;
      uVar17 = (ulong)uVar16;
      uVar13 = uVar17 & 3;
      uVar12 = uVar11;
      if ((uVar16 & 3) != 0) {
        do {
          *(undefined1 *)(param_1 + uVar12) = (&DAT_10010210)[lVar15 + uVar10 + uVar12];
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar20 = 1;
      if (uVar11 - uVar17 < 0xfffffffffffffffd) {
        lVar15 = lVar15 + uVar10;
        do {
          *(undefined1 *)(param_1 + uVar12) = (&DAT_10010210)[uVar12 + lVar15];
          *(undefined1 *)(param_1 + 1 + uVar12) = (&DAT_10010211)[uVar12 + lVar15];
          *(undefined1 *)(param_1 + 2 + uVar12) = (&DAT_10010212)[uVar12 + lVar15];
          *(undefined1 *)(param_1 + 3 + uVar12) = (&DAT_10010213)[uVar12 + lVar15];
          uVar12 = uVar12 + 4;
        } while (uVar17 != uVar12);
      }
      goto LAB_1000ca62;
    }
  }
  if (0xf < uVar9) {
    return 0;
  }
LAB_1000ca62:
  recovered_1000d8a0(CONCAT11(uVar3,uVar2));
  return uVar20;
}

#undef DAT_10010000
#undef DAT_10010008
#undef DAT_10010014
#undef DAT_10010028
#undef DAT_1001002c
#undef DAT_10010180
#undef DAT_10010182
#undef DAT_10010183
#undef DAT_10010184
#undef DAT_10010185
#undef DAT_10010186
#undef DAT_10010187
#undef DAT_10010188
#undef DAT_10010189
#undef DAT_1001018a
#undef DAT_1001018b
#undef DAT_10010210
#undef DAT_10010211
#undef DAT_10010212
#undef DAT_10010213
#undef DAT_10010220
#undef local_58

#undef DAT_10010000
#define DAT_10010000 (*(int * *)(((uintptr_t)pf_module_state + 0x2525U)))
#undef DAT_10010008
#define DAT_10010008 (*(int *)(((uintptr_t)pf_module_state + 0x252dU)))
#undef DAT_10010014
#define DAT_10010014 (*(uint *)(((uintptr_t)pf_module_state + 0x2539U)))
#undef DAT_10010018
#define DAT_10010018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x253dU)))
#undef DAT_1001001c
#define DAT_1001001c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2541U)))
#undef DAT_10010038
#define DAT_10010038 (*(short *)(((uintptr_t)pf_module_state + 0x255dU)))
#undef DAT_1001003a
#define DAT_1001003a (*(ushort *)(((uintptr_t)pf_module_state + 0x255fU)))
#undef DAT_1001003c
#define DAT_1001003c (*(short *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010040
#define DAT_10010040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2565U)))
#undef DAT_100182d0
#define DAT_100182d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f5U)))
#undef DAT_100182d1
#define DAT_100182d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f6U)))
#undef DAT_100182d2
#define DAT_100182d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f7U)))
#undef DAT_100182d3
#define DAT_100182d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f8U)))
#undef DAT_100182d4
#define DAT_100182d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7f9U)))
#undef DAT_100182d5
#define DAT_100182d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7faU)))
#undef DAT_100182d6
#define DAT_100182d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fbU)))
#undef DAT_100182d7
#define DAT_100182d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fcU)))
#undef DAT_100182d8
#define DAT_100182d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7fdU)))
#undef DAT_100182d9
#define DAT_100182d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7feU)))
#undef DAT_100182da
#define DAT_100182da (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7ffU)))
#undef DAT_100182de
#define DAT_100182de (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa803U)))
#undef DAT_100182e0
#define DAT_100182e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa805U)))
#undef DAT_100182e2
#define DAT_100182e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa807U)))
#undef DAT_100182e3
#define DAT_100182e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa808U)))
#undef DAT_100182e4
#define DAT_100182e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa809U)))
#undef DAT_100182f0
#define DAT_100182f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa815U)))
#undef DAT_100182f2
#define DAT_100182f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa817U)))
#undef DAT_100182f3
#define DAT_100182f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa818U)))
#undef DAT_10018300
#define DAT_10018300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa825U)))
#undef DAT_10018301
#define DAT_10018301 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa826U)))
#undef DAT_10018302
#define DAT_10018302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa827U)))
#undef DAT_10018303
#define DAT_10018303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa828U)))
#undef DAT_10018304
#define DAT_10018304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa829U)))
#undef DAT_10018305
#define DAT_10018305 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82aU)))
#undef DAT_10018306
#define DAT_10018306 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82bU)))
#undef DAT_10018307
#define DAT_10018307 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82cU)))
#undef DAT_10018308
#define DAT_10018308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82dU)))
#undef DAT_10018309
#define DAT_10018309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82eU)))
#undef DAT_10018310
#define DAT_10018310 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa835U)))
#undef _DAT_100182da
#define _DAT_100182da (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa7ffU)))
#undef _DAT_100182de
#define _DAT_100182de (*(uint16_t *)(((uintptr_t)pf_module_state + 0xa803U)))
#undef _DAT_100182e4
#define _DAT_100182e4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xa809U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000cb40(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;

  piVar7 = DAT_10010000;
  uVar8 = 10;
  if (DAT_10010014 != 0) {
    uVar8 = DAT_10010014;
  }
  if (param_1 == 0) {
    return false;
  }
  if (DAT_10010008 == 0) {
    return false;
  }
  if (DAT_10010000 == (int *)0x0) {
    return false;
  }
  if (param_2 - 0x801 < 0xfffff80d) {
    return false;
  }
  if (DAT_10010038 == 0) {
    return false;
  }
  uVar1 = uVar8 + param_2;
  if (0x80c < uVar1) {
    return false;
  }
  lVar11 = 0;
  do {
    (&DAT_10018300)[lVar11] = 0;
    (&DAT_10018301)[lVar11] = 0;
    (&DAT_10018302)[lVar11] = 0;
    (&DAT_10018303)[lVar11] = 0;
    (&DAT_10018304)[lVar11] = 0;
    (&DAT_10018305)[lVar11] = 0;
    (&DAT_10018306)[lVar11] = 0;
    (&DAT_10018307)[lVar11] = 0;
    (&DAT_10018308)[lVar11] = 0;
    (&DAT_10018309)[lVar11] = 0;
    lVar11 = lVar11 + 10;
  } while (lVar11 != 0x80c);
  if (param_2 != 0) {
    uVar12 = (ulong)uVar8;
    uVar9 = (ulong)param_2;
    if ((param_2 < 4) || (&DAT_10018300 + (uVar12 - param_1) < (undefined1 *)0x20)) {
      uVar10 = 0;
    }
    else {
      if (param_2 < 0x20) {
        uVar13 = 0;
      }
      else {
        uVar10 = (ulong)(param_2 & 0xfe0);
        uVar13 = 0;
        do {
          uVar3 = ((undefined8 *)(param_1 + uVar13))[1];
          puVar2 = (undefined8 *)(param_1 + 0x10 + uVar13);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          *(undefined8 *)(&DAT_10018300 + uVar13 + uVar12) = *(undefined8 *)(param_1 + uVar13);
          *(undefined8 *)((long)(&DAT_10018300 + uVar13 + uVar12) + 8) = uVar3;
          *(undefined8 *)(&DAT_10018310 + uVar13 + uVar12) = uVar4;
          *(undefined8 *)((long)(&DAT_10018310 + uVar13 + uVar12) + 8) = uVar5;
          uVar13 = uVar13 + 0x20;
        } while (uVar10 != uVar13);
        if ((param_2 & 0xfe0) == param_2) goto LAB_1000cca3;
        uVar13 = uVar10;
        if ((param_2 & 0x1c) == 0) goto LAB_1000cc2d;
      }
      uVar10 = (ulong)(param_2 & 0xffc);
      lVar11 = 0;
      do {
        *(undefined4 *)(&DAT_10018300 + lVar11 + uVar13 + uVar12) =
             *(undefined4 *)(param_1 + uVar13 + lVar11);
        lVar11 = lVar11 + 4;
      } while (uVar10 - uVar13 != lVar11);
      if ((param_2 & 0xffc) == param_2) goto LAB_1000cca3;
    }
LAB_1000cc2d:
    uVar14 = uVar9 & 3;
    uVar13 = uVar10;
    if ((param_2 & 3) != 0) {
      do {
        (&DAT_10018300)[uVar12 + uVar13] = *(undefined1 *)(param_1 + uVar13);
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar10 - uVar9 < 0xfffffffffffffffd) {
      do {
        (&DAT_10018300)[uVar13 + uVar12] = *(undefined1 *)(param_1 + uVar13);
        (&DAT_10018301)[uVar13 + uVar12] = *(undefined1 *)(param_1 + 1 + uVar13);
        (&DAT_10018302)[uVar13 + uVar12] = *(undefined1 *)(param_1 + 2 + uVar13);
        (&DAT_10018303)[uVar13 + uVar12] = *(undefined1 *)(param_1 + 3 + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar9 != uVar13);
    }
  }
LAB_1000cca3:
  DAT_100182d0 = (undefined1)DAT_10010018;
  DAT_100182d1 = (undefined1)((uint)DAT_10010018 >> 8);
  DAT_100182d2 = (undefined1)((uint)DAT_10010018 >> 0x10);
  DAT_100182d3 = (undefined1)((uint)DAT_10010018 >> 0x18);
  DAT_100182d4 = (undefined1)DAT_1001001c;
  DAT_100182d5 = (undefined1)((uint)DAT_1001001c >> 8);
  DAT_100182d6 = (undefined1)((uint)DAT_1001001c >> 0x10);
  DAT_100182d7 = (undefined1)((uint)DAT_1001001c >> 0x18);
  DAT_100182d8 = (undefined1)uVar1;
  DAT_100182d9 = (undefined1)(uVar1 >> 8);
  _DAT_100182da = 0;
  _DAT_100182de = 0;
  _DAT_100182e4 = 0;
  iVar6 = DAT_1001003a + 1;
  DAT_1001003a = (ushort)iVar6;
  DAT_100182e2 = (undefined1)iVar6;
  DAT_100182e3 = (undefined1)((uint)iVar6 >> 8);
  if (*piVar7 == 0x54584b57) {
    if (0x77 < (uint)piVar7[2]) {
      if ((code *)(ulong)(uint)piVar7[0x1d] != (code *)0x0) {
        (*(code *)(ulong)(uint)piVar7[0x1d])(0,&DAT_10018300,uVar1);
        piVar7 = DAT_10010000;
        if (DAT_10010000 == (int *)0x0) goto LAB_1000ce56;
      }
    }
    if (*piVar7 == 0x54584b57) {
      if (0x77 < (uint)piVar7[2]) {
        if ((code *)(ulong)(uint)piVar7[0x1d] != (code *)0x0) {
          (*(code *)(ulong)(uint)piVar7[0x1d])(0,&DAT_100182d0,0x10);
          piVar7 = DAT_10010000;
          if (DAT_10010000 == (int *)0x0) goto LAB_1000ce56;
        }
      }
      if ((*piVar7 == 0x54584b57) && (0x77 < (uint)piVar7[2])) {
        if ((code *)(ulong)(uint)piVar7[0x1d] != (code *)0x0) {
          (*(code *)(ulong)(uint)piVar7[0x1d])(0,&DAT_100182e0,6);
          piVar7 = DAT_10010000;
        }
      }
    }
  }
  if ((piVar7 == (int *)0x0 || DAT_10010040 == 0) || (*piVar7 != 0x54584b57)) goto LAB_1000ce56;
  uVar8 = piVar7[2];
  if (0x7b < uVar8) {
    if (((code *)(ulong)(uint)piVar7[0x1e] != (code *)0x0) &&
       (((*(code *)(ulong)(uint)piVar7[0x1e])(), DAT_10010040 == 0 || (*piVar7 != 0x54584b57))))
    goto LAB_1000ce56;
    uVar8 = piVar7[2];
    if ((0xc3 < uVar8) && ((code *)(ulong)(uint)piVar7[0x30] != (code *)0x0)) {
      (*(code *)(ulong)(uint)piVar7[0x30])(DAT_10010040,2,1);
      goto LAB_1000ce56;
    }
  }
  if (((DAT_10010040 >> 0x20 == 0) && (0x6f < uVar8)) &&
     ((code *)(ulong)(uint)piVar7[0x1b] != (code *)0x0)) {
    (*(code *)(ulong)(uint)piVar7[0x1b])(DAT_10010040,2,1);
  }
LAB_1000ce56:
  uVar8 = 0;
  bVar15 = true;
  piVar7 = DAT_10010000;
  while( true ) {
    if (((piVar7 != (int *)0x0) && (*piVar7 == 0x54584b57)) &&
       ((0x77 < (uint)piVar7[2] && ((code *)(ulong)(uint)piVar7[0x1d] != (code *)0x0)))) {
      (*(code *)(ulong)(uint)piVar7[0x1d])(0,&DAT_100182f0,0xc);
    }
    if (CONCAT11(DAT_100182f3,DAT_100182f2) != DAT_1001003c) break;
    if (DAT_10010000 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = DAT_10010000;
      if (((*DAT_10010000 == 0x54584b57) && (0x33 < (uint)DAT_10010000[2])) &&
         ((code *)(ulong)(uint)DAT_10010000[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)DAT_10010000[0xc])(100);
        piVar7 = DAT_10010000;
      }
    }
    bVar15 = uVar8 < 999;
    uVar8 = uVar8 + 1;
    if (uVar8 == 1000) {
      return false;
    }
  }
  DAT_1001003c = CONCAT11(DAT_100182f3,DAT_100182f2);
  return bVar15;
}

#undef DAT_10010000
#undef DAT_10010008
#undef DAT_10010014
#undef DAT_10010018
#undef DAT_1001001c
#undef DAT_10010038
#undef DAT_1001003a
#undef DAT_1001003c
#undef DAT_10010040
#undef DAT_100182d0
#undef DAT_100182d1
#undef DAT_100182d2
#undef DAT_100182d3
#undef DAT_100182d4
#undef DAT_100182d5
#undef DAT_100182d6
#undef DAT_100182d7
#undef DAT_100182d8
#undef DAT_100182d9
#undef DAT_100182da
#undef DAT_100182de
#undef DAT_100182e0
#undef DAT_100182e2
#undef DAT_100182e3
#undef DAT_100182e4
#undef DAT_100182f0
#undef DAT_100182f2
#undef DAT_100182f3
#undef DAT_10018300
#undef DAT_10018301
#undef DAT_10018302
#undef DAT_10018303
#undef DAT_10018304
#undef DAT_10018305
#undef DAT_10018306
#undef DAT_10018307
#undef DAT_10018308
#undef DAT_10018309
#undef DAT_10018310
#undef _DAT_100182da
#undef _DAT_100182de
#undef _DAT_100182e4

#define local_78 (*(undefined4 *)(frame + 24))
#define local_74 (*(undefined4 *)(frame + 28))
#define local_70 (*(undefined4 *)(frame + 32))
#define local_6c (*(undefined4 *)(frame + 36))
#define local_68 (*(undefined4 *)(frame + 40))
#define local_64 (*(undefined4 *)(frame + 44))
#define local_60 (*(long *)(frame + 48))
#define local_58 (*(uint *)(frame + 56))
#define local_54 (*(uint *)(frame + 60))
#define local_50 (*(int *)(frame + 64))
#define local_4c (*(uint *)(frame + 68))
#define local_48 (*(long * *)(frame + 72))
#define local_40 (*(undefined4 *)(frame + 80))
#define local_3c (*(undefined4 *)(frame + 84))
#define local_38 (*(int * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cfd0
 */

bool recovered_1000cfd0(int *param_1,long *param_2,undefined4 param_3,uint param_4,long param_5,
                       undefined4 param_6,long param_7,undefined4 param_8,long param_9,
                       undefined4 param_10,undefined2 *param_11)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;

  local_50 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (param_11 == (undefined2 *)0x0) {
    return false;
  }
  local_58 = 0;
  local_54 = 0;
  if (param_2 == (long *)0x0) {
    return false;
  }
  if (*param_2 == 0) {
    return false;
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 == 0x54584b57) {
    uVar6 = *param_2 + 0x16;
    if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
      if ((uVar6 >> 0x20 != 0) ||
         (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))))
      goto LAB_1000d0e4;
      local_38 = param_1;
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar6 & 0xffffffff,2,param_3);
    }
    else {
      local_38 = param_1;
      (*(code *)(ulong)(uint)param_1[0x30])(uVar6,2,param_3);
    }
    param_1 = local_38;
  }
LAB_1000d0e4:
  if (*param_2 == 0) {
    return false;
  }
  if (*param_1 != 0x54584b57) {
    return false;
  }
  uVar6 = *param_2 + 0x18;
  local_60 = param_5;
  local_40 = param_6;
  if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
    if (uVar6 >> 0x20 != 0) {
      return false;
    }
    if ((uint)param_1[2] < 0x6c) {
      return false;
    }
    if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
      return false;
    }
    iVar5 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar6 & 0xffffffff,2,&local_58);
  }
  else {
    iVar5 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar6,2,&local_58);
  }
  uVar3 = local_58;
  if (local_58 == 0 || iVar5 == 0) {
    return false;
  }
  if (*param_2 == 0) {
    return false;
  }
  if (*param_1 != 0x54584b57) {
    return false;
  }
  uVar6 = *param_2 + 0x1e;
  local_48 = param_2;
  if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
    if (uVar6 >> 0x20 != 0) {
      return false;
    }
    if ((uint)param_1[2] < 0x6c) {
      return false;
    }
    if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
      return false;
    }
    iVar5 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar6,2,&local_54);
  }
  else {
    iVar5 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar6,2,&local_54);
  }
  uVar4 = local_40;
  lVar2 = local_60;
  if (iVar5 == 0) {
    return false;
  }
  if (local_48[1] == 0) {
    return false;
  }
  lVar7 = (ulong)*(uint *)(local_48 + 6) * (ulong)local_54 + local_48[1];
  if ((uVar3 & 0xffff) < param_4 || lVar7 == 0) {
    return false;
  }
  if (*param_1 != 0x54584b57) {
    return false;
  }
  if ((uint)param_1[2] < 0x74) {
    return false;
  }
  if (local_60 == 0 || (code *)(ulong)(uint)param_1[0x1c] == (code *)0x0) {
    return false;
  }
  local_4c = param_4;
  local_38 = param_1;
  iVar5 = (*(code *)(ulong)(uint)param_1[0x1c])(0,local_60,local_40,&local_78,&local_74);
  if (((iVar5 == 0) || (*local_38 != 0x54584b57)) || ((uint)local_38[2] < 0x74)) {
    return false;
  }
  if (param_7 == 0 || (code *)(ulong)(uint)local_38[0x1c] == (code *)0x0) {
    return false;
  }
  iVar5 = (*(code *)(ulong)(uint)local_38[0x1c])(0,param_7,param_8,&local_70,&local_6c);
  if (iVar5 == 0) {
    return false;
  }
  if (*local_38 != 0x54584b57) {
    return false;
  }
  if ((uint)local_38[2] < 0x74) {
    return false;
  }
  if (param_9 == 0 || (code *)(ulong)(uint)local_38[0x1c] == (code *)0x0) {
    return false;
  }
  iVar5 = (*(code *)(ulong)(uint)local_38[0x1c])(0,param_9,param_10,&local_68,&local_64);
  if (iVar5 == 0) {
    return false;
  }
  if (*local_48 != 0) {
    if (*local_38 == 0x54584b57) {
      uVar6 = *local_48 + 0x16;
      if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)) {
        if ((uVar6 >> 0x20 == 0) &&
           ((0x6f < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,2,param_3);
        }
      }
      else {
        (*(code *)(ulong)(uint)local_38[0x30])(uVar6,2,param_3);
      }
    }
    if (*local_48 != 0) {
      if (*local_38 == 0x54584b57) {
        uVar6 = *local_48 + 0x18;
        if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)) {
          if ((uVar6 >> 0x20 == 0) &&
             ((0x6f < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,2,local_4c);
          }
        }
        else {
          (*(code *)(ulong)(uint)local_38[0x30])(uVar6,2,local_4c);
        }
      }
      lVar1 = *local_48;
      if (lVar1 != 0) {
        if (*local_38 == 0x54584b57) {
          local_3c = local_74;
          uVar6 = lVar1 + 0x20;
          if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)) {
            if ((uVar6 >> 0x20 != 0) ||
               (((uint)local_38[2] < 0x70 || ((code *)(ulong)(uint)local_38[0x1b] == (code *)0x0))))
            goto LAB_1000d525;
            iVar5 = (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,4,local_78);
          }
          else {
            iVar5 = (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_78);
          }
          if ((iVar5 != 0) && (*local_38 == 0x54584b57)) {
            uVar6 = lVar1 + 0x24;
            if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0))
            {
              if (((uVar6 >> 0x20 == 0) && (0x6f < (uint)local_38[2])) &&
                 ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)) {
                (*(code *)(ulong)(uint)local_38[0x1b])(uVar6 & 0xffffffff,4,local_3c);
              }
            }
            else {
              (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_3c);
            }
          }
        }
LAB_1000d525:
        lVar1 = *local_48;
        if (lVar1 != 0) {
          if (*local_38 == 0x54584b57) {
            local_3c = local_6c;
            uVar6 = lVar1 + 0x28;
            if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0))
            {
              if ((uVar6 >> 0x20 != 0) ||
                 (((uint)local_38[2] < 0x70 || ((code *)(ulong)(uint)local_38[0x1b] == (code *)0x0))
                 )) goto LAB_1000d600;
              iVar5 = (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,4,local_70);
            }
            else {
              iVar5 = (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_70);
            }
            if ((iVar5 != 0) && (*local_38 == 0x54584b57)) {
              uVar6 = lVar1 + 0x2c;
              if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)
                 ) {
                if (((uVar6 >> 0x20 == 0) && (0x6f < (uint)local_38[2])) &&
                   ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)) {
                  (*(code *)(ulong)(uint)local_38[0x1b])(uVar6 & 0xffffffff,4,local_3c);
                }
              }
              else {
                (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_3c);
              }
            }
          }
LAB_1000d600:
          lVar1 = *local_48;
          if (lVar1 != 0) {
            if (*local_38 != 0x54584b57) goto LAB_1000d769;
            local_3c = local_64;
            uVar6 = lVar1 + 0x30;
            if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0))
            {
              if ((uVar6 >> 0x20 != 0) ||
                 (((uint)local_38[2] < 0x70 || ((code *)(ulong)(uint)local_38[0x1b] == (code *)0x0))
                 )) goto LAB_1000d6e3;
              iVar5 = (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,4,local_68);
            }
            else {
              iVar5 = (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_68);
            }
            if (iVar5 != 0) {
              if (*local_38 != 0x54584b57) goto LAB_1000d769;
              uVar6 = lVar1 + 0x34;
              if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)
                 ) {
                if ((uVar6 >> 0x20 == 0) &&
                   ((0x6f < (uint)local_38[2] &&
                    ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)))) {
                  (*(code *)(ulong)(uint)local_38[0x1b])(uVar6 & 0xffffffff,4,local_3c);
                }
              }
              else {
                (*(code *)(ulong)(uint)local_38[0x30])(uVar6,4,local_3c);
              }
            }
          }
        }
      }
    }
  }
LAB_1000d6e3:
  if (((((*local_38 == 0x54584b57) && (0x77 < (uint)local_38[2])) &&
       (((code *)(ulong)(uint)local_38[0x1d] == (code *)0x0 ||
        ((*(code *)(ulong)(uint)local_38[0x1d])(0,lVar2,uVar4), *local_38 == 0x54584b57)))) &&
      (0x77 < (uint)local_38[2])) &&
     (((((code *)(ulong)(uint)local_38[0x1d] == (code *)0x0 ||
        ((*(code *)(ulong)(uint)local_38[0x1d])(0,param_7,param_8), *local_38 == 0x54584b57)) &&
       (0x77 < (uint)local_38[2])) && ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)))) {
    (*(code *)(ulong)(uint)local_38[0x1d])(0,param_9,param_10);
  }
LAB_1000d769:
  if (*local_48 != 0) {
    if (*local_38 == 0x54584b57) {
      uVar6 = *local_48 + 0x1c;
      if (((uint)local_38[2] < 0xc4) || ((code *)(ulong)(uint)local_38[0x30] == (code *)0x0)) {
        if ((uVar6 >> 0x20 == 0) &&
           ((0x6f < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)local_38[0x1b])(uVar6,2,1);
        }
      }
      else {
        (*(code *)(ulong)(uint)local_38[0x30])(uVar6,2,1);
      }
    }
    if ((*local_48 != 0) && (*local_38 == 0x54584b57)) {
      uVar6 = *local_48 + 0x1c;
      if (((uint)local_38[2] < 0xc0) || ((code *)(ulong)(uint)local_38[0x2f] == (code *)0x0)) {
        if (((uVar6 >> 0x20 == 0) && (0x6b < (uint)local_38[2])) &&
           ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)) {
          (*(code *)(ulong)(uint)local_38[0x1a])(uVar6,2,&local_50);
        }
      }
      else {
        (*(code *)(ulong)(uint)local_38[0x2f])(uVar6,2,&local_50);
      }
    }
  }
  if (local_50 != 0) {
    *param_11 = (short)local_4c;
    param_11[1] = *(undefined2 *)(param_7 + 2);
    param_11[2] = *(undefined2 *)(param_9 + 2);
    *(long *)(param_11 + 4) = lVar7;
  }
  return local_50 != 0;
}

#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10010000
#define DAT_10010000 (*(int * *)(((uintptr_t)pf_module_state + 0x2525U)))
#undef DAT_10010028
#define DAT_10010028 (*(ushort *)(((uintptr_t)pf_module_state + 0x254dU)))
#undef DAT_1001002a
#define DAT_1001002a (*(ushort *)(((uintptr_t)pf_module_state + 0x254fU)))
#undef DAT_10010030
#define DAT_10010030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2555U)))
#undef DAT_10010150
#define DAT_10010150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2675U)))
#undef DAT_10010152
#define DAT_10010152 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2677U)))
#undef DAT_10010153
#define DAT_10010153 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2678U)))
#undef DAT_10010154
#define DAT_10010154 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2679U)))
#undef DAT_10010210
#define DAT_10010210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2735U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8a0
 */

void recovered_1000d8a0(ushort param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;

  uVar1 = DAT_10010028;
  piVar6 = DAT_10010000;
  if (DAT_10010028 != 0 && DAT_10010000 != (int *)0x0) {
    lVar3 = (ulong)param_1 * 0x80c;
    lVar4 = -0x80c;
    do {
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f41U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f42U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f43U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f44U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f45U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f46U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f47U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f48U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f49U) + lVar4) = 0;
      *(undefined1 *)(lVar3 + ((uintptr_t)pf_module_state + 0x2f4aU) + lVar4) = 0;
      lVar4 = lVar4 + 10;
    } while (lVar4 != 0);
    *(ushort *)(&DAT_10010154 + (ulong)(DAT_1001002a % uVar1) * 2) = param_1;
    iVar5 = DAT_1001002a + 1;
    DAT_1001002a = (ushort)iVar5;
    DAT_10010152 = (undefined1)iVar5;
    DAT_10010153 = (undefined1)((uint)iVar5 >> 8);
    if (*piVar6 == 0x54584b57) {
      if (((0x77 < (uint)piVar6[2]) && ((code *)(ulong)(uint)piVar6[0x1d] != (code *)0x0)) &&
         ((*(code *)(ulong)(uint)piVar6[0x1d])(0,&DAT_10010210 + lVar3,0x80c), piVar6 = DAT_10010000
         , DAT_10010000 == (int *)0x0)) {
        return;
      }
      if (((*piVar6 == 0x54584b57) && (0x77 < (uint)piVar6[2])) &&
         ((code *)(ulong)(uint)piVar6[0x1d] != (code *)0x0)) {
        (*(code *)(ulong)(uint)piVar6[0x1d])(0,&DAT_10010150,0x24);
        piVar6 = DAT_10010000;
      }
    }
    if ((piVar6 != (int *)0x0 && DAT_10010030 != 0) && (*piVar6 == 0x54584b57)) {
      uVar2 = piVar6[2];
      if (0x7b < uVar2) {
        if ((code *)(ulong)(uint)piVar6[0x1e] != (code *)0x0) {
          (*(code *)(ulong)(uint)piVar6[0x1e])();
          if (DAT_10010030 == 0) {
            return;
          }
          if (*piVar6 != 0x54584b57) {
            return;
          }
        }
        uVar2 = piVar6[2];
        if ((0xc3 < uVar2) && ((code *)(ulong)(uint)piVar6[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000da3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(ulong)(uint)piVar6[0x30])(DAT_10010030,2,0);
          return;
        }
      }
      if (((DAT_10010030 >> 0x20 == 0) && (0x6f < uVar2)) &&
         ((code *)(ulong)(uint)piVar6[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000da61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)piVar6[0x1b])(DAT_10010030,2,0);
        return;
      }
    }
  }
  return;
}

#undef DAT_10010000
#undef DAT_10010028
#undef DAT_1001002a
#undef DAT_10010030
#undef DAT_10010150
#undef DAT_10010152
#undef DAT_10010153
#undef DAT_10010154
#undef DAT_10010210

#undef DAT_1000e333
#define DAT_1000e333 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x858U)))
#undef DAT_1000e338
#define DAT_1000e338 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85dU)))
#undef DAT_1000e33d
#define DAT_1000e33d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x862U)))
#undef DAT_1000e342
#define DAT_1000e342 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x867U)))
#undef str_1000e347
#define str_1000e347 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86cU)))
#undef str_1000e352
#define str_1000e352 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x877U)))
#undef str_1000e35b
#define str_1000e35b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x880U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da70
 */

char * recovered_1000da70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_1000e333;
    }
    if (param_1 == 0x10) {
      return &DAT_1000e338;
    }
    if (param_1 == 0x20) {
      return &DAT_1000e33d;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_1000e342;
    }
    if (param_1 == 0x80) {
      return str_1000e347;
    }
    if (param_1 == 0xfe) {
      return str_1000e352;
    }
  }
  return str_1000e35b;
}

#undef DAT_1000e333
#undef DAT_1000e338
#undef DAT_1000e33d
#undef DAT_1000e342
#undef str_1000e347
#undef str_1000e352
#undef str_1000e35b

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
