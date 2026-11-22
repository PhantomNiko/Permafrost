/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d000
#define DAT_1000d000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000d000;
}

#undef DAT_1000d000

#undef DAT_1000b91e
#define DAT_1000b91e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe3U)))
#undef DAT_1000b981
#define DAT_1000b981 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef str_1000b83b
#define str_1000b83b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_1000b84d
#define str_1000b84d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12U)))
#undef str_1000b87a
#define str_1000b87a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fU)))
#undef str_1000b88d
#define str_1000b88d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52U)))
#undef str_1000b8d9
#define str_1000b8d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eU)))
#undef str_1000b8e3
#define str_1000b8e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8U)))
#undef str_1000b8f7
#define str_1000b8f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_1000b90b
#define str_1000b90b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_1000b923
#define str_1000b923 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
#undef str_1000b944
#define str_1000b944 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x109U)))
#undef str_1000b953
#define str_1000b953 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118U)))
#undef str_1000b963
#define str_1000b963 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_1000b972
#define str_1000b972 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
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
#define local_518 (*(undefined2 *)(frame + 24))
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
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  bool bVar16;

  local_34 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar13 = api[2];
  if (uVar13 < 0x10) {
    return 0;
  }
  PF_PART1(local_518, 0) = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar12 = 'q';
    pcVar9 = str_1000b83b;
    do {
      pcVar9 = pcVar9 + 1;
      local_516[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  local_516[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar12 = ':';
    pcVar9 = str_1000b944;
    do {
      pcVar9 = pcVar9 + 1;
      local_516[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  local_516[uVar5 - 2] = 0;
  if (api[1] == 0) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x60) {
      *(undefined2 *)(local_516 + (uVar5 - 2)) = 0x30;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    uVar15 = api[1];
    do {
      uVar5 = uVar10;
      acStack_11a[uVar5 + 3] = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
      uVar10 = uVar5 + 1;
      if (8 < uVar10) break;
      bVar16 = 9 < uVar15;
      uVar15 = uVar15 / 10;
    } while (bVar16);
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar14 = uVar6;
        uVar6 = uVar14 + 1;
      } while (local_516[uVar14 - 2] != '\0');
      uVar6 = uVar10;
      if (uVar14 + 1 < 0x60) {
        local_516[uVar14 - 2] = acStack_11a[uVar5 + 3];
        local_516[uVar14 - 1] = 0;
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
      } while (local_516[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x60) {
        local_516[uVar5 - 2] = acStack_11a[uVar6 + 1];
        local_516[uVar5 - 1] = 0;
      }
      pcVar9 = acStack_11a + uVar6;
      uVar6 = uVar6 - 2;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_516[uVar5 - 2] != '\0');
      uVar10 = uVar6;
      if (uVar5 + 1 < 0x60) {
        local_516[uVar5 - 2] = *pcVar9;
        local_516[uVar5 - 1] = 0;
      }
    }
  }
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x60) {
    local_516[uVar5 - 1] = 0x20;
    bVar16 = uVar10 != 0x5e;
    uVar10 = uVar5 + 2;
    if (bVar16) {
      uVar10 = uVar5 + 3;
      local_516[uVar5] = 0x72;
      if (uVar10 < 0x5f) {
        uVar10 = uVar5 + 4;
        local_516[uVar5 + 1] = 0x65;
        if (uVar10 < 0x5f) {
          uVar10 = uVar5 + 5;
          local_516[uVar5 + 2] = 0x61;
          if (uVar10 < 0x5f) {
            uVar10 = uVar5 + 6;
            local_516[uVar5 + 3] = 100;
            if (uVar10 < 0x5f) {
              local_516[uVar5 + 4] = 0x79;
              uVar10 = uVar5 + 7;
            }
          }
        }
      }
    }
  }
  local_516[uVar10 - 2] = 0;
  if ((0x2b < uVar13) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_518);
  }
  PF_PART1(local_518, 0) = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar12 = 's';
    pcVar9 = str_1000b84d;
    do {
      pcVar9 = pcVar9 + 1;
      local_516[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  local_516[uVar5 - 2] = 0;
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(acStack_11a + 2), iVar3 != 0)) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = 'h';
      pcVar9 = str_1000b953;
      do {
        pcVar9 = pcVar9 + 1;
        local_516[uVar5 - 2] = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar9;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    if (local_b4 == 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_516[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        *(undefined2 *)(local_516 + (uVar5 - 2)) = 0x30;
      }
    }
    else {
      uVar10 = 0xffffffffffffffff;
      do {
        uVar5 = uVar10;
        *(byte *)((long)&local_70 + uVar5 + 1) = (char)local_b4 + (char)(local_b4 / 10) * -10 | 0x30
        ;
        uVar10 = uVar5 + 1;
        if (8 < uVar10) break;
        bVar16 = 9 < local_b4;
        local_b4 = local_b4 / 10;
      } while (bVar16);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar14 = uVar6;
          uVar6 = uVar14 + 1;
        } while (local_516[uVar14 - 2] != '\0');
        uVar6 = uVar10;
        if (uVar14 + 1 < 0x400) {
          local_516[uVar14 - 2] = *(undefined1 *)((long)&local_70 + uVar5 + 1);
          local_516[uVar14 - 1] = 0;
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
        } while (local_516[uVar5 - 2] != '\0');
        if (uVar5 + 1 < 0x400) {
          local_516[uVar5 - 2] = *(undefined1 *)((long)&local_74 + uVar6 + 3);
          local_516[uVar5 - 1] = 0;
        }
        lVar1 = uVar6 + 2;
        uVar6 = uVar6 - 2;
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (local_516[uVar5 - 2] != '\0');
        uVar10 = uVar6;
        if (uVar5 + 1 < 0x400) {
          local_516[uVar5 - 2] = *(undefined1 *)((long)&local_74 + lVar1);
          local_516[uVar5 - 1] = 0;
        }
      }
    }
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = 'm';
      pcVar9 = str_1000b963;
      do {
        pcVar9 = pcVar9 + 1;
        local_516[uVar5 - 2] = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar9;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    iVar3 = 8;
    do {
      uVar13 = local_78 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar13;
      cVar8 = cVar12 + '7';
      if (uVar13 < 10) {
        cVar8 = cVar12 + '0';
      }
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_516[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        local_516[uVar5 - 2] = cVar8;
        local_516[uVar5 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x20;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = 'm';
      pcVar9 = str_1000b972;
      do {
        pcVar9 = pcVar9 + 1;
        local_516[uVar5 - 2] = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar9;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    local_516[uVar5 - 2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar10 < 0x400) {
      local_516[uVar5 - 2] = 0x3d;
      uVar5 = uVar10;
    }
    local_516[uVar5 - 2] = 0;
    if (local_74 == 0) {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_516[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        *(undefined2 *)(local_516 + (uVar5 - 2)) = 0x30;
      }
    }
    else {
      uVar10 = 0xffffffffffffffff;
      do {
        uVar5 = uVar10;
        *(byte *)((long)&local_70 + uVar5 + 1) = (char)local_74 + (char)(local_74 / 10) * -10 | 0x30
        ;
        uVar10 = uVar5 + 1;
        if (8 < uVar10) break;
        bVar16 = 9 < local_74;
        local_74 = local_74 / 10;
      } while (bVar16);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar14 = uVar6;
          uVar6 = uVar14 + 1;
        } while (local_516[uVar14 - 2] != '\0');
        uVar6 = uVar10;
        if (uVar14 + 1 < 0x400) {
          local_516[uVar14 - 2] = *(undefined1 *)((long)&local_70 + uVar5 + 1);
          local_516[uVar14 - 1] = 0;
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
        } while (local_516[uVar5 - 2] != '\0');
        if (uVar5 + 1 < 0x400) {
          local_516[uVar5 - 2] = *(undefined1 *)((long)&local_74 + uVar6 + 3);
          local_516[uVar5 - 1] = 0;
        }
        lVar1 = uVar6 + 2;
        uVar6 = uVar6 - 2;
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (local_516[uVar5 - 2] != '\0');
        uVar10 = uVar6;
        if (uVar5 + 1 < 0x400) {
          local_516[uVar5 - 2] = *(undefined1 *)((long)&local_74 + lVar1);
          local_516[uVar5 - 1] = 0;
        }
      }
    }
  }
  iVar3 = 0;
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) goto LAB_10001282;
  iVar4 = (*(code *)(ulong)(uint)api[3])(&DAT_1000b981,str_1000b87a,&local_518);
  iVar3 = 0;
  if (iVar4 == 0) goto LAB_10001282;
  local_40 = api;
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    uVar13 = 0;
    do {
      uVar15 = uVar13 & 0xff;
      iVar3 = 0;
      local_44 = uVar13;
      do {
        uVar11 = (undefined1)iVar3;
        uVar7 = recovered_10003ab0(api,uVar15,uVar11,0,acStack_11a + 2);
        if (((int)uVar7 != 0) &&
           (recovered_100013d0(api,(byte *)(acStack_11a + 2),(int *)&local_34),
           acStack_11a[0xe] < '\0')) {
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,1,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,2,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,3,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,4,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,5,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,6,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
          uVar7 = recovered_10003ab0(api,uVar15,uVar11,7,(undefined1 *)&local_70);
          if ((int)uVar7 != 0) {
            recovered_100013d0(api,(byte *)&local_70,(int *)&local_34);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      uVar13 = local_44 + 1;
    } while (uVar13 != 8);
  }
  piVar2 = local_40;
  if (local_34 == 0) {
    local_70 = 0;
    acStack_11a[2] = 0;
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (acStack_11a[uVar5 + 2] != '\0');
    if (uVar5 + 1 < 0xa0) {
      cVar12 = 'i';
      pcVar9 = str_1000b88d;
      do {
        pcVar9 = pcVar9 + 1;
        acStack_11a[uVar5 + 2] = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar9;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x9f);
    }
    acStack_11a[uVar5 + 2] = '\0';
    if (((*piVar2 == 0x54584b57) && (0x57 < (uint)piVar2[2])) &&
       ((code *)(ulong)(uint)piVar2[0x15] != (code *)0x0)) {
      iVar3 = (*(code *)(ulong)(uint)piVar2[0x15])(0x22e,1,&local_70);
      uVar13 = local_70;
      if (iVar3 == 0) goto LAB_10000fbb;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_11a[uVar5 + 2] != '\0');
      if (uVar10 < 0xa0) {
        acStack_11a[uVar5 + 2] = ' ';
        uVar5 = uVar10;
      }
      acStack_11a[uVar5 + 2] = '\0';
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_11a[uVar5 + 2] != '\0');
      if (uVar5 + 1 < 0xa0) {
        cVar12 = 'd';
        pcVar9 = str_1000b8d9;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_11a[uVar5 + 2] = cVar12;
          uVar5 = uVar5 + 1;
          cVar12 = *pcVar9;
          if (cVar12 == '\0') break;
        } while (uVar5 < 0x9f);
      }
      acStack_11a[uVar5 + 2] = '\0';
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_11a[uVar5 + 2] != '\0');
      if (uVar10 < 0xa0) {
        acStack_11a[uVar5 + 2] = '=';
        uVar5 = uVar10;
      }
      acStack_11a[uVar5 + 2] = '\0';
      iVar3 = 8;
      do {
        uVar15 = uVar13 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar15;
        cVar8 = cVar12 + '7';
        if (uVar15 < 10) {
          cVar8 = cVar12 + '0';
        }
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (acStack_11a[uVar5 + 2] != '\0');
        if (uVar5 + 1 < 0xa0) {
          acStack_11a[uVar5 + 2] = cVar8;
          acStack_11a[uVar5 + 3] = '\0';
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_11a[uVar5 + 2] != '\0');
      if (uVar5 + 1 < 0xa0) {
        cVar12 = ' ';
        pcVar9 = str_1000b8e3;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_11a[uVar5 + 2] = cVar12;
          uVar5 = uVar5 + 1;
          cVar12 = *pcVar9;
          if (cVar12 == '\0') break;
        } while (uVar5 < 0x9f);
      }
    }
    else {
LAB_10000fbb:
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_11a[uVar5 + 2] != '\0');
      if (uVar5 + 1 < 0xa0) {
        cVar12 = ' ';
        pcVar9 = str_1000b8f7;
        do {
          pcVar9 = pcVar9 + 1;
          acStack_11a[uVar5 + 2] = cVar12;
          uVar5 = uVar5 + 1;
          cVar12 = *pcVar9;
          if (cVar12 == '\0') break;
        } while (uVar5 < 0x9f);
      }
    }
    acStack_11a[uVar5 + 2] = '\0';
    if ((code *)(ulong)(uint)piVar2[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)piVar2[3])(str_1000b90b,&DAT_1000b91e,acStack_11a + 2);
    }
  }
  uVar13 = local_34;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    local_516[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  piVar2 = local_40;
  local_516[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar12 = 'p';
    pcVar9 = str_1000b923;
    do {
      pcVar9 = pcVar9 + 1;
      local_516[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  local_516[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_516[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    local_516[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  local_516[uVar5 - 2] = 0;
  if (uVar13 == 0) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (local_516[uVar5 - 2] != '\0');
    if (uVar5 + 1 < 0x400) {
      *(undefined2 *)(local_516 + (uVar5 - 2)) = 0x30;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar5 = uVar10;
      acStack_11a[uVar5 + 3] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
      uVar10 = uVar5 + 1;
      if (8 < uVar10) break;
      bVar16 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar16);
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar14 = uVar6;
        uVar6 = uVar14 + 1;
      } while (local_516[uVar14 - 2] != '\0');
      uVar6 = uVar10;
      if (uVar14 + 1 < 0x400) {
        local_516[uVar14 - 2] = acStack_11a[uVar5 + 3];
        local_516[uVar14 - 1] = 0;
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
      } while (local_516[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        local_516[uVar5 - 2] = acStack_11a[uVar6 + 1];
        local_516[uVar5 - 1] = 0;
      }
      pcVar9 = acStack_11a + uVar6;
      uVar6 = uVar6 - 2;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (local_516[uVar5 - 2] != '\0');
      uVar10 = uVar6;
      if (uVar5 + 1 < 0x400) {
        local_516[uVar5 - 2] = *pcVar9;
        local_516[uVar5 - 1] = 0;
      }
    }
  }
  iVar3 = 1;
  if ((code *)(ulong)(uint)piVar2[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)piVar2[3])(&DAT_1000b981,str_1000b87a,&local_518);
    iVar3 = 1;
  }
LAB_10001282:
  return iVar3;
}

#undef DAT_1000b91e
#undef DAT_1000b981
#undef str_1000b83b
#undef str_1000b84d
#undef str_1000b87a
#undef str_1000b88d
#undef str_1000b8d9
#undef str_1000b8e3
#undef str_1000b8f7
#undef str_1000b90b
#undef str_1000b923
#undef str_1000b944
#undef str_1000b953
#undef str_1000b963
#undef str_1000b972
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
#undef local_518

#undef DAT_1000b9a3
#define DAT_1000b9a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x168U)))
#undef DAT_1000e000
#define DAT_1000e000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c5U)))
#undef DAT_1000e001
#define DAT_1000e001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c6U)))
#undef DAT_1000e002
#define DAT_1000e002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c7U)))
#undef DAT_1000e003
#define DAT_1000e003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c8U)))
#undef DAT_1000e004
#define DAT_1000e004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c9U)))
#undef DAT_1000e005
#define DAT_1000e005 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27caU)))
#undef DAT_1000e006
#define DAT_1000e006 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cbU)))
#undef DAT_1000e007
#define DAT_1000e007 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27ccU)))
#undef DAT_1000e400
#define DAT_1000e400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc5U)))
#undef DAT_1000e401
#define DAT_1000e401 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc6U)))
#undef DAT_1000e402
#define DAT_1000e402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc7U)))
#undef DAT_1000e403
#define DAT_1000e403 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc8U)))
#undef DAT_1000e404
#define DAT_1000e404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc9U)))
#undef DAT_1000e405
#define DAT_1000e405 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bcaU)))
#undef DAT_1000e406
#define DAT_1000e406 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bcbU)))
#undef DAT_1000e407
#define DAT_1000e407 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bccU)))
#undef str_1000b982
#define str_1000b982 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x147U)))
#undef str_1000b98d
#define str_1000b98d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000bd30
#define str_1000bd30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_1000bd4a
#define str_1000bd4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50fU)))
#undef str_1000bd69
#define str_1000bd69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52eU)))
#undef str_1000bd80
#define str_1000bd80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#undef str_1000bd9a
#define str_1000bd9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55fU)))
#undef str_1000bdba
#define str_1000bdba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57fU)))
#undef str_1000bdc6
#define str_1000bdc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
#undef str_1000bdd2
#define str_1000bdd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#undef str_1000bdee
#define str_1000bdee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b3U)))
#undef str_1000be02
#define str_1000be02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c7U)))
#undef str_1000be10
#define str_1000be10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d5U)))
#undef str_1000be1f
#define str_1000be1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_1000be29
#define str_1000be29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eeU)))
#undef str_1000be38
#define str_1000be38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fdU)))
#undef str_1000be49
#define str_1000be49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60eU)))
#undef str_1000be57
#define str_1000be57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61cU)))
#undef str_1000be61
#define str_1000be61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x626U)))
#undef str_1000be72
#define str_1000be72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_1000be86
#define str_1000be86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64bU)))
#undef str_1000be90
#define str_1000be90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x655U)))
#undef str_1000be9f
#define str_1000be9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#undef str_1000beab
#define str_1000beab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x670U)))
#undef str_1000bebc
#define str_1000bebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x681U)))
#define abStack_4e (*(byte (*)[2])(frame + 2306))
#define local_538 (*(undefined8 *)(frame + 1048))
#define local_530 (*(undefined1 (*)[1015])(frame + 1056))
#define local_138 (*(undefined4 *)(frame + 2072))
#define local_cc (*(undefined4 *)(frame + 2180))
#define local_c8 (*(undefined4 *)(frame + 2184))
#define local_c4 (*(undefined4 *)(frame + 2188))
#define local_c0 (*(undefined4 *)(frame + 2192))
#define local_bc (*(uint *)(frame + 2196))
#define local_b8 (*(uint *)(frame + 2200))
#define local_b4 (*(uint *)(frame + 2204))
#define local_b0 (*(uint *)(frame + 2208))
#define local_ac (*(uint *)(frame + 2212))
#define local_a8 (*(uint *)(frame + 2216))
#define local_a4 (*(uint *)(frame + 2220))
#define local_a0 (*(uint *)(frame + 2224))
#define local_9c (*(uint *)(frame + 2228))
#define local_98 (*(ulong *)(frame + 2232))
#define local_90 (*(ulong *)(frame + 2240))
#define local_84 (*(uint *)(frame + 2252))
#define local_80 (*(uint *)(frame + 2256))
#define local_7c (*(uint *)(frame + 2260))
#define local_78 (*(uint *)(frame + 2264))
#define local_74 (*(uint *)(frame + 2268))
#define local_70 (*(ulong *)(frame + 2272))
#define local_64 (*(uint *)(frame + 2284))
#define local_60 (*(undefined4 *)(frame + 2288))
#define local_5c (*(uint *)(frame + 2292))
#define local_58 (*(ulong *)(frame + 2296))
#define local_4c (*(undefined4 *)(frame + 2308))
#define local_40 (*(uint *)(frame + 2320))
#define local_3c (*(uint *)(frame + 2324))
#define local_38 (*(int * *)(frame + 2328))
#define acStack_939 (*(char (*)[1024])(frame + 23))
#define cStack_539 (*(char *)(frame + 1047))
#define cStack_139 (*(char *)(frame + 2071))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d0
 */

void recovered_100013d0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2416] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  char *pcVar12;
  ushort uVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  uint uVar23;
  bool bVar24;

  if (param_2[8] != 4) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_939[1] = '\0';
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 1] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = 'r';
    pcVar8 = str_1000b982;
    do {
      pcVar8 = pcVar8 + 1;
      acStack_939[uVar5 + 1] = cVar10;
      uVar5 = uVar5 + 1;
      cVar10 = *pcVar8;
      if (cVar10 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_939[uVar5 + 1] = '\0';
  if ((*(short *)(param_2 + 4) == -0x7f7a) && (param_2[9] == 3)) {
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 1] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar8 = str_1000b98d;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_939[uVar5 + 1] = cVar10;
        uVar5 = uVar5 + 1;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    acStack_939[uVar5 + 1] = '\0';
  }
  recovered_10003d30(param_1,param_2,(long)(acStack_939 + 1));
  local_538 = 0;
  local_4c = 0;
  local_64 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_84 = 0;
  local_80 = 0;
  local_40 = 0;
  local_3c = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  if (param_2 == (byte *)0x0) {
    return;
  }
  if ((param_2[8] != 4) || (param_2[9] != 3)) goto LAB_10001714;
  uVar17 = *(uint *)(param_2 + 0x14);
  if ((uVar17 & 1) == 0 && uVar17 != 0) {
    iVar4 = 0;
    if ((uVar17 & 6) == 4) {
      iVar4 = *(int *)(param_2 + 0x18);
    }
    uVar17 = uVar17 & 0xfffffff0;
    if (uVar17 == 0 && iVar4 == 0) goto LAB_100016af;
    local_538 = 0;
    local_138 = 0;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) goto LAB_100016af;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (((!((uint)param_1[2] < 0x68 || iVar4 != 0)) &&
          ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) &&
         (iVar4 = (*(code *)(ulong)(uint)param_1[0x19])(uVar17,0,0x1000), iVar4 != 0)) {
        local_538 = (ulong)local_138;
        goto LAB_10001669;
      }
      goto LAB_100016af;
    }
    iVar4 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar17,iVar4,0x1000);
    if (iVar4 == 0) goto LAB_100016af;
