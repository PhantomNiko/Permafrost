/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002c3c
#define DAT_10002c3c (*(uint32_t *)(0x10002c3cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

void * recovered_10002c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4210U));
}

#undef DAT_10002c3c

#undef DAT_10002dac
#define DAT_10002dac (*(int *)(0x10002dacU))
#undef DAT_10002db0
#define DAT_10002db0 (*(int *)(0x10002db0U))
#undef DAT_10002db4
#define DAT_10002db4 (*(int *)(0x10002db4U))
#define abStack_78 (*(byte (*)[120])(pf_stack_frame + 24))
#define abStack_4c (*(byte (*)[76])(pf_stack_frame + 68))
#define local_40 (*(char *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

uint recovered_10002c40(void *api)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  uVar5 = 0;
  if ((((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
        (*(int *)((int)api + 4) == 1100000)) &&
       ((0xf7 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xc) != (code *)0x0)))) &&
      ((iVar2 = (**(code **)((int)api + 0xc))
                          (((uintptr_t)pf_module_state + 0x33U),((uintptr_t)pf_module_state + 0x24U),
                           ((uintptr_t)pf_module_state + 0x33U)), iVar2 != 0 &&
       ((uVar5 = 1, *(int *)api == iVar1 && (0x5f < *(uint *)((int)api + 8))))))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    for (uVar5 = 0; uVar5 != 8; uVar5 = uVar5 + 1) {
      for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
        uVar3 = recovered_10002fbc(api,uVar5 & 0xff,uVar6 & 0xff,0,abStack_4c);
        if ((uVar3 != 0) && (recovered_10002db8((int)api,abStack_4c), local_40 < '\0')) {
          for (uVar3 = 1; uVar3 != 8; uVar3 = uVar3 + 1) {
            uVar4 = recovered_10002fbc(api,uVar5 & 0xff,uVar6 & 0xff,uVar3 & 0xff,abStack_78);
            if (uVar4 != 0) {
              recovered_10002db8((int)api,abStack_78);
            }
          }
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_10002dac
#undef DAT_10002db0
#undef DAT_10002db4
#undef abStack_78
#undef abStack_4c
#undef local_40

#undef DAT_10002fa0
#define DAT_10002fa0 (*(int *)(0x10002fa0U))
#undef DAT_10002fa4
#define DAT_10002fa4 (*(int *)(0x10002fa4U))
#undef DAT_10002fa8
#define DAT_10002fa8 (*(int *)(0x10002fa8U))
#undef DAT_10002fac
#define DAT_10002fac (*(int *)(0x10002facU))
#undef DAT_10002fb0
#define DAT_10002fb0 (*(int *)(0x10002fb0U))
#undef DAT_10002fb4
#define DAT_10002fb4 (*(int *)(0x10002fb4U))
#undef DAT_10002fb8
#define DAT_10002fb8 (*(int *)(0x10002fb8U))
#define auStack_484 (*(undefined1 (*)[1156])(pf_stack_frame + 28))
#define auStack_84 (*(undefined1 (*)[132])(pf_stack_frame + 1052))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db8
 */

void recovered_10002db8(int param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1216] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *extraout_r3;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if ((*(short *)(param_2 + 4) == 0x1af4) && ((*(ushort *)(param_2 + 6) | 0x40) == 0x1043)) {
    iVar1 = recovered_100031d4((int)param_2);
    recovered_10003548(auStack_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x64U)));
    recovered_1000355c((int)auStack_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x77U)));
    recovered_100035b0((int)auStack_84,0x60,(uint)*param_2,2);
    pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x79U));
    recovered_1000355c((int)auStack_84,0x60,pcVar3);
    recovered_100035b0((int)auStack_84,0x60,(uint)param_2[1],2);
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x7bU));
    recovered_1000355c((int)auStack_84,0x60,pcVar4);
    recovered_10003610((int)auStack_84,0x60,(uint)param_2[2]);
    recovered_10003548(auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7dU)));
    recovered_100035b0((int)auStack_484,0x400,(uint)*param_2,2);
    recovered_1000355c((int)auStack_484,0x400,pcVar3);
    recovered_100035b0((int)auStack_484,0x400,(uint)param_2[1],2);
    recovered_1000355c((int)auStack_484,0x400,pcVar4);
    recovered_10003610((int)auStack_484,0x400,(uint)param_2[2]);
    recovered_1000355c((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x82U)));
    recovered_100035b0((int)auStack_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_1000355c((int)auStack_484,0x400,pcVar3);
    recovered_100035b0((int)auStack_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_1000355c((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x85U)));
    pcVar2 = extraout_r3;
    if (param_1 != 0) {
      pcVar2 = *(code **)(param_1 + 0xc);
    }
    if (param_1 != 0 && pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_84,iVar1,auStack_484);
    }
  }
  return;
}

