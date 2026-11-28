/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x326cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10000dc7
#define DAT_10000dc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33U)))
#undef str_10000db8
#define str_10000db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#define local_50 (*(char *)(pf_stack_frame + 80))
#define abStack_88 (*(byte (*)[136])(pf_stack_frame + 24))
#define abStack_5c (*(byte (*)[92])(pf_stack_frame + 68))
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
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10000dc7,str_10000db8,&DAT_10000dc7)
      ;
      uVar4 = 0;
      if (iVar1 != 0) {
        if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
           (*(int *)((long)api + 0x5c) != 0)) {
          for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
            for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
              uVar2 = recovered_100006b0(api,uVar4 & 0xff,uVar5 & 0xff,0,abStack_5c);
              if ((uVar2 != 0) && (recovered_10000530((long)api,abStack_5c), local_50 < '\0')) {
                for (uVar2 = 1; uVar2 != 8; uVar2 = uVar2 + 1) {
                  uVar3 = recovered_100006b0(api,uVar4 & 0xff,uVar5 & 0xff,uVar2 & 0xff,abStack_88);
                  if (uVar3 != 0) {
                    recovered_10000530((long)api,abStack_88);
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

#undef DAT_10000dc7
#undef str_10000db8
#undef local_50
#undef abStack_88
#undef abStack_5c

#undef DAT_10000e0b
#define DAT_10000e0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_10000e11
#define DAT_10000e11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dU)))
#undef DAT_10000e16
#define DAT_10000e16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef DAT_10000e19
#define DAT_10000e19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85U)))
#undef str_10000df8
#define str_10000df8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64U)))
#define auStack_4a0 (*(undefined1 (*)[1184])(pf_stack_frame + 16))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 1040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000530
 */

void recovered_10000530(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_2 != (byte *)0x0) {
    if ((*(short *)(param_2 + 4) == 0x1af4) && ((*(ushort *)(param_2 + 6) | 0x40) == 0x1043)) {
      pcVar1 = recovered_1000084c((long)param_2);
      recovered_10000af4(auStack_a0,0x60,str_10000df8);
      recovered_10000b04((long)auStack_a0,0x60,&DAT_10000e0b);
      recovered_10000b5c((long)auStack_a0,0x60,(uint)*param_2,2);
      recovered_10000b04((long)auStack_a0,0x60,(char *)((uintptr_t)pf_module_state+0x79U));
      recovered_10000b5c((long)auStack_a0,0x60,(uint)param_2[1],2);
      recovered_10000b04((long)auStack_a0,0x60,(char *)((uintptr_t)pf_module_state+0x7bU));
      recovered_10000bd4((long)auStack_a0,0x60,(uint)param_2[2]);
      recovered_10000af4(auStack_4a0,0x400,&DAT_10000e11);
      recovered_10000b5c((long)auStack_4a0,0x400,(uint)*param_2,2);
      recovered_10000b04((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x79U));
      recovered_10000b5c((long)auStack_4a0,0x400,(uint)param_2[1],2);
      recovered_10000b04((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x7bU));
      recovered_10000bd4((long)auStack_4a0,0x400,(uint)param_2[2]);
      recovered_10000b04((long)auStack_4a0,0x400,&DAT_10000e16);
      recovered_10000b5c((long)auStack_4a0,0x400,(uint)*(ushort *)(param_2 + 4),4);
      recovered_10000b04((long)auStack_4a0,0x400,(char *)((uintptr_t)pf_module_state+0x79U));
      recovered_10000b5c((long)auStack_4a0,0x400,(uint)*(ushort *)(param_2 + 6),4);
      recovered_10000b04((long)auStack_4a0,0x400,&DAT_10000e19);
      if ((param_1 != 0) && (*(uint *)(param_1 + 0xc) != 0)) {
        (*(code *)(ulong)*(uint *)(param_1 + 0xc))(auStack_a0,pcVar1,auStack_4a0);
      }
    }
  }
  return;
}

#undef DAT_10000e0b
#undef DAT_10000e11
#undef DAT_10000e16
#undef DAT_10000e19
#undef str_10000df8
#undef auStack_4a0
#undef auStack_a0

#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006b0
 */

uint recovered_100006b0(int *api,uint bus,uint slot,uint function,void *out)

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
    uVar2 = recovered_100007fc(api,bus,slot,function,0,(void *)((long)&local_48 + 4));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_100007fc(api,bus,slot,function,8,&local_48), uVar3 = 0, uVar2 != 0)) {
        uVar3 = recovered_100007fc(api,bus,slot,function,4,(void *)((long)out + 0x10));
        if (uVar3 == 0) {
          *(undefined4 *)((long)out + 0x10) = 0;
        }
        uVar3 = recovered_100007fc(api,bus,slot,function,0xc,&local_4c);
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
          uVar3 = recovered_100007fc(api,bus,slot,function,(int)lVar4 * 4 + 0x10U & 0xfffc,
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
 * Address: 0x100007fc
 */

uint recovered_100007fc(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     ((out == (void *)0x0 || (api[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)api[0x17])(bus,slot,function,offset,4,out);
  return uVar1;
}


#undef DAT_10000f50
#define DAT_10000f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef DAT_10000f55
#define DAT_10000f55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_10000f5a
#define DAT_10000f5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef DAT_10000f5f
#define DAT_10000f5f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_10000e1b
#define str_10000e1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87U)))
#undef str_10000e26
#define str_10000e26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92U)))
#undef str_10000e35
#define str_10000e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1U)))
#undef str_10000e46
#define str_10000e46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2U)))
#undef str_10000e59
#define str_10000e59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5U)))
#undef str_10000e6c
#define str_10000e6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd8U)))
#undef str_10000e7c
#define str_10000e7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
#undef str_10000e8b
#define str_10000e8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7U)))
#undef str_10000e9a
#define str_10000e9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#undef str_10000eab
#define str_10000eab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_10000eb6
#define str_10000eb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#undef str_10000ec2
#define str_10000ec2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
#undef str_10000ecc
#define str_10000ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#undef str_10000ed5
#define str_10000ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141U)))
#undef str_10000ee0
#define str_10000ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_10000ee9
#define str_10000ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x155U)))
#undef str_10000ef1
#define str_10000ef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_10000efa
#define str_10000efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10000f01
#define str_10000f01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16dU)))
#undef str_10000f14
#define str_10000f14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_10000f27
#define str_10000f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#undef str_10000f3a
#define str_10000f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a6U)))
#undef str_10000f64
#define str_10000f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10000f6f
#define str_10000f6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_10000f78
#define str_10000f78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000084c
 */

char * recovered_1000084c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10000a60_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10000ed5;
    }
LAB_10000a34:
    pcVar4 = str_10000f01;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10000f27;
      break;
    case 2:
      pcVar4 = str_10000f14;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10000f3a;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10000a94:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10000f78;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10000f55;
        }
        pcVar1 = str_10000f64;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10000f5f;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10000f5a;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10000f6f;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10000f50;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10000a60_caseD_5:
      pcVar4 = str_10000e1b;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10000ecc;
      }
      goto LAB_10000a34;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100009a8:
        return str_10000efa;
      }
      goto LAB_10000a34;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100009a8;
      goto LAB_10000a34;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10000ef1;
      }
      goto LAB_10000a34;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10000ee0;
      }
      goto LAB_10000a34;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10000eb6;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10000a94;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10000ec2;
      }
      goto LAB_10000a34;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10000ee9;
      }
      goto LAB_10000a34;
    }
    if (sVar3 != 0x1af4) goto LAB_10000a34;
    pcVar4 = str_10000e26;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_100008f0_caseD_1042:
      pcVar4 = str_10000e35;
      break;
    case 0x1043:
switchD_100008f0_caseD_1043:
      pcVar4 = str_10000e59;
      break;
    case 0x1044:
switchD_100008f0_caseD_1044:
      pcVar4 = str_10000e7c;
      break;
    case 0x1045:
switchD_100008f0_caseD_1045:
      pcVar4 = str_10000e46;
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
switchD_100008f0_caseD_1046:
      pcVar4 = str_10000eab;
      break;
    case 0x1048:
switchD_100008f0_caseD_1048:
      pcVar4 = str_10000e6c;
      break;
    case 0x1050:
      pcVar4 = str_10000e8b;
      break;
    case 0x1052:
      pcVar4 = str_10000e9a;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_100008f0_caseD_1042;
      case 0x1002:
        goto switchD_100008f0_caseD_1045;
      case 0x1003:
        goto switchD_100008f0_caseD_1043;
      case 0x1004:
        goto switchD_100008f0_caseD_1048;
      case 0x1005:
        goto switchD_100008f0_caseD_1044;
      default:
        goto switchD_100008f0_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10000f50
#undef DAT_10000f55
#undef DAT_10000f5a
#undef DAT_10000f5f
#undef str_10000e1b
#undef str_10000e26
#undef str_10000e35
#undef str_10000e46
#undef str_10000e59
#undef str_10000e6c
#undef str_10000e7c
#undef str_10000e8b
#undef str_10000e9a
#undef str_10000eab
#undef str_10000eb6
#undef str_10000ec2
#undef str_10000ecc
#undef str_10000ed5
#undef str_10000ee0
#undef str_10000ee9
#undef str_10000ef1
#undef str_10000efa
#undef str_10000f01
#undef str_10000f14
#undef str_10000f27
#undef str_10000f3a
#undef str_10000f64
#undef str_10000f6f
#undef str_10000f78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af4
 */

void recovered_10000af4(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000c84((long)param_1);
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
 * Address: 0x10000b04
 */

void recovered_10000b04(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000c84(param_1);
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
 * Address: 0x10000b5c
 */

void recovered_10000b5c(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10000ca0(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd4
 */

void recovered_10000bd4(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10000c84(param_1);
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
    recovered_10000ca0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c84
 */

long recovered_10000c84(long param_1)

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
 * Address: 0x10000ca0
 */

void recovered_10000ca0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000c84(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10000f50
#define DAT_10000f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef DAT_10000f55
#define DAT_10000f55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_10000f5a
#define DAT_10000f5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef DAT_10000f5f
#define DAT_10000f5f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_10000f64
#define str_10000f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10000f6f
#define str_10000f6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_10000f78
#define str_10000f78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

char * recovered_10000ce0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10000f78;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10000f55;
  }
  pcVar2 = str_10000f64;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10000f5f;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10000f5a;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10000f6f;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10000f50;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10000f50
#undef DAT_10000f55
#undef DAT_10000f5a
#undef DAT_10000f5f
#undef str_10000f64
#undef str_10000f6f
#undef str_10000f78

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
