/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef UINT_82010828
#define UINT_82010828 (*(uint *)(0x82010828U))
#undef str_10001d9a
#define str_10001d9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14eU)))
#undef str_10001db8
#define str_10001db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#define local_932c (*(uint *)(pf_stack_frame + 116))
#define local_9300 (*(uint *)(pf_stack_frame + 160))
#define aiStack_9384 (*(int (*)[9441])(pf_stack_frame + 28))
#define auStack_9340 (*(undefined1 (*)[37696])(pf_stack_frame + 96))
#define auStack_90c8 (*(undefined1 (*)[37064])(pf_stack_frame + 728))
#define uStack_90c4 (*(undefined8 *)(pf_stack_frame + 732))
#define lStack_9098 (*(long *)(pf_stack_frame + 776))
#define lStack_8d78 (*(long *)(pf_stack_frame + 1576))
#define uStack_8d70 (*(undefined8 *)(pf_stack_frame + 1584))
#define iStack_8d68 (*(int *)(pf_stack_frame + 1592))
#define iStack_8d64 (*(int *)(pf_stack_frame + 1596))
#define lStack_b0 (*(long *)(pf_stack_frame + 37616))
#define abStack_a4 (*(byte (*)[164])(pf_stack_frame + 37628))
#define bStack_9c (*(byte *)(pf_stack_frame + 37636))
#define iStack_94 (*(int *)(pf_stack_frame + 37644))
#define iStack_90 (*(int *)(pf_stack_frame + 37648))
#define iStack_8c (*(int *)(pf_stack_frame + 37652))
#define uStack_88 (*(undefined4 *)(pf_stack_frame + 37656))
#define uStack_84 (*(undefined4 *)(pf_stack_frame + 37660))
#define iStack_80 (*(int *)(pf_stack_frame + 37664))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

int recovered_100005f0(int argc,char **argv)

{
  unsigned char pf_stack_frame[37824] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  thunk_memset(auStack_90c8,0,0x9020);
  thunk_pf_app_window_spec(auStack_9340,str_10001db8,1000,0x2b2);
  local_932c = thunk_terror_ui_colour(0);
  local_9300 = local_9300 | 1;
  uVar5 = thunk_terror_ui_window_open(auStack_90c8,auStack_9340);
  if (uVar5 != 0) {
    lStack_8d78 = lStack_9098;
    uStack_8d70 = uStack_90c4;
    if (lStack_9098 != 0) {
      recovered_10000898((long)auStack_90c8);
      recovered_10000a34((long)auStack_90c8);
      do {
        iVar1 = (int)uStack_8d70;
        iVar2 = PF_PART4(uStack_8d70, 4);
        terror_ui_window_begin_frame(auStack_90c8);
        thunk_memset(auStack_9340,0,0x278);
        uVar5 = thunk_terror_ui_window_query(auStack_90c8,auStack_9340);
        if (((uVar5 == 0) || (bVar3 = thunk_terror_ui_window_info_requests_close(auStack_9340), (bVar3 & 1) != 0)) ||
           (uVar5 = thunk_terror_ui_window_sync_buffer(auStack_90c8,auStack_9340), uVar5 == 0)) {
          thunk_terror_ui_window_close(auStack_90c8);
          if (lStack_b0 == 0) {
            return 0;
          }
          recovered_10001554(lStack_b0);
          return 0;
        }
        lStack_8d78 = lStack_9098;
        uStack_8d70 = uStack_90c4;
        thunk_memset(abStack_a4,0,0x1c);
        uVar5 = thunk_terror_ui_window_pointer_state(auStack_90c8,abStack_a4);
        if (((uVar5 != 0) && ((abStack_a4[0] >> 1 & 1) != 0)) &&
           (((bStack_9c & 1) != 0 && (iStack_94 != iStack_8d64)))) {
          iStack_8d64 = iStack_94;
          iVar6 = 0x70;
          for (iVar7 = 0; iVar7 != 5; iVar7 = iVar7 + 1) {
            if (((iVar6 + -0x5e <= iStack_90 && iVar6 != iStack_90) &&
                (iStack_90 < iVar6 + -0x5e || iStack_90 <= iVar6)) && iStack_8c - 0x3fU < 0x1e) {
              thunk_memset(&uStack_88,0,0x38);
              uStack_88 = 0x38;
              if (iVar7 == 0) {
                uStack_84 = 2;
              }
              else {
                uStack_84 = 1;
                iStack_80 = iVar7;
              }
              bVar4 = recovered_1000159c(0x1e0);
              if (bVar4) {
                uVar5 = UINT_820109e0;
                if (uVar5 != 0) {
                  (*(code *)(ulong)uVar5)(0,&uStack_88);
                }
              }
              recovered_10000898((long)auStack_90c8);
              recovered_10000a34((long)auStack_90c8);
              break;
            }
            iVar6 = iVar6 + 0x68;
          }
        }
        thunk_memset(aiStack_9384,0,0x44);
        bVar4 = recovered_1000159c(0x108);
        if (bVar4) {
          uVar5 = UINT_82010908;
          if (uVar5 != 0) {
            (*(code *)(ulong)uVar5)(aiStack_9384);
          }
        }
        if (iStack_8d68 == 0) {
LAB_100007f8:
          iStack_8d68 = aiStack_9384[0];
          recovered_10000898((long)auStack_90c8);
          recovered_10000a34((long)auStack_90c8);
        }
        else if ((8 < (uint)(aiStack_9384[0] - iStack_8d68) || (int)uStack_8d70 != iVar1) ||
                 PF_PART4(uStack_8d70, 4) != iVar2) goto LAB_100007f8;
        bVar4 = recovered_1000159c(0x9c);
        if (bVar4) {
          uVar5 = UINT_8201089c;
          if (uVar5 != 0) {
            (*(code *)(ulong)uVar5)();
          }
        }
      } while( true );
    }
    thunk_terror_ui_window_close(auStack_90c8);
  }
  bVar4 = recovered_1000159c(0x28);
  if (bVar4) {
    uVar5 = UINT_82010828;
    if (uVar5 != 0) {
      (*(code *)(ulong)uVar5)(str_10001d9a);
    }
  }
  return 1;
}

