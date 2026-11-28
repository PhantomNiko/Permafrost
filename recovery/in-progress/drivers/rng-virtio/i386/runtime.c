/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x259U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000660
 */

void * recovered_10000660(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002da7
#define DAT_10002da7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1259U)))
#undef str_10002da8
#define str_10002da8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_10002dbe
#define str_10002dbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17U)))
#define local_494 (*(int *)(pf_stack_frame + 28))
#define local_490 (*(int *)(pf_stack_frame + 32))
#define local_48c (*(undefined1 (*)[1164])(pf_stack_frame + 36))
#define local_480 (*(char *)(pf_stack_frame + 48))
#define local_460 (*(undefined1 (*)[1120])(pf_stack_frame + 80))
#define local_440 (*(undefined1 (*)[1088])(pf_stack_frame + 112))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000676
 */

uint recovered_10000676(void *api)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_100008bb(&DAT_10004000,0x84);
    recovered_100008bb(&local_494,8);
    recovered_100008bb(local_460,0x20);
    recovered_100008d4(&DAT_10002da7);
    if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
       (iVar1 = (**(code **)((int)api + 0xc))(&DAT_10002da7,str_10002da8,local_414), iVar1 != 0)) {
      if ((*(int *)api == 0x54584b57) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar3 = recovered_10002006(api,uVar2 & 0xff,uVar4 & 0xff,0,local_48c);
            if ((uVar3 != 0) && (recovered_100008f3(&local_494), local_480 < '\0')) {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                uVar3 = recovered_10002006(api,uVar2 & 0xff,uVar4 & 0xff,iVar1 + 8U & 0xff,local_440
                                          );
                if (uVar3 != 0) {
                  recovered_100008f3(&local_494);
                }
              }
            }
          }
        }
      }
      if (((((local_490 != 0) && (iVar1 = recovered_10001bb6(local_460,0x20), iVar1 != 0)) &&
           (*(int *)api == 0x54584b57)) &&
          ((0xe7 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xe4) != (code *)0x0)))) &&
         (iVar1 = (**(code **)((int)api + 0xe4))(recovered_10001bb6,0x100,str_10002dbe), iVar1 != 0)
         ) {
        if (*(code **)((int)api + 0xc) == (code *)0x0) {
          return 1;
        }
        (**(code **)((int)api + 0xc))(&DAT_10002da7,str_10002da8,local_414);
        return 1;
      }
      recovered_10001f48();
    }
  }
  return 0;
}

#undef DAT_10002da7
#undef DAT_10004000
#undef str_10002da8
#undef str_10002dbe
#undef local_494
#undef local_490
#undef local_48c
#undef local_480
#undef local_460
#undef local_440
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008bb
 */

