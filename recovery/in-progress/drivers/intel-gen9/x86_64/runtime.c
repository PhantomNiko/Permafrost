/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_100020e0
#define DAT_100020e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1000263e
#define DAT_1000263e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef DAT_10002640
#define DAT_10002640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_10002642
#define DAT_10002642 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x562U)))
#undef DAT_10002644
#define DAT_10002644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_10002649
#define DAT_10002649 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x569U)))
#undef DAT_1000264c
#define DAT_1000264c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_1000264e
#define DAT_1000264e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56eU)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1f20U)))
#undef DAT_10004008
#define DAT_10004008 (*(byte *)(((uintptr_t)pf_module_state + 0x1f28U)))
#undef DAT_10004009
#define DAT_10004009 (*(byte *)(((uintptr_t)pf_module_state + 0x1f29U)))
#undef DAT_1000400a
#define DAT_1000400a (*(byte *)(((uintptr_t)pf_module_state + 0x1f2aU)))
#undef DAT_1000400c
#define DAT_1000400c (*(ushort *)(((uintptr_t)pf_module_state + 0x1f2cU)))
#undef DAT_1000400e
#define DAT_1000400e (*(ushort *)(((uintptr_t)pf_module_state + 0x1f2eU)))
#undef DAT_1000401c
#define DAT_1000401c (*(uint *)(((uintptr_t)pf_module_state + 0x1f3cU)))
#undef DAT_10004020
#define DAT_10004020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f40U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint *)(((uintptr_t)pf_module_state + 0x1f44U)))
#undef DAT_10004028
#define DAT_10004028 (*(uint *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef DAT_10004034
#define DAT_10004034 (*(int *)(((uintptr_t)pf_module_state + 0x1f54U)))
#undef DAT_10004038
#define DAT_10004038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1f58U)))
#undef DAT_10004040
#define DAT_10004040 (*(uint *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10004044
#define DAT_10004044 (*(uint *)(((uintptr_t)pf_module_state + 0x1f64U)))
#undef DAT_10004048
#define DAT_10004048 (*(int *)(((uintptr_t)pf_module_state + 0x1f68U)))
#undef DAT_1000404c
#define DAT_1000404c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f6cU)))
#undef DAT_1000406c
#define DAT_1000406c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f8cU)))
#undef DAT_1000407c
#define DAT_1000407c (*(uint *)(((uintptr_t)pf_module_state + 0x1f9cU)))
#undef DAT_10004080
#define DAT_10004080 (*(uint *)(((uintptr_t)pf_module_state + 0x1fa0U)))
#undef DAT_100040a0
#define DAT_100040a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1fc0U)))
#undef DAT_100040a8
#define DAT_100040a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fc8U)))
#undef DAT_100040b0
#define DAT_100040b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fd0U)))
#undef DAT_100040b8
#define DAT_100040b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fd8U)))
#undef DAT_100040c0
#define DAT_100040c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fe0U)))
#undef DAT_100040c8
#define DAT_100040c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fe8U)))
#undef DAT_100040d0
#define DAT_100040d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff0U)))
#undef DAT_100040d4
#define DAT_100040d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff4U)))
#undef DAT_100040d8
#define DAT_100040d8 (*(uint *)(((uintptr_t)pf_module_state + 0x1ff8U)))
#undef UNK_100020e8
#define UNK_100020e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_100020e0
#define _DAT_100020e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_1000404c
#define _DAT_1000404c (*(uint *)(((uintptr_t)pf_module_state + 0x1f6cU)))
#undef _DAT_100040d0
#define _DAT_100040d0 (*(uint *)(((uintptr_t)pf_module_state + 0x1ff0U)))
#undef _DAT_100040d4
#define _DAT_100040d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ff4U)))
#undef str_1000210a
#define str_1000210a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aU)))
#undef str_10002137
#define str_10002137 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_10002167
#define str_10002167 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87U)))
#undef str_1000219d
#define str_1000219d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_100021c8
#define str_100021c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
#undef str_100021f9
#define str_100021f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
#undef str_10002247
#define str_10002247 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_1000226e
#define str_1000226e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_1000229d
#define str_1000229d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_100022c0
#define str_100022c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_100022d4
#define str_100022d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f4U)))
#undef str_1000231e
#define str_1000231e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
#undef str_10002339
#define str_10002339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000234c
#define str_1000234c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26cU)))
#undef str_10002362
#define str_10002362 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x282U)))
#undef str_1000239f
#define str_1000239f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bfU)))
#undef str_100023b4
#define str_100023b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d4U)))
#undef str_100023d2
#define str_100023d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_10002402
#define str_10002402 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_10002489
#define str_10002489 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_100024cf
#define str_100024cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_100024ed
#define str_100024ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_1000250b
#define str_1000250b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42bU)))
#undef uRam00000000100020e8
#define uRam00000000100020e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#define local_738 (*(ulong *)(pf_stack_frame + 24))
#define local_72c (*(char *)(pf_stack_frame + 36))
#define local_330 (*(ulong *)(pf_stack_frame + 1056))
#define local_328 (*(undefined4 *)(pf_stack_frame + 1064))
#define local_324 (*(undefined4 *)(pf_stack_frame + 1068))
#define local_318 (*(code * *)(pf_stack_frame + 1080))
#define local_308 (*(undefined1 (*)[776])(pf_stack_frame + 1096))
#define local_2c8 (*(undefined1 (*)[712])(pf_stack_frame + 1160))
#define local_288 (*(undefined1 (*)[648])(pf_stack_frame + 1224))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 1320))
#define local_168 (*(ulong *)(pf_stack_frame + 1512))
#define local_158 (*(undefined1 (*)[344])(pf_stack_frame + 1528))
#define local_118 (*(undefined1 (*)[280])(pf_stack_frame + 1592))
#define local_d8 (*(uint (*)[54])(pf_stack_frame + 1656))
#define local_70 (*(ulong *)(pf_stack_frame + 1760))
#define local_64 (*(undefined4 *)(pf_stack_frame + 1772))
#define local_60 (*(uint *)(pf_stack_frame + 1776))
#define local_5c (*(uint *)(pf_stack_frame + 1780))
#define uStack_160 (*(undefined8 *)(pf_stack_frame + 1520))
#define local_58 (*(uint *)(pf_stack_frame + 1784))
#define local_54 (*(uint *)(pf_stack_frame + 1788))
#define local_50 (*(uint *)(pf_stack_frame + 1792))
#define local_4c (*(uint *)(pf_stack_frame + 1796))
#define local_48 (*(uint *)(pf_stack_frame + 1800))
#define local_44 (*(uint *)(pf_stack_frame + 1804))
#define local_40 (*(char * *)(pf_stack_frame + 1808))
#define local_34 (*(uint *)(pf_stack_frame + 1820))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000047d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000047d(void *api)