#undef UINT_82010828
#undef str_10001d9a
#undef str_10001db8
#undef local_932c
#undef local_9300
#undef aiStack_9384
#undef auStack_9340
#undef auStack_90c8
#undef uStack_90c4
#undef lStack_9098
#undef lStack_8d78
#undef uStack_8d70
#undef iStack_8d68
#undef iStack_8d64
#undef lStack_b0
#undef abStack_a4
#undef bStack_9c
#undef iStack_94
#undef iStack_90
#undef iStack_8c
#undef uStack_88
#undef uStack_84
#undef iStack_80

#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
#undef UINT_820109d8
#define UINT_820109d8 (*(uint *)(0x820109d8U))
#undef UINT_820109dc
#define UINT_820109dc (*(uint *)(0x820109dcU))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000898
 */

void recovered_10000898(long param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  void *dst;
  undefined8 uVar5;
  ulong size;
  uint uVar6;

  bVar2 = recovered_1000159c(0x1d8);
  uVar3 = (uint)bVar2;
  if (bVar2) {
    uVar3 = UINT_820109d8;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)uVar3)();
    }
  }
  local_58 = 0;
  if (0x47 < uVar3) {
    uVar3 = 0x48;
  }
  thunk_memset((void *)(param_1 + 0x378),0,36000);
  *(undefined4 *)(param_1 + 0x368) = 0;
  for (uVar6 = 0; uVar3 != uVar6; uVar6 = uVar6 + 1) {
    uVar4 = *(uint *)(param_1 + 0x368);
    bVar2 = recovered_1000159c(0x1dc);
    if (bVar2) {
      uVar1 = UINT_820109dc;
      if ((uVar1 != 0) &&
         (uVar4 = (*(code *)(ulong)uVar1)(uVar6,(void *)(param_1 + 0x378 + (ulong)uVar4 * 500)),
         uVar4 != 0)) {
        *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
      }
    }
  }
  recovered_100015e8(0,0,(undefined4 *)((long)&local_58 + 4));
  uVar3 = PF_PART4(local_58, 4);
  *(uint *)(param_1 + 0x370) = PF_PART4(local_58, 4);
  if (PF_PART4(local_58, 4) != 0) {
    if (*(uint *)(param_1 + 0x374) < PF_PART4(local_58, 4)) {
      bVar2 = recovered_1000159c(0x4c);
      if (bVar2) {
        uVar4 = UINT_8201084c;
        uVar6 = 0;
        if (uVar4 == 0) goto LAB_10000a14;
        size = (ulong)uVar3 * 0x571;
        dst = (*(code *)(ulong)uVar4)(size);
        if (dst != (void *)0x0) {
          thunk_memset(dst,0,size);
          if (*(long *)(param_1 + 0x9018) != 0) {
            recovered_10001554(*(long *)(param_1 + 0x9018));
          }
          *(void **)(param_1 + 0x9018) = dst;
          *(uint *)(param_1 + 0x374) = uVar3;
          goto LAB_100009d8;
        }
      }
    }
    else {
      dst = *(void **)(param_1 + 0x9018);
      size = (ulong)*(uint *)(param_1 + 0x374) * 0x571;
LAB_100009d8:
      thunk_memset(dst,0,size);
      uVar5 = recovered_100015e8(*(undefined8 *)(param_1 + 0x9018),(ulong)*(uint *)(param_1 + 0x374)
                                 ,(undefined4 *)&local_58);
      if ((int)uVar5 != 0) {
        *(uint *)(param_1 + 0x370) = (uint)local_58;
        uVar6 = (uint)local_58;
        if (*(uint *)(param_1 + 0x374) <= (uint)local_58) {
          uVar6 = *(uint *)(param_1 + 0x374);
        }
        goto LAB_10000a14;
      }
    }
  }
  uVar6 = 0;
LAB_10000a14:
  *(uint *)(param_1 + 0x36c) = uVar6;
  return;
}

#undef UINT_8201084c
#undef UINT_820109d8
#undef UINT_820109dc
#undef local_58