void recovered_100008bb(void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (data != (void *)0x0) {
    while (bVar1 = size != 0, size = size - 1, bVar1) {
      *(undefined1 *)data = 0;
      data = (void *)((int)data + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d4
 */

void recovered_100008d4(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10001f9f(param_1);
  }
  return;
}


#undef DAT_10002da7
#define DAT_10002da7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10002e39
#define DAT_10002e39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_10002e3b
#define DAT_10002e3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_10002e3d
#define DAT_10002e3d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef DAT_10002e3f
#define DAT_10002e3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10002e44
#define DAT_10002e44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_10002e47
#define DAT_10002e47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_10002e49
#define DAT_10002e49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1259U)))
#undef DAT_10004004
#define DAT_10004004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x125dU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint *)(((uintptr_t)pf_module_state + 0x1261U)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x1265U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint *)(((uintptr_t)pf_module_state + 0x1269U)))
#undef DAT_10004014
#define DAT_10004014 (*(uint *)(((uintptr_t)pf_module_state + 0x126dU)))
#undef DAT_10004018
#define DAT_10004018 (*(uint *)(((uintptr_t)pf_module_state + 0x1271U)))
#undef DAT_1000401c
#define DAT_1000401c (*(uint *)(((uintptr_t)pf_module_state + 0x1275U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint *)(((uintptr_t)pf_module_state + 0x1279U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint *)(((uintptr_t)pf_module_state + 0x127dU)))
#undef DAT_10004028
#define DAT_10004028 (*(uint *)(((uintptr_t)pf_module_state + 0x1281U)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint *)(((uintptr_t)pf_module_state + 0x1285U)))
#undef DAT_10004030
#define DAT_10004030 (*(int *)(((uintptr_t)pf_module_state + 0x1289U)))
#undef DAT_10004034
#define DAT_10004034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x128dU)))
#undef DAT_10004038
#define DAT_10004038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1291U)))
#undef DAT_1000403c
#define DAT_1000403c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1295U)))
#undef DAT_10004040
#define DAT_10004040 (*(uint *)(((uintptr_t)pf_module_state + 0x1299U)))
#undef DAT_10004048
#define DAT_10004048 (*(uint *)(((uintptr_t)pf_module_state + 0x12a1U)))
#undef DAT_1000404c
#define DAT_1000404c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12a5U)))
#undef DAT_10004050
#define DAT_10004050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10004054
#define DAT_10004054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12adU)))
#undef DAT_10004058
#define DAT_10004058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12b1U)))
#undef DAT_1000405c
#define DAT_1000405c (*(uint *)(((uintptr_t)pf_module_state + 0x12b5U)))
#undef DAT_10004060
#define DAT_10004060 (*(int *)(((uintptr_t)pf_module_state + 0x12b9U)))
#undef DAT_10004068
#define DAT_10004068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_1000406c
#define DAT_1000406c (*(uint *)(((uintptr_t)pf_module_state + 0x12c5U)))
#undef DAT_10004070
#define DAT_10004070 (*(uint *)(((uintptr_t)pf_module_state + 0x12c9U)))
#undef DAT_10004074
#define DAT_10004074 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x12cdU)))
#undef DAT_1000407a
#define DAT_1000407a (*(byte *)(((uintptr_t)pf_module_state + 0x12d3U)))
#undef DAT_1000407b
#define DAT_1000407b (*(byte *)(((uintptr_t)pf_module_state + 0x12d4U)))
#undef DAT_1000407c
#define DAT_1000407c (*(byte *)(((uintptr_t)pf_module_state + 0x12d5U)))
#undef DAT_1000407d
#define DAT_1000407d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12d6U)))
#undef DAT_1000407e
#define DAT_1000407e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x12d7U)))
#undef DAT_10004080
#define DAT_10004080 (*(int *)(((uintptr_t)pf_module_state + 0x12d9U)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1359U)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1459U)))
#undef DAT_10004300
#define DAT_10004300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1559U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2259U)))
#undef str_10002dea
#define str_10002dea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43U)))
#undef str_10002e02
#define str_10002e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_10002e14
#define str_10002e14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dU)))
#undef str_10002e26
#define str_10002e26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#define local_8bc (*(uint *)(pf_stack_frame + 20))
#define local_8b8 (*(uint *)(pf_stack_frame + 24))
#define local_8b4 (*(int *)(pf_stack_frame + 28))
#define local_8b0 (*(uint *)(pf_stack_frame + 32))
#define local_8ac (*(uint *)(pf_stack_frame + 36))
#define local_8a8 (*(uint *)(pf_stack_frame + 40))
#define local_8a4 (*(char * *)(pf_stack_frame + 44))
#define local_8a0 (*(int * *)(pf_stack_frame + 48))
#define local_89c (*(undefined4 *)(pf_stack_frame + 52))
#define local_898 (*(int (*)[550])(pf_stack_frame + 56))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 92))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 188))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f3
 */

void recovered_100008f3(int *param_1)

{
  unsigned char pf_stack_frame[2288] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  char *pcVar6;
  int *in_ECX;
  uint uVar7;
  byte *in_EDX;
  uint uVar8;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  if (*(short *)(in_EDX + 4) != 0x1af4) {
    return;
  }
  if ((*(short *)(in_EDX + 6) != 0x1044) && (*(short *)(in_EDX + 6) != 0x1005)) {
    return;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  if (DAT_10004080 != 0) {
    return;
  }
  local_8a4 = &DAT_10002da7;
  recovered_100008d4(&DAT_10002da7);
  local_89c = 0;
  if (in_ECX == (int *)0x0) goto LAB_10000f71;
  recovered_100008bb(&DAT_10004000,0x84);
  local_8a0 = in_ECX;
  uVar4 = recovered_10002183(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,&local_89c);
  if (uVar4 == 0) goto LAB_10000f71;
  DAT_10004000 = in_ECX;
  DAT_1000406c = recovered_10002480();
  DAT_1000407a = *in_EDX;
  DAT_1000407b = in_EDX[1];
  DAT_1000407c = in_EDX[2];
  DAT_1000407e = (undefined2)local_89c;
  DAT_1000407d = 1;
  local_814[0] = 0;
  pcVar6 = str_10002e02;
  if (((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) && (in_ECX[0x18] != 0)) {
    uVar4 = recovered_10002183(in_ECX,CONCAT11(DAT_1000407c,DAT_1000407a) & 0xff,(uint)DAT_1000407b,
                               (uint)DAT_1000407c,4,2,local_814);
    if (uVar4 == 0) {
      pcVar6 = str_10002e14;
      goto LAB_10000f54;
    }
    uVar4 = 0;
    for (iVar5 = -0x18; iVar5 != 0; iVar5 = iVar5 + 4) {
      uVar8 = uVar4 | 1;
      uVar7 = uVar4 | 2;
      if (*(uint *)(in_EDX + iVar5 + 0x2c) == 0) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
      if ((*(uint *)(in_EDX + iVar5 + 0x2c) & 1) != 0) {
        uVar4 = uVar8;
      }
    }
    iVar5 = recovered_10001fe5();
    piVar2 = local_8a0;
    uVar7 = uVar4 | 4;
    if (iVar5 == 0) {
      uVar7 = uVar4;
    }
    if (in_EDX[8] == 6) {
      if (in_EDX[9] != 0) {
        uVar7 = uVar7 | 2;
      }
    }
    local_874[0] = local_814[0] | uVar7;
    iVar5 = recovered_100024af(in_EDX[1],in_EDX[2],local_874[0]);
    if (iVar5 == 0) {
      pcVar6 = str_10002e26;
      goto LAB_10000f54;
    }
    recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,local_874);
    piVar2 = DAT_10004000;
    if ((uVar7 & ~local_874[0]) == 0) {
      local_898[6] = 0;
      local_898[5] = 0;
      local_898[4] = 0;
      local_898[3] = 0;
      local_898[2] = 0;
      local_898[1] = 0;
      local_898[0] = 0;
      local_814[0] = 0;
      recovered_100008bb(&DAT_10004004,100);
      uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],0x34,1,
                                 local_814);
      if (uVar4 != 0) {
        uVar4 = 0;
        while ((uVar4 < 0x20 && (local_814[0] - 0x40 < 0xb0))) {
          local_874[0] = 0;
          local_8a8 = 0;
          local_8b4 = 0;
          local_8bc = 0;
          local_8ac = 0;
          local_8b0 = 0;
          local_898[8] = uVar4;
          uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                     local_814[0] & 0xffff,1,local_874);
          if ((uVar4 == 0) ||
             (uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                         local_814[0] + 1 & 0xffff,1,&local_8a8), uVar4 == 0))
          break;
          if ((((local_874[0] == 9) &&
               (uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                           local_814[0] + 3 & 0xffff,1,&local_8b4), uVar4 != 0)) &&
              (uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 4 & 0xffff,1,&local_8bc), uVar4 != 0)) &&
             ((uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 8 & 0xffff,4,&local_8ac), uVar4 != 0 &&
              (uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 0xc & 0xffff,4,&local_8b0), uVar4 != 0))))
          {
            local_8b8 = 0;
            DAT_10004030 = DAT_10004030 + 1;
            if ((!(0x37 < local_8b0 && local_8b4 == 1)) ||
               (iVar5 = recovered_10002640(local_8bc,local_8ac,local_8b0,(int *)&local_8b8),
               iVar5 == 0)) {
              if ((local_8b0 < 2 || local_8b4 != 2) ||
                 (iVar5 = recovered_10002640(local_8bc,local_8ac,local_8b0,(int *)&local_8b8),
                 iVar5 == 0)) {
                if ((local_8b4 == 3) &&
                   (iVar5 = recovered_10002640(local_8bc,local_8ac,local_8b0,(int *)&local_8b8),
                   iVar5 != 0)) {
                  DAT_1000400c = local_8b8;
                  DAT_10004020 = local_8bc;
                }
                else if ((local_8b4 == 4) &&
                        (iVar5 = recovered_10002640(local_8bc,local_8ac,local_8b0,(int *)&local_8b8)
                        , iVar5 != 0)) {
                  DAT_10004010 = local_8b8;
                  DAT_10004014 = local_8b0;
                  DAT_10004024 = local_8bc;
                }
              }
              else {
                local_898[7] = 0;
                DAT_10004008 = local_8b8;
                DAT_1000401c = local_8bc;
                uVar4 = recovered_10002183(piVar2,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                           local_814[0] + 0x10 & 0xffff,4,local_898 + 7);
                if (local_898[7] == 0 || uVar4 == 0) {
                  DAT_10004008 = 0;
                }
                else {
                  DAT_10004028 = local_898[7];
                  DAT_1000402c = local_8b0;
                }
              }
            }
            else {
              DAT_10004004 = local_8b8;
              DAT_10004018 = local_8bc;
            }
          }
          if ((local_8a8 == 0) || (local_8a8 == local_814[0])) break;
          uVar4 = local_898[8] + 1;
          local_814[0] = local_8a8;
        }
        piVar2 = DAT_10004000;
        if (DAT_10004004 == 0) goto LAB_100016e0;
        DAT_10004068 = 1;
        local_814[0] = 0;
        local_874[0] = 0;
        recovered_10002806(0x14,((uintptr_t)pf_module_state+0x129dU));
        DAT_1000404c = 1;
        bVar3 = recovered_1000283c();
        if (CONCAT31(extraout_var,bVar3) == 0) {
LAB_10001692:
          iVar5 = recovered_10002806(0x14,(int)local_874);
          if (local_874[0] != 0 && iVar5 != 0) {
            recovered_100028c9();
          }
          goto LAB_100016e0;
        }
        DAT_1000404c = 2;
        iVar5 = recovered_100028c9();
        if (((iVar5 == 0) || (iVar5 = recovered_10002806(0x14,(int)local_874), iVar5 == 0)) ||
           ((local_874[0] & 0xc1) != 1)) goto LAB_10001692;
        DAT_1000404c = 3;
        iVar5 = recovered_100028c9();
        if (((iVar5 == 0) || (iVar5 = recovered_10002806(0x14,(int)local_874), iVar5 == 0)) ||
           ((local_874[0] & 0xc3) != 3)) goto LAB_10001692;
        DAT_1000404c = 4;
        iVar5 = recovered_100028f0();
        if (((iVar5 == 0) || (iVar5 = recovered_10002917((undefined4 *)&DAT_10004034), iVar5 == 0))
           || ((iVar5 = recovered_100028f0(), iVar5 == 0 ||
               ((iVar5 = recovered_10002917(&DAT_10004038), iVar5 == 0 || ((DAT_10004038 & 1) == 0))
               )))) goto LAB_10001692;
        DAT_1000403c = 0;
        DAT_10004040 = DAT_10004038 & 3;
        DAT_1000404c = 5;
        iVar5 = recovered_100028f0();
        if ((iVar5 == 0) ||
           (((iVar5 = recovered_100028f0(), iVar5 == 0 || (iVar5 = recovered_100028f0(), iVar5 == 0)
             ) || (iVar5 = recovered_100028f0(), iVar5 == 0)))) goto LAB_10001692;
        recovered_10002965(piVar2);
        local_874[0] = 0xb;
        DAT_1000404c = 6;
        iVar5 = recovered_100028c9();
        if (((iVar5 == 0) || (iVar5 = recovered_10002806(0x14,((uintptr_t)pf_module_state+0x12a1U)), iVar5 == 0)) ||
           ((DAT_10004048 & 200) != 8)) goto LAB_10001692;
        DAT_1000404c = 7;
        iVar5 = recovered_100025f2(0x12,(undefined4 *)&DAT_10004050);
        if (((iVar5 == 0) || (iVar5 = recovered_10002806(0x15,((uintptr_t)pf_module_state+0x12bdU)), iVar5 == 0)) ||
           ((uVar4 = recovered_10002548(piVar2,DAT_10004004,0x16,0), uVar4 == 0 ||
            ((iVar5 = recovered_100025f2(0x18,&DAT_10004054), iVar5 == 0 ||
             (iVar5 = recovered_100025f2(0x1c,&DAT_10004058), iVar5 == 0)))))) goto LAB_10001692;
        iVar5 = recovered_100025f2(0x1e,local_814);
        uVar4 = DAT_10004040;
        if (iVar5 != 0) {
          DAT_1000405c = local_814[0];
          if ((((DAT_10004008 != 0) && (DAT_10004028 != 0)) && (1 < DAT_1000402c)) &&
             ((int)((ulonglong)DAT_10004028 * (ulonglong)local_814[0] >> 0x20) == 0)) {
            uVar7 = DAT_10004028 * local_814[0];
            if (!CARRY4(DAT_10004008,uVar7) && uVar7 <= DAT_1000402c - 2) {
              DAT_10004060 = DAT_10004008 + uVar7;
            }
          }
        }
        DAT_1000404c = 8;
        uVar7 = recovered_10002480();
        DAT_1000406c = (~uVar4 & 2) << 0x1d | uVar7;
        if (((DAT_10004054 == 0) || (DAT_10004058 != 0)) ||
           (((DAT_10004060 == 0 ||
             ((uVar4 = recovered_100024fc(DAT_10004000,DAT_1000406c,&DAT_10004100,0x10,
                                          (uint *)(local_898 + 6),(uint *)(local_898 + 5)),
              uVar4 == 0 ||
              (uVar4 = recovered_100024fc(DAT_10004000,DAT_1000406c,&DAT_10004200,8,
                                          (uint *)(local_898 + 4),(uint *)(local_898 + 3)),
              uVar4 == 0)))) ||
            (uVar4 = recovered_100024fc(DAT_10004000,DAT_1000406c,&DAT_10004300,0xe,
                                        (uint *)(local_898 + 2),(uint *)(local_898 + 1)), uVar4 == 0
            )))) goto LAB_100016e0;
        recovered_100008bb(&DAT_10004100,0x10);
        recovered_100008bb(&DAT_10004200,8);
        recovered_100008bb(&DAT_10004300,0xe);
        uVar4 = recovered_10002548(DAT_10004000,DAT_10004004,0x16,0);
        if ((((uVar4 == 0) ||
             (uVar4 = recovered_10002548(DAT_10004000,DAT_10004004,0x18,1), uVar4 == 0)) ||
            (bVar3 = recovered_1000256f(), CONCAT31(extraout_var_00,bVar3) == 0)) ||
           ((bVar3 = recovered_1000256f(), CONCAT31(extraout_var_01,bVar3) == 0 ||
            (bVar3 = recovered_1000256f(), CONCAT31(extraout_var_02,bVar3) == 0))))
        goto LAB_100016e0;
        recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10004100,0x10);
        recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10004200,8);
        recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10004300,0xe);
        uVar4 = recovered_10002548(DAT_10004000,DAT_10004004,0x1c,1);
        if ((((uVar4 == 0) ||
             ((iVar5 = recovered_100025f2(0x1c,local_898), iVar5 == 0 || (local_898[0] == 0)))) ||
            ((local_814[0] = 0, DAT_10004004 == 0 ||
             (((iVar5 = recovered_10002806(0x14,(int)local_814), iVar5 == 0 ||
               ((local_814[0] & 200) != 8)) || (iVar5 = recovered_100028c9(), iVar5 == 0)))))) ||
           ((iVar5 = recovered_10002806(0x14,(int)local_814), iVar5 == 0 ||
            ((local_814[0] & 0xc4) != 4)))) goto LAB_100016e0;
        DAT_10004074 = 1;
