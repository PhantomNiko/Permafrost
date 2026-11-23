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
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
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
#undef str_10003870
#define str_10003870 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
#undef str_1000388e
#define str_1000388e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#define local_9300 (*(undefined4 *)(pf_stack_frame + 64))
#define local_92fc (*(undefined4 *)(pf_stack_frame + 68))
#define local_9294 (*(undefined1 (*)[37524])(pf_stack_frame + 172))
#define abStack_931c (*(byte (*)[37660])(pf_stack_frame + 36))
#define bStack_9314 (*(byte *)(pf_stack_frame + 44))
#define local_901c (*(undefined1 (*)[36892])(pf_stack_frame + 804))
#define local_9018 (*(int *)(pf_stack_frame + 808))
#define local_8cdc (*(int *)(pf_stack_frame + 1636))
#define local_8cd8 (*(int *)(pf_stack_frame + 1640))
#define local_8cd4 (*(int *)(pf_stack_frame + 1644))
#define uStack_92f8 (*(undefined4 *)(pf_stack_frame + 72))
#define aiStack_92d8 (*(int (*)[9398])(pf_stack_frame + 104))
#define local_8cd0 (*(int *)(pf_stack_frame + 1648))
#define uStack_9284 (*(uint *)(pf_stack_frame + 188))
#define bStack_9264 (*(byte *)(pf_stack_frame + 220))
#define iStack_9014 (*(int *)(pf_stack_frame + 812))
#define iStack_8ff0 (*(int *)(pf_stack_frame + 848))
#define iStack_8ccc (*(int *)(pf_stack_frame + 1652))
#define pvStack_18 (*(void * *)(pf_stack_frame + 37672))
#define local_9324 (*(undefined4 *)(pf_stack_frame + 28))
#define local_9320 (*(int *)(pf_stack_frame + 32))
#define local_930c (*(int *)(pf_stack_frame + 52))
#define local_9308 (*(int *)(pf_stack_frame + 56))
#define local_9304 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

int recovered_10000e50(int argc,char **argv)

