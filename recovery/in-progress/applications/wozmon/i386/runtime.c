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
#undef DAT_08001000
#define DAT_08001000 (*(uint8_t *)(0x8001000U))
#undef DAT_08001001
#define DAT_08001001 (*(uint8_t *)(0x8001001U))
#undef DAT_08001060
#define DAT_08001060 (*(char *)(0x8001060U))
#undef DAT_08001064
#define DAT_08001064 (*(uint8_t *)(0x8001064U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280820
#define _DAT_00280820 (*(code * *)(0x280820U))
#undef _DAT_00280824
#define _DAT_00280824 (*(code * *)(0x280824U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
#undef _DAT_00280830
#define _DAT_00280830 (*(code * *)(0x280830U))
#define local_29 (*(byte *)(pf_stack_frame + 39))
#define local_28 (*(byte * *)(pf_stack_frame + 40))
#define local_21 (*(byte *)(pf_stack_frame + 47))
#define local_20 (*(code * *)(pf_stack_frame + 48))
#define local_1c (*(byte * *)(pf_stack_frame + 52))
#define local_18 (*(code * (*)[6])(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10000000(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  code *end;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x23 < _DAT_00280808 && (_DAT_00280820 != (code *)0x0)))) {
    (*_DAT_00280820)(0,0x55ff55,10);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0x72U));
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0x8aU));
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0xa6U));
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0xc0U));
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0xddU));
  }
  if (_DAT_00280800 != 0x50414d57) goto LAB_100001c0;
  if (_DAT_00280804 == 0) goto LAB_100001c0;
  if (_DAT_00280808 < 0xc) goto LAB_100001c0;
  if (_DAT_00280808 < 0x2c) goto LAB_100001c0;
  if (_DAT_00280828 == (code *)0x0) goto LAB_100001c0;
  uVar8 = ((uintptr_t)pf_module_state+0xf2U);
LAB_100001b7:
  (*_DAT_00280828)(uVar8);
LAB_100001c0:
  (*(uint8_t *)((uintptr_t)pf_module_state+0x216U)) = 0;
  uVar2 = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0x27 < _DAT_00280808)) {
    iVar5 = 0x5c;
    uVar7 = 0;
    uVar2 = 0;
    if (_DAT_00280824 != (code *)0x0) goto LAB_1000073a;
  }
switchD_10000259_caseD_0:
  do {
    do {
      uVar3 = uVar2;
      uVar2 = uVar3;
    } while (_DAT_00280800 != 0x50414d57);
  } while (((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) ||
          ((_DAT_00280808 < 0x30 || (_DAT_0028082c == (code *)0x0))));
  bVar1 = (*_DAT_0028082c)();
  switch((uintptr_t)(bVar1)) {
  case 0:
    goto switchD_10000259_caseD_0;
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
    goto switchD_10000259_caseD_1;
  case 8:
switchD_10000259_caseD_8:
    uVar2 = 0;
    if (uVar3 == 0) goto switchD_10000259_caseD_0;
    *(undefined1 *)(uVar3 + ((uintptr_t)pf_module_state+0x215U)) = 0;
    uVar7 = uVar3 - 1;
    uVar2 = uVar7;
    if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
       ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x28 || (_DAT_00280824 == (code *)0x0))))))
    goto switchD_10000259_caseD_0;
    iVar5 = 8;
    break;
  case 10:
  case 0xd:
    goto switchD_10000259_caseD_a;
  case 0x1b:
    if (uVar3 == 0) {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
        (*_DAT_00280828)(((uintptr_t)pf_module_state+0x11eU));
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x33 < _DAT_00280808 && (_DAT_00280830 != (code *)0x0)))) {
        (*_DAT_00280830)();
      }
      return 0;
    }
    (*(uint8_t *)((uintptr_t)pf_module_state+0x216U)) = 0;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(((uintptr_t)pf_module_state+0x11eU));
    }
    uVar2 = 0;
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       ((_DAT_00280808 < 0x28 || (uVar2 = 0, _DAT_00280824 == (code *)0x0))))
    goto switchD_10000259_caseD_0;
    iVar5 = 0x5c;
    uVar7 = 0;
    break;
  default:
    if (bVar1 == 0x7f) goto switchD_10000259_caseD_8;