LAB_1000195e:
        DAT_10004080 = 1;
        recovered_100008d4(local_8a4);
        pcVar6 = recovered_100021e7();
        recovered_100008d4(str_10002dea);
        recovered_10001f9f(&DAT_10002e39);
        recovered_10002aee((uint)*in_EDX,2);
        local_8a4 = &DAT_10002e3b;
        recovered_10001f9f(&DAT_10002e3b);
        recovered_10002aee((uint)in_EDX[1],2);
        recovered_10001f9f(&DAT_10002e3d);
        recovered_10002b40((uint)in_EDX[2]);
        recovered_100008d4(&DAT_10002e3f);
        recovered_10002aee((uint)*in_EDX,2);
        recovered_10001f9f(local_8a4);
        recovered_10002aee((uint)in_EDX[1],2);
        recovered_10001f9f(&DAT_10002e3d);
        recovered_10002b40((uint)in_EDX[2]);
        recovered_10001f9f(&DAT_10002e44);
        recovered_10002aee((uint)*(ushort *)(in_EDX + 4),4);
        recovered_10001f9f(local_8a4);
        recovered_10002aee((uint)*(ushort *)(in_EDX + 6),4);
        recovered_10001f9f(&DAT_10002e47);
        if (local_414[0] != '\0') {
          recovered_10001f9f(&DAT_10002e49);
          recovered_10001f9f(local_414);
        }
        if (((code *)local_8a0[3] != (code *)0x0) &&
           (iVar5 = (*(code *)local_8a0[3])(local_874,pcVar6,local_814), iVar5 != 0)) {
          if (param_1 == (int *)0x0) {
            return;
          }
          param_1[1] = param_1[1] + 1;
          return;
        }
        goto LAB_10000f71;
      }
