/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_10000d57
#define DAT_10000d57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef str_10000d48
#define str_10000d48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#define local_38 (*(uint *)(pf_stack_frame + 104))
#define local_34 (*(uint *)(pf_stack_frame + 108))
#define local_90 (*(byte (*)[144])(pf_stack_frame + 16))
#define local_64 (*(byte (*)[100])(pf_stack_frame + 60))
#define local_58 (*(char *)(pf_stack_frame + 72))
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
    iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10000d57,str_10000d48,&DAT_10000d57);
    if (iVar1 != 0) {
      uVar3 = 1;
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (local_34 = 0; local_34 != 8; local_34 = local_34 + 1) {
          uVar3 = local_34 & 0xff;
          for (local_38 = 0; local_38 != 0x20; local_38 = local_38 + 1) {
            slot = local_38 & 0xff;
            uVar2 = recovered_100006c0(api,uVar3,slot,0,local_64);
            if (uVar2 != 0) {
              recovered_100004cc((long)api,local_64);
              if (local_58 < '\0') {
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  uVar2 = recovered_100006c0(api,uVar3,slot,iVar1 + 8U & 0xff,local_90);
                  if (uVar2 != 0) {
                    recovered_100004cc((long)api,local_90);
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

#undef DAT_10000d57
#undef str_10000d48
#undef local_38
#undef local_34
#undef local_90
#undef local_64
#undef local_58

#undef DAT_10000d9b
#define DAT_10000d9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10000d9d
#define DAT_10000d9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_10000d9f
#define DAT_10000d9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_10000da1
#define DAT_10000da1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_10000da6
#define DAT_10000da6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_10000da9
#define DAT_10000da9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef str_10000d88
#define str_10000d88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40U)))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 24))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 1048))
#define local_38 (*(char * *)(pf_stack_frame + 1144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004cc
 */

void recovered_100004cc(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};


  if (((param_2 != (byte *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
     ((*(ushort *)(param_2 + 6) | 0x40) == 0x1043)) {
    local_38 = recovered_10000882((long)param_2);
    recovered_10000b4c(local_98,0x60,str_10000d88);
    recovered_10000b60((long)local_98,0x60,&DAT_10000d9b);
    recovered_10000bb4((long)local_98,0x60,(uint)*param_2,2);
    recovered_10000b60((long)local_98,0x60,&DAT_10000d9d);
    recovered_10000bb4((long)local_98,0x60,(uint)param_2[1],2);
    recovered_10000b60((long)local_98,0x60,&DAT_10000d9f);
    recovered_10000c11((long)local_98,0x60,(ulong)param_2[2]);
    recovered_10000b4c(local_498,0x400,&DAT_10000da1);
    recovered_10000bb4((long)local_498,0x400,(uint)*param_2,2);
    recovered_10000b60((long)local_498,0x400,&DAT_10000d9d);
    recovered_10000bb4((long)local_498,0x400,(uint)param_2[1],2);
    recovered_10000b60((long)local_498,0x400,&DAT_10000d9f);
    recovered_10000c11((long)local_498,0x400,(ulong)param_2[2]);
    recovered_10000b60((long)local_498,0x400,&DAT_10000da6);
    recovered_10000bb4((long)local_498,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_10000b60((long)local_498,0x400,&DAT_10000d9d);
    recovered_10000bb4((long)local_498,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_10000b60((long)local_498,0x400,&DAT_10000da9);
    if ((param_1 != 0) && ((code *)(ulong)*(uint *)(param_1 + 0xc) != (code *)0x0)) {
      (*(code *)(ulong)*(uint *)(param_1 + 0xc))(local_98,local_38,local_498);
    }
  }
  return;
}

#undef DAT_10000d9b
#undef DAT_10000d9d
#undef DAT_10000d9f
#undef DAT_10000da1
#undef DAT_10000da6
#undef DAT_10000da9
#undef str_10000d88
#undef local_498
#undef local_98
#undef local_38

#define local_58 (*(uint *)(pf_stack_frame + 24))
#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define local_4c (*(undefined4 *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_40 (*(uint *)(pf_stack_frame + 48))
#define local_3c (*(undefined4 *)(pf_stack_frame + 52))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006c0
 */

uint recovered_100006c0(int *api,uint bus,uint slot,uint function,void *out)

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
    uVar1 = recovered_1000083c(api,bus & 0xff,slot_00,function_00,0,&local_3c);
    if (((uVar1 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar1 = recovered_1000083c(api,bus & 0xff,slot & 0xff,function & 0xff,8,&local_50);
      if (uVar1 != 0) {
        bus_00 = bus & 0xff;
        uVar1 = recovered_1000083c(api,bus_00,slot_00,function_00,4,(undefined4 *)((long)out + 0x10)
                                  );
        if (uVar1 == 0) {
          *(undefined4 *)((long)out + 0x10) = 0;
        }
        local_58 = slot & 0xff;
        uVar1 = recovered_1000083c(api,bus_00,slot_00,function_00,0xc,&local_38);
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
          uVar1 = recovered_1000083c(api,bus_00,local_58,function_00,(int)lVar3 + 0x10U & 0xffff,
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

#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000083c
 */

uint recovered_1000083c(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)(ulong)(uint)api[0x17] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000087c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)api[0x17])
                    (bus & 0xff,slot & 0xff,function & 0xff,offset & 0xffff,4,out);
  return uVar1;
}


#undef str_10000dab
#define str_10000dab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63U)))
#undef str_10000db6
#define str_10000db6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_10000dc5
#define str_10000dc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#undef str_10000dd6
#define str_10000dd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_10000de9
#define str_10000de9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1U)))
#undef str_10000dfc
#define str_10000dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4U)))
#undef str_10000e0c
#define str_10000e0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_10000e1b
#define str_10000e1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10000e2a
#define str_10000e2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2U)))
#undef str_10000e3b
#define str_10000e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3U)))
#undef str_10000e46
#define str_10000e46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeU)))
#undef str_10000e52
#define str_10000e52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10aU)))
#undef str_10000e5c
#define str_10000e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_10000e65
#define str_10000e65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#undef str_10000e70
#define str_10000e70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10000e79
#define str_10000e79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_10000e81
#define str_10000e81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_10000e8a
#define str_10000e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
#undef str_10000e91
#define str_10000e91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10000ea4
#define str_10000ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15cU)))
#undef str_10000eb7
#define str_10000eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16fU)))
#undef str_10000eca
#define str_10000eca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000882
 */

char * recovered_10000882(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;

  pcVar2 = str_10000dab;
  if (param_1 == 0) {
    return pcVar2;
  }
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10000e65;
    }
LAB_10000a37:
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar2 = str_10000eb7;
      break;
    case 2:
      pcVar2 = str_10000ea4;
      break;
    case 3:
      pcVar2 = str_10000e91;
      break;
    case 4:
      pcVar2 = str_10000eca;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10000a7c:
        pcVar2 = recovered_10000ce2((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10000e5c;
      }
      goto LAB_10000a37;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100009c6:
        return str_10000e8a;
      }
      goto LAB_10000a37;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100009c6;
      goto LAB_10000a37;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10000e81;
      }
      goto LAB_10000a37;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10000e70;
      }
      goto LAB_10000a37;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10000e46;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10000a7c;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10000e52;
      }
      goto LAB_10000a37;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10000e79;
      }
      goto LAB_10000a37;
    }
    if (sVar1 != 0x1af4) goto LAB_10000a37;
    pcVar2 = str_10000db6;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10000926_caseD_1042:
      pcVar2 = str_10000dc5;
      break;
    case 0x1043:
switchD_10000926_caseD_1043:
      pcVar2 = str_10000de9;
      break;
    case 0x1044:
switchD_10000926_caseD_1044:
      pcVar2 = str_10000e0c;
      break;
    case 0x1045:
switchD_10000926_caseD_1045:
      pcVar2 = str_10000dd6;
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
switchD_10000926_caseD_1046:
      pcVar2 = str_10000e3b;
      break;
    case 0x1048:
switchD_10000926_caseD_1048:
      pcVar2 = str_10000dfc;
      break;
    case 0x1050:
      pcVar2 = str_10000e1b;
      break;
    case 0x1052:
      pcVar2 = str_10000e2a;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10000926_caseD_1042;
      case 0x1002:
        goto switchD_10000926_caseD_1045;
      case 0x1003:
        goto switchD_10000926_caseD_1043;
      case 0x1004:
        goto switchD_10000926_caseD_1048;
      case 0x1005:
        goto switchD_10000926_caseD_1044;
      default:
        goto switchD_10000926_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10000dab
#undef str_10000db6
#undef str_10000dc5
#undef str_10000dd6
#undef str_10000de9
#undef str_10000dfc
#undef str_10000e0c
#undef str_10000e1b
#undef str_10000e2a
#undef str_10000e3b
#undef str_10000e46
#undef str_10000e52
#undef str_10000e5c
#undef str_10000e65
#undef str_10000e70
#undef str_10000e79
#undef str_10000e81
#undef str_10000e8a
#undef str_10000e91
#undef str_10000ea4
#undef str_10000eb7
#undef str_10000eca

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b4c
 */

void recovered_10000b4c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10000b60((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

void recovered_10000b60(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10000c88(param_1);
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
 * Address: 0x10000bb4
 */

void recovered_10000bb4(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10000ca8(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c11
 */

void recovered_10000c11(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10000ca8(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10000ca8(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c88
 */

long recovered_10000c88(long param_1)

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
 * Address: 0x10000ca8
 */

void recovered_10000ca8(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000c88(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10000ee0
#define DAT_10000ee0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x198U)))
#undef DAT_10000ee5
#define DAT_10000ee5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19dU)))
#undef DAT_10000eea
#define DAT_10000eea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a2U)))
#undef DAT_10000eef
#define DAT_10000eef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_10000ef4
#define str_10000ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1acU)))
#undef str_10000eff
#define str_10000eff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b7U)))
#undef str_10000f08
#define str_10000f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce2
 */

char * recovered_10000ce2(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_10000ee0;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_10000eff;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_10000eea;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_10000eef;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_10000ef4;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_10000ee5;
  }
  else {
    pcVar1 = str_10000f08;
  }
  return pcVar1;
}

#undef DAT_10000ee0
#undef DAT_10000ee5
#undef DAT_10000eea
#undef DAT_10000eef
#undef str_10000ef4
#undef str_10000eff
#undef str_10000f08

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