LAB_10001669:
    if ((local_538 != 0) && (*param_1 == 0x54584b57)) {
      uVar19 = local_538 + 8;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar19 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0x1a])(uVar19,4,&local_4c);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar19,4,&local_4c);
      }
    }
    if ((local_4c & 1) == 0) {
      if (local_538 != 0) {
        if (*param_1 == 0x54584b57) {
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((local_538 + 8 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(local_538 + 8,4,local_4c | 1);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])();
          }
        }
        goto LAB_10002b97;
      }
      uVar19 = 0;
    }
    else {
LAB_10002b97:
      uVar19 = local_538;
    }
    local_138 = 0;
    uVar17 = 0;
    bVar24 = true;
    local_58 = uVar19 + 8;
    local_38 = (int *)(uVar19 + 8 >> 0x20);
    do {
      if (uVar19 == 0) {
LAB_10002c48:
        if ((*param_1 == 0x54584b57) &&
           ((0x33 < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0xc])(100);
        }
      }
      else if (*param_1 == 0x54584b57) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((uint)param_1[2] < 0x6c || local_38 != (int *)0x0) ||
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10002c48;
          iVar4 = (*(code *)(ulong)(uint)param_1[0x1a])(local_58,1,&local_138);
        }
        else {
          iVar4 = (*(code *)(ulong)(uint)param_1[0x2f])(local_58,1,&local_138);
        }
        if ((iVar4 == 0) || ((local_138 & 1) == 0)) goto LAB_10002c48;
        break;
      }
      bVar24 = uVar17 < 99;
      uVar17 = uVar17 + 1;
    } while (uVar17 != 100);
    if (bVar24) {
      if ((local_538 != 0) && (*param_1 == 0x54584b57)) {
        uVar19 = local_538 + 0xe;
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((uVar19 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar19,2,&local_64);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(uVar19,2,&local_64);
        }
      }
      if ((local_64 & 0x7fff) == 0) {
        uVar19 = 0;
        do {
          uVar5 = uVar19;
          uVar19 = uVar5 + 1;
        } while (acStack_939[uVar5 + 1] != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar8 = str_1000bd69;
          do {
            pcVar8 = pcVar8 + 1;
            acStack_939[uVar5 + 1] = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar8;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
      }
      else {
        if (((((*param_1 == 0x54584b57) && (0x73 < (uint)param_1[2])) &&
             (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
              ((iVar4 = (*(code *)(ulong)(uint)param_1[0x1c])
                                  (0,&DAT_1000e000,0x400,&local_cc,&local_c8), iVar4 != 0 &&
               (*param_1 == 0x54584b57)))))) && (0x73 < (uint)param_1[2])) &&
           (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
            (iVar4 = (*(code *)(ulong)(uint)param_1[0x1c])(0,&DAT_1000e400,0x800), iVar4 != 0)))) {
          lVar6 = 0;
          do {
            (&DAT_1000e000)[lVar6] = 0;
            (&DAT_1000e001)[lVar6] = 0;
            (&DAT_1000e002)[lVar6] = 0;
            (&DAT_1000e003)[lVar6] = 0;
            (&DAT_1000e004)[lVar6] = 0;
            (&DAT_1000e005)[lVar6] = 0;
            (&DAT_1000e006)[lVar6] = 0;
            (&DAT_1000e007)[lVar6] = 0;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x400);
          lVar6 = 0;
          do {
            (&DAT_1000e400)[lVar6] = 0;
            (&DAT_1000e401)[lVar6] = 0;
            (&DAT_1000e402)[lVar6] = 0;
            (&DAT_1000e403)[lVar6] = 0;
            (&DAT_1000e404)[lVar6] = 0;
            (&DAT_1000e405)[lVar6] = 0;
            (&DAT_1000e406)[lVar6] = 0;
            (&DAT_1000e407)[lVar6] = 0;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x800);
          local_38 = param_1;
          recovered_1000b190(param_1,local_538,0x4c,(long)&local_bc);
          recovered_1000b190(param_1,local_538,0x5c,(long)&local_b8);
          recovered_1000b190(param_1,local_538,0x4e,(long)&local_84);
          recovered_1000b190(param_1,local_538,0x5e,(long)&local_80);
          recovered_1000b210(param_1,local_538,0x4c,local_bc & 0xfffffffd);
          recovered_1000b210(param_1,local_538,0x5c,local_b8 & 0xfffffffd);
          uVar23 = 2;
          recovered_1000b360(param_1,local_538,0x4c,2,0);
          recovered_1000b360(param_1,local_538,0x5c,2,0);
          piVar3 = local_38;
          uVar18 = local_80;
          uVar17 = local_84;
          local_58 = CONCAT44(PF_PART4(local_58, 4),0x100);
          if ((local_80 & 0x40) == 0 || (local_84 & 0x40) == 0) {
            if ((local_80 & 0x20) != 0 && (local_84 & 0x20) != 0) {
              uVar23 = 1;
              local_58 = CONCAT44(PF_PART4(local_58, 4),0x10);
              goto LAB_100030a7;
            }
            if ((local_80 & 0x10) != 0 && (local_84 & 0x10) != 0) {
              uVar23 = 0;
              local_58 = CONCAT44(PF_PART4(local_58, 4),2);
              goto LAB_100030a7;
            }
            pcVar8 = acStack_939 + 1;
            recovered_100038e0((long)pcVar8,0x400,str_1000bd9a);
            recovered_100037b0((long)pcVar8,0x400,str_1000bdba,uVar17);
            recovered_100037b0((long)pcVar8,0x400,str_1000bdc6,uVar18);
          }
          else {
LAB_100030a7:
            recovered_1000b280(local_38,local_538,0x40,local_cc);
            recovered_1000b280(piVar3,local_538,0x44,local_c8);
            recovered_1000b280(piVar3,local_538,0x50,local_c4);
            recovered_1000b280(piVar3,local_538,0x54,local_c0);
            recovered_1000b210(piVar3,local_538,0x4e,local_84 & 0xf0 | uVar23);
            recovered_1000b210(piVar3,local_538,0x5e,local_80 & 0xf0 | uVar23);
            recovered_1000b2f0(piVar3,local_538,0x4a,0x8000);
            recovered_1000b2f0(piVar3,local_538,0x4a,0);
            recovered_1000b2f0(piVar3,local_538,0x48,0);
            recovered_1000b2f0(piVar3,local_538,0x58,0x8000);
            recovered_1000b2f0(piVar3,local_538,0x5a,1);
            recovered_1000b210(piVar3,local_538,0x4d,0xff);
            recovered_1000b210(piVar3,local_538,0x5d,0xff);
            if (((((*piVar3 == 0x54584b57) && (0x77 < (uint)local_38[2])) &&
                 ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)) &&
                (((*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_1000e000,0x400),
                 *local_38 == 0x54584b57 && (0x77 < (uint)local_38[2])))) &&
               ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_1000e400,0x800);
            }
            piVar3 = local_38;
            recovered_1000b210(local_38,local_538,0x5c,2);
            recovered_1000b210(piVar3,local_538,0x4c,2);
            bVar24 = recovered_1000b360(piVar3,local_538,0x4c,2,2);
            if (((int)CONCAT71(extraout_var,bVar24) != 0) &&
               (bVar24 = recovered_1000b360(local_38,local_538,0x5c,2,2),
               (int)CONCAT71(extraout_var_00,bVar24) != 0)) {
              uVar17 = 0xffffffff;
              uVar18 = 0;
              local_90 = 0;
              local_98 = 0;
              local_70 = 0;
              local_78 = 0;
              local_74 = 0;
              local_9c = 0;
              local_a0 = 0;
              do {
                local_138 = 0;
                if ((local_64 >> (uVar18 & 0x1f) & 1) != 0) {
                  local_a0 = local_a0 + 1;
                  if (uVar17 == 0xffffffff) {
                    uVar7 = recovered_1000b490(local_38,local_538,(uint)local_58,&local_40,&local_3c
                                               ,uVar18,0,0,&local_138);
                    piVar3 = local_38;
                    if ((int)uVar7 == 0) {
                      uVar17 = 0xffffffff;
                    }
                    else {
                      local_7c = 0;
                      local_60 = 0;
                      local_5c = 0;
                      local_9c = local_138;
                      uVar17 = (uint)local_58;
                      recovered_1000b490(local_38,local_538,(uint)local_58,&local_40,&local_3c,
                                         uVar18,0,2,&local_7c);
                      recovered_1000b490(piVar3,local_538,uVar17,&local_40,&local_3c,uVar18,0,4,
                                         &local_60);
                      local_70 = (ulong)PF_PART1(local_60, 2);
                      if (PF_PART1(local_60, 2) == 0) {
                        iVar4 = (int)local_90;
                        uVar19 = 1;
                        local_70 = 0;
                        do {
                          local_a4 = 0;
                          uVar17 = (uint)uVar19;
                          uVar7 = recovered_1000b490(local_38,local_538,(uint)local_58,&local_40,
                                                     &local_3c,uVar18,uVar17,5,&local_a4);
                          if (((int)uVar7 != 0) && (local_98 = (ulong)local_a4, 1 < local_a4 + 1)) {
                            local_5c = local_a4;
                            local_90 = (ulong)((int)local_90 + uVar17);
                            local_70 = uVar19;
                            goto LAB_10003466;
                          }
                          uVar19 = (ulong)(uVar17 + 1);
                        } while (uVar17 + 1 != 0x10);
                        local_74 = local_7c;
                        local_78 = local_60;
                        local_70 = 0;
                        local_98 = (ulong)local_5c;
                        local_90 = (ulong)(iVar4 + 0xf);
                      }
                      else {
                        recovered_1000b490(local_38,local_538,(uint)local_58,&local_40,&local_3c,
                                           uVar18,(uint)PF_PART1(local_60, 2),5,&local_5c);
                        local_98 = (ulong)local_5c;
LAB_10003466:
                        piVar3 = local_38;
                        local_74 = local_7c;
                        local_78 = local_60;
                        uVar17 = (uint)local_58;
                        uVar23 = (uint)local_70;
                        recovered_1000b490(local_38,local_538,(uint)local_58,&local_40,&local_3c,
                                           uVar18,uVar23,4,&local_b0);
                        recovered_1000b490(piVar3,local_538,uVar17,&local_40,&local_3c,uVar18,uVar23
                                           ,8,&local_b4);
                        recovered_1000b490(piVar3,local_538,uVar17,&local_40,&local_3c,uVar18,uVar23
                                           ,10,&local_ac);
                        recovered_1000b490(piVar3,local_538,uVar17,&local_40,&local_3c,uVar18,uVar23
                                           ,0xb,&local_a8);
                      }
                      uVar17 = uVar18;
                    }
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != 4);
              pcVar8 = acStack_939 + 1;
              recovered_100038e0((long)pcVar8,0x400,str_1000bdee);
              recovered_10003950((long)pcVar8,str_1000be02,(ulong)local_a0);
              recovered_10003950((long)pcVar8,str_1000be10,local_58 & 0xffffffff);
              param_1 = local_38;
              if (uVar17 != 0xffffffff) {
                recovered_10003950((long)pcVar8,str_1000be1f,(ulong)uVar17);
                recovered_100037b0((long)pcVar8,0x400,str_1000be29,local_9c);
                recovered_100037b0((long)pcVar8,0x400,str_1000be38,local_74);
                recovered_100037b0((long)pcVar8,0x400,str_1000be49,local_78);
                recovered_10003950((long)pcVar8,str_1000be57,local_70);
                recovered_100037b0((long)pcVar8,0x400,str_1000be61,(uint)local_98);
                if ((int)local_90 != 0) {
                  recovered_10003950((long)(acStack_939 + 1),str_1000be72,local_90);
                }
                param_1 = local_38;
                if ((int)local_70 != 0) {
                  recovered_100037b0((long)pcVar8,0x400,str_1000be86,local_b4);
                  recovered_100037b0((long)pcVar8,0x400,str_1000be90,local_b0);
                  recovered_100037b0((long)pcVar8,0x400,str_1000be9f,local_ac);
                  recovered_100037b0((long)pcVar8,0x400,str_1000beab,local_a8);
                }
              }
              goto LAB_10001714;
            }
            recovered_100038e0((long)(acStack_939 + 1),0x400,str_1000bdd2);
          }
          param_1 = local_38;
          goto LAB_10001714;
        }
        uVar19 = 0;
        do {
          uVar5 = uVar19;
          uVar19 = uVar5 + 1;
        } while (acStack_939[uVar5 + 1] != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar10 = ' ';
          pcVar8 = str_1000bd80;
          do {
            pcVar8 = pcVar8 + 1;
            acStack_939[uVar5 + 1] = cVar10;
            uVar5 = uVar5 + 1;
            cVar10 = *pcVar8;
            if (cVar10 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
      }
    }
    else {
      uVar19 = 0;
      do {
        uVar5 = uVar19;
        uVar19 = uVar5 + 1;
      } while (acStack_939[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar10 = ' ';
        pcVar8 = str_1000bd4a;
        do {
          pcVar8 = pcVar8 + 1;
          acStack_939[uVar5 + 1] = cVar10;
          uVar5 = uVar5 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
    }
  }
  else {
LAB_100016af:
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 1] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar10 = ' ';
      pcVar8 = str_1000bd30;
      do {
        pcVar8 = pcVar8 + 1;
        acStack_939[uVar5 + 1] = cVar10;
        uVar5 = uVar5 + 1;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
  }
  acStack_939[uVar5 + 1] = '\0';
LAB_10001714:
  pcVar8 = recovered_1000aca0((long)param_2);
  local_138 = local_138 & 0xffffff00;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar10 = '/';
    pcVar12 = &DAT_1000b9a3;
    do {
      local_530[uVar5 + 0x3f8] = cVar10;
      uVar5 = uVar5 + 1;
      cVar10 = *pcVar12;
      if (cVar10 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar5 < 0x5f);
  }
  local_530[uVar5 + 0x3f8] = 0;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  if (uVar19 < 0x60) {
    local_530[uVar5 + 0x3f8] = 0x2f;
    uVar5 = uVar19;
  }
  local_530[uVar5 + 0x3f8] = 0;
  bVar11 = *param_2;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  bVar15 = (bVar11 >> 4) + 0x37;
  if (bVar11 < 0xa0) {
    bVar15 = bVar11 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_530[uVar5 + 0x3f8] = bVar15;
    local_530[uVar5 + 0x3f9] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  cVar10 = bVar11 + 0x37;
  if (bVar11 < 10) {
    cVar10 = bVar11 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_530[uVar5 + 0x3f8] = cVar10;
    local_530[uVar5 + 0x3f9] = 0;
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  if (uVar19 < 0x60) {
    local_530[uVar5 + 0x3f8] = 0x3a;
    uVar5 = uVar19;
  }
  local_530[uVar5 + 0x3f8] = 0;
  bVar11 = param_2[1];
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  bVar14 = (bVar11 >> 4) + 0x37;
  if (bVar11 < 0xa0) {
    bVar14 = bVar11 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_530[uVar5 + 0x3f8] = bVar14;
    local_530[uVar5 + 0x3f9] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  bVar21 = bVar11 + 0x37;
  if (bVar11 < 10) {
    bVar21 = bVar11 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_530[uVar5 + 0x3f8] = bVar21;
    local_530[uVar5 + 0x3f9] = 0;
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (local_530[uVar5 + 0x3f8] != '\0');
  if (uVar19 < 0x60) {
    local_530[uVar5 + 0x3f8] = 0x2e;
    uVar5 = uVar19;
  }
  local_530[uVar5 + 0x3f8] = 0;
  bVar11 = param_2[2];
  if (bVar11 == 0) {
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (local_530[uVar5 + 0x3f8] != '\0');
    if (uVar5 + 1 < 0x60) {
      *(undefined2 *)(local_530 + uVar5 + 0x3f8) = 0x30;
    }
  }
  else {
    local_38 = (int *)CONCAT44(PF_PART4(local_38, 4),(uint)bVar21);
    uVar19 = 0xffffffffffffffff;
    uVar5 = (ulong)(uint)bVar11;
    do {
      uVar9 = uVar19;
      uVar17 = (uint)uVar5;
      abStack_4e[uVar9 + 3] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      uVar19 = uVar9 + 1;
      if (8 < uVar19) break;
      uVar5 = uVar5 / 10;
    } while (9 < uVar17);
    if ((uVar19 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar20 = uVar5;
        uVar5 = uVar20 + 1;
      } while (local_530[uVar20 + 0x3f8] != '\0');
      uVar5 = uVar19;
      if (uVar20 + 1 < 0x60) {
        local_530[uVar20 + 0x3f8] = abStack_4e[uVar9 + 3];
        local_530[uVar20 + 0x3f9] = 0;
      }
    }
    else {
      uVar5 = uVar9 + 2;
    }
    bVar21 = (byte)local_38;
    while (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar9 = uVar19;
        uVar19 = uVar9 + 1;
      } while (local_530[uVar9 + 0x3f8] != '\0');
      if (uVar9 + 1 < 0x60) {
        local_530[uVar9 + 0x3f8] = abStack_4e[uVar5 + 1];
        local_530[uVar9 + 0x3f9] = 0;
      }
      pbVar1 = abStack_4e + uVar5;
      uVar5 = uVar5 - 2;
      uVar19 = 0;
      do {
        uVar9 = uVar19;
        uVar19 = uVar9 + 1;
      } while (local_530[uVar9 + 0x3f8] != '\0');
      uVar19 = uVar5;
      if (uVar9 + 1 < 0x60) {
        local_530[uVar9 + 0x3f8] = *pbVar1;
        local_530[uVar9 + 0x3f9] = 0;
      }
    }
  }
  local_538 = local_538 & 0xffffffffffffff00;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    *(undefined1 *)(uVar19 + (long)&local_538) = 0x70;
    bVar24 = uVar19 != 0x3fe;
    uVar19 = uVar5 + 2;
    if (bVar24) {
      uVar19 = uVar5 + 3;
      acStack_939[uVar5 + 0x403] = 'c';
      if (uVar19 < 0x3ff) {
        uVar19 = uVar5 + 4;
        acStack_939[uVar5 + 0x404] = 'i';
        if (uVar19 < 0x3ff) {
          local_530[uVar5 - 4] = 0x3d;
          uVar19 = uVar5 + 5;
        }
      }
    }
  }
  acStack_939[uVar19 + 0x401] = '\0';
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_939[uVar5 + 0x401] = cVar10;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = ':';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_939[uVar5 + 0x401] = bVar14;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_939[uVar5 + 0x401] = bVar21;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = '.';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  if (bVar11 == 0) {
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      (acStack_939 + uVar5 + 0x401)[0] = '0';
      (acStack_939 + uVar5 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar19 = 0xffffffffffffffff;
    uVar17 = (uint)bVar11;
    do {
      uVar5 = uVar19;
      abStack_4e[uVar5 + 3] = (byte)(uVar17 % 10) | 0x30;
      uVar19 = uVar5 + 1;
      if (8 < uVar19) break;
      bVar24 = 9 < uVar17;
      uVar17 = uVar17 / 10;
    } while (bVar24);
    if ((uVar19 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar20 = uVar9;
        uVar9 = uVar20 + 1;
      } while (acStack_939[uVar20 + 0x401] != '\0');
      uVar9 = uVar19;
      if (uVar20 + 1 < 0x400) {
        acStack_939[uVar20 + 0x401] = abStack_4e[uVar5 + 3];
        acStack_939[uVar20 + 0x402] = '\0';
      }
    }
    else {
      uVar9 = uVar5 + 2;
    }
    while (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar5 = uVar19;
        uVar19 = uVar5 + 1;
      } while (acStack_939[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        acStack_939[uVar5 + 0x401] = abStack_4e[uVar9 + 1];
        acStack_939[uVar5 + 0x402] = '\0';
      }
      pbVar1 = abStack_4e + uVar9;
      uVar9 = uVar9 - 2;
      uVar19 = 0;
      do {
        uVar5 = uVar19;
        uVar19 = uVar5 + 1;
      } while (acStack_939[uVar5 + 0x401] != '\0');
      uVar19 = uVar9;
      if (uVar5 + 1 < 0x400) {
        acStack_939[uVar5 + 0x401] = *pbVar1;
        acStack_939[uVar5 + 0x402] = '\0';
      }
    }
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_939[uVar5 + 0x402] = ' ';
    bVar24 = uVar19 != 0x3fe;
    uVar19 = uVar5 + 2;
    if (bVar24) {
      uVar19 = uVar5 + 3;
      acStack_939[uVar5 + 0x403] = 'v';
      if (uVar19 < 0x3ff) {
        uVar19 = uVar5 + 4;
        acStack_939[uVar5 + 0x404] = 'e';
        if (uVar19 < 0x3ff) {
          uVar19 = uVar5 + 5;
          local_530[uVar5 - 4] = 0x6e;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar5 + 6;
            *(undefined1 *)(uVar5 + 5 + (long)&local_538) = 100;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar5 + 7;
              local_530[uVar5 - 2] = 0x6f;
              if (uVar19 < 0x3ff) {
                uVar19 = uVar5 + 8;
                local_530[uVar5 - 1] = 0x72;
                if (uVar19 < 0x3ff) {
                  local_530[uVar5] = 0x3d;
                  uVar19 = uVar5 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_939[uVar19 + 0x401] = '\0';
  uVar2 = *(ushort *)(param_2 + 4);
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar11 = (byte)(uVar2 >> 8);
    bVar15 = (bVar11 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar13 = uVar2 >> 8 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)uVar13;
    cVar16 = cVar10 + '7';
    if (uVar13 < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar13 = uVar2 >> 4 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)uVar13;
    cVar16 = cVar10 + '7';
    if (uVar13 < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)(uVar2 & 0xf);
    cVar16 = cVar10 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_939[uVar5 + 0x402] = ' ';
    bVar24 = uVar19 != 0x3fe;
    uVar19 = uVar5 + 2;
    if (bVar24) {
      uVar19 = uVar5 + 3;
      acStack_939[uVar5 + 0x403] = 'd';
      if (uVar19 < 0x3ff) {
        uVar19 = uVar5 + 4;
        acStack_939[uVar5 + 0x404] = 'e';
        if (uVar19 < 0x3ff) {
          uVar19 = uVar5 + 5;
          local_530[uVar5 - 4] = 0x76;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar5 + 6;
            *(undefined1 *)(uVar5 + 5 + (long)&local_538) = 0x69;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar5 + 7;
              local_530[uVar5 - 2] = 99;
              if (uVar19 < 0x3ff) {
                uVar19 = uVar5 + 8;
                local_530[uVar5 - 1] = 0x65;
                if (uVar19 < 0x3ff) {
                  local_530[uVar5] = 0x3d;
                  uVar19 = uVar5 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_939[uVar19 + 0x401] = '\0';
  uVar2 = *(ushort *)(param_2 + 6);
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar11 = (byte)(uVar2 >> 8);
    bVar15 = (bVar11 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar13 = uVar2 >> 8 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)uVar13;
    cVar16 = cVar10 + '7';
    if (uVar13 < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar13 = uVar2 >> 4 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)uVar13;
    cVar16 = cVar10 + '7';
    if (uVar13 < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = (char)(uVar2 & 0xf);
    cVar16 = cVar10 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar16 = cVar10 + '0';
    }
    acStack_939[uVar5 + 0x401] = cVar16;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_939[uVar5 + 0x402] = ' ';
    bVar24 = uVar19 != 0x3fe;
    uVar19 = uVar5 + 2;
    if (bVar24) {
      uVar19 = uVar5 + 3;
      acStack_939[uVar5 + 0x403] = 'c';
      if (uVar19 < 0x3ff) {
        uVar19 = uVar5 + 4;
        acStack_939[uVar5 + 0x404] = 'l';
        if (uVar19 < 0x3ff) {
          uVar19 = uVar5 + 5;
          *(undefined1 *)(uVar5 + 4 + (long)&local_538) = 0x61;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar5 + 6;
            local_530[uVar5 - 3] = 0x73;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar5 + 7;
              local_530[uVar5 - 2] = 0x73;
              if (uVar19 < 0x3ff) {
                local_530[uVar5 - 1] = 0x3d;
                uVar19 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_939[uVar19 + 0x401] = '\0';
  bVar11 = param_2[8];
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    acStack_939[uVar5 + 0x401] = cVar10;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = '.';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  bVar11 = param_2[9];
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    acStack_939[uVar5 + 0x401] = cVar10;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = '.';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  bVar11 = param_2[10];
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    acStack_939[uVar5 + 0x401] = cVar10;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = ' ';
    pcVar12 = str_1000bebc;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_939[uVar5 + 0x401] = cVar10;
      uVar5 = uVar5 + 1;
      cVar10 = *pcVar12;
      if (cVar10 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_939[uVar5 + 0x401] = '\0';
  bVar11 = param_2[0xb];
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar15 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar15 = bVar11 >> 4 | 0x30;
    }
    acStack_939[uVar5 + 0x401] = bVar15;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  bVar11 = bVar11 & 0xf;
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    acStack_939[uVar5 + 0x401] = cVar10;
    acStack_939[uVar5 + 0x402] = '\0';
  }
  uVar17 = *(uint *)(param_2 + 0x10);
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = ' ';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  uVar19 = 0xffffffffffffffff;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x402] != '\0');
  if (uVar5 + 2 < 0x400) {
    acStack_939[uVar5 + 0x402] = 'c';
    bVar24 = uVar19 != 0x3fe;
    uVar19 = uVar5 + 2;
    if (bVar24) {
      uVar19 = uVar5 + 3;
      acStack_939[uVar5 + 0x403] = 'o';
      if (uVar19 < 0x3ff) {
        uVar19 = uVar5 + 4;
        acStack_939[uVar5 + 0x404] = 'm';
        if (uVar19 < 0x3ff) {
          uVar19 = uVar5 + 5;
          *(undefined1 *)(uVar5 + 4 + (long)&local_538) = 0x6d;
          if (uVar19 < 0x3ff) {
            uVar19 = uVar5 + 6;
            local_530[uVar5 - 3] = 0x61;
            if (uVar19 < 0x3ff) {
              uVar19 = uVar5 + 7;
              local_530[uVar5 - 2] = 0x6e;
              if (uVar19 < 0x3ff) {
                local_530[uVar5 - 1] = 100;
                uVar19 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_939[uVar19 + 0x401] = '\0';
  uVar19 = 0;
  do {
    uVar5 = uVar19;
    uVar19 = uVar5 + 1;
  } while (acStack_939[uVar5 + 0x401] != '\0');
  if (uVar19 < 0x400) {
    acStack_939[uVar5 + 0x401] = '=';
    uVar5 = uVar19;
  }
  acStack_939[uVar5 + 0x401] = '\0';
  iVar4 = 8;
  do {
    uVar18 = uVar17 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
    cVar10 = (char)uVar18;
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar16 = cVar10 + '7';
      if (uVar18 < 10) {
        cVar16 = cVar10 + '0';
      }
      acStack_939[uVar5 + 0x401] = cVar16;
      acStack_939[uVar5 + 0x402] = '\0';
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar19 = 0;
  do {
    uVar17 = *(uint *)(param_2 + uVar19 * 4 + 0x14);
    if (uVar17 != 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar9 = uVar5;
        uVar5 = uVar9 + 1;
      } while (acStack_939[uVar9 + 0x402] != '\0');
      if (uVar9 + 2 < 0x400) {
        acStack_939[uVar9 + 0x402] = ' ';
        bVar24 = uVar5 != 0x3fe;
        uVar5 = uVar9 + 2;
        if (bVar24) {
          uVar5 = uVar9 + 3;
          acStack_939[uVar9 + 0x403] = 'b';
          if (uVar5 < 0x3ff) {
            uVar5 = uVar9 + 4;
            acStack_939[uVar9 + 0x404] = 'a';
            if (uVar5 < 0x3ff) {
              local_530[uVar9 - 4] = 0x72;
              uVar5 = uVar9 + 5;
            }
          }
        }
      }
      acStack_939[uVar5 + 0x401] = '\0';
      if (uVar19 == 0) {
        uVar5 = 0;
        do {
          uVar9 = uVar5;
          uVar5 = uVar9 + 1;
        } while (acStack_939[uVar9 + 0x401] != '\0');
        if (uVar9 + 1 < 0x400) {
          (acStack_939 + uVar9 + 0x401)[0] = '0';
          (acStack_939 + uVar9 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar9 = 0xffffffffffffffff;
        uVar5 = uVar19;
        do {
          uVar20 = uVar9;
          uVar9 = uVar5 & 0xffffffff;
          uVar18 = (uint)uVar5;
          uVar5 = uVar9 / 10;
          abStack_4e[uVar20 + 3] = (char)uVar9 + (char)uVar5 * -10 | 0x30;
          uVar9 = uVar20 + 1;
          if (8 < uVar9) break;
        } while (9 < uVar18);
        if ((uVar9 & 1) == 0) {
          uVar5 = 0;
          do {
            uVar22 = uVar5;
            uVar5 = uVar22 + 1;
          } while (acStack_939[uVar22 + 0x401] != '\0');
          uVar5 = uVar9;
          if (uVar22 + 1 < 0x400) {
            acStack_939[uVar22 + 0x401] = abStack_4e[uVar20 + 3];
            acStack_939[uVar22 + 0x402] = '\0';
          }
        }
        else {
          uVar5 = uVar20 + 2;
        }
        while (uVar9 != 0) {
          uVar9 = 0;
          do {
            uVar20 = uVar9;
            uVar9 = uVar20 + 1;
          } while (acStack_939[uVar20 + 0x401] != '\0');
          if (uVar20 + 1 < 0x400) {
            acStack_939[uVar20 + 0x401] = abStack_4e[uVar5 + 1];
            acStack_939[uVar20 + 0x402] = '\0';
          }
          pbVar1 = abStack_4e + uVar5;
          uVar5 = uVar5 - 2;
          uVar9 = 0;
          do {
            uVar20 = uVar9;
            uVar9 = uVar20 + 1;
          } while (acStack_939[uVar20 + 0x401] != '\0');
          uVar9 = uVar5;
          if (uVar20 + 1 < 0x400) {
            acStack_939[uVar20 + 0x401] = *pbVar1;
            acStack_939[uVar20 + 0x402] = '\0';
          }
        }
      }
      uVar5 = 0;
      do {
        uVar9 = uVar5;
        uVar5 = uVar9 + 1;
      } while (acStack_939[uVar9 + 0x401] != '\0');
      if (uVar5 < 0x400) {
        acStack_939[uVar9 + 0x401] = '=';
        uVar9 = uVar5;
      }
      acStack_939[uVar9 + 0x401] = '\0';
      iVar4 = 8;
      do {
        uVar18 = uVar17 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar10 = (char)uVar18;
        uVar5 = 0;
        do {
          uVar9 = uVar5;
          uVar5 = uVar9 + 1;
        } while (acStack_939[uVar9 + 0x401] != '\0');
        if (uVar9 + 1 < 0x400) {
          cVar16 = cVar10 + '7';
          if (uVar18 < 10) {
            cVar16 = cVar10 + '0';
          }
          acStack_939[uVar9 + 0x401] = cVar16;
          acStack_939[uVar9 + 0x402] = '\0';
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != 6);
  if (acStack_939[1] != '\0') {
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 0x401] != '\0');
    if (uVar19 < 0x400) {
      acStack_939[uVar5 + 0x401] = ' ';
      uVar5 = uVar19;
    }
    acStack_939[uVar5 + 0x401] = '\0';
    uVar19 = 0;
    do {
      uVar5 = uVar19;
      uVar19 = uVar5 + 1;
    } while (acStack_939[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      pcVar12 = acStack_939 + 2;
      cVar10 = acStack_939[1];
      do {
        acStack_939[uVar5 + 0x401] = cVar10;
        uVar5 = uVar5 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar5 < 0x3ff);
    }
    acStack_939[uVar5 + 0x401] = '\0';
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_138,pcVar8,&local_538);
  }
  return;
}

#undef DAT_1000b9a3
#undef DAT_1000e000
#undef DAT_1000e001
#undef DAT_1000e002
#undef DAT_1000e003
#undef DAT_1000e004
#undef DAT_1000e005
#undef DAT_1000e006
#undef DAT_1000e007
#undef DAT_1000e400
#undef DAT_1000e401
#undef DAT_1000e402
#undef DAT_1000e403
#undef DAT_1000e404
#undef DAT_1000e405
#undef DAT_1000e406
#undef DAT_1000e407
#undef str_1000b982
#undef str_1000b98d
#undef str_1000bd30
#undef str_1000bd4a
#undef str_1000bd69
#undef str_1000bd80
#undef str_1000bd9a
#undef str_1000bdba
#undef str_1000bdc6
#undef str_1000bdd2
#undef str_1000bdee
#undef str_1000be02
#undef str_1000be10
#undef str_1000be1f
#undef str_1000be29
#undef str_1000be38
#undef str_1000be49
#undef str_1000be57
#undef str_1000be61
#undef str_1000be72
#undef str_1000be86
#undef str_1000be90
#undef str_1000be9f
#undef str_1000beab
#undef str_1000bebc
#undef abStack_4e
#undef local_538
#undef local_530
#undef local_138
#undef local_cc
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
#undef local_90
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_4c
#undef local_40
#undef local_3c
#undef local_38
#undef acStack_939
#undef cStack_539
#undef cStack_139

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b0
 */

void recovered_100037b0(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;

  if (param_1 != 0) {
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar8 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar8) = 0x20;
      uVar4 = uVar8;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (param_3 != (char *)0x0) {
      cVar6 = *param_3;
      if (uVar4 + 1 < param_2 && cVar6 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(param_1 + uVar4) = cVar6;
          cVar6 = *param_3;
          uVar8 = uVar4 + 1;
          if (cVar6 == '\0') break;
          uVar3 = uVar4 + 2;
          uVar4 = uVar8;
        } while (uVar3 < param_2);
      }
      else {
        uVar8 = uVar4;
      }
      *(undefined1 *)(param_1 + uVar8) = 0;
    }
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar8 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar8) = 0x3d;
      uVar4 = uVar8;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
  }
  iVar5 = 8;
  do {
    uVar7 = param_4 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
    cVar6 = (char)uVar7;
    cVar2 = cVar6 + '7';
    if (uVar7 < 10) {
      cVar2 = cVar6 + '0';
    }
    if (param_1 != 0) {
      uVar8 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar8);
        uVar8 = uVar8 + 1;
      } while (*pcVar1 != '\0');
      if (uVar8 < param_2) {
        *(char *)(param_1 + -1 + uVar8) = cVar2;
        *(undefined1 *)(param_1 + uVar8) = 0;
      }
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e0
 */

void recovered_100038e0(long param_1,ulong param_2,char *param_3)

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


#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003950
 */

void recovered_10003950(long param_1,char *param_2,ulong param_3)

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

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

undefined8
recovered_10003ab0(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef str_1000b8f7
#define str_1000b8f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_1000b9ad
#define str_1000b9ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_1000b9bd
#define str_1000b9bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_1000b9d5
#define str_1000b9d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19aU)))
#undef str_1000b9ed
#define str_1000b9ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b2U)))
#undef str_1000ba06
#define str_1000ba06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_1000ba17
#define str_1000ba17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
#undef str_1000ba27
#define str_1000ba27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#undef str_1000ba36
#define str_1000ba36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_1000ba52
#define str_1000ba52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_1000ba5d
#define str_1000ba5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_1000ba6d
#define str_1000ba6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x232U)))
#undef str_1000ba7d
#define str_1000ba7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x242U)))
#undef str_1000ba8a
#define str_1000ba8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24fU)))
#undef str_1000baa0
#define str_1000baa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_1000bab6
#define str_1000bab6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_1000bacc
#define str_1000bacc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_1000bae2
#define str_1000bae2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a7U)))
#undef str_1000bafb
#define str_1000bafb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c0U)))
#undef str_1000bb13
#define str_1000bb13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_1000bb20
#define str_1000bb20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_1000bb31
#define str_1000bb31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_1000bb45
#define str_1000bb45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_1000bb55
#define str_1000bb55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_1000bb6c
#define str_1000bb6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#undef str_1000bb7f
#define str_1000bb7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_1000bb89
#define str_1000bb89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34eU)))
#undef str_1000bb9c
#define str_1000bb9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#undef str_1000bbb3
#define str_1000bbb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
#undef str_1000bbbf
#define str_1000bbbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1000bbcb
#define str_1000bbcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x390U)))
#undef str_1000bbd8
#define str_1000bbd8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39dU)))
#undef str_1000bbe2
#define str_1000bbe2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a7U)))
#undef str_1000bbf6
#define str_1000bbf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_1000bc05
#define str_1000bc05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
#undef str_1000bc18
#define str_1000bc18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ddU)))
#undef str_1000bc2a
#define str_1000bc2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_1000bc40
#define str_1000bc40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x405U)))
#undef str_1000bc4a
#define str_1000bc4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_1000bc56
#define str_1000bc56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41bU)))
#undef str_1000bc6b
#define str_1000bc6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_1000bc77
#define str_1000bc77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_1000bc82
#define str_1000bc82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_1000bc8c
#define str_1000bc8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_1000bca1
#define str_1000bca1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x466U)))
#undef str_1000bcb2
#define str_1000bcb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x477U)))
#undef str_1000bcbe
#define str_1000bcbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x483U)))
#undef str_1000bcca
#define str_1000bcca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48fU)))
#undef str_1000bcd6
#define str_1000bcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
#undef str_1000bce5
#define str_1000bce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aaU)))
#undef str_1000bcef
#define str_1000bcef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_1000bcfd
#define str_1000bcfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
#undef str_1000bd0e
#define str_1000bd0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_1000bd1a
#define str_1000bd1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#undef str_1000bd26
#define str_1000bd26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ebU)))
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
 * Address: 0x10003d30
 */

void recovered_10003d30(int *param_1,undefined1 *param_2,long param_3)

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
joined_r0x10003fb4:
    if (param_3 != 0) {
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        uVar13 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar10 = str_1000b9bd;
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
LAB_10003ffc:
    uVar4 = 0;
    uVar23 = uVar4;
    if (!bVar26) {
LAB_100042bf:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_10006861;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar4 = uVar1 & 0xffffffc0;
      if (uVar4 == 0x1000) {
        uVar4 = uVar1 - 0x1000;
      }
      else {
        if (uVar4 != 0x1040) goto LAB_10006861;
        uVar4 = uVar1 - 0x1040;
      }
      if (uVar4 == 0xffffffff) goto LAB_10006861;
      if (param_3 == 0) {
        if (uVar4 != 0) goto LAB_10004439;
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
                        goto LAB_100043fe;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_100043fe:
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
LAB_10004439:
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
                    if (4 < local_6c) goto LAB_1000492d;
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
                        goto LAB_10004911;
                      }
                    }
                    else {
                      iVar24 = (*(code *)(ulong)(uint)local_40[0x2e])();
                      if (iVar24 != 0) {
                        uVar13 = local_50;
LAB_10004911:
                        local_e8 = uVar13 + local_68;
                        local_c8 = local_6c;
                        goto LAB_100049f6;
                      }
                    }
                  }
                }
LAB_1000492d:
                if (((((local_78 == 2) && (local_68 = (ulong)local_74, !CARRY4(local_70,local_74)))
                     && (uVar13 = (ulong)local_6c, local_6c < 6)) &&
                    ((local_70 != 0 &&
                     ((uVar13 == 0 ||
                      ((*(uint *)(param_2 + (ulong)(local_6c - 1) * 4 + 0x14) & 7) != 4)))))) &&
                   (uVar23 = *(uint *)(param_2 + uVar13 * 4 + 0x14),
                   (uVar23 & 1) == 0 && uVar23 != 0)) {
                  iVar24 = 0;
                  if ((uVar23 & 6) == 4) {
                    if (4 < local_6c) goto LAB_1000497c;
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
                          goto LAB_10004aed;
                        }
                      }
                      else {
                        iVar24 = (*(code *)(ulong)(uint)local_40[0x2e])();
                        if (iVar24 != 0) {
LAB_10004aed:
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
                          goto LAB_100049f6;
                        }
                      }
                    }
                  }
                }
LAB_1000497c:
                if ((local_78 == 3) &&
                   (uVar6 = recovered_1000b030(local_40,(long)param_2,local_6c,local_74,local_70,
                                               &local_50), (int)uVar6 != 0)) {
                  local_d8 = local_50;
                  local_c0 = local_6c;
                }
                else if ((local_78 == 4) &&
                        (uVar6 = recovered_1000b030(local_40,(long)param_2,local_6c,local_74,
                                                    local_70,&local_50), (int)uVar6 != 0)) {
                  local_d0 = local_50;
                  local_bc = local_6c;
                }
              }
LAB_100049f6:
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
LAB_100090fe:
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
              if (local_e8 == 0) goto LAB_100090fe;
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
              if (local_e8 == 0) goto LAB_100090fe;
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
              if (local_e8 == 0) goto LAB_100090fe;
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
                goto LAB_100090fe;
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
                            goto LAB_100093a2;
                            (*(code *)(ulong)(uint)local_40[0x1a])(uVar11,1);
                          }
                          else {
                            (*(code *)(ulong)(uint)local_40[0x2f])(uVar11,1);
                            uVar23 = local_54;
                          }
                          uVar4 = uVar23;
                        }
LAB_100093a2:
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
                                  goto LAB_100095a6;
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
LAB_100095a6:
            if (param_3 == 0) {
              if (local_b4 != 0) goto LAB_10009759;
LAB_100097d5:
              if (local_c8 == 0) goto LAB_100099f1;
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
                pcVar10 = str_1000ba5d;
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
                          goto LAB_100096bc;
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_100096bc:
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
                pcVar10 = str_1000ba52;
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
LAB_10009759:
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
LAB_1000979d:
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
                    if (uVar11 == 0) goto LAB_10009803;
                    goto LAB_1000979d;
                  }
                  uVar13 = uVar11;
                } while (uVar11 != 0);
                goto LAB_100097d5;
              }
              uVar11 = 0;
              do {
                pcVar10 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar10 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
LAB_10009803:
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
                pcVar10 = str_1000ba6d;
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
LAB_1000994f:
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
                  pcVar10 = str_1000ba7d;
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
                goto LAB_100099f1;
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
LAB_100098dd:
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
                if (uVar11 == 0) goto LAB_1000994f;
                goto LAB_100098dd;
              }
              uVar13 = uVar11;
            } while (uVar11 != 0);
LAB_100099f1:
            iVar24 = (uint)(local_e8 >> 0x20 != 0) * 8 + 8;
LAB_100099ff:
            do {
              uVar16 = (uint)(local_e8 >> ((char)iVar24 * '\x04' - 4U & 0x3f)) & 0xf;
              uVar23 = (uint)(byte)((char)uVar16 + 0x37);
              if (uVar16 < 10) {
                uVar23 = uVar16 + 0x30;
              }
              PF_PART2(local_50, 0) = (ushort)(byte)local_50;
              if (param_3 == 0) goto LAB_100099f7;
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
              pcVar10 = str_1000ba8a;
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
LAB_10009b24:
            iVar24 = 8;
LAB_10009b2f:
            uVar23 = local_b0 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10009c1a;
              goto LAB_10009b2f;
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
            if (iVar24 != 0) goto LAB_10009b2f;
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
              pcVar10 = str_1000baa0;
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
LAB_10009c1a:
            iVar24 = 8;
LAB_10009c25:
            uVar23 = local_ac >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10009d0a;
              goto LAB_10009c25;
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
            if (iVar24 != 0) goto LAB_10009c25;
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
              pcVar10 = str_1000bab6;
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
LAB_10009d0a:
            iVar24 = 8;
LAB_10009d15:
            uVar23 = local_a8 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10009dfa;
              goto LAB_10009d15;
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
            if (iVar24 != 0) goto LAB_10009d15;
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
              pcVar10 = str_1000bacc;
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
LAB_10009dfa:
            iVar24 = 8;
LAB_10009e05:
            uVar23 = local_a4 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10009eea;
              goto LAB_10009e05;
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
            if (iVar24 != 0) goto LAB_10009e05;
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
              pcVar10 = str_1000bae2;
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
LAB_10009eea:
            iVar24 = 8;
LAB_10009ef5:
            uVar23 = local_a0 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto LAB_10009fda;
              goto LAB_10009ef5;
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
            if (iVar24 != 0) goto LAB_10009ef5;
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
              pcVar10 = str_1000bafb;
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
LAB_10009fda:
            iVar24 = 8;
LAB_10009fe5:
            uVar23 = local_9c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) {
              iVar24 = iVar24 + -1;
              if (iVar24 == 0) goto code_r0x1000a031;
              goto LAB_10009fe5;
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
            if (iVar24 != 0) goto LAB_10009fe5;
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
              pcVar10 = str_1000bb13;
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
LAB_1000a0da:
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
                  if (uVar11 == 0) goto LAB_1000a155;
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
              pcVar10 = str_1000bb20;
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
LAB_1000a219:
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
                  if (uVar11 == 0) goto LAB_1000a295;
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
              pcVar10 = str_1000bb31;
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
LAB_1000a366:
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
LAB_1000a42a:
                if (local_c4 != 0) goto LAB_1000a4a7;
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
                  pcVar10 = str_1000bb45;
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
LAB_1000a4a7:
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
                      if (uVar11 == 0) goto LAB_1000a5d9;
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
                  pcVar10 = str_1000bb55;
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
LAB_1000a5d9:
              iVar24 = 8;
LAB_1000a5e4:
              do {
                uVar23 = local_b8 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar23;
                cVar9 = cVar12 + '7';
                if (uVar23 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000a62d;
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
                pcVar10 = str_1000bb6c;
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
LAB_1000a6ec:
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
                  pcVar10 = str_1000bb7f;
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
LAB_1000a833:
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
                  pcVar10 = str_1000bb89;
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
LAB_1000a970:
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
            if (param_3 == 0) goto LAB_1000abf1;
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
              pcVar10 = str_1000bb9c;
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
            if (local_80 != 0) goto LAB_1000abf9;
            uVar11 = 0;
            do {
              pcVar10 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar10 != '\0');
            if (uVar11 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
            }
LAB_1000aab3:
            uVar11 = 0;
            do {
              uVar13 = uVar11;
              uVar11 = uVar13 + 1;
            } while (*(char *)(param_3 + uVar13) != '\0');
            pcVar10 = str_1000bbbf;
            if ((local_9c & 8) == 0) {
              pcVar10 = str_1000bbcb;
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
              pcVar14 = str_1000bbb3;
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
            goto LAB_1000ac85;
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
            pcVar10 = str_1000ba52;
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
LAB_1000543a:
        local_50 = local_50 & 0xffffffff00000000;
        local_38 = 0;
        if ((((*(uint *)(param_2 + uVar11 * 4 + 0x14) & 1) == 0) || ((char)uVar13 != '\0')) ||
           ((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)))) goto LAB_10005420;
        if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10005420;
        uVar16 = *(uint *)(param_2 + uVar11 * 4 + 0x14) & 0xfffffffc;
        uVar4 = uVar16 + 0x12;
        local_68 = CONCAT71(PF_PART7(local_68, 1),bVar26);
        iVar24 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar4,1,&local_50);
        piVar21 = local_40;
        uVar13 = (ulong)local_34;
        bVar3 = (byte)local_68;
        uVar8 = local_68 & 0xff;
        param_1 = local_40;
        if (iVar24 == 0) goto LAB_10005420;
        if (param_3 == 0) {
          if (uVar11 == 0) goto LAB_100078d4;
          goto LAB_10007356;
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
          pcVar10 = str_1000ba5d;
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
          pcVar10 = str_1000bbd8;
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
          pcVar10 = str_1000bbe2;
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
LAB_10007852:
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
            pcVar10 = str_1000bbf6;
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
LAB_10007356:
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
              if (uVar11 == 0) goto LAB_10007852;
            }
            uVar7 = uVar11;
          } while (uVar11 != 0);
        }
LAB_100078d4:
        uVar23 = local_54;
        uVar4 = uVar4 & 0xffff;
        iVar24 = 8;
LAB_100078df:
        uVar18 = uVar16 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar18;
        cVar9 = cVar12 + '7';
        if (uVar18 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 == 0) {
          iVar24 = iVar24 + -1;
          if (iVar24 == 0) goto LAB_100079c4;
          goto LAB_100078df;
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
        if (iVar24 != 0) goto LAB_100078df;
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
          pcVar10 = str_1000bc05;
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
LAB_100079c4:
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
LAB_10007a33:
            if (uVar16 < 0x58) goto LAB_10008e86;
          }
          else if ((code *)(ulong)(uint)piVar21[0x16] != (code *)0x0) {
            (*(code *)(ulong)(uint)piVar21[0x16])(uVar4,1,0);
            uVar8 = (ulong)(uint)bVar3;
            if (*local_40 != 0x54584b57) goto LAB_10008e86;
            uVar16 = local_40[2];
            piVar21 = local_40;
            if (0x5b < uVar16) {
              if ((code *)(ulong)(uint)local_40[0x16] == (code *)0x0) goto LAB_10007aa5;
              (*(code *)(ulong)(uint)local_40[0x16])(uVar4,1,3);
              uVar8 = (ulong)(uint)bVar3;
              if (*local_40 != 0x54584b57) goto LAB_10008e86;
              uVar16 = local_40[2];
              piVar21 = local_40;
            }
            goto LAB_10007a33;
          }
LAB_10007aa5:
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
                pcVar10 = str_1000bc18;
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
LAB_10008e86:
        if (param_3 != 0 && (uVar8 & 1) == 0) goto LAB_100053af;
        uVar23 = (uint)uVar8 & 1 | uVar23;
        goto LAB_10006861;
      }
LAB_100053a6:
      uVar23 = local_54;
      if (param_3 != 0) {
LAB_100053af:
        uVar11 = 0;
        do {
          uVar13 = uVar11;
          uVar11 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000ba36;
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
      goto LAB_10006861;
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
      goto joined_r0x10003fb4;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar11 = 0;
      goto joined_r0x10003fb4;
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
              pcVar10 = str_1000ba06;
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
LAB_10005cf8:
          do {
            uVar4 = (uint)local_e8 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar4;
            cVar9 = cVar12 + '7';
            if (uVar4 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_10005d4d;
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
            pcVar10 = str_1000ba17;
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
LAB_10005de4:
          iVar5 = 8;
LAB_10005def:
          uVar4 = (uint)local_50 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar4;
          cVar9 = cVar12 + '7';
          if (uVar4 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_10005ece;
            goto LAB_10005def;
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
          if (iVar5 != 0) goto LAB_10005def;
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
            pcVar10 = str_1000ba27;
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
LAB_10005ece:
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
          goto joined_r0x1000604b;
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
          pcVar10 = str_1000b9ed;
          do {
            pcVar10 = pcVar10 + 1;
            *(char *)(param_3 + uVar13) = cVar12;
            uVar13 = uVar13 + 1;
            cVar12 = *pcVar10;
            if (cVar12 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        goto LAB_100042a8;
      }
LAB_100044bd:
      uVar11 = 0;
      goto LAB_10003ffc;
    }
    if (param_3 == 0) goto LAB_100044bd;
    uVar11 = 0;
    do {
      uVar13 = uVar11;
      uVar11 = uVar13 + 1;
    } while (*(char *)(param_3 + uVar13) != '\0');
    if (uVar13 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000b9d5;
      do {
        pcVar10 = pcVar10 + 1;
        *(char *)(param_3 + uVar13) = cVar12;
        uVar13 = uVar13 + 1;
        cVar12 = *pcVar10;
        if (cVar12 == '\0') break;
      } while (uVar13 < 0x3ff);
    }
LAB_100042a8:
    uVar4 = 0;
    *(undefined1 *)(param_3 + uVar13) = 0;
joined_r0x1000604b:
    uVar11 = 0;
    uVar23 = uVar4;
    if (iVar24 != -1) goto LAB_100042bf;
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
    goto LAB_10006861;
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
          if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_100056b4;
          iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar23,0,0x1000);
          uVar11 = (ulong)local_34;
          if (iVar24 == 0) goto LAB_1000404f;
LAB_100056ea:
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
                            goto LAB_10007529;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_10007529:
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
                 ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007b98;
              (*(code *)(ulong)(uint)param_1[0x1a])(local_e8,4,&local_38);
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(local_e8,4,&local_38);
            }
            uVar11 = (ulong)local_34;
          }
LAB_10007b98:
          if (local_e8 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar13 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                   )) goto LAB_10007c08;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
              }
              uVar11 = (ulong)local_34;
            }
LAB_10007c08:
            if (local_e8 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar13 = local_e8 + 0xc;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar13 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x6c ||
                      ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10008175;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_5c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_5c);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10008175:
              if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
                uVar13 = local_e8 + 0x10;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100086c3;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_60);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_60);
                }
                uVar11 = (ulong)local_34;
              }
            }
          }
LAB_100086c3:
          if ((-1 < (int)local_58) && (local_e8 != 0)) {
            if (*param_1 == 0x54584b57) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0))
              {
                if ((uVar13 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))
                   )) goto LAB_1000873c;
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar13,4,local_58 | 0x80000000);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x30])(uVar13,4);
              }
              uVar11 = (ulong)local_34;
            }
LAB_1000873c:
            if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
              uVar13 = local_e8 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100087a8;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
              }
              uVar11 = (ulong)local_34;
            }
          }
