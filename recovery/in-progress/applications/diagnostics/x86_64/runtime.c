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
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_0028089c
#define UINT_0028089c (*(uint *)(0x28089cU))
#undef UINT_00280908
#define UINT_00280908 (*(uint *)(0x280908U))
#undef UINT_002809e0
#define UINT_002809e0 (*(uint *)(0x2809e0U))
#undef str_10002ed6
#define str_10002ed6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9U)))
#undef str_10002ef4
#define str_10002ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#define local_9350 (*(long *)(pf_stack_frame + 64))
#define local_9030 (*(long *)(pf_stack_frame + 864))
#define local_9028 (*(undefined8 *)(pf_stack_frame + 872))
#define local_9020 (*(int *)(pf_stack_frame + 880))
#define local_901c (*(int *)(pf_stack_frame + 884))
#define local_368 (*(void * *)(pf_stack_frame + 36904))
#define local_360 (*(undefined1 (*)[864])(pf_stack_frame + 36912))
#define local_34c (*(uint *)(pf_stack_frame + 36932))
#define local_320 (*(byte *)(pf_stack_frame + 36976))
#define local_e4 (*(int (*)[57])(pf_stack_frame + 37548))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 37616))
#define local_9c (*(undefined4 *)(pf_stack_frame + 37620))
#define local_98 (*(undefined4 *)(pf_stack_frame + 37624))
#define local_68 (*(undefined8 *)(pf_stack_frame + 37672))
#define local_4c (*(byte (*)[76])(pf_stack_frame + 37700))
#define local_44 (*(byte *)(pf_stack_frame + 37708))
#define local_3c (*(int *)(pf_stack_frame + 37716))
#define local_38 (*(int *)(pf_stack_frame + 37720))
#define local_34 (*(int *)(pf_stack_frame + 37724))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 37680))
#define local_9380 (*(undefined1 (*)[37760])(pf_stack_frame + 16))
#define local_937c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e0
 */

int recovered_100005e0(int argc,char **argv)

{
  unsigned char pf_stack_frame[37808] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  uint128 auVar5;

  thunk_memset(local_9380,0,0x9020);
  thunk_pf_app_window_spec(local_360,str_10002ef4,1000,0x2b2);
  local_34c = thunk_terror_ui_colour(0);
  local_320 = local_320 | 1;
  uVar2 = thunk_terror_ui_window_open(local_9380,local_360);
  if (uVar2 != 0) {
    local_9030 = local_9350;
    local_9028 = local_937c;
    if (local_9350 != 0) {
      recovered_10000ad0((long)local_9380);
      recovered_10000df0((long)local_9380);
      local_68 = local_9028;
      uStack_60 = 0;
      terror_ui_window_begin_frame(local_9380);
      thunk_memset(local_360,0,0x278);
      uVar2 = thunk_terror_ui_window_query(local_9380,local_360);
      if (uVar2 != 0) {
        do {
          uVar1 = thunk_terror_ui_window_info_requests_close(local_360);
          if ((uVar1 != '\0') || (uVar2 = thunk_terror_ui_window_sync_buffer(local_9380,local_360), uVar2 == 0))
          break;
          local_9030 = local_9350;
          local_9028 = local_937c;
          thunk_memset(local_4c,0,0x1c);
          uVar2 = thunk_terror_ui_window_pointer_state(local_9380,local_4c);
          if ((uVar2 != 0) &&
             ((((local_4c[0] & 2) != 0 && ((local_44 & 1) != 0)) && (local_3c != local_901c)))) {
            local_901c = local_3c;
            uVar2 = local_34 - 0x3f;
            if (local_38 - 0x12U < 0x5e && uVar2 < 0x1e) {
              thunk_memset(&local_a0,0,0x38);
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
              uVar3 = 1;
              if (uVar2 >= 30) goto LAB_100008f0;
if ((uint)(local_38 - 122) < 94) uVar3 = 1;
else if ((uint)(local_38 - 226) < 94) uVar3 = 2;
else if ((uint)(local_38 - 330) < 94) uVar3 = 3;
else if ((uint)(local_38 - 434) < 94) uVar3 = 4;
else goto LAB_100008f0;
              thunk_memset(&local_a0,0,0x38);
              local_98 = uVar3;
            }
            local_a0 = 0x38;
            iVar6 = Ram0000000000280800;
            local_9c = uVar4;
            if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
               ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
                (uVar2 = Ram0000000000280808, 0x1e3 < uVar2)))) {
              uVar2 = UINT_002809e0;
              if ((code *)(ulong)uVar2 != (code *)0x0) {
                (*(code *)(ulong)uVar2)(0,&local_a0);
              }
            }
            recovered_10000ad0((long)local_9380);
            recovered_10000df0((long)local_9380);
          }
LAB_100008f0:
          thunk_memset(local_e4,0,0x44);
          iVar6 = Ram0000000000280800;
          if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
              (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000280808, 0x10b < uVar2)) {
            uVar2 = UINT_00280908;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)(local_e4);
            }
          }
          if ((local_9020 == 0) || (8 < (uint)(local_e4[0] - local_9020))) {
LAB_10000988:
            local_9020 = local_e4[0];
            recovered_10000ad0((long)local_9380);
            recovered_10000df0((long)local_9380);
          }
          else {
            PF_PART4(auVar5, 0) = -(uint)((int)local_9028 == (int)local_68);
            iVar6 = -(uint)((int)((ulong)local_9028 >> 0x20) == PF_PART4(local_68, 4));
            PF_PART4(auVar5, 4) = PF_PART4(auVar5, 0);
            PF_PART4(auVar5, 8) = iVar6;
            PF_PART4(auVar5, 12) = iVar6;
            uVar2 = movmskpd(local_9020,auVar5);
            if (((uVar2 & 1) == 0) || ((byte)((byte)uVar2 >> 1) == 0)) goto LAB_10000988;
          }
          iVar6 = Ram0000000000280800;
          if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
             ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
              (uVar2 = Ram0000000000280808, 0x9f < uVar2)))) {
            uVar2 = UINT_0028089c;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)();
            }
          }
          local_68 = local_9028;
          uStack_60 = 0;
          terror_ui_window_begin_frame(local_9380);
          thunk_memset(local_360,0,0x278);
          uVar2 = thunk_terror_ui_window_query(local_9380,local_360);
        } while (uVar2 != 0);
      }
      thunk_terror_ui_window_close(local_9380);
      if (local_368 == (void *)0x0) {
        return 0;
      }
      iVar6 = Ram0000000000280800;
      if (iVar6 != 0x50414d57) {
        return 0;
      }
      iVar6 = Ram0000000000280804;
      if (iVar6 == 0) {
        return 0;
      }
      uVar2 = Ram0000000000280808;
      if (uVar2 < 0xc) {
        return 0;
      }
      uVar2 = Ram0000000000280808;
      if (uVar2 < 0x54) {
        return 0;
      }
      uVar2 = UINT_00280850;
      if ((code *)(ulong)uVar2 == (code *)0x0) {
        return 0;
      }
      (*(code *)(ulong)uVar2)(local_368);
      return 0;
    }
    thunk_terror_ui_window_close(local_9380);
  }
  iVar6 = Ram0000000000280800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x2b < uVar2)) {
    uVar2 = UINT_00280828;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10002ed6);
    }
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280828
#undef UINT_00280850
#undef UINT_0028089c
#undef UINT_00280908
#undef UINT_002809e0
#undef str_10002ed6
#undef str_10002ef4
#undef local_9350
#undef local_9030
#undef local_9028
#undef local_9020
#undef local_901c
#undef local_368
#undef local_360
#undef local_34c
#undef local_320
#undef local_e4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_68
#undef local_4c
#undef local_44
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_60
#undef local_9380
#undef local_937c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_0028098c
#define UINT_0028098c (*(uint *)(0x28098cU))
#undef UINT_002809d8
#define UINT_002809d8 (*(uint *)(0x2809d8U))
#undef UINT_002809dc
#define UINT_002809dc (*(uint *)(0x2809dcU))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad0
 */

