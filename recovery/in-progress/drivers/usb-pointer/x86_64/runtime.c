/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a000
#define DAT_1000a000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000a000;
}

#undef DAT_1000a000

#undef DAT_1000b000
#define DAT_1000b000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000430
 */

undefined8 recovered_10000430(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (DAT_1000b000 != 0) {
    if (param_1 != 0 && (code *)(ulong)*(uint *)(DAT_1000b000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10000454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)(DAT_1000b000 + 0x24))(param_1);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000b000

#undef DAT_1000b000
#define DAT_1000b000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000460
 */

undefined8 recovered_10000460(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_1000b000 == (int *)0x0) || (*DAT_1000b000 != 0x54584b57)) ||
      ((uint)DAT_1000b000[2] < 0xac)) || ((code *)(ulong)(uint)DAT_1000b000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000048d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_1000b000[0x2a])();
  return uVar1;
}

#undef DAT_1000b000

#undef DAT_1000b000
#define DAT_1000b000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a15U)))
#undef str_100095eb
#define str_100095eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_100095ff
#define str_100095ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14U)))
#undef str_1000961e
#define str_1000961e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33U)))
#undef str_1000962e
#define str_1000962e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43U)))
#undef str_1000963f
#define str_1000963f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54U)))
#undef str_10009653
#define str_10009653 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68U)))
#undef str_10009678
#define str_10009678 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dU)))
#define local_4c8 (*(undefined2 *)(frame + 24))
#define local_98 (*(undefined2 *)(frame + 1096))
#define local_96 (*(undefined1 (*)[10])(frame + 1098))
#define local_8c (*(char *)(frame + 1108))
#define cStack_4c9 (*(char *)(frame + 23))
#define local_38 (*(uint *)(frame + 1192))
#define local_34 (*(uint *)(frame + 1196))
#define auStack_4c6 (*(undefined1 (*)[1024])(frame + 26))
#define abStack_c6 (*(byte (*)[44])(frame + 1050))
#define acStack_9a (*(char (*)[2])(frame + 1094))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004a0
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_100004a0(int *api)