LAB_100016e0:
      local_814[0] = 0;
      local_874[0] = 0;
      local_8a8 = 0;
      local_8b4 = 0;
      if (*(ushort *)(in_EDX + 6) < 0x1040) {
        iVar5 = -0x18;
        do {
          if (iVar5 == 0) goto LAB_10000f6c;
          iVar1 = iVar5 + 0x2c;
          iVar5 = iVar5 + 4;
        } while ((*(uint *)(in_EDX + iVar1) & 1) == 0);
        uVar4 = *(uint *)(in_EDX + iVar1) & 0xfffffffc;
        if (0xffff0012 < uVar4 - 0xffee) {
          DAT_10004068 = 2;
          uVar7 = recovered_10002480();
          DAT_1000406c = uVar7 | 0x40000000;
          uVar8 = uVar4 + 0x12 & 0xffff;
          DAT_10004070 = uVar4;
          uVar7 = recovered_10002a6c(DAT_10004000,uVar8,1,0);
          if (((((uVar7 != 0) && (iVar5 = recovered_10002aa4(1,(int)&local_8b4), iVar5 != 0)) &&
               ((local_8b4 == 0 &&
                ((((uVar7 = recovered_10002a6c(DAT_10004000,uVar8,1,3), uVar7 != 0 &&
                   (uVar7 = recovered_10002a6c(DAT_10004000,uVar4 + 0xe & 0xffff,2,0), uVar7 != 0))
                  && (iVar5 = recovered_10002aa4(2,(int)local_814), iVar5 != 0)) &&
                 ((local_814[0] - 1 < 0x80 &&
                  (uVar7 = local_814[0] - (local_814[0] >> 1 & 0x55555555),
                  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333),
                  ((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))))))) &&
              (uVar7 = recovered_100024fc(DAT_10004000,DAT_1000406c,&DAT_10005000,0x3000,local_874,
                                          &local_8a8), uVar7 != 0)) &&
             ((local_8a8 == 0 && ((local_874[0] & 0xfff) == 0)))) {
            recovered_100008bb(&DAT_10005000,0x3000);
            recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10005000,0x3000);
            uVar7 = recovered_10002a6c(DAT_10004000,uVar4 + 4 & 0xffff,4,0);
            if ((uVar7 != 0) &&
               ((uVar4 = recovered_10002a6c(DAT_10004000,uVar4 + 8 & 0xffff,4,local_874[0] >> 0xc),
                uVar4 != 0 && (uVar4 = recovered_10002a6c(DAT_10004000,uVar8,1,7), uVar4 != 0)))) {
              DAT_10004074 = (undefined2)local_814[0];
              goto LAB_1000195e;
            }
          }
        }
      }
    }
  }
  else {
LAB_10000f54:
    recovered_10001f9f(pcVar6);
  }
