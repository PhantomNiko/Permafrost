/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280820
#define DAT_00280820 (*(uint8_t *)(0x280820U))
#undef DAT_00280824
#define DAT_00280824 (*(uint8_t *)(0x280824U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_00280830
#define DAT_00280830 (*(uint8_t *)(0x280830U))
#undef DAT_100010ec
#define DAT_100010ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10001111
#define DAT_10001111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
#undef DAT_10001fff
#define DAT_10001fff (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc9U)))
#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcaU)))
#undef DAT_10002001
#define DAT_10002001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcbU)))
#undef DAT_10002060
#define DAT_10002060 (*(char *)(((uintptr_t)pf_module_state + 0x102aU)))
#undef DAT_10002064
#define DAT_10002064 (*(uint *)(((uintptr_t)pf_module_state + 0x102eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280820
#define _DAT_00280820 (*(uint *)(0x280820U))
#undef _DAT_00280824
#define _DAT_00280824 (*(uint *)(0x280824U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
#undef _DAT_00280830
#define _DAT_00280830 (*(uint *)(0x280830U))
#undef str_10001040
#define str_10001040 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaU)))
#undef str_10001058
#define str_10001058 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22U)))
#undef str_10001074
#define str_10001074 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eU)))
#undef str_1000108e
#define str_1000108e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58U)))
#undef str_100010ab
#define str_100010ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75U)))
#undef str_100010c0
#define str_100010c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#define local_50 (*(byte * *)(pf_stack_frame + 16))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(byte * *)(pf_stack_frame + 32))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_32 (*(char *)(pf_stack_frame + 46))
#define local_31 (*(char *)(pf_stack_frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10000000(void)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x23 < _DAT_00280808 && ((code *)(ulong)_DAT_00280820 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280820)(0,0x55ff55,10);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(str_10001040);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(str_10001058);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(str_10001074);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(str_1000108e);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(str_100010ab);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(str_100010c0);
  }
LAB_1000020e:
  DAT_10002000 = 0;
  if (_DAT_00280800 == 0x50414d57) {
    if (_DAT_00280804 == 0) {
      uVar7 = 0;
    }
    else if (_DAT_00280808 < 0xc) {
      uVar7 = 0;
    }
    else if (_DAT_00280808 < 0x28) {
      uVar7 = 0;
    }
    else {
      iVar6 = 0x5c;
      uVar8 = 0;
      uVar7 = 0;
      if (_DAT_00280824 != 0) goto LAB_10000831;
    }
  }
  else {
    uVar7 = 0;
  }
switchD_100002e0_caseD_0:
  do {
    do {
      uVar3 = uVar7;
      uVar7 = uVar3;
    } while (_DAT_00280800 != 0x50414d57);
  } while (((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) ||
          ((_DAT_00280808 < 0x30 || ((code *)(ulong)_DAT_0028082c == (code *)0x0))));
  bVar1 = (*(code *)(ulong)_DAT_0028082c)();
  switch((uintptr_t)(bVar1)) {
  case 0:
    goto switchD_100002e0_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    goto switchD_100002e0_caseD_1;
  case 8:
switchD_100002e0_caseD_8:
    uVar7 = 0;
    if (uVar3 == 0) goto switchD_100002e0_caseD_0;
    (&DAT_10001fff)[uVar3] = 0;
    uVar8 = uVar3 - 1;
    uVar7 = uVar8;
    if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
       ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x28 || (_DAT_00280824 == 0))))))
    goto switchD_100002e0_caseD_0;
    iVar6 = 8;
    break;
  case 10:
  case 0xd:
    goto switchD_100002e0_caseD_a;
  case 0x1b:
    if (uVar3 == 0) {
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280828)(&DAT_100010ec);
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x33 < _DAT_00280808 && ((code *)(ulong)_DAT_00280830 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00280830)();
      }
      return 0;
    }
    DAT_10002000 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_100010ec);
    }
    uVar7 = 0;
    if (((_DAT_00280800 != 0x50414d57) || (uVar7 = 0, _DAT_00280804 == 0)) ||
       ((uVar7 = 0, _DAT_00280808 < 0xc ||
        ((uVar7 = 0, _DAT_00280808 < 0x28 || (uVar7 = 0, _DAT_00280824 == 0))))))
    goto switchD_100002e0_caseD_0;
    iVar6 = 0x5c;
    uVar8 = 0;
    break;
  default:
    if (bVar1 == 0x7f) goto switchD_100002e0_caseD_8;