#undef DAT_10001e26
#define DAT_10001e26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef DAT_10001e41
#define DAT_10001e41 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef DAT_10001e4b
#define DAT_10001e4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_10001e99
#define DAT_10001e99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24dU)))
#undef DAT_10001e9e
#define DAT_10001e9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x252U)))
#undef DAT_10001eaa
#define DAT_10001eaa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10001f4b
#define DAT_10001f4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ffU)))
#undef DAT_10002188
#define DAT_10002188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53cU)))
#undef DAT_100024da
#define DAT_100024da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88eU)))
#undef PTR_DAT_100040c0
#define PTR_DAT_100040c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef PTR_DAT_10004178
#define PTR_DAT_10004178 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x252cU)))
#undef PTR_str_10001fee_10004008
#define PTR_str_10001fee_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x23bcU)))
#undef str_10001db8
#define str_10001db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#undef str_10001dc4
#define str_10001dc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x178U)))
#undef str_10001df8
#define str_10001df8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1acU)))
#undef str_10001e00
#define str_10001e00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10001e0a
#define str_10001e0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1beU)))
#undef str_10001e16
#define str_10001e16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caU)))
#undef str_10001e1e
#define str_10001e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d2U)))
#undef str_10001e29
#define str_10001e29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_10001e31
#define str_10001e31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_10001e44
#define str_10001e44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f8U)))
#undef str_10001e50
#define str_10001e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204U)))
#undef str_10001e7c
#define str_10001e7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x230U)))
#undef str_10001ea3
#define str_10001ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x257U)))
#undef str_10001eae
#define str_10001eae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_10001ee0
#define str_10001ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_10001ee8
#define str_10001ee8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_10001ef1
#define str_10001ef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#undef str_10001ef7
#define str_10001ef7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2abU)))
#undef str_10001efe
#define str_10001efe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10001f1a
#define str_10001f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ceU)))
#undef str_10001f4c
#define str_10001f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x300U)))
#undef str_10001fee
#define str_10001fee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_100020fa
#define str_100020fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#undef str_10002109
#define str_10002109 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_10002124
#define str_10002124 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d8U)))
#undef str_10002135
#define str_10002135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e9U)))
#undef str_1000214c
#define str_1000214c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x500U)))
#undef str_10002154
#define str_10002154 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x508U)))
#undef str_1000215e
#define str_1000215e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_1000216b
#define str_1000216b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51fU)))
#undef str_10002181
#define str_10002181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x535U)))
#undef str_1000218d
#define str_1000218d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
#undef str_100021bb
#define str_100021bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56fU)))
#undef str_100021d6
#define str_100021d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58aU)))
#undef str_100021f8
#define str_100021f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5acU)))
#undef str_10002230
#define str_10002230 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_10002269
#define str_10002269 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_100022a8
#define str_100022a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65cU)))
#undef str_100022bd
#define str_100022bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x671U)))
#undef str_10002300
#define str_10002300 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b4U)))
#undef str_10002338
#define str_10002338 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ecU)))
#undef str_10002375
#define str_10002375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x729U)))
#undef str_100023a7
#define str_100023a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75bU)))
#undef str_100023e8
#define str_100023e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79cU)))
#undef str_1000241a
#define str_1000241a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ceU)))
#undef str_10002441
#define str_10002441 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f5U)))
#undef str_1000246f
#define str_1000246f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x823U)))
#undef str_10002498
#define str_10002498 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84cU)))
#undef str_100024a1
#define str_100024a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x855U)))
#undef str_100024a9
#define str_100024a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85dU)))
#define uStack_3e8 (*(uint *)(pf_stack_frame + 56))
#define uStack_3e0 (*(uint *)(pf_stack_frame + 64))
#define uStack_3d8 (*(uint *)(pf_stack_frame + 72))
#define acStack_3d0 (*(char (*)[976])(pf_stack_frame + 80))
#define acStack_2d0 (*(char (*)[720])(pf_stack_frame + 336))
#define acStack_2b8 (*(char (*)[696])(pf_stack_frame + 360))
#define acStack_288 (*(char (*)[648])(pf_stack_frame + 408))
#define acStack_268 (*(char (*)[616])(pf_stack_frame + 440))
#define acStack_168 (*(char (*)[360])(pf_stack_frame + 696))
#define in_stack_fffffffffffffbf0 (*(ulonglong *)(pf_stack_frame + 16))
#define in_stack_fffffffffffffbf8 (*(ulong *)(pf_stack_frame + 24))
#define in_stack_fffffffffffffc00 (*(ulonglong *)(pf_stack_frame + 32))
#define in_stack_fffffffffffffc08 (*(ulonglong *)(pf_stack_frame + 40))
#define in_stack_fffffffffffffc10 (*(ulong *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a34
 */

void recovered_10000a34(long param_1)