{
  unsigned char pf_stack_frame[1904] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;

  local_54 = 0;
  local_44 = 0;
  local_50 = 0;
  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((long)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((long)api + 8) < 0xf8) {
    return 0;
  }
  recovered_100010a4(((uintptr_t)pf_module_state+0x1f20U),0xe8);
  _DAT_100040d0 = 3;
  DAT_10004000 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
     (*(int *)((long)api + 0x5c) != 0)) {
    uVar5 = 0;
    while (uVar5 != 8) {
      uVar7 = 0;
      local_34 = uVar5;
      while (uVar7 != 0x20) {
        local_40 = (char *)CONCAT44(PF_PART4(local_40, 4),uVar7);
        iVar3 = recovered_10001af4(api,uVar5 & 0xff,uVar7 & 0xff,0,(undefined1 *)&local_738);
        if ((iVar3 != 0) && (recovered_100010bf(&local_738), local_72c < '\0')) {
          for (iVar3 = -7; iVar3 != 0; iVar3 = iVar3 + 1) {
            iVar4 = recovered_10001af4(api,uVar5 & 0xff,uVar7 & 0xff,iVar3 + 8U & 0xff,
                                       (undefined1 *)&local_330);
            if (iVar4 != 0) {
              recovered_100010bf(&local_330);
            }
          }
        }
        uVar7 = (int)local_40 + 1;
      }
      uVar5 = local_34 + 1;
    }
  }
  if (DAT_10004034 == 0) {
    DAT_10004000 = (int *)0x0;
    return 0;
  }
  uVar6 = recovered_10001128(api,((uintptr_t)pf_module_state+0x1f58U));
  if ((((int)uVar6 == 0) ||
      (bVar2 = recovered_1000115c(((uintptr_t)pf_module_state+0x1f58U)),
      (_DAT_1000404c - 0x2001 < 0xffffe1df || DAT_10004048 - 0x2001U < 0xffffe27f) ||
      (int)CONCAT71(extraout_var,bVar2) == 0)) || (DAT_10004044 < (uint)(DAT_10004048 << 2))) {
    pcVar10 = str_1000210a;
  }
  else {
    uVar12 = (ulong)DAT_10004044 * (ulong)_DAT_1000404c;
    if (uVar12 <= DAT_10004040) {
      DAT_100040a0 = DAT_10004038;
      local_40 = (char *)(ulong)DAT_10004024;
      uVar11 = (ulong)DAT_10004028 << 0x20;
      if ((DAT_10004024 & 6) != 4) {
        uVar11 = 0;
      }
      DAT_100040c8 = uVar12;
      uVar6 = recovered_100011f1(api,DAT_10004008,DAT_10004009,DAT_1000400a,4,2,(long)&local_54);
      if (((local_54 & 2) == 0 || (int)uVar6 == 0) ||
         (uVar6 = recovered_100011f1(api,DAT_10004008,DAT_10004009,DAT_1000400a,0x62,1,
                                     (long)&local_44), (int)uVar6 == 0)) {
        pcVar10 = str_10002167;
        uVar8 = 0;
        uVar5 = local_44;
        uVar7 = local_54;
LAB_10000878:
        recovered_1000123e(pcVar10,uVar7,uVar5,uVar8);
        DAT_10004000 = (int *)0x0;
        return 0;
      }
      uVar5 = (uint)local_40 & 0xfffffff0;
      uVar11 = uVar11 | uVar5;
      if ((uVar11 == 0) || (((byte)local_44 + 1 & (byte)local_44 & 0x1f) != 0)) {
        pcVar10 = str_1000219d;
        uVar7 = local_44;
      }
      else {
        uVar9 = (ulong)(local_44 << 0x1b) + 0x8000000;
        local_738 = local_738 & 0xffffffff00000000;
        DAT_100040b8 = uVar11;
        DAT_100040c0 = uVar9;
        if ((DAT_1000401c & 1) == 0 && DAT_1000401c != 0) {
          local_330 = CONCAT44(PF_PART4(local_330, 4),DAT_1000401c);
          recovered_100011f1(api,DAT_10004008,DAT_10004009,DAT_1000400a,0x10,4,(long)&local_330);
          iVar3 = 0;
          if (((uint)local_330 & 7) == 4) {
            local_738 = CONCAT44(PF_PART4(local_738, 4),DAT_10004020);
            recovered_100011f1(api,DAT_10004008,DAT_10004009,DAT_1000400a,0x14,4,(long)&local_738);
            iVar3 = (int)local_738;
          }
          uVar7 = 0xfffffffc;
          if (((uint)local_330 & 1) == 0) {
            uVar7 = 0xfffffff0;
          }
          if ((uVar7 & (uint)local_330) != 0 || iVar3 != 0) {
            DAT_100040b0 = 0;
            local_40 = (char *)(ulong)uVar5;
            uVar6 = recovered_10001db1(api,uVar7 & (uint)local_330,iVar3,0x80000,
                                       (ulong *)&DAT_100040b0);
            if (DAT_100040b0 != 0 && (int)uVar6 != 0) {
              uVar11 = 0x6001c;
              uVar6 = recovered_1000131e(api,DAT_100040b0,0x6001c,&local_50);
              if (local_50 != 0xffffffff && (int)uVar6 != 0) {
                uVar5 = 0;
                while (iVar3 = (int)uVar11, iVar3 != 0x6301c) {
                  local_d8[0] = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_58 = 0;
                  uVar6 = recovered_1000131e(DAT_10004000,DAT_100040b0,(ulong)(iVar3 + 0x10164),
                                             local_d8);
                  if (((((int)uVar6 != 0) &&
                       (uVar6 = recovered_1000131e(DAT_10004000,DAT_100040b0,
                                                   (ulong)(iVar3 + 0x1016c),&local_4c),
                       (int)uVar6 != 0)) &&
                      (uVar6 = recovered_1000131e(DAT_10004000,DAT_100040b0,(ulong)(iVar3 + 0x10180)
                                                  ,&local_48), (int)uVar6 != 0)) &&
                     (uVar6 = recovered_1000131e(DAT_10004000,DAT_100040b0,uVar11,&local_58),
                     puVar1 = DAT_100040a0, (int)uVar6 != 0)) {
                    if (((local_d8[0] & 0x1c00) == 0 && (int)local_d8[0] < -1) &&
                       (uVar11 = (ulong)(local_48 & 0xfffff000),
                       uVar11 <= DAT_100040c0 - DAT_100040c8 && DAT_100040c8 - 1 < DAT_100040c0)) {
                      local_738 = 0;
                      local_330 = local_330 & 0xffffffff00000000;
                      local_168 = local_168 & 0xffffffff00000000;
                      local_70 = uVar11;
                      local_34 = uVar5;
                      uVar6 = recovered_10001db1(DAT_10004000,(int)(DAT_100040b8 + uVar11),
                                                 (int)(DAT_100040b8 + uVar11 >> 0x20),0x1000,
                                                 &local_738);
                      if (((int)uVar6 != 0) && (local_738 != 0)) {
                        local_64 = *puVar1;
                        *puVar1 = 0xa55a3c;
                        recovered_10001e47(DAT_10004000);
                        uVar6 = recovered_1000131e(DAT_10004000,local_738,0,(undefined4 *)&local_330
                                                  );
                        local_60 = (uint)uVar6;
                        *puVar1 = 0x5aa5c3;
                        recovered_10001e47(DAT_10004000);
                        uVar6 = recovered_1000131e(DAT_10004000,local_738,0,(undefined4 *)&local_168
                                                  );
                        local_5c = (uint)uVar6;
                        *puVar1 = local_64;
                        recovered_10001e47(DAT_10004000);
                        if ((((local_60 & local_5c) != 0) && ((uint)local_330 == 0xa55a3c)) &&
                           ((int)local_168 == 0x5aa5c3)) {
                          _DAT_100040d4 = (undefined4)local_70;
                          if ((((_DAT_1000404c == 0 || DAT_10004048 == 0) ||
                                ((local_d8[0] & 0x1c00) != 0 || -2 < (int)local_d8[0])) ||
                              ((local_4c & 0x3ff) * 0x40 != DAT_10004044)) ||
                             ((local_58 >> 0x10 & 0x1fff) != DAT_10004048 - 1U)) {
                            DAT_100040d8 = 0;
                          }
                          else {
                            bVar2 = (local_58 & 0xfff) == _DAT_1000404c - 1;
                            DAT_100040d8 = (uint)bVar2;
                            if (bVar2) goto LAB_10000bf1;
                          }
                          recovered_1000123e(str_10002489,local_4c,local_58,DAT_10004044);
LAB_10000bf1:
                          _DAT_100040d0 = local_34;
                          if ((((code *)(ulong)*(uint *)((long)api + 0x1c) == (code *)0x0) ||
                              (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0x1c))
                                                 (DAT_10004048,_DAT_1000404c,0x20), iVar3 == 0)) ||
                             ((uVar6 = recovered_10001128(api,((uintptr_t)pf_module_state+0x1f8cU)), (int)uVar6 == 0 ||
                              (bVar2 = recovered_1000115c(((uintptr_t)pf_module_state+0x1f8cU)),
                              (int)CONCAT71(extraout_var_00,bVar2) == 0)))) {
                            pcVar10 = str_10002247;
                          }
                          else {
                            DAT_100040a8 = DAT_1000406c;
                            uVar6 = recovered_100013dd(0,0,DAT_1000407c,DAT_10004080);
                            if ((((int)uVar6 != 0) && (*(int *)api == 0x54584b57)) &&
                               (((0xcf < *(uint *)((long)api + 8) &&
                                 ((((code *)(ulong)*(uint *)((long)api + 0xcc) != (code *)0x0 &&
                                   (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xcc))
                                                      (recovered_100013dd), iVar3 != 0)) &&
                                  (*(int *)api == 0x54584b57)))) &&
                                (((0xd7 < *(uint *)((long)api + 8) &&
                                  ((code *)(ulong)*(uint *)((long)api + 0xd4) != (code *)0x0)) &&
                                 (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xd4))(),
                                 iVar3 != 0)))))) {
                              if (((*(int *)api == 0x54584b57) && (0xb7 < *(uint *)((long)api + 8)))
                                 && ((code *)(ulong)*(uint *)((long)api + 0xb4) != (code *)0x0)) {
                                (*(code *)(ulong)*(uint *)((long)api + 0xb4))(1);
                              }
                              recovered_100010a4((long)&local_168,0x90);
                              local_168 = _DAT_100020e0;
                              uStack_160 = uRam00000000100020e8;
                              recovered_100015e2(local_158,0x40,str_1000229d);
                              recovered_100015e2(local_118,0x40,str_100022c0);
                              if ((((*(int *)api != 0x54584b57) || (*(uint *)((long)api + 8) < 200))
                                  || ((code *)(ulong)*(uint *)((long)api + 0xc4) == (code *)0x0)) ||
                                 (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xc4))
                                                    (&local_168,recovered_100015f6), iVar3 == 0)) {
                                recovered_100011ca(api,str_100022d4);
                              }
                              recovered_100010a4((long)&local_330,0x1c8);
                              uVar5 = DAT_100040d8;
                              local_330 = 0x1000001c8;
                              local_328 = 8;
                              local_324 = 0x13;
                              if (DAT_100040d8 == 0) {
                                local_324 = 0x19;
                              }
                              local_318 = recovered_100019e7;
                              recovered_100015e2(local_308,0x40,str_1000231e);
                              recovered_100015e2(local_2c8,0x40,str_10002339);
                              recovered_100015e2(local_288,0x60,str_1000234c);
                              recovered_100015e2(local_228,0xc0,str_10002362);
                              if (((*(int *)api == 0x54584b57) && (0xef < *(uint *)((long)api + 8)))
                                 && ((code *)(ulong)*(uint *)((long)api + 0xec) != (code *)0x0)) {
                                (*(code *)(ulong)*(uint *)((long)api + 0xec))(&local_330);
                                uVar5 = DAT_100040d8;
                              }
                              local_40 = str_100023d2;
                              if (uVar5 == 0) {
                                local_40 = str_10002402;
                              }
                              recovered_100015e2((undefined1 *)local_d8,0x60,str_1000239f);
                              recovered_10001ca6((long)local_d8,0x60,&DAT_1000263e);
                              local_34 = (uint)DAT_10004008;
                              recovered_10001cfa((long)local_d8,0x60,local_34,2);
                              recovered_10001ca6((long)local_d8,0x60,&DAT_10002640);
                              uVar7 = (uint)DAT_10004009;
                              recovered_10001cfa((long)local_d8,0x60,uVar7,2);
                              recovered_10001ca6((long)local_d8,0x60,&DAT_10002642);
                              uVar5 = (uint)DAT_1000400a;
                              recovered_10002069((long)local_d8,0x60,(ulong)uVar5);
                              recovered_100015e2((undefined1 *)&local_738,0x400,&DAT_10002644);
                              recovered_10001cfa((long)&local_738,0x400,local_34,2);
                              recovered_10001ca6((long)&local_738,0x400,&DAT_10002640);
                              recovered_10001cfa((long)&local_738,0x400,uVar7,2);
                              recovered_10001ca6((long)&local_738,0x400,&DAT_10002642);
                              recovered_10002069((long)&local_738,0x400,(ulong)uVar5);
                              recovered_10001ca6((long)&local_738,0x400,&DAT_10002649);
                              recovered_10001cfa((long)&local_738,0x400,(uint)DAT_1000400c,4);
                              recovered_10001ca6((long)&local_738,0x400,&DAT_10002640);
                              recovered_10001cfa((long)&local_738,0x400,(uint)DAT_1000400e,4);
                              recovered_10001ca6((long)&local_738,0x400,&DAT_1000264c);
                              pcVar10 = local_40;
                              if (*local_40 != '\0') {
                                recovered_10001ca6((long)&local_738,0x400,&DAT_1000264e);
                                recovered_10001ca6((long)&local_738,0x400,pcVar10);
                              }
                              if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
                                (*(code *)(ulong)*(uint *)((long)api + 0xc))
                                          (local_d8,str_100023b4,&local_738);
                              }
                              return 1;
                            }
                            pcVar10 = str_1000226e;
                          }
                          recovered_100011ca(api,pcVar10);
                          recovered_100013b3(api);
                          DAT_10004000 = (int *)0x0;
                          return 0;
                        }
                      }
                      uVar5 = local_34;
                    }
                    pcVar10 = str_1000250b;
                    if (iVar3 == 0x6101c) {
                      pcVar10 = str_100024ed;
                    }
                    if (iVar3 == 0x6001c) {
                      pcVar10 = str_100024cf;
                    }
                    recovered_1000123e(pcVar10,local_d8[0],local_4c,local_48);
                  }
                  uVar5 = uVar5 + 1;
                  uVar11 = (ulong)(iVar3 + 0x1000);
                }
                _DAT_100040d0 = 3;
                pcVar10 = str_100021f9;
                uVar8 = (uint)uVar12;
                uVar5 = (uint)uVar9;
                uVar7 = (uint)local_40;
                goto LAB_10000878;
              }
            }
          }
        }
        pcVar10 = str_100021c8;
        uVar7 = local_50;
        uVar5 = DAT_1000401c;
      }
      recovered_1000123e(pcVar10,uVar5,uVar7,0);
      DAT_10004000 = (int *)0x0;
      return 0;
    }
    pcVar10 = str_10002137;
  }
  recovered_100011ca(api,pcVar10);
  DAT_10004000 = (int *)0x0;
  return 0;
}