switchD_10000259_caseD_1:
    if ((bVar1 - 0x7f < 0xffffffa1) || (uVar7 = uVar3 + 1, 0x5f < uVar7))
    goto switchD_10000259_caseD_0;
    bVar4 = bVar1 - 0x20;
    if (0x19 < (byte)(bVar1 + 0x9f)) {
      bVar4 = bVar1;
    }
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x216U)))[uVar3] = bVar4;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x217U)))[uVar3] = 0;
    uVar2 = uVar7;
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       ((_DAT_00280808 < 0x28 || (_DAT_00280824 == (code *)0x0)))) goto switchD_10000259_caseD_0;
    iVar5 = (int)(char)bVar4;
  }
LAB_1000073a:
  (*_DAT_00280824)(iVar5);
  uVar2 = uVar7;
  goto switchD_10000259_caseD_0;
switchD_10000259_caseD_a:
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x216U)))[uVar3] = 0;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(((uintptr_t)pf_module_state+0x11eU));
  }
  for (local_28 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x216U)); (bVar1 = *local_28, bVar1 == 0x20 || (bVar1 == 9));
      local_28 = local_28 + 1) {
  }
  local_20 = (code *)0x0;
  local_29 = 0;
  if (bVar1 == 0) {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) != '\x01') goto LAB_100001c0;
    pcVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU));
    goto LAB_10000593;
  }
  iVar5 = recovered_10000b00(&local_28,(uint *)&local_20,&local_29);
  if ((char)iVar5 != '\0') {
    if (local_28 == (byte *)0x0) {
      local_28 = (byte *)0x0;
    }
    else {
      for (; (*local_28 == 0x20 || (*local_28 == 9)); local_28 = local_28 + 1) {
      }
    }
    bVar1 = *local_28;
    if (bVar1 < 0x3a) {
      if (bVar1 == 0) {
        if (local_29 == 1) {
          pcVar6 = local_20;
        }
        else {
          if ((*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) != '\x01') goto LAB_10000760;
          local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU));
          pcVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU));
        }
LAB_10000593:
        end = pcVar6 + 7;
        if ((code *)0xfffffff8 < pcVar6) {
          end = (code *)0xffffffff;
        }
        recovered_10000840((uint)pcVar6,(uint)end);
        goto LAB_100001c0;
      }
      if (bVar1 == 0x2e) {
        local_18[0] = (code *)0x0;
        local_1c = (byte *)((uint)local_1c & 0xffffff00);
        if (local_29 == 1) {
          do {
            do {
              local_28 = local_28 + 1;
            } while (*local_28 == 0x20);
          } while (*local_28 == 9);
          iVar5 = recovered_10000b00(&local_28,(uint *)local_18,(byte *)&local_1c);
          if (((char)iVar5 != '\0') && ((char)local_1c == '\x01')) {
            for (; (*local_28 == 0x20 || (*local_28 == 9)); local_28 = local_28 + 1) {
            }
            if ((*local_28 == 0) && (local_20 <= local_18[0])) {
              recovered_10000840((uint)local_20,(uint)local_18[0]);
              goto LAB_100001c0;
            }
          }
        }
      }
    }
    else if (bVar1 == 0x3a) {
      if (local_29 == 1) {
        local_28 = local_28 + 1;
        for (local_1c = local_28; (bVar1 = *local_1c, bVar1 == 0x20 || (bVar1 == 9));
            local_1c = local_1c + 1) {
        }
        pcVar6 = local_20;
        if (bVar1 != 0) {
          do {
            local_18[0] = (code *)0x0;
            local_21 = 0;
            iVar5 = recovered_10000b00(&local_1c,(uint *)local_18,&local_21);
            if ((((char)iVar5 == '\0') || (local_21 != 1)) || ((code *)0xff < local_18[0]))
            goto LAB_10000760;
            *(uint8_t *)(uintptr_t)pcVar6 = (uint8_t)(uintptr_t)local_18[0];
            for (; (*local_1c == 0x20 || (*local_1c == 9)); local_1c = local_1c + 1) {
            }
            pcVar6 = pcVar6 + 1;
          } while (*local_1c != 0);
          (*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) = '\x01';
          (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU)) = pcVar6;
          goto LAB_100001c0;
        }
      }
    }
    else if (bVar1 == 0x52) {
      if (local_29 == 0) {
        if ((*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) != '\x01') goto LAB_10000760;
        local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU));
      }
      do {
        do {
          local_28 = local_28 + 1;
        } while (*local_28 == 0x20);
      } while (*local_28 == 9);
      if (*local_28 == 0) {
        (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU)) = local_20;
        (*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) = '\x01';
        (*local_20)();
        if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
           ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x2c || (_DAT_00280828 == (code *)0x0))))))
        goto LAB_100001c0;
        uVar8 = ((uintptr_t)pf_module_state+0x11eU);
        goto LAB_100001b7;
      }
    }
  }