LAB_100087a8:
          if (param_3 == 0) goto LAB_1000888a;
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
                        goto LAB_10008861;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_10008861:
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
LAB_1000888a:
          iVar24 = 8;
LAB_10008898:
          do {
            uVar23 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar23;
            cVar9 = cVar12 + '7';
            if (uVar23 < 10) {
              cVar9 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_100088ed;
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
                        goto LAB_100089ae;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_100089ae:
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
LAB_100089d8:
          iVar24 = 8;
LAB_100089e3:
          uVar23 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar23;
          cVar9 = cVar12 + '7';
          if (uVar23 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar24 = iVar24 + -1;
            if (iVar24 == 0) goto LAB_10008ac4;
            goto LAB_100089e3;
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
          if (iVar24 != 0) goto LAB_100089e3;
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
            pcVar10 = str_1000bc40;
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
LAB_10008ac4:
          iVar24 = 8;
LAB_10008acf:
          uVar23 = local_5c >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar23;
          cVar9 = cVar12 + '7';
          if (uVar23 < 10) {
            cVar9 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar24 = iVar24 + -1;
            if (iVar24 == 0) goto LAB_10008bb4;
            goto LAB_10008acf;
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
          if (iVar24 != 0) goto LAB_10008acf;
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
            pcVar10 = str_1000bc4a;
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
LAB_10008bb4:
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
          goto LAB_100040c0;
        }
        if (0x67 < (uint)param_1[2]) {
LAB_100056b4:
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar23,0,0x1000);
            uVar11 = (ulong)local_34;
            if (iVar24 != 0) {
              local_e8 = local_50 & 0xffffffff;
              goto LAB_100056ea;
            }
          }
        }
      }
    }
