/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x212U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003a4
 */

void * recovered_100003a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_10000dfe
#define DAT_10000dfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10000dee
#define str_10000dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#define local_6c (*(undefined1 (*)[108])(pf_stack_frame + 20))
#define local_60 (*(char *)(pf_stack_frame + 32))
#define local_40 (*(undefined1 (*)[64])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ba
 */

uint recovered_100003ba(void *api)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && ((0xf7 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xc) != (code *)0x0)))) {
    iVar1 = (**(code **)((int)api + 0xc))(&DAT_10000dfe,str_10000dee,&DAT_10000dfe);
    if (((iVar1 != 0) &&
        ((uVar4 = 1, *(int *)api == 0x54584b57 && (0x5f < *(uint *)((int)api + 8))))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      for (uVar2 = 0; uVar4 = 1, uVar2 != 8; uVar2 = uVar2 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          uVar3 = recovered_10000703(api,uVar2 & 0xff,uVar4 & 0xff,0,local_6c);
          if (uVar3 != 0) {
            recovered_10000509(api,local_6c);
            if (local_60 < '\0') {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                uVar3 = recovered_10000703(api,uVar2 & 0xff,uVar4 & 0xff,iVar1 + 8U & 0xff,local_40)
                ;
                if (uVar3 != 0) {
                  recovered_10000509(api,local_40);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_10000dfe
#undef str_10000dee
#undef local_6c
#undef local_60
#undef local_40

#undef DAT_10000e39
#define DAT_10000e39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10000e3b
#define DAT_10000e3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10000e3d
#define DAT_10000e3d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_10000e3f
#define DAT_10000e3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_10000e44
#define DAT_10000e44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_10000e47
#define DAT_10000e47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59U)))
#undef str_10000e25
#define str_10000e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37U)))
#define local_474 (*(undefined1 (*)[1140])(pf_stack_frame + 28))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000509
 */

void recovered_10000509(int *api,void *device)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (((device != (void *)0x0) && (*(char *)((int)device + 8) == '\f')) &&
     (*(char *)((int)device + 9) == '\x03')) {
    pvVar1 = recovered_100008c9(device);
    recovered_10000b5c(local_474,0x60,str_10000e25);
    recovered_10000b7b(local_474,0x60,&DAT_10000e39);
    recovered_10000bc1(local_474,0x60,(uint)*(byte *)device,2);
    recovered_10000b7b(local_474,0x60,&DAT_10000e3b);
    recovered_10000bc1(local_474,0x60,(uint)*(byte *)((int)device + 1),2);
    recovered_10000b7b(local_474,0x60,&DAT_10000e3d);
    recovered_10000c13(local_474,0x60,(uint)*(byte *)((int)device + 2));
    recovered_10000b5c(local_414,0x400,&DAT_10000e3f);
    recovered_10000bc1(local_414,0x400,(uint)*(byte *)device,2);
    recovered_10000b7b(local_414,0x400,&DAT_10000e3b);
    recovered_10000bc1(local_414,0x400,(uint)*(byte *)((int)device + 1),2);
    recovered_10000b7b(local_414,0x400,&DAT_10000e3d);
    recovered_10000c13(local_414,0x400,(uint)*(byte *)((int)device + 2));
    recovered_10000b7b(local_414,0x400,&DAT_10000e44);
    recovered_10000bc1(local_414,0x400,(uint)*(ushort *)((int)device + 4),4);
    recovered_10000b7b(local_414,0x400,&DAT_10000e3b);
    recovered_10000bc1(local_414,0x400,(uint)*(ushort *)((int)device + 6),4);
    recovered_10000b7b(local_414,0x400,&DAT_10000e47);
    if ((api != (int *)0x0) && ((code *)api[3] != (code *)0x0)) {
      (*(code *)api[3])(local_474,pvVar1,local_414);
    }
  }
  return;
}

#undef DAT_10000e39
#undef DAT_10000e3b
#undef DAT_10000e3d
#undef DAT_10000e3f
#undef DAT_10000e44
#undef DAT_10000e47
#undef str_10000e25
#undef local_474
#undef local_414

#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000703
 */

uint recovered_10000703(int *api,uint bus,uint slot,uint function,void *out)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint bus_00;
  uint slot_00;
  int iVar4;
  uint function_00;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (out != (void *)0x0) {
    function_00 = function & 0xff;
    slot_00 = slot & 0xff;
    bus_00 = bus & 0xff;
    local_2c = bus;
    uVar1 = recovered_10000866(api,bus_00,slot_00,function_00,0,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_10000866(api,bus_00,slot_00,function_00,8,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_10000866(api,bus_00,slot_00,function_00,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_10000866(api,bus_00,slot_00,function_00,0xc,&local_34);
        if (uVar1 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *(char *)out = (char)local_2c;
        *(undefined1 *)((int)out + 1) = (undefined1)slot;
        *(undefined1 *)((int)out + 2) = (undefined1)function;
        *(uint *)((int)out + 4) = local_30;
        *(ushort *)((int)out + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        *(char *)((int)out + 9) = (char)((uint)local_24 >> 0x10);
        *(char *)((int)out + 8) = (char)((uint)local_24 >> 0x18);
        *(undefined1 *)((int)out + 0xc) = PF_PART1(local_34, 2);
        local_1c = slot_00;
        local_18 = api;
        for (iVar4 = -0x18; iVar4 != 0; iVar4 = iVar4 + 4) {
          local_28 = 0;
          uVar1 = recovered_10000866(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,
                                     &local_28);
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = local_28;
          }
          *(undefined4 *)((int)out + iVar4 + 0x2c) = uVar3;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000866
 */

uint recovered_10000866(int *api,uint bus,uint slot,uint function,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)api[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x17])(bus & 0xff,slot & 0xff,function & 0xff,offset & 0xffff,4,out);
  return uVar1;
}


#undef str_10000e49
#define str_10000e49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_10000e54
#define str_10000e54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66U)))
#undef str_10000e63
#define str_10000e63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75U)))
#undef str_10000e74
#define str_10000e74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10000e87
#define str_10000e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10000e9a
#define str_10000e9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacU)))
#undef str_10000eaa
#define str_10000eaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_10000eb9
#define str_10000eb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbU)))
#undef str_10000ec8
#define str_10000ec8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdaU)))
#undef str_10000ed9
#define str_10000ed9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xebU)))
#undef str_10000ee4
#define str_10000ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_10000ef0
#define str_10000ef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10000efa
#define str_10000efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_10000f03
#define str_10000f03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10000f0e
#define str_10000f0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10000f17
#define str_10000f17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x129U)))
#undef str_10000f1f
#define str_10000f1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_10000f28
#define str_10000f28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13aU)))
#undef str_10000f2f
#define str_10000f2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141U)))
#undef str_10000f42
#define str_10000f42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154U)))
#undef str_10000f55
#define str_10000f55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_10000f68
#define str_10000f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008c9
 */

void * recovered_100008c9(void *device)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  void *pvVar2;
  char *pcVar3;

  sVar1 = *(short *)((int)device + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)((int)device + 6) & 0xfffe) == 0xb8) {
      return str_10000f03;
    }
LAB_10000a49:
    pcVar3 = str_10000f2f;
    switch((uintptr_t)(*(undefined1 *)((int)device + 8))) {
    case 1:
      pcVar3 = str_10000f55;
      break;
    case 2:
      pcVar3 = str_10000f42;
      break;
    case 3:
      break;
    case 4:
      pcVar3 = str_10000f68;
      break;
    case 0xc:
      if (*(char *)((int)device + 9) == '\x03') {
LAB_10000a82:
        pvVar2 = recovered_10000cc9((uint)*(byte *)((int)device + 10));
        return pvVar2;
      }
    default:
      pcVar3 = str_10000e49;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)((int)device + 6) == 0x194) {
        return str_10000efa;
      }
      goto LAB_10000a49;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)((int)device + 6) == 0x21) {
LAB_100009e7:
        return str_10000f28;
      }
      goto LAB_10000a49;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)((int)device + 6) == 0x2bad) goto LAB_100009e7;
      goto LAB_10000a49;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)((int)device + 6) == -0x7fd7) {
        return str_10000f1f;
      }
      goto LAB_10000a49;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)((int)device + 6) == 0x1111) {
        return str_10000f0e;
      }
      goto LAB_10000a49;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)((int)device + 6) == 0x100e) {
        return str_10000ee4;
      }
      if (*(char *)((int)device + 8) == '\f') {
        if (*(char *)((int)device + 9) == '\x03') goto LAB_10000a82;
      }
      else if ((*(char *)((int)device + 8) == '\x04') && (*(char *)((int)device + 9) == '\x03')) {
        return str_10000ef0;
      }
      goto LAB_10000a49;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)((int)device + 6) == 0x100) {
        return str_10000f17;
      }
      goto LAB_10000a49;
    }
    if (sVar1 != 0x1af4) goto LAB_10000a49;
    pcVar3 = str_10000e54;
    switch((uintptr_t)(*(undefined2 *)((int)device + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10000956_caseD_1042:
      pcVar3 = str_10000e63;
      break;
    case 0x1043:
switchD_10000956_caseD_1043:
      pcVar3 = str_10000e87;
      break;
    case 0x1044:
switchD_10000956_caseD_1044:
      pcVar3 = str_10000eaa;
      break;
    case 0x1045:
switchD_10000956_caseD_1045:
      pcVar3 = str_10000e74;
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
switchD_10000956_caseD_1046:
      pcVar3 = str_10000ed9;
      break;
    case 0x1048:
switchD_10000956_caseD_1048:
      pcVar3 = str_10000e9a;
      break;
    case 0x1050:
      pcVar3 = str_10000eb9;
      break;
    case 0x1052:
      pcVar3 = str_10000ec8;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)((int)device + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10000956_caseD_1042;
      case 0x1002:
        goto switchD_10000956_caseD_1045;
      case 0x1003:
        goto switchD_10000956_caseD_1043;
      case 0x1004:
        goto switchD_10000956_caseD_1048;
      case 0x1005:
        goto switchD_10000956_caseD_1044;
      default:
        goto switchD_10000956_caseD_1046;
      }
    }
  }
  return pcVar3;
}