{
  unsigned char pf_stack_frame[1088] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *arg3;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *arg6;
  ulong uVar16;
  void *pixels;
  byte *pbVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  uint unaff_w27;

  lVar10 = recovered_10001658(param_1,0x16);
  if (lVar10 == 0) {
    uVar9 = 0;
    iVar22 = 1;
  }
  else {
    uVar9 = *(byte *)(lVar10 + 0x11) >> 5 & 1;
    iVar22 = *(int *)(lVar10 + 0x1c);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x358);
  uVar7 = recovered_100017e4(0);
  recovered_100016f4(param_1,0,uVar18,uVar7 & 0xffffff);
  uVar7 = *(uint *)(param_1 + 0x358);
  uVar8 = recovered_100017e4(0x2d);
  recovered_100016f4(param_1,0,(ulong)uVar7 | 0x6c00000000,uVar8 & 0xffffff);
  if (iVar22 - 1U < 4) {
    arg3 = (&PTR_DAT_10004178)[iVar22 - 1U];
  }
  else {
    arg3 = &DAT_10001e99;
  }
  pcVar11 = str_10001df8;
  if (uVar9 == 0) {
    pcVar11 = str_10001e00;
  }
  pcVar14 = (char *)(ulong)*(uint *)(param_1 + 0x368);
  arg6 = (char *)(ulong)*(uint *)(param_1 + 0x370);
  thunk_snprintf(acStack_168,0x100,str_10001dc4,arg3,pcVar11,*(uint *)(param_1 + 0x368),
                     *(uint *)(param_1 + 0x370));
  uVar7 = recovered_100017e4(1);
  recovered_10001808(param_1,0x12,0xd,(long)acStack_168,uVar7 & 0xffffff,
                     *(int *)(param_1 + 0x358) - 0x24);
  if (lVar10 == 0) {
    pcVar12 = str_10001e7c;
  }
  else {
    if ((*(byte *)(lVar10 + 0x11) >> 6 & 1) == 0) {
      pcVar14 = str_10001e16;
    }
    else {
      uVar8 = *(uint *)(lVar10 + 0x20);
      arg3 = (char *)(long)((int)uVar8 / 1000);
      uVar7 = -uVar8;
      if (-1 < (int)uVar8) {
        uVar7 = uVar8;
      }
      pcVar11 = (char *)(ulong)((uVar7 % 1000) / 100);
      pcVar14 = str_10001e0a;
    }
    thunk_snprintf(acStack_288,0x20,pcVar14,(ulonglong)arg3,(ulonglong)pcVar11);
    uVar7 = *(uint *)(lVar10 + 0x10);
    if ((uVar7 >> 8 & 1) == 0) {
      if ((uVar7 >> 9 & 1) == 0) {
        pcVar14 = str_10001e16;
      }
      else {
        pcVar14 = str_10001e31;
      }
    }
    else {
      pcVar11 = str_10001e29;
      if ((uVar7 & 0x200) != 0) {
        pcVar11 = &DAT_10001e26;
      }
      arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x24);
      pcVar14 = str_10001e1e;
    }
    thunk_snprintf(acStack_2b8,0x30,pcVar14,(uint)arg3,pcVar11);
    if ((*(uint *)(lVar10 + 0x10) >> 0xf & 1) == 0) {
      pcVar11 = str_10001e16;
    }
    else {
      arg3 = &DAT_10001e4b;
      if ((*(uint *)(lVar10 + 0x10) & 0x800) != 0) {
        arg3 = str_10001e44;
      }
      pcVar11 = &DAT_10001e41;
    }
    thunk_snprintf(acStack_2d0,0x18,pcVar11,arg3);
    arg6 = (char *)(lVar10 + 0xd4);
    pcVar14 = acStack_2d0;
    pcVar11 = acStack_2b8;
    arg3 = acStack_288;
    pcVar12 = str_10001e50;
  }
  thunk_snprintf(acStack_268,0x100,pcVar12,arg3,pcVar11,pcVar14,arg6);
  uVar7 = recovered_100017e4(0x31);
  recovered_10001808(param_1,0x12,0x23,(long)acStack_268,uVar7 & 0xffffff,
                     *(int *)(param_1 + 0x358) - 0x24);
  recovered_100019c8((void *)param_1,0,&DAT_10001e99,uVar9);
  uVar9 = uVar9 ^ 1;
  uVar7 = 0;
  if (iVar22 == 1) {
    uVar7 = uVar9;
  }
  uVar16 = 1;
  recovered_100019c8((void *)param_1,1,&DAT_10001e9e,uVar7);
  uVar7 = 0;
  if (iVar22 == 2) {
    uVar7 = uVar9;
  }
  recovered_100019c8((void *)param_1,2,str_10001ea3,uVar7);
  uVar7 = 0;
  if (iVar22 == 3) {
    uVar7 = uVar9;
  }
  recovered_100019c8((void *)param_1,3,&DAT_10001eaa,uVar7);
  recovered_100019c8((void *)param_1,4,str_10001eae,(uint)(iVar22 == 4));
  iVar22 = *(int *)(param_1 + 0x358);
  uVar9 = recovered_100017e4(0x2a);
  recovered_100016f4(param_1,0x710000000c,(ulong)(iVar22 - 0x18) | 0x1800000000,uVar9 & 0xffffff);
  uVar9 = recovered_100017e4(0x19);
  recovered_10001808(param_1,0x14,0x77,((uintptr_t)pf_module_state + 0x268U),uVar9 & 0xffffff,0xb8);
  uVar9 = recovered_100017e4(0x19);
  recovered_10001808(param_1,0xdc,0x77,((uintptr_t)pf_module_state + 0x270U),uVar9 & 0xffffff,0x70);
  uVar9 = recovered_100017e4(0x19);
  recovered_10001808(param_1,0x152,0x77,((uintptr_t)pf_module_state + 0x277U),uVar9 & 0xffffff,0xda);
  uVar9 = recovered_100017e4(0x19);
  recovered_10001808(param_1,0x236,0x77,((uintptr_t)pf_module_state + 0x288U),uVar9 & 0xffffff,
                     *(int *)(param_1 + 0x358) - 0x244);
  for (; uVar16 != 0x17; uVar16 = uVar16 + 1) {
    lVar10 = recovered_10001658(param_1,(int)uVar16);
    if (lVar10 == 0) {
      pbVar17 = (&PTR_DAT_100040c0)[uVar16];
      uVar23 = (ulong)*(uint *)(param_1 + 0x36c);
      lVar24 = 0x171;
      for (uVar20 = 0; uVar23 != uVar20; uVar20 = uVar20 + 1) {
        lVar19 = *(long *)(param_1 + 0x9018);
        lVar1 = lVar19 + lVar24;
        cVar5 = recovered_10001ad4((byte *)(lVar1 + -0x80),(byte *)str_10001f4c);
        if (cVar5 != '\0') {
          bVar6 = recovered_10001ad4((byte *)(lVar1 + -0x171),pbVar17);
          if ((bVar6 & 1) != 0) goto LAB_10000e6c;
          pbVar2 = (byte *)(lVar19 + lVar24);
          bVar6 = recovered_10001ad4(pbVar2 + -0x60,pbVar17);
          if ((bVar6 & 1) != 0) goto LAB_10000e6c;
          bVar6 = recovered_10001ad4(pbVar2,pbVar17);
          if ((bVar6 & 1) != 0) goto LAB_10000e6c;
        }
        lVar24 = lVar24 + 0x571;
      }
      uVar20 = uVar23;
LAB_10000e6c:
      bVar3 = uVar20 < uVar23;
    }
    else {
      bVar3 = false;
    }
    uVar7 = recovered_100017e4(0x12);
    uVar9 = *(uint *)(param_1 + 0x35c);
    if ((long)(int)uVar9 < (long)(uVar16 * 0x18 + 0x89)) goto LAB_100014fc;
    if (lVar10 == 0) {
      if (bVar3) {
        uVar9 = 0x11;
        pcVar12 = str_10001ef7;
        goto LAB_10000ee0;
      }
      pcVar12 = str_10001ee0;
    }
    else {
      bVar4 = (*(uint *)(lVar10 + 0x10) & 8) != 0;
      uVar7 = 0x11;
      if (bVar4) {
        uVar7 = 0x25;
      }
      pcVar13 = str_10001ef1;
      if (bVar4) {
        pcVar13 = str_10001ee8;
      }
      bVar4 = (*(uint *)(lVar10 + 0x10) & 2) != 0;
      uVar9 = 0x25;
      if (bVar4) {
        uVar9 = uVar7;
      }
      pcVar12 = str_10001ee8;
      if (bVar4) {
        pcVar12 = pcVar13;
      }
LAB_10000ee0:
      uVar7 = recovered_100017e4(uVar9);
    }
    iVar22 = *(int *)(param_1 + 0x358);
    uVar9 = 0x2c;
    if ((uVar16 & 1) != 0) {
      uVar9 = 0x1f;
    }
    uVar9 = recovered_100017e4(uVar9);
    uStack_3d8 = uStack_3d8 & 0xff000000 | uVar9 & 0xffffff;
    recovered_100016f4(param_1,uVar16 * 0x1800000000 + 0x710000000c,
                       (ulong)(iVar22 - 0x18) | 0x1800000000,uStack_3d8);
    puVar21 = (&PTR_str_10001fee_10004008)[uVar16];
    uVar9 = recovered_100017e4(0x19);
    uStack_3e0 = uStack_3e0 & 0xff000000 | uVar9 & 0xffffff;
    iVar22 = (int)(uVar16 * 0x18);
    recovered_10001808(param_1,0x14,iVar22 + 0x77,(long)puVar21,uStack_3e0,0xbe);
    uStack_3e8 = uStack_3e8 & 0xff000000 | uVar7 & 0xffffff;
    recovered_10001808(param_1,0xdc,iVar22 + 0x77,(long)pcVar12,uStack_3e8,0x70);
    pcVar12 = str_10001efe;
    if (!bVar3) {
      pcVar12 = (char *)((uintptr_t)pf_module_state + 0x2c9U);
    }
    if (lVar10 != 0) {
      pcVar12 = (char *)(lVar10 + 0x54);
    }
    uVar9 = recovered_100017e4(1);
    in_stack_fffffffffffffc10 =
         in_stack_fffffffffffffc10 & 0xffffffffff000000 | (ulong)uVar9 & 0xffffff;
    recovered_10001808(param_1,0x152,iVar22 + 0x77,(long)pcVar12,(uint)in_stack_fffffffffffffc10,
                       0xda);
    if (lVar10 == 0) {
      pcVar12 = str_100020fa;
    }
    else {
      switch((uintptr_t)(*(undefined4 *)(lVar10 + 0xc))) {
      case 1:
        if (*(uint *)(lVar10 + 0x44) == 0 && *(uint *)(lVar10 + 0x48) == 0) {
          if (*(uint *)(lVar10 + 0x4c) == 0) {
            arg3 = (char *)(lVar10 + 0xd4);
            pcVar12 = str_100021bb;
            break;
          }
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(ulong)(*(uint *)(lVar10 + 0x48) / 1000);
        }
        arg3 = (char *)(ulong)(*(uint *)(lVar10 + 0x44) / 1000);
        arg6 = (char *)(lVar10 + 0xd4);
        pcVar14 = (char *)(ulong)(*(uint *)(lVar10 + 0x4c) / 1000);
        pcVar12 = str_100021d6;
        break;
      case 2:
        uVar9 = *(uint *)(lVar10 + 0x38);
        if (uVar9 == 0) {
          arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          pcVar13 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          uVar9 = *(uint *)(lVar10 + 0x4c);
          if (*(uint *)(lVar10 + 0x44) == 0 && *(uint *)(lVar10 + 0x48) == 0) {
            if (uVar9 == 0) {
              if (*(int *)(lVar10 + 0x50) == 0) goto LAB_10001338;
              uVar9 = 0;
            }
            pcVar13 = (char *)0x0;
          }
          pcVar14 = (char *)(ulong)(uVar9 / 1000);
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg6 = (char *)(ulong)(*(uint *)(lVar10 + 0x50) / 1000);
          pcVar12 = str_100021f8;
          pcVar11 = pcVar13;
        }
        else {
LAB_100012e0:
          arg3 = (char *)(ulong)(uVar9 / 1000);
          pcVar12 = (char *)((uintptr_t)pf_module_state + 0x5a0U);
          pcVar11 = (char *)(lVar10 + 0xd4);
        }
        break;
      case 3:
        uVar9 = *(uint *)(lVar10 + 0x3c);
        if (uVar9 != 0) goto LAB_100012e0;
        if ((((*(byte *)(lVar10 + 0x12) & 1) != 0) && ((*(byte *)(lVar10 + 0x15) >> 2 & 1) != 0)) &&
           (*(int *)(lVar10 + 0x18) != 0)) goto LAB_10010174;
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        pcVar13 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        pcVar15 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        if (*(uint *)(lVar10 + 0x44) == 0 && *(uint *)(lVar10 + 0x48) == 0) {
          if (*(uint *)(lVar10 + 0x4c) == 0) {
            if (*(int *)(lVar10 + 0x50) == 0) goto LAB_10001338;
            pcVar15 = (char *)0x0;
          }
          pcVar13 = (char *)0x0;
        }
        in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
        arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
        pcVar12 = str_10002269;
        pcVar11 = pcVar13;
        pcVar14 = pcVar15;
        break;
      case 4:
      case 0x14:
        if ((*(byte *)(lVar10 + 0x11) >> 6 & 1) == 0) {
LAB_10001350:
          arg3 = (char *)(lVar10 + 0xd4);
          pcVar12 = str_10002109;
        }
        else {
          uVar7 = *(uint *)(lVar10 + 0x20);
          arg3 = (char *)(long)((int)uVar7 / 1000);
          uVar9 = -uVar7;
          if (-1 < (int)uVar7) {
            uVar9 = uVar7;
          }
          pcVar12 = str_10002124;
          pcVar11 = (char *)(ulong)((uVar9 % 1000) / 100);
          pcVar14 = (char *)(lVar10 + 0xd4);
        }
        break;
      case 5:
        if ((*(byte *)(lVar10 + 0x11) & 1) == 0) goto LAB_10001350;
        arg6 = (char *)(lVar10 + 0xd4);
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x24);
        pcVar12 = str_10002135;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x28);
        pcVar14 = (char *)(long)*(int *)(lVar10 + 0x2c);
        break;
      case 6:
        if ((*(uint *)(lVar10 + 0x10) >> 1 & 1) == 0) goto LAB_10001350;
        arg3 = str_1000215e;
        if ((*(uint *)(lVar10 + 0x10) & 0x200) != 0) {
          arg3 = str_10002154;
        }
        pcVar12 = str_1000214c;
        pcVar11 = (char *)(lVar10 + 0xd4);
        break;
      case 7:
        pcVar11 = &DAT_10002188;
        if ((*(uint *)(lVar10 + 0x10) & 0x800) != 0) {
          pcVar11 = str_10002181;
        }
        arg3 = str_10001fee;
        if ((*(uint *)(lVar10 + 0x10) & 0x8000) != 0) {
          arg3 = pcVar11;
        }
        pcVar12 = str_1000216b;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x40);
        break;
      case 8:
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        if ((*(uint *)(lVar10 + 0x44) == 0) || (*(uint *)(lVar10 + 0x48) == 0)) {
LAB_10001338:
          arg3 = (char *)(lVar10 + 0xd4);
          pcVar12 = &DAT_10001e41;
        }
        else {
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
          pcVar12 = str_1000218d;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        }
        break;
      case 9:
        if ((*(byte *)(lVar10 + 0x10) >> 1 & 1) == 0) goto LAB_10001338;
        in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
        pcVar12 = str_100022a8;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        break;
      default:
        if (*(char *)(lVar10 + 0xd4) == '\0') {
          pcVar11 = &DAT_10001f4b;
        }
        else {
          pcVar11 = &DAT_10001f4b;
          if (*(char *)(lVar10 + 0x94) != '\0') {
            pcVar11 = &DAT_100024da;
          }
        }
        pcVar12 = (char *)((uintptr_t)pf_module_state + 0x887U);
        arg3 = (char *)(lVar10 + 0xd4);
        pcVar14 = (char *)(lVar10 + 0x94);
        break;
      case 0xc:
        if ((*(byte *)(lVar10 + 0x12) & 1) == 0) goto LAB_10001338;
        uVar9 = *(uint *)(lVar10 + 0x44);
        arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        arg3 = (char *)(ulong)(uVar9 >> 0x10 & 0xff);
        in_stack_fffffffffffffc00 = lVar10 + 0xd4;
        in_stack_fffffffffffffbf0 = (ulonglong)*(uint *)(lVar10 + 0x4c);
        in_stack_fffffffffffffbf8 = (ulong)*(uint *)(lVar10 + 0x50);
        pcVar12 = str_100022bd;
        pcVar11 = (char *)(ulong)(uVar9 >> 8 & 0xff);
        pcVar14 = (char *)(ulong)(uVar9 & 0xff);
        break;
      case 0xd:
        if (((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) >> 2 & 1) == 0))
        goto LAB_10001338;
        in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
        pcVar12 = str_10002300;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        break;
      case 0xe:
      case 0xf:
        if ((((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) >> 2 & 1) == 0)) ||
           (*(int *)(lVar10 + 0x18) == 0)) {
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
          pcVar12 = str_10002338;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        }
        else {
LAB_10010174:
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
          pcVar12 = str_10002230;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        }
        break;
      case 0x10:
        if ((((*(byte *)(lVar10 + 0x12) & 1) == 0) || ((*(byte *)(lVar10 + 0x15) >> 2 & 1) == 0)) ||
           (*(int *)(lVar10 + 0x18) == 0)) {
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
          pcVar12 = str_100023a7;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        }
        else {
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
          pcVar12 = str_10002375;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        }
        break;
      case 0x12:
        arg6 = (char *)(lVar10 + 0xd4);
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        pcVar12 = str_1000241a;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        break;
      case 0x13:
        arg3 = *(char **)(lVar10 + 0x48);
        arg6 = (char *)(lVar10 + 0xd4);
        pcVar12 = str_10002441;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x50);
        break;
      case 0x15:
        arg6 = (char *)(lVar10 + 0xd4);
        arg3 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        pcVar12 = str_100023e8;
        pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x4c);
        break;
      case 0x16:
        uVar9 = *(uint *)(lVar10 + 0x4c);
        if (*(int *)(lVar10 + 0x1c) == 4) {
          arg6 = str_100024a1;
          if (*(int *)(lVar10 + 0x50) != 0) {
            arg6 = str_10002498;
          }
          in_stack_fffffffffffffbf0 = lVar10 + 0xd4;
          pcVar12 = str_1000246f;
          arg3 = (char *)(ulong)uVar9;
          pcVar11 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
        }
        else {
          arg3 = (char *)(lVar10 + 0xd4);
          if (uVar9 == 0) goto LAB_10001338;
          arg6 = (char *)(ulong)*(uint *)(lVar10 + 0x48);
          pcVar12 = str_100024a9;
          pcVar11 = (char *)(ulong)uVar9;
          pcVar14 = (char *)(ulong)*(uint *)(lVar10 + 0x44);
        }
      }
    }
    thunk_snprintf(acStack_3d0,0x100,pcVar12,(ulonglong)arg3,(ulonglong)pcVar11,
                       (ulonglong)pcVar14,(ulonglong)arg6,in_stack_fffffffffffffbf0,
                       in_stack_fffffffffffffbf8,in_stack_fffffffffffffc00,in_stack_fffffffffffffc08
                       ,in_stack_fffffffffffffc10);
    if (bVar3) {
      thunk_snprintf(acStack_3d0,0x100,str_10001f1a,(ulonglong)arg3,(ulonglong)pcVar11,
                         (ulonglong)pcVar14,(ulonglong)arg6,in_stack_fffffffffffffbf0,
                         in_stack_fffffffffffffbf8,in_stack_fffffffffffffc00,
                         in_stack_fffffffffffffc08,in_stack_fffffffffffffc10);
    }
    uVar9 = recovered_100017e4(1);
    unaff_w27 = unaff_w27 & 0xff000000 | uVar9 & 0xffffff;
    recovered_10001808(param_1,0x236,iVar22 + 0x77,(long)acStack_3d0,unaff_w27,
                       *(int *)(param_1 + 0x358) - 0x244);
  }
  uVar9 = *(uint *)(param_1 + 0x35c);