switchD_100002e0_caseD_1:
    if ((bVar1 - 0x7f < 0xffffffa1) || (uVar8 = uVar3 + 1, 0x5f < uVar8))
    goto switchD_100002e0_caseD_0;
    bVar4 = bVar1 - 0x20;
    if (0x19 < (byte)(bVar1 + 0x9f)) {
      bVar4 = bVar1;
    }
    (&DAT_10002000)[uVar3] = bVar4;
    (&DAT_10002001)[uVar3] = 0;
    uVar7 = uVar8;
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       ((_DAT_00280808 < 0x28 || (_DAT_00280824 == 0)))) goto switchD_100002e0_caseD_0;
    iVar6 = (int)(char)bVar4;
  }
LAB_10000831:
  (*(code *)(ulong)_DAT_00280824)(iVar6);
  uVar7 = uVar8;
  goto switchD_100002e0_caseD_0;
switchD_100002e0_caseD_a:
  (&DAT_10002000)[uVar3] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_100010ec);
  }
  for (local_40 = &DAT_10002000; (bVar1 = *local_40, bVar1 == 0x20 || (bVar1 == 9));
      local_40 = local_40 + 1) {
  }
  local_38 = 0;
  local_31 = '\0';
  if (bVar1 == 0) {
    if (DAT_10002060 != '\x01') goto LAB_1000020e;
    uVar7 = (ulong)DAT_10002064;
    goto LAB_10000663;
  }
  uVar2 = recovered_10000ce0((long *)&local_40,&local_38,&local_31);
  if ((char)uVar2 != '\0') {
    if (local_40 == (byte *)0x0) {
      local_40 = (byte *)0x0;
    }
    else {
      for (; (*local_40 == 0x20 || (*local_40 == 9)); local_40 = local_40 + 1) {
      }
    }
    bVar1 = *local_40;
    if (bVar1 < 0x3a) {
      if (bVar1 == 0) {
        if (local_31 == '\x01') {
          uVar7 = (ulong)local_38;
        }
        else {
          if (DAT_10002060 != '\x01') goto LAB_10000860;
          uVar7 = (ulong)DAT_10002064;
          local_38 = DAT_10002064;
        }
LAB_10000663:
        uVar5 = (uint)uVar7 + 7;
        if (0xfffffff8 < (uint)uVar7) {
          uVar5 = 0xffffffff;
        }
        recovered_100009d0(uVar7,uVar5);
        goto LAB_1000020e;
      }
      if (bVar1 == 0x2e) {
        local_50 = (byte *)((ulong)local_50 & 0xffffffff00000000);
        local_44 = local_44 & 0xffffff00;
        if (local_31 == '\x01') {
          do {
            do {
              local_40 = local_40 + 1;
            } while (*local_40 == 0x20);
          } while (*local_40 == 9);
          uVar2 = recovered_10000ce0((long *)&local_40,(undefined4 *)&local_50,
                                     (undefined1 *)&local_44);
          if (((char)uVar2 != '\0') && ((char)local_44 == '\x01')) {
            for (; (*local_40 == 0x20 || (*local_40 == 9)); local_40 = local_40 + 1) {
            }
            if (*local_40 == 0) {
              if (local_38 <= (uint)local_50) {
                recovered_100009d0((ulong)local_38,(uint)local_50);
                goto LAB_1000020e;
              }
            }
          }
        }
      }
    }
    else if (bVar1 == 0x3a) {
      if (local_31 == '\x01') {
        local_40 = local_40 + 1;
        for (local_50 = local_40; (bVar1 = *local_50, bVar1 == 0x20 || (bVar1 == 9));
            local_50 = local_50 + 1) {
        }
        uVar5 = local_38;
        if (bVar1 != 0) {
          do {
            local_44 = 0;
            local_32 = '\0';
            uVar2 = recovered_10000ce0((long *)&local_50,&local_44,&local_32);
            if ((((char)uVar2 == '\0') || (local_32 != '\x01')) || (0xff < local_44))
            goto LAB_10000860;
            *(char *)(ulong)uVar5 = (char)local_44;
            for (; (*local_50 == 0x20 || (*local_50 == 9)); local_50 = local_50 + 1) {
            }
            uVar5 = uVar5 + 1;
          } while (*local_50 != 0);
          DAT_10002060 = '\x01';
          DAT_10002064 = uVar5;
          goto LAB_1000020e;
        }
      }
    }
    else if (bVar1 == 0x52) {
      if (local_31 == '\0') {
        if (DAT_10002060 != '\x01') goto LAB_10000860;
        local_38 = DAT_10002064;
      }
      do {
        do {
          local_40 = local_40 + 1;
        } while (*local_40 == 0x20);
      } while (*local_40 == 9);
      if (*local_40 == 0) {
        DAT_10002064 = local_38;
        DAT_10002060 = '\x01';
        (*(code *)(ulong)local_38)();
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0x2b < _DAT_00280808)))) {
          if ((code *)(ulong)_DAT_00280828 != (code *)0x0) {
            (*(code *)(ulong)_DAT_00280828)(&DAT_100010ec);
          }
        }
        goto LAB_1000020e;
      }
    }
  }