void recovered_10000ad0(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *dst;
  ulong size;
  uint uVar3;
  uint uVar4;

  iVar1 = Ram0000000000280800;
  uVar2 = 0;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x1db < uVar3)) {
    uVar3 = UINT_002809d8;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar3)();
    }
  }
  local_38 = 0;
  uVar3 = 0x48;
  if (uVar2 < 0x48) {
    uVar3 = uVar2;
  }
  uVar4 = 0;
  thunk_memset((void *)(param_1 + 0x378),0,36000);
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = Ram0000000000280800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x1df < uVar2))
         )) {
        uVar2 = UINT_002809dc;
        if (((code *)(ulong)uVar2 != (code *)0x0) &&
           (uVar2 = (*(code *)(ulong)uVar2)
                              (uVar4,(void *)((ulong)*(uint *)(param_1 + 0x368) * 500 +
                                             param_1 + 0x378)), uVar2 != 0)) {
          *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 399 < uVar2)) {
    uVar2 = UINT_0028098c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar3 = 0;
      (*(code *)(ulong)uVar2)((void *)0x0,0,(uint *)&local_38);
      uVar2 = (uint)local_38;
      *(uint *)(param_1 + 0x370) = (uint)local_38;
      if ((local_38 & 0xffffffff) == 0) goto LAB_10000d4a;
      if (*(uint *)(param_1 + 0x374) < (uint)local_38) {
        iVar1 = Ram0000000000280800;
        if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
           ((uVar4 = Ram0000000000280808, uVar4 < 0xc || (uVar4 = Ram0000000000280808, uVar4 < 0x50)
            ))) goto LAB_10000d4a;
        uVar4 = UINT_0028084c;
        if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10000d4a;
        size = (local_38 & 0xffffffff) * 0x571;
        dst = (*(code *)(ulong)uVar4)(size);
        if (dst == (void *)0x0) goto LAB_10000d4a;
        thunk_memset(dst,0,size);
        if (((*(void **)(param_1 + 0x9018) != (void *)0x0) &&
            (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
           ((iVar1 = Ram0000000000280804, iVar1 != 0 &&
            ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
             (uVar3 = Ram0000000000280808, 0x53 < uVar3)))))) {
          uVar3 = UINT_00280850;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x9018));
          }
        }
        *(void **)(param_1 + 0x9018) = dst;
        *(uint *)(param_1 + 0x374) = uVar2;
      }
      else {
        dst = *(void **)(param_1 + 0x9018);
        size = (ulong)*(uint *)(param_1 + 0x374) * 0x571;
      }
      uVar3 = 0;
      thunk_memset(dst,0,size);
      iVar1 = Ram0000000000280800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 399 < uVar2))
      {
        uVar2 = UINT_0028098c;
        if (((code *)(ulong)uVar2 != (code *)0x0) &&
           (uVar2 = (*(code *)(ulong)uVar2)
                              (*(void **)(param_1 + 0x9018),*(uint *)(param_1 + 0x374),
                               (uint *)((long)&local_38 + 4)), uVar2 != 0)) {
          *(uint *)(param_1 + 0x370) = PF_PART4(local_38, 4);
          uVar3 = *(uint *)(param_1 + 0x374);
          if (PF_PART4(local_38, 4) < *(uint *)(param_1 + 0x374)) {
            uVar3 = PF_PART4(local_38, 4);
          }
        }
      }
      goto LAB_10000d4a;
    }
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  uVar3 = 0;
LAB_10000d4a:
  *(uint *)(param_1 + 0x36c) = uVar3;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_0028098c
#undef UINT_002809d8
#undef UINT_002809dc
#undef local_38

#undef DAT_10002f62
#define DAT_10002f62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175U)))
#undef DAT_10002f7d
#define DAT_10002f7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190U)))
#undef DAT_10002f87
#define DAT_10002f87 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef DAT_10002fd5
#define DAT_10002fd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_10003051
#define DAT_10003051 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_10003087
#define DAT_10003087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_100032c4
#define DAT_100032c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d7U)))
#undef DAT_10003616
#define DAT_10003616 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x829U)))
#undef DAT_1000361c
#define DAT_1000361c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82fU)))
#undef DAT_10003678
#define DAT_10003678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88bU)))
#undef PTR_DAT_10004010
#define PTR_DAT_10004010 (*(void * *)(((uintptr_t)pf_module_state + 0x1223U)))
#undef str_10002ef4
#define str_10002ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_10002f00
#define str_10002f00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#undef str_10002f34
#define str_10002f34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x147U)))
#undef str_10002f3c
#define str_10002f3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14fU)))
#undef str_10002f46
#define str_10002f46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_10002f52
#define str_10002f52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x165U)))
#undef str_10002f5a
#define str_10002f5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16dU)))
#undef str_10002f65
#define str_10002f65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x178U)))
#undef str_10002f6d
#define str_10002f6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_10002f80
#define str_10002f80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#undef str_10002f8c
#define str_10002f8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19fU)))
#undef str_10002fb8
#define str_10002fb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_1000301c
#define str_1000301c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_10003024
#define str_10003024 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_1000302d
#define str_1000302d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_10003033
#define str_10003033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x246U)))
#undef str_1000303a
#define str_1000303a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_10003056
#define str_10003056 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x269U)))
#undef str_10003088
#define str_10003088 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1000312a
#define str_1000312a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_10003236
#define str_10003236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x449U)))
#undef str_10003245
#define str_10003245 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x458U)))
#undef str_10003260
#define str_10003260 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x473U)))
#undef str_10003271
#define str_10003271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x484U)))
#undef str_10003288
#define str_10003288 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
#undef str_10003290
#define str_10003290 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a3U)))
#undef str_1000329a
#define str_1000329a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4adU)))
#undef str_100032a7
#define str_100032a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_100032bd
#define str_100032bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d0U)))
#undef str_100032c9
#define str_100032c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dcU)))
#undef str_100032f7
#define str_100032f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_10003312
#define str_10003312 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_10003328
#define str_10003328 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53bU)))
#undef str_10003334
#define str_10003334 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x547U)))
#undef str_1000336c
#define str_1000336c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57fU)))
#undef str_100033a5
#define str_100033a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b8U)))
#undef str_100033e4
#define str_100033e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f7U)))
#undef str_100033f9
#define str_100033f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60cU)))
#undef str_1000343c
#define str_1000343c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64fU)))
#undef str_10003474
#define str_10003474 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_100034b1
#define str_100034b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c4U)))
#undef str_100034e3
#define str_100034e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f6U)))
#undef str_10003524
#define str_10003524 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x737U)))
#undef str_10003556
#define str_10003556 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x769U)))
#undef str_1000357d
#define str_1000357d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x790U)))
#undef str_100035ab
#define str_100035ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7beU)))
#undef str_100035d4
#define str_100035d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e7U)))
#undef str_100035dd
#define str_100035dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f0U)))
#undef str_100035e5
#define str_100035e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f8U)))
#undef str_1000360f
#define str_1000360f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x822U)))
#define local_3d8 (*(char (*)[984])(pf_stack_frame + 24))
#define local_2d8 (*(char (*)[728])(pf_stack_frame + 280))
#define local_1d8 (*(char (*)[472])(pf_stack_frame + 536))
#define local_d8 (*(char (*)[216])(pf_stack_frame + 792))
#define local_a8 (*(char (*)[168])(pf_stack_frame + 840))
#define local_88 (*(char (*)[136])(pf_stack_frame + 872))
#define local_70 (*(ulong *)(pf_stack_frame + 896))
#define local_68 (*(long *)(pf_stack_frame + 904))
#define local_60 (*(char * *)(pf_stack_frame + 912))
#define local_58 (*(long *)(pf_stack_frame + 920))
#define local_50 (*(undefined8 *)(pf_stack_frame + 928))
#define local_48 (*(ulong *)(pf_stack_frame + 936))
#define local_3c (*(undefined4 *)(pf_stack_frame + 948))
#define local_38 (*(undefined8 *)(pf_stack_frame + 952))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000df0
 */