{
  unsigned char frame[1280] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined1 uVar11;
  char cVar12;
  ulong uVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  ulong in_R9;
  uint uVar16;
  bool bVar17;

  local_34 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar4 = api[2];
  if (uVar4 < 0x10) {
    return 0;
  }
  PF_PART1(local_98, 0) = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (acStack_9a[uVar5 + 2] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar12 = 'q';
    pcVar9 = str_100095eb;
    do {
      pcVar9 = pcVar9 + 1;
      acStack_9a[uVar5 + 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  acStack_9a[uVar5 + 2] = '\0';
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (acStack_9a[uVar5 + 2] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar12 = ':';
    pcVar9 = str_10009678;
    do {
      pcVar9 = pcVar9 + 1;
      acStack_9a[uVar5 + 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  acStack_9a[uVar5 + 2] = '\0';
  if (api[1] == 0) {
    uVar10 = 0;
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 + 1;
    } while (acStack_9a[uVar5 + 2] != '\0');
    if (uVar5 + 1 < 0x60) {
      (acStack_9a + uVar5 + 2)[0] = '0';
      (acStack_9a + uVar5 + 2)[1] = '\0';
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    uVar16 = api[1];
    do {
      uVar5 = uVar10;
      in_R9 = (ulong)(uVar16 % 10) | 0x30;
      abStack_c6[uVar5 + 3] = (byte)in_R9;
      uVar10 = uVar5 + 1;
      if (8 < uVar10) break;
      bVar17 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar17);
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar13 = uVar6;
        uVar6 = uVar13 + 1;
      } while (acStack_9a[uVar13 + 2] != '\0');
      uVar6 = uVar10;
      if (uVar13 + 1 < 0x60) {
        acStack_9a[uVar13 + 2] = abStack_c6[uVar5 + 3];
        local_96[uVar13 - 1] = 0;
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
      } while (acStack_9a[uVar5 + 2] != '\0');
      if (uVar5 + 1 < 0x60) {
        acStack_9a[uVar5 + 2] = abStack_c6[uVar6 + 1];
        local_96[uVar5 - 1] = 0;
      }
      pbVar1 = abStack_c6 + uVar6;
      uVar6 = uVar6 - 2;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (acStack_9a[uVar5 + 2] != '\0');
      uVar10 = uVar6;
      if (uVar5 + 1 < 0x60) {
        acStack_9a[uVar5 + 2] = *pbVar1;
        local_96[uVar5 - 1] = 0;
      }
    }
  }
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (local_96[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x60) {
    local_96[uVar5 - 1] = 0x20;
    bVar17 = uVar10 != 0x5e;
    uVar10 = uVar5 + 2;
    if (bVar17) {
      uVar10 = uVar5 + 3;
      local_96[uVar5] = 0x72;
      if (uVar10 < 0x5f) {
        uVar10 = uVar5 + 4;
        *(undefined1 *)((long)&local_98 + uVar5 + 3) = 0x65;
        if (uVar10 < 0x5f) {
          uVar10 = uVar5 + 5;
          local_96[uVar5 + 2] = 0x61;
          if (uVar10 < 0x5f) {
            uVar10 = uVar5 + 6;
            local_96[uVar5 + 3] = 100;
            if (uVar10 < 0x5f) {
              local_96[uVar5 + 4] = 0x79;
              uVar10 = uVar5 + 7;
            }
          }
        }
      }
    }
  }
  acStack_9a[uVar10 + 2] = '\0';
  DAT_1000b000 = api;
  if ((0x2b < uVar4) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_98);
  }
  PF_PART1(local_4c8, 0) = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar12 = 't';
    pcVar9 = str_100095ff;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_4c6[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    auStack_4c6[uVar5 - 1] = 0x66;
    bVar17 = uVar10 != 0x3fe;
    uVar10 = uVar5 + 2;
    if (bVar17) {
      uVar10 = uVar5 + 3;
      *(undefined1 *)((long)&local_4c8 + uVar5 + 2) = 0x6c;
      if (uVar10 < 0x3ff) {
        uVar10 = uVar5 + 4;
        auStack_4c6[uVar5 + 1] = 0x61;
        if (uVar10 < 0x3ff) {
          uVar10 = uVar5 + 5;
          auStack_4c6[uVar5 + 2] = 0x67;
          if (uVar10 < 0x3ff) {
            auStack_4c6[uVar5 + 3] = 0x73;
            uVar10 = uVar5 + 6;
          }
        }
      }
    }
  }
  auStack_4c6[uVar10 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x33;
  }
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar12 = 'p';
    pcVar9 = str_1000961e;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_4c6[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    auStack_4c6[uVar5 - 1] = 0x66;
    bVar17 = uVar10 != 0x3fe;
    uVar10 = uVar5 + 2;
    if (bVar17) {
      uVar10 = uVar5 + 3;
      *(undefined1 *)((long)&local_4c8 + uVar5 + 2) = 0x61;
      if (uVar10 < 0x3ff) {
        uVar10 = uVar5 + 4;
        auStack_4c6[uVar5 + 1] = 0x6c;
        if (uVar10 < 0x3ff) {
          uVar10 = uVar5 + 5;
          auStack_4c6[uVar5 + 2] = 0x73;
          if (uVar10 < 0x3ff) {
            auStack_4c6[uVar5 + 3] = 0x65;
            uVar10 = uVar5 + 6;
          }
        }
      }
    }
  }
  auStack_4c6[uVar10 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x20;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar12 = 'k';
    pcVar9 = str_1000962e;
    do {
      pcVar9 = pcVar9 + 1;
      auStack_4c6[uVar5 - 2] = cVar12;
      uVar5 = uVar5 + 1;
      cVar12 = *pcVar9;
      if (cVar12 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 2] != '\0');
  if (uVar10 < 0x400) {
    auStack_4c6[uVar5 - 2] = 0x3d;
    uVar5 = uVar10;
  }
  auStack_4c6[uVar5 - 2] = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar5 = uVar10;
    uVar10 = uVar5 + 1;
  } while (auStack_4c6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    auStack_4c6[uVar5 - 1] = 0x66;
    bVar17 = uVar10 != 0x3fe;
    uVar10 = uVar5 + 2;
    if (bVar17) {
      uVar10 = uVar5 + 3;
      *(undefined1 *)((long)&local_4c8 + uVar5 + 2) = 0x61;
      if (uVar10 < 0x3ff) {
        uVar10 = uVar5 + 4;
        auStack_4c6[uVar5 + 1] = 0x6c;
        if (uVar10 < 0x3ff) {
          uVar10 = uVar5 + 5;
          auStack_4c6[uVar5 + 2] = 0x73;
          if (uVar10 < 0x3ff) {
            auStack_4c6[uVar5 + 3] = 0x65;
            uVar10 = uVar5 + 6;
          }
        }
      }
    }
  }
  auStack_4c6[uVar10 - 2] = 0;
  iVar3 = 0;
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    iVar2 = (*(code *)(ulong)(uint)api[3])(str_10009678 + 0xf,str_1000963f,&local_4c8);
    iVar3 = 0;
    if (iVar2 != 0) {
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        uVar4 = 0;
        pbVar1 = abStack_c6 + 2;
        do {
          uVar16 = uVar4 & 0xff;
          iVar3 = 0;
          local_38 = uVar4;
          do {
            uVar11 = (undefined1)iVar3;
            uVar8 = 0;
            puVar14 = &local_98;
            uVar7 = recovered_10002650(api,uVar16,uVar11,0,(undefined1 *)puVar14);
            if (((int)uVar7 != 0) &&
               (recovered_10001190(api,(byte *)&local_98,(int *)&local_34,uVar8,puVar14,in_R9),
               local_8c < '\0')) {
              uVar8 = 1;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,1,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 2;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,2,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 3;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,3,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 4;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,4,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 5;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,5,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 6;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,6,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
              uVar8 = 7;
              pbVar15 = pbVar1;
              uVar7 = recovered_10002650(api,uVar16,uVar11,7,pbVar1);
              if ((int)uVar7 != 0) {
                recovered_10001190(api,pbVar1,(int *)&local_34,uVar8,pbVar15,in_R9);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          uVar4 = local_38 + 1;
        } while (uVar4 != 8);
      }
      uVar4 = local_34;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_4c6[uVar5 - 2] != '\0');
      if (uVar10 < 0x400) {
        auStack_4c6[uVar5 - 2] = 0x20;
        uVar5 = uVar10;
      }
      auStack_4c6[uVar5 - 2] = 0;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_4c6[uVar5 - 2] != '\0');
      if (uVar5 + 1 < 0x400) {
        cVar12 = 'p';
        pcVar9 = str_10009653;
        do {
          pcVar9 = pcVar9 + 1;
          auStack_4c6[uVar5 - 2] = cVar12;
          uVar5 = uVar5 + 1;
          cVar12 = *pcVar9;
          if (cVar12 == '\0') break;
        } while (uVar5 < 0x3ff);
      }
      auStack_4c6[uVar5 - 2] = 0;
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        uVar10 = uVar5 + 1;
      } while (auStack_4c6[uVar5 - 2] != '\0');
      if (uVar10 < 0x400) {
        auStack_4c6[uVar5 - 2] = 0x3d;
        uVar5 = uVar10;
      }
      auStack_4c6[uVar5 - 2] = 0;
      if (uVar4 == 0) {
        uVar10 = 0;
        do {
          uVar5 = uVar10;
          uVar10 = uVar5 + 1;
        } while (auStack_4c6[uVar5 - 2] != '\0');
        if (uVar5 + 1 < 0x400) {
          *(undefined2 *)(auStack_4c6 + (uVar5 - 2)) = 0x30;
        }
      }
      else {
        uVar10 = 0xffffffffffffffff;
        do {
          uVar5 = uVar10;
          local_96[uVar5 - 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
          uVar10 = uVar5 + 1;
          if (8 < uVar10) break;
          bVar17 = 9 < uVar4;
          uVar4 = uVar4 / 10;
        } while (bVar17);
        if ((uVar10 & 1) == 0) {
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (auStack_4c6[uVar13 - 2] != '\0');
          uVar6 = uVar10;
          if (uVar13 + 1 < 0x400) {
            auStack_4c6[uVar13 - 2] = local_96[uVar5 - 1];
            auStack_4c6[uVar13 - 1] = 0;
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
          } while (auStack_4c6[uVar5 - 2] != '\0');
          if (uVar5 + 1 < 0x400) {
            auStack_4c6[uVar5 - 2] = acStack_9a[uVar6 + 1];
            auStack_4c6[uVar5 - 1] = 0;
          }
          pcVar9 = acStack_9a + uVar6;
          uVar6 = uVar6 - 2;
          uVar10 = 0;
          do {
            uVar5 = uVar10;
            uVar10 = uVar5 + 1;
          } while (auStack_4c6[uVar5 - 2] != '\0');
          uVar10 = uVar6;
          if (uVar5 + 1 < 0x400) {
            auStack_4c6[uVar5 - 2] = *pcVar9;
            auStack_4c6[uVar5 - 1] = 0;
          }
        }
      }
      iVar3 = 1;
      if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
        (*(code *)(ulong)(uint)api[3])(str_10009678 + 0xf,str_1000963f,&local_4c8);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

#undef DAT_1000b000
#undef str_100095eb
#undef str_100095ff
#undef str_1000961e
#undef str_1000962e
#undef str_1000963f
#undef str_10009653
#undef str_10009678
#undef local_4c8
#undef local_98
#undef local_96
#undef local_8c
#undef cStack_4c9
#undef local_38
#undef local_34
#undef auStack_4c6
#undef abStack_c6
#undef acStack_9a

#undef str_10009688
#define str_10009688 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_100096aa
#define str_100096aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_10009a44
#define str_10009a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#define local_a8 (*(undefined2 *)(frame + 2072))
#define acStack_8a9 (*(char (*)[1024])(frame + 23))
#define cStack_4a9 (*(char *)(frame + 1047))
#define cStack_a9 (*(char *)(frame + 2071))
#define abStack_3c (*(byte (*)[12])(frame + 2180))
#define local_4a8 (*(undefined2 *)(frame + 1048))
#define local_4a6 (*(undefined1 (*)[1021])(frame + 1050))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001190
 */

void recovered_10001190(int *param_1,byte *param_2,int *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  byte bVar8;
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

  if ((((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
      (*(short *)(param_2 + 6) != 0x1052)) && (*(short *)(param_2 + 6) != 0x1052)) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8a9[1] = '\0';
  pcVar4 = (char *)0x0;
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while ((acStack_8a9 + 1)[(long)pcVar3] != '\0');
  if (pcVar4 < (char *)0x400) {
    cVar7 = 'r';
    pcVar4 = str_10009688 + 1;
    do {
      (acStack_8a9 + 1)[(long)pcVar3] = cVar7;
      pcVar3 = pcVar3 + 1;
      cVar7 = *pcVar4;
      if (cVar7 == '\0') break;
      pcVar4 = pcVar4 + 1;
    } while (pcVar3 < (char *)0x3ff);
  }
  (acStack_8a9 + 1)[(long)pcVar3] = '\0';
  recovered_100028d0(param_1,param_2,(long)(acStack_8a9 + 1),pcVar4,param_5,param_6);
  pcVar4 = recovered_10009090((long)param_2);
  if (param_2 == (byte *)0x0) {
    return;
  }
  PF_PART1(local_a8, 0) = 0;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar7 = '/';
    pcVar3 = str_100096aa;
    do {
      pcVar3 = pcVar3 + 1;
      local_4a6[uVar5 + 0x3fe] = cVar7;
      uVar5 = uVar5 + 1;
      cVar7 = *pcVar3;
      if (cVar7 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  local_4a6[uVar5 + 0x3fe] = 0;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = 0x2f;
    uVar5 = uVar17;
  }
  local_4a6[uVar5 + 0x3fe] = 0;
  bVar8 = *param_2;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  bVar13 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar13 = bVar8 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = bVar13;
    local_4a6[uVar5 + 0x3ff] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  cVar7 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar7 = bVar8 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = cVar7;
    local_4a6[uVar5 + 0x3ff] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = 0x3a;
    uVar5 = uVar17;
  }
  local_4a6[uVar5 + 0x3fe] = 0;
  bVar8 = param_2[1];
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  bVar12 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar12 = bVar8 >> 4 | 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = bVar12;
    local_4a6[uVar5 + 0x3ff] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  cVar14 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar14 = bVar8 + 0x30;
  }
  if (uVar5 + 1 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = cVar14;
    local_4a6[uVar5 + 0x3ff] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 + 0x3fe] != '\0');
  if (uVar17 < 0x60) {
    local_4a6[uVar5 + 0x3fe] = 0x2e;
    uVar5 = uVar17;
  }
  local_4a6[uVar5 + 0x3fe] = 0;
  bVar8 = param_2[2];
  if (bVar8 == 0) {
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      uVar17 = uVar5 + 1;
    } while (local_4a6[uVar5 + 0x3fe] != '\0');
    if (uVar5 + 1 < 0x60) {
      *(undefined2 *)(local_4a6 + uVar5 + 0x3fe) = 0x30;
    }
  }
  else {
    uVar5 = (ulong)(uint)bVar8;
    uVar17 = 0xffffffffffffffff;
    do {
      uVar6 = uVar17;
      uVar10 = (uint)uVar5;
      abStack_3c[uVar6 + 3] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      uVar17 = uVar6 + 1;
      if (8 < uVar17) break;
      uVar5 = uVar5 / 10;
    } while (9 < uVar10);
    if ((uVar17 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar16 = uVar5;
        uVar5 = uVar16 + 1;
      } while (local_4a6[uVar16 + 0x3fe] != '\0');
      uVar5 = uVar17;
      if (uVar16 + 1 < 0x60) {
        local_4a6[uVar16 + 0x3fe] = abStack_3c[uVar6 + 3];
        local_4a6[uVar16 + 0x3ff] = 0;
      }
    }
    else {
      uVar5 = uVar6 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar6 = uVar17;
        uVar17 = uVar6 + 1;
      } while (local_4a6[uVar6 + 0x3fe] != '\0');
      if (uVar6 + 1 < 0x60) {
        local_4a6[uVar6 + 0x3fe] = abStack_3c[uVar5 + 1];
        local_4a6[uVar6 + 0x3ff] = 0;
      }
      pbVar1 = abStack_3c + uVar5;
      uVar5 = uVar5 - 2;
      uVar17 = 0;
      do {
        uVar6 = uVar17;
        uVar17 = uVar6 + 1;
      } while (local_4a6[uVar6 + 0x3fe] != '\0');
      uVar17 = uVar5;
      if (uVar6 + 1 < 0x60) {
        local_4a6[uVar6 + 0x3fe] = *pbVar1;
        local_4a6[uVar6 + 0x3ff] = 0;
      }
    }
  }
  PF_PART1(local_4a8, 0) = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    *(undefined1 *)((long)&local_4a8 + uVar17) = 0x70;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar5 + 2;
    if (bVar19) {
      uVar17 = uVar5 + 3;
      local_4a6[uVar5] = 99;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar5 + 4;
        local_4a6[uVar5 + 1] = 0x69;
        if (uVar17 < 0x3ff) {
          local_4a6[uVar5 + 2] = 0x3d;
          uVar17 = uVar5 + 5;
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = cVar7;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = ':';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = bVar12;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = '.';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  if (bVar8 == 0) {
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      uVar17 = uVar5 + 1;
    } while (acStack_8a9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      (acStack_8a9 + uVar5 + 0x401)[0] = '0';
      (acStack_8a9 + uVar5 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    uVar10 = (uint)bVar8;
    do {
      uVar5 = uVar17;
      abStack_3c[uVar5 + 3] = (byte)(uVar10 % 10) | 0x30;
      uVar17 = uVar5 + 1;
      if (8 < uVar17) break;
      bVar19 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar19);
    if ((uVar17 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar16 = uVar6;
        uVar6 = uVar16 + 1;
      } while (acStack_8a9[uVar16 + 0x401] != '\0');
      uVar6 = uVar17;
      if (uVar16 + 1 < 0x400) {
        acStack_8a9[uVar16 + 0x401] = abStack_3c[uVar5 + 3];
        local_4a6[uVar16 - 1] = 0;
      }
    }
    else {
      uVar6 = uVar5 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (acStack_8a9[uVar5 + 0x401] != '\0');
      if (uVar5 + 1 < 0x400) {
        acStack_8a9[uVar5 + 0x401] = abStack_3c[uVar6 + 1];
        local_4a6[uVar5 - 1] = 0;
      }
      pbVar1 = abStack_3c + uVar6;
      uVar6 = uVar6 - 2;
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (acStack_8a9[uVar5 + 0x401] != '\0');
      uVar17 = uVar6;
      if (uVar5 + 1 < 0x400) {
        acStack_8a9[uVar5 + 0x401] = *pbVar1;
        local_4a6[uVar5 - 1] = 0;
      }
    }
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    local_4a6[uVar5 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar5 + 2;
    if (bVar19) {
      uVar17 = uVar5 + 3;
      local_4a6[uVar5] = 0x76;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar5 + 4;
        local_4a6[uVar5 + 1] = 0x65;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar5 + 5;
          local_4a6[uVar5 + 2] = 0x6e;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar5 + 6;
            *(undefined1 *)((long)&local_4a8 + uVar5 + 5) = 100;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar5 + 7;
              local_4a6[uVar5 + 4] = 0x6f;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar5 + 8;
                local_4a6[uVar5 + 5] = 0x72;
                if (uVar17 < 0x3ff) {
                  local_4a6[uVar5 + 6] = 0x3d;
                  uVar17 = uVar5 + 9;
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
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar8 = (byte)(uVar2 >> 8);
    bVar13 = (bVar8 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar9 = uVar2 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)uVar9;
    cVar14 = cVar7 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar9 = uVar2 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)uVar9;
    cVar14 = cVar7 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)(uVar2 & 0xf);
    cVar14 = cVar7 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    local_4a6[uVar5 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar5 + 2;
    if (bVar19) {
      uVar17 = uVar5 + 3;
      local_4a6[uVar5] = 100;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar5 + 4;
        local_4a6[uVar5 + 1] = 0x65;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar5 + 5;
          local_4a6[uVar5 + 2] = 0x76;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar5 + 6;
            *(undefined1 *)((long)&local_4a8 + uVar5 + 5) = 0x69;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar5 + 7;
              local_4a6[uVar5 + 4] = 99;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar5 + 8;
                local_4a6[uVar5 + 5] = 0x65;
                if (uVar17 < 0x3ff) {
                  local_4a6[uVar5 + 6] = 0x3d;
                  uVar17 = uVar5 + 9;
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
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar8 = (byte)(uVar2 >> 8);
    bVar13 = (bVar8 >> 4) + 0x37;
    if (uVar2 < 0xa000) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar9 = uVar2 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)uVar9;
    cVar14 = cVar7 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar9 = uVar2 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)uVar9;
    cVar14 = cVar7 + '7';
    if (uVar9 < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = (char)(uVar2 & 0xf);
    cVar14 = cVar7 + '7';
    if ((uVar2 & 0xf) < 10) {
      cVar14 = cVar7 + '0';
    }
    acStack_8a9[uVar5 + 0x401] = cVar14;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    local_4a6[uVar5 - 1] = 0x20;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar5 + 2;
    if (bVar19) {
      uVar17 = uVar5 + 3;
      local_4a6[uVar5] = 99;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar5 + 4;
        local_4a6[uVar5 + 1] = 0x6c;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar5 + 5;
          *(undefined1 *)((long)&local_4a8 + uVar5 + 4) = 0x61;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar5 + 6;
            local_4a6[uVar5 + 3] = 0x73;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar5 + 7;
              local_4a6[uVar5 + 4] = 0x73;
              if (uVar17 < 0x3ff) {
                local_4a6[uVar5 + 5] = 0x3d;
                uVar17 = uVar5 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8a9[uVar17 + 0x401] = '\0';
  bVar8 = param_2[8];
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar13 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar7 = bVar8 + 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = cVar7;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = '.';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  bVar8 = param_2[9];
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar13 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar7 = bVar8 + 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = cVar7;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = '.';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  bVar8 = param_2[10];
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar13 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar7 = bVar8 + 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = cVar7;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = ' ';
    pcVar3 = str_10009a44;
    do {
      pcVar3 = pcVar3 + 1;
      acStack_8a9[uVar5 + 0x401] = cVar7;
      uVar5 = uVar5 + 1;
      cVar7 = *pcVar3;
      if (cVar7 == '\0') break;
    } while (uVar5 < 0x3ff);
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  bVar8 = param_2[0xb];
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    bVar13 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar13 = bVar8 >> 4 | 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = bVar13;
    local_4a6[uVar5 - 1] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar5 + 1 < 0x400) {
    cVar7 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar7 = bVar8 + 0x30;
    }
    acStack_8a9[uVar5 + 0x401] = cVar7;
    local_4a6[uVar5 - 1] = 0;
  }
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar17 = 0;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = ' ';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  uVar17 = 0xffffffffffffffff;
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (local_4a6[uVar5 - 1] != '\0');
  if (uVar5 + 2 < 0x400) {
    local_4a6[uVar5 - 1] = 99;
    bVar19 = uVar17 != 0x3fe;
    uVar17 = uVar5 + 2;
    if (bVar19) {
      uVar17 = uVar5 + 3;
      local_4a6[uVar5] = 0x6f;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar5 + 4;
        local_4a6[uVar5 + 1] = 0x6d;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar5 + 5;
          *(undefined1 *)((long)&local_4a8 + uVar5 + 4) = 0x6d;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar5 + 6;
            local_4a6[uVar5 + 3] = 0x61;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar5 + 7;
              local_4a6[uVar5 + 4] = 0x6e;
              if (uVar17 < 0x3ff) {
                local_4a6[uVar5 + 5] = 100;
                uVar17 = uVar5 + 8;
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
    uVar5 = uVar17;
    uVar17 = uVar5 + 1;
  } while (acStack_8a9[uVar5 + 0x401] != '\0');
  if (uVar17 < 0x400) {
    acStack_8a9[uVar5 + 0x401] = '=';
    uVar5 = uVar17;
  }
  acStack_8a9[uVar5 + 0x401] = '\0';
  iVar11 = 8;
  do {
    uVar15 = uVar10 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
    cVar7 = (char)uVar15;
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      uVar17 = uVar5 + 1;
    } while (acStack_8a9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar14 = cVar7 + '7';
      if (uVar15 < 10) {
        cVar14 = cVar7 + '0';
      }
      acStack_8a9[uVar5 + 0x401] = cVar14;
      local_4a6[uVar5 - 1] = 0;
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar17 = 0;
  do {
    uVar10 = *(uint *)(param_2 + uVar17 * 4 + 0x14);
    if (uVar10 != 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
      } while (local_4a6[uVar6 - 1] != '\0');
      if (uVar6 + 2 < 0x400) {
        local_4a6[uVar6 - 1] = 0x20;
        bVar19 = uVar5 != 0x3fe;
        uVar5 = uVar6 + 2;
        if (bVar19) {
          uVar5 = uVar6 + 3;
          local_4a6[uVar6] = 0x62;
          if (uVar5 < 0x3ff) {
            uVar5 = uVar6 + 4;
            local_4a6[uVar6 + 1] = 0x61;
            if (uVar5 < 0x3ff) {
              local_4a6[uVar6 + 2] = 0x72;
              uVar5 = uVar6 + 5;
            }
          }
        }
      }
      acStack_8a9[uVar5 + 0x401] = '\0';
      if (uVar17 == 0) {
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (acStack_8a9[uVar6 + 0x401] != '\0');
        if (uVar6 + 1 < 0x400) {
          (acStack_8a9 + uVar6 + 0x401)[0] = '0';
          (acStack_8a9 + uVar6 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar6 = 0xffffffffffffffff;
        uVar5 = uVar17;
        do {
          uVar16 = uVar6;
          uVar6 = uVar5 & 0xffffffff;
          uVar15 = (uint)uVar5;
          uVar5 = uVar6 / 10;
          abStack_3c[uVar16 + 3] = (char)uVar6 + (char)uVar5 * -10 | 0x30;
          uVar6 = uVar16 + 1;
          if (8 < uVar6) break;
        } while (9 < uVar15);
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
          do {
            uVar18 = uVar5;
            uVar5 = uVar18 + 1;
          } while (acStack_8a9[uVar18 + 0x401] != '\0');
          uVar5 = uVar6;
          if (uVar18 + 1 < 0x400) {
            acStack_8a9[uVar18 + 0x401] = abStack_3c[uVar16 + 3];
            local_4a6[uVar18 - 1] = 0;
          }
        }
        else {
          uVar5 = uVar16 + 2;
        }
        while (uVar6 != 0) {
          uVar6 = 0;
          do {
            uVar16 = uVar6;
            uVar6 = uVar16 + 1;
          } while (acStack_8a9[uVar16 + 0x401] != '\0');
          if (uVar16 + 1 < 0x400) {
            acStack_8a9[uVar16 + 0x401] = abStack_3c[uVar5 + 1];
            local_4a6[uVar16 - 1] = 0;
          }
          pbVar1 = abStack_3c + uVar5;
          uVar5 = uVar5 - 2;
          uVar6 = 0;
          do {
            uVar16 = uVar6;
            uVar6 = uVar16 + 1;
          } while (acStack_8a9[uVar16 + 0x401] != '\0');
          uVar6 = uVar5;
          if (uVar16 + 1 < 0x400) {
            acStack_8a9[uVar16 + 0x401] = *pbVar1;
            local_4a6[uVar16 - 1] = 0;
          }
        }
      }
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
      } while (acStack_8a9[uVar6 + 0x401] != '\0');
      if (uVar5 < 0x400) {
        acStack_8a9[uVar6 + 0x401] = '=';
        uVar6 = uVar5;
      }
      acStack_8a9[uVar6 + 0x401] = '\0';
      iVar11 = 8;
      do {
        uVar15 = uVar10 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
        cVar7 = (char)uVar15;
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (acStack_8a9[uVar6 + 0x401] != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar14 = cVar7 + '7';
          if (uVar15 < 10) {
            cVar14 = cVar7 + '0';
          }
          acStack_8a9[uVar6 + 0x401] = cVar14;
          local_4a6[uVar6 - 1] = 0;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if (acStack_8a9[1] != '\0') {
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      uVar17 = uVar5 + 1;
    } while (acStack_8a9[uVar5 + 0x401] != '\0');
    if (uVar17 < 0x400) {
      acStack_8a9[uVar5 + 0x401] = ' ';
      uVar5 = uVar17;
    }
    acStack_8a9[uVar5 + 0x401] = '\0';
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      uVar17 = uVar5 + 1;
    } while (acStack_8a9[uVar5 + 0x401] != '\0');
    if (uVar5 + 1 < 0x400) {
      pcVar3 = acStack_8a9 + 2;
      cVar7 = acStack_8a9[1];
      do {
        acStack_8a9[uVar5 + 0x401] = cVar7;
        uVar5 = uVar5 + 1;
        cVar7 = *pcVar3;
        if (cVar7 == '\0') break;
        pcVar3 = pcVar3 + 1;
      } while (uVar5 < 0x3ff);
    }
    acStack_8a9[uVar5 + 0x401] = '\0';
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_a8,pcVar4,&local_4a8);
  }
  return;
}

#undef str_10009688
#undef str_100096aa
#undef str_10009a44
#undef local_a8
#undef acStack_8a9
#undef cStack_4a9
#undef cStack_a9
#undef abStack_3c
#undef local_4a8
#undef local_4a6

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002650
 */

undefined8
recovered_10002650(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef str_100096b7
#define str_100096b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
#undef str_100096c7
#define str_100096c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdcU)))
#undef str_100096db
#define str_100096db (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_100096f3
#define str_100096f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
#undef str_1000970b
#define str_1000970b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10009724
#define str_10009724 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_10009735
#define str_10009735 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_10009745
#define str_10009745 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#undef str_10009754
#define str_10009754 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x169U)))
#undef str_10009770
#define str_10009770 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x185U)))
#undef str_1000977b
#define str_1000977b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_1000978b
#define str_1000978b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_1000979b
#define str_1000979b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b0U)))
#undef str_100097a8
#define str_100097a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_100097be
#define str_100097be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_100097d4
#define str_100097d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_100097ea
#define str_100097ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ffU)))
#undef str_10009800
#define str_10009800 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_10009819
#define str_10009819 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#undef str_10009831
#define str_10009831 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x246U)))
#undef str_1000983e
#define str_1000983e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#undef str_1000984f
#define str_1000984f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_10009863
#define str_10009863 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x278U)))
#undef str_10009873
#define str_10009873 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
#undef str_1000988a
#define str_1000988a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_1000989d
#define str_1000989d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_100098a7
#define str_100098a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_100098ba
#define str_100098ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cfU)))
#undef str_100098d1
#define str_100098d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e6U)))
#undef str_100098dd
#define str_100098dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_100098e9
#define str_100098e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2feU)))
#undef str_100098f6
#define str_100098f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30bU)))
#undef str_10009900
#define str_10009900 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#undef str_10009914
#define str_10009914 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x329U)))
#undef str_10009923
#define str_10009923 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x338U)))
#undef str_10009936
#define str_10009936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34bU)))
#undef str_10009948
#define str_10009948 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35dU)))
#undef str_1000995e
#define str_1000995e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_10009968
#define str_10009968 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_10009974
#define str_10009974 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_10009989
#define str_10009989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_10009995
#define str_10009995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aaU)))
#undef str_100099a0
#define str_100099a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b5U)))
#undef str_100099aa
#define str_100099aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
#undef str_100099bf
#define str_100099bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d4U)))
#undef str_100099d0
#define str_100099d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_100099dc
#define str_100099dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f1U)))
#undef str_100099e8
#define str_100099e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef str_100099f4
#define str_100099f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x409U)))
#undef str_10009a03
#define str_10009a03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_10009a0d
#define str_10009a0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x422U)))
#undef str_10009a1b
#define str_10009a1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_10009a2c
#define str_10009a2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x441U)))
#undef str_10009a38
#define str_10009a38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#define local_e8 (*(undefined8 *)(frame + 24))
#define local_e0 (*(undefined8 *)(frame + 32))
#define local_d8 (*(ulong *)(frame + 40))
#define local_d0 (*(ulong *)(frame + 48))
#define local_c8 (*(ulong *)(frame + 56))
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
#define local_8c (*(uint *)(frame + 116))
#define local_88 (*(uint *)(frame + 120))
#define local_84 (*(undefined4 *)(frame + 124))
#define local_80 (*(ulong *)(frame + 128))
#define local_78 (*(uint *)(frame + 136))
#define local_6c (*(int *)(frame + 148))
#define local_68 (*(uint *)(frame + 152))
#define local_64 (*(uint *)(frame + 156))
#define local_60 (*(uint *)(frame + 160))
#define local_5c (*(uint *)(frame + 164))
#define local_58 (*(ulong *)(frame + 168))
#define local_50 (*(uint *)(frame + 176))
#define local_4c (*(undefined4 *)(frame + 180))
#define local_48 (*(undefined8 *)(frame + 184))
#define local_3c (*(uint *)(frame + 196))
#define local_38 (*(uint *)(frame + 200))
#define local_34 (*(uint *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

void recovered_100028d0(int *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined7 uVar18;
  byte *pbVar17;
  long lVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;

  uVar18 = (undefined7)((ulong)param_6 >> 8);
  if (param_2 == (undefined1 *)0x0) {
    uVar11 = CONCAT71(uVar18,param_1 == (int *)0x0);
    bVar23 = true;
joined_r0x10002b54:
    if (param_3 != 0) {
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_100096db;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
LAB_10002b9c:
    uVar3 = 0;
    if (!bVar23) {
LAB_10002e4f:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_1000509a;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar20 = uVar1 & 0xffffffc0;
      if (uVar20 == 0x1000) {
        uVar20 = uVar1 - 0x1000;
      }
      else {
        if (uVar20 != 0x1040) goto LAB_1000509a;
        uVar20 = uVar1 - 0x1040;
      }
      if (uVar20 == 0xffffffff) goto LAB_1000509a;
      if (param_3 == 0) {
        if (uVar20 != 0) goto LAB_10002fc9;
      }
      else {
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
          uVar6 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar16 = 0xffffffffffffffff;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + 1 + uVar6) != '\0');
        if (uVar6 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar16) = 0x76;
          uVar13 = uVar6 + 2;
          if (uVar16 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar16) = 0x69;
            uVar13 = uVar6 + 3;
            if (uVar6 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar16) = 0x72;
              uVar13 = uVar6 + 4;
              if (uVar6 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar16) = 0x74;
                uVar13 = uVar6 + 5;
                if (uVar6 + 5 < 0x3ff) {
                  *(undefined1 *)(uVar6 + 5 + param_3) = 0x69;
                  uVar13 = uVar6 + 6;
                  if (uVar6 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar16) = 0x6f;
                    uVar13 = uVar6 + 7;
                    if (uVar6 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar16) = 0x49;
                      uVar13 = uVar6 + 8;
                      if (uVar6 + 8 < 0x3ff) {
                        *(undefined1 *)(param_3 + 7 + uVar16) = 100;
                        uVar16 = uVar6 + 9;
                        goto LAB_10002f8e;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_10002f8e:
          uVar13 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
          uVar6 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        if (uVar20 == 0) {
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar16) = 0x30;
          }
        }
        else {
LAB_10002fc9:
          uVar16 = (ulong)uVar20;
          uVar6 = 0;
          do {
            uVar20 = (uint)uVar16;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
            uVar13 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar16 = uVar16 / 10;
            uVar6 = uVar13;
          } while (9 < uVar20);
          do {
            if (param_3 != 0) {
              uVar16 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar8 != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar16) =
                     *(undefined1 *)((long)&local_e8 + uVar13 + 7);
                *(undefined1 *)(param_3 + uVar16) = 0;
              }
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      local_3c = 0;
      lVar19 = 0;
      do {
        *(undefined1 *)((long)&local_e0 + lVar19) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 1) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 2) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 3) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 4) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 5) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 6) = 0;
        *(undefined1 *)((long)&local_e0 + lVar19 + 7) = 0;
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x70);
      uVar16 = uVar11;
      if (((((param_2[0x12] & 0x10) != 0) && ((char)uVar11 == '\0')) && (*param_1 == 0x54584b57)) &&
         (0x5f < (uint)param_1[2])) {
        if ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
          uVar16 = uVar11 & 0xffffffff;
          local_34 = uVar3;
          iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                             (*param_2,param_2[1],param_2[2],0x34,1,&local_3c);
          uVar3 = local_34;
          if (iVar21 != 0) {
            if (local_3c - 0x40 < 0xb0) {
              uVar3 = 0;
              while( true ) {
                local_50 = 0;
                local_5c = 0;
                local_6c = 0;
                local_60 = 0;
                local_68 = 0;
                local_64 = 0;
                if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 0x60)) ||
                    (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                     ((iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                          (*param_2,param_2[1],param_2[2],local_3c & 0xffff,1,
                                           &local_50), iVar21 == 0 || (*param_1 != 0x54584b57))))))
                   || (((uint)param_1[2] < 0x60 ||
                       (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                        (iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                            (*param_2,param_2[1],param_2[2],local_3c + 1 & 0xffff,1,
                                             &local_5c), iVar21 == 0)))))) break;
                if ((((local_50 == 9) &&
                     (((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
                      ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) &&
                    ((((iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                           (*param_2,param_2[1],param_2[2],local_3c + 3 & 0xffff,1,
                                            &local_6c), iVar21 != 0 && (*param_1 == 0x54584b57)) &&
                      (0x5f < (uint)param_1[2])) &&
                     (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0 &&
                      (iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                          (*param_2,param_2[1],param_2[2],local_3c + 4 & 0xffff,1,
                                           &local_60), iVar21 != 0)))))) &&
                   (((((*param_1 == 0x54584b57 &&
                       (((0x5f < (uint)param_1[2] &&
                         ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                        (iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                            (*param_2,param_2[1],param_2[2],local_3c + 8 & 0xffff,4,
                                             &local_68), iVar21 != 0)))) &&
                      ((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])))) &&
                     ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                    (iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                        (*param_2,param_2[1],param_2[2],local_3c + 0xc & 0xffff,4,
                                         &local_64), iVar21 != 0)))) {
                  local_ac = local_ac + 1;
                  local_48 = 0;
                  if ((((local_6c == 1) && (local_58 = (ulong)local_68, !CARRY4(local_64,local_68)))
                      && ((uVar16 = (ulong)local_60, local_60 < 6 && (local_64 != 0)))) &&
                     (((uVar16 == 0 ||
                       ((*(uint *)(param_2 + (ulong)(local_60 - 1) * 4 + 0x14) & 7) != 4)) &&
                      (uVar20 = *(uint *)(param_2 + uVar16 * 4 + 0x14),
                      (uVar20 & 1) == 0 && uVar20 != 0)))) {
                    iVar21 = 0;
                    if ((uVar20 & 6) == 4) {
                      if (4 < local_60) goto LAB_100034b4;
                      iVar21 = *(int *)(param_2 + uVar16 * 4 + 0x18);
                    }
                    if (((local_64 + local_68 != 0) && ((uVar20 & 0xfffffff0) != 0 || iVar21 != 0))
                       && (local_38 = 0, *param_1 == 0x54584b57)) {
                      if (((uint)param_1[2] < 0xbc) ||
                         ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                        if ((0x67 < (uint)param_1[2] && iVar21 == 0) &&
                           (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                            (iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar20 & 0xfffffff0,0),
                            iVar21 != 0)))) {
                          uVar16 = (ulong)local_38;
                          goto LAB_10003498;
                        }
                      }
                      else {
                        iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])();
                        if (iVar21 != 0) {
                          uVar16 = local_48;
LAB_10003498:
                          local_e0 = uVar16 + local_58;
                          local_c0 = local_60;
                          goto LAB_1000357d;
                        }
                      }
                    }
                  }
LAB_100034b4:
                  if ((((((local_6c == 2) &&
                         (local_58 = (ulong)local_68, !CARRY4(local_64,local_68))) &&
                        (uVar16 = (ulong)local_60, local_60 < 6)) && (local_64 != 0)) &&
                      ((uVar16 == 0 ||
                       ((*(uint *)(param_2 + (ulong)(local_60 - 1) * 4 + 0x14) & 7) != 4)))) &&
                     (uVar20 = *(uint *)(param_2 + uVar16 * 4 + 0x14),
                     (uVar20 & 1) == 0 && uVar20 != 0)) {
                    iVar21 = 0;
                    if ((uVar20 & 6) == 4) {
                      if (4 < local_60) goto LAB_10003503;
                      iVar21 = *(int *)(param_2 + uVar16 * 4 + 0x18);
                    }
                    if ((local_64 + local_68 != 0) && ((uVar20 & 0xfffffff0) != 0 || iVar21 != 0)) {
                      local_48 = 0;
                      local_38 = 0;
                      if (*param_1 == 0x54584b57) {
                        if (((uint)param_1[2] < 0xbc) ||
                           ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                          if ((0x67 < (uint)param_1[2] && iVar21 == 0) &&
                             (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                              (iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar20 & 0xfffffff0,0)
                              , iVar21 != 0)))) {
                            local_48 = (ulong)local_38;
                            goto LAB_10003668;
                          }
                        }
                        else {
                          iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])();
                          if (iVar21 != 0) {
LAB_10003668:
                            local_48 = local_48 + local_58;
                            local_38 = 0;
                            local_d8 = local_48;
                            local_bc = local_60;
                            if ((((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
                                ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                               (iVar21 = (*(code *)(ulong)(uint)param_1[0x17])
                                                   (*param_2,param_2[1],param_2[2],
                                                    local_3c + 0x10 & 0xffff,4,&local_38),
                               iVar21 != 0)) {
                              local_b0 = local_38;
                            }
                            goto LAB_1000357d;
                          }
                        }
                      }
                    }
                  }
LAB_10003503:
                  if ((local_6c == 3) &&
                     (uVar5 = recovered_10009420(param_1,(long)param_2,local_60,local_68,local_64,
                                                 &local_48), (int)uVar5 != 0)) {
                    local_d0 = local_48;
                    local_b8 = local_60;
                  }
                  else if ((local_6c == 4) &&
                          (uVar5 = recovered_10009420(param_1,(long)param_2,local_60,local_68,
                                                      local_64,&local_48), (int)uVar5 != 0)) {
                    local_c8 = local_48;
                    local_b4 = local_60;
                  }
                }
LAB_1000357d:
                if ((((local_5c == 0) || (local_5c == local_3c)) ||
                    (local_3c = local_5c, 0x1e < uVar3)) ||
                   (uVar3 = uVar3 + 1, 0xaf < local_5c - 0x40)) break;
              }
            }
            uVar16 = uVar11 & 0xffffffff;
            uVar3 = local_34;
            if (local_e0 != 0) {
              local_48 = local_48 & 0xffffffff00000000;
              if (*param_1 == 0x54584b57) {
                uVar11 = local_e0 + 0x14;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6b < (uint)param_1[2] &&
                      ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,1);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,1);
                }
              }
              if (local_e0 != 0) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0x14;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,1,0);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,1,0);
                  }
                }
                if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if (((local_e0 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
                       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(local_e0,4,0);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(local_e0,4,0);
                  }
                  if (local_e0 != 0) {
                    if (*param_1 == 0x54584b57) {
                      uVar11 = local_e0 + 4;
                      if (((uint)param_1[2] < 0xc0) ||
                         ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                        if ((uVar11 >> 0x20 == 0) &&
                           ((0x6b < (uint)param_1[2] &&
                            ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4);
                      }
                    }
                    if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                      if (((uint)param_1[2] < 0xc4) ||
                         ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                        if (((local_e0 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
                           ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                          (*(code *)(ulong)(uint)param_1[0x1b])(local_e0,4,1);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)param_1[0x30])(local_e0,4,1);
                      }
                      if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                        uVar11 = local_e0 + 4;
                        if (((uint)param_1[2] < 0xc0) ||
                           ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                          if (((uVar11 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                             ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4);
                          }
                        }
                        else {
                          (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4);
                        }
                      }
                    }
                  }
                }
              }
              local_a0 = 0;
              local_9c = local_a4 & 1;
              if (local_e0 == 0) {
LAB_10007532:
                if (((*param_1 == 0x54584b57) && (0x7b < (uint)param_1[2])) &&
                   ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0)) {
                  (*(code *)(ulong)(uint)param_1[0x1e])();
                }
              }
              else {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,0);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4,0);
                  }
                }
                if (local_e0 == 0) goto LAB_10007532;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xc;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
                  }
                }
                if (local_e0 == 0) goto LAB_10007532;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,1);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4,1);
                  }
                }
                if (local_e0 == 0) goto LAB_10007532;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xc;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
                  }
                  goto LAB_10007532;
                }
              }
              if (local_e0 != 0) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0x14;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,1,1);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,1,1);
                  }
                }
                if (local_e0 != 0) {
                  if (*param_1 == 0x54584b57) {
                    uVar11 = local_e0 + 0x14;
                    if (((uint)param_1[2] < 0xc4) ||
                       ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                      if ((uVar11 >> 0x20 == 0) &&
                         ((0x6f < (uint)param_1[2] &&
                          ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                        (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,1,3);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x30])(uVar11,1,3);
                    }
                  }
                  if (local_e0 != 0) {
                    if (*param_1 == 0x54584b57) {
                      uVar11 = local_e0 + 0x14;
                      if (((uint)param_1[2] < 0xc4) ||
                         ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                        if ((uVar11 >> 0x20 == 0) &&
                           ((0x6f < (uint)param_1[2] &&
                            ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,1,0xb);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)param_1[0x30])(uVar11,1,0xb);
                      }
                    }
                    if (local_e0 != 0) {
                      if (*param_1 == 0x54584b57) {
                        uVar11 = local_e0 + 0x14;
                        if (((uint)param_1[2] < 0xc0) ||
                           ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                          if ((uVar11 >> 0x20 == 0) &&
                             ((0x6b < (uint)param_1[2] &&
                              ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,1);
                          }
                        }
                        else {
                          (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,1);
                        }
                      }
                      if (local_e0 != 0) {
                        if (*param_1 == 0x54584b57) {
                          uVar11 = local_e0 + 0x12;
                          if (((uint)param_1[2] < 0xc0) ||
                             ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                            if ((uVar11 >> 0x20 == 0) &&
                               ((0x6b < (uint)param_1[2] &&
                                ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                              (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2);
                            }
                          }
                          else {
                            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2);
                          }
                        }
                        if (local_e0 != 0) {
                          if (*param_1 == 0x54584b57) {
                            uVar11 = local_e0 + 0x15;
                            if (((uint)param_1[2] < 0xc0) ||
                               ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                              if ((uVar11 >> 0x20 == 0) &&
                                 ((0x6b < (uint)param_1[2] &&
                                  ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,1);
                              }
                            }
                            else {
                              (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,1);
                            }
                          }
                          if (local_e0 != 0) {
                            if (*param_1 == 0x54584b57) {
                              uVar11 = local_e0 + 0x16;
                              if (((uint)param_1[2] < 0xc4) ||
                                 ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                                if ((uVar11 >> 0x20 == 0) &&
                                   ((0x6f < (uint)param_1[2] &&
                                    ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                                  (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,2,0);
                                }
                              }
                              else {
                                (*(code *)(ulong)(uint)param_1[0x30])(uVar11,2,0);
                              }
                            }
                            if (local_e0 != 0) {
                              if (*param_1 == 0x54584b57) {
                                uVar11 = local_e0 + 0x18;
                                if (((uint)param_1[2] < 0xc0) ||
                                   ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                                  if ((uVar11 >> 0x20 == 0) &&
                                     ((0x6b < (uint)param_1[2] &&
                                      ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2);
                                  }
                                }
                                else {
                                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2);
                                }
                              }
                              if (local_e0 != 0) {
                                if (*param_1 == 0x54584b57) {
                                  uVar11 = local_e0 + 0x1c;
                                  if (((uint)param_1[2] < 0xc0) ||
                                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                                    if ((uVar11 >> 0x20 == 0) &&
                                       ((0x6b < (uint)param_1[2] &&
                                        ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2);
                                    }
                                  }
                                  else {
                                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2);
                                  }
                                }
                                if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                                  uVar11 = local_e0 + 0x1e;
                                  if (((uint)param_1[2] < 0xc0) ||
                                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                                    if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                                       ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                                    goto LAB_1000799e;
                                    iVar21 = (*(code *)(ulong)(uint)param_1[0x1a])
                                                       (uVar11,2,&local_48);
                                  }
                                  else {
                                    iVar21 = (*(code *)(ulong)(uint)param_1[0x2f])
                                                       (uVar11,2,&local_48);
                                  }
                                  if (iVar21 != 0) {
                                    local_84 = (uint)local_48;
                                    if (local_d8 != 0) {
                                      local_80 = (ulong)local_b0 * (local_48 & 0xffffffff) +
                                                 local_d8;
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
LAB_1000799e:
              uVar3 = local_34;
              if (param_3 == 0) {
                if (local_ac != 0) goto LAB_10007b51;
LAB_10007bd5:
                if (local_c0 == 0) goto LAB_10007df1;
              }
              else {
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_1000977b;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar16) = cVar9;
                    uVar16 = uVar16 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0xffffffffffffffff;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + 1 + uVar16) != '\0');
                if (uVar16 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar11) = 0x6d;
                  uVar6 = uVar16 + 2;
                  if (uVar11 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar11) = 0x6f;
                    uVar6 = uVar16 + 3;
                    if (uVar16 + 3 < 0x3ff) {
                      *(undefined1 *)(uVar16 + 3 + param_3) = 100;
                      uVar6 = uVar16 + 4;
                      if (uVar16 + 4 < 0x3ff) {
                        *(undefined1 *)(param_3 + 3 + uVar11) = 0x65;
                        uVar6 = uVar16 + 5;
                        if (uVar16 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar11) = 0x72;
                          uVar6 = uVar16 + 6;
                          if (uVar16 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar11) = 0x6e;
                            uVar11 = uVar16 + 7;
                            goto LAB_10007ab4;
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10007ab4:
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10009770;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar16) = cVar9;
                    uVar16 = uVar16 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                if (local_ac != 0) {
LAB_10007b51:
                  uVar11 = 0;
                  do {
                    *(byte *)((long)&local_48 + uVar11) =
                         (char)local_ac + (char)(local_ac / 10) * -10 | 0x30;
                    uVar16 = uVar11 + 1;
                    if (8 < uVar11) break;
                    bVar23 = 9 < local_ac;
                    uVar11 = uVar16;
                    local_ac = local_ac / 10;
                  } while (bVar23);
LAB_10007b95:
                  do {
                    uVar11 = uVar16 - 1;
                    if (param_3 != 0) {
                      uVar6 = 0;
                      do {
                        pcVar8 = (char *)(param_3 + uVar6);
                        uVar6 = uVar6 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar6 < 0x400) {
                        *(undefined1 *)(param_3 + -1 + uVar6) =
                             *(undefined1 *)((long)&local_4c + uVar16 + 3);
                        *(undefined1 *)(param_3 + uVar6) = 0;
                      }
                      uVar16 = uVar11;
                      if (uVar11 == 0) goto LAB_10007c03;
                      goto LAB_10007b95;
                    }
                    uVar16 = uVar11;
                  } while (uVar11 != 0);
                  goto LAB_10007bd5;
                }
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                }
LAB_10007c03:
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_1000978b;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar16) = cVar9;
                    uVar16 = uVar16 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                if (local_c0 == 0) {
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                  }
LAB_10007d4f:
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar16 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_1000979b;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar16) = cVar9;
                      uVar16 = uVar16 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar16 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  goto LAB_10007df1;
                }
              }
              uVar11 = 0;
              do {
                *(byte *)((long)&local_48 + uVar11) =
                     (char)local_c0 + (char)(local_c0 / 10) * -10 | 0x30;
                uVar16 = uVar11 + 1;
                if (8 < uVar11) break;
                bVar23 = 9 < local_c0;
                uVar11 = uVar16;
                local_c0 = local_c0 / 10;
              } while (bVar23);
LAB_10007cdd:
              do {
                uVar11 = uVar16 - 1;
                if (param_3 != 0) {
                  uVar6 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar6);
                    uVar6 = uVar6 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar6 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar6) =
                         *(undefined1 *)((long)&local_4c + uVar16 + 3);
                    *(undefined1 *)(param_3 + uVar6) = 0;
                  }
                  uVar16 = uVar11;
                  if (uVar11 == 0) goto LAB_10007d4f;
                  goto LAB_10007cdd;
                }
                uVar16 = uVar11;
              } while (uVar11 != 0);
LAB_10007df1:
              iVar21 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
LAB_10007dff:
              do {
                uVar15 = (uint)(local_e0 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar20 = (uint)(byte)((char)uVar15 + 0x37);
                if (uVar15 < 10) {
                  uVar20 = uVar15 + 0x30;
                }
                PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                if (param_3 == 0) goto LAB_10007df7;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  pbVar17 = (byte *)((long)&local_48 + 1);
                  do {
                    *(char *)(param_3 + uVar16) = (char)uVar20;
                    uVar16 = uVar16 + 1;
                    uVar20 = (uint)*pbVar17;
                    if (*pbVar17 == 0) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_100097a8;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_10007f24:
              iVar21 = 8;
LAB_10007f2f:
              uVar20 = local_a8 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto LAB_1000801a;
                goto LAB_10007f2f;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_10007f2f;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_100097be;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_1000801a:
              iVar21 = 8;
LAB_10008025:
              uVar20 = local_a4 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto LAB_1000810a;
                goto LAB_10008025;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_10008025;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_100097d4;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_1000810a:
              iVar21 = 8;
LAB_10008115:
              uVar20 = local_a0 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto LAB_100081fa;
                goto LAB_10008115;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_10008115;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_100097ea;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_100081fa:
              iVar21 = 8;
LAB_10008205:
              uVar20 = local_9c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto LAB_100082ea;
                goto LAB_10008205;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_10008205;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10009800;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_100082ea:
              iVar21 = 8;
LAB_100082f5:
              uVar20 = local_98 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto LAB_100083da;
                goto LAB_100082f5;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_100082f5;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10009819;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
LAB_100083da:
              iVar21 = 8;
LAB_100083e5:
              uVar20 = local_94 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar20;
              cVar7 = cVar9 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) {
                iVar21 = iVar21 + -1;
                if (iVar21 == 0) goto code_r0x10008431;
                goto LAB_100083e5;
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
              iVar21 = iVar21 + -1;
              if (iVar21 != 0) goto LAB_100083e5;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_10009831;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              if (local_90 == 0) {
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
LAB_100084da:
                uVar11 = 0;
                do {
                  *(byte *)((long)&local_48 + uVar11) =
                       (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
                  uVar16 = uVar11 + 1;
                  if (8 < uVar11) break;
                  bVar23 = 9 < local_90;
                  uVar11 = uVar16;
                  local_90 = local_90 / 10;
                } while (bVar23);
                do {
                  while (uVar11 = uVar16 - 1, param_3 == 0) {
                    uVar16 = uVar11;
                    if (uVar11 == 0) goto LAB_10008555;
                  }
                  uVar6 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar6);
                    uVar6 = uVar6 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar6 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar6) =
                         *(undefined1 *)((long)&local_4c + uVar16 + 3);
                    *(undefined1 *)(param_3 + uVar6) = 0;
                  }
                  uVar16 = uVar11;
                } while (uVar11 != 0);
              }
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_1000983e;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              if (local_8c == 0) {
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
LAB_10008619:
                uVar11 = 0;
                do {
                  *(byte *)((long)&local_48 + uVar11) =
                       (char)local_8c + (char)(local_8c / 10) * -10 | 0x30;
                  uVar16 = uVar11 + 1;
                  if (8 < uVar11) break;
                  bVar23 = 9 < local_8c;
                  uVar11 = uVar16;
                  local_8c = local_8c / 10;
                } while (bVar23);
                do {
                  while (uVar11 = uVar16 - 1, param_3 == 0) {
                    uVar16 = uVar11;
                    if (uVar11 == 0) goto LAB_10008695;
                  }
                  uVar6 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar6);
                    uVar6 = uVar6 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar6 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar6) =
                         *(undefined1 *)((long)&local_4c + uVar16 + 3);
                    *(undefined1 *)(param_3 + uVar6) = 0;
                  }
                  uVar16 = uVar11;
                } while (uVar11 != 0);
              }
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_1000984f;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              if (local_88 == 0) {
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
LAB_10008760:
                uVar11 = 0;
                do {
                  *(byte *)((long)&local_48 + uVar11) =
                       (char)local_88 + (char)(local_88 / 10) * -10 | 0x30;
                  uVar16 = uVar11 + 1;
                  if (8 < uVar11) break;
                  bVar23 = 9 < local_88;
                  uVar11 = uVar16;
                  local_88 = local_88 / 10;
                } while (bVar23);
                do {
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar11);
                      uVar11 = uVar11 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar11 < 0x400) {
                      *(undefined1 *)(param_3 + -1 + uVar11) =
                           *(undefined1 *)((long)&local_4c + uVar16 + 3);
                      *(undefined1 *)(param_3 + uVar11) = 0;
                    }
                  }
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              if (local_80 != 0) {
                if (param_3 == 0) {
LAB_1000881a:
                  if (local_bc != 0) goto LAB_10008897;
                }
                else {
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar16 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10009863;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar16) = cVar9;
                      uVar16 = uVar16 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar16 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  if (local_bc == 0) {
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
LAB_10008897:
                    uVar11 = 0;
                    do {
                      *(byte *)((long)&local_48 + uVar11) =
                           (char)local_bc + (char)(local_bc / 10) * -10 | 0x30;
                      uVar16 = uVar11 + 1;
                      if (8 < uVar11) break;
                      bVar23 = 9 < local_bc;
                      uVar11 = uVar16;
                      local_bc = local_bc / 10;
                    } while (bVar23);
                    do {
                      while (uVar11 = uVar16 - 1, param_3 == 0) {
                        uVar16 = uVar11;
                        if (uVar11 == 0) goto LAB_100089c9;
                      }
                      uVar6 = 0;
                      do {
                        pcVar8 = (char *)(param_3 + uVar6);
                        uVar6 = uVar6 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar6 < 0x400) {
                        *(undefined1 *)(param_3 + -1 + uVar6) =
                             *(undefined1 *)((long)&local_4c + uVar16 + 3);
                        *(undefined1 *)(param_3 + uVar6) = 0;
                      }
                      uVar16 = uVar11;
                    } while (uVar11 != 0);
                  }
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar16 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_10009873;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar16) = cVar9;
                      uVar16 = uVar16 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar16 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
LAB_100089c9:
                iVar21 = 8;
LAB_100089d4:
                do {
                  uVar20 = local_b0 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar9 = (char)uVar20;
                  cVar7 = cVar9 + '7';
                  if (uVar20 < 10) {
                    cVar7 = cVar9 + '0';
                  }
                  if (param_3 == 0) goto LAB_10008a1d;
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(char *)(param_3 + -1 + uVar11) = cVar7;
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_1000988a;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar16) = cVar9;
                    uVar16 = uVar16 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
LAB_10008adc:
                iVar21 = (uint)(local_80 >> 0x20 != 0) * 8 + 8;
                do {
                  uVar15 = (uint)(local_80 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
                  uVar20 = (uint)(byte)((char)uVar15 + 0x37);
                  if (uVar15 < 10) {
                    uVar20 = uVar15 + 0x30;
                  }
                  PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      uVar16 = uVar11;
                      uVar11 = uVar16 + 1;
                    } while (*(char *)(param_3 + uVar16) != '\0');
                    if (uVar16 + 1 < 0x400) {
                      pbVar17 = (byte *)((long)&local_48 + 1);
                      do {
                        *(char *)(param_3 + uVar16) = (char)uVar20;
                        uVar16 = uVar16 + 1;
                        uVar20 = (uint)*pbVar17;
                        if (*pbVar17 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar16 < 0x3ff);
                    }
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
              }
              if (local_d0 != 0) {
                iVar21 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar16 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_1000989d;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar16) = cVar9;
                      uVar16 = uVar16 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar16 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
LAB_10008c23:
                do {
                  uVar15 = (uint)(local_d0 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
                  uVar20 = (uint)(byte)((char)uVar15 + 0x37);
                  if (uVar15 < 10) {
                    uVar20 = uVar15 + 0x30;
                  }
                  PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      uVar16 = uVar11;
                      uVar11 = uVar16 + 1;
                    } while (*(char *)(param_3 + uVar16) != '\0');
                    if (uVar16 + 1 < 0x400) {
                      pbVar17 = (byte *)((long)&local_48 + 1);
                      do {
                        *(char *)(param_3 + uVar16) = (char)uVar20;
                        uVar16 = uVar16 + 1;
                        uVar20 = (uint)*pbVar17;
                        if (*pbVar17 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar16 < 0x3ff);
                    }
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
              }
              if (local_c8 != 0) {
                iVar21 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar16 + 1 < 0x400) {
                    cVar9 = 'v';
                    pcVar8 = str_100098a7;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar16) = cVar9;
                      uVar16 = uVar16 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar16 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
LAB_10008d60:
                do {
                  uVar15 = (uint)(local_c8 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
                  uVar20 = (uint)(byte)((char)uVar15 + 0x37);
                  if (uVar15 < 10) {
                    uVar20 = uVar15 + 0x30;
                  }
                  PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      uVar16 = uVar11;
                      uVar11 = uVar16 + 1;
                    } while (*(char *)(param_3 + uVar16) != '\0');
                    if (uVar16 + 1 < 0x400) {
                      pbVar17 = (byte *)((long)&local_48 + 1);
                      do {
                        *(char *)(param_3 + uVar16) = (char)uVar20;
                        uVar16 = uVar16 + 1;
                        uVar20 = (uint)*pbVar17;
                        if (*pbVar17 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar16 < 0x3ff);
                    }
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
              }
              local_34 = uVar3;
              if (param_3 == 0) goto LAB_10008fe1;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar8 = str_100098ba;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              if (local_78 != 0) goto LAB_10008fe9;
              uVar11 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar8 != '\0');
              if (uVar11 < 0x400) {
                *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
              }
LAB_10008ea3:
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              pcVar8 = str_100098dd;
              if ((local_94 & 8) == 0) {
                pcVar8 = str_100098e9;
              }
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar16 + 1 < 0x400) {
                cVar9 = 'v';
                pcVar12 = str_100098d1;
                do {
                  pcVar12 = pcVar12 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar12;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if ((uVar16 + 1 < 0x400) && (cVar9 = *pcVar8, cVar9 != '\0')) {
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar16) = cVar9;
                  uVar16 = uVar16 + 1;
                  cVar9 = *pcVar8;
                  if (cVar9 == '\0') break;
                } while (uVar16 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              local_34 = uVar3;
              goto LAB_10009075;
            }
          }
        }
      }
      if (local_ac != 0) {
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
            cVar9 = 'v';
            pcVar8 = str_10009770;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar9;
              uVar6 = uVar6 + 1;
              cVar9 = *pcVar8;
              if (cVar9 == '\0') break;
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
        uVar11 = 0;
        uVar20 = local_ac;
        do {
          *(byte *)((long)&local_48 + uVar11) = (byte)(uVar20 % 10) | 0x30;
          uVar6 = uVar11 + 1;
          if (8 < uVar11) break;
          bVar23 = 9 < uVar20;
          uVar11 = uVar6;
          uVar20 = uVar20 / 10;
        } while (bVar23);
        do {
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = *(undefined1 *)((long)&local_4c + uVar6 + 3);
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (*(ushort *)(param_2 + 6) < 0x1040) {
        bVar23 = true;
        uVar11 = 0;
        local_4c = (uint)uVar16;
        local_34 = uVar3;
LAB_10003f96:
        local_48 = local_48 & 0xffffffff00000000;
        local_38 = 0;
        if ((((*(uint *)(param_2 + uVar11 * 4 + 0x14) & 1) == 0) || ((char)uVar16 != '\0')) ||
           ((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)))) goto LAB_10003f80;
        if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10003f80;
        uVar15 = *(uint *)(param_2 + uVar11 * 4 + 0x14) & 0xfffffffc;
        uVar20 = uVar15 + 0x12;
        local_58 = CONCAT71(PF_PART7(local_58, 1),bVar23);
        iVar21 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar20,1,&local_48);
        uVar3 = local_34;
        uVar6 = local_58 & 0xff;
        uVar16 = (ulong)local_4c;
        if (iVar21 == 0) goto LAB_10003f80;
        if (param_3 == 0) {
          if (uVar11 == 0) goto LAB_10005e04;
          goto LAB_100058a6;
        }
        uVar16 = 0;
        do {
          uVar13 = uVar16;
          uVar16 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
          uVar13 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar16 = 0;
        do {
          uVar13 = uVar16;
          uVar16 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar9 = 'v';
          pcVar8 = str_1000977b;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar13) = cVar9;
            uVar13 = uVar13 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar16 = 0;
        do {
          uVar13 = uVar16;
          uVar16 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
          uVar13 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar16 = 0;
        do {
          uVar13 = uVar16;
          uVar16 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar9 = 'l';
          pcVar8 = str_100098f6;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar13) = cVar9;
            uVar13 = uVar13 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        uVar16 = 0;
        do {
          uVar13 = uVar16;
          uVar16 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10009900;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar13) = cVar9;
            uVar13 = uVar13 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        if (uVar11 == 0) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
LAB_10005d82:
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            uVar11 = uVar16 + 1;
          } while (*(char *)(param_3 + uVar16) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar16 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar16) = 0;
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            uVar11 = uVar16 + 1;
          } while (*(char *)(param_3 + uVar16) != '\0');
          if (uVar16 + 1 < 0x400) {
            cVar9 = 'v';
            pcVar8 = str_10009914;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar16) = cVar9;
              uVar16 = uVar16 + 1;
              cVar9 = *pcVar8;
              if (cVar9 == '\0') break;
            } while (uVar16 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar16) = 0;
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            uVar11 = uVar16 + 1;
          } while (*(char *)(param_3 + uVar16) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar16 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
        else {
LAB_100058a6:
          uVar16 = 0;
          do {
            uVar14 = (uint)uVar11;
            uVar10 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar16) = (char)uVar11 + (char)uVar10 * -10 | 0x30;
            uVar13 = uVar16 + 1;
            if (8 < uVar16) break;
            uVar16 = uVar13;
            uVar11 = uVar10;
          } while (9 < uVar14);
          do {
            while (uVar11 = uVar13 - 1, param_3 != 0) {
              uVar16 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar8 != '\0');
              if (uVar16 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar16) =
                     *(undefined1 *)((long)&local_e8 + uVar13 + 7);
                *(undefined1 *)(param_3 + uVar16) = 0;
              }
              uVar13 = uVar11;
              if (uVar11 == 0) goto LAB_10005d82;
            }
            uVar13 = uVar11;
          } while (uVar11 != 0);
        }