LAB_10000860:
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0x2b < _DAT_00280808)) {
    if ((code *)(ulong)_DAT_00280828 != (code *)0x0) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_10001111);
    }
  }
  goto LAB_1000020e;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280820
#undef DAT_00280824
#undef DAT_00280828
#undef DAT_0028082c
#undef DAT_00280830
#undef DAT_100010ec
#undef DAT_10001111
#undef DAT_10001fff
#undef DAT_10002000
#undef DAT_10002001
#undef DAT_10002060
#undef DAT_10002064
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280820
#undef _DAT_00280824
#undef _DAT_00280828
#undef _DAT_0028082c
#undef _DAT_00280830
#undef str_10001040
#undef str_10001058
#undef str_10001074
#undef str_1000108e
#undef str_100010ab
#undef str_100010c0
#undef local_50
#undef local_44
#undef local_40
#undef local_38
#undef local_32
#undef local_31

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_100010ec
#define DAT_100010ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_100010ef
#define DAT_100010ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9U)))
#undef DAT_100010f1
#define DAT_100010f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef DAT_10002060
#define DAT_10002060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x102aU)))
#undef DAT_10002064
#define DAT_10002064 (*(int *)(((uintptr_t)pf_module_state + 0x102eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef str_10001100
#define str_10001100 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcaU)))
#define local_3c (*(char *)(pf_stack_frame + 20))
#define local_3b (*(char *)(pf_stack_frame + 21))
#define local_3a (*(char *)(pf_stack_frame + 22))
#define local_39 (*(char *)(pf_stack_frame + 23))
#define local_38 (*(char *)(pf_stack_frame + 24))
#define local_37 (*(char *)(pf_stack_frame + 25))
#define local_36 (*(char *)(pf_stack_frame + 26))
#define local_35 (*(char *)(pf_stack_frame + 27))
#define local_34 (*(undefined1 *)(pf_stack_frame + 28))
#define local_33 (*(char *)(pf_stack_frame + 29))
#define local_32 (*(char *)(pf_stack_frame + 30))
#define local_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100009d0(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;

  pbVar3 = (byte *)(param_1 & 0xffffffff);
  do {
    uVar2 = (uint)pbVar3;
    local_3c = str_10001100[(ulong)pbVar3 >> 0x1c & 0xf];
    local_3b = str_10001100[(uint)((ulong)pbVar3 >> 0x18) & 0xf];
    local_3a = str_10001100[(uint)((ulong)pbVar3 >> 0x14) & 0xf];
    local_39 = str_10001100[(uint)((ulong)pbVar3 >> 0x10) & 0xf];
    local_38 = str_10001100[(uint)((ulong)pbVar3 >> 0xc) & 0xf];
    local_37 = str_10001100[(uint)((ulong)pbVar3 >> 8) & 0xf];
    local_36 = str_10001100[(uint)((ulong)pbVar3 >> 4) & 0xf];
    local_35 = str_10001100[uVar2 & 0xf];
    local_34 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(&local_3c);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_100010ef);
    }
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffff);
    uVar4 = 0;
    do {
      if ((7 < uVar4) || ((byte *)(ulong)param_2 < pbVar3)) goto LAB_10000c42;
      bVar1 = *pbVar3;
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x2b < _DAT_00280808)))) &&
         ((code *)(ulong)_DAT_00280828 != (code *)0x0)) {
        (*(code *)(ulong)_DAT_00280828)(&DAT_100010f1);
      }
      local_33 = str_10001100[bVar1 >> 4];
      local_32 = str_10001100[bVar1 & 0xf];
      local_31 = 0;
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00280828)(&local_33);
      }
      uVar4 = uVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 != (byte *)0x100000000);
    pbVar3 = (byte *)0x0;