{
  unsigned char pf_stack_frame[37728] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uchar uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;

  thunk_memset(local_901c,0,0x9008);
  thunk_pf_app_window_spec(local_9294,str_1000388e,1000,0x2b2);
  uStack_9284 = thunk_terror_ui_colour(0);
  bStack_9264 = bStack_9264 | 1;
  uVar4 = thunk_terror_ui_window_open(local_901c,local_9294);
  if (uVar4 != 0) {
    local_8cdc = iStack_8ff0;
    local_8cd8 = local_9018;
    local_8cd4 = iStack_9014;
    if (iStack_8ff0 != 0) {
      recovered_10001370((int)local_901c);
      recovered_10001680(local_901c);
      iVar6 = local_8cd8;
      local_9320 = local_8cd4;
      terror_ui_window_begin_frame(local_901c);
      do {
        thunk_memset(local_9294,0,0x278);
        uVar4 = thunk_terror_ui_window_query(local_901c,local_9294);
        if (((uVar4 == 0) || (uVar3 = thunk_terror_ui_window_info_requests_close(local_9294), uVar3 != '\0')) ||
           (uVar4 = thunk_terror_ui_window_sync_buffer(local_901c,local_9294), uVar4 == 0)) {
          thunk_terror_ui_window_close(local_901c);
          if (pvStack_18 == (void *)0x0) {
            return 0;
          }
          iVar6 = Ram00280800;
          if (iVar6 != 0x50414d57) {
            return 0;
          }
          iVar6 = Ram00280804;
          if (iVar6 == 0) {
            return 0;
          }
          uVar4 = Ram00280808;
          if (uVar4 < 0xc) {
            return 0;
          }
          uVar4 = Ram00280808;
          if (uVar4 < 0x54) {
            return 0;
          }
          pcVar2 = (code *)UINT_00280850;
          if (pcVar2 == (code *)0x0) {
            return 0;
          }
          (*pcVar2)(pvStack_18);
          return 0;
        }
        local_8cdc = iStack_8ff0;
        local_8cd8 = local_9018;
        local_8cd4 = iStack_9014;
        thunk_memset(abStack_931c,0,0x1c);
        uVar4 = thunk_terror_ui_window_pointer_state(local_901c,abStack_931c);
        if (((uVar4 != 0) && ((abStack_931c[0] & 2) != 0)) &&
           (((bStack_9314 & 1) != 0 && (local_930c != iStack_8ccc)))) {
          iStack_8ccc = local_930c;
          uVar4 = local_9304 - 0x3f;
          if (local_9308 - 0x12U < 0x5e && uVar4 < 0x1e) {
            thunk_memset(&local_9300,0,0x28);
            uVar5 = 2;
          }
          else {
            uVar5 = 1;
            local_9324 = 1;
            if (uVar4 >= 30) goto LAB_10001190;
if ((uint)(local_9308 - 122) < 94) local_9324 = 1;
else if ((uint)(local_9308 - 226) < 94) local_9324 = 2;
else if ((uint)(local_9308 - 330) < 94) local_9324 = 3;
else if ((uint)(local_9308 - 434) < 94) local_9324 = 4;
else goto LAB_10001190;
            thunk_memset(&local_9300,0,0x28);
            uStack_92f8 = local_9324;
          }
          local_9300 = 0x28;
          iVar1 = Ram00280800;
          local_92fc = uVar5;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
              (uVar4 = Ram00280808, 0xb < uVar4)) &&
             ((uVar4 = Ram00280808, 0x1e3 < uVar4 &&
              (pcVar2 = (code *)UINT_002809e0, pcVar2 != (code *)0x0)))) {
            (*pcVar2)(0,&local_9300);
          }
          recovered_10001370((int)local_901c);
          recovered_10001680(local_901c);
        }
LAB_10001190:
        thunk_memset(aiStack_92d8,0,0x44);
        iVar1 = Ram00280800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
           ((uVar4 = Ram00280808, 0xb < uVar4 &&
            ((uVar4 = Ram00280808, 0x10b < uVar4 &&
             (pcVar2 = (code *)UINT_00280908, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)(aiStack_92d8);
        }
        if ((((local_8cd0 == 0) || (8 < (uint)(aiStack_92d8[0] - local_8cd0))) ||
            (local_8cd8 != iVar6)) || (local_8cd4 != local_9320)) {
          local_8cd0 = aiStack_92d8[0];
          recovered_10001370((int)local_901c);
          recovered_10001680(local_901c);
        }
        iVar6 = Ram00280800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
           ((uVar4 = Ram00280808, 0xb < uVar4 &&
            ((uVar4 = Ram00280808, 0x9f < uVar4 &&
             (pcVar2 = (code *)UINT_0028089c, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)();
        }
        iVar6 = local_8cd8;
        local_9320 = local_8cd4;
        terror_ui_window_begin_frame(local_901c);
      } while( true );
    }
    thunk_terror_ui_window_close(local_901c);
  }
  iVar6 = Ram00280800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
      (uVar4 = Ram00280808, 0xb < uVar4)) &&
     ((uVar4 = Ram00280808, 0x2b < uVar4 && (pcVar2 = (code *)UINT_00280828, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)(str_10003870);
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280828
#undef UINT_00280850
#undef UINT_0028089c
#undef UINT_00280908
#undef UINT_002809e0
#undef str_10003870
#undef str_1000388e
#undef local_9300
#undef local_92fc
#undef local_9294
#undef abStack_931c
#undef bStack_9314
#undef local_901c
#undef local_9018
#undef local_8cdc
#undef local_8cd8
#undef local_8cd4
#undef uStack_92f8
#undef aiStack_92d8
#undef local_8cd0
#undef uStack_9284
#undef bStack_9264
#undef iStack_9014
#undef iStack_8ff0
#undef iStack_8ccc
#undef pvStack_18
#undef local_9324
#undef local_9320
#undef local_930c
#undef local_9308
#undef local_9304

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
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
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

void recovered_10001370(int reg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong size;
  void *dst;
  uint uVar5;

  iVar1 = Ram00280800;
  uVar5 = 0;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar4 = Ram00280808, 0xb < uVar4)) &&
     ((uVar4 = Ram00280808, 0x1db < uVar4 && (pcVar2 = (code *)UINT_002809d8, pcVar2 != (code *)0x0)
      ))) {
    uVar5 = (*pcVar2)();
  }
  local_1c = 0;
  local_20 = 0;
  uVar4 = 0x48;
  if (uVar5 < 0x48) {
    uVar4 = uVar5;
  }
  thunk_memset((void *)(reg_ecx + 0x364),0,36000);
  *(undefined4 *)(reg_ecx + 0x354) = 0;
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      iVar1 = Ram00280800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
         ((uVar3 = Ram00280808, 0xb < uVar3 &&
          (((uVar3 = Ram00280808, 0x1df < uVar3 &&
            (pcVar2 = (code *)UINT_002809dc, pcVar2 != (code *)0x0)) &&
           (uVar3 = (*pcVar2)(uVar5,(void *)(*(int *)(reg_ecx + 0x354) * 500 + reg_ecx + 0x364)),
           uVar3 != 0)))))) {
        *(int *)(reg_ecx + 0x354) = *(int *)(reg_ecx + 0x354) + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  iVar1 = Ram00280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
     ((uVar5 = Ram00280808, 0xb < uVar5 &&
      ((uVar5 = Ram00280808, 399 < uVar5 && (pcVar2 = (code *)UINT_0028098c, pcVar2 != (code *)0x0))
      )))) {
    (*pcVar2)((void *)0x0,0,&local_1c);
    uVar4 = local_1c;
    *(uint *)(reg_ecx + 0x35c) = local_1c;
    uVar5 = 0;
    if (local_1c != 0) {
      if (*(uint *)(reg_ecx + 0x360) < local_1c) {
        if ((((0x2f0bf2 < local_1c) || (iVar1 = Ram00280800, iVar1 != 0x50414d57)) ||
            (iVar1 = Ram00280804, iVar1 == 0)) ||
           (((uVar3 = Ram00280808, uVar3 < 0xc || (uVar3 = Ram00280808, uVar3 < 0x50)) ||
            (pcVar2 = (code *)UINT_0028084c, pcVar2 == (code *)0x0)))) goto LAB_100015dd;
        size = local_1c * 0x571;
        local_18 = (*pcVar2)(size);
        if (local_18 == (void *)0x0) goto LAB_100015dd;
        thunk_memset(local_18,0,size);
        if (((*(void **)(reg_ecx + 0x9004) != (void *)0x0) &&
            (iVar1 = Ram00280800, iVar1 == 0x50414d57)) &&
           ((iVar1 = Ram00280804, iVar1 != 0 &&
            (((uVar3 = Ram00280808, 0xb < uVar3 && (uVar3 = Ram00280808, 0x53 < uVar3)) &&
             (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)(*(void **)(reg_ecx + 0x9004));
        }
        *(void **)(reg_ecx + 0x9004) = local_18;
        *(uint *)(reg_ecx + 0x360) = uVar4;
        dst = local_18;
      }
      else {
        dst = *(void **)(reg_ecx + 0x9004);
        size = *(uint *)(reg_ecx + 0x360) * 0x571;
      }
      thunk_memset(dst,0,size);
      iVar1 = Ram00280800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
         (((uVar4 = Ram00280808, 0xb < uVar4 &&
           ((uVar4 = Ram00280808, 399 < uVar4 &&
            (pcVar2 = (code *)UINT_0028098c, pcVar2 != (code *)0x0)))) &&
          (uVar4 = (*pcVar2)(*(void **)(reg_ecx + 0x9004),*(uint *)(reg_ecx + 0x360),&local_20),
          uVar4 != 0)))) {
        *(uint *)(reg_ecx + 0x35c) = local_20;
        uVar5 = *(uint *)(reg_ecx + 0x360);
        if (local_20 < *(uint *)(reg_ecx + 0x360)) {
          uVar5 = local_20;
        }
      }
    }
  }
  else {
    *(undefined4 *)(reg_ecx + 0x35c) = 0;
    uVar5 = 0;
  }
LAB_100015dd:
  *(uint *)(reg_ecx + 0x358) = uVar5;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_0028098c
#undef UINT_002809d8
#undef UINT_002809dc
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_100038fc
#define DAT_100038fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x158U)))
#undef DAT_10003917
#define DAT_10003917 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef DAT_10003921
#define DAT_10003921 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dU)))
#undef DAT_1000396f
#define DAT_1000396f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef DAT_100039eb
#define DAT_100039eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef DAT_10003a21
#define DAT_10003a21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_10003c5e
#define DAT_10003c5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4baU)))
#undef DAT_10003fb0
#define DAT_10003fb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80cU)))
#undef PTR_DAT_10004090
#define PTR_DAT_10004090 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8ecU)))
#undef PTR_str_10003a51_100040e8
#define PTR_str_10003a51_100040e8 (*(char * *)(((uintptr_t)pf_module_state + 0x944U)))
#undef PTR_str_10003ac4_10004034
#define PTR_str_10003ac4_10004034 (*(char * *)(((uintptr_t)pf_module_state + 0x890U)))
#undef str_1000388e
#define str_1000388e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#undef str_1000389a
#define str_1000389a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_100038ce
#define str_100038ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_100038d6
#define str_100038d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
#undef str_100038e0
#define str_100038e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#undef str_100038ec
#define str_100038ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
#undef str_100038f4
#define str_100038f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_100038ff
#define str_100038ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15bU)))
#undef str_10003907
#define str_10003907 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_1000391a
#define str_1000391a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x176U)))
#undef str_10003926
#define str_10003926 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10003952
#define str_10003952 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_100039b6
#define str_100039b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_100039be
#define str_100039be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21aU)))
#undef str_100039c7
#define str_100039c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x223U)))
#undef str_100039cd
#define str_100039cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x229U)))
#undef str_100039d4
#define str_100039d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x230U)))
#undef str_100039f0
#define str_100039f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_10003a22
#define str_10003a22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27eU)))
#undef str_10003ac4
#define str_10003ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
#undef str_10003bd0
#define str_10003bd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#undef str_10003bdf
#define str_10003bdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43bU)))
#undef str_10003bfa
#define str_10003bfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x456U)))
#undef str_10003c0b
#define str_10003c0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
#undef str_10003c22
#define str_10003c22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47eU)))
#undef str_10003c2a
#define str_10003c2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_10003c34
#define str_10003c34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x490U)))
#undef str_10003c41
#define str_10003c41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_10003c57
#define str_10003c57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10003c63
#define str_10003c63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bfU)))
#undef str_10003c91
#define str_10003c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4edU)))
#undef str_10003cac
#define str_10003cac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x508U)))
#undef str_10003cc2
#define str_10003cc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51eU)))
#undef str_10003cce
#define str_10003cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_10003d06
#define str_10003d06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x562U)))
#undef str_10003d3f
#define str_10003d3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59bU)))
#undef str_10003d7e
#define str_10003d7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5daU)))
#undef str_10003d93
#define str_10003d93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#undef str_10003dd6
#define str_10003dd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x632U)))
#undef str_10003e0e
#define str_10003e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_10003e4b
#define str_10003e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a7U)))
#undef str_10003e7d
#define str_10003e7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d9U)))
#undef str_10003ebe
#define str_10003ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71aU)))
#undef str_10003ef0
#define str_10003ef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74cU)))
#undef str_10003f17
#define str_10003f17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x773U)))
#undef str_10003f45
#define str_10003f45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a1U)))
#undef str_10003f6e
#define str_10003f6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7caU)))
#undef str_10003f77
#define str_10003f77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_10003f7f
#define str_10003f7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dbU)))
#undef str_10003fa9
#define str_10003fa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x805U)))
#define local_3b4 (*(int *)(pf_stack_frame + 44))
#define local_3a8 (*(undefined2 *)(pf_stack_frame + 56))
#define local_3a4 (*(int *)(pf_stack_frame + 60))
#define local_39c (*(undefined1 (*)[924])(pf_stack_frame + 68))
#define local_390 (*(int *)(pf_stack_frame + 80))
#define local_388 (*(char * *)(pf_stack_frame + 88))
#define local_380 (*(int *)(pf_stack_frame + 96))
#define local_37c (*(undefined2 *)(pf_stack_frame + 100))
#define local_37a (*(undefined1 *)(pf_stack_frame + 102))
#define local_27c (*(char (*)[636])(pf_stack_frame + 356))
#define local_264 (*(char (*)[612])(pf_stack_frame + 380))
#define local_244 (*(char (*)[580])(pf_stack_frame + 412))
#define local_214 (*(char (*)[532])(pf_stack_frame + 460))
#define local_114 (*(char (*)[276])(pf_stack_frame + 716))
#define uStack_39a (*(undefined1 *)(pf_stack_frame + 70))
#define local_3c0 (*(int *)(pf_stack_frame + 32))
#define local_3bc (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

void recovered_10001680(void *reg_ecx)

{
  unsigned char pf_stack_frame[1024] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  char *arg4;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined *puVar24;
  bool bVar25;
  undefined1 uVar26;
  void *pvVar27;

  iVar4 = *(int *)((int)reg_ecx + 0x354);
  if (iVar4 != 0) {
    iVar18 = (int)reg_ecx + 0x364;
    local_3a4 = 0;
    do {
      if (*(int *)(iVar18 + 0xc) == 0x16) {
        if (local_3a4 != 0) {
          uVar7 = *(uint *)(iVar18 + 0x10);
          uVar16 = *(uint *)(local_3a4 + 0x10);
          if ((uVar7 >> 0xd & 8 | uVar7 >> 2 & 4 | uVar7 >> 1 & 2 | uVar7 & 1) + (uVar7 & 2) * 8 <=
              (uVar16 >> 0xd & 8 | uVar16 >> 2 & 4 | uVar16 >> 1 & 2 | uVar16 & 1) +
              (uVar16 & 2) * 8) goto LAB_100016c2;
        }
        local_3a4 = iVar18;
      }
LAB_100016c2:
      iVar18 = iVar18 + 500;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (local_3a4 != 0) {
      bVar3 = (*(byte *)(local_3a4 + 0x11) & 0x20) >> 5;
      local_3c0 = *(int *)(local_3a4 + 0x1c);
      bVar25 = false;
      goto LAB_10001781;
    }
  }
  local_3c0 = 1;
  bVar25 = true;
  bVar3 = 0;
  local_3a4 = 0;
LAB_10001781:
  uVar7 = *(uint *)((int)reg_ecx + 0x344);
  uVar16 = *(uint *)((int)reg_ecx + 0x348);
  uVar5 = thunk_terror_ui_colour(0);
  uVar15 = *(uint *)((int)reg_ecx + 0x348);
  uVar19 = (int)uVar15 >> 0x1f & uVar15;
  uVar6 = *(uint *)((int)reg_ecx + 0x344);
  uVar21 = uVar6;
  if ((int)uVar7 < (int)uVar6) {
    uVar21 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar21 = 0;
  }
  if ((int)uVar16 < (int)uVar15) {
    uVar15 = uVar16;
  }
  if ((int)uVar16 < 0) {
    uVar15 = 0;
  }
  if ((int)uVar19 < (int)uVar15) {
    uVar6 = (int)uVar6 >> 0x1f & uVar6;
    do {
      uVar7 = uVar6;
      if ((int)uVar6 < (int)uVar21) {
        do {
          if (((-1 < (int)(uVar7 | uVar19) && *(int *)((int)reg_ecx + 0x340) != 0) &&
              ((int)uVar7 < *(int *)((int)reg_ecx + 0x344))) &&
             ((int)uVar19 < *(int *)((int)reg_ecx + 0x348))) {
            iVar4 = *(int *)((int)reg_ecx + 0x344) * uVar19 + uVar7;
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar4 * 4) = (char)(uVar5 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + iVar4 * 4) = (char)(uVar5 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + iVar4 * 4) = (char)uVar5;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + iVar4 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar21 != uVar7);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar15);
    uVar6 = *(uint *)((int)reg_ecx + 0x344);
  }
  uVar15 = thunk_terror_ui_colour(0x2d);
  uVar7 = *(uint *)((int)reg_ecx + 0x344);
  uVar16 = uVar7;
  if ((int)uVar6 < (int)uVar7) {
    uVar16 = uVar6;
  }
  iVar4 = *(int *)((int)reg_ecx + 0x348);
  if ((int)uVar6 < 0) {
    uVar16 = 0;
  }
  iVar18 = 0x6c;
  if (iVar4 < 0x6c) {
    iVar18 = iVar4;
  }
  if (0 < iVar4) {
    uVar7 = (int)uVar7 >> 0x1f & uVar7;
    iVar4 = 0;
    do {
      uVar6 = uVar7;
      if ((int)uVar7 < (int)uVar16) {
        do {
          if (((-1 < (int)uVar6 && *(int *)((int)reg_ecx + 0x340) != 0) &&
              ((int)uVar6 < *(int *)((int)reg_ecx + 0x344))) &&
             (iVar4 < *(int *)((int)reg_ecx + 0x348))) {
            iVar20 = *(int *)((int)reg_ecx + 0x344) * iVar4 + uVar6;
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar20 * 4) = (char)(uVar15 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + iVar20 * 4) = (char)(uVar15 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + iVar20 * 4) = (char)uVar15;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + iVar20 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar16 != uVar6);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar18);
  }
  if (local_3c0 - 1U < 4) {
    puVar24 = (&PTR_str_10003a51_100040e8)[local_3c0];
  }
  else {
    puVar24 = &DAT_1000396f;
  }
  pcVar8 = str_100038d6;
  if (bVar3 != 0) {
    pcVar8 = str_100038ce;
  }
  uVar7 = *(uint *)((int)reg_ecx + 0x35c);
  thunk_snprintf(local_114,0x100,str_1000389a,puVar24,pcVar8,*(uint *)((int)reg_ecx + 0x354),
                     uVar7);
  uVar26 = (undefined1)(uVar7 >> 0x18);
  uVar7 = thunk_terror_ui_colour(1);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  pcVar8 = (char *)(*(int *)((int)reg_ecx + 0x344) + -0x24);
  recovered_10002f80((int)reg_ecx,0x12,0xd,(int)local_114,
                     CONCAT22(CONCAT11(uVar26,local_37a),local_37c),(uint)pcVar8);
  if (bVar25) {
    uVar26 = 0x10;
    thunk_snprintf(local_214,0x100,str_10003952);
  }
  else {
    if ((*(byte *)(local_3a4 + 0x11) & 0x40) == 0) {
      thunk_snprintf(local_264,0x20,str_100038ec);
    }
    else {
      uVar7 = *(uint *)(local_3a4 + 0x20);
      uVar16 = -uVar7;
      if ((int)-uVar7 < 0) {
        uVar16 = uVar7;
      }
      thunk_snprintf(local_264,0x20,str_100038e0,(int)uVar7 / 1000,(uVar16 % 1000) / 100);
    }
    uVar7 = *(uint *)(local_3a4 + 0x10);
    if ((uVar7 & 0x100) == 0) {
      if ((uVar7 & 0x200) == 0) {
        pcVar10 = str_100038ec;
      }
      else {
        pcVar10 = str_10003907;
      }
      thunk_snprintf(local_244,0x30,pcVar10);
    }
    else {
      pcVar10 = &DAT_100038fc;
      if ((uVar7 & 0x200) == 0) {
        pcVar10 = str_100038ff;
      }
      thunk_snprintf(local_244,0x30,str_100038f4,*(uint *)(local_3a4 + 0x24),pcVar10);
    }
    if ((short)*(uint *)(local_3a4 + 0x10) < 0) {
      pcVar8 = str_1000391a;
      if ((*(uint *)(local_3a4 + 0x10) & 0x800) == 0) {
        pcVar8 = &DAT_10003921;
      }
      pcVar10 = &DAT_10003917;
    }
    else {
      pcVar10 = str_100038ec;
    }
    thunk_snprintf(local_27c,0x18,pcVar10,pcVar8);
    pvVar27 = (void *)(local_3a4 + 0xd4);
    thunk_snprintf(local_214,0x100,str_10003926,local_264,local_244,local_27c,pvVar27);
    uVar26 = (undefined1)((uint)pvVar27 >> 0x18);
  }
  uVar7 = thunk_terror_ui_colour(0x31);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  uVar7 = CONCAT22(CONCAT11(uVar26,local_37a),local_37c);
  recovered_10002f80((int)reg_ecx,0x12,0x23,(int)local_214,uVar7,
                     *(int *)((int)reg_ecx + 0x344) - 0x24);
  uVar26 = (undefined1)(uVar7 >> 0x18);
  recovered_10003240((int)reg_ecx,0,((uintptr_t)pf_module_state + 0x1cbU),bVar3);
  bVar3 = bVar3 ^ 1;
  recovered_10003240((int)reg_ecx,1,((uintptr_t)pf_module_state + 0x1d0U),local_3c0 == 1 & bVar3);
  recovered_10003240((int)reg_ecx,2,((uintptr_t)pf_module_state + 0x1d5U),local_3c0 == 2 & bVar3);
  recovered_10003240((int)reg_ecx,3,((uintptr_t)pf_module_state + 0x1dcU),local_3c0 == 3 & bVar3);
  recovered_10003240((int)reg_ecx,4,((uintptr_t)pf_module_state + 0x1e0U),local_3c0 == 4);
  iVar4 = *(int *)((int)reg_ecx + 0x344);
  uVar7 = thunk_terror_ui_colour(0x2a);
  iVar18 = *(int *)((int)reg_ecx + 0x344);
  iVar20 = 0xc;
  if (iVar18 < 0xc) {
    iVar20 = iVar18;
  }
  iVar9 = iVar4 + -0xc;
  if (iVar9 < iVar18) {
    iVar18 = iVar9;
  }
  iVar9 = *(int *)((int)reg_ecx + 0x348);
  if (iVar4 < 0xc) {
    iVar18 = 0;
  }
  iVar4 = 0x89;
  if (iVar9 < 0x89) {
    iVar4 = iVar9;
  }
  if (0x71 < iVar9) {
    iVar9 = 0x71;
    do {
      iVar23 = iVar20;
      if (iVar20 < iVar18) {
        do {
          if (((-1 < iVar23 && *(int *)((int)reg_ecx + 0x340) != 0) &&
              (iVar23 < *(int *)((int)reg_ecx + 0x344))) && (iVar9 < *(int *)((int)reg_ecx + 0x348))
             ) {
            iVar22 = *(int *)((int)reg_ecx + 0x344) * iVar9 + iVar23;
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar22 * 4) = (char)(uVar7 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + iVar22 * 4) = (char)(uVar7 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + iVar22 * 4) = (char)uVar7;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + iVar22 * 4) = 0xff;
          }
          iVar23 = iVar23 + 1;
        } while (iVar18 != iVar23);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar4);
  }
  uVar7 = thunk_terror_ui_colour(0x19);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  uVar7 = CONCAT22(CONCAT11(uVar26,local_37a),local_37c);
  recovered_10002f80((int)reg_ecx,0x14,0x77,((uintptr_t)pf_module_state + 0x1e6U),uVar7,0xb8);
  uVar26 = (undefined1)(uVar7 >> 0x18);
  uVar7 = thunk_terror_ui_colour(0x19);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  uVar7 = CONCAT22(CONCAT11(uVar26,local_37a),local_37c);
  recovered_10002f80((int)reg_ecx,0xdc,0x77,((uintptr_t)pf_module_state + 0x1eeU),uVar7,0x70);
  uVar26 = (undefined1)(uVar7 >> 0x18);
  uVar7 = thunk_terror_ui_colour(0x19);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  uVar7 = CONCAT22(CONCAT11(uVar26,local_37a),local_37c);
  recovered_10002f80((int)reg_ecx,0x152,0x77,((uintptr_t)pf_module_state + 0x1f5U),uVar7,0xda);
  uVar26 = (undefined1)(uVar7 >> 0x18);
  uVar7 = thunk_terror_ui_colour(0x19);
  local_37c = CONCAT11((char)(uVar7 >> 8),(char)(uVar7 >> 0x10));
  local_37a = (undefined1)uVar7;
  uVar16 = CONCAT22(CONCAT11(uVar26,local_37a),local_37c);
  recovered_10002f80((int)reg_ecx,0x236,0x77,((uintptr_t)pf_module_state + 0x206U),uVar16,
                     *(int *)((int)reg_ecx + 0x344) - 0x244);
  uVar7 = 1;
LAB_10002041:
  uVar26 = (undefined1)(uVar16 >> 0x18);
  iVar4 = *(int *)((int)reg_ecx + 0x354);
  if (iVar4 == 0) {
LAB_100021b0:
    uVar16 = *(uint *)((int)reg_ecx + 0x358);
    if (uVar16 != 0) {
      pbVar1 = (&PTR_DAT_10004090)[uVar7];
      iVar4 = *(int *)((int)reg_ecx + 0x9004);
      local_390 = iVar4 + 0xf1;
      local_388 = (char *)(iVar4 + 0x111);
      local_380 = iVar4 + 0x171;
      uVar15 = 0;
      bVar25 = true;
      local_3a4 = iVar4;
LAB_1000224a:
      if (*(char *)(iVar4 + 0xf1 + uVar15 * 0x571) != '\0') {
        pcVar8 = (char *)(uVar15 * 0x571 + iVar4);
        iVar18 = 0;
        iVar20 = local_390;
        do {
          bVar3 = 0x6e;
          iVar9 = -0xd;
          pcVar10 = str_10003a22;
          while( true ) {
            pcVar10 = pcVar10 + 1;
            bVar12 = *(byte *)(iVar20 + 0xd + iVar9);
            if (bVar12 == 0) break;
            bVar13 = bVar12 | 0x20;
            if (0x19 < (byte)(bVar12 + 0xbf)) {
              bVar13 = bVar12;
            }
            bVar12 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar12 = bVar3;
            }
            if (bVar13 != bVar12) break;
            bVar3 = *pcVar10;
            iVar9 = iVar9 + 1;
            if (iVar9 == 0) {
              bVar3 = *pbVar1;
              if (bVar3 == 0) goto LAB_10002210;
              if (*pcVar8 == '\0') goto LAB_10002377;
              iVar18 = 0;
              iVar20 = local_3a4;
              goto LAB_1000231f;
            }
          }
          iVar20 = iVar20 + 1;
          iVar9 = iVar18 + 0xf2;
          iVar18 = iVar18 + 1;
        } while (pcVar8[iVar9] != '\0');
      }
      goto LAB_10002210;
    }
    local_3bc = 0;
    bVar2 = true;
  }
  else {
    local_3bc = 0;
    iVar18 = (int)reg_ecx + 0x364;
    iVar20 = iVar4;
    do {
      if (*(uint *)(iVar18 + 0xc) == uVar7) {
        if (local_3bc != 0) {
          uVar16 = *(uint *)(iVar18 + 0x10);
          uVar15 = *(uint *)(local_3bc + 0x10);
          if ((uVar16 >> 0xd & 8 | uVar16 >> 2 & 4 | uVar16 >> 1 & 2 | uVar16 & 1) +
              (uVar16 & 2) * 8 <=
              (uVar15 >> 0xd & 8 | uVar15 >> 2 & 4 | uVar15 >> 1 & 2 | uVar15 & 1) +
              (uVar15 & 2) * 8) goto LAB_10002072;
        }
        local_3bc = iVar18;
      }
LAB_10002072:
      iVar18 = iVar18 + 500;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    if (uVar7 == 0x14 && local_3bc == 0) {
      local_3bc = 0;
      iVar18 = (int)reg_ecx + 0x364;
      do {
        if (*(int *)(iVar18 + 0xc) == 4) {
          if (local_3bc != 0) {
            uVar16 = *(uint *)(iVar18 + 0x10);
            uVar15 = *(uint *)(local_3bc + 0x10);
            if ((uVar16 >> 0xd & 8 | uVar16 >> 2 & 4 | uVar16 >> 1 & 2 | uVar16 & 1) +
                (uVar16 & 2) * 8 <=
                (uVar15 >> 0xd & 8 | uVar15 >> 2 & 4 | uVar15 >> 1 & 2 | uVar15 & 1) +
                (uVar15 & 2) * 8) goto LAB_10002112;
          }
          local_3bc = iVar18;
        }
LAB_10002112:
        iVar18 = iVar18 + 500;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_3bc == 0) goto LAB_100021b0;
    bVar2 = false;
  }
  bVar25 = false;
  goto LAB_100024b6;
LAB_1000231f:
  do {
    iVar9 = 0;
    bVar12 = bVar3;
    while (bVar13 = *(byte *)(iVar20 + iVar9), bVar13 != 0) {
      bVar17 = bVar13 | 0x20;
      if (0x19 < (byte)(bVar13 + 0xbf)) {
        bVar17 = bVar13;
      }
      bVar13 = bVar12 | 0x20;
      if (0x19 < (byte)(bVar12 + 0xbf)) {
        bVar13 = bVar12;
      }
      if (bVar17 != bVar13) break;
      bVar12 = pbVar1[iVar9 + 1];
      iVar9 = iVar9 + 1;
      if (bVar12 == 0) goto LAB_1000248e;
    }
    iVar20 = iVar20 + 1;
    iVar9 = iVar18 + 1;
    iVar18 = iVar18 + 1;
  } while (pcVar8[iVar9] != '\0');
LAB_10002377:
  if (pcVar8[0x111] != '\0') {
    iVar18 = 0;
    pcVar10 = local_388;
    do {
      iVar20 = 0;
      bVar12 = bVar3;
      while (bVar13 = *(byte *)((int)pcVar10 + iVar20), bVar13 != 0) {
        bVar17 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar17 = bVar13;
        }
        bVar13 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar13 = bVar12;
        }
        if (bVar17 != bVar13) break;
        bVar12 = pbVar1[iVar20 + 1];
        iVar20 = iVar20 + 1;
        if (bVar12 == 0) goto LAB_1000248e;
      }
      pcVar10 = (char *)((int)pcVar10 + 1);
      iVar20 = iVar18 + 0x112;
      iVar18 = iVar18 + 1;
    } while (pcVar8[iVar20] != '\0');
  }
  if (pcVar8[0x171] != '\0') {
    iVar18 = 0;
    iVar20 = local_380;
    do {
      iVar9 = 0;
      bVar12 = bVar3;
      while (bVar13 = *(byte *)(iVar20 + iVar9), bVar13 != 0) {
        bVar17 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar17 = bVar13;
        }
        bVar13 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar13 = bVar12;
        }
        if (bVar17 != bVar13) break;
        bVar12 = pbVar1[iVar9 + 1];
        iVar9 = iVar9 + 1;
        if (bVar12 == 0) goto LAB_1000248e;
      }
      iVar20 = iVar20 + 1;
      iVar9 = iVar18 + 0x172;
      iVar18 = iVar18 + 1;
    } while (pcVar8[iVar9] != '\0');
  }
LAB_10002210:
  uVar15 = uVar15 + 1;
  local_390 = local_390 + 0x571;
  local_3a4 = local_3a4 + 0x571;
  local_388 = (char *)((int)local_388 + 0x571);
  local_380 = local_380 + 0x571;
  bVar25 = uVar15 < uVar16;
  if (uVar15 == uVar16) goto LAB_10002ba5;
  goto LAB_1000224a;
LAB_10002ba5:
  bVar25 = false;
LAB_1000248e:
  bVar2 = true;
  local_3bc = 0;
LAB_100024b6:
  uVar16 = thunk_terror_ui_colour(0x12);
  PF_PART2(local_39c,0) = (uint16_t)CONCAT11((char)(uVar16 >> 8),(char)(uVar16 >> 0x10));
  PF_PART3(local_39c,0) = CONCAT12((char)uVar16,PF_PART2(local_39c,0));
  iVar4 = uVar7 * 0x18 + 0x89;
  uVar16 = *(uint *)((int)reg_ecx + 0x348);
  if ((int)uVar16 < iVar4) goto LAB_10002ed0;
  if (bVar2) {
    if (bVar25) {
      uVar16 = thunk_terror_ui_colour(0x11);
      uVar14 = (undefined1)(uVar16 >> 0x10);
      local_388 = str_100039cd;
      goto LAB_100025a0;
    }
    local_388 = str_100039b6;
  }
  else {
    if (((*(uint *)(local_3bc + 0x10) & 2) == 0) || ((*(uint *)(local_3bc + 0x10) & 8) != 0)) {
      uVar16 = thunk_terror_ui_colour(0x25);
      uVar14 = (undefined1)(uVar16 >> 0x10);
      local_388 = str_100039be;
    }
    else {
      uVar16 = thunk_terror_ui_colour(0x11);
      uVar14 = (undefined1)(uVar16 >> 0x10);
      local_388 = str_100039c7;
    }
LAB_100025a0:
    PF_PART3(local_39c,0) = CONCAT21((ushort)uVar16 << 8 | (ushort)uVar16 >> 8,uVar14);
  }
  local_3b4 = uVar7 * 0x18 + 0x71;
  iVar18 = *(int *)((int)reg_ecx + 0x344);
  uVar16 = 0x1f;
  if ((uVar7 & 1) == 0) {
    uVar16 = 0x2c;
  }
  uVar16 = thunk_terror_ui_colour(uVar16);
  iVar20 = *(int *)((int)reg_ecx + 0x344);
  iVar9 = 0xc;
  if (iVar20 < 0xc) {
    iVar9 = iVar20;
  }
  iVar23 = iVar18 + -0xc;
  if (iVar23 < iVar20) {
    iVar20 = iVar23;
  }
  iVar23 = *(int *)((int)reg_ecx + 0x348);
  if (iVar18 < 0xc) {
    iVar20 = 0;
  }
  if (iVar23 <= iVar4) {
    iVar4 = iVar23;
  }
  if (local_3b4 < iVar23) {
    do {
      iVar18 = iVar9;
      if (iVar9 < iVar20) {
        do {
          if (((-1 < iVar18 && *(int *)((int)reg_ecx + 0x340) != 0) &&
              (iVar18 < *(int *)((int)reg_ecx + 0x344))) &&
             (local_3b4 < *(int *)((int)reg_ecx + 0x348))) {
            iVar23 = *(int *)((int)reg_ecx + 0x344) * local_3b4 + iVar18;
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar23 * 4) = (char)(uVar16 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + iVar23 * 4) = (char)(uVar16 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + iVar23 * 4) = (char)uVar16;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + iVar23 * 4) = 0xff;
          }
          iVar18 = iVar18 + 1;
        } while (iVar20 != iVar18);
      }
      local_3b4 = local_3b4 + 1;
    } while (local_3b4 != iVar4);
  }
  iVar4 = uVar7 * 0x18 + 0x77;
  puVar24 = (&PTR_str_10003ac4_10004034)[uVar7];
  uVar16 = thunk_terror_ui_colour(0x19);
  local_3a8 = CONCAT11((char)(uVar16 >> 8),(char)(uVar16 >> 0x10));
  uVar16 = CONCAT22(CONCAT11(uVar26,(char)uVar16),local_3a8);
  recovered_10002f80((int)reg_ecx,0x14,iVar4,(int)puVar24,uVar16,0xbe);
  uVar16 = CONCAT22(CONCAT11((char)(uVar16 >> 0x18),uStack_39a),PF_PART2(local_39c,0));
  recovered_10002f80((int)reg_ecx,0xdc,iVar4,(int)local_388,uVar16,0x70);
  uVar26 = (undefined1)(uVar16 >> 0x18);
  pcVar8 = &DAT_100039eb;
  if (bVar25) {
    pcVar8 = str_100039d4;
  }
  if (!bVar2) {
    pcVar8 = (char *)(local_3bc + 0x54);
  }
  uVar16 = thunk_terror_ui_colour(1);
  local_3a8 = CONCAT11((char)(uVar16 >> 8),(char)(uVar16 >> 0x10));
  pcVar10 = (char *)CONCAT22(CONCAT11(uVar26,(char)uVar16),local_3a8);
  pvVar27 = (void *)0xda;
  recovered_10002f80((int)reg_ecx,0x152,iVar4,(int)pcVar8,(uint)pcVar10,0xda);
  if (bVar2) {
    pcVar8 = str_10003bd0;
    goto LAB_10002800;
  }
  switch((uintptr_t)(*(undefined4 *)(local_3bc + 0xc))) {
  case 1:
    if (*(uint *)(local_3bc + 0x44) == 0 && *(uint *)(local_3bc + 0x48) == 0) {
      puVar24 = (undefined *)0x0;
      if (*(uint *)(local_3bc + 0x4c) == 0) {
        pcVar8 = str_10003c91;
LAB_10002ead:
        thunk_snprintf((char *)&local_37c,0x100,pcVar8,(void *)(local_3bc + 0xd4));
        uVar26 = (undefined1)((uint)pcVar8 >> 0x18);
        goto LAB_10002dc5;
      }
    }
    else {
      puVar24 = (undefined *)(*(uint *)(local_3bc + 0x48) / 1000);
    }
    uVar16 = *(uint *)(local_3bc + 0x44) / 1000;
    uVar15 = *(uint *)(local_3bc + 0x4c) / 1000;
    pcVar10 = (char *)(local_3bc + 0xd4);
    pcVar8 = str_10003cac;
    goto LAB_10002e19;
  case 2:
    uVar15 = *(uint *)(local_3bc + 0x38);
    if (uVar15 == 0) {
      arg4 = *(char **)(local_3bc + 0x44);
      uVar16 = *(uint *)(local_3bc + 0x48);
      uVar15 = *(uint *)(local_3bc + 0x4c);
      if (uVar16 == 0 && arg4 == (char *)0x0) {
        if (uVar15 == 0) {
          if (*(int *)(local_3bc + 0x50) == 0) {
LAB_10002ea3:
            pcVar8 = &DAT_10003917;
            goto LAB_10002ead;
          }
          uVar15 = 0;
        }
        uVar16 = 0;
      }
      pcVar8 = (char *)(uVar15 / 1000);
      pcVar10 = (char *)(*(uint *)(local_3bc + 0x50) / 1000);
      pvVar27 = (void *)(local_3bc + 0xd4);
      pcVar11 = str_10003cce;
    }
    else {
LAB_10002aee:
      uVar16 = local_3bc + 0xd4;
      arg4 = (char *)(uVar15 / 1000);
      pcVar11 = str_10003cc2;
    }
    break;
  case 3:
    uVar15 = *(uint *)(local_3bc + 0x3c);
    if (uVar15 != 0) goto LAB_10002aee;
    if ((((*(byte *)(local_3bc + 0x12) & 1) == 0) || ((*(byte *)(local_3bc + 0x15) & 4) == 0)) ||
       (*(int *)(local_3bc + 0x18) == 0)) {
      arg4 = *(char **)(local_3bc + 0x44);
      uVar16 = *(uint *)(local_3bc + 0x48);
      pcVar8 = *(char **)(local_3bc + 0x4c);
      if (uVar16 == 0 && arg4 == (char *)0x0) {
        if (pcVar8 == (char *)0x0) {
          if (*(int *)(local_3bc + 0x50) == 0) goto LAB_10002ea3;
          pcVar8 = (char *)0x0;
        }
        uVar16 = 0;
      }
      pvVar27 = (void *)(local_3bc + 0xd4);
      pcVar11 = str_10003d3f;
      pcVar10 = *(char **)(local_3bc + 0x50);
      break;
    }
    pvVar27 = (void *)(local_3bc + 0xd4);
    pcVar8 = str_10003d06;
    pcVar10 = *(char **)(local_3bc + 0x50);
    uVar15 = *(uint *)(local_3bc + 0x4c);
    puVar24 = *(undefined **)(local_3bc + 0x48);
    uVar16 = *(uint *)(local_3bc + 0x44);
    goto LAB_10002e19;
  case 4:
  case 0x14:
    if ((*(byte *)(local_3bc + 0x11) & 0x40) == 0) {
      pcVar8 = str_10003bdf;
LAB_10002bf0:
      pvVar27 = (void *)(local_3bc + 0xd4);
      goto LAB_10002800;
    }
    uVar16 = *(uint *)(local_3bc + 0x20);
    arg4 = (char *)((int)uVar16 / 1000);
    uVar15 = -uVar16;
    if ((int)-uVar16 < 0) {
      uVar15 = uVar16;
    }
    uVar16 = (uVar15 % 1000) / 100;
    pcVar8 = (char *)(local_3bc + 0xd4);
    pcVar11 = str_10003bfa;
    break;
  case 5:
    if ((*(byte *)(local_3bc + 0x11) & 1) == 0) {
      pvVar27 = (void *)(local_3bc + 0xd4);
      pcVar8 = str_10003bdf;
      goto LAB_10002800;
    }
    pcVar10 = (char *)(local_3bc + 0xd4);
    pcVar11 = str_10003c0b;
    pcVar8 = *(char **)(local_3bc + 0x2c);
    uVar16 = *(uint *)(local_3bc + 0x28);
    arg4 = *(char **)(local_3bc + 0x24);
    break;
  case 6:
    if ((*(uint *)(local_3bc + 0x10) & 2) == 0) {
      pvVar27 = (void *)(local_3bc + 0xd4);
      pcVar8 = str_10003bdf;
      goto LAB_10002800;
    }
    arg4 = str_10003c2a;
    if ((*(uint *)(local_3bc + 0x10) & 0x200) == 0) {
      arg4 = str_10003c34;
    }
    uVar16 = local_3bc + 0xd4;
    pcVar11 = str_10003c22;
    break;
  case 7:
    pcVar11 = str_10003c57;
    if ((*(uint *)(local_3bc + 0x10) & 0x800) == 0) {
      pcVar11 = &DAT_10003c5e;
    }
    arg4 = str_10003ac4;
    if ((short)*(uint *)(local_3bc + 0x10) < 0) {
      arg4 = pcVar11;
    }
    pcVar11 = str_10003c41;
    uVar16 = *(uint *)(local_3bc + 0x40);
    break;
  case 8:
    arg4 = *(char **)(local_3bc + 0x44);
    if ((arg4 == (char *)0x0) || (uVar16 = *(uint *)(local_3bc + 0x48), uVar16 == 0)) {
      pcVar8 = &DAT_10003917;
      goto LAB_10002bf0;
    }
    pcVar11 = str_10003c63;
    pcVar10 = *(char **)(local_3bc + 0x50);
    pcVar8 = *(char **)(local_3bc + 0x4c);
    goto LAB_10002b9e;
  case 9:
    if ((*(byte *)(local_3bc + 0x10) & 2) == 0) goto LAB_10002b30;
    pvVar27 = (void *)(local_3bc + 0xd4);
    pcVar11 = str_10003d7e;
    pcVar10 = *(char **)(local_3bc + 0x50);
    pcVar8 = *(char **)(local_3bc + 0x48);
    uVar16 = *(uint *)(local_3bc + 0x4c);
    goto LAB_10002bd7;
  default:
    if (*(char *)(local_3bc + 0xd4) == '\0') {
      puVar24 = &DAT_10003a21;
    }
    else {
      puVar24 = &DAT_10003fb0;
      if (*(char *)(local_3bc + 0x94) == '\0') {
        puVar24 = &DAT_10003a21;
      }
    }
    uVar16 = local_3bc + 0xd4;
    uVar15 = local_3bc + 0x94;
    pcVar8 = str_10003fa9;
LAB_10002e19:
    thunk_snprintf((char *)&local_37c,0x100,pcVar8,uVar16,(uint)puVar24,uVar15,(uint)pcVar10,
                       pvVar27);
    uVar26 = (undefined1)((uint)pcVar10 >> 0x18);
    goto LAB_10002dc5;
  case 0xc:
    if ((*(byte *)(local_3bc + 0x12) & 1) != 0) {
      uVar16 = *(uint *)(local_3bc + 0x44);
      thunk_snprintf((char *)&local_37c,0x100,str_10003d93,uVar16 >> 0x10 & 0xff,
                         uVar16 >> 8 & 0xff,uVar16 & 0xff,*(uint *)(local_3bc + 0x48),
                         *(uint *)(local_3bc + 0x4c),*(uint *)(local_3bc + 0x50),
                         (void *)(local_3bc + 0xd4));
      uVar26 = (undefined1)((uint)pcVar10 >> 0x18);
      goto LAB_10002dc5;
    }
    goto LAB_10002b30;
  case 0xd:
    if (((*(byte *)(local_3bc + 0x12) & 1) != 0) && ((*(byte *)(local_3bc + 0x15) & 4) != 0)) {
      pcVar11 = str_10003dd6;
      goto LAB_10002bcd;
    }
LAB_10002b30:
    pvVar27 = (void *)(local_3bc + 0xd4);
    pcVar8 = &DAT_10003917;
LAB_10002800:
    thunk_snprintf((char *)&local_37c,0x100,pcVar8,pvVar27);
    uVar26 = (undefined1)((uint)pcVar8 >> 0x18);
    goto LAB_10002dc5;
  case 0xe:
  case 0xf:
    if ((((*(byte *)(local_3bc + 0x12) & 1) == 0) || ((*(byte *)(local_3bc + 0x15) & 4) == 0)) ||
       (*(int *)(local_3bc + 0x18) == 0)) {
      pcVar11 = str_10003e0e;
    }
    else {
      pcVar11 = str_10003d06;
    }
    goto LAB_10002bcd;
  case 0x10:
    if ((((*(byte *)(local_3bc + 0x12) & 1) == 0) || ((*(byte *)(local_3bc + 0x15) & 4) == 0)) ||
       (*(int *)(local_3bc + 0x18) == 0)) {
      pcVar11 = str_10003e7d;
    }
    else {
      pcVar11 = str_10003e4b;
    }
LAB_10002bcd:
    pvVar27 = (void *)(local_3bc + 0xd4);
    pcVar10 = *(char **)(local_3bc + 0x50);
LAB_10002bd1:
    pcVar8 = *(char **)(local_3bc + 0x4c);
    uVar16 = *(uint *)(local_3bc + 0x48);
LAB_10002bd7:
    arg4 = *(char **)(local_3bc + 0x44);
    break;
  case 0x12:
    pcVar11 = str_10003ef0;
    goto LAB_100029d9;
  case 0x13:
    pvVar27 = (void *)(local_3bc + 0xd4);
    pcVar11 = str_10003f17;
    pcVar10 = *(char **)(local_3bc + 0x50);
    pcVar8 = *(char **)(local_3bc + 0x44);
    uVar16 = *(uint *)(local_3bc + 0x4c);
    arg4 = *(char **)(local_3bc + 0x48);
    break;
  case 0x15:
    pcVar11 = str_10003ebe;
LAB_100029d9:
    pcVar10 = (char *)(local_3bc + 0xd4);
    goto LAB_10002bd1;
  case 0x16:
    arg4 = *(char **)(local_3bc + 0x4c);
    if (*(int *)(local_3bc + 0x1c) != 4) {
      if (arg4 == (char *)0x0) {
        uVar26 = 0x10;
        thunk_snprintf((char *)&local_37c,0x100,&DAT_10003917,(void *)(local_3bc + 0xd4));
      }
      else {
        uVar16 = *(uint *)(local_3bc + 0x48);
        thunk_snprintf((char *)&local_37c,0x100,str_10003f7f,(void *)(local_3bc + 0xd4),
                           (uint)arg4,*(uint *)(local_3bc + 0x44),uVar16);
        uVar26 = (undefined1)(uVar16 >> 0x18);
      }
      goto LAB_10002dc5;
    }
    pcVar10 = str_10003f6e;
    if (*(int *)(local_3bc + 0x50) == 0) {
      pcVar10 = str_10003f77;
    }
    pcVar11 = str_10003f45;
    pcVar8 = *(char **)(local_3bc + 0x48);
    uVar16 = *(uint *)(local_3bc + 0x44);
LAB_10002b9e:
    pvVar27 = (void *)(local_3bc + 0xd4);
  }
  thunk_snprintf((char *)&local_37c,0x100,pcVar11,arg4,uVar16,pcVar8,pcVar10,pvVar27);
  uVar26 = (undefined1)((uint)pcVar10 >> 0x18);
LAB_10002dc5:
  if (bVar25) {
    uVar26 = 0x10;
    thunk_snprintf((char *)&local_37c,0x100,str_100039f0);
  }
  uVar16 = thunk_terror_ui_colour(1);
  local_3a8 = CONCAT11((char)(uVar16 >> 8),(char)(uVar16 >> 0x10));
  uVar16 = CONCAT22(CONCAT11(uVar26,(char)uVar16),local_3a8);
  recovered_10002f80((int)reg_ecx,0x236,iVar4,(int)&local_37c,uVar16,
                     *(int *)((int)reg_ecx + 0x344) - 0x244);
  uVar7 = uVar7 + 1;
  if (uVar7 == 0x17) {
    uVar16 = *(uint *)((int)reg_ecx + 0x348);
LAB_10002ed0:
    pvVar27 = *(void **)((int)reg_ecx + 0x340);
    uVar7 = *(uint *)((int)reg_ecx + 0x344);
    uVar15 = thunk_terror_ui_colour(0);
    thunk_terror_ui_window_present(reg_ecx,str_1000388e,pvVar27,uVar7,uVar16,uVar7 * 4,uVar15);
    return;
  }
  goto LAB_10002041;
}

#undef DAT_100038fc
#undef DAT_10003917
#undef DAT_10003921
#undef DAT_1000396f
#undef DAT_100039eb
#undef DAT_10003a21
#undef DAT_10003c5e
#undef DAT_10003fb0
#undef PTR_DAT_10004090
#undef PTR_str_10003a51_100040e8
#undef PTR_str_10003ac4_10004034
#undef str_1000388e
#undef str_1000389a
#undef str_100038ce
#undef str_100038d6
#undef str_100038e0
#undef str_100038ec
#undef str_100038f4
#undef str_100038ff
#undef str_10003907
#undef str_1000391a
#undef str_10003926
#undef str_10003952
#undef str_100039b6
#undef str_100039be
#undef str_100039c7
#undef str_100039cd
#undef str_100039d4
#undef str_100039f0
#undef str_10003a22
#undef str_10003ac4
#undef str_10003bd0
#undef str_10003bdf
#undef str_10003bfa
#undef str_10003c0b
#undef str_10003c22
#undef str_10003c2a
#undef str_10003c34
#undef str_10003c41
#undef str_10003c57
#undef str_10003c63
#undef str_10003c91
#undef str_10003cac
#undef str_10003cc2
#undef str_10003cce
#undef str_10003d06
#undef str_10003d3f
#undef str_10003d7e
#undef str_10003d93
#undef str_10003dd6
#undef str_10003e0e
#undef str_10003e4b
#undef str_10003e7d
#undef str_10003ebe
#undef str_10003ef0
#undef str_10003f17
#undef str_10003f45
#undef str_10003f6e
#undef str_10003f77
#undef str_10003f7f
#undef str_10003fa9
#undef local_3b4
#undef local_3a8
#undef local_3a4
#undef local_39c
#undef local_390
#undef local_388
#undef local_380
#undef local_37c
#undef local_37a
#undef local_27c
#undef local_264
#undef local_244
#undef local_214
#undef local_114
#undef uStack_39a
#undef local_3c0
#undef local_3bc

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_18 (*(uint *)(pf_stack_frame + 56))
#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_2c (*(void * (*)[11])(pf_stack_frame + 36))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f80
 */

void recovered_10002f80(int reg_ecx,int reg_edx,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;

  if (((param_4 != 0 && reg_ecx != 0) && (0 < (int)param_6)) && (*(int *)(reg_ecx + 0x340) != 0)) {
    thunk_memset(local_2c,0,0x18);
    iVar8 = Ram00280800;
    if (((((iVar8 == 0x50414d57) && (iVar8 = Ram00280804, iVar8 != 0)) &&
         ((uVar3 = Ram00280808, 0xb < uVar3 &&
          ((uVar3 = Ram00280808, 0x17b < uVar3 &&
           (pcVar2 = (code *)UINT_00280978, pcVar2 != (code *)0x0)))))) &&
        (uVar3 = (*pcVar2)((char *)param_4,0xffffffff,1,
                           (param_5 >> 0x10 & 0xff) * 0x100 + 0xff +
                           ((param_5 >> 8 & 0xff) << 0x10 | param_5 << 0x18),local_2c), uVar3 != 0))
       && (local_2c[0] != (void *)0x0)) {
      if (local_18 < local_20 * 4) {
        iVar8 = Ram00280800;
      }
      else {
        if (local_20 < param_6) {
          param_6 = local_20;
        }
        if (local_1c != 0) {
          uVar3 = 0;
          local_40 = param_3;
          do {
            if ((-1 < (int)(uVar3 + param_3)) &&
               ((int)(uVar3 + param_3) < *(int *)(reg_ecx + 0x348) && param_6 != 0)) {
              iVar8 = (int)local_2c[0] + 3;
              uVar9 = param_6;
              iVar10 = reg_edx;
              do {
                if ((-1 < iVar10) && (iVar10 < *(int *)(reg_ecx + 0x344))) {
                  iVar4 = local_18 * uVar3;
                  uVar7 = (uint)*(byte *)(iVar8 + iVar4);
                  if (uVar7 != 0) {
                    iVar6 = *(int *)(reg_ecx + 0x344) * local_40 + iVar10;
                    uVar5 = uVar7 ^ 0xff;
                    iVar1 = *(int *)(reg_ecx + 0x340);
                    *(char *)(iVar1 + iVar6 * 4) =
                         (char)((ulonglong)
                                (*(byte *)(iVar8 + -3 + iVar4) * uVar7 + 0x7f +
                                *(byte *)(iVar1 + iVar6 * 4) * uVar5) * 0x1010102 >> 0x20);
                    *(char *)(iVar1 + 1 + iVar6 * 4) =
                         (char)((ulonglong)
                                (*(byte *)(iVar8 + -2 + iVar4) * uVar7 + 0x7f +
                                *(byte *)(iVar1 + 1 + iVar6 * 4) * uVar5) * 0x1010102 >> 0x20);
                    *(char *)(iVar1 + 2 + iVar6 * 4) =
                         (char)((ulonglong)
                                (*(byte *)(iVar8 + -1 + iVar4) * uVar7 + 0x7f +
                                *(byte *)(iVar1 + 2 + iVar6 * 4) * uVar5) * 0x1010102 >> 0x20);
                    *(undefined1 *)(iVar1 + 3 + iVar6 * 4) = 0xff;
                  }
                }
                iVar10 = iVar10 + 1;
                iVar8 = iVar8 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar3 = uVar3 + 1;
            local_40 = local_40 + 1;
          } while (uVar3 < local_1c);
        }
        iVar8 = Ram00280800;
      }
      if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00280804, iVar8 != 0)) &&
          (uVar3 = Ram00280808, 0xb < uVar3)) &&
         ((uVar3 = Ram00280808, 0x53 < uVar3 &&
          (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
        (*pcVar2)(local_2c[0]);
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_18
#undef local_40
#undef local_2c
#undef local_20
#undef local_1c

#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
#define local_24 (*(undefined2 *)(pf_stack_frame + 60))
#define in_stack_ffffffb8 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003240
 */

void recovered_10003240(int reg_ecx,int reg_edx,int param_3,char param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar8;
  undefined1 uVar7;
  undefined1 uVar12;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar13;
  undefined1 uVar14;

  uVar14 = (undefined1)((uint)in_stack_ffffffb8 >> 0x18);
  iVar9 = reg_edx * 0x68;
  uVar3 = 2;
  if (param_4 != '\0') {
    uVar3 = 0x2b;
  }
  uVar2 = iVar9 + 0x12;
  uVar1 = thunk_terror_ui_colour(uVar3);
  uVar3 = *(uint *)(reg_ecx + 0x344);
  uVar4 = uVar3;
  if ((int)uVar2 < (int)uVar3) {
    uVar4 = uVar2;
  }
  if (reg_edx < 0) {
    uVar4 = 0;
  }
  uVar5 = iVar9 + 0x70;
  if ((int)uVar5 < (int)uVar3) {
    uVar3 = uVar5;
  }
  if (reg_edx < -1) {
    uVar3 = 0;
  }
  iVar13 = *(int *)(reg_ecx + 0x348);
  iVar10 = 0x5d;
  if (iVar13 < 0x5d) {
    iVar10 = iVar13;
  }
  if (0x3f < iVar13) {
    iVar13 = 0x3f;
    do {
      uVar11 = uVar4;
      if ((int)uVar4 < (int)uVar3) {
        do {
          if (((-1 < (int)uVar11 && *(int *)(reg_ecx + 0x340) != 0) &&
              ((int)uVar11 < *(int *)(reg_ecx + 0x344))) && (iVar13 < *(int *)(reg_ecx + 0x348))) {
            iVar6 = *(int *)(reg_ecx + 0x344) * iVar13 + uVar11;
            *(char *)(*(int *)(reg_ecx + 0x340) + iVar6 * 4) = (char)(uVar1 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + 1 + iVar6 * 4) = (char)(uVar1 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + 2 + iVar6 * 4) = (char)uVar1;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 3 + iVar6 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar10);
  }
  uVar3 = 0x14;
  if (param_4 != '\0') {
    uVar3 = 0x39;
  }
  uVar4 = thunk_terror_ui_colour(uVar3);
  local_38 = *(uint *)(reg_ecx + 0x344);
  uVar3 = local_38;
  if ((int)uVar2 < (int)local_38) {
    uVar3 = uVar2;
  }
  if (reg_edx < 0) {
    uVar3 = 0;
  }
  uVar1 = local_38;
  if ((int)uVar5 < (int)local_38) {
    uVar1 = uVar5;
  }
  if (reg_edx < -1) {
    uVar1 = 0;
  }
  local_40 = *(uint *)(reg_ecx + 0x348);
  uVar7 = (undefined1)uVar4;
  uVar12 = (undefined1)(uVar4 >> 8);
  uVar8 = (undefined1)(uVar4 >> 0x10);
  if ((int)local_40 < 0x40) {
    local_34 = local_40;
  }
  else {
    if ((int)uVar3 < (int)uVar1) {
      do {
        if (((-1 < (int)uVar3 && *(int *)(reg_ecx + 0x340) != 0) &&
            ((int)uVar3 < *(int *)(reg_ecx + 0x344))) && (0x3f < *(int *)(reg_ecx + 0x348))) {
          iVar13 = *(int *)(reg_ecx + 0x344) * 0xfc;
          *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + uVar3 * 4) = uVar8;
          *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + 1 + uVar3 * 4) = uVar12;
          *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + 2 + uVar3 * 4) = uVar7;
          *(undefined1 *)(iVar13 + *(int *)(reg_ecx + 0x340) + 3 + uVar3 * 4) = 0xff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
      local_38 = *(uint *)(reg_ecx + 0x344);
      uVar3 = local_38;
      if ((int)uVar2 < (int)local_38) {
        uVar3 = uVar2;
      }
      if (reg_edx < 0) {
        uVar3 = 0;
      }
      uVar1 = local_38;
      if ((int)uVar5 < (int)local_38) {
        uVar1 = uVar5;
      }
      if (reg_edx < -1) {
        uVar1 = 0;
      }
      local_40 = *(uint *)(reg_ecx + 0x348);
    }
    local_34 = 0x5d;
    if ((int)local_40 < 0x5d) {
      local_34 = local_40;
    }
    else {
      if ((int)uVar3 < (int)uVar1) {
        do {
          if (((-1 < (int)uVar3 && *(int *)(reg_ecx + 0x340) != 0) &&
              ((int)uVar3 < *(int *)(reg_ecx + 0x344))) && (0x5c < *(int *)(reg_ecx + 0x348))) {
            iVar13 = *(int *)(reg_ecx + 0x344) * 0x170;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + uVar3 * 4) = uVar8;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + 1 + uVar3 * 4) = uVar12;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + 2 + uVar3 * 4) = uVar7;
            *(undefined1 *)(iVar13 + *(int *)(reg_ecx + 0x340) + 3 + uVar3 * 4) = 0xff;
          }
          uVar3 = uVar3 + 1;
        } while (uVar1 != uVar3);
        local_38 = *(uint *)(reg_ecx + 0x344);
        local_40 = *(uint *)(reg_ecx + 0x348);
        local_34 = 0x5d;
        if ((int)local_40 < 0x5d) {
          local_34 = local_40;
        }
      }
      if ((int)local_38 <= (int)uVar2) {
        uVar2 = local_38;
      }
      uVar3 = 0;
      if (-1 < reg_edx) {
        uVar3 = uVar2;
      }
    }
  }
  uVar2 = 0x3f;
  if ((int)local_40 < 0x3f) {
    uVar2 = local_40;
  }
  uVar4 = iVar9 + 0x13U;
  if ((int)local_38 <= (int)(iVar9 + 0x13U)) {
    uVar4 = local_38;
  }
  if (reg_edx < 0) {
    uVar4 = 0;
  }
  if ((int)uVar2 < (int)local_34) {
    do {
      uVar1 = uVar3;
      if ((int)uVar3 < (int)uVar4) {
        do {
          if (((-1 < (int)(uVar1 | uVar2) && *(int *)(reg_ecx + 0x340) != 0) &&
              ((int)uVar1 < *(int *)(reg_ecx + 0x344))) && ((int)uVar2 < *(int *)(reg_ecx + 0x348)))
          {
            iVar13 = *(int *)(reg_ecx + 0x344) * uVar2 + uVar1;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 * 4) = uVar8;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 1 + iVar13 * 4) = uVar12;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 2 + iVar13 * 4) = uVar7;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 3 + iVar13 * 4) = 0xff;
          }
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != local_34);
    local_38 = *(uint *)(reg_ecx + 0x344);
    uVar3 = *(uint *)(reg_ecx + 0x348);
    uVar2 = 0x3f;
    if ((int)uVar3 < 0x3f) {
      uVar2 = uVar3;
    }
    local_34 = 0x5d;
    if ((int)uVar3 < 0x5d) {
      local_34 = uVar3;
    }
  }
  uVar3 = iVar9 + 0x6fU;
  if ((int)local_38 <= (int)(iVar9 + 0x6fU)) {
    uVar3 = local_38;
  }
  if ((int)uVar5 < (int)local_38) {
    local_38 = uVar5;
  }
  if (reg_edx < -1) {
    uVar3 = 0;
    local_38 = 0;
  }
  if ((int)uVar2 < (int)local_34) {
    do {
      uVar4 = uVar3;
      if ((int)uVar3 < (int)local_38) {
        do {
          if (((-1 < (int)(uVar4 | uVar2) && *(int *)(reg_ecx + 0x340) != 0) &&
              ((int)uVar4 < *(int *)(reg_ecx + 0x344))) && ((int)uVar2 < *(int *)(reg_ecx + 0x348)))
          {
            iVar13 = *(int *)(reg_ecx + 0x344) * uVar2 + uVar4;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 * 4) = uVar8;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 1 + iVar13 * 4) = uVar12;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 2 + iVar13 * 4) = uVar7;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 3 + iVar13 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (local_38 != uVar4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != local_34);
  }
  uVar3 = 1;
  if (param_4 != '\0') {
    uVar3 = 0xe;
  }
  uVar3 = thunk_terror_ui_colour(uVar3);
  local_24 = CONCAT11((char)(uVar3 >> 8),(char)(uVar3 >> 0x10));
  recovered_10002f80(reg_ecx,iVar9 + 0x1d,0x47,param_3,
                     CONCAT22(CONCAT11(uVar14,(char)uVar3),local_24),0x4c);
  return;
}

#undef local_40
#undef local_38
#undef local_34
#undef local_24
#undef in_stack_ffffffb8