#undef DAT_100020e0
#undef DAT_1000263e
#undef DAT_10002640
#undef DAT_10002642
#undef DAT_10002644
#undef DAT_10002649
#undef DAT_1000264c
#undef DAT_1000264e
#undef DAT_10004000
#undef DAT_10004008
#undef DAT_10004009
#undef DAT_1000400a
#undef DAT_1000400c
#undef DAT_1000400e
#undef DAT_1000401c
#undef DAT_10004020
#undef DAT_10004024
#undef DAT_10004028
#undef DAT_10004034
#undef DAT_10004038
#undef DAT_10004040
#undef DAT_10004044
#undef DAT_10004048
#undef DAT_1000404c
#undef DAT_1000406c
#undef DAT_1000407c
#undef DAT_10004080
#undef DAT_100040a0
#undef DAT_100040a8
#undef DAT_100040b0
#undef DAT_100040b8
#undef DAT_100040c0
#undef DAT_100040c8
#undef DAT_100040d0
#undef DAT_100040d4
#undef DAT_100040d8
#undef UNK_100020e8
#undef _DAT_100020e0
#undef _DAT_1000404c
#undef _DAT_100040d0
#undef _DAT_100040d4
#undef str_1000210a
#undef str_10002137
#undef str_10002167
#undef str_1000219d
#undef str_100021c8
#undef str_100021f9
#undef str_10002247
#undef str_1000226e
#undef str_1000229d
#undef str_100022c0
#undef str_100022d4
#undef str_1000231e
#undef str_10002339
#undef str_1000234c
#undef str_10002362
#undef str_1000239f
#undef str_100023b4
#undef str_100023d2
#undef str_10002402
#undef str_10002489
#undef str_100024cf
#undef str_100024ed
#undef str_1000250b
#undef uRam00000000100020e8
#undef local_738
#undef local_72c
#undef local_330
#undef local_328
#undef local_324
#undef local_318
#undef local_308
#undef local_2c8
#undef local_288
#undef local_228
#undef local_168
#undef local_158
#undef local_118
#undef local_d8
#undef local_70
#undef local_64
#undef local_60
#undef local_5c
#undef uStack_160
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a4
 */