LAB_10000f6c:
  recovered_10001f48();
LAB_10000f71:
  recovered_10001f48();
  return;
}

#undef DAT_10002da7
#undef DAT_10002e39
#undef DAT_10002e3b
#undef DAT_10002e3d
#undef DAT_10002e3f
#undef DAT_10002e44
#undef DAT_10002e47
#undef DAT_10002e49
#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004008
#undef DAT_1000400c
#undef DAT_10004010
#undef DAT_10004014
#undef DAT_10004018
#undef DAT_1000401c
#undef DAT_10004020
#undef DAT_10004024
#undef DAT_10004028
#undef DAT_1000402c
#undef DAT_10004030
#undef DAT_10004034
#undef DAT_10004038
#undef DAT_1000403c
#undef DAT_10004040
#undef DAT_10004048
#undef DAT_1000404c
#undef DAT_10004050
#undef DAT_10004054
#undef DAT_10004058
#undef DAT_1000405c
#undef DAT_10004060
#undef DAT_10004068
#undef DAT_1000406c
#undef DAT_10004070
#undef DAT_10004074
#undef DAT_1000407a
#undef DAT_1000407b
#undef DAT_1000407c
#undef DAT_1000407d
#undef DAT_1000407e
#undef DAT_10004080
#undef DAT_10004100
#undef DAT_10004200
#undef DAT_10004300
#undef DAT_10005000
#undef str_10002dea
#undef str_10002e02
#undef str_10002e14
#undef str_10002e26
#undef local_8bc
#undef local_8b8
#undef local_8b4
#undef local_8b0
#undef local_8ac
#undef local_8a8
#undef local_8a4
#undef local_8a0
#undef local_89c
#undef local_898
#undef local_874
#undef local_814
#undef local_414

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1259U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint *)(((uintptr_t)pf_module_state + 0x12b9U)))
#undef DAT_10004068
#define DAT_10004068 (*(int *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_1000406c
#define DAT_1000406c (*(uint *)(((uintptr_t)pf_module_state + 0x12c5U)))
#undef DAT_10004070
#define DAT_10004070 (*(uint *)(((uintptr_t)pf_module_state + 0x12c9U)))
#undef DAT_10004074
#define DAT_10004074 (*(ushort *)(((uintptr_t)pf_module_state + 0x12cdU)))
#undef DAT_10004076
#define DAT_10004076 (*(ushort *)(((uintptr_t)pf_module_state + 0x12cfU)))
#undef DAT_10004078
#define DAT_10004078 (*(ushort *)(((uintptr_t)pf_module_state + 0x12d1U)))
#undef DAT_10004080
#define DAT_10004080 (*(int *)(((uintptr_t)pf_module_state + 0x12d9U)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1359U)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1459U)))
#undef DAT_10004300
#define DAT_10004300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1559U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2259U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5259U)))
#undef DAT_10008100
#define DAT_10008100 (*(int *)(((uintptr_t)pf_module_state + 0x5359U)))
#define local_24 (*(uint (*)[9])(pf_stack_frame + 28))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb6
 */

/* WARNING: Removing unreachable block (ram,0x10001c18) */