LAB_1000404f:
    if (param_3 == 0) goto LAB_100040af;
    uVar13 = 0;
    do {
      uVar8 = uVar13;
      uVar13 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (uVar8 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000bc2a;
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
LAB_100040af:
    uVar23 = 0;
  }
LAB_100040c0:
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
                goto LAB_10004bb0;
              }
            }
          }
          else {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000);
            uVar11 = (ulong)local_34;
            if (iVar24 != 0) {
LAB_10004bb0:
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
                              goto LAB_10006fa3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10006fa3:
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
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007662;
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e8,4,&local_38);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(local_e8,4,&local_38);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10007662:
              if ((local_e8 != 0) && (*param_1 == 0x54584b57)) {
                uVar13 = local_e8 + 8;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007759;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
                }
                uVar11 = (ulong)local_34;
              }
LAB_10007759:
              if (((local_58 & 1) == 0) && (local_e8 != 0)) {
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x70 ||
                        ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_1000807f;
                    (*(code *)(ulong)(uint)param_1[0x1b])(uVar13,4,local_58 | 1);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar13,4);
                  }
                  uVar11 = (ulong)local_34;
                }
LAB_1000807f:
                if (local_e8 == 0) goto LAB_100082b9;
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_100082b9;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
                  }
                  uVar11 = (ulong)local_34;
                  goto LAB_100082b9;
                }
              }
              else {
LAB_100082b9:
                if (*param_1 == 0x54584b57) {
                  uVar13 = local_e8 + 0xe;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar13 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10008320;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,2,&local_5c);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,2,&local_5c);
                  }
                  uVar11 = (ulong)local_34;
                }
              }