LAB_100014fc:
  pixels = *(void **)(param_1 + 0x350);
  uVar7 = *(uint *)(param_1 + 0x358);
  uVar8 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present((void *)param_1,str_10001db8,pixels,uVar7,uVar9,uVar7 << 2,uVar8);
  return;
}

#undef DAT_10001e26
#undef DAT_10001e41
#undef DAT_10001e4b
#undef DAT_10001e99
#undef DAT_10001e9e
#undef DAT_10001eaa
#undef DAT_10001f4b
#undef DAT_10002188
#undef DAT_100024da
#undef PTR_DAT_100040c0
#undef PTR_DAT_10004178
#undef PTR_str_10001fee_10004008
#undef str_10001db8
#undef str_10001dc4
#undef str_10001df8
#undef str_10001e00
#undef str_10001e0a
#undef str_10001e16
#undef str_10001e1e
#undef str_10001e29
#undef str_10001e31
#undef str_10001e44
#undef str_10001e50
#undef str_10001e7c
#undef str_10001ea3
#undef str_10001eae
#undef str_10001ee0
#undef str_10001ee8
#undef str_10001ef1
#undef str_10001ef7
#undef str_10001efe
#undef str_10001f1a
#undef str_10001f4c
#undef str_10001fee
#undef str_100020fa
#undef str_10002109
#undef str_10002124
#undef str_10002135
#undef str_1000214c
#undef str_10002154
#undef str_1000215e
#undef str_1000216b
#undef str_10002181
#undef str_1000218d
#undef str_100021bb
#undef str_100021d6
#undef str_100021f8
#undef str_10002230
#undef str_10002269
#undef str_100022a8
#undef str_100022bd
#undef str_10002300
#undef str_10002338
#undef str_10002375
#undef str_100023a7
#undef str_100023e8
#undef str_1000241a
#undef str_10002441
#undef str_1000246f
#undef str_10002498
#undef str_100024a1
#undef str_100024a9
#undef uStack_3e8
#undef uStack_3e0
#undef uStack_3d8
#undef acStack_3d0
#undef acStack_2d0
#undef acStack_2b8
#undef acStack_288
#undef acStack_268
#undef acStack_168
#undef in_stack_fffffffffffffbf0
#undef in_stack_fffffffffffffbf8
#undef in_stack_fffffffffffffc00
#undef in_stack_fffffffffffffc08
#undef in_stack_fffffffffffffc10

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001554
 */