LAB_10005e04:
        iVar21 = 8;
LAB_10005e0f:
        uVar14 = uVar15 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar14;
        cVar7 = cVar9 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar9 + '0';
        }
        if (param_3 == 0) {
          iVar21 = iVar21 + -1;
          if (iVar21 == 0) goto LAB_10005ef4;
          goto LAB_10005e0f;
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
        iVar21 = iVar21 + -1;
        if (iVar21 != 0) goto LAB_10005e0f;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar16 + 1 < 0x400) {
          cVar9 = 'v';
          pcVar8 = str_10009923;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar16) = cVar9;
            uVar16 = uVar16 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar16 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
LAB_10005ef4:
        iVar21 = 8;
        do {
          uVar15 = (uint)local_48 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
          cVar9 = (char)uVar15;
          cVar7 = cVar9 + '7';
          if (uVar15 < 10) {
            cVar7 = cVar9 + '0';
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
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        if (*param_1 == 0x54584b57) {
          uVar15 = param_1[2];
          if (uVar15 < 0x5c) {
LAB_10005f63:
            if (uVar15 < 0x58) goto LAB_100072b9;
          }
          else if ((code *)(ulong)(uint)param_1[0x16] != (code *)0x0) {
            (*(code *)(ulong)(uint)param_1[0x16])(uVar20 & 0xffff,1,0);
            uVar6 = local_58 & 0xff;
            uVar3 = local_34;
            if (*param_1 != 0x54584b57) goto LAB_100072b9;
            uVar15 = param_1[2];
            if (0x5b < uVar15) {
              if ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0) goto LAB_10005fe7;
              (*(code *)(ulong)(uint)param_1[0x16])(uVar20 & 0xffff,1,3);
              uVar6 = local_58 & 0xff;
              uVar3 = local_34;
              if (*param_1 != 0x54584b57) goto LAB_100072b9;
              uVar15 = param_1[2];
            }
            goto LAB_10005f63;
          }
LAB_10005fe7:
          if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
            iVar21 = (*(code *)(ulong)(uint)param_1[0x15])(uVar20 & 0xffff,1,&local_38);
            uVar6 = local_58 & 0xff;
            uVar3 = local_34;
            if (iVar21 != 0) {
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  cVar9 = 'v';
                  pcVar8 = str_10009936;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar16) = cVar9;
                    uVar16 = uVar16 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar16 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
              }
              uVar6 = local_58 & 0xff;
              iVar21 = 8;
              do {
                uVar20 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                cVar9 = (char)uVar20;
                cVar7 = cVar9 + '7';
                if (uVar20 < 10) {
                  cVar7 = cVar9 + '0';
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
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
          }
        }
LAB_100072b9:
        if (param_3 != 0 && (uVar6 & 1) == 0) goto LAB_10003f1b;
        uVar3 = (uint)uVar6 & 1 | uVar3;
        goto LAB_1000509a;
      }
