/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

void * recovered_10001320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

/* Pooka's Free Software License. Recovered NVMe initialization and provider registration. */
int recovered_10001330(int *api)
{
 if(!api || (uint)api[0]!=0x54584b57U || (uint)api[2]<16)return 0;
 char text[96];uint n=0;const char *prefix="nvme-storage-driver: kernel API v";
 while(*prefix)text[n++]=*prefix++;
 char digits[10];uint count=0,value=(uint)api[1];do{digits[count++]=(char)('0'+value%10);value/=10;}while(value);
 while(count)text[n++]=digits[--count];const char *suffix=" ready";while(*suffix)text[n++]=*suffix++;text[n]=0;
 if((uint)api[2]>=44 && api[10])((void (*)(const char *))(uintptr_t)(uint)api[10])(text);
 *(int **)(pf_module_state+0x11c9U)=api;
 if((uint)api[0]!=0x54584b57U || (uint)api[2]<96 || !api[23])return 0;
 uint found=0;byte first[44],other[44];
 for(uint bus=0;bus<32;bus++)for(uint slot=0;slot<32;slot++){
  if(!recovered_100030a0(api,bus,slot,0,first))continue;
  found+=recovered_10001790(api,(ushort *)first);
  if(first[12]&128)for(uint function=1;function<8;function++)if(recovered_100030a0(api,bus,slot,function,other))found+=recovered_10001790(api,(ushort *)other);
 }
 uint drives=*(uint *)(pf_module_state+0x11cdU);
 if(!drives || !found || (uint)api[0]!=0x54584b57U || (uint)api[2]<212 || !api[52])return 0;
 uint provider[6]={1,drives,(uint)(uintptr_t)&recovered_10002e90,(uint)(uintptr_t)&recovered_10002f60,(uint)(uintptr_t)&recovered_10002f90,(uint)(uintptr_t)&recovered_10002fc0};
 return ((int (*)(void *))(uintptr_t)(uint)api[52])(provider)!=0;
}


#undef DAT_10003e96
#define DAT_10003e96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_10003f8d
#define DAT_10003f8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x156U)))
#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x11cdU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x11d1U)))
#undef DAT_1000500c
#define DAT_1000500c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11d5U)))
#undef DAT_100052fc
#define DAT_100052fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c5U)))
#undef DAT_10005300
#define DAT_10005300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c9U)))
#undef DAT_10005304
#define DAT_10005304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cdU)))
#undef DAT_10005308
#define DAT_10005308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14d1U)))
#undef DAT_1000530c
#define DAT_1000530c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14d5U)))
#undef str_10003e73
#define str_10003e73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_10003e87
#define str_10003e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10003e8e
#define str_10003e8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_10003e99
#define str_10003e99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62U)))
#undef str_10003eb5
#define str_10003eb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_10003ec5
#define str_10003ec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_10003ee0
#define str_10003ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_10003eee
#define str_10003eee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7U)))
#undef str_10003f06
#define str_10003f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcfU)))
#undef str_10003f1e
#define str_10003f1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7U)))
#undef str_10003f37
#define str_10003f37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_10003f48
#define str_10003f48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111U)))
#undef str_10003f58
#define str_10003f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_10003f67
#define str_10003f67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
#undef str_10003f78
#define str_10003f78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141U)))
#undef str_10003f91
#define str_10003f91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#undef str_10003f99
#define str_10003f99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#define local_444 (*(undefined2 *)(frame + 28))
#define local_44 (*(uint *)(frame + 1052))
#define local_40 (*(uint *)(frame + 1056))
#define local_3c (*(undefined4 *)(frame + 1060))
#define local_38 (*(uint *)(frame + 1064))
#define local_34 (*(uint *)(frame + 1068))
#define local_30 (*(undefined4 *)(frame + 1072))
#define local_2c (*(uint (*)[3])(frame + 1076))
#define local_20 (*(uint *)(frame + 1088))
#define local_1c (*(ushort * *)(frame + 1092))
#define local_18 (*(undefined4 * *)(frame + 1096))
#define local_14 (*(int * *)(frame + 1100))
#define cStack_445 (*(char *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001790
 */

uint recovered_10001790(int *api,ushort *device)