LAB_10008320:
              if (param_3 == 0) goto LAB_10008402;
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
                            goto LAB_100083d9;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_100083d9:
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
LAB_10008402:
              iVar24 = 8;
LAB_10008410:
              do {
                uVar16 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar16;
                cVar9 = cVar12 + '7';
                if (uVar16 < 10) {
                  cVar9 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000845d;
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
                            goto LAB_1000851e;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000851e:
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
LAB_10008548:
              iVar24 = 8;
LAB_10008553:
              uVar16 = local_58 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar16;
              cVar9 = cVar12 + '7';
              if (uVar16 < 10) {
                cVar9 = cVar12 + '0';
              }
              if (param_3 == 0) {
                iVar24 = iVar24 + -1;
                if (iVar24 == 0) goto LAB_10008634;
                goto LAB_10008553;
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
              if (iVar24 != 0) goto LAB_10008553;
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
                pcVar10 = str_1000bc6b;
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
LAB_10008634:
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
              goto LAB_10004c2e;
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
        pcVar10 = str_1000bc56;
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
LAB_10004c2e:
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
LAB_10004d72:
        local_68 = CONCAT44(PF_PART4(local_68, 4),uVar23);
        uVar13 = 0;
LAB_10004d8d:
        local_60 = 0;
        uVar23 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
        if (((((uVar23 & 1) == 0) || ((short)(uVar23 & 0xfffffffc) == 0 || (char)uVar11 != '\0')) ||
            (*param_1 != 0x54584b57)) ||
           (((uint)param_1[2] < 0x58 || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0))))
        goto LAB_10004d80;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x15])(uVar23 & 0xfffc,2,&local_60);
        uVar4 = local_54;
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10004d80;
        if (param_3 == 0) {
          if (uVar13 != 0) goto LAB_1000572f;
          goto LAB_100059be;
        }
        uVar8 = 0;
        do {
          uVar7 = uVar8;
          uVar8 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000bc77;
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
LAB_10004e5a:
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
                    goto LAB_10005995;
                  }
                }
              }
            }
          }
          else {
LAB_10005995:
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
LAB_1000572f:
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
              if (uVar13 == 0) goto LAB_10004e5a;
            }
            uVar7 = uVar13;
          } while (uVar13 != 0);
        }