LAB_10003f16:
      if (param_3 != 0) {
LAB_10003f1b:
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar16 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10009754;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar16) = cVar9;
            uVar16 = uVar16 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar16 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
      }
      goto LAB_1000509a;
    }
  }
  else {
    iVar21 = -1;
    if (*(short *)(param_2 + 4) == 0x1af4) {
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        iVar21 = uVar1 - 0x1000;
      }
      else {
        iVar21 = uVar1 - 0x1040;
        if (uVar3 != 0x1040) {
          iVar21 = -1;
        }
      }
    }
    bVar23 = iVar21 == -1;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_48 = local_48 & 0xffffffff00000000;
    if (param_1 == (int *)0x0) {
      uVar11 = CONCAT71(uVar18,1);
      goto joined_r0x10002b54;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar11 = 0;
      goto joined_r0x10002b54;
    }
    if (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0) &&
       (iVar4 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2),
       iVar4 != 0)) {
      uVar3 = 1;
      if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
        uVar3 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
      }
      uVar20 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x18) == 0) {
        uVar20 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
        uVar20 = uVar3 | 1;
      }
      uVar3 = uVar20 | 2;
      if (*(uint *)(param_2 + 0x1c) == 0) {
        uVar3 = uVar20;
      }
      if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
        uVar3 = uVar20 | 1;
      }
      uVar20 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x20) == 0) {
        uVar20 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        uVar20 = uVar3 | 1;
      }
      uVar3 = uVar20 | 2;
      if (*(uint *)(param_2 + 0x24) == 0) {
        uVar3 = uVar20;
      }
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        uVar3 = uVar20 | 1;
      }
      uVar20 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x28) == 0) {
        uVar20 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
        uVar20 = uVar3 | 1;
      }
      uVar3 = uVar20 | 4;
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        uVar3 = uVar20 | 6;
      }
      local_48 = CONCAT44(PF_PART4(local_48, 4),(uint)local_e0 | uVar3);
      if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x18] != (code *)0x0)) {
        local_58 = CONCAT44(PF_PART4(local_58, 4),uVar3);
        iVar4 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2);
        uVar11 = local_58 & 0xffffffff;
        if (iVar4 != 0) {
          if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2);
            uVar11 = local_58 & 0xffffffff;
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar9 = 'p';
              pcVar8 = str_10009724;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar6) = cVar9;
                uVar6 = uVar6 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          iVar4 = 8;