void recovered_10000df0(long param_1)

{
  unsigned char pf_stack_frame[1040] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  long lVar10;
  undefined *puVar11;
  ulonglong arg3;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte bVar26;
  char cVar27;
  ulong uVar28;
  char *pcVar29;
  bool bVar30;
  void *pvVar31;

  uVar7 = (ulong)*(uint *)(param_1 + 0x368);
  if (uVar7 != 0) {
    lVar10 = param_1 + 0x378;
    lVar17 = 0;
    do {
      if (*(int *)(lVar10 + 0xc) == 0x16) {
        if (lVar17 != 0) {
          uVar21 = *(uint *)(lVar10 + 0x10);
          uVar6 = *(uint *)(lVar17 + 0x10);
          if ((uVar21 >> 0xd & 8 | uVar21 >> 2 & 4 | uVar21 >> 1 & 2 | uVar21 & 1) +
              (uVar21 & 2) * 8 <=
              (uVar6 >> 0xd & 8 | uVar6 >> 2 & 4 | uVar6 >> 1 & 2 | uVar6 & 1) + (uVar6 & 2) * 8)
          goto LAB_10000e33;
        }
        lVar17 = lVar10;
      }
LAB_10000e33:
      lVar10 = lVar10 + 500;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (lVar17 != 0) {
      local_48 = (ulong)((*(byte *)(lVar17 + 0x11) & 0x20) >> 5);
      local_38 = (ulong)*(uint *)(lVar17 + 0x1c);
      local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
      goto LAB_10000eee;
    }
  }
  local_38 = 1;
  local_50 = CONCAT44(PF_PART4(local_50, 4),1);
  local_48 = 0;
  lVar17 = 0;
LAB_10000eee:
  uVar21 = *(uint *)(param_1 + 0x358);
  uVar6 = *(uint *)(param_1 + 0x35c);
  uVar4 = thunk_terror_ui_colour(0);
  uVar16 = *(uint *)(param_1 + 0x358);
  uVar22 = *(uint *)(param_1 + 0x35c);
  uVar14 = (int)uVar22 >> 0x1f & uVar22;
  uVar5 = uVar16;
  if ((int)uVar21 < (int)uVar16) {
    uVar5 = uVar21;
  }
  if ((int)uVar21 < 0) {
    uVar5 = 0;
  }
  if ((int)uVar6 < (int)uVar22) {
    uVar22 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar22 = 0;
  }
  if ((int)uVar14 < (int)uVar22) {
    uVar16 = (int)uVar16 >> 0x1f & uVar16;
    do {
      if ((int)uVar16 < (int)uVar5) {
        uVar21 = uVar16;
        do {
          if (((-1 < (int)(uVar21 | uVar14) && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar21 < (int)*(uint *)(param_1 + 0x358))) &&
             ((int)uVar14 < *(int *)(param_1 + 0x35c))) {
            lVar10 = (ulong)uVar21 + (ulong)*(uint *)(param_1 + 0x358) * (ulong)uVar14;
            *(char *)(*(long *)(param_1 + 0x350) + lVar10 * 4) = (char)(uVar4 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar10 * 4) = (char)(uVar4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar10 * 4) = (char)uVar4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar10 * 4) = 0xff;
          }
          uVar21 = uVar21 + 1;
        } while (uVar5 != uVar21);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar22);
    uVar16 = *(uint *)(param_1 + 0x358);
  }
  uVar5 = thunk_terror_ui_colour(0x2d);
  uVar21 = *(uint *)(param_1 + 0x358);
  uVar6 = *(uint *)(param_1 + 0x35c);
  uVar22 = uVar21;
  if ((int)uVar16 < (int)uVar21) {
    uVar22 = uVar16;
  }
  if ((int)uVar16 < 0) {
    uVar22 = 0;
  }
  if (0 < (int)uVar6) {
    uVar21 = (int)uVar21 >> 0x1f & uVar21;
    uVar7 = 0x6c;
    if (uVar6 < 0x6c) {
      uVar7 = (ulong)uVar6;
    }
    uVar19 = 0;
    do {
      uVar6 = uVar21;
      if ((int)uVar21 < (int)uVar22) {
        do {
          if (((-1 < (int)uVar6 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar6 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar19 < (long)*(int *)(param_1 + 0x35c))) {
            lVar10 = (ulong)uVar6 + *(uint *)(param_1 + 0x358) * uVar19;
            *(char *)(*(long *)(param_1 + 0x350) + lVar10 * 4) = (char)(uVar5 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar10 * 4) = (char)(uVar5 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar10 * 4) = (char)uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar10 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar22 != uVar6);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar7);
  }
  iVar1 = (int)local_38;
  if (iVar1 - 1U < 4) {
    puVar11 = &DAT_10003678 + *(int *)(&DAT_10003678 + (ulong)(iVar1 - 1U) * 4);
  }
  else {
    puVar11 = &DAT_10002fd5;
  }
  pcVar18 = str_10002f3c;
  if ((char)local_48 != '\0') {
    pcVar18 = str_10002f34;
  }
  thunk_snprintf(local_3d8,0x100,str_10002f00,puVar11,pcVar18,*(uint *)(param_1 + 0x368),
                     *(uint *)(param_1 + 0x370));
  uVar21 = thunk_terror_ui_colour(1);
  recovered_10002660(param_1,0x12,0xd,(long)local_3d8,
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,
                     *(int *)(param_1 + 0x358) - 0x24);
  if ((char)local_50 == '\0') {
    if ((*(byte *)(lVar17 + 0x11) & 0x40) == 0) {
      thunk_snprintf(local_a8,0x20,str_10002f52);
    }
    else {
      uVar21 = *(uint *)(lVar17 + 0x20);
      uVar6 = -uVar21;
      if ((int)-uVar21 < 0) {
        uVar6 = uVar21;
      }
      thunk_snprintf(local_a8,0x20,str_10002f46,(long)((int)uVar21 / 1000),
                         (ulong)((uVar6 % 1000) / 100));
    }
    uVar21 = *(uint *)(lVar17 + 0x10);
    if ((uVar21 & 0x100) == 0) {
      if ((uVar21 & 0x200) == 0) {
        pcVar18 = str_10002f52;
      }
      else {
        pcVar18 = str_10002f6d;
      }
      thunk_snprintf(local_d8,0x30,pcVar18);
    }
    else {
      pcVar18 = &DAT_10002f62;
      if ((uVar21 & 0x200) == 0) {
        pcVar18 = str_10002f65;
      }
      thunk_snprintf(local_d8,0x30,str_10002f5a,*(uint *)(lVar17 + 0x24),pcVar18);
    }
    if ((short)*(uint *)(lVar17 + 0x10) < 0) {
      pcVar18 = str_10002f80;
      if ((*(uint *)(lVar17 + 0x10) & 0x800) == 0) {
        pcVar18 = &DAT_10002f87;
      }
      thunk_snprintf(local_88,0x18,&DAT_10002f7d,pcVar18);
    }
    else {
      thunk_snprintf(local_88,0x18,str_10002f52);
    }
    thunk_snprintf(local_1d8,0x100,str_10002f8c,local_a8,local_d8,local_88,
                       (void *)(lVar17 + 0xd4));
  }
  else {
    thunk_snprintf(local_1d8,0x100,str_10002fb8);
  }
  uVar21 = thunk_terror_ui_colour(0x31);
  recovered_10002660(param_1,0x12,0x23,(long)local_1d8,
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,
                     *(int *)(param_1 + 0x358) - 0x24);
  bVar26 = (byte)local_48;
  recovered_100028f0(param_1,0,((uintptr_t)pf_module_state + 0x1e8U),(uint)local_48 & 0xff);
  bVar26 = bVar26 ^ 1;
  recovered_100028f0(param_1,1,((uintptr_t)pf_module_state + 0x1edU),(uint)(iVar1 == 1 & bVar26));
  recovered_100028f0(param_1,2,((uintptr_t)pf_module_state + 0x1f2U),(uint)(iVar1 == 2 & bVar26));
  recovered_100028f0(param_1,3,((uintptr_t)pf_module_state + 0x1f9U),(uint)(iVar1 == 3 & bVar26));
  recovered_100028f0(param_1,4,((uintptr_t)pf_module_state + 0x1fdU),(uint)(iVar1 == 4));
  iVar1 = *(int *)(param_1 + 0x358);
  uVar16 = thunk_terror_ui_colour(0x2a);
  uVar21 = *(uint *)(param_1 + 0x358);
  uVar6 = *(uint *)(param_1 + 0x35c);
  uVar22 = 0xc;
  if ((int)uVar21 < 0xc) {
    uVar22 = uVar21;
  }
  uVar5 = iVar1 - 0xc;
  if ((int)uVar5 < (int)uVar21) {
    uVar21 = uVar5;
  }
  if (iVar1 < 0xc) {
    uVar21 = 0;
  }
  if (0x71 < (int)uVar6) {
    uVar7 = 0x89;
    if (uVar6 < 0x89) {
      uVar7 = (ulong)uVar6;
    }
    uVar19 = 0x71;
    do {
      uVar6 = uVar22;
      if ((int)uVar22 < (int)uVar21) {
        do {
          if (((-1 < (int)uVar6 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar6 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar19 < (long)*(int *)(param_1 + 0x35c))) {
            lVar10 = (ulong)uVar6 + *(uint *)(param_1 + 0x358) * uVar19;
            *(char *)(*(long *)(param_1 + 0x350) + lVar10 * 4) = (char)(uVar16 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar10 * 4) = (char)(uVar16 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar10 * 4) = (char)uVar16;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar10 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar21 != uVar6);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar7);
  }
  uVar21 = thunk_terror_ui_colour(0x19);
  recovered_10002660(param_1,0x14,0x77,((uintptr_t)pf_module_state + 0x203U),
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,0xb8);
  uVar21 = thunk_terror_ui_colour(0x19);
  recovered_10002660(param_1,0xdc,0x77,((uintptr_t)pf_module_state + 0x20bU),
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,0x70);
  uVar21 = thunk_terror_ui_colour(0x19);
  recovered_10002660(param_1,0x152,0x77,((uintptr_t)pf_module_state + 0x212U),
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,0xda);
  uVar21 = thunk_terror_ui_colour(0x19);
  recovered_10002660(param_1,0x236,0x77,((uintptr_t)pf_module_state + 0x223U),
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,
                     *(int *)(param_1 + 0x358) - 0x244);
  local_68 = param_1 + 0x378;
  local_70 = 0x89;
  uVar7 = 1;
LAB_100016c2:
  uVar19 = (ulong)*(uint *)(param_1 + 0x368);
  if (uVar19 == 0) {
LAB_100017c0:
    uVar19 = (ulong)*(uint *)(param_1 + 0x36c);
    if (uVar19 != 0) {
      pbVar2 = (&PTR_DAT_10004010)[uVar7];
      local_50 = *(ulong *)(param_1 + 0x9018);
      lVar10 = local_50 + 0xf1;
      lVar17 = local_50 + 0x111;
      local_60 = (char *)(local_50 + 0x171);
      uVar8 = CONCAT71((int7)((ulong)local_60 >> 8),1);
      uVar20 = 0;
      uVar15 = local_50;
LAB_10001841:
      local_38 = CONCAT44(PF_PART4(local_38, 4),(int)uVar8);
      if (*(char *)(local_50 + 0xf1 + uVar20 * 0x571) != '\0') {
        pcVar18 = (char *)(uVar20 * 0x571 + local_50);
        lVar24 = 0;
        lVar25 = lVar10;
        do {
          bVar26 = 0x6e;
          lVar23 = 0;
          while (bVar12 = *(byte *)(lVar25 + lVar23), bVar12 != 0) {
            bVar3 = bVar12 | 0x20;
            if (0x19 < (byte)(bVar12 + 0xbf)) {
              bVar3 = bVar12;
            }
            bVar12 = bVar26 | 0x20;
            if (0x19 < (byte)(bVar26 + 0xbf)) {
              bVar12 = bVar26;
            }
            if (bVar3 != bVar12) break;
            bVar26 = str_10003088[lVar23 + 1];
            lVar23 = lVar23 + 1;
            if (lVar23 == 0xd) {
              bVar26 = *pbVar2;
              uVar8 = 0;
              if (bVar26 == 0) goto LAB_10001810;
              if (*pcVar18 == '\0') goto LAB_1000196c;
              lVar24 = 0;
              uVar28 = uVar15;
              goto LAB_10001910;
            }
          }
          uVar8 = 0;
          lVar25 = lVar25 + 1;
          lVar23 = lVar24 + 0xf2;
          lVar24 = lVar24 + 1;
        } while (pcVar18[lVar23] != '\0');
      }
      goto LAB_10001810;
    }
    local_58 = 0;
    local_3c = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x36c) >> 8),1);
  }
  else {
    local_58 = 0;
    lVar10 = local_68;
    uVar15 = uVar19;
    do {
      if (uVar7 == *(uint *)(lVar10 + 0xc)) {
        if (local_58 != 0) {
          uVar21 = *(uint *)(lVar10 + 0x10);
          uVar6 = *(uint *)(local_58 + 0x10);
          if ((uVar21 >> 0xd & 8 | uVar21 >> 2 & 4 | uVar21 >> 1 & 2 | uVar21 & 1) +
              (uVar21 & 2) * 8 <=
              (uVar6 >> 0xd & 8 | uVar6 >> 2 & 4 | uVar6 >> 1 & 2 | uVar6 & 1) + (uVar6 & 2) * 8)
          goto LAB_100016f3;
        }
        local_58 = lVar10;
      }
LAB_100016f3:
      lVar10 = lVar10 + 500;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (uVar7 == 0x14 && local_58 == 0) {
      local_58 = 0;
      lVar10 = local_68;
      do {
        if (*(int *)(lVar10 + 0xc) == 4) {
          if (local_58 != 0) {
            uVar21 = *(uint *)(lVar10 + 0x10);
            uVar6 = *(uint *)(local_58 + 0x10);
            if ((uVar21 >> 0xd & 8 | uVar21 >> 2 & 4 | uVar21 >> 1 & 2 | uVar21 & 1) +
                (uVar21 & 2) * 8 <=
                (uVar6 >> 0xd & 8 | uVar6 >> 2 & 4 | uVar6 >> 1 & 2 | uVar6 & 1) + (uVar6 & 2) * 8)
            goto LAB_10001ab3;
          }
          local_58 = lVar10;
        }
LAB_10001ab3:
        lVar10 = lVar10 + 500;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_58 == 0) goto LAB_100017c0;
    local_3c = 0;
  }
  local_38 = local_38 & 0xffffffff00000000;
  goto LAB_10001b54;
LAB_10001910:
  do {
    lVar25 = 0;
    bVar12 = bVar26;
    while (bVar3 = *(byte *)(uVar28 + lVar25), bVar3 != 0) {
      bVar13 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar13 = bVar3;
      }
      bVar3 = bVar12 | 0x20;
      if (0x19 < (byte)(bVar12 + 0xbf)) {
        bVar3 = bVar12;
      }
      if (bVar13 != bVar3) break;
      bVar12 = pbVar2[lVar25 + 1];
      lVar25 = lVar25 + 1;
      if (bVar12 == 0) goto LAB_10001a80;
    }
    uVar28 = uVar28 + 1;
    lVar25 = lVar24 + 1;
    lVar24 = lVar24 + 1;
  } while (pcVar18[lVar25] != '\0');
LAB_1000196c:
  if (pcVar18[0x111] != '\0') {
    lVar24 = 0;
    lVar25 = lVar17;
    do {
      lVar23 = 0;
      bVar12 = bVar26;
      while (bVar3 = *(byte *)(lVar25 + lVar23), bVar3 != 0) {
        bVar13 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar13 = bVar3;
        }
        bVar3 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar3 = bVar12;
        }
        if (bVar13 != bVar3) break;
        bVar12 = pbVar2[lVar23 + 1];
        lVar23 = lVar23 + 1;
        if (bVar12 == 0) goto LAB_10001a80;
      }
      lVar25 = lVar25 + 1;
      lVar23 = lVar24 + 0x112;
      lVar24 = lVar24 + 1;
    } while (pcVar18[lVar23] != '\0');
  }
  uVar8 = 0;
  if (pcVar18[0x171] != '\0') {
    lVar24 = 0;
    pcVar29 = local_60;
    do {
      lVar25 = 0;
      bVar12 = bVar26;
      while (bVar3 = pcVar29[lVar25], bVar3 != 0) {
        bVar13 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar13 = bVar3;
        }
        bVar3 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar3 = bVar12;
        }
        if (bVar13 != bVar3) break;
        bVar12 = pbVar2[lVar25 + 1];
        lVar25 = lVar25 + 1;
        if (bVar12 == 0) goto LAB_10001a80;
      }
      uVar8 = 0;
      pcVar29 = pcVar29 + 1;
      lVar25 = lVar24 + 0x172;
      lVar24 = lVar24 + 1;
    } while (pcVar18[lVar25] != '\0');
  }
LAB_10001810:
  uVar20 = uVar20 + 1;
  lVar10 = lVar10 + 0x571;
  uVar15 = uVar15 + 0x571;
  lVar17 = lVar17 + 0x571;
  local_60 = local_60 + 0x571;
  uVar9 = (undefined7)((ulong)uVar8 >> 8);
  uVar8 = CONCAT71(uVar9,uVar20 < uVar19);
  if (uVar20 == uVar19) goto LAB_10002397;
  goto LAB_10001841;
LAB_10001a80:
  local_3c = 1;
  goto LAB_10001a8d;
LAB_10002397:
  local_3c = (undefined4)CONCAT71(uVar9,1);
  local_38 = (ulong)PF_PART4(local_38, 4) << 0x20;
LAB_10001a8d:
  local_58 = 0;
LAB_10001b54:
  uVar15 = uVar7 * 0x18;
  local_48 = uVar7;
  uVar6 = thunk_terror_ui_colour(0x12);
  uVar19 = uVar15 + 0x89;
  uVar21 = *(uint *)(param_1 + 0x35c);
  local_50 = uVar15;
  if ((long)(int)uVar21 < (long)uVar19) goto LAB_100025b1;
  if ((char)local_3c == '\0') {
    uVar21 = 0x25;
    local_60 = str_10003024;
    if ((*(uint *)(local_58 + 0x10) & 2) != 0) {
      bVar30 = (*(uint *)(local_58 + 0x10) & 8) == 0;
      uVar21 = 0x25;
      if (bVar30) {
        uVar21 = 0x11;
      }
      local_60 = str_10003024;
      if (bVar30) {
        local_60 = str_1000302d;
      }
    }
LAB_10001c03:
    uVar21 = thunk_terror_ui_colour(uVar21);
    uVar21 = (uVar21 & 0xff0000) >> 0x10 | uVar21 & 0xff00 | uVar21 << 0x10;
  }
  else {
    uVar21 = 0x11;
    local_60 = str_10003033;
    if ((local_38 & 1) != 0) goto LAB_10001c03;
    uVar21 = (uVar6 & 0xff0000) >> 0x10 | uVar6 & 0xff00 | uVar6 << 0x10;
    local_60 = str_1000301c;
  }
  iVar1 = *(int *)(param_1 + 0x358);
  uVar6 = 0x1f;
  if ((local_48 & 1) == 0) {
    uVar6 = 0x2c;
  }
  uVar16 = thunk_terror_ui_colour(uVar6);
  uVar6 = *(uint *)(param_1 + 0x358);
  uVar22 = 0xc;
  if ((int)uVar6 < 0xc) {
    uVar22 = uVar6;
  }
  uVar4 = *(uint *)(param_1 + 0x35c);
  uVar5 = iVar1 - 0xc;
  if ((int)uVar5 < (int)uVar6) {
    uVar6 = uVar5;
  }
  if (iVar1 < 0xc) {
    uVar6 = 0;
  }
  if ((long)(uVar7 * 0x18 + 0x71) < (long)(int)uVar4) {
    uVar7 = (ulong)uVar4;
    if ((int)uVar19 < (int)uVar4) {
      uVar7 = uVar19 & 0xffffffff;
    }
    uVar19 = local_70;
    do {
      uVar5 = uVar22;
      if ((int)uVar22 < (int)uVar6) {
        do {
          if (((-1 < (int)uVar5 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar5 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar19 < (long)*(int *)(param_1 + 0x35c))) {
            lVar10 = (ulong)uVar5 + *(uint *)(param_1 + 0x358) * uVar19;
            *(char *)(*(long *)(param_1 + 0x350) + lVar10 * 4) = (char)(uVar16 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar10 * 4) = (char)(uVar16 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar10 * 4) = (char)uVar16;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar10 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar7);
  }
  iVar1 = *(int *)(&DAT_1000361c + local_48 * 4);
  uVar6 = thunk_terror_ui_colour(0x19);
  uVar22 = (int)local_50 + 0x77;
  recovered_10002660(param_1,0x14,uVar22,(long)(&DAT_1000361c + iVar1),
                     (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xbe);
  recovered_10002660(param_1,0xdc,uVar22,(long)local_60,uVar21,0x70);
  lVar10 = local_58;
  pcVar18 = &DAT_10003051;
  if ((local_38 & 1) != 0) {
    pcVar18 = str_1000303a;
  }
  cVar27 = (char)local_3c;
  if (cVar27 == '\0') {
    pcVar18 = (char *)(local_58 + 0x54);
  }
  uVar21 = thunk_terror_ui_colour(1);
  pvVar31 = (void *)0x10001e14;
  local_50 = (ulong)uVar22;
  recovered_10002660(param_1,0x152,uVar22,(long)pcVar18,
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,0xda);
  uVar19 = local_38;
  uVar7 = local_48;
  if (cVar27 != '\0') {
    thunk_snprintf(local_2d8,0x100,str_10003236);
    uVar7 = local_48;
    uVar19 = local_38;
    goto joined_r0x10001e42;
  }
  switch((uintptr_t)(*(undefined4 *)(lVar10 + 0xc))) {
  case 1:
    if (*(uint *)(lVar10 + 0x44) == 0 && *(uint *)(lVar10 + 0x48) == 0) {
      uVar6 = 0;
      if (*(uint *)(lVar10 + 0x4c) == 0) {
        pcVar18 = str_100032f7;
        goto LAB_10002583;
      }
    }
    else {
      uVar6 = *(uint *)(lVar10 + 0x48) / 1000;
    }
    uVar21 = *(uint *)(lVar10 + 0x44) / 1000;
    uVar22 = *(uint *)(lVar10 + 0x4c) / 1000;
    pcVar18 = (char *)(lVar10 + 0xd4);
    pcVar29 = str_10003312;
    goto override_prt_10002552_3856091c;
  case 2:
    uVar21 = *(uint *)(lVar10 + 0x38);
    if (uVar21 == 0) {
      uVar21 = *(uint *)(lVar10 + 0x44);
      uVar6 = *(uint *)(lVar10 + 0x48);
      uVar22 = *(uint *)(lVar10 + 0x4c);
      if (uVar6 == 0 && uVar21 == 0) {
        if (uVar22 == 0) {
          if (*(int *)(lVar10 + 0x50) == 0) goto LAB_1000256a;
          uVar22 = 0;
        }
        uVar6 = 0;
      }
      uVar22 = uVar22 / 1000;
      pcVar18 = (char *)((ulong)*(uint *)(lVar10 + 0x50) / 1000);
      pcVar29 = str_10003334;
      goto LAB_1000254c;
    }
LAB_10002250:
    thunk_snprintf(local_2d8,0x100,str_10003328,uVar21 / 1000,(void *)(lVar10 + 0xd4));
    break;
  case 3:
    uVar21 = *(uint *)(lVar10 + 0x3c);
    if (uVar21 != 0) goto LAB_10002250;
    if ((((*(byte *)(lVar10 + 0x12) & 1) != 0) && ((*(byte *)(lVar10 + 0x15) & 4) != 0)) &&
       (*(int *)(lVar10 + 0x18) != 0)) goto LAB_10001efd;
    uVar21 = *(uint *)(lVar10 + 0x44);
    uVar6 = *(uint *)(lVar10 + 0x48);
    uVar22 = *(uint *)(lVar10 + 0x4c);
    if (uVar6 == 0 && uVar21 == 0) {
      if (uVar22 == 0) {
        if (*(int *)(lVar10 + 0x50) == 0) goto LAB_1000256a;
        uVar22 = 0;
      }
      uVar6 = 0;
    }
    pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
    pcVar29 = str_100033a5;
    goto LAB_1000254c;
  case 4:
  case 0x14:
    if ((*(byte *)(lVar10 + 0x11) & 0x40) != 0) {
      uVar21 = *(uint *)(lVar10 + 0x20);
      uVar6 = -uVar21;
      if ((int)-uVar21 < 0) {
        uVar6 = uVar21;
      }
      arg3 = (ulonglong)((int)uVar21 / 1000);
      puVar11 = (undefined *)(ulong)((uVar6 % 1000) / 100);
      pvVar31 = (void *)(lVar10 + 0xd4);
      pcVar18 = str_10003260;
      goto LAB_100022d4;
    }
LAB_1000232d:
    pcVar18 = str_10003245;
LAB_10002583:
    thunk_snprintf(local_2d8,0x100,pcVar18,(void *)(lVar10 + 0xd4));
    break;
  case 5:
    if ((*(byte *)(lVar10 + 0x11) & 1) == 0) goto LAB_1000232d;
    thunk_snprintf(local_2d8,0x100,str_10003271,*(uint *)(lVar10 + 0x24),
                       *(uint *)(lVar10 + 0x28),(long)*(int *)(lVar10 + 0x2c),
                       (void *)(lVar10 + 0xd4));
    goto LAB_10002557;
  case 6:
    if ((*(uint *)(lVar10 + 0x10) & 2) == 0) goto LAB_1000232d;
    pcVar18 = str_10003290;
    if ((*(uint *)(lVar10 + 0x10) & 0x200) == 0) {
      pcVar18 = str_1000329a;
    }
    thunk_snprintf(local_2d8,0x100,str_10003288,pcVar18,(void *)(lVar10 + 0xd4));
    break;
  case 7:
    pcVar18 = str_100032bd;
    if ((*(uint *)(lVar10 + 0x10) & 0x800) == 0) {
      pcVar18 = &DAT_100032c4;
    }
    if (-1 < (short)*(uint *)(lVar10 + 0x10)) {
      pcVar18 = str_1000312a;
    }
    thunk_snprintf(local_2d8,0x100,str_100032a7,pcVar18,*(uint *)(lVar10 + 0x40));
    uVar19 = local_38;
    break;
  case 8:
    uVar21 = *(uint *)(lVar10 + 0x44);
    if ((uVar21 == 0) || (uVar6 = *(uint *)(lVar10 + 0x48), uVar6 == 0)) {
LAB_1000256a:
      pcVar18 = &DAT_10002f7d;
      goto LAB_10002583;
    }
    uVar22 = *(uint *)(lVar10 + 0x4c);
    pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
    pcVar29 = str_100032c9;
    goto LAB_1000254c;
  case 9:
    if ((*(byte *)(lVar10 + 0x10) & 2) == 0) goto LAB_1000256a;
    uVar6 = *(uint *)(lVar10 + 0x4c);
    uVar21 = *(uint *)(lVar10 + 0x44);
    uVar22 = *(uint *)(lVar10 + 0x48);
    pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
    pcVar29 = str_100033e4;
    goto LAB_1000254c;
  default:
    puVar11 = &DAT_10003087;
    if ((*(char *)(lVar10 + 0xd4) != '\0') &&
       (puVar11 = &DAT_10003616, *(char *)(lVar10 + 0x94) == '\0')) {
      puVar11 = &DAT_10003087;
    }
    arg3 = lVar10 + 0xd4;
    pvVar31 = (void *)(lVar10 + 0x94);
    pcVar18 = str_1000360f;
LAB_100022d4:
    thunk_snprintf(local_2d8,0x100,pcVar18,arg3,(ulonglong)puVar11,pvVar31);
    break;
  case 0xc:
    if ((*(byte *)(lVar10 + 0x12) & 1) == 0) {
      thunk_snprintf(local_2d8,0x100,&DAT_10002f7d,(void *)(lVar10 + 0xd4));
      uVar19 = local_38;
    }
    else {
      uVar21 = *(uint *)(lVar10 + 0x44);
      thunk_snprintf(local_2d8,0x100,str_100033f9,uVar21 >> 0x10 & 0xff,uVar21 >> 8 & 0xff,
                         uVar21 & 0xff,*(uint *)(lVar10 + 0x48),*(uint *)(lVar10 + 0x4c),
                         *(uint *)(lVar10 + 0x50),(void *)(lVar10 + 0xd4));
      uVar19 = local_38;
    }
    break;
  case 0xd:
    if (((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) & 4) == 0))
    goto LAB_1000256a;
    uVar21 = *(uint *)(lVar10 + 0x44);
    uVar6 = *(uint *)(lVar10 + 0x48);
    uVar22 = *(uint *)(lVar10 + 0x4c);
    pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
    pcVar29 = str_1000343c;
    goto LAB_1000254c;
  case 0xe:
  case 0xf:
    if ((((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) & 4) == 0)) ||
       (*(int *)(lVar10 + 0x18) == 0)) {
      uVar21 = *(uint *)(lVar10 + 0x44);
      uVar6 = *(uint *)(lVar10 + 0x48);
      uVar22 = *(uint *)(lVar10 + 0x4c);
      pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
      pcVar29 = str_10003474;
    }
    else {
LAB_10001efd:
      uVar21 = *(uint *)(lVar10 + 0x44);
      uVar6 = *(uint *)(lVar10 + 0x48);
      uVar22 = *(uint *)(lVar10 + 0x4c);
      pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
      pcVar29 = str_1000336c;
    }
    goto LAB_1000254c;
  case 0x10:
    if ((((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) & 4) == 0)) ||
       (*(int *)(lVar10 + 0x18) == 0)) {
      uVar21 = *(uint *)(lVar10 + 0x44);
      uVar6 = *(uint *)(lVar10 + 0x48);
      uVar22 = *(uint *)(lVar10 + 0x4c);
      pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
      pcVar29 = str_100034e3;
    }
    else {
      uVar21 = *(uint *)(lVar10 + 0x44);
      uVar6 = *(uint *)(lVar10 + 0x48);
      uVar22 = *(uint *)(lVar10 + 0x4c);
      pcVar18 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
      pcVar29 = str_100034b1;
    }
LAB_1000254c:
    pvVar31 = (void *)(lVar10 + 0xd4);
override_prt_10002552_3856091c:
    thunk_snprintf(local_2d8,0x100,pcVar29,uVar21,uVar6,uVar22,(ulonglong)pcVar18,pvVar31);
LAB_10002557:
    if ((uVar19 & 1) == 0) goto LAB_10001666;
    goto LAB_10001650;
  case 0x12:
    uVar21 = *(uint *)(lVar10 + 0x44);
    uVar6 = *(uint *)(lVar10 + 0x48);
    uVar22 = *(uint *)(lVar10 + 0x4c);
    pcVar18 = str_10003556;
    goto LAB_100020b8;
  case 0x13:
    thunk_snprintf(local_2d8,0x100,str_1000357d,*(ulonglong *)(lVar10 + 0x48),
                       *(uint *)(lVar10 + 0x44),*(uint *)(lVar10 + 0x50),(void *)(lVar10 + 0xd4));
    uVar19 = local_38;
    break;
  case 0x15:
    uVar21 = *(uint *)(lVar10 + 0x44);
    uVar6 = *(uint *)(lVar10 + 0x48);
    uVar22 = *(uint *)(lVar10 + 0x4c);
    pcVar18 = str_10003524;
LAB_100020b8:
    thunk_snprintf(local_2d8,0x100,pcVar18,uVar21,uVar6,uVar22,(void *)(lVar10 + 0xd4));
    uVar19 = local_38;
    break;
  case 0x16:
    uVar21 = *(uint *)(lVar10 + 0x4c);
    if (*(int *)(lVar10 + 0x1c) == 4) {
      uVar6 = *(uint *)(lVar10 + 0x44);
      uVar22 = *(uint *)(lVar10 + 0x48);
      pcVar18 = str_100035d4;
      if (*(int *)(lVar10 + 0x50) == 0) {
        pcVar18 = str_100035dd;
      }
      pcVar29 = str_100035ab;
      goto LAB_1000254c;
    }
    if (uVar21 == 0) {
      pcVar18 = &DAT_10002f7d;
      goto LAB_10002583;
    }
    thunk_snprintf(local_2d8,0x100,str_100035e5,(void *)(lVar10 + 0xd4),uVar21,
                       *(uint *)(lVar10 + 0x44),*(uint *)(lVar10 + 0x48));
    goto LAB_10002557;
  }
joined_r0x10001e42:
  if ((uVar19 & 1) != 0) {
LAB_10001650:
    thunk_snprintf(local_2d8,0x100,str_10003056);
  }
LAB_10001666:
  uVar21 = thunk_terror_ui_colour(1);
  recovered_10002660(param_1,0x236,(uint)local_50,(long)local_2d8,
                     (uVar21 & 0xff0000) >> 0x10 | uVar21 << 0x10 | uVar21 & 0xff00,
                     *(int *)(param_1 + 0x358) - 0x244);
  uVar7 = uVar7 + 1;
  local_70 = local_70 + 0x18;
  if (uVar7 == 0x17) {
    uVar21 = *(uint *)(param_1 + 0x35c);
LAB_100025b1:
    pvVar31 = *(void **)(param_1 + 0x350);
    uVar6 = *(uint *)(param_1 + 0x358);
    uVar22 = thunk_terror_ui_colour(0);
    thunk_terror_ui_window_present((void *)param_1,str_10002ef4,pvVar31,uVar6,uVar21,uVar6 * 4,uVar22);
    return;
  }
  goto LAB_100016c2;
}

#undef DAT_10002f62
#undef DAT_10002f7d
#undef DAT_10002f87
#undef DAT_10002fd5
#undef DAT_10003051
#undef DAT_10003087
#undef DAT_100032c4
#undef DAT_10003616
#undef DAT_1000361c
#undef DAT_10003678
#undef PTR_DAT_10004010
#undef str_10002ef4
#undef str_10002f00
#undef str_10002f34
#undef str_10002f3c
#undef str_10002f46
#undef str_10002f52
#undef str_10002f5a
#undef str_10002f65
#undef str_10002f6d
#undef str_10002f80
#undef str_10002f8c
#undef str_10002fb8
#undef str_1000301c
#undef str_10003024
#undef str_1000302d
#undef str_10003033
#undef str_1000303a
#undef str_10003056
#undef str_10003088
#undef str_1000312a
#undef str_10003236
#undef str_10003245
#undef str_10003260
#undef str_10003271
#undef str_10003288
#undef str_10003290
#undef str_1000329a
#undef str_100032a7
#undef str_100032bd
#undef str_100032c9
#undef str_100032f7
#undef str_10003312
#undef str_10003328
#undef str_10003334
#undef str_1000336c
#undef str_100033a5
#undef str_100033e4
#undef str_100033f9
#undef str_1000343c
#undef str_10003474
#undef str_100034b1
#undef str_100034e3
#undef str_10003524
#undef str_10003556
#undef str_1000357d
#undef str_100035ab
#undef str_100035d4
#undef str_100035dd
#undef str_100035e5
#undef str_1000360f
#undef local_3d8
#undef local_2d8
#undef local_1d8
#undef local_d8
#undef local_a8
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_58 (*(void * *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_34 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002660
 */

void recovered_10002660(long param_1,uint param_2,uint param_3,long param_4,uint param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;

  if (((param_4 != 0 && param_1 != 0) && (0 < (int)param_6)) && (*(long *)(param_1 + 0x350) != 0)) {
    local_34 = param_3;
    thunk_memset(&local_58,0,0x18);
    iVar3 = Ram0000000000280800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x17b < uVar2))))
    {
      uVar2 = UINT_00280978;
      if ((((code *)(ulong)uVar2 != (code *)0x0) &&
          (uVar2 = (*(code *)(ulong)uVar2)
                             ((char *)param_4,0xffffffff,1,
                              (param_5 | 0xff000000) >> 0x18 | (param_5 & 0xff0000) >> 8 |
                              (param_5 & 0xff00) << 8 | param_5 << 0x18,&local_58), uVar2 != 0)) &&
         (local_58 != (void *)0x0)) {
        if (local_44 < local_4c * 4) {
          iVar3 = Ram0000000000280800;
        }
        else {
          if (local_48 != 0) {
            if (local_4c < param_6) {
              param_6 = local_4c;
            }
            uVar6 = 0;
            uVar2 = local_34;
            do {
              iVar3 = (int)uVar6 + local_34;
              if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x35c))) && (param_6 != 0)) {
                uVar7 = (ulong)param_6;
                uVar8 = (ulong)param_2;
                lVar10 = (long)local_58 + 3;
                do {
                  if ((int)uVar8 < (int)*(uint *)(param_1 + 0x358)) {
                    lVar9 = local_44 * uVar6;
                    if (*(byte *)(lVar10 + lVar9) != 0) {
                      lVar1 = *(long *)(param_1 + 0x350);
                      lVar11 = (ulong)*(uint *)(param_1 + 0x358) * (ulong)uVar2 + uVar8;
                      uVar4 = (uint)*(byte *)(lVar10 + lVar9);
                      uVar5 = uVar4 ^ 0xff;
                      *(char *)(lVar1 + lVar11 * 4) =
                           (char)((*(byte *)(lVar1 + lVar11 * 4) * uVar5 +
                                   *(byte *)(lVar10 + -3 + lVar9) * uVar4 + 0x7f) / 0xff);
                      *(char *)(lVar1 + 1 + lVar11 * 4) =
                           (char)((*(byte *)(lVar10 + -2 + lVar9) * uVar4 +
                                   *(byte *)(lVar1 + 1 + lVar11 * 4) * uVar5 + 0x7f) / 0xff);
                      *(char *)(lVar1 + 2 + lVar11 * 4) =
                           (char)((*(byte *)(lVar1 + 2 + lVar11 * 4) * uVar5 +
                                   *(byte *)(lVar10 + -1 + lVar9) * uVar4 + 0x7f) / 0xff);
                      *(undefined1 *)(lVar1 + 3 + lVar11 * 4) = 0xff;
                    }
                  }
                  lVar10 = lVar10 + 4;
                  uVar8 = uVar8 + 1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              uVar6 = uVar6 + 1;
              uVar2 = uVar2 + 1;
            } while (uVar6 < local_48);
          }
          iVar3 = Ram0000000000280800;
        }
        if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
           ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
            ((uVar2 = Ram0000000000280808, 0x53 < uVar2 && (uVar2 = UINT_00280850, uVar2 != 0))))))
        {
          (*(code *)(ulong)uVar2)(local_58);
        }
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_34