void recovered_10001554(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_1000159c(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000158c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000159c
 */

bool recovered_1000159c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

#undef UINT_8201098c
#define UINT_8201098c (*(uint *)(0x8201098cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015e8
 */

undefined8 recovered_100015e8(void *param_1,undefined8 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_1000159c(0x18c);
  if (bVar1) {
    uVar2 = UINT_8201098c;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2,param_3);
      return (ulong)uVar2;
    }
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}

#undef UINT_8201098c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001658
 */

long recovered_10001658(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;

  uVar2 = *(uint *)(param_1 + 0x368);
  do {
    lVar5 = 0;
    lVar1 = param_1 + 0x378;
    for (uVar6 = (ulong)uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*(int *)(lVar1 + 0xc) == param_2) {
        if (lVar5 != 0) {
          uVar3 = recovered_10001a9c(lVar1);
          uVar4 = recovered_10001a9c(lVar5);
          if (uVar3 <= uVar4) goto LAB_100016bc;
        }
        lVar5 = lVar1;
      }
LAB_100016bc:
      lVar1 = lVar1 + 500;
    }
    if ((param_2 != 0x14) || (param_2 = 4, lVar5 != 0)) {
      return lVar5;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f4
 */

void recovered_100016f4(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  uVar4 = *(uint *)(param_1 + 0x358);
  uVar6 = (uint)param_2;
  uVar8 = uVar6;
  if ((int)uVar4 <= (int)uVar6) {
    uVar8 = uVar4;
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar2 = uVar8;
  }
  uVar5 = *(uint *)(param_1 + 0x35c);
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = uVar8;
  if ((int)uVar5 <= (int)uVar8) {
    uVar3 = uVar5;
  }
  uVar7 = 0;
  if (-1 < param_2) {
    uVar7 = uVar3;
  }
  uVar6 = uVar6 + (int)param_3;
  uVar3 = uVar6;
  if ((int)uVar4 <= (int)uVar6) {
    uVar3 = uVar4;
  }
  uVar4 = 0;
  if (-1 < (int)uVar6) {
    uVar4 = uVar3;
  }
  uVar8 = uVar8 + (int)((ulong)param_3 >> 0x20);
  uVar6 = uVar8;
  if ((int)uVar5 <= (int)uVar8) {
    uVar6 = uVar5;
  }
  uVar3 = 0;
  if (-1 < (int)uVar8) {
    uVar3 = uVar6;
  }
  for (; (int)uVar7 < (int)uVar3; uVar7 = uVar7 + 1) {
    for (uVar6 = uVar2; (int)uVar6 < (int)uVar4; uVar6 = uVar6 + 1) {
      if ((((param_1 != 0) && (-1 < (int)(uVar6 | uVar7))) && (*(long *)(param_1 + 0x350) != 0)) &&
         (((int)uVar6 < (int)*(uint *)(param_1 + 0x358) && ((int)uVar7 < *(int *)(param_1 + 0x35c)))
         )) {
        lVar1 = (ulong)*(uint *)(param_1 + 0x358) * (ulong)uVar7 + (ulong)uVar6;
        *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4) = (char)param_4;
        *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 1) = (char)((uint)param_4 >> 8);
        *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 2) = (char)((uint)param_4 >> 0x10);
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 3) = 0xff;
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e4
 */

uint recovered_100017e4(uint role)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = thunk_terror_ui_colour(role);
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff;
}


#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
#define local_58 (*(long *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001808
 */

void recovered_10001808(long param_1,int param_2,uint param_3,long param_4,uint param_5,uint param_6
                       )

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;

  if ((((param_1 != 0) && (param_4 != 0)) && (0 < (int)param_6)) &&
     (*(long *)(param_1 + 0x350) != 0)) {
    thunk_memset(&local_58,0,0x18);
    bVar7 = recovered_1000159c(0x178);
    if (bVar7) {
      uVar11 = UINT_82010978;
      if (((uVar11 != 0) &&
          (uVar3 = (param_5 & 0xff00ff00 | 0xff000000) >> 8 | (param_5 & 0xff00ff) << 8,
          iVar8 = (*(code *)(ulong)uVar11)
                            (param_4,0xffffffff,1,uVar3 >> 0x10 | uVar3 << 0x10,&local_58),
          iVar8 != 0)) && (local_58 != 0)) {
        if (local_4c << 2 <= local_44) {
          uVar10 = 0;
          if (param_6 <= local_4c) {
            local_4c = param_6;
          }
          uVar11 = param_3;
          for (; uVar10 < local_48; uVar10 = uVar10 + 1) {
            iVar8 = (int)uVar10 + param_3;
            if ((-1 < iVar8) &&
               (uVar4 = (ulong)local_4c, lVar5 = (long)param_2, lVar6 = local_58,
               iVar8 < *(int *)(param_1 + 0x35c))) {
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if ((-1 < lVar5) && (lVar5 < *(int *)(param_1 + 0x358))) {
                  lVar9 = uVar10 * local_44;
                  bVar2 = *(byte *)(lVar6 + lVar9 + 3);
                  if (bVar2 != 0) {
                    pbVar1 = (byte *)(*(long *)(param_1 + 0x350) +
                                     (lVar5 + (ulong)uVar11 * (long)*(int *)(param_1 + 0x358)) * 4);
                    uVar3 = bVar2 ^ 0xff;
                    uVar12 = (uint)bVar2;
                    *pbVar1 = (byte)((uVar3 * *pbVar1 + *(byte *)(lVar6 + lVar9) * uVar12 + 0x7f) /
                                    0xff);
                    lVar9 = lVar6 + uVar10 * local_44;
                    pbVar1[1] = (byte)((uVar3 * pbVar1[1] + *(byte *)(lVar9 + 1) * uVar12 + 0x7f) /
                                      0xff);
                    pbVar1[2] = (byte)((uVar3 * pbVar1[2] + *(byte *)(lVar9 + 2) * uVar12 + 0x7f) /
                                      0xff);
                    pbVar1[3] = 0xff;
                  }
                }
                lVar5 = lVar5 + 1;
                lVar6 = lVar6 + 4;
              }
            }
            uVar11 = uVar11 + 1;
          }
        }
        recovered_10001554(local_58);
      }
    }
  }
  return;
}