LAB_10000760:
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    uVar8 = ((uintptr_t)pf_module_state+0x136U);
    goto LAB_100001b7;
  }
  goto LAB_100001c0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280820
#undef DAT_00280824
#undef DAT_00280828
#undef DAT_0028082c
#undef DAT_00280830
#undef DAT_08001000
#undef DAT_08001001
#undef DAT_08001060
#undef DAT_08001064
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280820
#undef _DAT_00280824
#undef _DAT_00280828
#undef _DAT_0028082c
#undef _DAT_00280830
#undef local_29
#undef local_28
#undef local_21
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_08001060
#define DAT_08001060 (*(uint8_t *)(0x8001060U))
#undef DAT_08001064
#define DAT_08001064 (*(uint8_t *)(0x8001064U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#define local_20 (*(undefined1 *)(pf_stack_frame + 16))
#define local_1f (*(undefined1 *)(pf_stack_frame + 17))
#define local_1e (*(undefined1 *)(pf_stack_frame + 18))
#define local_1d (*(undefined1 *)(pf_stack_frame + 19))
#define local_1c (*(undefined1 *)(pf_stack_frame + 20))
#define local_1b (*(undefined1 *)(pf_stack_frame + 21))
#define local_1a (*(undefined1 *)(pf_stack_frame + 22))
#define local_19 (*(undefined1 *)(pf_stack_frame + 23))
#define local_18 (*(undefined1 *)(pf_stack_frame + 24))
#define local_17 (*(undefined1 *)(pf_stack_frame + 25))
#define local_16 (*(undefined1 *)(pf_stack_frame + 26))
#define local_15 (*(undefined1 *)(pf_stack_frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000840(uint start,uint end)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;

  do {
    local_1d = *(undefined1 *)((start >> 0x1c) + ((uintptr_t)pf_module_state+0x125U));
    local_1c = *(undefined1 *)((start >> 0x18 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_1b = *(undefined1 *)((start >> 0x14 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_1a = *(undefined1 *)((start >> 0x10 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_19 = *(undefined1 *)((start >> 0xc & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_18 = *(undefined1 *)((start >> 8 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_17 = *(undefined1 *)((start >> 4 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_16 = *(undefined1 *)((start & 0xf) + ((uintptr_t)pf_module_state+0x125U));
    local_15 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(&local_1d);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(((uintptr_t)pf_module_state+0x121U));
    }
    uVar2 = 0;
    do {
      pbVar3 = (byte *)(start + uVar2);
      if ((7 < uVar2) || (end < pbVar3)) goto LAB_10000a82;
      bVar1 = *pbVar3;
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x2b < _DAT_00280808)))) &&
         (_DAT_00280828 != (code *)0x0)) {
        (*_DAT_00280828)(((uintptr_t)pf_module_state+0x123U));
      }
      local_20 = *(undefined1 *)((bVar1 >> 4) + ((uintptr_t)pf_module_state+0x125U));
      local_1f = *(undefined1 *)((bVar1 & 0xf) + ((uintptr_t)pf_module_state+0x125U));
      local_1e = 0;
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
        (*_DAT_00280828)(&local_20);
      }
      uVar2 = uVar2 + 1;
    } while ((byte *)(start + uVar2) != (byte *)0x0);
    pbVar3 = (byte *)0x0;
LAB_10000a82:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(((uintptr_t)pf_module_state+0x11eU));
    }
    if ((end <= start) || (start = (uint)pbVar3, end <= pbVar3 + -1)) {
      (*(uint32_t *)((uintptr_t)pf_module_state+0x27aU)) = end + 1;
      (*(uint8_t *)((uintptr_t)pf_module_state+0x276U)) = 1;
      return;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_08001060
#undef DAT_08001064
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef local_20
#undef local_1f
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_15

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b00
 */

int recovered_10000b00(void **cursor,uint *value,byte *digits)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar4;
  uint *puVar2;
  int iVar3;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;

  if (cursor == (void **)0x0) {
LAB_10000d5e:
    iVar3 = 0;
  }
  else {
    if (digits == (byte *)0x0) {
      return 0;
    }
    if (value == (uint *)0x0) {
      return 0;
    }
    pbVar6 = *cursor;
    if (pbVar6 == (byte *)0x0) {
      return 0;
    }
    bVar4 = *pbVar6;
    bVar1 = bVar4 - 0x30U;
    if (bVar1 < 10) {
LAB_10000b79:
      uVar5 = (uint)bVar1;
      bVar4 = pbVar6[1];
      bVar1 = bVar4 - 0x30U;
      if (bVar1 < 10) {
LAB_10000bb6:
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[2];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 2;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[3];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 3;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[4];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 4;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[5];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 5;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[6];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 6;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        uVar5 = (uint)bVar1 | uVar5 << 4;
        bVar4 = pbVar6[7];
        bVar1 = bVar4 - 0x30U;
        if (9 < bVar1) {
          if ((5 < bVar4 - 0x61U) && (5 < bVar4 - 0x41U)) {
            pbVar6 = pbVar6 + 7;
            goto LAB_10000dd8;
          }
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
        }
        bVar4 = pbVar6[8] - 0x30U;
        if (bVar4 < 10) goto LAB_10000d5e;
        uVar7 = CONCAT11(bVar4,pbVar6[8]) & 0xff;
        if (uVar7 - 0x41 < 6) {
          return 0;
        }
        if (uVar7 - 0x61 < 6) {
          return 0;
        }
        pbVar6 = pbVar6 + 8;
        uVar5 = uVar5 << 4 | (uint)bVar1;
      }
      else {
        if ((bVar4 - 0x61U < 6) || (bVar4 - 0x41U < 6)) {
          if ((byte)(bVar4 + 0x9f) < 0x1a) {
            bVar4 = bVar4 - 0x20;
          }
          bVar1 = bVar4 - 0x37;
          goto LAB_10000bb6;
        }
        pbVar6 = pbVar6 + 1;
      }
LAB_10000dd8:
      *digits = 1;
      *value = uVar5;
      *cursor = pbVar6;
      puVar2 = value;
    }
    else {
      puVar2 = (uint *)(uint)bVar4;
      if (((int)puVar2 - 0x61U < 6) || ((int)puVar2 - 0x41U < 6)) {
        if ((byte)(bVar4 + 0x9f) < 0x1a) {
          bVar4 = bVar4 - 0x20;
        }
        bVar1 = bVar4 - 0x37;
        goto LAB_10000b79;
      }
      *digits = 0;
    }
    iVar3 = CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return iVar3;
}