LAB_10000c42:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_100010ec);
    }
    if ((param_2 <= uVar2) || (param_2 <= (int)pbVar3 - 1U)) {
      DAT_10002064 = param_2 + 1;
      DAT_10002060 = 1;
      return;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_100010ec
#undef DAT_100010ef
#undef DAT_100010f1
#undef DAT_10002060
#undef DAT_10002064
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef str_10001100
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

undefined8 recovered_10000ce0(long *param_1,undefined4 *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar7;
  byte bVar6;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  bVar6 = *pbVar1;
  bVar2 = bVar6 - 0x30U;
  if (9 < bVar2) {
    uVar4 = 0;
    if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0)) {
      *param_3 = 0;
      goto LAB_1000102c;
    }
    if ((byte)(bVar6 + 0x9f) < 0x1a) {
      bVar6 = bVar6 - 0x20;
    }
    bVar2 = bVar6 - 0x37;
  }
  uVar4 = (ulong)bVar2;
  bVar7 = pbVar1[1];
  bVar6 = bVar7 - 0x30U;
  if (bVar6 < 10) {
LAB_10000daa:
    uVar3 = (uint)bVar6 | (uint)bVar2 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[2];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 2;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    uVar3 = (uint)bVar2 | uVar3 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[3];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 3;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    uVar3 = (uint)bVar2 | uVar3 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[4];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 4;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    uVar3 = (uint)bVar2 | uVar3 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[5];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 5;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    uVar3 = (uint)bVar2 | uVar3 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[6];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 6;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    uVar3 = (uint)bVar2 | uVar3 << 4;
    uVar4 = (ulong)uVar3;
    bVar6 = pbVar1[7];
    bVar2 = bVar6 - 0x30U;
    if (9 < bVar2) {
      pbVar5 = pbVar1 + 7;
      if ((0x25 < bVar6 - 0x41U) || ((0x3f0000003fU >> ((ulong)(bVar6 - 0x41U) & 0x3f) & 1) == 0))
      goto LAB_10001024;
      if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 - 0x20;
      }
      bVar2 = bVar6 - 0x37;
    }
    if ((byte)(pbVar1[8] - 0x30U) < 10) {
      return 0;
    }
    pbVar5 = pbVar1 + 8;
    uVar4 = (ulong)((uint)bVar2 | uVar3 << 4);
    bVar2 = pbVar1[8] + 0xbf;
    if ((bVar2 < 0x26) && ((0x3f0000003fU >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
      return 0;
    }
  }
  else {
    pbVar5 = pbVar1 + 1;
    if ((bVar7 - 0x41U < 0x26) && ((0x3f0000003fU >> ((ulong)(bVar7 - 0x41U) & 0x3f) & 1) != 0)) {
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        bVar7 = bVar7 - 0x20;
      }
      bVar6 = bVar7 - 0x37;
      goto LAB_10000daa;
    }
  }
LAB_10001024:
  *param_3 = 1;
  *param_2 = (int)uVar4;
  *param_1 = (long)pbVar5;
LAB_1000102c:
  return CONCAT71((int7)(uVar4 >> 8),1);
}