LAB_10004852:
          do {
            uVar3 = (uint)local_e0 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
            cVar9 = (char)uVar3;
            cVar7 = cVar9 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar9 + '0';
            }
            if (param_3 == 0) goto LAB_1000489d;
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(char *)(param_3 + -1 + uVar16) = cVar7;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar9 = 'p';
            pcVar8 = str_10009735;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar9;
              uVar6 = uVar6 + 1;
              cVar9 = *pcVar8;
              if (cVar9 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10004934:
          iVar4 = 8;
LAB_1000493f:
          uVar3 = (uint)local_48 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar9 = (char)uVar3;
          cVar7 = cVar9 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar9 + '0';
          }
          if (param_3 == 0) {
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_10004a1e;
            goto LAB_1000493f;
          }
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(char *)(param_3 + -1 + uVar16) = cVar7;
            *(undefined1 *)(param_3 + uVar16) = 0;
          }
          iVar4 = iVar4 + -1;
          if (iVar4 != 0) goto LAB_1000493f;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar9 = 'p';
            pcVar8 = str_10009745;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar9;
              uVar6 = uVar6 + 1;
              cVar9 = *pcVar8;
              if (cVar9 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10004a1e:
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 0x1c) | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 0x18) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)((uint)uVar11 >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)(uVar11 >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(byte *)(param_3 + -1 + uVar16) = (byte)uVar11 & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          uVar3 = (uint)(((uint)uVar11 & ~(uint)local_48) == 0);
          goto joined_r0x10004b98;
        }
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar16 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_1000970b;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar16) = cVar9;
            uVar16 = uVar16 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar16 < 0x3ff);
        }
        goto LAB_10002e38;
      }
LAB_1000304d:
      uVar11 = 0;
      goto LAB_10002b9c;
    }
    if (param_3 == 0) goto LAB_1000304d;
    uVar11 = 0;
    do {
      uVar16 = uVar11;
      uVar11 = uVar16 + 1;
    } while (*(char *)(param_3 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_100096f3;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar16) = cVar9;
        uVar16 = uVar16 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar16 < 0x3ff);
    }
LAB_10002e38:
    uVar3 = 0;
    *(undefined1 *)(param_3 + uVar16) = 0;
joined_r0x10004b98:
    uVar11 = 0;
    if (iVar21 != -1) goto LAB_10002e4f;
  }
  local_38 = 0;
  local_3c = 0;
  local_50 = 0;
  local_5c = 0;
  if (param_2 != (undefined1 *)0x0) {
    local_4c = (uint)uVar11;
    local_34 = uVar3;
    if ((param_2[8] == '\x01') && (param_2[9] == '\x06')) {
      if (((*(uint *)(param_2 + 0x24) & 7) != 4) &&
         ((((uVar3 = *(uint *)(param_2 + 0x28), (uVar3 & 6) != 4 && (uVar3 != 0)) &&
           ((uVar3 & 1) == 0)) && (uVar3 = uVar3 & 0xfffffff0, uVar3 != 0)))) {
        local_e0 = 0;
        local_48 = local_48 & 0xffffffff00000000;
        if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
          if (0xbb < (uint)param_1[2]) {
            if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_10004218;
            iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,0,0x1000);
            uVar11 = (ulong)local_4c;
            if (iVar21 == 0) goto LAB_10002bf3;
LAB_10004252:
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + 1 + uVar16) != '\0');
              if (uVar16 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x61;
                uVar6 = uVar16 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
                  uVar6 = uVar16 + 3;
                  if (uVar16 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                    uVar6 = uVar16 + 4;
                    if (uVar16 + 4 < 0x3ff) {
                      *(undefined1 *)(param_3 + 3 + uVar11) = 0x69;
                      uVar6 = uVar16 + 5;
                      if (uVar16 + 5 < 0x3ff) {
                        *(undefined1 *)(uVar16 + 5 + param_3) = 0x4d;
                        uVar6 = uVar16 + 6;
                        if (uVar16 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x6d;
                          uVar6 = uVar16 + 7;
                          if (uVar16 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar11) = 0x69;
                            uVar6 = uVar16 + 8;
                            if (uVar16 + 8 < 0x3ff) {
                              *(undefined1 *)(param_3 + 7 + uVar11) = 0x6f;
                              uVar11 = uVar16 + 9;
                              goto LAB_10005a59;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_10005a59:
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar16 = uVar11;
                uVar11 = uVar16 + 1;
              } while (*(char *)(param_3 + uVar16) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar16 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
            iVar21 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
            do {
              uVar20 = (uint)(local_e0 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
              uVar3 = (uint)(byte)((char)uVar20 + 0x37);
              if (uVar20 < 10) {
                uVar3 = uVar20 + 0x30;
              }
              PF_PART2(local_48, 0) = (ushort)(byte)local_48;
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar16 = uVar11;
                  uVar11 = uVar16 + 1;
                } while (*(char *)(param_3 + uVar16) != '\0');
                if (uVar16 + 1 < 0x400) {
                  pbVar17 = (byte *)((long)&local_48 + 1);
                  do {
                    *(char *)(param_3 + uVar16) = (char)uVar3;
                    uVar16 = uVar16 + 1;
                    uVar3 = (uint)*pbVar17;
                    if (*pbVar17 == 0) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar16 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar16) = 0;
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((local_e0 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                   ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
                }
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
              }
            }
            if (local_e0 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar11 = local_e0 + 4;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar11 >> 0x20 == 0) &&
                     ((0x6b < (uint)param_1[2] &&
                      ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_3c);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_3c);
                }
              }
              if (local_e0 != 0) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xc;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 == 0) &&
                       ((0x6b < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_50);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_50);
                  }
                }
                if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                  uVar11 = local_e0 + 0x10;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if (((uVar11 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                       ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_5c);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_5c);
                  }
                }
              }
            }
            uVar11 = (ulong)local_4c;
            if ((-1 < (int)local_3c) && (local_e0 != 0)) {
              if (*param_1 == 0x54584b57) {
                uVar16 = local_e0 + 4;
                if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)
                   ) {
                  if ((uVar16 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x70 ||
                      ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_10006ca4;
                  (*(code *)(ulong)(uint)param_1[0x1b])(uVar16,4,local_3c | 0x80000000);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x30])(uVar16,4);
                }
                uVar11 = (ulong)local_4c;
              }
LAB_10006ca4:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar16 = local_e0 + 4;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar16 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10006d14;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,4,&local_3c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,4,&local_3c);
                }
                uVar11 = (ulong)local_4c;
              }
            }