undefined4 recovered_10001bb6(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined *data;
  int iVar4;
  undefined *data_00;
  uint uVar5;
  undefined *data_01;
  ushort uVar6;
  undefined1 *puVar7;
  bool bVar8;

  iVar2 = DAT_10008100;
  iVar4 = DAT_10004068;
  local_24[1] = 0;
  local_24[0] = 0;
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  local_18 = param_2;
  if (0xff < param_2 - 1) {
    return 0;
  }
  if (DAT_10004080 == 0) {
    return 0;
  }
  { __typeof__(DAT_10008100) pf_atomic_old = __atomic_exchange_n(&(DAT_10008100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  uVar5 = (uint)DAT_10004074;
  data = &DAT_10004300;
  if (DAT_10004068 == 2) {
    data = &DAT_10005000 + (uVar5 * 0x12 + 0x1005 & 0x3ff000);
  }
  uVar3 = recovered_100024fc(DAT_10004000,DAT_1000406c,&DAT_10008000,param_2,local_24 + 1,local_24);
  if (uVar3 != 0) {
    data_00 = &DAT_10004200;
    if (iVar4 == 2) {
      data_00 = &DAT_10005000 + uVar5 * 0x10;
    }
    data_01 = &DAT_10004100;
    if (iVar4 == 2) {
      data_01 = &DAT_10005000;
    }
    recovered_100008bb(&DAT_10008000,0x100);
    *data_01 = (char)local_24[1];
    data_01[1] = (char)(local_24[1] >> 8);
    data_01[2] = (char)(local_24[1] >> 0x10);
    data_01[3] = (char)(local_24[1] >> 0x18);
    data_01[4] = (char)local_24[0];
    data_01[5] = (char)(local_24[0] >> 8);
    data_01[6] = (char)(local_24[0] >> 0x10);
    data_01[7] = (char)(local_24[0] >> 0x18);
    data_01[8] = (char)param_2;
    data_01[9] = (char)(param_2 >> 8);
    *(undefined4 *)(data_01 + 10) = 0x20000;
    *(undefined2 *)(data_01 + 0xe) = 0;
    *(undefined2 *)(data_00 + ((uint)DAT_10004076 % (uint)DAT_10004074) * 2 + 4) = 0;
    iVar4 = DAT_10004076 + 1;
    DAT_10004076 = (ushort)iVar4;
    data_00[2] = (char)iVar4;
    data_00[3] = (char)((uint)iVar4 >> 8);
    recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10008000,param_2);
    recovered_100025c0(DAT_10004000,DAT_1000406c,data_01,(uint)DAT_10004074 << 4);
    recovered_100025c0(DAT_10004000,DAT_1000406c,data_00,(uint)DAT_10004074 * 2 + 6);
    recovered_100025c0(DAT_10004000,DAT_1000406c,data,(uint)DAT_10004074 * 8 + 6);
    recovered_10002965(DAT_10004000);
    if (DAT_10004068 == 1) {
      if (DAT_10004060 == 0) goto LAB_10001efb;
      uVar5 = recovered_10002548(DAT_10004000,DAT_10004060,0,0);
    }
    else {
      if (0xffef < DAT_10004070 || DAT_10004068 != 2) goto LAB_10001efb;
      uVar5 = recovered_10002a6c(DAT_10004000,DAT_10004070 + 0x10 & 0xffff,2,0);
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      iVar4 = 1000;
      while (bVar8 = iVar4 != 0, iVar4 = iVar4 + -1, bVar8) {
        recovered_100025c0(DAT_10004000,DAT_1000406c,data,(uint)DAT_10004074 * 8 + 6);
        uVar6 = *(ushort *)(data + 2);
        if (uVar6 != DAT_10004078) break;
        recovered_100029f3(DAT_10004000);
      }
      uVar1 = DAT_10004078;
      if ((uVar6 != DAT_10004078) && ((ushort)(uVar6 - DAT_10004078) <= DAT_10004074)) {
        uVar5 = (uint)DAT_10004074;
        uVar3 = (uint)DAT_10004078;
        local_24[2] = recovered_10002c3e(data + (uVar3 % uVar5) * 8 + 4);
        uVar5 = recovered_10002c3e(data + (uVar3 % uVar5) * 8 + 8);
        DAT_10004078 = uVar1 + 1;
        if ((local_24[2] == 0) && (uVar5 < 0x101 && param_2 <= uVar5)) {
          puVar7 = &DAT_10008000;
          recovered_100025c0(DAT_10004000,DAT_1000406c,&DAT_10008000,uVar5);
          while (bVar8 = local_18 != 0, local_18 = local_18 - 1, bVar8) {
            *param_1 = *puVar7;
            param_1 = param_1 + 1;
            puVar7 = puVar7 + 1;
          }
          DAT_10008100 = 0;
          return 1;
        }
      }
    }
  }
LAB_10001efb:
  recovered_10002c70();
  DAT_10008100 = 0;
  return 0;
}

#undef DAT_10004000
#undef DAT_10004060
#undef DAT_10004068
#undef DAT_1000406c
#undef DAT_10004070
#undef DAT_10004074
#undef DAT_10004076
#undef DAT_10004078
#undef DAT_10004080
#undef DAT_10004100
#undef DAT_10004200
#undef DAT_10004300
#undef DAT_10005000
#undef DAT_10008000
#undef DAT_10008100
#undef local_24
#undef local_18

#undef DAT_10004000
#define DAT_10004000 (*(int *)(((uintptr_t)pf_module_state + 0x1259U)))
#undef DAT_1000407b
#define DAT_1000407b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12d4U)))
#undef DAT_1000407c
#define DAT_1000407c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12d5U)))
#undef DAT_1000407d
#define DAT_1000407d (*(char *)(((uintptr_t)pf_module_state + 0x12d6U)))
#undef DAT_1000407e
#define DAT_1000407e (*(ushort *)(((uintptr_t)pf_module_state + 0x12d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f48
 */

void recovered_10001f48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002c70();
  if ((DAT_10004000 != 0) && (DAT_1000407d != '\0')) {
    recovered_100024af(DAT_1000407b,DAT_1000407c,(uint)DAT_1000407e);
  }
  return;
}

#undef DAT_10004000
#undef DAT_1000407b
#undef DAT_1000407c
#undef DAT_1000407d
#undef DAT_1000407e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f9f
 */

void recovered_10001f9f(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10001fe5();
  if (param_1 != (char *)0x0 && in_ECX != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_1 == '\0') || (in_EDX <= uVar1)) break;
      *(char *)(in_ECX + -1 + uVar1) = *param_1;
      param_1 = param_1 + 1;
    }
    *(undefined1 *)(in_ECX + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fe5
 */

int recovered_10001fe5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;

  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(in_ECX + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002006
 */

uint recovered_10002006(int *api,uint bus,uint slot,uint function,void *out)

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
    uVar1 = recovered_10002183(api,bus_00,slot_00,function_00,0,4,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_10002183(api,bus_00,slot_00,function_00,8,4,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_10002183(api,bus_00,slot_00,function_00,4,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_10002183(api,bus_00,slot_00,function_00,0xc,4,&local_34);
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
          uVar1 = recovered_10002183(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,4,
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

#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002183
 */

uint recovered_10002183(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)api[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x17])
                    (bus & 0xff,slot & 0xff,(undefined1)function,offset & 0xffff,width,out);
  return uVar1;
}


#undef str_10002e4c
#define str_10002e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5U)))
#undef str_10002e57
#define str_10002e57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_10002e66
#define str_10002e66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_10002e77
#define str_10002e77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_10002e8a
#define str_10002e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_10002e9d
#define str_10002e9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_10002ead
#define str_10002ead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#undef str_10002ebc
#define str_10002ebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10002ecb
#define str_10002ecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10002edc
#define str_10002edc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10002ee7
#define str_10002ee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#undef str_10002ef3
#define str_10002ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_10002efd
#define str_10002efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x156U)))
#undef str_10002f06
#define str_10002f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10002f11
#define str_10002f11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_10002f1a
#define str_10002f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x173U)))
#undef str_10002f22
#define str_10002f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
#undef str_10002f2b
#define str_10002f2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
#undef str_10002f32
#define str_10002f32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_10002f45
#define str_10002f45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_10002f58
#define str_10002f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_10002f6b
#define str_10002f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e7
 */

char * recovered_100021e7(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;
  int in_ECX;

  if (in_ECX == 0) goto switchD_1000238c_caseD_5;
  sVar1 = *(short *)(in_ECX + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
      return str_10002f06;
    }
LAB_10002373:
    pcVar2 = str_10002f32;
    switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
    case 1:
      pcVar2 = str_10002f58;
      break;
    case 2:
      pcVar2 = str_10002f45;
      break;
    case 3:
      break;
    case 4:
      pcVar2 = str_10002f6b;
      break;
    case 0xc:
      if (*(char *)(in_ECX + 9) == '\x03') {
LAB_100023ac:
        pcVar2 = recovered_10002bd5();
        return pcVar2;
      }
    default:
switchD_1000238c_caseD_5:
      pcVar2 = str_10002e4c;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(in_ECX + 6) == 0x194) {
        return str_10002efd;
      }
      goto LAB_10002373;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
LAB_10002311:
        return str_10002f2b;
      }
      goto LAB_10002373;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(in_ECX + 6) == 0x2bad) goto LAB_10002311;
      goto LAB_10002373;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10002f22;
      }
      goto LAB_10002373;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(in_ECX + 6) == 0x1111) {
        return str_10002f11;
      }
      goto LAB_10002373;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(in_ECX + 6) == 0x100e) {
        return str_10002ee7;
      }
      if (*(char *)(in_ECX + 8) == '\f') {
        if (*(char *)(in_ECX + 9) == '\x03') goto LAB_100023ac;
      }
      else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
        return str_10002ef3;
      }
      goto LAB_10002373;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(in_ECX + 6) == 0x100) {
        return str_10002f1a;
      }
      goto LAB_10002373;
    }
    if (sVar1 != 0x1af4) goto LAB_10002373;
    pcVar2 = str_10002e57;
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002280_caseD_1042:
      pcVar2 = str_10002e66;
      break;
    case 0x1043:
switchD_10002280_caseD_1043:
      pcVar2 = str_10002e8a;
      break;
    case 0x1044:
switchD_10002280_caseD_1044:
      pcVar2 = str_10002ead;
      break;
    case 0x1045:
switchD_10002280_caseD_1045:
      pcVar2 = str_10002e77;
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
switchD_10002280_caseD_1046:
      pcVar2 = str_10002edc;
      break;
    case 0x1048:
switchD_10002280_caseD_1048:
      pcVar2 = str_10002e9d;
      break;
    case 0x1050:
      pcVar2 = str_10002ebc;
      break;
    case 0x1052:
      pcVar2 = str_10002ecb;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002280_caseD_1042;
      case 0x1002:
        goto switchD_10002280_caseD_1045;
      case 0x1003:
        goto switchD_10002280_caseD_1043;
      case 0x1004:
        goto switchD_10002280_caseD_1048;
      case 0x1005:
        goto switchD_10002280_caseD_1044;
      default:
        goto switchD_10002280_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10002e4c
#undef str_10002e57
#undef str_10002e66
#undef str_10002e77
#undef str_10002e8a
#undef str_10002e9d
#undef str_10002ead
#undef str_10002ebc
#undef str_10002ecb
#undef str_10002edc
#undef str_10002ee7
#undef str_10002ef3
#undef str_10002efd
#undef str_10002f06
#undef str_10002f11
#undef str_10002f1a
#undef str_10002f22
#undef str_10002f2b
#undef str_10002f32
#undef str_10002f45
#undef str_10002f58
#undef str_10002f6b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002480
 */

uint recovered_10002480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *in_ECX;

  if (in_ECX == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)in_ECX[2] << 8 | (uint)in_ECX[1] << 0xb | (uint)*in_ECX << 0x10 | 0x80000000;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024af
 */

