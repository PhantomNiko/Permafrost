/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x327cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10000db8
#define DAT_10000db8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef str_10000da8
#define str_10000da8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#define local_50 (*(char *)(pf_stack_frame + 80))
#define auStack_88 (*(undefined1 (*)[136])(pf_stack_frame + 24))
#define auStack_5c (*(undefined1 (*)[92])(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ec
 */

uint recovered_100003ec(void *api)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar4 = 0;
  if (api != (void *)0x0) {
    if ((((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
        (0xf7 < *(uint *)((long)api + 8))) && (*(uint *)((long)api + 0xc) != 0)) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10000db8,str_10000da8,&DAT_10000db8)
      ;
      uVar4 = 0;
      if (iVar1 != 0) {
        if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
           (*(int *)((long)api + 0x5c) != 0)) {
          for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
            for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
              uVar2 = recovered_100006a4(api,uVar4 & 0xff,uVar5 & 0xff,0,auStack_5c);
              if ((uVar2 != 0) && (recovered_10000530(api,auStack_5c), local_50 < '\0')) {
                for (uVar2 = 1; uVar2 != 8; uVar2 = uVar2 + 1) {
                  uVar3 = recovered_100006a4(api,uVar4 & 0xff,uVar5 & 0xff,uVar2 & 0xff,auStack_88);
                  if (uVar3 != 0) {
                    recovered_10000530(api,auStack_88);
                  }
                }
              }
            }
          }
        }
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

#undef DAT_10000db8
#undef str_10000da8
#undef local_50
#undef auStack_88
#undef auStack_5c

#undef DAT_10000df3
#define DAT_10000df3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_10000df9
#define DAT_10000df9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75U)))
#undef DAT_10000dfe
#define DAT_10000dfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_10000e01
#define DAT_10000e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dU)))
#undef str_10000ddf
#define str_10000ddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#define auStack_4a0 (*(undefined1 (*)[1184])(pf_stack_frame + 16))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 1040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000530
 */

void recovered_10000530(int *api,void *device)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (device != (void *)0x0) {
    if ((*(char *)((long)device + 8) == '\f') && (*(char *)((long)device + 9) == '\x03')) {
      pcVar1 = recovered_10000840((long)device);
      recovered_10000ae4(auStack_a0,0x60,str_10000ddf);
      recovered_10000af4((long)auStack_a0,0x60,&DAT_10000df3);
      recovered_10000b4c((long)auStack_a0,0x60,(uint)*(byte *)device,2);
      recovered_10000af4((long)auStack_a0,0x60,(char *)((uintptr_t)pf_module_state+0x71U));
      recovered_10000b4c((long)auStack_a0,0x60,(uint)*(byte *)((long)device + 1),2);
      recovered_10000af4((long)auStack_a0,0x60,(char *)((uintptr_t)pf_module_state+0x73U));
      recovered_10000bc4((long)auStack_a0,0x60,(uint)*(byte *)((long)device + 2));
      recovered_10000ae4(auStack_4a0,0x400,&DAT_10000df9);
      recovered_10000b4c((long)auStack_4a0,0x400,(uint)*(byte *)device,2);
      recovered_10000af4((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x71U));
      recovered_10000b4c((long)auStack_4a0,0x400,(uint)*(byte *)((long)device + 1),2);
      recovered_10000af4((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x73U));
      recovered_10000bc4((long)auStack_4a0,0x400,(uint)*(byte *)((long)device + 2));
      recovered_10000af4((long)auStack_4a0,0x400,&DAT_10000dfe);
      recovered_10000b4c((long)auStack_4a0,0x400,(uint)*(ushort *)((long)device + 4),4);
      recovered_10000af4((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x71U));
      recovered_10000b4c((long)auStack_4a0,0x400,(uint)*(ushort *)((long)device + 6),4);
      recovered_10000af4((long)auStack_4a0,0x400,&DAT_10000e01);
      if ((api != (int *)0x0) && (api[3] != 0)) {
        (*(code *)(ulong)(uint)api[3])(auStack_a0,pcVar1,auStack_4a0);
      }
    }
  }
  return;
}

#undef DAT_10000df3
#undef DAT_10000df9
#undef DAT_10000dfe
#undef DAT_10000e01
#undef str_10000ddf
#undef auStack_4a0
#undef auStack_a0

#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006a4
 */