{
  unsigned char frame[1152] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  byte bVar9;
  uint uVar10;
  code *pcVar11;
  ushort *puVar12;
  char cVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  char *pcVar17;
  uint *puVar18;
  int iVar19;
  int *piVar20;

  if ((char)device[4] != '\x01') {
    return 0;
  }
  if (*(char *)((int)device + 9) != '\b') {
    return 0;
  }
  if ((char)device[5] != '\x02') {
    return 0;
  }
  if (3 < DAT_10005008) {
    return 0;
  }
  PF_PART1(local_444, 0) = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  local_44 = DAT_10005008;
  if (uVar10 + 1 < 0x400) {
    cVar13 = 't';
    pcVar17 = str_10003e73;
    do {
      pcVar17 = pcVar17 + 1;
      *(char *)((int)&local_444 + uVar10) = cVar13;
      uVar10 = uVar10 + 1;
      cVar13 = *pcVar17;
      if (cVar13 == '\0') break;
    } while (uVar10 < 0x3ff);
  }
  local_18 = (undefined4 *)(&DAT_1000500c + DAT_10005008 * 0xbc);
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  uVar1 = device[2];
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar10) = 0x20;
    uVar10 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  if (uVar10 + 1 < 0x400) {
    cVar13 = 'v';
    pcVar17 = str_10003e87;
    do {
      pcVar17 = pcVar17 + 1;
      *(char *)((int)&local_444 + uVar10) = cVar13;
      uVar10 = uVar10 + 1;
      cVar13 = *pcVar17;
      if (cVar13 == '\0') break;
    } while (uVar10 < 0x3ff);
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  local_14 = api;
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar10) = 0x3d;
    uVar10 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  iVar19 = 8;
  do {
    uVar15 = uVar1 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
    bVar14 = (byte)uVar15;
    if (uVar15 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    uVar7 = 0;
    do {
      uVar10 = uVar7;
      uVar7 = uVar10 + 1;
    } while (*(char *)((int)&local_444 + uVar10) != '\0');
    if (uVar10 + 1 < 0x400) {
      *(byte *)((int)&local_444 + uVar10) = bVar14;
      *(undefined1 *)((int)&local_444 + uVar10 + 1) = 0;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  uVar1 = device[3];
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar10) = 0x20;
    uVar10 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  if (uVar10 + 1 < 0x400) {
    cVar13 = 'd';
    pcVar17 = str_10003e8e;
    do {
      pcVar17 = pcVar17 + 1;
      *(char *)((int)&local_444 + uVar10) = cVar13;
      uVar10 = uVar10 + 1;
      cVar13 = *pcVar17;
      if (cVar13 == '\0') break;
    } while (uVar10 < 0x3ff);
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    uVar7 = uVar10 + 1;
  } while (*(char *)((int)&local_444 + uVar10) != '\0');
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar10) = 0x3d;
    uVar10 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar10) = 0;
  iVar19 = 8;
  do {
    uVar15 = uVar1 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
    bVar14 = (byte)uVar15;
    if (uVar15 < 10) {
      bVar14 = bVar14 | 0x30;
    }
    else {
      bVar14 = bVar14 + 0x37;
    }
    uVar7 = 0;
    do {
      uVar10 = uVar7;
      uVar7 = uVar10 + 1;
    } while (*(char *)((int)&local_444 + uVar10) != '\0');
    if (uVar10 + 1 < 0x400) {
      *(byte *)((int)&local_444 + uVar10) = bVar14;
      *(undefined1 *)((int)&local_444 + uVar10 + 1) = 0;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  uVar10 = (uint)(byte)*device;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_444 + uVar6) != '\0');
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar6) = 0x20;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar6) = 0;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_444 + uVar6) != '\0');
  if (uVar6 + 1 < 0x400) {
    cVar13 = 'b';
    pcVar17 = &DAT_10003e96;
    do {
      *(char *)((int)&local_444 + uVar6) = cVar13;
      uVar6 = uVar6 + 1;
      cVar13 = *pcVar17;
      if (cVar13 == '\0') break;
      pcVar17 = pcVar17 + 1;
    } while (uVar6 < 0x3ff);
  }
  *(undefined1 *)((int)&local_444 + uVar6) = 0;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_444 + uVar6) != '\0');
  if (uVar7 < 0x400) {
    *(undefined1 *)((int)&local_444 + uVar6) = 0x3d;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)&local_444 + uVar6) = 0;
  piVar20 = local_14;
  if (uVar10 == 0) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar6) = 0x30;
    }
  }
  else {
    local_1c = device;
    local_20 = uVar10;
    uVar7 = 0;
    uVar6 = uVar10;
    do {
      *(byte *)((int)local_2c + uVar7) = (byte)(uVar6 % 10) | 0x30;
      piVar20 = local_14;
      device = local_1c;
      uVar10 = local_20;
      uVar16 = uVar7 + 1;
      if (8 < uVar7) break;
      bVar5 = 9 < uVar6;
      uVar7 = uVar16;
      uVar6 = uVar6 / 10;
    } while (bVar5);
    do {
      iVar19 = uVar16 - 1;
      uVar16 = uVar16 - 1;
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6 + 1;
      } while (*(char *)((int)&local_444 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(undefined1 *)((int)&local_444 + uVar6) = *(undefined1 *)((int)local_2c + iVar19);
        *(undefined1 *)((int)&local_444 + uVar6 + 1) = 0;
      }
    } while (uVar16 != 0);
  }
  local_2c[0] = 0;
  local_30 = 0;
  if ((((piVar20 == (int *)0x0) || (*piVar20 != 0x54584b57)) || ((uint)piVar20[2] < 100)) ||
     (piVar20[0x18] == 0)) {
    uVar7 = 0;
    do {
      uVar10 = uVar7;
      uVar7 = uVar10 + 1;
    } while (*(char *)((int)&local_444 + uVar10) != '\0');
    if (uVar10 + 1 < 0x400) {
      cVar13 = ' ';
      pcVar17 = str_10003eee;
      do {
        pcVar17 = pcVar17 + 1;
        *(char *)((int)&local_444 + uVar10) = cVar13;
        uVar10 = uVar10 + 1;
        cVar13 = *pcVar17;
        if (cVar13 == '\0') break;
      } while (uVar10 < 0x3ff);
    }
LAB_10001c87:
    *(undefined1 *)((int)&local_444 + uVar10) = 0;
LAB_10001c8f:
    if (piVar20 == (int *)0x0) {
      return 0;
    }
    pcVar11 = (code *)piVar20[3];
    pcVar17 = str_10003e99;
  }
  else {
    if ((code *)piVar20[0x17] == (code *)0x0) {
LAB_10001cc9:
      uVar7 = 0;
      do {
        uVar10 = uVar7;
        uVar7 = uVar10 + 1;
      } while (*(char *)((int)&local_444 + uVar10) != '\0');
      if (uVar10 + 1 < 0x400) {
        cVar13 = ' ';
        pcVar17 = str_10003f06;
        do {
          pcVar17 = pcVar17 + 1;
          *(char *)((int)&local_444 + uVar10) = cVar13;
          uVar10 = uVar10 + 1;
          cVar13 = *pcVar17;
          if (cVar13 == '\0') break;
        } while (uVar10 < 0x3ff);
      }
      goto LAB_10001c87;
    }
    local_20 = uVar10;
    local_1c = device;
    iVar19 = (*(code *)piVar20[0x17])
                       (uVar10,*(undefined1 *)((int)device + 1),(char)device[1],4,2,local_2c);
    piVar4 = local_14;
    if (iVar19 == 0) goto LAB_10001cc9;
    if ((*(uint *)(local_1c + 10) & 1) == 0) {
      uVar7 = (uint)(*(uint *)(local_1c + 10) != 0) * 2;
    }
    else {
      uVar7 = 1;
    }
    uVar10 = uVar7;
    if (*(uint *)(local_1c + 0xc) != 0) {
      uVar10 = uVar7 | 2;
    }
    if ((*(uint *)(local_1c + 0xc) & 1) != 0) {
      uVar10 = uVar7 | 1;
    }
    uVar7 = uVar10;
    if (*(uint *)(local_1c + 0xe) != 0) {
      uVar7 = uVar10 | 2;
    }
    if ((*(uint *)(local_1c + 0xe) & 1) != 0) {
      uVar7 = uVar10 | 1;
    }
    uVar10 = uVar7;
    if (*(uint *)(local_1c + 0x10) != 0) {
      uVar10 = uVar7 | 2;
    }
    if ((*(uint *)(local_1c + 0x10) & 1) != 0) {
      uVar10 = uVar7 | 1;
    }
    uVar7 = uVar10;
    if (*(uint *)(local_1c + 0x12) != 0) {
      uVar7 = uVar10 | 2;
    }
    if ((*(uint *)(local_1c + 0x12) & 1) != 0) {
      uVar7 = uVar10 | 1;
    }
    uVar10 = uVar7;
    if (*(uint *)(local_1c + 0x14) != 0) {
      uVar10 = uVar7 | 2;
    }
    if ((*(uint *)(local_1c + 0x14) & 1) != 0) {
      uVar10 = uVar7 | 1;
    }
    uVar7 = uVar10 | 4;
    if (((char)local_1c[4] == '\x06') && (*(char *)((int)local_1c + 9) != '\0')) {
      uVar7 = uVar10 | 6;
    }
    local_30 = local_2c[0] | uVar7;
    if ((*piVar20 != 0x54584b57) || ((uint)piVar20[2] < 100)) {
LAB_10001e50:
      uVar7 = 0;
      do {
        uVar10 = uVar7;
        uVar7 = uVar10 + 1;
      } while (*(char *)((int)&local_444 + uVar10) != '\0');
      if (uVar10 + 1 < 0x400) {
        cVar13 = ' ';
        pcVar17 = str_10003f1e;
        do {
          pcVar17 = pcVar17 + 1;
          *(char *)((int)&local_444 + uVar10) = cVar13;
          uVar10 = uVar10 + 1;
          cVar13 = *pcVar17;
          if (cVar13 == '\0') break;
        } while (uVar10 < 0x3ff);
      }
      goto LAB_10001c87;
    }
    if ((code *)piVar20[0x18] == (code *)0x0) goto LAB_10001e50;
    local_20 = uVar7;
    iVar19 = (*(code *)piVar20[0x18])
                       (*local_1c & 0xff,*local_1c >> 8,(char)local_1c[1],4,2,local_2c[0] | uVar7);
    piVar20 = piVar4;
    if (iVar19 == 0) goto LAB_10001e50;
    if (((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) &&
       ((code *)piVar4[0x17] != (code *)0x0)) {
      (*(code *)piVar4[0x17])(*local_1c & 0xff,*local_1c >> 8,(char)local_1c[1],4,2,&local_30);
    }
    puVar2 = local_1c;
    uVar10 = local_2c[0];
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar6) = 0x20;
      uVar6 = uVar7;
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar13 = 'p';
      pcVar17 = str_10003f37;
      do {
        pcVar17 = pcVar17 + 1;
        *(char *)((int)&local_444 + uVar6) = cVar13;
        uVar6 = uVar6 + 1;
        cVar13 = *pcVar17;
        if (cVar13 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar6) = 0x3d;
      uVar6 = uVar7;
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    iVar19 = 8;
    do {
      uVar7 = uVar10 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar7;
      if (uVar7 < 10) {
        bVar14 = bVar14 | 0x30;
      }
      else {
        bVar14 = bVar14 + 0x37;
      }
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6 + 1;
      } while (*(char *)((int)&local_444 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(byte *)((int)&local_444 + uVar6) = bVar14;
        *(undefined1 *)((int)&local_444 + uVar6 + 1) = 0;
      }
      uVar7 = local_30;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    uVar10 = 0;
    do {
      uVar6 = uVar10;
      uVar10 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar6) = 0x20;
      uVar6 = uVar10;
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar10 = 0;
    do {
      uVar6 = uVar10;
      uVar10 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar13 = 'p';
      pcVar17 = str_10003f48;
      do {
        pcVar17 = pcVar17 + 1;
        *(char *)((int)&local_444 + uVar6) = cVar13;
        uVar6 = uVar6 + 1;
        cVar13 = *pcVar17;
        if (cVar13 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar10 = 0;
    do {
      uVar6 = uVar10;
      uVar10 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar6) = 0x3d;
      uVar6 = uVar10;
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    iVar19 = 8;
    do {
      uVar10 = uVar7 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar14 = bVar14 | 0x30;
      }
      else {
        bVar14 = bVar14 + 0x37;
      }
      uVar10 = 0;
      do {
        uVar6 = uVar10;
        uVar10 = uVar6 + 1;
      } while (*(char *)((int)&local_444 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        *(byte *)((int)&local_444 + uVar6) = bVar14;
        *(undefined1 *)((int)&local_444 + uVar6 + 1) = 0;
      }
      piVar20 = local_14;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    uVar10 = 0;
    do {
      uVar6 = uVar10;
      uVar10 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar6) = 0x20;
      uVar6 = uVar10;
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar10 = 0;
    do {
      uVar6 = uVar10;
      uVar10 = uVar6 + 1;
    } while (*(char *)((int)&local_444 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar13 = 'p';
      pcVar17 = str_10003f58;
      do {
        pcVar17 = pcVar17 + 1;
        *(char *)((int)&local_444 + uVar6) = cVar13;
        uVar6 = uVar6 + 1;
        cVar13 = *pcVar17;
        if (cVar13 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)((int)&local_444 + uVar6) = 0;
    uVar6 = local_20;
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar10 < 0x400) {
      *(undefined1 *)((int)&local_444 + uVar16) = 0x3d;
      uVar16 = uVar10;
    }
    *(undefined1 *)((int)&local_444 + uVar16) = 0;
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(undefined2 *)((int)&local_444 + uVar16) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar16 = uVar10;
      uVar10 = uVar16 + 1;
    } while (*(char *)((int)&local_444 + uVar16) != '\0');
    if (uVar16 + 1 < 0x400) {
      *(byte *)((int)&local_444 + uVar16) = (byte)local_20 & 0xf | 0x30;
      uVar6 = local_20;
      *(undefined1 *)((int)&local_444 + uVar16 + 1) = 0;
    }
    if ((uVar6 & ~uVar7) != 0) goto LAB_10001c8f;
    local_30 = 0;
    local_3c = 0;
    local_38 = 0;
    uVar7 = *(uint *)(puVar2 + 10);
    if ((uVar7 & 1) == 0 && uVar7 != 0) {
      iVar19 = 0;
      if ((uVar7 & 6) == 4) {
        iVar19 = *(int *)(local_1c + 0xc);
      }
      uVar7 = uVar7 & 0xfffffff0;
      if (uVar7 != 0 || iVar19 != 0) {
        puVar18 = local_18 + 1;
        *puVar18 = 0;
        local_2c[0] = 0;
        if (*local_14 == 0x54584b57) {
          if (((uint)local_14[2] < 0xbc) || ((code *)local_14[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)local_14[2] && iVar19 == 0) &&
               (((code *)local_14[0x19] != (code *)0x0 &&
                (iVar19 = (*(code *)local_14[0x19])(uVar7,0,0x4000,local_2c), iVar19 != 0)))) {
              *puVar18 = local_2c[0];
              uVar7 = local_2c[0];
              goto LAB_100022f2;
            }
          }
          else {
            iVar19 = (*(code *)local_14[0x2e])(uVar7,iVar19,0x4000,puVar18);
            if (iVar19 != 0) {
              uVar7 = *puVar18;
LAB_100022f2:
              if ((uVar7 != 0) && (*local_14 == 0x54584b57)) {
                if ((uint)local_14[2] < 0xc0) {
                  if (0x6b < (uint)local_14[2]) goto LAB_1000232e;
                }
                else {
                  pcVar11 = (code *)local_14[0x2f];
                  if (pcVar11 == (code *)0x0) {
LAB_1000232e:
                    pcVar11 = (code *)local_14[0x1a];
                    if (pcVar11 == (code *)0x0) goto LAB_10002e62;
                  }
                  iVar19 = (*pcVar11)(uVar7,4,&local_30);
                  if (((iVar19 != 0) && (*puVar18 != 0)) && (*local_14 == 0x54584b57)) {
                    if ((uint)local_14[2] < 0xc0) {
                      if (0x6b < (uint)local_14[2]) goto LAB_10002392;
                    }
                    else {
                      pcVar11 = (code *)local_14[0x2f];
                      if (pcVar11 == (code *)0x0) {
LAB_10002392:
                        pcVar11 = (code *)local_14[0x1a];
                        if (pcVar11 == (code *)0x0) goto LAB_10002e62;
                      }
                      iVar19 = (*pcVar11)(*puVar18 + 4,4,&local_3c);
                      if (iVar19 != 0) {
                        local_2c[0] = 0;
                        if ((*puVar18 != 0) && (*local_14 == 0x54584b57)) {
                          if ((uint)local_14[2] < 0xc0) {
                            if (0x6b < (uint)local_14[2]) goto LAB_10002400;
                          }
                          else {
                            pcVar11 = (code *)local_14[0x2f];
                            if (pcVar11 == (code *)0x0) {
LAB_10002400:
                              pcVar11 = (code *)local_14[0x1a];
                              if (pcVar11 == (code *)0x0) goto LAB_10002e62;
                            }
                            iVar19 = (*pcVar11)(*puVar18 + 0x1c,4,local_2c);
                            uVar7 = local_30;
                            if ((iVar19 != 0) && ((local_2c[0] & 1) == 0)) {
                              uVar10 = 4 << ((byte)local_3c & 0xf);
                              local_18[2] = uVar10;
                              if (uVar10 < 0x401) {
                                if ((local_30 & 0xffff) < 0x20) {
                                  uVar10 = (local_30 & 0xffff) + 1;
                                }
                                else {
                                  uVar10 = 0x20;
                                }
                                local_18[3] = uVar10;
                                if (1 < uVar10) {
                                  uVar10 = local_18[1] + 0x1000;
                                  iVar19 = recovered_10003320(local_14,local_18 + 5,0x10,0x40,uVar10
                                                             );
                                  if ((((iVar19 != 0) &&
                                       (iVar19 = recovered_10003320(local_14,local_18 + 0xe,0x10,
                                                                    0x10,local_18[2] + uVar10),
                                       iVar19 != 0)) &&
                                      (iVar19 = recovered_10003320(local_14,local_18 + 0x17,
                                                                   local_18[3],0x40,
                                                                   uVar10 + local_18[2] * 2),
                                      iVar19 != 0)) &&
                                     (iVar19 = recovered_10003320(local_14,local_18 + 0x20,
                                                                  local_18[3],0x10,
                                                                  local_18[2] * 3 + uVar10),
                                     iVar19 != 0)) {
                                    if (*local_14 == 0x54584b57) {
                                      if (((uint)local_14[2] < 0x38) ||
                                         ((code *)local_14[0xd] == (code *)0x0)) {
                                        local_18[0x29] = 0;
                                        uVar10 = 0;
                                      }
                                      else {
                                        iVar19 = (*(code *)local_14[0xd])(0x3000);
                                        iVar8 = *local_14;
                                        uVar10 = 0;
                                        if (iVar19 != 0) {
                                          uVar10 = iVar19 + 0xfffU & 0xfffff000;
                                        }
                                        iVar19 = 0;
                                        local_18[0x29] = uVar10;
                                        if (iVar8 != 0x54584b57) goto LAB_100025c1;
                                      }
                                      puVar18 = local_18 + 0x29;
                                      iVar19 = 0;
                                      if ((0x37 < (uint)local_14[2]) &&
                                         ((code *)local_14[0xd] != (code *)0x0)) {
                                        iVar19 = (*(code *)local_14[0xd])(0x2000);
                                        uVar10 = *puVar18;
                                      }
                                    }
                                    else {
                                      local_18[0x29] = 0;
                                      uVar10 = 0;
                                      iVar19 = 0;
                                    }
LAB_100025c1:
                                    uVar6 = 0;
                                    if (iVar19 != 0) {
                                      uVar6 = iVar19 + 0xfffU & 0xfffff000;
                                    }
                                    local_18[0x2c] = uVar6;
                                    if ((((uVar10 != 0) && (uVar6 != 0)) &&
                                        (*local_14 == 0x54584b57)) &&
                                       (((0x73 < (uint)local_14[2] &&
                                         ((code *)local_14[0x1c] != (code *)0x0)) &&
                                        ((iVar19 = (*(code *)local_14[0x1c])
                                                             (0,uVar10,0x2000,local_18 + 0x2a,
                                                              local_18 + 0x2b), iVar19 != 0 &&
                                         ((*local_14 == 0x54584b57 && (0x73 < (uint)local_14[2])))))
                                        ))) {
                                      if ((local_18[0x2c] != 0 &&
                                           (code *)local_14[0x1c] != (code *)0x0) &&
                                         (iVar19 = (*(code *)local_14[0x1c])
                                                             (0,local_18[0x2c],0x1000,
                                                              local_18 + 0x2d,local_18 + 0x2e),
                                         iVar19 != 0)) {
                                        iVar19 = recovered_100032b0(local_14,(int)local_18,0x14,
                                                                    (int)&local_38);
                                        piVar20 = local_14;
                                        puVar3 = local_18;
                                        if (iVar19 != 0) {
                                          iVar19 = (uVar7 >> 0x18) * 500 + 500;
                                          if ((local_38 & 1) != 0) {
                                            recovered_10003420(local_14,(int)local_18,0x14,
                                                               local_38 & 0xfffffffe);
                                            iVar8 = recovered_10003470(piVar20,(int)puVar3,0,iVar19)
                                            ;
                                            if (iVar8 == 0) goto LAB_10002e62;
                                          }
                                          piVar20 = local_14;
                                          puVar3 = local_18;
                                          recovered_10003420(local_14,(int)local_18,0x24,0xf000f);
                                          recovered_10003420(piVar20,(int)puVar3,0x28,puVar3[6]);
                                          recovered_10003420(piVar20,(int)puVar3,0x2c,puVar3[7]);
                                          recovered_10003420(piVar20,(int)puVar3,0x30,puVar3[0xf]);
                                          recovered_10003420(piVar20,(int)puVar3,0x34,puVar3[0x10]);
                                          recovered_10003420(piVar20,(int)puVar3,0xc,0xffffffff);
                                          recovered_10003420(piVar20,(int)puVar3,0x14,0x460000);
                                          recovered_10003420(piVar20,(int)puVar3,0x14,0x460001);
                                          iVar19 = recovered_10003470(piVar20,(int)puVar3,1,iVar19);
                                          if ((iVar19 != 0) &&
                                             (bVar5 = recovered_10003570(local_14,(int)local_18),
                                             CONCAT31(extraout_var,bVar5) != 0)) {
                                            *local_18 = 1;
                                            DAT_10005008 = DAT_10005008 + 1;
                                            iVar19 = recovered_10003930(local_14,(int)local_18,1,0);
                                            if (iVar19 != 0) {
                                              uVar7 = *(uint *)(local_18[0x2c] + 0x204);
                                              local_34 = uVar7;
                                              if (7 < uVar7) {
                                                local_34 = 8;
                                              }
                                              if ((uVar7 != 0) && (DAT_10005004 < 8)) {
                                                local_20 = 1;
                                                do {
                                                  iVar19 = recovered_10003930(local_14,(int)local_18
                                                                              ,0,local_20);
                                                  if (iVar19 != 0) {
                                                    puVar18 = (uint *)local_18[0x2c];
                                                    uVar7 = *puVar18;
                                                    if (uVar7 != 0 || puVar18[1] != 0) {
                                                      uVar10 = *(byte *)((int)puVar18 + 0x1a) & 0xf;
                                                      bVar14 = *(byte *)((int)puVar18 +
                                                                        uVar10 * 4 + 0x82);
                                                      local_1c = (ushort *)(uint)bVar14;
                                                      if ((local_1c == (ushort *)0x9) ||
                                                         (local_1c == (ushort *)0xc)) {
                                                        if (((char)puVar18[uVar10 + 0x20] == '\0')
                                                           && (*(char *)((int)puVar18 +
                                                                        uVar10 * 4 + 0x81) == '\0'))
                                                        {
                                                          bVar9 = bVar14 - 9;
                                                          uVar6 = uVar7 << (bVar9 & 0x1f);
                                                          uVar10 = uVar6;
                                                          uVar7 = puVar18[1] << (bVar9 & 0x1f) |
                                                                  uVar7 >> 0x20 - (bVar9 & 0x1f);
                                                          if ((bVar9 & 0x20) != 0) {
                                                            uVar10 = 0;
                                                            uVar7 = uVar6;
                                                          }
                                                          local_1c = (ushort *)
                                                                     (-(uint)(uVar7 != 0) | uVar10);
                                                          local_40 = DAT_10005004;
                                                          *(uint *)(&DAT_10005300 +
                                                                   DAT_10005004 * 0x14) = local_44;
                                                          *(uint *)(&DAT_10005304 +
                                                                   DAT_10005004 * 0x14) = local_20;
                                                          uVar10 = 1 << (bVar14 & 0x1f);
                                                          *(uint *)(&DAT_10005308 +
                                                                   DAT_10005004 * 0x14) = uVar10;
                                                          *(ushort **)
                                                           (&DAT_1000530c + DAT_10005004 * 0x14) =
                                                               local_1c;
                                                          *(undefined4 *)
                                                           (&DAT_100052fc + DAT_10005004 * 0x14) = 1
                                                          ;
                                                          DAT_10005004 = DAT_10005004 + 1;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x20;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar6 + 1 < 0x400) {
                                                            cVar13 = 'n';
                                                            pcVar17 = &DAT_10003f8d;
                                                            do {
                                                              *(char *)((int)&local_444 + uVar6) =
                                                                   cVar13;
                                                              uVar6 = uVar6 + 1;
                                                              cVar13 = *pcVar17;
                                                              if (cVar13 == '\0') break;
                                                              pcVar17 = pcVar17 + 1;
                                                            } while (uVar6 < 0x3ff);
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x3d;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = local_20;
                                                          uVar6 = 0;
                                                          do {
                                                            *(byte *)((int)local_2c + uVar6) =
                                                                 (char)uVar7 +
                                                                 (char)(uVar7 / 10) * -10 | 0x30;
                                                            uVar16 = uVar6 + 1;
                                                            if (8 < uVar6) break;
                                                            bVar5 = 9 < uVar7;
                                                            uVar7 = uVar7 / 10;
                                                            uVar6 = uVar16;
                                                          } while (bVar5);
                                                          do {
                                                            iVar19 = uVar16 - 1;
                                                            uVar16 = uVar16 - 1;
                                                            uVar7 = 0;
                                                            do {
                                                              uVar6 = uVar7;
                                                              uVar7 = uVar6 + 1;
                                                            } while (*(char *)((int)&local_444 +
                                                                              uVar6) != '\0');
                                                            if (uVar6 + 1 < 0x400) {
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar6) =
                                                                   *(undefined1 *)
                                                                    ((int)local_2c + iVar19);
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar6 + 1) = 0;
                                                            }
                                                          } while (uVar16 != 0);
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x20;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar6 + 1 < 0x400) {
                                                            cVar13 = 's';
                                                            pcVar17 = str_10003f91;
                                                            do {
                                                              pcVar17 = pcVar17 + 1;
                                                              *(char *)((int)&local_444 + uVar6) =
                                                                   cVar13;
                                                              uVar6 = uVar6 + 1;
                                                              cVar13 = *pcVar17;
                                                              if (cVar13 == '\0') break;
                                                            } while (uVar6 < 0x3ff);
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x3d;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          if (local_1c == (ushort *)0x0) {
                                                            uVar7 = 0;
                                                            do {
                                                              uVar6 = uVar7;
                                                              uVar7 = uVar6 + 1;
                                                            } while (*(char *)((int)&local_444 +
                                                                              uVar6) != '\0');
                                                            if (uVar6 + 1 < 0x400) {
                                                              *(undefined2 *)
                                                               ((int)&local_444 + uVar6) = 0x30;
                                                            }
                                                          }
                                                          else {
                                                            uVar7 = 0;
                                                            do {
                                                              puVar12 = (ushort *)
                                                                        ((uint)local_1c / 10);
                                                              *(byte *)((int)local_2c + uVar7) =
                                                                   (char)local_1c +
                                                                   (char)puVar12 * -10 | 0x30;
                                                              puVar2 = local_1c;
                                                              uVar6 = uVar7 + 1;
                                                              if (8 < uVar7) break;
                                                              local_1c = puVar12;
                                                              uVar7 = uVar6;
                                                            } while ((ushort *)0x9 < puVar2);
                                                            do {
                                                              iVar19 = uVar6 - 1;
                                                              uVar6 = uVar6 - 1;
                                                              uVar7 = 0;
                                                              do {
                                                                uVar16 = uVar7;
                                                                uVar7 = uVar16 + 1;
                                                              } while (*(char *)((int)&local_444 +
                                                                                uVar16) != '\0');
                                                              if (uVar16 + 1 < 0x400) {
                                                                *(undefined1 *)
                                                                 ((int)&local_444 + uVar16) =
                                                                     *(undefined1 *)
                                                                      ((int)local_2c + iVar19);
                                                                *(undefined1 *)
                                                                 ((int)&local_444 + uVar16 + 1) = 0;
                                                              }
                                                            } while (uVar6 != 0);
                                                          }
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x20;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar6 + 1 < 0x400) {
                                                            cVar13 = 'n';
                                                            pcVar17 = str_10003f99;
                                                            do {
                                                              pcVar17 = pcVar17 + 1;
                                                              *(char *)((int)&local_444 + uVar6) =
                                                                   cVar13;
                                                              uVar6 = uVar6 + 1;
                                                              cVar13 = *pcVar17;
                                                              if (cVar13 == '\0') break;
                                                            } while (uVar6 < 0x3ff);
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar6 + 1;
                                                          } while (*(char *)((int)&local_444 + uVar6
                                                                            ) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)((int)&local_444 + uVar6)
                                                                 = 0x3d;
                                                            uVar6 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar6) =
                                                               0;
                                                          uVar7 = 0;
                                                          do {
                                                            *(byte *)((int)local_2c + uVar7) =
                                                                 (char)uVar10 +
                                                                 (char)(uVar10 / 10) * -10 | 0x30;
                                                            uVar6 = uVar7 + 1;
                                                            if (8 < uVar7) break;
                                                            bVar5 = 9 < uVar10;
                                                            uVar7 = uVar6;
                                                            uVar10 = uVar10 / 10;
                                                          } while (bVar5);
                                                          do {
                                                            iVar19 = uVar6 - 1;
                                                            uVar6 = uVar6 - 1;
                                                            uVar7 = 0;
                                                            do {
                                                              uVar10 = uVar7;
                                                              uVar7 = uVar10 + 1;
                                                            } while (*(char *)((int)&local_444 +
                                                                              uVar10) != '\0');
                                                            if (uVar10 + 1 < 0x400) {
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar10) =
                                                                   *(undefined1 *)
                                                                    ((int)local_2c + iVar19);
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar10 + 1) = 0;
                                                            }
                                                          } while (uVar6 != 0);
                                                        }
                                                        else {
                                                          uVar7 = 0;
                                                          do {
                                                            uVar10 = uVar7;
                                                            uVar7 = uVar10 + 1;
                                                          } while (*(char *)((int)&local_444 +
                                                                            uVar10) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)
                                                             ((int)&local_444 + uVar10) = 0x20;
                                                            uVar10 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar10)
                                                               = 0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar10 = uVar7;
                                                            uVar7 = uVar10 + 1;
                                                          } while (*(char *)((int)&local_444 +
                                                                            uVar10) != '\0');
                                                          if (uVar10 + 1 < 0x400) {
                                                            cVar13 = 's';
                                                            pcVar17 = str_10003f78
                                                            ;
                                                            do {
                                                              pcVar17 = pcVar17 + 1;
                                                              *(char *)((int)&local_444 + uVar10) =
                                                                   cVar13;
                                                              uVar10 = uVar10 + 1;
                                                              cVar13 = *pcVar17;
                                                              if (cVar13 == '\0') break;
                                                            } while (uVar10 < 0x3ff);
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar10)
                                                               = 0;
                                                          uVar7 = 0;
                                                          do {
                                                            uVar10 = uVar7;
                                                            uVar7 = uVar10 + 1;
                                                          } while (*(char *)((int)&local_444 +
                                                                            uVar10) != '\0');
                                                          if (uVar7 < 0x400) {
                                                            *(undefined1 *)
                                                             ((int)&local_444 + uVar10) = 0x3d;
                                                            uVar10 = uVar7;
                                                          }
                                                          *(undefined1 *)((int)&local_444 + uVar10)
                                                               = 0;
                                                          uVar7 = local_20;
                                                          uVar10 = 0;
                                                          do {
                                                            *(byte *)((int)local_2c + uVar10) =
                                                                 (char)uVar7 +
                                                                 (char)(uVar7 / 10) * -10 | 0x30;
                                                            uVar6 = uVar10 + 1;
                                                            if (8 < uVar10) break;
                                                            bVar5 = 9 < uVar7;
                                                            uVar7 = uVar7 / 10;
                                                            uVar10 = uVar6;
                                                          } while (bVar5);
                                                          do {
                                                            iVar19 = uVar6 - 1;
                                                            uVar6 = uVar6 - 1;
                                                            uVar7 = 0;
                                                            do {
                                                              uVar10 = uVar7;
                                                              uVar7 = uVar10 + 1;
                                                            } while (*(char *)((int)&local_444 +
                                                                              uVar10) != '\0');
                                                            if (uVar10 + 1 < 0x400) {
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar10) =
                                                                   *(undefined1 *)
                                                                    ((int)local_2c + iVar19);
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar10 + 1) = 0;
                                                            }
                                                          } while (uVar6 != 0);
                                                        }
                                                      }
                                                      else {
                                                        uVar7 = 0;
                                                        do {
                                                          uVar10 = uVar7;
                                                          uVar7 = uVar10 + 1;
                                                        } while (*(char *)((int)&local_444 + uVar10)
                                                                 != '\0');
                                                        if (uVar7 < 0x400) {
                                                          *(undefined1 *)((int)&local_444 + uVar10)
                                                               = 0x20;
                                                          uVar10 = uVar7;
                                                        }
                                                        *(undefined1 *)((int)&local_444 + uVar10) =
                                                             0;
                                                        uVar7 = 0;
                                                        do {
                                                          uVar10 = uVar7;
                                                          uVar7 = uVar10 + 1;
                                                        } while (*(char *)((int)&local_444 + uVar10)
                                                                 != '\0');
                                                        if (uVar10 + 1 < 0x400) {
                                                          cVar13 = 's';
                                                          pcVar17 = str_10003f67;
                                                          do {
                                                            pcVar17 = pcVar17 + 1;
                                                            *(char *)((int)&local_444 + uVar10) =
                                                                 cVar13;
                                                            uVar10 = uVar10 + 1;
                                                            cVar13 = *pcVar17;
                                                            if (cVar13 == '\0') break;
                                                          } while (uVar10 < 0x3ff);
                                                        }
                                                        *(undefined1 *)((int)&local_444 + uVar10) =
                                                             0;
                                                        uVar7 = 0;
                                                        do {
                                                          uVar10 = uVar7;
                                                          uVar7 = uVar10 + 1;
                                                        } while (*(char *)((int)&local_444 + uVar10)
                                                                 != '\0');
                                                        if (uVar7 < 0x400) {
                                                          *(undefined1 *)((int)&local_444 + uVar10)
                                                               = 0x3d;
                                                          uVar10 = uVar7;
                                                        }
                                                        *(undefined1 *)((int)&local_444 + uVar10) =
                                                             0;
                                                        if (local_1c == (ushort *)0x0) {
                                                          uVar7 = 0;
                                                          do {
                                                            uVar10 = uVar7;
                                                            uVar7 = uVar10 + 1;
                                                          } while (*(char *)((int)&local_444 +
                                                                            uVar10) != '\0');
                                                          if (uVar10 + 1 < 0x400) {
                                                            *(undefined2 *)
                                                             ((int)&local_444 + uVar10) = 0x30;
                                                          }
                                                        }
                                                        else {
                                                          uVar7 = 0;
                                                          do {
                                                            puVar12 = (ushort *)
                                                                      ((uint)local_1c / 10);
                                                            *(byte *)((int)local_2c + uVar7) =
                                                                 (char)local_1c +
                                                                 (char)puVar12 * -10 | 0x30;
                                                            puVar2 = local_1c;
                                                            uVar10 = uVar7 + 1;
                                                            if (8 < uVar7) break;
                                                            local_1c = puVar12;
                                                            uVar7 = uVar10;
                                                          } while ((ushort *)0x9 < puVar2);
                                                          do {
                                                            iVar19 = uVar10 - 1;
                                                            uVar10 = uVar10 - 1;
                                                            uVar7 = 0;
                                                            do {
                                                              uVar6 = uVar7;
                                                              uVar7 = uVar6 + 1;
                                                            } while (*(char *)((int)&local_444 +
                                                                              uVar6) != '\0');
                                                            if (uVar6 + 1 < 0x400) {
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar6) =
                                                                   *(undefined1 *)
                                                                    ((int)local_2c + iVar19);
                                                              *(undefined1 *)
                                                               ((int)&local_444 + uVar6 + 1) = 0;
                                                            }
                                                          } while (uVar10 != 0);
                                                        }
                                                      }
                                                    }
                                                  }
                                                } while ((local_20 < local_34) &&
                                                        (local_20 = local_20 + 1, DAT_10005004 < 8))
                                                ;
                                              }
                                            }
                                            pcVar11 = (code *)local_14[3];
                                            pcVar17 = str_10003ee0;
                                            uVar7 = 1;
                                            goto joined_r0x10001c9f;
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
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_10002e62:
    pcVar11 = (code *)local_14[3];
    pcVar17 = str_10003ec5;
  }
  uVar7 = 0;
joined_r0x10001c9f:
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(pcVar17,str_10003eb5,&local_444);
  }
  return uVar7;
}

#undef DAT_10003e96
#undef DAT_10003f8d
#undef DAT_10005004
#undef DAT_10005008
#undef DAT_1000500c
#undef DAT_100052fc
#undef DAT_10005300
#undef DAT_10005304
#undef DAT_10005308
#undef DAT_1000530c
#undef str_10003e73
#undef str_10003e87
#undef str_10003e8e
#undef str_10003e99
#undef str_10003eb5
#undef str_10003ec5
#undef str_10003ee0
#undef str_10003eee
#undef str_10003f06
#undef str_10003f1e
#undef str_10003f37
#undef str_10003f48
#undef str_10003f58
#undef str_10003f67
#undef str_10003f78
#undef str_10003f91
#undef str_10003f99
#undef local_444
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef cStack_445

#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x11cdU)))
#undef DAT_100052fc
#define DAT_100052fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c5U)))
#undef DAT_1000530c
#define DAT_1000530c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14d5U)))
#undef str_10003fa5
#define str_10003fa5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

undefined4 recovered_10002e90(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = 0;
  if (((param_1 < DAT_10005004) && (param_2 != (undefined4 *)0x0)) &&
     (*(int *)(&DAT_100052fc + param_1 * 0x14) != 0)) {
    *param_2 = *(undefined4 *)(&DAT_1000530c + param_1 * 0x14);
    uVar1 = 1;
    if (param_4 != 0 && param_3 != 0) {
      if (param_4 == 1) {
        uVar4 = 0;
      }
      else {
        uVar3 = param_4 - 2;
        if (7 < uVar3) {
          uVar3 = 8;
        }
        uVar4 = uVar3 + 1;
        uVar2 = 0;
        do {
          *(char *)(param_3 + uVar2) = str_10003fa5[uVar2];
          uVar2 = uVar2 + 1;
        } while (uVar4 != uVar2);
        if (uVar2 < param_4 - 1U) {
          *(byte *)(param_3 + 1 + uVar3) = (char)param_1 + ((byte)(param_1 / 5) & 0xfe) * -5 | 0x30;
          uVar4 = uVar3 + 2;
        }
      }
      uVar1 = 1;
      *(undefined1 *)(param_3 + uVar4) = 0;
    }
  }
  return uVar1;
}

#undef DAT_10005004
#undef DAT_100052fc
#undef DAT_1000530c
#undef str_10003fa5

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

void recovered_10002f60(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003a50(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

void recovered_10002f90(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003a50(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x11c9U)))
#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x11cdU)))
#undef DAT_1000501c
#define DAT_1000501c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11e5U)))
#undef DAT_10005068
#define DAT_10005068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1231U)))
#undef DAT_10005078
#define DAT_10005078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1241U)))
#undef DAT_1000507c
#define DAT_1000507c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1245U)))
#undef DAT_100052fc
#define DAT_100052fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c5U)))
#undef DAT_10005300
#define DAT_10005300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c9U)))
#undef DAT_10005304
#define DAT_10005304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fc0
 */

bool recovered_10002fc0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;

  in_ECX = DAT_10005000;
  if ((param_1 < DAT_10005004) &&
     (DAT_10005000 != (int *)0x0 && *(int *)(&DAT_100052fc + param_1 * 0x14) != 0)) {
    iVar4 = *(int *)(&DAT_10005300 + param_1 * 0x14) * 0xbc;
    puVar5 = (undefined1 *)
             (*(int *)(&DAT_10005078 + iVar4) * *(int *)(&DAT_1000507c + iVar4) +
             *(int *)(&DAT_10005068 + iVar4));
    iVar3 = *(int *)(&DAT_1000501c + iVar4) + 1;
    *(short *)(&DAT_1000501c + iVar4) = (short)iVar3;
    uVar1 = *(undefined4 *)(&DAT_10005304 + param_1 * 0x14);
    iVar6 = -0x40;
    do {
      puVar5[iVar6 + 0x40] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
    *puVar5 = 0;
    puVar5[2] = (char)iVar3;
    puVar5[3] = (char)((uint)iVar3 >> 8);
    puVar5[4] = (char)uVar1;
    puVar5[5] = (char)((uint)uVar1 >> 8);
    puVar5[6] = (char)((uint)uVar1 >> 0x10);
    puVar5[7] = (char)((uint)uVar1 >> 0x18);
    bVar2 = recovered_10003710(in_ECX,(undefined4 *)(&DAT_10005068 + iVar4),
                               (int *)(iVar4 + ((uintptr_t)pf_module_state + 0x1255U)),(short)iVar3);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

#undef DAT_10005000
#undef DAT_10005004
#undef DAT_1000501c
#undef DAT_10005068
#undef DAT_10005078
#undef DAT_1000507c
#undef DAT_100052fc
#undef DAT_10005300
#undef DAT_10005304

#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a0
 */

undefined4
recovered_100030a0(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_1c
#undef local_18
#undef local_14
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b0
 */

undefined4 recovered_100032b0(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((*(int *)(in_EDX + 4) != 0 && param_4 != 0) && (in_ECX != (int *)0x0)) &&
     (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (pcVar2 != (code *)0x0) goto LAB_100032f8;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (pcVar2 != (code *)0x0) {
LAB_100032f8:
      uVar1 = (*pcVar2)(*(int *)(in_EDX + 4) + param_3,4,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

undefined4 recovered_10003320(int *in_ECX,uint *in_EDX,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = param_4 * param_3;
  iVar3 = 0;
  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x37 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xd] != (code *)0x0)) {
    iVar3 = (*(code *)in_ECX[0xd])(iVar5 + 0x1000);
  }
  uVar2 = iVar3 + 0xfffU & 0xfffff000;
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = uVar2;
  }
  *in_EDX = uVar4;
  uVar1 = 0;
  if (uVar4 != 0) {
    if (iVar5 != 0) {
      iVar3 = 0;
      do {
        *(undefined1 *)(*in_EDX + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar5 != iVar3);
      uVar2 = *in_EDX;
    }
    if (((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) &&
       ((0x73 < (uint)in_ECX[2] && (uVar2 != 0 && (code *)in_ECX[0x1c] != (code *)0x0)))) {
      iVar3 = (*(code *)in_ECX[0x1c])(0,uVar2,iVar5,in_EDX + 1,in_EDX + 2);
      uVar1 = 0;
      if (iVar3 != 0) {
        in_EDX[3] = param_3;
        in_EDX[4] = param_4;
        in_EDX[8] = param_5;
        in_EDX[5] = 0;
        in_EDX[6] = 0;
        in_EDX[7] = 1;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003420
 */

void recovered_10003420(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (((*(int *)(in_EDX + 4) != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10003455;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10003455:
      (*pcVar1)(*(int *)(in_EDX + 4) + param_3,4,param_4);
      return;
    }
  }
  return;
}


#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003470
 */

undefined4 recovered_10003470(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  int iVar3;

  iVar3 = param_4 + 1;
  do {
    local_14 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      return 0;
    }
    if (in_ECX == (int *)0x0) {
      return 0;
    }
    if (*in_ECX != 0x54584b57) {
      return 0;
    }
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
LAB_100034ea:
      pcVar2 = (code *)in_ECX[0x1a];
      if (pcVar2 == (code *)0x0) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (pcVar2 == (code *)0x0) goto LAB_100034ea;
    }
    iVar1 = (*pcVar2)(*(int *)(in_EDX + 4) + 0x1c,4,&local_14);
    if (iVar1 == 0) {
      return 0;
    }
    if ((local_14 & 2) != 0) {
      return 0;
    }
    if ((((byte)local_14 ^ param_3 == 0) & 1) != 0) {
      return 1;
    }
    if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0xc] != (code *)0x0)) {
      (*(code *)in_ECX[0xc])(1000);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003570
 */

bool recovered_10003570(int *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;

  puVar4 = (undefined1 *)
           (*(int *)(in_EDX + 0x24) * *(int *)(in_EDX + 0x28) + *(int *)(in_EDX + 0x14));
  iVar5 = *(int *)(in_EDX + 0x10) + 1;
  *(short *)(in_EDX + 0x10) = (short)iVar5;
  iVar6 = -0x40;
  do {
    puVar4[iVar6 + 0x40] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  *puVar4 = 5;
  puVar4[2] = (char)iVar5;
  puVar4[3] = (char)((uint)iVar5 >> 8);
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar1 = *(undefined4 *)(in_EDX + 0x84);
  uVar2 = *(undefined4 *)(in_EDX + 0x88);
  puVar4[0x18] = (char)uVar1;
  puVar4[0x19] = (char)((uint)uVar1 >> 8);
  puVar4[0x1a] = (char)((uint)uVar1 >> 0x10);
  puVar4[0x1b] = (char)((uint)uVar1 >> 0x18);
  puVar4[0x1c] = (char)uVar2;
  puVar4[0x1d] = (char)((uint)uVar2 >> 8);
  puVar4[0x1e] = (char)((uint)uVar2 >> 0x10);
  puVar4[0x1f] = (char)((uint)uVar2 >> 0x18);
  *(undefined4 *)(puVar4 + 0x20) = 0;
  *(undefined4 *)(puVar4 + 0x24) = 0;
  iVar6 = *(int *)(in_EDX + 0xc) * 0x10000 + -0xffff;
  *(undefined2 *)(puVar4 + 0x28) = 1;
  puVar4[0x2a] = (char)((uint)iVar6 >> 0x10);
  puVar4[0x2b] = (char)((uint)iVar6 >> 0x18);
  *(undefined4 *)(puVar4 + 0x2c) = 1;
  bVar3 = recovered_10003710(in_ECX,(undefined4 *)(in_EDX + 0x14),(int *)(in_EDX + 0x38),
                             (short)iVar5);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = false;
  }
  else {
    puVar4 = (undefined1 *)
             (*(int *)(in_EDX + 0x24) * *(int *)(in_EDX + 0x28) + *(int *)(in_EDX + 0x14));
    iVar5 = *(int *)(in_EDX + 0x10) + 1;
    *(short *)(in_EDX + 0x10) = (short)iVar5;
    iVar6 = -0x40;
    do {
      puVar4[iVar6 + 0x40] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
    *puVar4 = 1;
    puVar4[2] = (char)iVar5;
    puVar4[3] = (char)((uint)iVar5 >> 8);
    *(undefined4 *)(puVar4 + 4) = 0;
    uVar1 = *(undefined4 *)(in_EDX + 0x60);
    uVar2 = *(undefined4 *)(in_EDX + 100);
    puVar4[0x18] = (char)uVar1;
    puVar4[0x19] = (char)((uint)uVar1 >> 8);
    puVar4[0x1a] = (char)((uint)uVar1 >> 0x10);
    puVar4[0x1b] = (char)((uint)uVar1 >> 0x18);
    puVar4[0x1c] = (char)uVar2;
    puVar4[0x1d] = (char)((uint)uVar2 >> 8);
    puVar4[0x1e] = (char)((uint)uVar2 >> 0x10);
    puVar4[0x1f] = (char)((uint)uVar2 >> 0x18);
    *(undefined4 *)(puVar4 + 0x20) = 0;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    iVar6 = *(int *)(in_EDX + 0xc) * 0x10000 + -0xffff;
    *(undefined2 *)(puVar4 + 0x28) = 1;
    puVar4[0x2a] = (char)((uint)iVar6 >> 0x10);
    puVar4[0x2b] = (char)((uint)iVar6 >> 0x18);
    *(undefined4 *)(puVar4 + 0x2c) = 0x10001;
    bVar3 = recovered_10003710(in_ECX,(undefined4 *)(in_EDX + 0x14),(int *)(in_EDX + 0x38),
                               (short)iVar5);
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

bool recovered_10003710(int *in_ECX,undefined4 *in_EDX,int *param_3,short param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  uVar7 = in_EDX[3];
  if ((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) {
    in_EDX[5] = (in_EDX[5] + 1) % uVar7;
    return false;
  }
  if (((uint)in_ECX[2] < 0x78) || ((code *)in_ECX[0x1d] == (code *)0x0)) {
    uVar7 = (in_EDX[5] + 1) % uVar7;
    in_EDX[5] = uVar7;
  }
  else {
    (*(code *)in_ECX[0x1d])(0,*in_EDX,uVar7 * in_EDX[4]);
    iVar4 = *in_ECX;
    uVar7 = (in_EDX[5] + 1) % (uint)in_EDX[3];
    in_EDX[5] = uVar7;
    if (iVar4 != 0x54584b57) {
      return false;
    }
  }
  if ((0x7b < (uint)in_ECX[2]) && ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
    if (*in_ECX != 0x54584b57) {
      return false;
    }
    uVar7 = in_EDX[5];
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if ((uint)in_ECX[2] < 0x70) {
      return false;
    }
  }
  else {
    pcVar5 = (code *)in_ECX[0x30];
    if (pcVar5 != (code *)0x0) goto LAB_100037e0;
  }
  pcVar5 = (code *)in_ECX[0x1b];
  if (pcVar5 == (code *)0x0) {
    return false;
  }
LAB_100037e0:
  iVar4 = (*pcVar5)(in_EDX[8],4,uVar7);
  if (iVar4 != 0) {
    uVar7 = 0xffffff9c;
    do {
      iVar4 = *param_3;
      iVar1 = param_3[4];
      iVar2 = param_3[6];
      if (((*in_ECX == 0x54584b57) && (0x77 < (uint)in_ECX[2])) &&
         ((code *)in_ECX[0x1d] != (code *)0x0)) {
        (*(code *)in_ECX[0x1d])(0,iVar4,iVar1 * param_3[3]);
      }
      uVar3 = *(uint *)(iVar4 + 0xc + iVar2 * iVar1);
      uVar6 = uVar3 >> 0x10 & 1;
      if (uVar6 == param_3[7]) {
        uVar8 = (param_3[6] + 1U) % (uint)param_3[3];
        param_3[6] = uVar8;
        if (uVar8 == 0) {
          param_3[7] = uVar6 ^ 1;
        }
        if (*in_ECX == 0x54584b57) {
          if ((uint)in_ECX[2] < 0xc4) {
            if (0x6f < (uint)in_ECX[2]) {
LAB_100038ca:
              pcVar5 = (code *)in_ECX[0x1b];
              if (pcVar5 != (code *)0x0) goto LAB_10003812;
            }
          }
          else {
            pcVar5 = (code *)in_ECX[0x30];
            if (pcVar5 == (code *)0x0) goto LAB_100038ca;
LAB_10003812:
            (*pcVar5)(param_3[8],4,uVar8);
          }
        }
        if ((short)uVar3 == param_4) {
          return uVar3 < 0x20000;
        }
      }
      else if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
              ((code *)in_ECX[0xc] != (code *)0x0)) {
        (*(code *)in_ECX[0xc])(100);
      }
      uVar7 = uVar7 + 100;
    } while (uVar7 < 0x4c4adc);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

undefined4 recovered_10003930(int *in_ECX,int in_EDX,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  puVar3 = (undefined1 *)
           (*(int *)(in_EDX + 0x24) * *(int *)(in_EDX + 0x28) + *(int *)(in_EDX + 0x14));
  iVar5 = *(int *)(in_EDX + 0x10) + 1;
  *(short *)(in_EDX + 0x10) = (short)iVar5;
  iVar6 = -0x40;
  do {
    puVar3[iVar6 + 0x40] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  *puVar3 = 6;
  puVar3[2] = (char)iVar5;
  puVar3[3] = (char)((uint)iVar5 >> 8);
  puVar3[4] = (char)param_4;
  puVar3[5] = (char)((uint)param_4 >> 8);
  puVar3[6] = (char)((uint)param_4 >> 0x10);
  puVar3[7] = (char)((uint)param_4 >> 0x18);
  uVar4 = *(undefined4 *)(in_EDX + 0xb4);
  uVar1 = *(undefined4 *)(in_EDX + 0xb8);
  puVar3[0x18] = (char)uVar4;
  puVar3[0x19] = (char)((uint)uVar4 >> 8);
  puVar3[0x1a] = (char)((uint)uVar4 >> 0x10);
  puVar3[0x1b] = (char)((uint)uVar4 >> 0x18);
  puVar3[0x1c] = (char)uVar1;
  puVar3[0x1d] = (char)((uint)uVar1 >> 8);
  puVar3[0x1e] = (char)((uint)uVar1 >> 0x10);
  puVar3[0x1f] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  puVar3[0x28] = (char)param_3;
  puVar3[0x29] = (char)((uint)param_3 >> 8);
  puVar3[0x2a] = (char)((uint)param_3 >> 0x10);
  puVar3[0x2b] = (char)((uint)param_3 >> 0x18);
  bVar2 = recovered_10003710(in_ECX,(undefined4 *)(in_EDX + 0x14),(int *)(in_EDX + 0x38),
                             (short)iVar5);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0x1d] != (code *)0x0)) {
      (*(code *)in_ECX[0x1d])(0,*(undefined4 *)(in_EDX + 0xb0),0x1000);
      uVar4 = 1;
    }
  }
  return uVar4;
}


#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x11c9U)))
#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x11cdU)))
#undef DAT_1000500c
#define DAT_1000500c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11d5U)))
#undef DAT_100050b0
#define DAT_100050b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1279U)))
#undef DAT_100052fc
#define DAT_100052fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14c5U)))
#define local_1c (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a50
 */

undefined4 recovered_10003a50(uint in_ECX,uint in_EDX,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined *in_EDX_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;

  uVar2 = 0;
  puVar11 = (undefined *)0x0;
  if ((in_ECX < DAT_10005004) &&
     (puVar11 = (undefined *)0x0, *(int *)(&DAT_100052fc + in_ECX * 0x14) != 0)) {
    puVar11 = &DAT_100052fc + in_ECX * 0x14;
  }
  if ((((param_4 != 0) && (local_1c = param_3, param_3 != (undefined1 *)0x0)) &&
      (puVar11 != (undefined *)0x0)) &&
     ((DAT_10005000 != (int *)0x0 &&
      (param_4 <= *(uint *)(puVar11 + 0x10) - in_EDX && in_EDX <= *(uint *)(puVar11 + 0x10))))) {
    iVar3 = *(int *)(puVar11 + 4) * 0xbc;
    in_EDX_00 = &DAT_1000500c + iVar3;
    uVar1 = *(uint *)(puVar11 + 0xc);
    do {
      uVar4 = in_EDX / (uVar1 >> 9);
      uVar9 = in_EDX % (uVar1 >> 9);
      iVar10 = uVar9 * 0x200;
      uVar5 = uVar9 * -0x200 + 0x2000;
      uVar12 = param_4 << 9;
      if ((uint)(param_4 << 9 < uVar5) <= param_4 >> 0x17) {
        uVar12 = uVar5;
      }
      uVar5 = *(uint *)(puVar11 + 0xc);
      uVar6 = ((uVar5 - 1) + uVar12 + iVar10) / uVar5;
      if (param_5 == 0) {
        iVar7 = recovered_10003c50(DAT_10005000,(int)in_EDX_00,*(undefined4 *)(puVar11 + 8),'\x02',
                                   uVar4,0,uVar6,uVar5);
        if (iVar7 == 0) {
          return 0;
        }
        if (uVar12 != 0) {
          iVar7 = 0;
          puVar8 = local_1c;
          uVar4 = uVar12;
          do {
            *puVar8 = *(undefined1 *)(iVar7 + *(int *)(&DAT_100050b0 + iVar3) + iVar10);
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        if (((uVar12 + iVar10) % uVar5 != 0 || uVar9 != 0) &&
           (iVar7 = recovered_10003c50(DAT_10005000,(int)in_EDX_00,*(undefined4 *)(puVar11 + 8),
                                       '\x02',uVar4,0,uVar6,uVar5), iVar7 == 0)) {
          return 0;
        }
        if (uVar12 != 0) {
          iVar7 = 0;
          puVar8 = local_1c;
          uVar5 = uVar12;
          do {
            *(undefined1 *)(iVar7 + *(int *)(&DAT_100050b0 + iVar3) + iVar10) = *puVar8;
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        iVar10 = recovered_10003c50(DAT_10005000,(int)in_EDX_00,*(undefined4 *)(puVar11 + 8),'\x01',
                                    uVar4,0,uVar6,*(int *)(puVar11 + 0xc));
        if (iVar10 == 0) {
          return 0;
        }
      }
      local_1c = local_1c + uVar12;
      in_EDX = in_EDX + (uVar12 >> 9);
      param_4 = param_4 - (uVar12 >> 9);
    } while (param_4 != 0);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10005000
#undef DAT_10005004
#undef DAT_1000500c
#undef DAT_100050b0
#undef DAT_100052fc
#undef local_1c

#define local_1c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

undefined4
recovered_10003c50(int *in_ECX,int in_EDX,undefined4 param_3,char param_4,undefined4 param_5,
                  undefined4 param_6,int param_7,int param_8)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;

  uVar4 = param_8 * param_7;
  uVar6 = 0;
  if (0xffffdfff < uVar4 - 0x2001) {
    if ((((param_4 == '\x01') && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) &&
       ((0x77 < (uint)in_ECX[2] && ((code *)in_ECX[0x1d] != (code *)0x0)))) {
      (*(code *)in_ECX[0x1d])(0,*(undefined4 *)(in_EDX + 0xa4),uVar4);
    }
    pcVar8 = (char *)(*(int *)(in_EDX + 0x6c) * *(int *)(in_EDX + 0x70) + *(int *)(in_EDX + 0x5c));
    iVar2 = *(int *)(in_EDX + 0x10) + 1;
    *(short *)(in_EDX + 0x10) = (short)iVar2;
    iVar3 = -0x40;
    do {
      pcVar8[iVar3 + 0x40] = '\0';
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
    *pcVar8 = param_4;
    pcVar8[2] = (char)iVar2;
    pcVar8[3] = (char)((uint)iVar2 >> 8);
    pcVar8[4] = (char)param_3;
    pcVar8[5] = (char)((uint)param_3 >> 8);
    pcVar8[6] = (char)((uint)param_3 >> 0x10);
    pcVar8[7] = (char)((uint)param_3 >> 0x18);
    if (uVar4 < 0x1001) {
      uVar7 = *(uint *)(in_EDX + 0xa8);
      iVar3 = *(int *)(in_EDX + 0xac);
      iVar5 = 0;
      local_1c = 0;
    }
    else {
      uVar7 = *(uint *)(in_EDX + 0xa8);
      iVar3 = *(int *)(in_EDX + 0xac);
      iVar5 = uVar7 + 0x1000;
      local_1c = iVar3 + (uint)(0xffffefff < uVar7);
    }
    pcVar8[0x18] = (char)uVar7;
    pcVar8[0x19] = (char)(uVar7 >> 8);
    pcVar8[0x1a] = (char)(uVar7 >> 0x10);
    pcVar8[0x1b] = (char)(uVar7 >> 0x18);
    pcVar8[0x1c] = (char)iVar3;
    pcVar8[0x1d] = (char)((uint)iVar3 >> 8);
    pcVar8[0x1e] = (char)((uint)iVar3 >> 0x10);
    pcVar8[0x1f] = (char)((uint)iVar3 >> 0x18);
    pcVar8[0x20] = (char)iVar5;
    pcVar8[0x21] = (char)((uint)iVar5 >> 8);
    pcVar8[0x22] = (char)((uint)iVar5 >> 0x10);
    pcVar8[0x23] = (char)((uint)iVar5 >> 0x18);
    pcVar8[0x24] = (char)local_1c;
    pcVar8[0x25] = (char)((uint)local_1c >> 8);
    pcVar8[0x26] = (char)((uint)local_1c >> 0x10);
    pcVar8[0x27] = (char)((uint)local_1c >> 0x18);
    pcVar8[0x28] = (char)param_5;
    pcVar8[0x29] = (char)((uint)param_5 >> 8);
    pcVar8[0x2a] = (char)((uint)param_5 >> 0x10);
    pcVar8[0x2b] = (char)((uint)param_5 >> 0x18);
    pcVar8[0x2c] = '\0';
    pcVar8[0x2d] = '\0';
    pcVar8[0x2e] = '\0';
    pcVar8[0x2f] = '\0';
    iVar3 = param_7 + -1;
    pcVar8[0x30] = (char)iVar3;
    pcVar8[0x31] = (char)((uint)iVar3 >> 8);
    pcVar8[0x32] = (char)((uint)iVar3 >> 0x10);
    pcVar8[0x33] = (char)((uint)iVar3 >> 0x18);
    bVar1 = recovered_10003710(in_ECX,(undefined4 *)(in_EDX + 0x5c),(int *)(in_EDX + 0x80),
                               (short)iVar2);
    uVar6 = 0;
    if (((CONCAT31(extraout_var,bVar1) != 0) && (uVar6 = 1, param_4 == '\x02')) &&
       ((in_ECX != (int *)0x0 &&
        (((*in_ECX == 0x54584b57 && (0x77 < (uint)in_ECX[2])) &&
         ((code *)in_ECX[0x1d] != (code *)0x0)))))) {
      (*(code *)in_ECX[0x1d])(0,*(undefined4 *)(in_EDX + 0xa4),uVar4);
    }
  }
  return uVar6;
}

#undef local_1c

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