#define local_34 (*(char *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

void recovered_100028f0(long param_1,int param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;

  iVar7 = param_2 * 0x68;
  uVar14 = iVar7 + 0x12;
  uVar4 = 2;
  if (param_4 != 0) {
    uVar4 = 0x2b;
  }
  uVar3 = thunk_terror_ui_colour(uVar4);
  uVar4 = *(uint *)(param_1 + 0x358);
  uVar12 = *(uint *)(param_1 + 0x35c);
  uVar9 = uVar4;
  if ((int)uVar14 < (int)uVar4) {
    uVar9 = uVar14;
  }
  uVar8 = iVar7 + 0x70;
  if ((int)uVar8 < (int)uVar4) {
    uVar4 = uVar8;
  }
  if (0x3f < (int)uVar12) {
    uVar10 = 0x5d;
    if (uVar12 < 0x5d) {
      uVar10 = (ulong)uVar12;
    }
    uVar13 = 0x3f;
    do {
      uVar12 = uVar9;
      if ((int)uVar14 < (int)uVar4) {
        do {
          if (((-1 < (int)uVar12 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar12 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar13 < (long)*(int *)(param_1 + 0x35c))) {
            lVar15 = (ulong)uVar12 + *(uint *)(param_1 + 0x358) * uVar13;
            *(char *)(*(long *)(param_1 + 0x350) + lVar15 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar15 * 4) = (char)(uVar3 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar15 * 4) = (char)uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar15 * 4) = 0xff;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  local_34 = (char)param_4;
  uVar4 = 0x14;
  if (local_34 != '\0') {
    uVar4 = 0x39;
  }
  uVar3 = thunk_terror_ui_colour(uVar4);
  uVar4 = *(uint *)(param_1 + 0x358);
  uVar12 = *(uint *)(param_1 + 0x35c);
  uVar9 = uVar4;
  if ((int)uVar14 < (int)uVar4) {
    uVar9 = uVar14;
  }
  uVar11 = uVar4;
  if ((int)uVar8 < (int)uVar4) {
    uVar11 = uVar8;
  }
  bVar1 = false;
  if (param_2 < -1) {
    uVar11 = 0;
  }
  uVar5 = (undefined1)(uVar3 >> 0x10);
  uVar6 = (undefined1)(uVar3 >> 8);
  uVar2 = (undefined1)uVar3;
  if (0x3f < (int)uVar12) {
    if ((int)uVar9 < (int)uVar11) {
      do {
        if (((-1 < (int)uVar9 && *(long *)(param_1 + 0x350) != 0) &&
            ((int)uVar9 < (int)*(uint *)(param_1 + 0x358))) && (0x3f < *(int *)(param_1 + 0x35c))) {
          lVar15 = (ulong)uVar9 + (ulong)*(uint *)(param_1 + 0x358) * 0x3f;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar15 * 4) = uVar5;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar15 * 4) = uVar6;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar15 * 4) = uVar2;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar15 * 4) = 0xff;
        }
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
      uVar4 = *(uint *)(param_1 + 0x358);
      uVar12 = *(uint *)(param_1 + 0x35c);
      uVar9 = uVar4;
      if ((int)uVar14 < (int)uVar4) {
        uVar9 = uVar14;
      }
      uVar3 = uVar4;
      if ((int)uVar8 < (int)uVar4) {
        uVar3 = uVar8;
      }
      uVar11 = 0;
      if (-2 < param_2) {
        uVar11 = uVar3;
      }
    }
    if ((0x5c < (int)uVar12) && ((int)uVar9 < (int)uVar11)) {
      do {
        if ((-1 < (int)uVar9 && *(long *)(param_1 + 0x350) != 0) &&
           (((int)uVar9 < (int)*(uint *)(param_1 + 0x358) && (0x5c < *(int *)(param_1 + 0x35c))))) {
          lVar15 = (ulong)uVar9 + (ulong)*(uint *)(param_1 + 0x358) * 0x5c;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar15 * 4) = uVar5;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar15 * 4) = uVar6;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar15 * 4) = uVar2;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar15 * 4) = 0xff;
        }
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
      uVar4 = *(uint *)(param_1 + 0x358);
      uVar12 = *(uint *)(param_1 + 0x35c);
      uVar9 = uVar14;
      if ((int)uVar4 <= (int)uVar14) {
        uVar9 = uVar4;
      }
    }
  }
  uVar14 = iVar7 + 0x13U;
  if ((int)uVar4 <= (int)(iVar7 + 0x13U)) {
    uVar14 = uVar4;
  }
  if (param_2 < 0) {
    uVar14 = 0;
  }
  uVar3 = 0x5d;
  if ((int)uVar12 < 0x5d) {
    uVar3 = uVar12;
  }
  if (0x3f < (int)uVar12) {
    uVar10 = 0x3f;
    do {
      uVar4 = uVar9;
      if ((int)uVar9 < (int)uVar14) {
        do {
          if (((-1 < (int)uVar4 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar4 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar10 < (long)*(int *)(param_1 + 0x35c))) {
            lVar15 = (ulong)uVar4 + *(uint *)(param_1 + 0x358) * uVar10;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar15 * 4) = uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar15 * 4) = uVar6;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar15 * 4) = uVar2;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar15 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar14 != uVar4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
    uVar4 = *(uint *)(param_1 + 0x358);
    uVar14 = *(uint *)(param_1 + 0x35c);
    uVar3 = 0x5d;
    if ((int)uVar14 < 0x5d) {
      uVar3 = uVar14;
    }
    bVar1 = 0x3f < (int)uVar14;
  }
  uVar12 = iVar7 + 0x6f;
  uVar14 = uVar4;
  if ((int)uVar12 < (int)uVar4) {
    uVar14 = uVar12;
  }
  if ((int)uVar12 < 0) {
    uVar14 = 0;
  }
  if ((int)uVar8 < (int)uVar4) {
    uVar4 = uVar8;
  }
  if ((int)uVar8 < 0) {
    uVar4 = 0;
  }
  if (bVar1) {
    uVar10 = 0x3f;
    do {
      uVar12 = uVar14;
      if ((int)uVar14 < (int)uVar4) {
        do {
          if (((-1 < (int)uVar12 && *(long *)(param_1 + 0x350) != 0) &&
              ((int)uVar12 < (int)*(uint *)(param_1 + 0x358))) &&
             ((long)uVar10 < (long)*(int *)(param_1 + 0x35c))) {
            lVar15 = (ulong)uVar12 + *(uint *)(param_1 + 0x358) * uVar10;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar15 * 4) = uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar15 * 4) = uVar6;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar15 * 4) = uVar2;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar15 * 4) = 0xff;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  uVar4 = 1;
  if (local_34 != '\0') {
    uVar4 = 0xe;
  }
  uVar4 = thunk_terror_ui_colour(uVar4);
  recovered_10002660(param_1,iVar7 + 0x1d,0x47,param_3,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00,0x4c);
  return;
}

#undef local_34