LAB_100059be:
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
            if (iVar24 == 0) goto LAB_10005abc;
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
          pcVar10 = str_1000bc82;
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
LAB_10005abc:
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
        goto LAB_1000804d;
      }
      iVar24 = 0;
      if ((uVar16 & 6) == 4) {
        iVar24 = *(int *)(param_2 + 0x18);
      }
      uVar16 = uVar16 & 0xfffffff0;
      if (uVar16 == 0 && iVar24 == 0) goto LAB_10004d72;
      local_50 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10004d72;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar24 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_10004d72;
        iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar16,0,0x1000);
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10004d72;
        local_50 = local_e8 & 0xffffffff;
      }
      else {
        iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000);
        uVar11 = (ulong)local_34;
        if (iVar24 == 0) goto LAB_10004d72;
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
                      goto LAB_10007063;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10007063:
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
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100076dd;
          (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
        }
        uVar11 = (ulong)local_34;
      }
LAB_100076dd:
      if (local_50 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar13 = local_50 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar13 >> 0x20 != 0) ||
               (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
            goto LAB_100077e3;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
          }
          uVar11 = (ulong)local_34;
        }
LAB_100077e3:
        if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
          uVar13 = local_50 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
               ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10007c87;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_5c);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_5c);
          }
          uVar11 = (ulong)local_34;
        }
      }