uint recovered_100006a4(int *api,uint bus,uint slot,uint function,void *out)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;

  local_48 = 0;
  local_4c = 0;
  if (out == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = recovered_100007f0(api,bus,slot,function,0,(void *)((long)&local_48 + 4));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_100007f0(api,bus,slot,function,8,&local_48), uVar3 = 0, uVar2 != 0)) {
        uVar3 = recovered_100007f0(api,bus,slot,function,4,(void *)((long)out + 0x10));
        if (uVar3 == 0) {
          *(undefined4 *)((long)out + 0x10) = 0;
        }
        uVar3 = recovered_100007f0(api,bus,slot,function,0xc,&local_4c);
        if (uVar3 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)((long)out + 4) = PF_PART4(local_48, 4);
        *(ushort *)((long)out + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        *(char *)((long)out + 9) = (char)((ulong)local_48 >> 0x10);
        *(char *)out = (char)bus;
        *(char *)((long)out + 1) = (char)slot;
        *(char *)((long)out + 2) = (char)function;
        *(char *)((long)out + 8) = (char)((ulong)local_48 >> 0x18);
        *(undefined1 *)((long)out + 0xc) = PF_PART1(local_4c, 2);
        for (lVar4 = 0; lVar4 != 6; lVar4 = lVar4 + 1) {
          uStack_50 = 0;
          uVar3 = recovered_100007f0(api,bus,slot,function,(int)lVar4 * 4 + 0x10U & 0xfffc,
                                     &uStack_50);
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)((long)out + lVar4 * 4 + 0x14) = uVar1;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

uint recovered_100007f0(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     ((out == (void *)0x0 || (api[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)api[0x17])(bus,slot,function,offset,4,out);
  return uVar1;
}


#undef DAT_10000f38
#define DAT_10000f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_10000f3d
#define DAT_10000f3d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_10000f42
#define DAT_10000f42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beU)))
#undef DAT_10000f47
#define DAT_10000f47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10000e03
#define str_10000e03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_10000e0e
#define str_10000e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_10000e1d
#define str_10000e1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10000e2e
#define str_10000e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaU)))
#undef str_10000e41
#define str_10000e41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_10000e54
#define str_10000e54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_10000e64
#define str_10000e64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0U)))
#undef str_10000e73
#define str_10000e73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefU)))
#undef str_10000e82
#define str_10000e82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeU)))
#undef str_10000e93
#define str_10000e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#undef str_10000e9e
#define str_10000e9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11aU)))
#undef str_10000eaa
#define str_10000eaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x126U)))
#undef str_10000eb4
#define str_10000eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
#undef str_10000ebd
#define str_10000ebd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_10000ec8
#define str_10000ec8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_10000ed1
#define str_10000ed1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dU)))
#undef str_10000ed9
#define str_10000ed9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x155U)))
#undef str_10000ee2
#define str_10000ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_10000ee9
#define str_10000ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x165U)))
#undef str_10000efc
#define str_10000efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x178U)))
#undef str_10000f0f
#define str_10000f0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_10000f22
#define str_10000f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_10000f4c
#define str_10000f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10000f57
#define str_10000f57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10000f60
#define str_10000f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000840
 */

char * recovered_10000840(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10000ebd;
    }
LAB_10000a24:
    pcVar4 = str_10000ee9;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10000f0f;
      break;
    case 2:
      pcVar4 = str_10000efc;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10000f22;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10000a84:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10000f60;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10000f3d;
        }
        pcVar1 = str_10000f4c;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10000f47;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10000f42;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10000f57;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10000f38;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
      pcVar4 = str_10000e03;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10000eb4;
      }
      goto LAB_10000a24;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10000998:
        return str_10000ee2;
      }
      goto LAB_10000a24;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10000998;
      goto LAB_10000a24;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10000ed9;
      }
      goto LAB_10000a24;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10000ec8;
      }
      goto LAB_10000a24;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10000e9e;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10000a84;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10000eaa;
      }
      goto LAB_10000a24;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10000ed1;
      }
      goto LAB_10000a24;
    }
    if (sVar3 != 0x1af4) goto LAB_10000a24;
    pcVar4 = str_10000e0e;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_100008e0_caseD_1042:
      pcVar4 = str_10000e1d;
      break;
    case 0x1043:
switchD_100008e0_caseD_1043:
      pcVar4 = str_10000e41;
      break;
    case 0x1044:
switchD_100008e0_caseD_1044:
      pcVar4 = str_10000e64;
      break;
    case 0x1045:
switchD_100008e0_caseD_1045:
      pcVar4 = str_10000e2e;
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_100008e0_caseD_1046:
      pcVar4 = str_10000e93;
      break;
    case 0x1048:
switchD_100008e0_caseD_1048:
      pcVar4 = str_10000e54;
      break;
    case 0x1050:
      pcVar4 = str_10000e73;
      break;
    case 0x1052:
      pcVar4 = str_10000e82;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_100008e0_caseD_1042;
      case 0x1002:
        goto switchD_100008e0_caseD_1045;
      case 0x1003:
        goto switchD_100008e0_caseD_1043;
      case 0x1004:
        goto switchD_100008e0_caseD_1048;
      case 0x1005:
        goto switchD_100008e0_caseD_1044;
      default:
        goto switchD_100008e0_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10000f38
#undef DAT_10000f3d
#undef DAT_10000f42
#undef DAT_10000f47
#undef str_10000e03
#undef str_10000e0e
#undef str_10000e1d
#undef str_10000e2e
#undef str_10000e41
#undef str_10000e54
#undef str_10000e64
#undef str_10000e73
#undef str_10000e82
#undef str_10000e93
#undef str_10000e9e
#undef str_10000eaa
#undef str_10000eb4
#undef str_10000ebd
#undef str_10000ec8
#undef str_10000ed1
#undef str_10000ed9
#undef str_10000ee2
#undef str_10000ee9
#undef str_10000efc
#undef str_10000f0f
#undef str_10000f22
#undef str_10000f4c
#undef str_10000f57
#undef str_10000f60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae4
 */

void recovered_10000ae4(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000c74((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af4
 */

void recovered_10000af4(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000c74(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b4c
 */

void recovered_10000b4c(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10000c90(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc4
 */

void recovered_10000bc4(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10000c74(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10000c90(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c74
 */

long recovered_10000c74(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c90
 */

void recovered_10000c90(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000c74(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10000f38
#define DAT_10000f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_10000f3d
#define DAT_10000f3d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_10000f42
#define DAT_10000f42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beU)))
#undef DAT_10000f47
#define DAT_10000f47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10000f4c
#define str_10000f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10000f57
#define str_10000f57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10000f60
#define str_10000f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd0
 */

char * recovered_10000cd0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10000f60;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10000f3d;
  }
  pcVar2 = str_10000f4c;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10000f47;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10000f42;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10000f57;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10000f38;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10000f38
#undef DAT_10000f3d
#undef DAT_10000f42
#undef DAT_10000f47
#undef str_10000f4c
#undef str_10000f57
#undef str_10000f60

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