undefined4 recovered_100024af(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     ((code *)in_ECX[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x18])(in_DL,param_1,param_2,4,2,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024fc
 */

uint recovered_100024fc(int *api,uint device,void *data,uint size,uint *low,uint *high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x74)) ||
     (((low == (uint *)0x0 || (data == (void *)0x0)) || ((code *)api[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)api[0x1c])(device,data,size,low,high);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002548
 */

uint recovered_10002548(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10002a22(api,base + offset,2,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000256f
 */

bool recovered_1000256f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_100028f0();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = recovered_100028f0();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c0
 */

void recovered_100025c0(int *api,uint device,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x77 < (uint)api[2])) &&
     ((code *)api[0x1d] != (code *)0x0)) {
    (*(code *)api[0x1d])(device,data,size);
  }
  return;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f2
 */

undefined4 recovered_100025f2(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_1000298d(2,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

undefined4 recovered_10002640(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int iVar2;
  byte *in_EDX;
  int iVar3;

  iVar3 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (5 < param_1) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  local_24 = 0;
  if (((param_1 == 0) || ((*(uint *)(in_EDX + param_1 * 4 + 0x10) & 7) != 4)) &&
     (local_28 = *(uint *)(in_EDX + param_1 * 4 + 0x14), (local_28 & 1) == 0 && local_28 != 0)) {
    local_18 = (uint)in_EDX[2];
    local_1c = param_1 * 4 + 0x10 & 0xffff;
    recovered_10002183(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],local_18,local_1c,4,&local_28);
    iVar2 = 0;
    if ((local_28 & 7) == 4) {
      if (4 < param_1) {
        return 0;
      }
      local_24 = *(int *)(in_EDX + param_1 * 4 + 0x18);
      recovered_10002183(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                         param_1 * 4 + 0x14 & 0xffff,4,&local_24);
      iVar2 = local_24;
    }
    uVar1 = 0xfffffffc;
    if ((local_28 & 1) == 0) {
      uVar1 = 0xfffffff0;
    }
    uVar1 = uVar1 & local_28;
    if ((iVar3 != 0) && (uVar1 != 0 || iVar2 != 0)) {
      *param_4 = 0;
      local_20 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((0x67 < (uint)in_ECX[2] && iVar2 == 0) &&
             (((code *)in_ECX[0x19] != (code *)0x0 &&
              (iVar3 = (*(code *)in_ECX[0x19])(uVar1,0,iVar3,&local_20), iVar3 != 0))))
          goto LAB_100027f9;
        }
        else {
          iVar3 = (*(code *)in_ECX[0x2e])(uVar1,iVar2,iVar3,param_4);
          if (iVar3 != 0) {
            local_20 = *param_4;
LAB_100027f9:
            *param_4 = local_20 + param_2;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002806
 */

undefined4 recovered_10002806(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000298d(1,param_2);
  }
  return uVar1;
}


#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000283c
 */

bool recovered_1000283c(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;
  bool bVar3;

  local_18[0] = 0xff;
  bVar3 = false;
  if (in_EDX != 0 && in_ECX != (int *)0x0) {
    iVar1 = recovered_100028c9();
    if (iVar1 != 0) {
      recovered_10002965(in_ECX);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        iVar1 = recovered_10002806(0x14,(int)local_18);
        if ((iVar1 != 0) && (local_18[0] == 0)) break;
        recovered_100029f3(in_ECX);
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_18

#define in_stack_00000004 (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c9
 */

uint recovered_100028c9(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002a22(in_ECX,in_EDX + 0x14,1,in_stack_00000004);
  return uVar1;
}

#undef in_stack_00000004

#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
#define in_stack_00000008 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

uint recovered_100028f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002a22(in_ECX,in_EDX + in_stack_00000004,4,in_stack_00000008);
  return uVar1;
}

#undef in_stack_00000004
#undef in_stack_00000008

#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002917
 */

undefined4 recovered_10002917(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_1 != (undefined4 *)0x0) {
    iVar1 = recovered_1000298d(4,(int)local_14);
    if (iVar1 != 0) {
      *param_1 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002965
 */

void recovered_10002965(int *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x7b < (uint)api[2])) &&
     ((code *)api[0x1e] != (code *)0x0)) {
    (*(code *)api[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000298d
 */

undefined4 recovered_1000298d(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  code *pcVar2;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_100029db;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_100029db:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f3
 */

void recovered_100029f3(int *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x33 < (uint)api[2])) &&
     ((code *)api[0xc] != (code *)0x0)) {
    (*(code *)api[0xc])(10);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a22
 */

uint recovered_10002a22(int *api,uint address,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;

  if ((api != (int *)0x0) && (*api == 0x54584b57)) {
    if ((uint)api[2] < 0xc4) {
      if ((uint)api[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)api[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10002a50;
    }
    pcVar1 = (code *)api[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10002a50:
      uVar2 = (*pcVar1)(address,width,value);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a6c
 */

uint recovered_10002a6c(int *api,uint port,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x5c)) ||
     ((code *)api[0x16] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x16])(port & 0xffff,width,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa4
 */

undefined4 recovered_10002aa4(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined2 in_DX;

  if ((((in_ECX == (int *)0x0 || param_2 == 0) || (*in_ECX != 0x54584b57)) ||
      ((uint)in_ECX[2] < 0x58)) || ((code *)in_ECX[0x15] == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x15])(in_DX,param_1,param_2);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aee
 */

void recovered_10002aee(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_2 * 4;
  while( true ) {
    iVar4 = iVar4 + -4;
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) break;
    uVar2 = param_1 >> ((byte)iVar4 & 0x1f) & 0xf;
    cVar1 = (char)uVar2;
    cVar3 = cVar1 + '7';
    if (uVar2 < 10) {
      cVar3 = cVar1 + '0';
    }
    recovered_10002ba7(cVar3);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

void recovered_10002b40(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10002ba7(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10002ba7(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba7
 */

void recovered_10002ba7(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10001fe5();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


#undef DAT_10002f81
#define DAT_10002f81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef DAT_10002f86
#define DAT_10002f86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef DAT_10002f8b
#define DAT_10002f8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef DAT_10002f90
#define DAT_10002f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_10002f95
#define str_10002f95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeU)))
#undef str_10002fa0
#define str_10002fa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_10002fa9
#define str_10002fa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd5
 */

char * recovered_10002bd5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int in_ECX;

  if (in_ECX == 0) {
    pcVar1 = &DAT_10002f81;
  }
  else if (in_ECX == 0xfe) {
    pcVar1 = str_10002fa0;
  }
  else if (in_ECX == 0x20) {
    pcVar1 = &DAT_10002f8b;
  }
  else if (in_ECX == 0x30) {
    pcVar1 = &DAT_10002f90;
  }
  else if (in_ECX == 0x80) {
    pcVar1 = str_10002f95;
  }
  else if (in_ECX == 0x10) {
    pcVar1 = &DAT_10002f86;
  }
  else {
    pcVar1 = str_10002fa9;
  }
  return pcVar1;
}

#undef DAT_10002f81
#undef DAT_10002f86
#undef DAT_10002f8b
#undef DAT_10002f90
#undef str_10002f95
#undef str_10002fa0
#undef str_10002fa9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3e
 */

uint recovered_10002c3e(void *data)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (data == (void *)0x0) {
    return 0;
  }
  return *(uint *)data;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x1259U)))
#undef DAT_10004004
#define DAT_10004004 (*(int *)(((uintptr_t)pf_module_state + 0x125dU)))
#undef DAT_10004068
#define DAT_10004068 (*(int *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_10004070
#define DAT_10004070 (*(uint *)(((uintptr_t)pf_module_state + 0x12c9U)))
#undef DAT_10004080
#define DAT_10004080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c70
 */

void recovered_10002c70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10004000 != (int *)0x0) {
    if (DAT_10004004 == 0 || DAT_10004068 != 1) {
      if (DAT_10004070 < 0xffee && DAT_10004068 == 2) {
        recovered_10002a6c(DAT_10004000,DAT_10004070 + 0x12 & 0xffff,1,0);
      }
    }
    else {
      recovered_1000283c();
    }
  }
  DAT_10004080 = 0;
  return;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004068
#undef DAT_10004070
#undef DAT_10004080

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ceb
 */

undefined8 recovered_10002ceb(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10002d26;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002d26;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002d26:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d2d
 */

undefined8 recovered_10002d2d(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002d71
 */

undefined8 recovered_10002d71(uint param_1,uint param_2,uint param_3)

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