LAB_10006d14:
            if (param_3 == 0) goto LAB_10006df6;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0xffffffffffffffff;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + 1 + uVar6) != '\0');
            if (uVar6 + 2 < 0x400) {
              *(undefined1 *)(param_3 + uVar16) = 0x61;
              uVar13 = uVar6 + 2;
              if (uVar16 != 0x3fe) {
                *(undefined1 *)(param_3 + 1 + uVar16) = 0x68;
                uVar13 = uVar6 + 3;
                if (uVar6 + 3 < 0x3ff) {
                  *(undefined1 *)(param_3 + 2 + uVar16) = 99;
                  uVar13 = uVar6 + 4;
                  if (uVar6 + 4 < 0x3ff) {
                    *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                    uVar13 = uVar6 + 5;
                    if (uVar6 + 5 < 0x3ff) {
                      *(undefined1 *)(param_3 + 4 + uVar16) = 0x43;
                      uVar13 = uVar6 + 6;
                      if (uVar6 + 6 < 0x3ff) {
                        *(undefined1 *)(param_3 + 5 + uVar16) = 0x61;
                        uVar13 = uVar6 + 7;
                        if (uVar6 + 7 < 0x3ff) {
                          *(undefined1 *)(param_3 + 6 + uVar16) = 0x70;
                          uVar16 = uVar6 + 8;
                          goto LAB_10006dcd;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_10006dcd:
              uVar13 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006df6:
            iVar21 = 8;
LAB_10006e04:
            do {
              uVar3 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar3;
              cVar7 = cVar9 + '7';
              if (uVar3 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 == 0) goto LAB_10006e4d;
              uVar16 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar16);
                uVar16 = uVar16 + 1;
              } while (*pcVar8 != '\0');
              if (uVar16 < 0x400) {
                *(char *)(param_3 + -1 + uVar16) = cVar7;
                *(undefined1 *)(param_3 + uVar16) = 0;
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0xffffffffffffffff;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + 1 + uVar6) != '\0');
            if (uVar6 + 2 < 0x400) {
              *(undefined1 *)(param_3 + uVar16) = 0x61;
              uVar13 = uVar6 + 2;
              if (uVar16 != 0x3fe) {
                *(undefined1 *)(param_3 + 1 + uVar16) = 0x68;
                uVar13 = uVar6 + 3;
                if (uVar6 + 3 < 0x3ff) {
                  *(undefined1 *)(param_3 + 2 + uVar16) = 99;
                  uVar13 = uVar6 + 4;
                  if (uVar6 + 4 < 0x3ff) {
                    *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                    uVar13 = uVar6 + 5;
                    if (uVar6 + 5 < 0x3ff) {
                      *(undefined1 *)(param_3 + 4 + uVar16) = 0x47;
                      uVar13 = uVar6 + 6;
                      if (uVar6 + 6 < 0x3ff) {
                        *(undefined1 *)(param_3 + 5 + uVar16) = 0x68;
                        uVar13 = uVar6 + 7;
                        if (uVar6 + 7 < 0x3ff) {
                          *(undefined1 *)(param_3 + 6 + uVar16) = 99;
                          uVar16 = uVar6 + 8;
                          goto LAB_10006f0e;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_10006f0e:
              uVar13 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar13) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006f38:
            iVar21 = 8;
LAB_10006f43:
            uVar3 = local_3c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
            cVar9 = (char)uVar3;
            cVar7 = cVar9 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar9 + '0';
            }
            if (param_3 == 0) {
              iVar21 = iVar21 + -1;
              if (iVar21 == 0) goto LAB_10007024;
              goto LAB_10006f43;
            }
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(char *)(param_3 + -1 + uVar16) = cVar7;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
            iVar21 = iVar21 + -1;
            if (iVar21 != 0) goto LAB_10006f43;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar9 = 'a';
              pcVar8 = str_1000995e;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar6) = cVar9;
                uVar6 = uVar6 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10007024:
            iVar21 = 8;
LAB_1000702f:
            uVar3 = local_50 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
            cVar9 = (char)uVar3;
            cVar7 = cVar9 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar9 + '0';
            }
            if (param_3 == 0) {
              iVar21 = iVar21 + -1;
              if (iVar21 == 0) goto LAB_10007114;
              goto LAB_1000702f;
            }
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(char *)(param_3 + -1 + uVar16) = cVar7;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
            iVar21 = iVar21 + -1;
            if (iVar21 != 0) goto LAB_1000702f;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar9 = 'a';
              pcVar8 = str_10009968;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar6) = cVar9;
                uVar6 = uVar6 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar16 = 0;
            do {
              uVar6 = uVar16;
              uVar16 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
              uVar6 = uVar16;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10007114:
            iVar21 = 8;
            uVar20 = 1;
            do {
              uVar3 = local_5c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
              cVar9 = (char)uVar3;
              cVar7 = cVar9 + '7';
              if (uVar3 < 10) {
                cVar7 = cVar9 + '0';
              }
              if (param_3 != 0) {
                uVar16 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar8 != '\0');
                if (uVar16 < 0x400) {
                  *(char *)(param_3 + -1 + uVar16) = cVar7;
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            goto LAB_10002c60;
          }
          if (0x67 < (uint)param_1[2]) {
LAB_10004218:
            if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
              iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
              uVar11 = (ulong)local_4c;
              if (iVar21 != 0) {
                local_e0 = local_48 & 0xffffffff;
                goto LAB_10004252;
              }
            }
          }
        }
      }
LAB_10002bf3:
      if (param_3 == 0) goto LAB_10002c4f;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = ' ';
        pcVar8 = str_10009948;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar20 = 0;
    }
    else {
LAB_10002c4f:
      uVar20 = 0;
    }
LAB_10002c60:
    local_38 = 0;
    local_3c = 0;
    local_50 = 0;
    if ((param_2[8] == '\x04') && (param_2[9] == '\x03')) {
      uVar3 = *(uint *)(param_2 + 0x14);
      if ((uVar3 & 1) == 0 && uVar3 != 0) {
        iVar21 = 0;
        if ((uVar3 & 6) == 4) {
          iVar21 = *(int *)(param_2 + 0x18);
        }
        uVar3 = uVar3 & 0xfffffff0;
        if (uVar3 != 0 || iVar21 != 0) {
          local_e0 = 0;
          local_48 = (ulong)PF_PART4(local_48, 4) << 0x20;
          if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)param_1[2] && iVar21 == 0) &&
                 ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
                iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
                uVar11 = (ulong)local_4c;
                if (iVar21 != 0) {
                  local_e0 = local_48 & 0xffffffff;
                  goto LAB_10003727;
                }
              }
            }
            else {
              iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar21,0x1000);
              uVar11 = (ulong)local_4c;
              if (iVar21 != 0) {
LAB_10003727:
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                  uVar11 = 0xffffffffffffffff;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + 1 + uVar16) != '\0');
                  if (uVar16 + 2 < 0x400) {
                    *(undefined1 *)(param_3 + uVar11) = 0x68;
                    uVar6 = uVar16 + 2;
                    if (uVar11 != 0x3fe) {
                      *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                      uVar6 = uVar16 + 3;
                      if (uVar16 + 3 < 0x3ff) {
                        *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                        uVar6 = uVar16 + 4;
                        if (uVar16 + 4 < 0x3ff) {
                          *(undefined1 *)(uVar16 + 4 + param_3) = 0x4d;
                          uVar6 = uVar16 + 5;
                          if (uVar16 + 5 < 0x3ff) {
                            *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                            uVar6 = uVar16 + 6;
                            if (uVar16 + 6 < 0x3ff) {
                              *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                              uVar6 = uVar16 + 7;
                              if (uVar16 + 7 < 0x3ff) {
                                *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                                uVar11 = uVar16 + 8;
                                goto LAB_100054f0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
LAB_100054f0:
                    uVar6 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar11 = 0;
                  do {
                    uVar16 = uVar11;
                    uVar11 = uVar16 + 1;
                  } while (*(char *)(param_3 + uVar16) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar16 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
                iVar21 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
                do {
                  uVar15 = (uint)(local_e0 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
                  uVar3 = (uint)(byte)((char)uVar15 + 0x37);
                  if (uVar15 < 10) {
                    uVar3 = uVar15 + 0x30;
                  }
                  PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      uVar16 = uVar11;
                      uVar11 = uVar16 + 1;
                    } while (*(char *)(param_3 + uVar16) != '\0');
                    if (uVar16 + 1 < 0x400) {
                      pbVar17 = (byte *)((long)&local_48 + 1);
                      do {
                        *(char *)(param_3 + uVar16) = (char)uVar3;
                        uVar16 = uVar16 + 1;
                        uVar3 = (uint)*pbVar17;
                        if (*pbVar17 == 0) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar16 < 0x3ff);
                    }
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if (((local_e0 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                       ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                      (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
                  }
                }
                if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if (((uVar11 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                       ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_3c);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_3c);
                  }
                }
                uVar11 = (ulong)local_4c;
                if (((local_3c & 1) == 0) && (local_e0 != 0)) {
                  if (*param_1 == 0x54584b57) {
                    uVar16 = local_e0 + 8;
                    if (((uint)param_1[2] < 0xc4) ||
                       ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                      if ((uVar16 >> 0x20 != 0) ||
                         (((uint)param_1[2] < 0x70 ||
                          ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_100065c3;
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar16,4,local_3c | 1);
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x30])(uVar16,4);
                    }
                    uVar11 = (ulong)local_4c;
                  }
LAB_100065c3:
                  if (local_e0 == 0) goto LAB_1000680d;
                  if (*param_1 == 0x54584b57) {
                    uVar16 = local_e0 + 8;
                    if (((uint)param_1[2] < 0xc0) ||
                       ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                      if ((uVar16 >> 0x20 != 0) ||
                         (((uint)param_1[2] < 0x6c ||
                          ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000680d;
                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,4,&local_3c);
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,4,&local_3c);
                    }
                    uVar11 = (ulong)local_4c;
                    goto LAB_1000680d;
                  }
                }
                else {
LAB_1000680d:
                  if (*param_1 == 0x54584b57) {
                    uVar16 = local_e0 + 0xe;
                    if (((uint)param_1[2] < 0xc0) ||
                       ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                      if ((uVar16 >> 0x20 != 0) ||
                         (((uint)param_1[2] < 0x6c ||
                          ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_10006878;
                      (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,2,&local_50);
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,2,&local_50);
                    }
                    uVar11 = (ulong)local_4c;
                  }
                }
LAB_10006878:
                if (param_3 == 0) goto LAB_1000695a;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + 1 + uVar6) != '\0');
                if (uVar6 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar16) = 0x68;
                  uVar13 = uVar6 + 2;
                  if (uVar16 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar16) = 100;
                    uVar13 = uVar6 + 3;
                    if (uVar6 + 3 < 0x3ff) {
                      *(undefined1 *)(param_3 + 2 + uVar16) = 0x61;
                      uVar13 = uVar6 + 4;
                      if (uVar6 + 4 < 0x3ff) {
                        *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                        uVar13 = uVar6 + 5;
                        if (uVar6 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar16) = 99;
                          uVar13 = uVar6 + 6;
                          if (uVar6 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar16) = 0x61;
                            uVar13 = uVar6 + 7;
                            if (uVar6 + 7 < 0x3ff) {
                              *(undefined1 *)(param_3 + 6 + uVar16) = 0x70;
                              uVar16 = uVar6 + 8;
                              goto LAB_10006931;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10006931:
                  uVar13 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000695a:
                iVar21 = 8;
LAB_10006968:
                do {
                  uVar3 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar9 = (char)uVar3;
                  cVar7 = cVar9 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar9 + '0';
                  }
                  if (param_3 == 0) goto LAB_100069bd;
                  uVar16 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar16 < 0x400) {
                    *(char *)(param_3 + -1 + uVar16) = cVar7;
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + 1 + uVar6) != '\0');
                if (uVar6 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar16) = 0x68;
                  uVar13 = uVar6 + 2;
                  if (uVar16 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar16) = 100;
                    uVar13 = uVar6 + 3;
                    if (uVar6 + 3 < 0x3ff) {
                      *(undefined1 *)(param_3 + 2 + uVar16) = 0x61;
                      uVar13 = uVar6 + 4;
                      if (uVar6 + 4 < 0x3ff) {
                        *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                        uVar13 = uVar6 + 5;
                        if (uVar6 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar16) = 99;
                          uVar13 = uVar6 + 6;
                          if (uVar6 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar16) = 0x74;
                            uVar13 = uVar6 + 7;
                            if (uVar6 + 7 < 0x3ff) {
                              *(undefined1 *)(param_3 + 6 + uVar16) = 0x6c;
                              uVar16 = uVar6 + 8;
                              goto LAB_10006a7e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10006a7e:
                  uVar13 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006aa8:
                iVar21 = 8;
LAB_10006ab3:
                uVar3 = local_3c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                cVar9 = (char)uVar3;
                cVar7 = cVar9 + '7';
                if (uVar3 < 10) {
                  cVar7 = cVar9 + '0';
                }
                if (param_3 == 0) {
                  iVar21 = iVar21 + -1;
                  if (iVar21 == 0) goto LAB_10006b94;
                  goto LAB_10006ab3;
                }
                uVar16 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (*pcVar8 != '\0');
                if (uVar16 < 0x400) {
                  *(char *)(param_3 + -1 + uVar16) = cVar7;
                  *(undefined1 *)(param_3 + uVar16) = 0;
                }
                iVar21 = iVar21 + -1;
                if (iVar21 != 0) goto LAB_10006ab3;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar9 = 'h';
                  pcVar8 = str_10009989;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar6) = cVar9;
                    uVar6 = uVar6 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006b94:
                iVar21 = 8;
                do {
                  uVar3 = local_50 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar9 = (char)uVar3;
                  cVar7 = cVar9 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar9 + '0';
                  }
                  if (param_3 != 0) {
                    uVar16 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar16);
                      uVar16 = uVar16 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar16 < 0x400) {
                      *(char *)(param_3 + -1 + uVar16) = cVar7;
                      *(undefined1 *)(param_3 + uVar16) = 0;
                    }
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                uVar3 = 1;
                goto LAB_100037ae;
              }
            }
          }
        }
      }
      if (param_3 != 0) {
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10009974;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar9;
            uVar6 = uVar6 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar3 = 0;
LAB_100037ae:
        uVar20 = uVar20 | uVar3;
      }
    }
    local_48 = 0;
    local_38 = 0;
    local_3c = 0;
    local_50 = 0;
    uVar3 = local_34;
    if ((param_2[8] == '\f') && (param_2[9] == '\x03')) {
      uVar3 = *(uint *)(param_2 + 0x14);
      if ((uVar3 & 1) != 0 || uVar3 == 0) {
LAB_100038fa:
        local_58 = CONCAT44(PF_PART4(local_58, 4),uVar20);
        uVar16 = 0;
        uVar3 = local_34;
LAB_1000391d:
        local_5c = 0;
        uVar20 = *(uint *)(param_2 + uVar16 * 4 + 0x14);
        if ((uVar20 & 1) == 0) goto LAB_10003910;
        if ((((short)(uVar20 & 0xfffffffc) == 0 || (char)uVar11 != '\0') || (*param_1 != 0x54584b57)
            ) || ((uint)param_1[2] < 0x58)) goto LAB_10003910;
        if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10003910;
        iVar21 = (*(code *)(ulong)(uint)param_1[0x15])(uVar20 & 0xfffc,2,&local_5c);
        uVar3 = local_34;
        uVar11 = (ulong)local_4c;
        if (iVar21 == 0) goto LAB_10003910;
        if (param_3 == 0) {
          if (uVar16 != 0) goto LAB_10004293;
          goto LAB_1000452b;
        }
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (*(char *)(param_3 + uVar13) != '\0');
        if (uVar13 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10009995;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar13) = cVar9;
            uVar13 = uVar13 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar13 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar13) = 0;
        if (uVar16 == 0) {
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar16) = 0x30;
          }
LAB_100039e4:
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar16 = 0xffffffffffffffff;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar16) = 0x75;
            uVar13 = uVar6 + 2;
            if (uVar16 != 0x3fe) {
              *(undefined1 *)(uVar6 + 2 + param_3) = 0x73;
              uVar13 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar16) = 0x62;
                uVar13 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar16) = 0x49;
                  uVar13 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar16) = 0x6f;
                    uVar16 = uVar6 + 6;
                    goto LAB_10004502;
                  }
                }
              }
            }
          }
          else {
LAB_10004502:
            uVar13 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar13) = 0;
          uVar16 = 0;
          do {
            uVar6 = uVar16;
            uVar16 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
            uVar6 = uVar16;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        else {
LAB_10004293:
          uVar6 = 0;
          do {
            uVar15 = (uint)uVar16;
            uVar10 = (uVar16 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar16 + (char)uVar10 * -10 | 0x30;
            uVar13 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar6 = uVar13;
            uVar16 = uVar10;
          } while (9 < uVar15);
          do {
            while (uVar16 = uVar13 - 1, param_3 != 0) {
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar6) =
                     *(undefined1 *)((long)&local_e8 + uVar13 + 7);
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar13 = uVar16;
              if (uVar16 == 0) goto LAB_100039e4;
            }
            uVar13 = uVar16;
          } while (uVar16 != 0);
        }
LAB_1000452b:
        iVar21 = 8;
        do {
          while( true ) {
            uVar15 = (uVar20 & 0xfffffffc) >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
            cVar9 = (char)uVar15;
            cVar7 = cVar9 + '7';
            if (uVar15 < 10) {
              cVar7 = cVar9 + '0';
            }
            if (param_3 != 0) break;
            iVar21 = iVar21 + -1;
            if (iVar21 == 0) goto LAB_1000462c;
          }
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(char *)(param_3 + -1 + uVar16) = cVar7;
            *(undefined1 *)(param_3 + uVar16) = 0;
          }
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
          uVar6 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar9 = 'u';
          pcVar8 = str_100099a0;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar9;
            uVar6 = uVar6 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          uVar16 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar16 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
          uVar6 = uVar16;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000462c:
        iVar21 = 8;
        do {
          uVar20 = local_5c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
          cVar9 = (char)uVar20;
          cVar7 = cVar9 + '7';
          if (uVar20 < 10) {
            cVar7 = cVar9 + '0';
          }
          if (param_3 != 0) {
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(char *)(param_3 + -1 + uVar16) = cVar7;
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
          }
          iVar21 = iVar21 + -1;
          uVar20 = (uint)local_58;
        } while (iVar21 != 0);
        goto LAB_1000658d;
      }
      iVar21 = 0;
      if ((uVar3 & 6) == 4) {
        iVar21 = *(int *)(param_2 + 0x18);
      }
      uVar3 = uVar3 & 0xfffffff0;
      if (uVar3 == 0 && iVar21 == 0) goto LAB_100038fa;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_100038fa;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar21 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_100038fa;
        iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
        uVar11 = (ulong)local_4c;
        if (iVar21 == 0) goto LAB_100038fa;
        local_48 = local_e0 & 0xffffffff;
      }
      else {
        iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar21,0x1000);
        uVar11 = (ulong)local_4c;
        if (iVar21 == 0) goto LAB_100038fa;
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        uVar11 = 0xffffffffffffffff;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + 1 + uVar16) != '\0');
        if (uVar16 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar11) = 0x75;
          uVar6 = uVar16 + 2;
          if (uVar11 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
            uVar6 = uVar16 + 3;
            if (uVar16 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
              uVar6 = uVar16 + 4;
              if (uVar16 + 4 < 0x3ff) {
                *(undefined1 *)(uVar16 + 4 + param_3) = 0x4d;
                uVar6 = uVar16 + 5;
                if (uVar16 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                  uVar6 = uVar16 + 6;
                  if (uVar16 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                    uVar6 = uVar16 + 7;
                    if (uVar16 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                      uVar11 = uVar16 + 8;
                      goto LAB_100055b0;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_100055b0:
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
      }
      iVar21 = (uint)(local_48 >> 0x20 != 0) * 8 + 8;
      do {
        uVar15 = (uint)(local_48 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar3 = (uint)(byte)((char)uVar15 + 0x37);
        if (uVar15 < 10) {
          uVar3 = uVar15 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            uVar11 = uVar16 + 1;
          } while (*(char *)(param_3 + uVar16) != '\0');
          if (uVar16 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar16) = (char)uVar3;
              uVar16 = uVar16 + 1;
              uVar3 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar16 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((local_48 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
        }
      }
      if (local_48 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar11 = local_48 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar11 >> 0x20 == 0) &&
               ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_3c);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_3c);
          }
        }
        if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
          uVar11 = local_48 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar11 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
               ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_50);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_50);
          }
        }
      }
      uVar11 = (ulong)local_4c;
      if (param_3 == 0) goto LAB_100062ac;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar16 = 0xffffffffffffffff;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar16) = 0x75;
        uVar13 = uVar6 + 2;
        if (uVar16 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar16) = 0x73;
          uVar13 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar16) = 0x62;
            uVar13 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar13 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar16) = 0x65;
                uVar13 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar16) = 0x67;
                  uVar13 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar16) = 0x30;
                    uVar16 = uVar6 + 8;
                    goto LAB_10006283;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_10006283:
        uVar13 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar13) = 0;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100062ac:
      iVar21 = 8;
