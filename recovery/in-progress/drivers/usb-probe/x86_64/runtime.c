/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_10000d3c
#define DAT_10000d3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10000d2c
#define str_10000d2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#define local_90 (*(undefined1 (*)[144])(pf_stack_frame + 16))
#define local_64 (*(undefined1 (*)[100])(pf_stack_frame + 60))
#define local_58 (*(char *)(pf_stack_frame + 72))
#define local_38 (*(uint *)(pf_stack_frame + 104))
#define local_34 (*(uint *)(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000038d
 */

uint recovered_1000038d(void *api)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint slot;
  uint uVar3;

  uVar3 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && ((0xf7 < *(uint *)((long)api + 8) &&
            ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10000d3c,str_10000d2c,&DAT_10000d3c);
    if (iVar1 != 0) {
      uVar3 = 1;
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (local_34 = 0; local_34 != 8; local_34 = local_34 + 1) {
          uVar3 = local_34 & 0xff;
          for (local_38 = 0; local_38 != 0x20; local_38 = local_38 + 1) {
            slot = local_38 & 0xff;
            uVar2 = recovered_100006b6(api,uVar3,slot,0,local_64);
            if (uVar2 != 0) {
              recovered_100004cc(api,local_64);
              if (local_58 < '\0') {
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  uVar2 = recovered_100006b6(api,uVar3,slot,iVar1 + 8U & 0xff,local_90);
                  if (uVar2 != 0) {
                    recovered_100004cc(api,local_90);
                  }
                }
              }
            }
          }
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef DAT_10000d3c
#undef str_10000d2c
#undef local_90
#undef local_64
#undef local_58
#undef local_38
#undef local_34

#undef DAT_10000d77
#define DAT_10000d77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10000d79
#define DAT_10000d79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10000d7b
#define DAT_10000d7b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_10000d7d
#define DAT_10000d7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_10000d82
#define DAT_10000d82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_10000d85
#define DAT_10000d85 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59U)))
#undef str_10000d63
#define str_10000d63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37U)))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 24))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 1048))
#define local_38 (*(char * *)(pf_stack_frame + 1144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004cc
 */

void recovered_100004cc(int *api,void *device)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};


  if (((device != (void *)0x0) && (*(char *)((long)device + 8) == '\f')) &&
     (*(char *)((long)device + 9) == '\x03')) {
    local_38 = recovered_10000878((long)device);
    recovered_10000b30(local_98,0x60,str_10000d63);
    recovered_10000b44((long)local_98,0x60,&DAT_10000d77);
    recovered_10000b98((long)local_98,0x60,(uint)*(byte *)device,2);
    recovered_10000b44((long)local_98,0x60,&DAT_10000d79);
    recovered_10000b98((long)local_98,0x60,(uint)*(byte *)((long)device + 1),2);
    recovered_10000b44((long)local_98,0x60,&DAT_10000d7b);
    recovered_10000bf5((long)local_98,0x60,(ulong)*(byte *)((long)device + 2));
    recovered_10000b30(local_498,0x400,&DAT_10000d7d);
    recovered_10000b98((long)local_498,0x400,(uint)*(byte *)device,2);
    recovered_10000b44((long)local_498,0x400,&DAT_10000d79);
    recovered_10000b98((long)local_498,0x400,(uint)*(byte *)((long)device + 1),2);
    recovered_10000b44((long)local_498,0x400,&DAT_10000d7b);
    recovered_10000bf5((long)local_498,0x400,(ulong)*(byte *)((long)device + 2));
    recovered_10000b44((long)local_498,0x400,&DAT_10000d82);
    recovered_10000b98((long)local_498,0x400,(uint)*(ushort *)((long)device + 4),4);
    recovered_10000b44((long)local_498,0x400,&DAT_10000d79);
    recovered_10000b98((long)local_498,0x400,(uint)*(ushort *)((long)device + 6),4);
    recovered_10000b44((long)local_498,0x400,&DAT_10000d85);
    if ((api != (int *)0x0) && ((code *)(ulong)(uint)api[3] != (code *)0x0)) {
      (*(code *)(ulong)(uint)api[3])(local_98,local_38,local_498);
    }
  }
  return;
}