void recovered_100010a4(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


#undef DAT_100020f0
#define DAT_100020f0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10004008
#define DAT_10004008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f28U)))
#undef DAT_10004018
#define DAT_10004018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f38U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f40U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f44U)))
#undef DAT_10004028
#define DAT_10004028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef DAT_10004034
#define DAT_10004034 (*(int *)(((uintptr_t)pf_module_state + 0x1f54U)))
#undef UNK_10004010
#define UNK_10004010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f30U)))
#undef UNK_1000402c
#define UNK_1000402c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f4cU)))
#undef _DAT_10004008
#define _DAT_10004008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f28U)))
#undef _DAT_10004018
#define _DAT_10004018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f38U)))
#undef uRam0000000010004010
#define uRam0000000010004010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f30U)))
#undef uRam000000001000402c
#define uRam000000001000402c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010bf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100010bf(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short *psVar1;
  long lVar2;

  if (((DAT_10004034 == 0) && (*(short *)((long)param_1 + 4) == -0x7f7a)) &&
     (*(char *)(param_1 + 1) == '\x03')) {
    lVar2 = 0;
    do {
      if (lVar2 == 0x1a) {
        return;
      }
      psVar1 = (short *)((long)&DAT_100020f0 + lVar2);
      lVar2 = lVar2 + 2;
    } while (*psVar1 != *(short *)((long)param_1 + 6));
    _DAT_10004008 = *param_1;
    uRam0000000010004010 = param_1[1];
    _DAT_10004018 = param_1[2];
    uRam000000001000402c = *(undefined8 *)((long)param_1 + 0x24);
    DAT_10004028 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x1c) >> 0x20);
    DAT_10004020 = (undefined4)param_1[3];
    DAT_10004024 = (undefined4)((ulong)param_1[3] >> 0x20);
    DAT_10004034 = 1;
  }
  return;
}