LAB_100062ba:
      do {
        uVar3 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar3;
        cVar7 = cVar9 + '7';
        if (uVar3 < 10) {
          cVar7 = cVar9 + '0';
        }
        if (param_3 == 0) goto LAB_1000630d;
        uVar16 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar8 != '\0');
        if (uVar16 < 0x400) {
          *(char *)(param_3 + -1 + uVar16) = cVar7;
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar16 = 0xffffffffffffffff;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar16) = 0x75;
        uVar13 = uVar6 + 2;
        if (uVar16 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar16) = 0x73;
          uVar13 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar16) = 0x62;
            uVar13 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar13 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar16) = 0x65;
                uVar13 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar16) = 0x67;
                  uVar13 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar16) = 0x34;
                    uVar16 = uVar6 + 8;
                    goto LAB_100063ce;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_100063ce:
        uVar13 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar13) = 0;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100063f8:
      iVar21 = 8;
      do {
        while( true ) {
          uVar3 = local_3c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
          cVar9 = (char)uVar3;
          cVar7 = cVar9 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar9 + '0';
          }
          if (param_3 != 0) break;
          iVar21 = iVar21 + -1;
          if (iVar21 == 0) goto LAB_10006538;
        }
        uVar16 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar8 != '\0');
        if (uVar16 < 0x400) {
          *(char *)(param_3 + -1 + uVar16) = cVar7;
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar16 = 0xffffffffffffffff;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar16) = 0x75;
        uVar13 = uVar6 + 2;
        if (uVar16 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar16) = 0x73;
          uVar13 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar16) = 0x62;
            uVar13 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar13 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar16) = 0x65;
                uVar13 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar16) = 0x67;
                  uVar13 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar16) = 0x38;
                    uVar16 = uVar6 + 8;
                    goto LAB_1000650e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1000650e:
        uVar13 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar13) = 0;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10006538:
      iVar21 = 8;
      do {
        uVar3 = local_50 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar3;
        cVar7 = cVar9 + '7';
        if (uVar3 < 10) {
          cVar7 = cVar9 + '0';
        }
        if (param_3 != 0) {
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(char *)(param_3 + -1 + uVar16) = cVar7;
            *(undefined1 *)(param_3 + uVar16) = 0;
          }
        }
        iVar21 = iVar21 + -1;
        uVar3 = local_34;
      } while (iVar21 != 0);
LAB_1000658d:
      uVar15 = 1;
      goto LAB_10003a5e;
    }
    goto LAB_10003a61;
  }
  uVar20 = 0;
  uVar15 = 0;
  goto LAB_10005094;
LAB_1000489d:
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) goto LAB_10004934;
  goto LAB_10004852;
LAB_10007df7:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) goto LAB_10007f24;
  goto LAB_10007dff;
code_r0x10008431:
  if (local_90 != 0) goto LAB_100084da;
LAB_10008555:
  if (local_8c != 0) goto LAB_10008619;
LAB_10008695:
  if (local_88 != 0) goto LAB_10008760;
  if (local_80 != 0) goto LAB_1000881a;
  uVar3 = local_34;
  if (local_d0 != 0) {
    iVar21 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_10008c23;
  }
  if (local_c8 != 0) {
    iVar21 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
    goto LAB_10008d60;
  }
LAB_10008fe1:
  uVar3 = local_34;
  if (local_78 != 0) {
LAB_10008fe9:
    uVar11 = 0;
    do {
      *(byte *)((long)&local_48 + uVar11) = (char)local_78 + (char)(local_78 / 10) * -10 | 0x30;
      uVar16 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar23 = 9 < local_78;
      uVar11 = uVar16;
      local_78 = local_78 / 10;
    } while (bVar23);
    do {
      while (uVar11 = uVar16 - 1, param_3 != 0) {
        uVar6 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar6);
          uVar6 = uVar6 + 1;
        } while (*pcVar8 != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar16 + 3);
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        uVar16 = uVar11;
        if (uVar11 == 0) goto LAB_10008ea3;
      }
      uVar16 = uVar11;
      local_34 = uVar3;
    } while (uVar11 != 0);
  }
LAB_10009075:
  uVar3 = local_34 | 1;
  goto LAB_1000509a;
LAB_10008a1d:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) goto LAB_10008adc;
  goto LAB_100089d4;
LAB_10003f80:
  bVar23 = uVar11 < 5;
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_10003f16;
  goto LAB_10003f96;
LAB_10006e4d:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) goto LAB_10006f38;
  goto LAB_10006e04;
LAB_100069bd:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) goto LAB_10006aa8;
  goto LAB_10006968;
LAB_10003910:
  uVar16 = uVar16 + 1;
  if (uVar16 == 6) goto LAB_10003a06;
  goto LAB_1000391d;
LAB_1000630d:
  iVar21 = iVar21 + -1;
  if (iVar21 == 0) goto LAB_100063f8;
  goto LAB_100062ba;
LAB_10003a06:
  uVar20 = (uint)local_58;
  if (param_3 != 0) {
    uVar16 = 0;
    do {
      uVar6 = uVar16;
      uVar16 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_100099aa;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar15 = 0;
LAB_10003a5e:
    uVar20 = uVar20 | uVar15;
  }
LAB_10003a61:
  local_48 = 0;
  local_38 = 0;
  local_3c = 0;
  if (param_2[8] == '\x02') {
    bVar23 = true;
    uVar16 = 0;
    local_58 = CONCAT44(PF_PART4(local_58, 4),uVar20);
LAB_10003aa8:
    if (uVar16 != 0) {
      if ((*(uint *)(param_2 + uVar16 * 4 + 0x10) & 7) != 4) goto LAB_10003abe;
LAB_10003bc0:
      uVar15 = *(uint *)(param_2 + uVar16 * 4 + 0x14);
      if ((uVar15 & 1) != 0) {
        if (!((short)(uVar15 & 0xfffffffc) == 0 || (char)uVar11 != '\0')) {
          if (*param_1 == 0x54584b57) {
            if (0x57 < (uint)param_1[2]) {
              if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
                local_e8 = (undefined1 *)CONCAT71(PF_PART7(local_e8, 1),bVar23);
                iVar21 = (*(code *)(ulong)(uint)param_1[0x15])(uVar15 & 0xfffc,2,&local_38);
                uVar3 = local_34;
                uVar11 = (ulong)local_4c;
                uVar20 = (uint)local_58;
                if (iVar21 == 0) goto LAB_10003a90;
                if (param_3 == 0) {
                  if (uVar16 != 0) goto LAB_10003ccf;
                  goto LAB_10004099;
                }
                uVar6 = 0;
                do {
                  uVar13 = uVar6;
                  uVar6 = uVar13 + 1;
                } while (*(char *)(param_3 + uVar13) != '\0');
                if (uVar13 + 1 < 0x400) {
                  cVar9 = ' ';
                  pcVar8 = str_100099f4;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar13) = cVar9;
                    uVar13 = uVar13 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar13 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar13) = 0;
                if (uVar16 == 0) {
                  uVar16 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined2 *)(param_3 + -1 + uVar16) = 0x30;
                  }
LAB_10003ca4:
                  uVar16 = 0;
                  do {
                    uVar6 = uVar16;
                    uVar16 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
                    uVar6 = uVar16;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar16 = 0;
                  do {
                    uVar6 = uVar16;
                    uVar16 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar9 = 'n';
                    pcVar8 = str_10009a03;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar6) = cVar9;
                      uVar6 = uVar6 + 1;
                      cVar9 = *pcVar8;
                      if (cVar9 == '\0') break;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar16 = 0;
                  do {
                    uVar6 = uVar16;
                    uVar16 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar16 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
                    uVar6 = uVar16;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                }
                else {
LAB_10003ccf:
                  uVar6 = 0;
                  do {
                    uVar14 = (uint)uVar16;
                    uVar10 = (uVar16 & 0xffffffff) / 10;
                    *(byte *)((long)&local_e0 + uVar6) = (char)uVar16 + (char)uVar10 * -10 | 0x30;
                    uVar13 = uVar6 + 1;
                    if (8 < uVar6) break;
                    uVar6 = uVar13;
                    uVar16 = uVar10;
                  } while (9 < uVar14);
                  do {
                    while (uVar16 = uVar13 - 1, param_3 != 0) {
                      uVar6 = 0;
                      do {
                        pcVar8 = (char *)(param_3 + uVar6);
                        uVar6 = uVar6 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar6 < 0x400) {
                        *(undefined1 *)(param_3 + -1 + uVar6) =
                             *(undefined1 *)((long)&local_e8 + uVar13 + 7);
                        *(undefined1 *)(param_3 + uVar6) = 0;
                      }
                      uVar13 = uVar16;
                      if (uVar16 == 0) goto LAB_10003ca4;
                    }
                    uVar13 = uVar16;
                  } while (uVar16 != 0);
                }
LAB_10004099:
                iVar21 = 8;
                do {
                  while( true ) {
                    uVar14 = (uVar15 & 0xfffffffc) >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                    cVar9 = (char)uVar14;
                    cVar7 = cVar9 + '7';
                    if (uVar14 < 10) {
                      cVar7 = cVar9 + '0';
                    }
                    if (param_3 != 0) break;
                    iVar21 = iVar21 + -1;
                    if (iVar21 == 0) goto LAB_10004184;
                  }
                  uVar16 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar16 < 0x400) {
                    *(char *)(param_3 + -1 + uVar16) = cVar7;
                    *(undefined1 *)(param_3 + uVar16) = 0;
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar9 = 'n';
                  pcVar8 = str_10009a0d;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar6) = cVar9;
                    uVar6 = uVar6 + 1;
                    cVar9 = *pcVar8;
                    if (cVar9 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar16 = 0;
                do {
                  uVar6 = uVar16;
                  uVar16 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar16 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
                  uVar6 = uVar16;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10004184:
                iVar21 = 8;
                do {
                  uVar15 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar9 = (char)uVar15;
                  cVar7 = cVar9 + '7';
                  if (uVar15 < 10) {
                    cVar7 = cVar9 + '0';
                  }
                  if (param_3 != 0) {
                    uVar16 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar16);
                      uVar16 = uVar16 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar16 < 0x400) {
                      *(char *)(param_3 + -1 + uVar16) = cVar7;
                      *(undefined1 *)(param_3 + uVar16) = 0;
                    }
                  }
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                goto LAB_10004e0d;
              }
            }
          }
        }
      }
LAB_10003a90:
      bVar23 = uVar16 < 5;
      uVar16 = uVar16 + 1;
      if (uVar16 == 6) goto LAB_10004e1a;
      goto LAB_10003aa8;
    }
LAB_10003abe:
    uVar15 = *(uint *)(param_2 + uVar16 * 4 + 0x14);
    if ((uVar15 & 1) != 0 || uVar15 == 0) goto LAB_10003bc0;
    iVar21 = 0;
    if ((uVar15 & 6) == 4) {
      if (uVar16 == 5) goto LAB_10003bc0;
      iVar21 = *(int *)(param_2 + uVar16 * 4 + 0x18);
    }
    uVar15 = uVar15 & 0xfffffff0;
    if (uVar15 == 0 && iVar21 == 0) goto LAB_10003bc0;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if ((char)uVar11 != '\0') goto LAB_10003bc0;
    if (*param_1 != 0x54584b57) goto LAB_10003bc0;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar21 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar15,0,0x1000);
          uVar11 = (ulong)local_4c;
          uVar20 = (uint)local_58;
          uVar3 = local_34;
          if (iVar21 != 0) {
            local_48 = local_e0 & 0xffffffff;
            goto LAB_10004334;
          }
        }
      }
      goto LAB_10003bc0;
    }
    iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar15,iVar21,0x1000);
    uVar11 = (ulong)local_4c;
    uVar20 = (uint)local_58;
    uVar3 = local_34;
    if (iVar21 == 0) goto LAB_10003bc0;
LAB_10004334:
    uVar3 = local_34;
    local_e8 = (undefined1 *)CONCAT71(PF_PART7(local_e8, 1),bVar23);
    if (param_3 == 0) {
      if (uVar16 != 0) goto LAB_100043e4;
      goto LAB_100046fa;
    }
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar9 = ' ';
      pcVar8 = str_100099bf;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    if (uVar16 == 0) {
      uVar11 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (*pcVar8 != '\0');
      if (uVar11 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
      }
LAB_100043a1:
      uVar11 = 0;
      do {
        uVar16 = uVar11;
        uVar11 = uVar16 + 1;
      } while (*(char *)(param_3 + uVar16) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar16 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar16) = 0;
      uVar11 = 0;
      do {
        uVar16 = uVar11;
        uVar11 = uVar16 + 1;
      } while (*(char *)(param_3 + uVar16) != '\0');
      if (uVar16 + 1 < 0x400) {
        cVar9 = 'n';
        pcVar8 = str_100099d0;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar16) = cVar9;
          uVar16 = uVar16 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar16 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar16) = 0;
      uVar11 = 0;
      do {
        uVar16 = uVar11;
        uVar11 = uVar16 + 1;
      } while (*(char *)(param_3 + uVar16) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar16 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar16) = 0;
    }
    else {
LAB_100043e4:
      uVar11 = 0;
      do {
        uVar15 = (uint)uVar16;
        uVar13 = (uVar16 & 0xffffffff) / 10;
        *(byte *)((long)&local_e0 + uVar11) = (char)uVar16 + (char)uVar13 * -10 | 0x30;
        uVar6 = uVar11 + 1;
        if (8 < uVar11) break;
        uVar11 = uVar6;
        uVar16 = uVar13;
      } while (9 < uVar15);
      do {
        while (uVar11 = uVar6 - 1, param_3 != 0) {
          uVar16 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
          } while (*pcVar8 != '\0');
          if (uVar16 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar16) = *(undefined1 *)((long)&local_e8 + uVar6 + 7);
            *(undefined1 *)(param_3 + uVar16) = 0;
          }
          uVar6 = uVar11;
          if (uVar11 == 0) goto LAB_100043a1;
        }
        uVar6 = uVar11;
      } while (uVar11 != 0);
    }