#undef DAT_10000d77
#undef DAT_10000d79
#undef DAT_10000d7b
#undef DAT_10000d7d
#undef DAT_10000d82
#undef DAT_10000d85
#undef str_10000d63
#undef local_498
#undef local_98
#undef local_38

#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define local_4c (*(undefined4 *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_40 (*(uint *)(pf_stack_frame + 48))
#define local_3c (*(undefined4 *)(pf_stack_frame + 52))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 60))
#define local_58 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006b6
 */

uint recovered_100006b6(int *api,uint bus,uint slot,uint function,void *out)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint function_00;
  uint slot_00;
  uint bus_00;
  long lVar3;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (out == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = 0;
    function_00 = function & 0xff;
    slot_00 = slot & 0xff;
    local_48 = function;
    local_44 = slot;
    local_40 = bus;
    uVar1 = recovered_10000832(api,bus & 0xff,slot_00,function_00,0,&local_3c);
    if (((uVar1 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar1 = recovered_10000832(api,bus & 0xff,slot & 0xff,function & 0xff,8,&local_50);
      if (uVar1 != 0) {
        bus_00 = bus & 0xff;
        uVar1 = recovered_10000832(api,bus_00,slot_00,function_00,4,(undefined4 *)((long)out + 0x10)
                                  );
        if (uVar1 == 0) {
          *(undefined4 *)((long)out + 0x10) = 0;
        }
        local_58 = slot & 0xff;
        uVar1 = recovered_10000832(api,bus_00,slot_00,function_00,0xc,&local_38);
        if (uVar1 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *(char *)out = (char)local_40;
        *(char *)((long)out + 1) = (char)local_44;
        *(char *)((long)out + 2) = (char)local_48;
        *(undefined4 *)((long)out + 4) = local_3c;
        *(ushort *)((long)out + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        *(char *)((long)out + 9) = (char)((uint)local_50 >> 0x10);
        *(char *)((long)out + 8) = (char)((uint)local_50 >> 0x18);
        *(undefined1 *)((long)out + 0xc) = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar3 = 0; lVar3 != 0x18; lVar3 = lVar3 + 4) {
          local_4c = 0;
          uVar1 = recovered_10000832(api,bus_00,local_58,function_00,(int)lVar3 + 0x10U & 0xffff,
                                     &local_4c);
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = local_4c;
          }
          *(undefined4 *)((long)out + lVar3 + 0x14) = uVar2;
        }
      }
    }
  }
  return local_34;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000832
 */

uint recovered_10000832(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)(ulong)(uint)api[0x17] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)api[0x17])
                    (bus & 0xff,slot & 0xff,function & 0xff,offset & 0xffff,4,out);
  return uVar1;
}


#undef str_10000d87
#define str_10000d87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_10000d92
#define str_10000d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66U)))
#undef str_10000da1
#define str_10000da1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75U)))
#undef str_10000db2
#define str_10000db2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10000dc5
#define str_10000dc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10000dd8
#define str_10000dd8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacU)))
#undef str_10000de8
#define str_10000de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_10000df7
#define str_10000df7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbU)))
#undef str_10000e06
#define str_10000e06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdaU)))
#undef str_10000e17
#define str_10000e17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xebU)))
#undef str_10000e22
#define str_10000e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_10000e2e
#define str_10000e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10000e38
#define str_10000e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_10000e41
#define str_10000e41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10000e4c
#define str_10000e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10000e55
#define str_10000e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x129U)))
#undef str_10000e5d
#define str_10000e5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_10000e66
#define str_10000e66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13aU)))
#undef str_10000e6d
#define str_10000e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141U)))
#undef str_10000e80
#define str_10000e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154U)))
#undef str_10000e93
#define str_10000e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_10000ea6
#define str_10000ea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000878
 */