LAB_10007c87:
      if (param_3 == 0) goto LAB_10007d69;
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
                    goto LAB_10007d40;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10007d40:
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
LAB_10007d69:
      iVar24 = 8;
LAB_10007d77:
      do {
        uVar16 = local_38 >> ((char)iVar24 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar16;
        cVar9 = cVar12 + '7';
        if (uVar16 < 10) {
          cVar9 = cVar12 + '0';
        }
        if (param_3 == 0) goto LAB_10007dcd;
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
                    goto LAB_10007e8e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10007e8e:
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
LAB_10007eb8:
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
          if (iVar24 == 0) goto LAB_10007ff8;
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
                    goto LAB_10007fce;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10007fce:
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
LAB_10007ff8:
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
LAB_1000804d:
      uVar16 = 1;
      goto LAB_10004ece;
    }
  }
  goto LAB_10004ed1;
LAB_10005d4d:
  iVar5 = iVar5 + -1;
  if (iVar5 == 0) goto LAB_10005de4;
  goto LAB_10005cf8;
LAB_100099f7:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_10009b24;
  goto LAB_100099ff;
code_r0x1000a031:
  if (local_98 != 0) goto LAB_1000a0da;
LAB_1000a155:
  if (local_94 != 0) goto LAB_1000a219;
LAB_1000a295:
  if (local_90 != 0) goto LAB_1000a366;
  if (local_88 != 0) goto LAB_1000a42a;
  uVar4 = local_54;
  if (local_d8 != 0) {
    iVar24 = (uint)(local_d8 >> 0x20 != 0) * 8 + 8;
    goto LAB_1000a833;
  }
  if (local_d0 != 0) {
    iVar24 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_1000a970;
  }
LAB_1000abf1:
  if (local_80 != 0) {
LAB_1000abf9:
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
        if (uVar11 == 0) goto LAB_1000aab3;
      }
      uVar13 = uVar11;
    } while (uVar11 != 0);
  }
LAB_1000ac85:
  uVar23 = local_54 | 1;
  goto LAB_10006861;
LAB_1000a62d:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_1000a6ec;
  goto LAB_1000a5e4;
LAB_10005420:
  bVar26 = uVar11 < 5;
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_100053a6;
  goto LAB_1000543a;
LAB_100088ed:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_100089d8;
  goto LAB_10008898;
LAB_1000845d:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_10008548;
  goto LAB_10008410;
LAB_10004d80:
  uVar13 = uVar13 + 1;
  if (uVar13 == 6) goto LAB_10004e7c;
  goto LAB_10004d8d;
LAB_10007dcd:
  iVar24 = iVar24 + -1;
  if (iVar24 == 0) goto LAB_10007eb8;
  goto LAB_10007d77;
LAB_1000513d:
  uVar4 = local_54;
  goto LAB_100062ee;
LAB_10004e7c:
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
      pcVar10 = str_1000bc8c;
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
LAB_10004ece:
    uVar23 = uVar23 | uVar16;
  }
LAB_10004ed1:
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  if (param_2[8] == '\x02') {
    uVar16 = 1;
    uVar13 = 0;
    local_68 = CONCAT44(PF_PART4(local_68, 4),uVar23);
LAB_10004f2a:
    if ((uVar13 != 0) && ((*(uint *)(param_2 + uVar13 * 4 + 0x10) & 7) == 4)) {
LAB_10005030:
      uVar4 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
      if ((uVar4 & 1) != 0) {
        if (((!((short)(uVar4 & 0xfffffffc) == 0 || (char)uVar11 != '\0')) &&
            (*param_1 == 0x54584b57)) && (0x57 < (uint)param_1[2])) {
          if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
            iVar24 = (*(code *)(ulong)(uint)param_1[0x15])(uVar4 & 0xfffc,2,&local_38);
            uVar11 = (ulong)local_34;
            uVar23 = (uint)local_68;
            if (iVar24 == 0) goto LAB_10004f10;
            if (param_3 == 0) {
              if (uVar13 == 0) goto LAB_10005535;
              goto LAB_10005156;
            }
            uVar8 = 0;
            do {
              uVar7 = uVar8;
              uVar8 = uVar7 + 1;
            } while (*(char *)(param_3 + uVar7) != '\0');
            if (uVar7 + 1 < 0x400) {
              cVar12 = ' ';
              pcVar10 = str_1000bcd6;
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
LAB_1000511b:
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
                pcVar10 = str_1000bce5;
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
LAB_10005156:
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
                  if (uVar13 == 0) goto LAB_1000511b;
                }
                uVar7 = uVar13;
              } while (uVar13 != 0);
            }
LAB_10005535:
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
                if (iVar24 == 0) goto LAB_10005624;
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
              pcVar10 = str_1000bcef;
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
LAB_10005624:
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
            goto LAB_100062dd;
          }
        }
      }
LAB_10004f10:
      bVar26 = uVar13 < 5;
      uVar13 = uVar13 + 1;
      uVar16 = (uint)bVar26;
      if (uVar13 == 6) goto LAB_1000513d;
      goto LAB_10004f2a;
    }
    uVar4 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
    if ((uVar4 & 1) != 0 || uVar4 == 0) goto LAB_10005030;
    iVar24 = 0;
    if ((uVar4 & 6) == 4) {
      if (uVar13 == 5) goto LAB_10005030;
      iVar24 = *(int *)(param_2 + uVar13 * 4 + 0x18);
    }
    uVar4 = uVar4 & 0xfffffff0;
    if (uVar4 == 0 && iVar24 == 0) goto LAB_10005030;
    local_50 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10005030;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar24 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar24 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,0x1000);
          uVar11 = (ulong)local_34;
          uVar23 = (uint)local_68;
          if (iVar24 != 0) {
            local_50 = local_e8 & 0xffffffff;
            goto LAB_100057c4;
          }
        }
      }
      goto LAB_10005030;
    }
    iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000);
    uVar11 = (ulong)local_34;
    uVar23 = (uint)local_68;
    if (iVar24 == 0) goto LAB_10005030;
LAB_100057c4:
    if (param_3 == 0) {
      if (uVar13 != 0) goto LAB_10005872;
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      goto LAB_10005b96;
    }
    uVar8 = 0;
    do {
      uVar7 = uVar8;
      uVar8 = uVar7 + 1;
    } while (*(char *)(param_3 + uVar7) != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar10 = str_1000bca1;
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
LAB_1000582f:
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
        pcVar10 = str_1000bcb2;
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
LAB_10005872:
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
          if (uVar13 == 0) goto LAB_1000582f;
        }
        uVar7 = uVar13;
      } while (uVar13 != 0);
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
    }
LAB_10005b96:
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
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006087;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_50,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
      }
      uVar11 = (ulong)local_34;
      uVar23 = (uint)local_68;
    }
LAB_10006087:
    if ((local_50 != 0) && (*param_1 == 0x54584b57)) {
      uVar13 = local_50 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar13 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100060fd;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar13,4,&local_58);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar13,4,&local_58);
      }
      uVar11 = (ulong)local_34;
      uVar23 = (uint)local_68;
    }
LAB_100060fd:
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
        pcVar10 = str_1000bcbe;
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
        if (iVar24 == 0) goto LAB_10006284;
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
      pcVar10 = str_1000bcca;
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
LAB_10006284:
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
LAB_100062dd:
    uVar23 = uVar23 | uVar16;
  }