#undef UINT_82010978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44

#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
#define lStack_58 (*(long *)(pf_stack_frame + 24))
#define uStack_4c (*(uint *)(pf_stack_frame + 36))
#define uStack_48 (*(uint *)(pf_stack_frame + 40))
#define uStack_44 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c8
 */

void recovered_100019c8(void *state,int index,char *label,int selected)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint role;
  ulong uVar11;
  ulong uVar12;

  uVar12 = (ulong)(index * 0x68 + 0x12);
  bVar7 = selected == 0;
  uVar8 = 0x2b;
  if (bVar7) {
    uVar8 = 2;
  }
  uVar10 = 0x39;
  if (bVar7) {
    uVar10 = 0x14;
  }
  role = 0xe;
  if (bVar7) {
    role = 1;
  }
  uVar8 = recovered_100017e4(uVar8);
  recovered_100016f4((long)state,uVar12 | 0x3f00000000,0x1e0000005e,uVar8 & 0xffffff);
  uVar8 = recovered_100017e4(uVar10);
  recovered_100016f4((long)state,uVar12 | 0x3f00000000,0x10000005e,uVar8 & 0xffffff);
  recovered_100016f4((long)state,uVar12 | 0x5c00000000,0x10000005e,uVar8 & 0xffffff);
  recovered_100016f4((long)state,uVar12 | 0x3f00000000,0x1e00000001,uVar8 & 0xffffff);
  recovered_100016f4((long)state,uVar12 + 0x3f0000005d,0x1e00000001,uVar8 & 0xffffff);
  uVar8 = recovered_100017e4(role);
  uVar12 = 0x47;
  if (((state != (void *)0x0) && (label != (char *)0x0)) && (*(long *)((long)state + 0x350) != 0)) {
    thunk_memset(&lStack_58,0,0x18);
    bVar7 = recovered_1000159c(0x178);
    if (bVar7) {
      uVar10 = UINT_82010978;
      if (((uVar10 != 0) &&
          (uVar8 = (uVar8 & 0xff00 | 0xff000000) >> 8 | (uVar8 & 0xff00ff) << 8,
          uVar8 = (*(code *)(ulong)uVar10)
                            (label,0xffffffff,1,uVar8 >> 0x10 | uVar8 << 0x10,&lStack_58),
          uVar8 != 0)) && (lStack_58 != 0)) {
        if (uStack_4c << 2 <= uStack_44) {
          uVar11 = 0;
          if (0x4b < uStack_4c) {
            uStack_4c = 0x4c;
          }
          for (; uVar11 < uStack_48; uVar11 = uVar11 + 1) {
            iVar1 = (int)uVar11 + 0x47;
            if ((-1 < iVar1) &&
               (uVar4 = (ulong)uStack_4c, lVar5 = (long)(index * 0x68 + 0x1d), lVar6 = lStack_58,
               iVar1 < *(int *)((long)state + 0x35c))) {
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if ((-1 < lVar5) && (lVar5 < *(int *)((long)state + 0x358))) {
                  lVar9 = uVar11 * uStack_44;
                  bVar3 = *(byte *)(lVar6 + lVar9 + 3);
                  if (bVar3 != 0) {
                    pbVar2 = (byte *)(*(long *)((long)state + 0x350) +
                                     (lVar5 + uVar12 * (long)*(int *)((long)state + 0x358)) * 4);
                    uVar8 = bVar3 ^ 0xff;
                    uVar10 = (uint)bVar3;
                    *pbVar2 = (byte)((uVar8 * *pbVar2 + *(byte *)(lVar6 + lVar9) * uVar10 + 0x7f) /
                                    0xff);
                    lVar9 = lVar6 + uVar11 * uStack_44;
                    pbVar2[1] = (byte)((uVar8 * pbVar2[1] + *(byte *)(lVar9 + 1) * uVar10 + 0x7f) /
                                      0xff);
                    pbVar2[2] = (byte)((uVar8 * pbVar2[2] + *(byte *)(lVar9 + 2) * uVar10 + 0x7f) /
                                      0xff);
                    pbVar2[3] = 0xff;
                  }
                }
                lVar5 = lVar5 + 1;
                lVar6 = lVar6 + 4;
              }
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
        }
        recovered_10001554(lStack_58);
      }
    }
  }
  return;
}

#undef UINT_82010978
#undef lStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a9c
 */

uint recovered_10001a9c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar1 = uVar1 & 1 | (uVar1 >> 2 & 1) << 1 | uVar1 >> 2 & 4 | uVar1 >> 0xd & 8 |
            (uVar1 >> 1 & 1) << 4;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad4
 */

undefined1 recovered_10001ad4(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;

  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (*param_2 != 0)) {
    pbVar5 = param_1;
    for (lVar4 = 0; param_1[lVar4] != 0; lVar4 = lVar4 + 1) {
      pbVar6 = param_2;
      pbVar7 = pbVar5;
      do {
        bVar2 = *pbVar6;
        if (bVar2 == 0) {
          return 1;
        }
        bVar3 = *pbVar7;
        if (bVar3 == 0) break;
        bVar1 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41U) {
          bVar1 = bVar3;
        }
        bVar3 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          bVar3 = bVar2;
        }
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 == bVar3);
      pbVar5 = pbVar5 + 1;
    }
  }
  return 0;
}