char * recovered_10000878(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;

  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10000e41;
    }
LAB_10000a10:
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar2 = str_10000e93;
      break;
    case 2:
      pcVar2 = str_10000e80;
      break;
    case 3:
      pcVar2 = str_10000e6d;
      break;
    case 4:
      pcVar2 = str_10000ea6;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10000a55:
        pcVar2 = recovered_10000cc6((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    default:
      pcVar2 = str_10000d87;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10000e38;
      }
      goto LAB_10000a10;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100009a2:
        return str_10000e66;
      }
      goto LAB_10000a10;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100009a2;
      goto LAB_10000a10;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10000e5d;
      }
      goto LAB_10000a10;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10000e4c;
      }
      goto LAB_10000a10;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10000e22;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10000a55;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10000e2e;
      }
      goto LAB_10000a10;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10000e55;
      }
      goto LAB_10000a10;
    }
    if (sVar1 != 0x1af4) goto LAB_10000a10;
    pcVar2 = str_10000d92;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10000903_caseD_1042:
      pcVar2 = str_10000da1;
      break;
    case 0x1043:
switchD_10000903_caseD_1043:
      pcVar2 = str_10000dc5;
      break;
    case 0x1044:
switchD_10000903_caseD_1044:
      pcVar2 = str_10000de8;
      break;
    case 0x1045:
switchD_10000903_caseD_1045:
      pcVar2 = str_10000db2;
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
switchD_10000903_caseD_1046:
      pcVar2 = str_10000e17;
      break;
    case 0x1048:
switchD_10000903_caseD_1048:
      pcVar2 = str_10000dd8;
      break;
    case 0x1050:
      pcVar2 = str_10000df7;
      break;
    case 0x1052:
      pcVar2 = str_10000e06;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10000903_caseD_1042;
      case 0x1002:
        goto switchD_10000903_caseD_1045;
      case 0x1003:
        goto switchD_10000903_caseD_1043;
      case 0x1004:
        goto switchD_10000903_caseD_1048;
      case 0x1005:
        goto switchD_10000903_caseD_1044;
      default:
        goto switchD_10000903_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10000d87
#undef str_10000d92
#undef str_10000da1
#undef str_10000db2
#undef str_10000dc5
#undef str_10000dd8
#undef str_10000de8
#undef str_10000df7
#undef str_10000e06
#undef str_10000e17
#undef str_10000e22
#undef str_10000e2e
#undef str_10000e38
#undef str_10000e41
#undef str_10000e4c
#undef str_10000e55
#undef str_10000e5d
#undef str_10000e66
#undef str_10000e6d
#undef str_10000e80
#undef str_10000e93
#undef str_10000ea6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b30
 */

void recovered_10000b30(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10000b44((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b44
 */

void recovered_10000b44(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10000c6c(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b98
 */

void recovered_10000b98(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_10000c8c(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bf5
 */

void recovered_10000bf5(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10000c8c(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10000c8c(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c6c
 */

long recovered_10000c6c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c8c
 */

void recovered_10000c8c(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000c6c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10000ebc
#define DAT_10000ebc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190U)))
#undef DAT_10000ec1
#define DAT_10000ec1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef DAT_10000ec6
#define DAT_10000ec6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef DAT_10000ecb
#define DAT_10000ecb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19fU)))
#undef str_10000ed0
#define str_10000ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_10000edb
#define str_10000edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10000ee4
#define str_10000ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cc6
 */

char * recovered_10000cc6(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_10000ebc;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_10000edb;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_10000ec6;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_10000ecb;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_10000ed0;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_10000ec1;
  }
  else {
    pcVar1 = str_10000ee4;
  }
  return pcVar1;
}

#undef DAT_10000ebc
#undef DAT_10000ec1
#undef DAT_10000ec6
#undef DAT_10000ecb
#undef str_10000ed0
#undef str_10000edb
#undef str_10000ee4

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