#undef DAT_10002fa0
#undef DAT_10002fa4
#undef DAT_10002fa8
#undef DAT_10002fac
#undef DAT_10002fb0
#undef DAT_10002fb4
#undef DAT_10002fb8
#undef auStack_484
#undef auStack_84

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002fbc(int *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_1000315c((int *)api,bus,slot,function,0,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_1000315c((int *)api,bus,slot,function,8,&classification))return 0;
 if(!recovered_1000315c((int *)api,bus,slot,function,4,&command))command=0;
 if(!recovered_1000315c((int *)api,bus,slot,function,12,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_1000315c((int *)api,bus,slot,function,16+i*4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100031d0
#define DAT_100031d0 (*(uint8_t * *)(0x100031d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000315c
 */

uint recovered_1000315c(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;

  if (((api != (int *)0x0) && ((code *)*api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x5f < (uint)api[2])) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (out != (void *)0x0) {
      pcVar2 = (code *)api[0x17];
    }
    if (out != (void *)0x0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(bus,slot,function,offset,4,out);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100031d0

#undef DAT_100033dc
#define DAT_100033dc (*(uint *)(0x100033dcU))
#undef DAT_100034f0
#define DAT_100034f0 (*(uint32_t *)(0x100034f0U))
#undef DAT_100034f4
#define DAT_100034f4 (*(int *)(0x100034f4U))
#undef DAT_100034f8
#define DAT_100034f8 (*(int *)(0x100034f8U))
#undef DAT_100034fc
#define DAT_100034fc (*(int *)(0x100034fcU))
#undef DAT_10003500
#define DAT_10003500 (*(int *)(0x10003500U))
#undef DAT_10003504
#define DAT_10003504 (*(int *)(0x10003504U))
#undef DAT_10003508
#define DAT_10003508 (*(int *)(0x10003508U))
#undef DAT_1000350c
#define DAT_1000350c (*(int *)(0x1000350cU))
#undef DAT_10003510
#define DAT_10003510 (*(int *)(0x10003510U))
#undef DAT_10003514
#define DAT_10003514 (*(int *)(0x10003514U))
#undef DAT_10003518
#define DAT_10003518 (*(int *)(0x10003518U))
#undef DAT_1000351c
#define DAT_1000351c (*(int *)(0x1000351cU))
#undef DAT_10003520
#define DAT_10003520 (*(int *)(0x10003520U))
#undef DAT_10003524
#define DAT_10003524 (*(int *)(0x10003524U))
#undef DAT_10003528
#define DAT_10003528 (*(int *)(0x10003528U))
#undef DAT_1000352c
#define DAT_1000352c (*(int *)(0x1000352cU))
#undef DAT_10003530
#define DAT_10003530 (*(int *)(0x10003530U))
#undef DAT_10003534
#define DAT_10003534 (*(int *)(0x10003534U))
#undef DAT_10003538
#define DAT_10003538 (*(int *)(0x10003538U))
#undef DAT_1000353c
#define DAT_1000353c (*(int *)(0x1000353cU))
#undef DAT_10003540
#define DAT_10003540 (*(int *)(0x10003540U))
#undef DAT_10003544
#define DAT_10003544 (*(int *)(0x10003544U))
#undef switchdataD_100033dc
#define switchdataD_100033dc (*(uint *)(0x100033dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

int recovered_100031d4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_100033d8_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x141U);
    }
LAB_100033b8:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_100033d8_caseD_5;
    iVar3 = (int)&DAT_100033dc + (*(uint32_t *)(uint32_t[]){0xb85ULL});
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x193U);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x180U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x1a6U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000343c:
        iVar3 = recovered_10003724((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_100033d8_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x87U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x138U);
      }
      goto LAB_100033b8;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10003378:
        return ((uintptr_t)pf_module_state + 0x166U);
      }
      goto LAB_100033b8;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10003378;
      goto LAB_100033b8;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x15dU);
      }
      goto LAB_100033b8;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x14cU);
      }
      goto LAB_100033b8;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x122U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000343c;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x12eU);
        }
      }
      goto LAB_100033b8;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x155U);
      }
      goto LAB_100033b8;
    }
    if (sVar2 != 0x1af4) goto LAB_100033b8;
    iVar3 = ((uintptr_t)pf_module_state + 0x92U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10003278_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0xa1U);
      break;
    case 0x1043:
switchD_10003278_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0xc5U);
      break;
    case 0x1044:
switchD_10003278_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0xe8U);
      break;
    case 0x1045:
switchD_10003278_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0xb2U);
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
switchD_10003278_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x117U);
      break;
    case 0x1048:
switchD_10003278_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0xd8U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0xf7U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x106U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10003278_caseD_1042;
      case 0x1002:
        goto switchD_10003278_caseD_1045;
      case 0x1003:
        goto switchD_10003278_caseD_1043;
      case 0x1004:
        goto switchD_10003278_caseD_1048;
      case 0x1005:
        goto switchD_10003278_caseD_1044;
      default:
        goto switchD_10003278_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_100033dc
#undef DAT_100034f0
#undef DAT_100034f4
#undef DAT_100034f8
#undef DAT_100034fc
#undef DAT_10003500
#undef DAT_10003504
#undef DAT_10003508
#undef DAT_1000350c
#undef DAT_10003510
#undef DAT_10003514
#undef DAT_10003518
#undef DAT_1000351c
#undef DAT_10003520
#undef DAT_10003524
#undef DAT_10003528
#undef DAT_1000352c
#undef DAT_10003530
#undef DAT_10003534
#undef DAT_10003538
#undef DAT_1000353c
#undef DAT_10003540
#undef DAT_10003544
#undef switchdataD_100033dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003548
 */

void recovered_10003548(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000355c((int)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000355c
 */

void recovered_1000355c(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100036c0(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035b0
 */

void recovered_100035b0(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_100036e8(param_1,param_2,bVar3);
  }
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003610
 */

void recovered_10003610(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_100036e8(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100037b8(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_100036e8(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c0
 */

int recovered_100036c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e8
 */

void recovered_100036e8(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100036c0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10003798
#define DAT_10003798 (*(uint32_t *)(0x10003798U))
#undef DAT_1000379c
#define DAT_1000379c (*(int *)(0x1000379cU))
#undef DAT_100037a0
#define DAT_100037a0 (*(int *)(0x100037a0U))
#undef DAT_100037a4
#define DAT_100037a4 (*(int *)(0x100037a4U))
#undef DAT_100037a8
#define DAT_100037a8 (*(int *)(0x100037a8U))
#undef DAT_100037ac
#define DAT_100037ac (*(int *)(0x100037acU))
#undef DAT_100037b0
#define DAT_100037b0 (*(int *)(0x100037b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003724
 */

int recovered_10003724(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x1bcU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x1dbU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x1c6U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x1cbU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x1d0U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x1c1U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x1e4U);
  }
  return iVar1;
}

#undef DAT_10003798
#undef DAT_1000379c
#undef DAT_100037a0
#undef DAT_100037a4
#undef DAT_100037a8
#undef DAT_100037ac
#undef DAT_100037b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b8
 */

uint recovered_100037b8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003808
 */

uint recovered_10003808(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003840
 */

uint recovered_10003840(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b0
 */

uint recovered_100038b0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003918
 */

undefined8 recovered_10003918(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039fc
 */

undefined8 recovered_100039fc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a7c
 */

undefined8 recovered_10003a7c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b9c
 */

undefined8 recovered_10003b9c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10003cd8
#define DAT_10003cd8 (*(double *)(0x10003cd8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c58
 */

undefined8 recovered_10003c58(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10003cd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce0
 */

undefined8 recovered_10003ce0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003c58(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003c58(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d2c
 */

undefined8 recovered_10003d2c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003c58(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x20cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d3c
 */

void recovered_10003d3c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x1f4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d4c
 */

double recovered_10003d4c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d94
 */

double recovered_10003d94(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003d4c(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003d4c(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dbc
 */

float recovered_10003dbc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d4c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd8
 */

float recovered_10003dd8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d94(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