LAB_100062ee:
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
      if (uVar16 == 0 && iVar24 == 0) goto LAB_100063fd;
      local_50 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100063fd;
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
            if (param_3 == 0) goto LAB_10006c50;
            goto LAB_10006555;
          }
        }
        goto LAB_100063fd;
      }
      iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar16,iVar24,0x1000,&local_50);
      uVar11 = (ulong)local_34;
      if (iVar24 == 0) goto LAB_100063fd;
      if (param_3 == 0) {
LAB_10006c50:
        bVar26 = local_50 >> 0x20 != 0;
        iVar24 = (uint)bVar26 * 8 + 8;
        bVar2 = true;
        bVar25 = true;
      }
      else {
        uVar13 = 0;
        bVar26 = true;
        bVar25 = true;
LAB_10006555:
        uVar8 = 0;
        do {
          uVar7 = uVar8;
          uVar8 = uVar7 + 1;
        } while (*(char *)(param_3 + uVar7) != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar10 = str_1000bcfd;
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
LAB_10006af2:
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
LAB_10006b3c:
          do {
            uVar13 = uVar7 - 1;
            if (bVar26) {
              uVar7 = uVar13;
              if (uVar13 == 0) {
                bVar26 = local_50 >> 0x20 != 0;
                iVar24 = (uint)bVar26 * 8 + 8;
                bVar2 = true;
                goto LAB_10006c69;
              }
              goto LAB_10006b3c;
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
          pcVar10 = str_1000bd0e;
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
LAB_10006c69:
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
              goto LAB_10006d6d;
            }
          }
        }
        else {
          local_40 = param_1;
          iVar24 = (*(code *)(ulong)(uint)param_1[0x2f])(local_50,4,&local_38);
LAB_10006d6d:
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
                pcVar10 = str_1000bd1a;
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
LAB_100063fd:
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
                        goto LAB_10006546;
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
LAB_10006546:
                    uVar4 = local_54;
                    param_2 = local_f0;
                    if (param_3 != 0) {
                      bVar26 = false;
                      goto LAB_10006555;
                    }
                    bVar26 = true;
                    goto LAB_10006af2;
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
  if (uVar23 != 0) goto LAB_10006861;
  local_38 = 0;
  uVar4 = *(uint *)(param_2 + 0x14);
  if ((uVar4 & 1) == 0 && uVar4 != 0) {
    iVar24 = 0;
    if ((uVar4 & 6) == 4) {
      iVar24 = *(int *)(param_2 + 0x18);
    }
    uVar4 = uVar4 & 0xfffffff0;
    if (uVar4 == 0 && iVar24 == 0) goto LAB_100066f3;
    local_50 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100066f3;
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
          if (param_3 == 0) goto LAB_10006da8;
          goto LAB_100068f1;
        }
      }
      goto LAB_100066f3;
    }
    iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000,&local_50);
    uVar11 = (ulong)local_34;
    if (iVar24 == 0) goto LAB_100066f3;
    if (param_3 == 0) {
LAB_10006da8:
      bVar26 = local_50 >> 0x20 != 0;
      iVar24 = (uint)bVar26 * 8 + 8;
      bVar2 = true;
      bVar25 = true;
    }
    else {
      uVar13 = 0;
      bVar26 = true;
      bVar25 = true;
LAB_100068f1:
      uVar11 = 0;
      do {
        uVar8 = uVar11;
        uVar11 = uVar8 + 1;
      } while (*(char *)(param_3 + uVar8) != '\0');
      if (uVar8 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar10 = str_1000bd26;
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
LAB_10006970:
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
LAB_100069ba:
        do {
          uVar11 = uVar8 - 1;
          if (bVar26) {
            uVar8 = uVar11;
            if (uVar11 == 0) {
              bVar26 = local_50 >> 0x20 != 0;
              iVar24 = (uint)bVar26 * 8 + 8;
              bVar2 = true;
              goto LAB_10006dc1;
            }
            goto LAB_100069ba;
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
              goto LAB_10006aba;
            }
          }
        }
      }
      else {
LAB_10006aba:
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
LAB_10006dc1:
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
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006859;
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
                          goto LAB_10008cc8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_10008cc8:
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
LAB_100066f3:
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
                  goto joined_r0x10006849;
                }
              }
            }
            else {
              iVar24 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar24,0x1000,&local_50);
              uVar11 = (ulong)local_34;
              if (iVar24 != 0) {
joined_r0x10006849:
                if (param_3 != 0) {
                  bVar26 = false;
                  goto LAB_100068f1;
                }
                bVar26 = true;
                goto LAB_10006970;
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
LAB_10006859:
  uVar23 = (uint)bVar25;
LAB_10006861:
  pcVar10 = str_1000b9ad;
  if (uVar23 == 0) {
    pcVar10 = str_1000b8f7;
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

#undef str_1000b8f7
#undef str_1000b9ad
#undef str_1000b9bd
#undef str_1000b9d5
#undef str_1000b9ed
#undef str_1000ba06
#undef str_1000ba17
#undef str_1000ba27
#undef str_1000ba36
#undef str_1000ba52
#undef str_1000ba5d
#undef str_1000ba6d
#undef str_1000ba7d
#undef str_1000ba8a
#undef str_1000baa0
#undef str_1000bab6
#undef str_1000bacc
#undef str_1000bae2
#undef str_1000bafb
#undef str_1000bb13
#undef str_1000bb20
#undef str_1000bb31
#undef str_1000bb45
#undef str_1000bb55
#undef str_1000bb6c
#undef str_1000bb7f
#undef str_1000bb89
#undef str_1000bb9c
#undef str_1000bbb3
#undef str_1000bbbf
#undef str_1000bbcb
#undef str_1000bbd8
#undef str_1000bbe2
#undef str_1000bbf6
#undef str_1000bc05
#undef str_1000bc18
#undef str_1000bc2a
#undef str_1000bc40
#undef str_1000bc4a
#undef str_1000bc56
#undef str_1000bc6b
#undef str_1000bc77
#undef str_1000bc82
#undef str_1000bc8c
#undef str_1000bca1
#undef str_1000bcb2
#undef str_1000bcbe
#undef str_1000bcca
#undef str_1000bcd6
#undef str_1000bce5
#undef str_1000bcef
#undef str_1000bcfd
#undef str_1000bd0e
#undef str_1000bd1a
#undef str_1000bd26
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

#undef str_1000bec7
#define str_1000bec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68cU)))
#undef str_1000bed2
#define str_1000bed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x697U)))
#undef str_1000bee1
#define str_1000bee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a6U)))
#undef str_1000bef2
#define str_1000bef2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#undef str_1000bf05
#define str_1000bf05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6caU)))
#undef str_1000bf18
#define str_1000bf18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ddU)))
#undef str_1000bf28
#define str_1000bf28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6edU)))
#undef str_1000bf37
#define str_1000bf37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_1000bf46
#define str_1000bf46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70bU)))
#undef str_1000bf57
#define str_1000bf57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71cU)))
#undef str_1000bf62
#define str_1000bf62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x727U)))
#undef str_1000bf6e
#define str_1000bf6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x733U)))
#undef str_1000bf78
#define str_1000bf78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73dU)))
#undef str_1000bf81
#define str_1000bf81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x746U)))
#undef str_1000bf8c
#define str_1000bf8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x751U)))
#undef str_1000bf95
#define str_1000bf95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75aU)))
#undef str_1000bf9d
#define str_1000bf9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x762U)))
#undef str_1000bfa6
#define str_1000bfa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76bU)))
#undef str_1000bfad
#define str_1000bfad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x772U)))
#undef str_1000bfc0
#define str_1000bfc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_1000bfd3
#define str_1000bfd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x798U)))
#undef str_1000bfe6
#define str_1000bfe6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7abU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aca0
 */

char * recovered_1000aca0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_1000bec7;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000bf81;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_1000bf78;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_1000adb6;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_1000adb6:
        return str_1000bfa6;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000bf9d;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_1000bf8c;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000bf62;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000ae5a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000bf6e;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000bf95;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000bed2;
      case 0x1001:
      case 0x1042:
        return str_1000bee1;
      case 0x1002:
      case 0x1045:
        return str_1000bef2;
      case 0x1003:
      case 0x1043:
        return str_1000bf05;
      case 0x1004:
      case 0x1048:
        return str_1000bf18;
      case 0x1005:
      case 0x1044:
        return str_1000bf28;
      default:
        return str_1000bf57;
      case 0x1050:
        return str_1000bf37;
      case 0x1052:
        return str_1000bf46;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000bfd3;
    case 2:
      return str_1000bfc0;
    case 3:
      return str_1000bfad;
    case 4:
      pcVar2 = str_1000bfe6;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000ae5a:
        pcVar2 = recovered_1000b7d0((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_1000bec7
#undef str_1000bed2
#undef str_1000bee1
#undef str_1000bef2
#undef str_1000bf05
#undef str_1000bf18
#undef str_1000bf28
#undef str_1000bf37
#undef str_1000bf46
#undef str_1000bf57
#undef str_1000bf62
#undef str_1000bf6e
#undef str_1000bf78
#undef str_1000bf81
#undef str_1000bf8c
#undef str_1000bf95
#undef str_1000bf9d
#undef str_1000bfa6
#undef str_1000bfad
#undef str_1000bfc0
#undef str_1000bfd3
#undef str_1000bfe6

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b030
 */

undefined8
recovered_1000b030(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

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
 * Address: 0x1000b190
 */

void recovered_1000b190(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0 && param_4 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b1db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000b200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1a])(uVar1 & 0xffffffff,1,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b210
 */

void recovered_1000b210(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000b271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,1,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b280
 */

void recovered_1000b280(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000b2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,4,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2f0
 */

void recovered_1000b2f0(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000b351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,2,param_4);
      return;
    }
  }
  return;
}


#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b360
 */

bool recovered_1000b360(int *param_1,long param_2,ulong param_3,uint param_4,uint param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;

  local_34 = 0;
  uVar2 = (param_3 & 0xffffffff) + param_2;
  uVar3 = 0;
  bVar4 = true;
  do {
    if (param_2 == 0) {
      if (param_1 != (int *)0x0) goto LAB_1000b440;
    }
    else if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x6c || uVar2 >> 0x20 != 0) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000b440;
        iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar2,1,&local_34);
      }
      else {
        iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1,&local_34);
      }
      if ((iVar1 != 0) && ((local_34 & param_4) == param_5)) {
        return bVar4;
      }
LAB_1000b440:
      if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(100);
      }
    }
    bVar4 = uVar3 < 99;
    uVar3 = uVar3 + 1;
    if (uVar3 == 100) {
      return bVar4;
    }
  } while( true );
}

#undef local_34

#undef DAT_1000e000
#define DAT_1000e000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c5U)))
#undef DAT_1000e001
#define DAT_1000e001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c6U)))
#undef DAT_1000e002
#define DAT_1000e002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c7U)))
#undef DAT_1000e003
#define DAT_1000e003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c8U)))
#undef DAT_1000e400
#define DAT_1000e400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bc5U)))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b490
 */

undefined8
recovered_1000b490(int *param_1,long param_2,uint param_3,uint *param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 param_8,undefined4 *param_9)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;

  if ((param_9 != (undefined4 *)0x0) &&
     (local_34 = 0, param_5 != (uint *)0x0 && param_4 != (uint *)0x0)) {
    uVar5 = 0;
    if (*param_4 + 1 < param_3) {
      uVar5 = *param_4 + 1;
    }
    uVar3 = uVar5 * 4;
    (&DAT_1000e000)[uVar3] = param_8;
    (&DAT_1000e001)[uVar3] = 0;
    (&DAT_1000e002)[uVar3] = (byte)(param_7 << 4) | 0xf;
    (&DAT_1000e003)[uVar3] =
         (byte)(((param_7 & 0xf0) << 0x14) >> 0x18) | (byte)((uint)(param_6 << 0x1c) >> 0x18);
    if (param_1 == (int *)0x0) {
      bVar7 = param_2 == 0;
    }
    else {
      if ((((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
          ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) &&
         ((((*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000e000,0x400), *param_1 == 0x54584b57 &&
           (0x77 < (uint)param_1[2])) && ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)))) {
        (*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000e400,0x800);
      }
      if (param_2 == 0) {
        bVar7 = true;
      }
      else {
        if (*param_1 == 0x54584b57) {
          uVar2 = param_2 + 0x48;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2,2,uVar5);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,2,uVar5);
          }
        }
        bVar7 = false;
      }
    }
    uVar2 = param_2 + 0x58;
    uVar3 = 0;
    bVar6 = true;
    do {
      if (param_1 == (int *)0x0) {
        uVar4 = local_34 & 0xff;
        if ((local_34 & 0xff) != (uint)(byte)*param_5) goto LAB_1000b747;
      }
      else {
        if (((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_1000e400,0x800);
        }
        if ((!bVar7) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((0x6b < (uint)param_1[2] && uVar2 >> 0x20 == 0) &&
               ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0x1a])(uVar2,2,&local_34);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2,&local_34);
          }
        }
        uVar4 = local_34 & 0xff;
        if (uVar4 != (byte)*param_5) {
LAB_1000b747:
          uVar3 = (uint)(byte)local_34;
          uVar2 = (ulong)(uVar3 * 8);
          if (param_3 <= uVar3) {
            uVar2 = 0;
          }
          uVar1 = *(undefined4 *)(&DAT_1000e400 + uVar2);
          *param_4 = uVar5;
          *param_5 = uVar3;
          if (bVar6) {
            *param_9 = uVar1;
            return 1;
          }
          return 0;
        }
        if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
          local_34 = uVar4;
          (*(code *)(ulong)(uint)param_1[0xc])();
          uVar4 = local_34;
        }
      }
      local_34 = uVar4;
      bVar6 = uVar3 < 99;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 100);
  }
  return 0;
}

#undef DAT_1000e000
#undef DAT_1000e001
#undef DAT_1000e002
#undef DAT_1000e003
#undef DAT_1000e400
#undef local_34

#undef DAT_1000bffc
#define DAT_1000bffc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c1U)))
#undef DAT_1000c001
#define DAT_1000c001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c6U)))
#undef DAT_1000c006
#define DAT_1000c006 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cbU)))
#undef DAT_1000c00b
#define DAT_1000c00b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d0U)))
#undef str_1000c010
#define str_1000c010 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d5U)))
#undef str_1000c01b
#define str_1000c01b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e0U)))
#undef str_1000c024
#define str_1000c024 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7d0
 */

char * recovered_1000b7d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_1000bffc;
    }
    if (param_1 == 0x10) {
      return &DAT_1000c001;
    }
    if (param_1 == 0x20) {
      return &DAT_1000c006;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_1000c00b;
    }
    if (param_1 == 0x80) {
      return str_1000c010;
    }
    if (param_1 == 0xfe) {
      return str_1000c01b;
    }
  }
  return str_1000c024;
}

#undef DAT_1000bffc
#undef DAT_1000c001
#undef DAT_1000c006
#undef DAT_1000c00b
#undef str_1000c010
#undef str_1000c01b
#undef str_1000c024

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