#undef DAT_100020f0
#undef DAT_10004008
#undef DAT_10004018
#undef DAT_10004020
#undef DAT_10004024
#undef DAT_10004028
#undef DAT_10004034
#undef UNK_10004010
#undef UNK_1000402c
#undef _DAT_10004008
#undef _DAT_10004018
#undef uRam0000000010004010
#undef uRam000000001000402c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001128
 */

undefined8 recovered_10001128(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x43 < (uint)param_1[2])) {
    if (param_2 != 0 && (code *)(ulong)(uint)param_1[0x10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x10])(param_2);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000115c
 */

bool recovered_1000115c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  bVar4 = false;
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0x20)) && (*(int *)(param_1 + 0x1c) == 8))
      && ((((*(int *)(param_1 + 0x24) == 8 && (*(int *)(param_1 + 0x2c) == 8)) &&
           ((uVar1 = *(uint *)(param_1 + 0x20), uVar1 < 0x11 &&
            (((0x10101U >> (uVar1 & 0x1f) & 1) != 0 &&
             (uVar2 = *(uint *)(param_1 + 0x28), uVar2 < 0x11)))))) &&
          ((0x10101U >> (uVar2 & 0x1f) & 1) != 0)))) &&
     (((uVar3 = *(uint *)(param_1 + 0x30), uVar3 < 0x11 && ((0x10101U >> (uVar3 & 0x1f) & 1) != 0))
      && (uVar1 != uVar2)))) {
    bVar4 = uVar2 != uVar3 && uVar1 != uVar3;
  }
  return bVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011ca
 */