LAB_100046fa:
    bVar23 = local_48 >> 0x20 != 0;
    iVar21 = (uint)bVar23 * 8 + 8;
    do {
      uVar14 = (uint)(local_48 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar15 = (uint)(byte)((char)uVar14 + 0x37);
      if (uVar14 < 10) {
        uVar15 = uVar14 + 0x30;
      }
      PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar16 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_e0 + 1);
          do {
            *(char *)(param_3 + uVar16) = (char)uVar15;
            uVar16 = uVar16 + 1;
            uVar15 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar16 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar23) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10004bca;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      uVar3 = local_34;
    }
LAB_10004bca:
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      uVar11 = local_48 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10004c33;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_3c);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_3c);
      }
      uVar3 = local_34;
    }
LAB_10004c33:
    uVar11 = (ulong)local_4c;
    if (param_3 != 0) {
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar9 = 'n';
        pcVar8 = str_100099dc;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar9;
          uVar6 = uVar6 + 1;
          cVar9 = *pcVar8;
          if (cVar9 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar16 = 0;
      do {
        uVar6 = uVar16;
        uVar16 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar16 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
        uVar6 = uVar16;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
    iVar21 = 8;
    do {
      while( true ) {
        uVar15 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
        cVar9 = (char)uVar15;
        cVar7 = cVar9 + '7';
        if (uVar15 < 10) {
          cVar7 = cVar9 + '0';
        }
        if (param_3 != 0) break;
        iVar21 = iVar21 + -1;
        if (iVar21 == 0) goto LAB_10004db4;
      }
      uVar16 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar16);
        uVar16 = uVar16 + 1;
      } while (*pcVar8 != '\0');
      if (uVar16 < 0x400) {
        *(char *)(param_3 + -1 + uVar16) = cVar7;
        *(undefined1 *)(param_3 + uVar16) = 0;
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    uVar16 = 0;
    do {
      uVar6 = uVar16;
      uVar16 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar16 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar16) = 0x20;
      uVar6 = uVar16;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar16 = 0;
    do {
      uVar6 = uVar16;
      uVar16 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar9 = 'n';
      pcVar8 = str_100099e8;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar9;
        uVar6 = uVar6 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar16 = 0;
    do {
      uVar6 = uVar16;
      uVar16 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar16 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar16) = 0x3d;
      uVar6 = uVar16;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10004db4:
    iVar21 = 8;
    do {
      uVar15 = local_3c >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
      cVar9 = (char)uVar15;
      cVar7 = cVar9 + '7';
      if (uVar15 < 10) {
        cVar7 = cVar9 + '0';
      }
      if (param_3 != 0) {
        uVar16 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar16);
          uVar16 = uVar16 + 1;
        } while (*pcVar8 != '\0');
        if (uVar16 < 0x400) {
          *(char *)(param_3 + -1 + uVar16) = cVar7;
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
LAB_10004e0d:
    uVar20 = uVar20 | (byte)local_e8 & 1;
  }
LAB_10004e1a:
  local_38 = 0;
  uVar15 = 0;
  if (param_2[8] == '\x03') {
    uVar15 = *(uint *)(param_2 + 0x14);
    local_58 = CONCAT44(PF_PART4(local_58, 4),uVar20);
    if ((uVar15 & 1) == 0 && uVar15 != 0) {
      iVar21 = 0;
      if ((uVar15 & 6) == 4) {
        iVar21 = *(int *)(param_2 + 0x18);
      }
      uVar15 = uVar15 & 0xfffffff0;
      if (uVar15 == 0 && iVar21 == 0) goto LAB_10004f38;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar11 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10004f38;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (0x67 < (uint)param_1[2] && iVar21 == 0) {
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            uVar16 = 0;
            iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar15,0,0x1000,&local_e0);
            uVar11 = (ulong)local_4c;
            uVar3 = local_34;
            if (iVar21 != 0) {
              local_48 = local_e0 & 0xffffffff;
              bVar23 = true;
              bVar22 = true;
              if (param_3 == 0) goto LAB_10005300;
              goto LAB_1000512a;
            }
          }
        }
        goto LAB_10004f38;
      }
      iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar15,iVar21,0x1000,&local_48);
      uVar11 = (ulong)local_4c;
      uVar3 = local_34;
      if (iVar21 == 0) goto LAB_10004f38;
      if (param_3 == 0) {
LAB_10005300:
        bVar23 = local_48 >> 0x20 != 0;
        iVar21 = (uint)bVar23 * 8 + 8;
        bVar2 = true;
        bVar22 = true;
        uVar3 = local_34;
      }
      else {
        uVar16 = 0;
        bVar23 = true;
        bVar22 = true;
LAB_1000512a:
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar9 = ' ';
          pcVar8 = str_10009a1b;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar9;
            uVar6 = uVar6 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        if (bVar23) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          uVar3 = local_34;
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
        }
        else {
          bVar23 = false;
LAB_100051a9:
          uVar3 = local_34;
          uVar11 = 0;
          do {
            uVar20 = (uint)uVar16;
            uVar13 = (uVar16 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar11) = (char)uVar16 + (char)uVar13 * -10 | 0x30;
            uVar6 = uVar11 + 1;
            if (8 < uVar11) break;
            uVar11 = uVar6;
            uVar16 = uVar13;
          } while (9 < uVar20);
LAB_100051f3:
          do {
            uVar11 = uVar6 - 1;
            if (bVar23) {
              uVar6 = uVar11;
              if (uVar11 == 0) {
                bVar23 = local_48 >> 0x20 != 0;
                iVar21 = (uint)bVar23 * 8 + 8;
                bVar2 = true;
                goto LAB_10005319;
              }
              goto LAB_100051f3;
            }
            uVar16 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar16);
              uVar16 = uVar16 + 1;
            } while (*pcVar8 != '\0');
            if (uVar16 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar16) = *(undefined1 *)((long)&local_e8 + uVar6 + 7);
              *(undefined1 *)(param_3 + uVar16) = 0;
            }
            uVar6 = uVar11;
          } while (uVar11 != 0);
        }
        bVar23 = local_48 >> 0x20 != 0;
        iVar21 = (uint)bVar23 * 8 + 8;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar16 + 1 < 0x400) {
          cVar9 = 'd';
          pcVar8 = str_10009a2c;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar16) = cVar9;
            uVar16 = uVar16 + 1;
            cVar9 = *pcVar8;
            if (cVar9 == '\0') break;
          } while (uVar16 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        uVar11 = 0;
        do {
          uVar16 = uVar11;
          uVar11 = uVar16 + 1;
        } while (*(char *)(param_3 + uVar16) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar16 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar16) = 0;
        bVar2 = false;
      }
LAB_10005319:
      do {
        uVar15 = (uint)(local_48 >> ((char)iVar21 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar20 = (uint)(byte)((char)uVar15 + 0x37);
        if (uVar15 < 10) {
          uVar20 = uVar15 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (!bVar2) {
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            uVar11 = uVar16 + 1;
          } while (*(char *)(param_3 + uVar16) != '\0');
          if (uVar16 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar16) = (char)uVar20;
              uVar16 = uVar16 + 1;
              uVar20 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar16 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar16) = 0;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((bVar23) || ((uint)param_1[2] < 0x6c)) ||
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10005089;
          iVar21 = (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
        }
        else {
          iVar21 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
        }
        uVar3 = local_34;
        if (iVar21 != 0) {
          if (!bVar2) {
            uVar11 = 0;
            do {
              uVar16 = uVar11;
              uVar11 = uVar16 + 1;
            } while (*(char *)(param_3 + uVar16) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar16 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar16) = 0;
            uVar11 = 0;
            do {
              uVar16 = uVar11;
              uVar11 = uVar16 + 1;
            } while (*(char *)(param_3 + uVar16) != '\0');
            if (uVar16 + 1 < 0x400) {
              cVar9 = 'd';
              pcVar8 = str_10009a38;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar16) = cVar9;
                uVar16 = uVar16 + 1;
                cVar9 = *pcVar8;
                if (cVar9 == '\0') break;
              } while (uVar16 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar16) = 0;
            uVar11 = 0;
            do {
              uVar16 = uVar11;
              uVar11 = uVar16 + 1;
            } while (*(char *)(param_3 + uVar16) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar16 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar16) = 0;
          }
          iVar21 = 8;
          do {
            uVar20 = local_38 >> ((char)iVar21 * '\x04' - 4U & 0x1f) & 0xf;
            cVar9 = (char)uVar20;
            cVar7 = cVar9 + '7';
            if (uVar20 < 10) {
              cVar7 = cVar9 + '0';
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
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
      }
    }
    else {
LAB_10004f38:
      bVar22 = true;
      uVar16 = 1;
      lVar19 = 5;
      local_e8 = param_2;
      do {
        if ((*(uint *)(local_e8 + uVar16 * 4 + 0x10) & 7) != 4) {
          uVar20 = *(uint *)(local_e8 + uVar16 * 4 + 0x14);
          if ((uVar20 & 1) == 0 && uVar20 != 0) {
            iVar21 = 0;
            if ((uVar20 & 6) == 4) {
              if (lVar19 == 1) break;
              iVar21 = *(int *)(local_e8 + uVar16 * 4 + 0x18);
            }
            uVar20 = uVar20 & 0xfffffff0;
            if (uVar20 != 0 || iVar21 != 0) {
              local_48 = 0;
              local_e0 = local_e0 & 0xffffffff00000000;
              if (((char)uVar11 == '\0') && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)
                   ) {
                  if (0x67 < (uint)param_1[2] && iVar21 == 0) {
                    if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
                      iVar21 = (*(code *)(ulong)(uint)param_1[0x19])(uVar20,0,0x1000,&local_e0);
                      uVar11 = (ulong)local_4c;
                      uVar3 = local_34;
                      if (iVar21 != 0) {
                        local_48 = local_e0 & 0xffffffff;
                        goto joined_r0x10005079;
                      }
                    }
                  }
                }
                else {
                  iVar21 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar20,iVar21,0x1000,&local_48);
                  uVar11 = (ulong)local_4c;
                  uVar3 = local_34;
                  if (iVar21 != 0) {
joined_r0x10005079:
                    if (param_3 != 0) {
                      bVar23 = false;
                      goto LAB_1000512a;
                    }
                    bVar23 = true;
                    goto LAB_100051a9;
                  }
                }
              }
            }
          }
        }
        bVar22 = uVar16 < 5;
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      bVar22 = false;
    }
LAB_10005089:
    uVar15 = (uint)bVar22;
    uVar20 = (uint)local_58;
  }
LAB_10005094:
  uVar3 = uVar20 | uVar3 | uVar15;
LAB_1000509a:
  pcVar8 = str_100096b7;
  if (uVar3 == 0) {
    pcVar8 = str_100096c7;
  }
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar16 = uVar11;
      uVar11 = uVar16 + 1;
    } while (*(char *)(param_3 + uVar16) != '\0');
    if ((uVar16 + 1 < 0x400) && (cVar9 = *pcVar8, cVar9 != '\0')) {
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar16) = cVar9;
        uVar16 = uVar16 + 1;
        cVar9 = *pcVar8;
        if (cVar9 == '\0') break;
      } while (uVar16 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar16) = 0;
  }
  return;
}

#undef str_100096b7
#undef str_100096c7
#undef str_100096db
#undef str_100096f3
#undef str_1000970b
#undef str_10009724
#undef str_10009735
#undef str_10009745
#undef str_10009754
#undef str_10009770
#undef str_1000977b
#undef str_1000978b
#undef str_1000979b
#undef str_100097a8
#undef str_100097be
#undef str_100097d4
#undef str_100097ea
#undef str_10009800
#undef str_10009819
#undef str_10009831
#undef str_1000983e
#undef str_1000984f
#undef str_10009863
#undef str_10009873
#undef str_1000988a
#undef str_1000989d
#undef str_100098a7
#undef str_100098ba
#undef str_100098d1
#undef str_100098dd
#undef str_100098e9
#undef str_100098f6
#undef str_10009900
#undef str_10009914
#undef str_10009923
#undef str_10009936
#undef str_10009948
#undef str_1000995e
#undef str_10009968
#undef str_10009974
#undef str_10009989
#undef str_10009995
#undef str_100099a0
#undef str_100099aa
#undef str_100099bf
#undef str_100099d0
#undef str_100099dc
#undef str_100099e8
#undef str_100099f4
#undef str_10009a03
#undef str_10009a0d
#undef str_10009a1b
#undef str_10009a2c
#undef str_10009a38
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
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
#undef local_84
#undef local_80
#undef local_78
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef str_10009a4f
#define str_10009a4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
#undef str_10009a5a
#define str_10009a5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46fU)))
#undef str_10009a69
#define str_10009a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47eU)))
#undef str_10009a7a
#define str_10009a7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48fU)))
#undef str_10009a8d
#define str_10009a8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a2U)))
#undef str_10009aa0
#define str_10009aa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b5U)))
#undef str_10009ab0
#define str_10009ab0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c5U)))
#undef str_10009abf
#define str_10009abf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_10009ace
#define str_10009ace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e3U)))
#undef str_10009adf
#define str_10009adf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
#undef str_10009aea
#define str_10009aea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#undef str_10009af6
#define str_10009af6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50bU)))
#undef str_10009b00
#define str_10009b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x515U)))
#undef str_10009b09
#define str_10009b09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51eU)))
#undef str_10009b14
#define str_10009b14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x529U)))
#undef str_10009b1d
#define str_10009b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#undef str_10009b25
#define str_10009b25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53aU)))
#undef str_10009b2e
#define str_10009b2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_10009b35
#define str_10009b35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54aU)))
#undef str_10009b48
#define str_10009b48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_10009b5b
#define str_10009b5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_10009b6e
#define str_10009b6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x583U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009090
 */

char * recovered_10009090(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_10009a4f;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_10009b09;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_10009b00;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_100091a6;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_100091a6:
        return str_10009b2e;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_10009b25;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_10009b14;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10009aea;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000924a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10009af6;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10009b1d;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_10009a5a;
      case 0x1001:
      case 0x1042:
        return str_10009a69;
      case 0x1002:
      case 0x1045:
        return str_10009a7a;
      case 0x1003:
      case 0x1043:
        return str_10009a8d;
      case 0x1004:
      case 0x1048:
        return str_10009aa0;
      case 0x1005:
      case 0x1044:
        return str_10009ab0;
      default:
        return str_10009adf;
      case 0x1050:
        return str_10009abf;
      case 0x1052:
        return str_10009ace;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_10009b5b;
    case 2:
      return str_10009b48;
    case 3:
      return str_10009b35;
    case 4:
      pcVar2 = str_10009b6e;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000924a:
        pcVar2 = recovered_10009580((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_10009a4f
#undef str_10009a5a
#undef str_10009a69
#undef str_10009a7a
#undef str_10009a8d
#undef str_10009aa0
#undef str_10009ab0
#undef str_10009abf
#undef str_10009ace
#undef str_10009adf
#undef str_10009aea
#undef str_10009af6
#undef str_10009b00
#undef str_10009b09
#undef str_10009b14
#undef str_10009b1d
#undef str_10009b25
#undef str_10009b2e
#undef str_10009b35
#undef str_10009b48
#undef str_10009b5b
#undef str_10009b6e

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009420
 */

undefined8
recovered_10009420(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

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

#undef DAT_10009b84
#define DAT_10009b84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x599U)))
#undef DAT_10009b89
#define DAT_10009b89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59eU)))
#undef DAT_10009b8e
#define DAT_10009b8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3U)))
#undef DAT_10009b93
#define DAT_10009b93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_10009b98
#define str_10009b98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5adU)))
#undef str_10009ba3
#define str_10009ba3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b8U)))
#undef str_10009bac
#define str_10009bac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009580
 */

char * recovered_10009580(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_10009b84;
    }
    if (param_1 == 0x10) {
      return &DAT_10009b89;
    }
    if (param_1 == 0x20) {
      return &DAT_10009b8e;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_10009b93;
    }
    if (param_1 == 0x80) {
      return str_10009b98;
    }
    if (param_1 == 0xfe) {
      return str_10009ba3;
    }
  }
  return str_10009bac;
}

#undef DAT_10009b84
#undef DAT_10009b89
#undef DAT_10009b8e
#undef DAT_10009b93
#undef str_10009b98
#undef str_10009ba3
#undef str_10009bac

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