#undef str_10000e49
#undef str_10000e54
#undef str_10000e63
#undef str_10000e74
#undef str_10000e87
#undef str_10000e9a
#undef str_10000eaa
#undef str_10000eb9
#undef str_10000ec8
#undef str_10000ed9
#undef str_10000ee4
#undef str_10000ef0
#undef str_10000efa
#undef str_10000f03
#undef str_10000f0e
#undef str_10000f17
#undef str_10000f1f
#undef str_10000f28
#undef str_10000f2f
#undef str_10000f42
#undef str_10000f55
#undef str_10000f68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b5c
 */

void recovered_10000b5c(void *dest,uint capacity,void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (dest != (void *)0x0) {
    *(undefined1 *)dest = 0;
    recovered_10000b7b(dest,capacity,text);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b7b
 */

void recovered_10000b7b(void *dest,uint capacity,void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10000c7a(dest);
  if (text != (void *)0x0 && dest != (void *)0x0) {
    while( true ) {
      if ((*(char *)text == '\0') || (capacity <= uVar1 + 1)) break;
      *(char *)((int)dest + uVar1) = *(char *)text;
      text = (void *)((int)text + 1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)((int)dest + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc1
 */

void recovered_10000bc1(void *dest,uint capacity,uint value,uint digits)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint character;
  int iVar2;
  bool bVar3;

  iVar2 = digits * 4;
  while( true ) {
    iVar2 = iVar2 + -4;
    bVar3 = digits == 0;
    digits = digits - 1;
    if (bVar3) break;
    uVar1 = value >> ((byte)iVar2 & 0x1f) & 0xf;
    character = uVar1 + 0x37;
    if (uVar1 < 10) {
      character = uVar1 + 0x30;
    }
    recovered_10000c9b(dest,capacity,character);
  }
  return;
}


#define acStack_1f (*(char (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c13
 */

void recovered_10000c13(void *dest,uint capacity,uint value)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (value == 0) {
    recovered_10000c9b(dest,capacity,0x30);
  }
  else {
    for (uVar1 = 0; (value != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      acStack_1f[uVar1 + 1] = (byte)(value % 10) | 0x30;
      value = value / 10;
    }
    while (uVar1 != 0) {
      recovered_10000c9b(dest,capacity,(int)acStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef acStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c7a
 */

uint recovered_10000c7a(void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  if (text == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      iVar1 = uVar3 + 1;
      uVar3 = uVar2;
    } while (*(char *)((int)text + iVar1) != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c9b
 */

void recovered_10000c9b(void *dest,uint capacity,uint character)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10000c7a(dest);
  if ((dest != (void *)0x0) && (uVar1 + 1 < capacity)) {
    *(undefined1 *)((int)dest + uVar1) = (undefined1)character;
    *(undefined1 *)((int)dest + uVar1 + 1) = 0;
  }
  return;
}


#undef DAT_10000f7e
#define DAT_10000f7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190U)))
#undef DAT_10000f83
#define DAT_10000f83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef DAT_10000f88
#define DAT_10000f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef DAT_10000f8d
#define DAT_10000f8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19fU)))
#undef str_10000f92
#define str_10000f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_10000f9d
#define str_10000f9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10000fa6
#define str_10000fa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cc9
 */

void * recovered_10000cc9(uint interface)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (interface == 0) {
    pcVar1 = &DAT_10000f7e;
  }
  else if (interface == 0xfe) {
    pcVar1 = str_10000f9d;
  }
  else if (interface == 0x20) {
    pcVar1 = &DAT_10000f88;
  }
  else if (interface == 0x30) {
    pcVar1 = &DAT_10000f8d;
  }
  else if (interface == 0x80) {
    pcVar1 = str_10000f92;
  }
  else if (interface == 0x10) {
    pcVar1 = &DAT_10000f83;
  }
  else {
    pcVar1 = str_10000fa6;
  }
  return pcVar1;
}

#undef DAT_10000f7e
#undef DAT_10000f83
#undef DAT_10000f88
#undef DAT_10000f8d
#undef str_10000f92
#undef str_10000f9d
#undef str_10000fa6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d32
 */

undefined8 recovered_10000d32(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10000d6d;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10000d6d;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10000d6d:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d74
 */

undefined8 recovered_10000d74(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db8
 */

undefined8 recovered_10000db8(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