void recovered_100011ca(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     ((code *)(ulong)(uint)param_1[10] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100011ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f1
 */

undefined8
recovered_100011f1(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10002487
#define DAT_10002487 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a7U)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1f20U)))
#undef str_10002478
#define str_10002478 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#define local_34 (*(uint *)(pf_stack_frame + 1052))
#define local_438 (*(undefined1 (*)[1080])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000123e
 */

void recovered_1000123e(char *param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};


  local_34 = param_4;
  recovered_100015e2(local_438,0x400,str_10002478);
  recovered_10001ca6((long)local_438,0x400,param_1);
  recovered_10001ca6((long)local_438,0x400,&DAT_10002487);
  recovered_10001cfa((long)local_438,0x400,param_2,8);
  recovered_10001ca6((long)local_438,0x400,&DAT_10002487);
  recovered_10001cfa((long)local_438,0x400,param_3,8);
  recovered_10001ca6((long)local_438,0x400,&DAT_10002487);
  recovered_10001cfa((long)local_438,0x400,local_34,8);
  recovered_100011ca(DAT_10004000,local_438);
  return;
}

#undef DAT_10002487
#undef DAT_10004000
#undef str_10002478
#undef local_34
#undef local_438

#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000131e
 */

undefined8 recovered_1000131e(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 uVar3;

  local_1c = 0;
  uVar3 = 0;
  if (((param_2 != 0 && param_4 != (undefined4 *)0x0) && (param_1 != (int *)0x0)) &&
     (*param_1 == 0x54584b57)) {
    uVar2 = (param_3 & 0xffffffff) + param_2;
    if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
      if (uVar2 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
      if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4,&local_1c);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4,&local_1c);
    }
    if (iVar1 != 0) {
      *param_4 = local_1c;
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b3
 */

void recovered_100013b3(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0xdc)) ||
     ((code *)(ulong)(uint)param_1[0x36] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100013d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x36])();
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1f20U)))
#undef DAT_10004044
#define DAT_10004044 (*(uint *)(((uintptr_t)pf_module_state + 0x1f64U)))
#undef DAT_10004048
#define DAT_10004048 (*(uint *)(((uintptr_t)pf_module_state + 0x1f68U)))
#undef DAT_1000404c
#define DAT_1000404c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f6cU)))
#undef DAT_10004058
#define DAT_10004058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f78U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f80U)))
#undef DAT_10004068
#define DAT_10004068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f88U)))
#undef DAT_10004078
#define DAT_10004078 (*(uint *)(((uintptr_t)pf_module_state + 0x1f98U)))
#undef DAT_1000407c
#define DAT_1000407c (*(uint *)(((uintptr_t)pf_module_state + 0x1f9cU)))
#undef DAT_10004080
#define DAT_10004080 (*(uint *)(((uintptr_t)pf_module_state + 0x1fa0U)))
#undef DAT_1000408c
#define DAT_1000408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1facU)))
#undef DAT_10004094
#define DAT_10004094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fb4U)))
#undef DAT_1000409c
#define DAT_1000409c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fbcU)))
#undef DAT_100040a0
#define DAT_100040a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fc0U)))
#undef DAT_100040a8
#define DAT_100040a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fc8U)))
#undef DAT_100040dc
#define DAT_100040dc (*(int *)(((uintptr_t)pf_module_state + 0x1ffcU)))
#undef DAT_100040e0
#define DAT_100040e0 (*(int *)(((uintptr_t)pf_module_state + 0x2000U)))
#undef _DAT_1000404c
#define _DAT_1000404c (*(uint *)(((uintptr_t)pf_module_state + 0x1f6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013dd
 */

/* WARNING: Removing unreachable block (ram,0x100014e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100013dd(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;

  uVar2 = 0;
  if ((((param_4 != 0) && (param_3 != 0)) && (DAT_10004000 != (int *)0x0)) &&
     ((DAT_100040a8 != 0 && (DAT_100040a0 != 0)))) {
    uVar1 = DAT_1000407c - param_1;
    uVar4 = DAT_10004080 - param_2;
    uVar7 = DAT_10004048 - param_1;
    uVar8 = _DAT_1000404c - param_2;
    if (((_DAT_1000404c < param_2 || uVar8 == 0) || (DAT_10004048 < param_1 || uVar7 == 0)) ||
        ((DAT_10004080 < param_2 || uVar4 == 0) || (DAT_1000407c < param_1 || uVar1 == 0))) {
      uVar2 = 0;
    }
    else {
      if (uVar1 < param_3) {
        param_3 = uVar1;
      }
      if (uVar4 < param_4) {
        param_4 = uVar4;
      }
      if (uVar7 <= param_3) {
        param_3 = uVar7;
      }
      if (uVar8 <= param_4) {
        param_4 = uVar8;
      }
      uVar2 = 0;
      if (param_4 != 0 && param_3 != 0) {
        bVar13 = true;
        if ((DAT_1000408c == DAT_10004058) && (DAT_10004094 == DAT_10004060)) {
          bVar13 = DAT_1000409c != DAT_10004068;
        }
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        if (DAT_100040e0 != 0) {
          do {
          } while( true );
        }
        lVar5 = DAT_100040a8 + (ulong)param_1 * 4;
        lVar6 = (ulong)param_1 * 4 + DAT_100040a0;
        DAT_100040e0 = 1;
        for (uVar9 = 0; uVar9 != param_4; uVar9 = uVar9 + 1) {
          uVar3 = (ulong)(param_2 + (int)uVar9);
          uVar11 = (ulong)DAT_10004078;
          uVar12 = (ulong)DAT_10004044;
          for (uVar10 = 0; param_3 != uVar10; uVar10 = uVar10 + 1) {
            uVar1 = *(uint *)(uVar11 * uVar3 + lVar5 + uVar10 * 4);
            if (bVar13) {
              uVar1 = (uVar1 >> ((byte)DAT_1000409c & 0x1f) & 0xff) << ((byte)DAT_10004068 & 0x1f) |
                      (uVar1 >> ((byte)DAT_10004094 & 0x1f) & 0xff) << ((byte)DAT_10004060 & 0x1f) |
                      (uVar1 >> ((byte)DAT_1000408c & 0x1f) & 0xff) << ((byte)DAT_10004058 & 0x1f) |
                      0xff000000;
            }
            *(uint *)(uVar12 * uVar3 + lVar6 + uVar10 * 4) = uVar1;
          }
        }
        recovered_10001e47(DAT_10004000);
        DAT_100040dc = DAT_100040dc + 1;
        DAT_100040e0 = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004044
#undef DAT_10004048
#undef DAT_1000404c
#undef DAT_10004058
#undef DAT_10004060
#undef DAT_10004068
#undef DAT_10004078
#undef DAT_1000407c
#undef DAT_10004080
#undef DAT_1000408c
#undef DAT_10004094
#undef DAT_1000409c
#undef DAT_100040a0
#undef DAT_100040a8
#undef DAT_100040dc
#undef DAT_100040e0
#undef _DAT_1000404c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015e2
 */

void recovered_100015e2(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001ca6((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f6
 */

bool recovered_100015f6(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined7 extraout_var = 0;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  bool bVar32;

  bVar32 = false;
  if (param_2 != 0 && param_1 != 0) {
    uVar29 = (ulong)param_2;
    lVar16 = param_1 + 0x54;
    for (uVar31 = 0; uVar31 != uVar29; uVar31 = uVar31 + 1) {
      lVar3 = param_1 + uVar31 * 0x70;
      iVar13 = *(int *)(param_1 + uVar31 * 0x70);
      if (iVar13 == 3) {
        uVar19 = *(uint *)(lVar3 + 0x38);
        bVar32 = recovered_10001fab((int *)(lVar3 + 8));
        if ((int)CONCAT71(extraout_var,bVar32) == 0) goto LAB_100019cd;
        piVar1 = (int *)(lVar3 + 0x40);
        uVar17 = *(uint *)(lVar3 + 0x40);
        uVar15 = *(uint *)(lVar3 + 0x44);
        uVar25 = uVar17;
        uVar23 = uVar15;
        uVar28 = uVar17;
        uVar30 = uVar15;
        for (lVar10 = 0; lVar10 != 0x20; lVar10 = lVar10 + 0x10) {
          uVar8 = *(uint *)(lVar16 + -4 + lVar10);
          if ((int)uVar8 < (int)uVar25) {
            uVar25 = uVar8;
          }
          uVar5 = *(uint *)(lVar16 + lVar10);
          if ((int)uVar5 < (int)uVar23) {
            uVar23 = uVar5;
          }
          if ((int)uVar28 < (int)uVar8) {
            uVar28 = uVar8;
          }
          if ((int)uVar30 < (int)uVar5) {
            uVar30 = uVar5;
          }
        }
        if ((((-1 < (int)uVar28) && (-1 < (int)uVar30)) &&
            (iVar13 = *(int *)(lVar3 + 0x14), (int)uVar25 < iVar13)) &&
           (iVar18 = *(int *)(lVar3 + 0x18), (int)uVar23 < iVar18)) {
          piVar2 = (int *)(lVar3 + 0x50);
          iVar6 = *(int *)(lVar3 + 0x60);
          iVar7 = *(int *)(lVar3 + 100);
          lVar10 = recovered_10002038(piVar1,piVar2,iVar6,iVar7);
          if (lVar10 != 0) {
            uVar8 = iVar18 - 1;
            if ((int)uVar30 < iVar18) {
              uVar8 = uVar30;
            }
            uVar30 = iVar13 - 1;
            if ((int)uVar28 < iVar13) {
              uVar30 = uVar28;
            }
            if ((int)uVar25 < 1) {
              uVar25 = 0;
            }
            if ((int)uVar23 < 1) {
              uVar23 = 0;
            }
            iVar13 = *(int *)(lVar3 + 0x50);
            iVar18 = *(int *)(lVar3 + 0x54);
            lVar10 = recovered_10002038(piVar2,(int *)(lVar3 + 0x60),uVar25,uVar23);
            lVar11 = recovered_10002038((int *)(lVar3 + 0x60),piVar1,uVar25,uVar23);
            lVar12 = recovered_10002038(piVar1,piVar2,uVar25,uVar23);
            if (*(int *)(lVar3 + 8) == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = CONCAT44(*(undefined4 *)(lVar3 + 0xc),*(int *)(lVar3 + 8));
            }
            for (uVar21 = (ulong)uVar23; (long)uVar21 <= (long)(int)uVar8; uVar21 = uVar21 + 1) {
              lVar26 = *(uint *)(lVar3 + 0x1c) * uVar21;
              lVar4 = lVar14 + lVar26;
              uVar27 = lVar26 + lVar14;
              lVar26 = lVar11;
              lVar22 = lVar12;
              lVar24 = lVar10;
              for (uVar20 = (ulong)uVar25; (long)uVar20 <= (long)(int)uVar30; uVar20 = uVar20 + 1) {
                if (((((-1 < lVar24) && (-1 < lVar26)) && (-1 < lVar22)) ||
                    (((lVar24 < 1 && (lVar26 < 1)) && (lVar22 < 1)))) && (lVar14 != 0)) {
                  if ((uVar27 & 3) == 0) {
                    *(uint *)(lVar4 + uVar20 * 4) =
                         uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18;
                  }
                  else {
                    *(char *)(lVar4 + uVar20 * 4) = (char)(uVar19 >> 0x18);
                    *(char *)(lVar4 + 1 + uVar20 * 4) = (char)(uVar19 >> 0x10);
                    *(char *)(lVar4 + 2 + uVar20 * 4) = (char)(uVar19 >> 8);
                    *(char *)(lVar4 + 3 + uVar20 * 4) = (char)uVar19;
                  }
                }
                lVar24 = lVar24 + (iVar7 - iVar18);
                lVar26 = lVar26 + (int)(uVar15 - iVar7);
                lVar22 = lVar22 + (int)(iVar18 - uVar15);
                uVar27 = uVar27 + 4;
              }
              lVar10 = lVar10 - (iVar6 - iVar13);
              lVar11 = lVar11 - (int)(uVar17 - iVar6);
              lVar12 = lVar12 - (int)(iVar13 - uVar17);
            }
          }
        }
      }
      else {
        if (iVar13 == 2) {
          uVar17 = *(uint *)(lVar3 + 0x28);
          uVar15 = *(uint *)(lVar3 + 0x2c);
          iVar13 = *(int *)(lVar3 + 0x30);
          iVar18 = *(int *)(lVar3 + 0x34);
          uVar19 = *(uint *)(lVar3 + 0x38);
        }
        else {
          if (iVar13 != 1) goto LAB_100019cd;
          iVar13 = *(int *)(lVar3 + 0x14);
          iVar18 = *(int *)(lVar3 + 0x18);
          uVar19 = *(uint *)(lVar3 + 0x38);
          uVar17 = 0;
          uVar15 = 0;
        }
        uVar9 = recovered_10001e6b((int *)(lVar3 + 8),uVar17,uVar15,iVar13,iVar18,uVar19);
        if ((int)uVar9 == 0) {
          goto LAB_100019cd;
        }
      }
      lVar16 = lVar16 + 0x70;
    }
    uVar31 = uVar29;
LAB_100019cd:
    bVar32 = uVar29 <= uVar31;
  }
  return bVar32;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1f20U)))
#undef DAT_10004048
#define DAT_10004048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f68U)))
#undef DAT_100040d8
#define DAT_100040d8 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
#undef DAT_100040dc
#define DAT_100040dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ffcU)))
#undef _DAT_10004048
#define _DAT_10004048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f68U)))
#undef str_1000231e
#define str_1000231e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
#undef str_10002339
#define str_10002339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000234c
#define str_1000234c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26cU)))
#undef str_10002529
#define str_10002529 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x449U)))
#undef str_10002568
#define str_10002568 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x488U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100019e7(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;

  uVar2 = 0;
  if ((param_1 != (undefined8 *)0x0) && (DAT_10004000 != (int *)0x0)) {
    recovered_100010a4((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(undefined4 *)((long)param_1 + 0xc) = 8;
    uVar1 = 0x13;
    if (DAT_100040d8 == 0) {
      uVar1 = 0x19;
    }
    *(undefined4 *)(param_1 + 2) = uVar1;
    uVar1 = 0;
    if ((((DAT_10004000 != (int *)0x0) && (*DAT_10004000 == 0x54584b57)) &&
        (0x2f < (uint)DAT_10004000[2])) && ((code *)(ulong)(uint)DAT_10004000[0xb] != (code *)0x0))
    {
      uVar1 = (*(code *)(ulong)(uint)DAT_10004000[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined8 *)((long)param_1 + 0x44) = _DAT_10004048;
    *(undefined4 *)((long)param_1 + 0x4c) = DAT_100040dc;
    *(undefined4 *)(param_1 + 10) = 0;
    recovered_100015e2((undefined1 *)((long)param_1 + 0x54),0x40,str_1000231e);
    recovered_100015e2((undefined1 *)((long)param_1 + 0x94),0x40,str_10002339);
    pcVar3 = str_1000234c;
    if (DAT_100040d8 == 0) {
      pcVar3 = str_10002529;
    }
    recovered_100015e2((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar3);
    recovered_100015e2((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002568);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004048
#undef DAT_100040d8
#undef DAT_100040dc
#undef _DAT_10004048
#undef str_1000231e
#undef str_10002339
#undef str_1000234c
#undef str_10002529
#undef str_10002568

#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001af4
 */

undefined4
recovered_10001af4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_100011f1(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100011f1(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100011f1(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100011f1(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_100011f1(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca6
 */

void recovered_10001ca6(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001d57(param_1);
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
 * Address: 0x10001cfa
 */

void recovered_10001cfa(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001d77(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d57
 */

long recovered_10001d57(long param_1)

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
 * Address: 0x10001d77
 */

void recovered_10001d77(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001d57(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db1
 */

undefined8
recovered_10001db1(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if ((param_1 != (int *)0x0 && param_5 != (ulong *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbb < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2e] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(param_2,param_3,param_4,param_5);
      return uVar2;
    }
    if (((param_3 == 0) && (0x67 < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
      uVar2 = 0;
      iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(param_2,0,param_4,&local_1c);
      if (iVar1 != 0) {
        *param_5 = (ulong)local_1c;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e47
 */

void recovered_10001e47(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e6b
 */

undefined8
recovered_10001e6b(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined7 extraout_var = 0;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;

  bVar2 = recovered_10001fab(param_1);
  uVar4 = 0;
  if (((0 < param_5) && (0 < param_4)) && ((int)CONCAT71(extraout_var,bVar2) != 0)) {
    iVar8 = param_4 + param_2;
    iVar10 = param_5 + param_3;
    uVar4 = 1;
    if (((0 < iVar10 && 0 < iVar8) && (iVar9 = param_1[3], (int)param_2 < iVar9)) &&
       (iVar7 = param_1[4], (int)param_3 < iVar7)) {
      uVar12 = (ulong)param_2;
      if ((int)param_2 < 1) {
        uVar12 = 0;
      }
      uVar5 = 0;
      if (0 < (int)param_3) {
        uVar5 = (ulong)param_3;
      }
      if (iVar8 < iVar9) {
        iVar9 = iVar8;
      }
      if (iVar10 < iVar7) {
        iVar7 = iVar10;
      }
      lVar3 = recovered_10002009(param_1);
      for (; (long)uVar5 < (long)iVar7; uVar5 = uVar5 + 1) {
        uVar1 = param_1[5];
        puVar11 = (uint *)(lVar3 + uVar12 * 4 + uVar1 * uVar5);
        uVar6 = uVar12;
        if (((ulong)puVar11 & 3) == 0) {
          for (; (int)uVar6 < iVar9; uVar6 = uVar6 + 1) {
            *(uint *)(uVar1 * uVar5 + lVar3 + uVar6 * 4) =
                 param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 |
                 param_6 << 0x18;
          }
        }
        else {
          for (; (int)uVar6 < iVar9; uVar6 = (ulong)((int)uVar6 + 1)) {
            recovered_10002029(puVar11,param_6);
            puVar11 = puVar11 + 1;
          }
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fab
 */

bool recovered_10001fab(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if (((ulong)(uint)param_1[3] * 4 <= (ulong)(uint)param_1[5] &&
         ((param_1[4] != 0 && param_1[3] != 0) && param_1[6] == 1)) &&
       (((ulong)(uint)param_1[2] == 0 ||
        ((ulong)(uint)param_1[4] * (ulong)(uint)param_1[5] <= (ulong)(uint)param_1[2])))) {
      bVar1 = *param_1 != 0;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002009
 */

undefined8 recovered_10002009(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT44(param_1[1],*param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002029
 */

void recovered_10002029(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
               param_2 << 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002038
 */

long recovered_10002038(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002069
 */

void recovered_10002069(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10001d77(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10001d77(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
