/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007e5
 */

void * recovered_100007e5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003eb4
#define DAT_10003eb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_10003eb5
#define DAT_10003eb5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef DAT_10003eb9
#define DAT_10003eb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x115U)))
#undef DAT_10003f9a
#define DAT_10003f9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f6U)))
#undef DAT_10003f9c
#define DAT_10003f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f8U)))
#undef DAT_10003f9e
#define DAT_10003f9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1faU)))
#undef DAT_10003fa0
#define DAT_10003fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef DAT_10003fa5
#define DAT_10003fa5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x201U)))
#undef DAT_10003fa8
#define DAT_10003fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_10003faa
#define DAT_10003faa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x206U)))
#undef DAT_10004100
#define DAT_10004100 (*(void * *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_10004168
#define DAT_10004168 (*(byte *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_10004169
#define DAT_10004169 (*(byte *)(((uintptr_t)pf_module_state + 0x3c5U)))
#undef DAT_1000416a
#define DAT_1000416a (*(byte *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_1000416c
#define DAT_1000416c (*(ushort *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef DAT_1000416e
#define DAT_1000416e (*(ushort *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_10004194
#define DAT_10004194 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f0U)))
#undef DAT_10004198
#define DAT_10004198 (*(int *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_1000419c
#define DAT_1000419c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f8U)))
#undef DAT_100041a0
#define DAT_100041a0 (*(uint *)(((uintptr_t)pf_module_state + 0x3fcU)))
#undef DAT_100041a4
#define DAT_100041a4 (*(uint *)(((uintptr_t)pf_module_state + 0x400U)))
#undef DAT_100041a8
#define DAT_100041a8 (*(uint *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_100041ac
#define DAT_100041ac (*(uint *)(((uintptr_t)pf_module_state + 0x408U)))
#undef DAT_100041c8
#define DAT_100041c8 (*(int *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_100041d0
#define DAT_100041d0 (*(int *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_100041d4
#define DAT_100041d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x430U)))
#undef DAT_100041d8
#define DAT_100041d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_100041dc
#define DAT_100041dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_100041e0
#define DAT_100041e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_100041f4
#define DAT_100041f4 (*(int *)(((uintptr_t)pf_module_state + 0x450U)))
#undef DAT_10004204
#define DAT_10004204 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x460U)))
#undef DAT_10004818
#define DAT_10004818 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa74U)))
#undef DAT_1000481c
#define DAT_1000481c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa78U)))
#undef DAT_10004820
#define DAT_10004820 (*(uint *)(((uintptr_t)pf_module_state + 0xa7cU)))
#undef DAT_10004824
#define DAT_10004824 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa80U)))
#undef DAT_10004828
#define DAT_10004828 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#undef DAT_1000482c
#define DAT_1000482c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa88U)))
#undef _DAT_10004824
#define _DAT_10004824 (*(uint *)(((uintptr_t)pf_module_state + 0xa80U)))
#undef str_10003ebc
#define str_10003ebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118U)))
#undef str_10003ec8
#define str_10003ec8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10003ed6
#define str_10003ed6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
#undef str_10003ee8
#define str_10003ee8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_10003fad
#define str_10003fad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 28))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 124))
#define local_808 (*(undefined4 *)(pf_stack_frame + 136))
#define local_414 (*(undefined4 (*)[261])(pf_stack_frame + 1148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007fb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100007fb(void *api)

{
  unsigned char pf_stack_frame[2224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar5;
  int iVar6;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  recovered_1000107e();
  DAT_10004204 = 0;
  DAT_10004100 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        uVar3 = recovered_10002707(api,uVar2 & 0xff,uVar5 & 0xff,0,local_814);
        if (uVar3 != 0) {
          recovered_10001097();
          if ((char)local_808 < '\0') {
            for (iVar6 = -7; iVar6 != 0; iVar6 = iVar6 + 1) {
              uVar3 = recovered_10002707(api,uVar2 & 0xff,uVar5 & 0xff,iVar6 + 8U & 0xff,local_414);
              if (uVar3 != 0) {
                recovered_10001097();
              }
            }
          }
        }
      }
    }
  }
  if (DAT_100041f4 == 0 && DAT_100041d0 == 0) goto LAB_100009d0;
  if ((((*(code **)((int)api + 0x1c) != (code *)0x0) &&
       (iVar6 = (**(code **)((int)api + 0x1c))(0x500,800,0x20), iVar6 != 0)) &&
      ((*(int *)api == 0x54584b57 &&
       ((0x43 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0x40) != (code *)0x0)))))) &&
     ((iVar6 = (**(code **)((int)api + 0x40))(&DAT_10004194), iVar6 != 0 &&
      (((DAT_100041ac == 0x20 && (DAT_100041a4 * 4 <= DAT_100041a0)) && (DAT_10004198 == 0)))))) {
    DAT_100041c8 = DAT_10004194;
    if (DAT_100041f4 == 0) {
      local_814[0] = 0;
      DAT_100041d8 = 1;
      recovered_1000321d();
      DAT_10004818 = 1;
      DAT_1000481c = 2;
      DAT_10004820 = DAT_100041a4;
      _DAT_10004824 = DAT_100041a8;
      bVar1 = recovered_10003246(local_814);
      if ((CONCAT31(extraout_var,bVar1) != 0) && (local_814[0] == 0x1100)) {
        local_814[0] = 0;
        local_414[0] = 0;
        local_874[0] = 0;
        iVar6 = recovered_1000308a(DAT_100041c8,DAT_1000419c,(int)local_814);
        if (iVar6 != 0) {
          DAT_100041dc = 1;
          recovered_1000321d();
          DAT_10004818 = 1;
          DAT_1000481c = 1;
          recovered_100035c7(local_414[0]);
          DAT_10004828 = DAT_1000419c;
          DAT_1000482c = 0;
          bVar1 = recovered_10003246(local_874);
          if ((CONCAT31(extraout_var_00,bVar1) != 0) && (local_874[0] == 0x1100)) {
            DAT_100041d4 = 1;
            local_814[0] = 0;
            DAT_100041e0 = 1;
            recovered_1000321d();
            DAT_10004818 = 0;
            DAT_1000481c = 0;
            DAT_10004820 = DAT_100041a4;
            _DAT_10004824 = DAT_100041a8;
            DAT_10004828 = 0;
            DAT_1000482c = 1;
            bVar1 = recovered_10003246(local_814);
            if ((CONCAT31(extraout_var_01,bVar1) != 0) && (local_814[0] == 0x1100))
            goto LAB_10000a09;
          }
        }
      }
    }
    else {
LAB_10000a09:
      iVar6 = recovered_100022f2(0,0,DAT_100041a4,DAT_100041a8);
      if ((((((iVar6 != 0) && (*(int *)api == 0x54584b57)) && (0xcf < *(uint *)((int)api + 8))) &&
           ((*(code **)((int)api + 0xcc) != (code *)0x0 &&
            (iVar6 = (**(code **)((int)api + 0xcc))(recovered_100022f2), iVar6 != 0)))) &&
          (*(int *)api == 0x54584b57)) &&
         (((0xd7 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd4) != (code *)0x0)) &&
          (iVar6 = (**(code **)((int)api + 0xd4))(), iVar6 != 0)))) {
        if (((*(int *)api == 0x54584b57) && (0xb7 < *(uint *)((int)api + 8))) &&
           (*(code **)((int)api + 0xb4) != (code *)0x0)) {
          (**(code **)((int)api + 0xb4))(1);
        }
        recovered_1000263b(&DAT_10003eb4);
        recovered_1000265a(DAT_100041a4);
        recovered_100026c1(&DAT_10003eb5);
        recovered_1000265a(DAT_100041a8);
        recovered_100026c1(&DAT_10003eb9);
        recovered_1000265a(DAT_100041ac);
        recovered_100026c1(str_10003ebc);
        pcVar4 = str_10003ed6;
        if (DAT_100041f4 == 0) {
          pcVar4 = str_10003ee8;
        }
        recovered_1000263b(str_10003ec8);
        recovered_100026c1(&DAT_10003f9a);
        uVar3 = (uint)DAT_10004168;
        recovered_10003630(uVar3,2);
        recovered_100026c1(&DAT_10003f9c);
        uVar2 = (uint)DAT_10004169;
        recovered_10003630(uVar2,2);
        recovered_100026c1(&DAT_10003f9e);
        uVar5 = (uint)DAT_1000416a;
        recovered_1000265a(uVar5);
        recovered_1000263b(&DAT_10003fa0);
        recovered_10003630(uVar3,2);
        recovered_100026c1(&DAT_10003f9c);
        recovered_10003630(uVar2,2);
        recovered_100026c1(&DAT_10003f9e);
        recovered_1000265a(uVar5);
        recovered_100026c1(&DAT_10003fa5);
        recovered_10003630((uint)DAT_1000416c,4);
        recovered_100026c1(&DAT_10003f9c);
        recovered_10003630((uint)DAT_1000416e,4);
        recovered_100026c1(&DAT_10003fa8);
        if ((char)local_414[0] != '\0') {
          recovered_100026c1(&DAT_10003faa);
          recovered_100026c1((char *)local_414);
        }
        if (*(code **)((int)api + 0xc) != (code *)0x0) {
          (**(code **)((int)api + 0xc))(local_874,pcVar4,local_814);
        }
        recovered_1000107e();
        local_814[0] = 0x90;
        local_814[1] = 0xc;
        local_814[2] = 7;
        local_808 = 0x100;
        recovered_1000263b(str_10003ee8);
        recovered_1000263b(str_10003fad);
        if (((*(int *)api == 0x54584b57) && (199 < *(uint *)((int)api + 8))) &&
           (*(code **)((int)api + 0xc4) != (code *)0x0)) {
          (**(code **)((int)api + 0xc4))(local_814,recovered_10003682);
        }
        if (*(code **)((int)api + 0xc) != (code *)0x0) {
          pcVar4 = str_10003ed6;
          if (DAT_100041f4 == 0) {
            pcVar4 = str_10003ee8;
          }
          (**(code **)((int)api + 0xc))(&DAT_10003eb4,pcVar4,local_414);
        }
        return 1;
      }
    }
  }
  recovered_100022bb();
LAB_100009d0:
  recovered_10002186();
  return 0;
}

#undef DAT_10003eb4
#undef DAT_10003eb5
#undef DAT_10003eb9
#undef DAT_10003f9a
#undef DAT_10003f9c
#undef DAT_10003f9e
#undef DAT_10003fa0
#undef DAT_10003fa5
#undef DAT_10003fa8
#undef DAT_10003faa
#undef DAT_10004100
#undef DAT_10004168
#undef DAT_10004169
#undef DAT_1000416a
#undef DAT_1000416c
#undef DAT_1000416e
#undef DAT_10004194
#undef DAT_10004198
#undef DAT_1000419c
#undef DAT_100041a0
#undef DAT_100041a4
#undef DAT_100041a8
#undef DAT_100041ac
#undef DAT_100041c8
#undef DAT_100041d0
#undef DAT_100041d4
#undef DAT_100041d8
#undef DAT_100041dc
#undef DAT_100041e0
#undef DAT_100041f4
#undef DAT_10004204
#undef DAT_10004818
#undef DAT_1000481c
#undef DAT_10004820
#undef DAT_10004824
#undef DAT_10004828
#undef DAT_1000482c
#undef _DAT_10004824
#undef str_10003ebc
#undef str_10003ec8
#undef str_10003ed6
#undef str_10003ee8
#undef str_10003fad
#undef local_874
#undef local_814
#undef local_808
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000107e
 */

void recovered_1000107e(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;
  bool bVar1;

  if (in_ECX != (undefined1 *)0x0) {
    while (bVar1 = in_EDX != 0, in_EDX = in_EDX + -1, bVar1) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}


#undef DAT_10003eb4
#define DAT_10003eb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_10004144
#define DAT_10004144 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3a0U)))
#undef DAT_100041d0
#define DAT_100041d0 (*(int *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_100041f0
#define DAT_100041f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x44cU)))
#undef DAT_100041f4
#define DAT_100041f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x450U)))
#undef DAT_100041f8
#define DAT_100041f8 (*(byte *)(((uintptr_t)pf_module_state + 0x454U)))
#undef DAT_100041f9
#define DAT_100041f9 (*(byte *)(((uintptr_t)pf_module_state + 0x455U)))
#undef DAT_100041fa
#define DAT_100041fa (*(byte *)(((uintptr_t)pf_module_state + 0x456U)))
#undef DAT_100041fb
#define DAT_100041fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x457U)))
#undef DAT_100041fc
#define DAT_100041fc (*(uint16_t *)(((uintptr_t)pf_module_state + 0x458U)))
#define local_430 (*(uint *)(pf_stack_frame + 80))
#define local_42c (*(int (*)[267])(pf_stack_frame + 84))
#define local_468 (*(uint *)(pf_stack_frame + 24))
#define local_464 (*(byte * *)(pf_stack_frame + 28))
#define local_460 (*(int *)(pf_stack_frame + 32))
#define local_45c (*(uint *)(pf_stack_frame + 36))
#define local_458 (*(uint *)(pf_stack_frame + 40))
#define local_454 (*(uint *)(pf_stack_frame + 44))
#define local_450 (*(int *)(pf_stack_frame + 48))
#define local_44c (*(int *)(pf_stack_frame + 52))
#define local_448 (*(uint *)(pf_stack_frame + 56))
#define local_444 (*(uint *)(pf_stack_frame + 60))
#define local_440 (*(uint *)(pf_stack_frame + 64))
#define local_43c (*(undefined2 * *)(pf_stack_frame + 68))
#define local_438 (*(uint *)(pf_stack_frame + 72))
#define local_434 (*(uint *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001097
 */

void recovered_10001097(void)

{
  unsigned char pf_stack_frame[1184] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  int *in_ECX;
  uint uVar6;
  byte *in_EDX;
  int iVar7;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  if (*(short *)(in_EDX + 4) == 0x1234) {
    if (*(short *)(in_EDX + 6) != 0x1111) {
      return;
    }
    if (DAT_100041d0 != 0) {
      return;
    }
    local_440 = 0;
    local_44c = 0;
    local_460 = 0x100010ad;
    recovered_1000263b(&DAT_10003eb4);
    uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,&local_44c);
    if (uVar2 == 0) {
      return;
    }
    bVar1 = recovered_100028e8();
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      return;
    }
    uVar2 = recovered_10002a66(in_ECX,in_EDX,0,0x3e8000,&local_440);
    if (uVar2 == 0) {
      return;
    }
    local_468 = 0;
    local_45c = 0;
    uVar2 = recovered_10002a66(in_ECX,in_EDX,2,0x1000,&local_468);
    if ((((((uVar2 == 0) || (iVar7 = recovered_10002dee(0x500,&local_45c), iVar7 == 0)) ||
          (local_45c - 0xb0c6 < 0xfffffffa)) ||
         ((iVar7 = recovered_10002e3c(), iVar7 == 0 || (iVar7 = recovered_10002e3c(), iVar7 == 0))))
        || (iVar7 = recovered_10002e3c(), iVar7 == 0)) ||
       ((iVar7 = recovered_10002e3c(), iVar7 == 0 || (iVar7 = recovered_10002e3c(), iVar7 == 0)))) {
      local_468 = 0;
      iVar7 = recovered_10002f13(0);
      if (in_ECX == (int *)0x0) {
        return;
      }
      if (iVar7 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      if ((uint)in_ECX[2] < 0x58) {
        return;
      }
      if ((code *)in_ECX[0x15] == (code *)0x0) {
        return;
      }
      iVar7 = (*(code *)in_ECX[0x15])(0x1cf,2,&local_468);
      if (iVar7 == 0) {
        return;
      }
      if (local_468 - 0xb0c6 < 0xfffffffa) {
        return;
      }
      iVar7 = recovered_10002f13(4);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(0);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(1);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(0x500);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(2);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(800);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(3);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(0x20);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(4);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = recovered_10002f13(0x41);
      if (iVar7 == 0) {
        return;
      }
    }
    *(byte *)(local_460 + 0x314b) = *in_EDX;
    *(byte *)(local_460 + 0x314c) = in_EDX[1];
    *(byte *)(local_460 + 0x314d) = in_EDX[2];
    *(undefined2 *)(local_460 + 0x314f) = (undefined2)local_44c;
    *(undefined1 *)(local_460 + 0x314e) = 1;
    *(uint *)(local_460 + 0x3143) = local_440;
    *(undefined4 *)(local_460 + 0x3147) = 1;
    recovered_10002c21();
    return;
  }
  if (*(short *)(in_EDX + 4) != 0x1af4) {
    return;
  }
  if (*(short *)(in_EDX + 6) != 0x1050) {
    return;
  }
  if (DAT_100041d0 != 0) {
    return;
  }
  recovered_1000263b(&DAT_10003eb4);
  DAT_100041f8 = *in_EDX;
  DAT_100041f9 = in_EDX[1];
  local_460 = 0x100010ad;
  DAT_100041fa = in_EDX[2];
  DAT_100041f4 = 0;
  DAT_100041f0 = 0;
  local_43c = &DAT_10004144;
  uVar2 = recovered_10002884(in_ECX,(uint)DAT_100041f8,(uint)DAT_100041f9,(uint)DAT_100041fa,4,2,
                             &DAT_10004144);
  if (uVar2 == 0) {
    return;
  }
  DAT_100041fc = DAT_10004144;
  DAT_100041fb = 1;
  bVar1 = recovered_100028e8();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    local_430 = 0;
    local_42c[3] = 0;
    local_434 = 0;
    local_42c[2] = 0;
    local_438 = 0;
    local_42c[1] = 0;
    local_42c[0] = 0;
    iVar7 = 0x100010ad;
    if (DAT_100041d0 != 0) {
LAB_100011c9:
      recovered_10002c21();
      local_468 = 0;
      recovered_1000321d();
      bVar1 = recovered_10003246(&local_468);
      if (CONCAT31(extraout_var_00,bVar1) == 0) {
        return;
      }
      if (local_468 != 0x1101) {
        return;
      }
      iVar3 = 0;
      uVar2 = iVar7 + 0x357b;
      iVar7 = 0x10;
      while (bVar1 = iVar7 != 0, iVar7 = iVar7 + -1, bVar1) {
        local_464 = (byte *)recovered_10003595();
        iVar4 = recovered_10003595();
        local_454 = uVar2;
        iVar5 = recovered_10003595();
        if (!(iVar4 == 0 || (local_464 == (byte *)0x0 || iVar5 == 0))) {
          if (iVar3 == 0) {
            *(byte **)(local_460 + 0x313b) = local_464;
            *(int *)(local_460 + 0x313f) = iVar4;
            iVar3 = 0;
          }
          iVar3 = iVar3 + 1;
        }
        uVar2 = local_454 + 0x18;
      }
      return;
    }
    local_468 = 0;
    recovered_1000107e();
    uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],0x34,1,
                               &local_468);
    if (uVar2 != 0) {
      uVar2 = 0;
      while ((uVar2 < 0x20 && (local_468 - 0x40 < 0xb0))) {
        local_45c = 0;
        local_440 = 0;
        local_44c = 0;
        local_458 = 0;
        local_444 = 0;
        local_448 = 0;
        local_464 = (byte *)(uint)in_EDX[1];
        local_454 = uVar2;
        uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                   local_468 & 0xffff,1,&local_45c);
        if (uVar2 == 0) break;
        local_464 = (byte *)(uint)in_EDX[1];
        uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                   local_468 + 1 & 0xffff,1,&local_440);
        if (uVar2 == 0) break;
        if (local_45c == 9) {
          local_464 = (byte *)(uint)in_EDX[1];
          uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                     local_468 + 3 & 0xffff,1,&local_44c);
          if (uVar2 != 0) {
            local_464 = (byte *)(uint)in_EDX[1];
            uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                       local_468 + 4 & 0xffff,1,&local_458);
            if (uVar2 != 0) {
              local_464 = (byte *)(uint)in_EDX[1];
              uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                         local_468 + 8 & 0xffff,4,&local_444);
              if (uVar2 != 0) {
                local_464 = (byte *)(uint)in_EDX[1];
                uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)local_464,(uint)in_EDX[2],
                                           local_468 + 0xc & 0xffff,4,&local_448);
                iVar7 = local_460;
                if (uVar2 != 0) {
                  local_450 = 0;
                  *(int *)(local_460 + 0x3083) = *(int *)(local_460 + 0x3083) + 1;
                  if ((local_448 < 0x38 || local_44c != 1) ||
                     (iVar3 = recovered_10003159(local_458,local_444,local_448,&local_450),
                     iVar3 == 0)) {
                    if ((local_448 < 2 || local_44c != 2) ||
                       (iVar3 = recovered_10003159(local_458,local_444,local_448,&local_450),
                       iVar3 == 0)) {
                      if ((local_44c == 3) &&
                         (iVar3 = recovered_10003159(local_458,local_444,local_448,&local_450),
                         iVar3 != 0)) {
                        *(int *)(iVar7 + 0x305f) = local_450;
                        *(uint *)(iVar7 + 0x3073) = local_458;
                      }
                      else if ((local_44c == 4) &&
                              (iVar3 = recovered_10003159(local_458,local_444,local_448,&local_450),
                              iVar3 != 0)) {
                        *(int *)(iVar7 + 0x3063) = local_450;
                        *(uint *)(iVar7 + 0x3067) = local_448;
                        *(uint *)(iVar7 + 0x3077) = local_458;
                      }
                    }
                    else {
                      local_42c[4] = 0;
                      *(int *)(iVar7 + 0x305b) = local_450;
                      *(uint *)(iVar7 + 0x306f) = local_458;
                      local_464 = in_EDX;
                      uVar2 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],
                                                 (uint)in_EDX[2],local_468 + 0x10 & 0xffff,4,
                                                 local_42c + 4);
                      if (local_42c[4] == 0 || uVar2 == 0) {
                        *(undefined4 *)(local_460 + 0x305b) = 0;
                      }
                      else {
                        *(int *)(local_460 + 0x307b) = local_42c[4];
                        *(uint *)(local_460 + 0x307f) = local_448;
                      }
                      in_EDX = local_464;
                    }
                  }
                  else {
                    *(int *)(iVar7 + 0x3057) = local_450;
                    *(uint *)(iVar7 + 0x306b) = local_458;
                  }
                }
              }
            }
          }
        }
        if ((local_440 == 0) || (local_440 == local_468)) break;
        uVar2 = local_454 + 1;
        local_468 = local_440;
      }
      iVar7 = local_460;
      if (*(int *)(local_460 + 0x3057) != 0) {
        local_468 = 0;
        local_45c = 0;
        recovered_10003029(0x14,(int)local_43c);
        *(undefined4 *)(iVar7 + 0x309f) = 1;
        bVar1 = recovered_10002f4a();
        if (CONCAT31(extraout_var_02,bVar1) != 0) {
          *(undefined4 *)(iVar7 + 0x309f) = 2;
          iVar3 = recovered_10002fda();
          if (((iVar3 != 0) && (iVar3 = recovered_10003029(0x14,(int)&local_45c), iVar3 != 0)) &&
             ((local_45c & 0xc1) == 1)) {
            *(undefined4 *)(iVar7 + 0x309f) = 3;
            iVar3 = recovered_10002fda();
            if (((iVar3 != 0) && (iVar3 = recovered_10003029(0x14,(int)&local_45c), iVar3 != 0)) &&
               ((local_45c & 0xc3) == 3)) {
              *(undefined4 *)(iVar7 + 0x309f) = 4;
              iVar3 = recovered_100031a8();
              if (((iVar3 != 0) &&
                  (iVar3 = recovered_100031cf((undefined4 *)(iVar7 + 0x3087)), iVar3 != 0)) &&
                 ((iVar3 = recovered_100031a8(), iVar3 != 0 &&
                  ((iVar3 = recovered_100031cf((undefined4 *)(iVar7 + 0x308b)), iVar3 != 0 &&
                   ((*(uint *)(iVar7 + 0x308b) & 1) != 0)))))) {
                *(undefined4 *)(iVar7 + 0x308f) = 0;
                *(uint *)(iVar7 + 0x3093) = *(uint *)(iVar7 + 0x308b) & 3;
                *(undefined4 *)(iVar7 + 0x309f) = 5;
                iVar3 = recovered_100031a8();
                if ((iVar3 != 0) &&
                   (((iVar3 = recovered_100031a8(), iVar3 != 0 &&
                     (iVar3 = recovered_100031a8(), iVar3 != 0)) &&
                    (iVar3 = recovered_100031a8(), iVar3 != 0)))) {
                  recovered_10003001();
                  local_45c = 0xb;
                  *(undefined4 *)(iVar7 + 0x309f) = 6;
                  iVar3 = recovered_10002fda();
                  if (((iVar3 != 0) && (iVar3 = recovered_10003029(0x14,iVar7 + 0x309b), iVar3 != 0)
                      ) && ((*(uint *)(iVar7 + 0x309b) & 200) == 8)) {
                    *(undefined4 *)(iVar7 + 0x309f) = 7;
                    iVar3 = recovered_10002dee(0x12,(undefined4 *)(iVar7 + 0x30a3));
                    if (((iVar3 != 0) &&
                        (iVar3 = recovered_10003029(0x15,iVar7 + 0x30b7), iVar3 != 0)) &&
                       ((iVar3 = recovered_10002e3c(), iVar3 != 0 &&
                        ((iVar3 = recovered_10002dee(0x18,(undefined4 *)(iVar7 + 0x30a7)),
                         iVar3 != 0 &&
                         (iVar7 = recovered_10002dee(0x1c,(undefined4 *)(iVar7 + 0x30ab)),
                         iVar7 != 0)))))) {
                      local_464 = in_EDX;
                      iVar3 = recovered_10002dee(0x1e,&local_468);
                      iVar7 = local_460;
                      if (iVar3 != 0) {
                        *(uint *)(local_460 + 0x30af) = local_468;
                        uVar2 = *(uint *)(local_460 + 0x305b);
                        if ((((uVar2 != 0) && (uVar6 = *(uint *)(local_460 + 0x307b), uVar6 != 0))
                            && (1 < *(uint *)(local_460 + 0x307f))) &&
                           ((int)((ulonglong)uVar6 * (ulonglong)local_468 >> 0x20) == 0)) {
                          uVar6 = uVar6 * local_468;
                          if (!CARRY4(uVar2,uVar6) && uVar6 <= *(uint *)(local_460 + 0x307f) - 2) {
                            *(uint *)(local_460 + 0x30b3) = uVar2 + uVar6;
                          }
                        }
                      }
                      *(undefined4 *)(local_460 + 0x309f) = 8;
                      *(uint *)(local_460 + 0x3153) =
                           (uint)((*(byte *)(local_460 + 0x3093) & 2) == 0) << 0x1e |
                           (uint)local_464[2] << 8 | (uint)*local_464 << 0x10 |
                           (uint)local_464[1] << 0xb | 0x80000000;
                      uVar2 = *(uint *)(local_460 + 0x30a7);
                      if (((7 < uVar2) && ((uVar2 & uVar2 - 1) == 0)) &&
                         ((*(int *)(local_460 + 0x30ab) == 0 && (*(int *)(local_460 + 0x30b3) != 0))
                         )) {
                        iVar3 = local_460 + 0x3253;
                        recovered_1000107e();
                        local_454 = iVar7 + 0x3353;
                        recovered_1000107e();
                        local_43c = (undefined2 *)(iVar7 + 0x3453);
                        recovered_1000107e();
                        local_42c[5] = iVar3;
                        iVar3 = recovered_1000308a(iVar3,0x80,(int)&local_430);
                        if (((((iVar3 != 0) &&
                              (iVar3 = recovered_1000308a(local_454,0x14,(int)&local_434),
                              iVar3 != 0)) &&
                             (iVar3 = recovered_1000308a((int)local_43c,0x44,(int)&local_438),
                             iVar3 != 0)) &&
                            (((((local_430 & 0xf) == 0 && ((local_434 & 1) == 0)) &&
                              ((local_438 & 3) == 0)) &&
                             ((iVar3 = recovered_10002e3c(), iVar3 != 0 &&
                              (iVar3 = recovered_10002e3c(), iVar3 != 0)))))) &&
                           ((bVar1 = recovered_100030d6(), CONCAT31(extraout_var_03,bVar1) != 0 &&
                            ((bVar1 = recovered_100030d6(), CONCAT31(extraout_var_04,bVar1) != 0 &&
                             (bVar1 = recovered_100030d6(), CONCAT31(extraout_var_05,bVar1) != 0))))
                           )) {
                          recovered_10003127();
                          recovered_10003127();
                          recovered_10003127();
                          iVar3 = recovered_10002e3c();
                          if ((((iVar3 != 0) &&
                               (((iVar3 = recovered_10002dee(0x1c,local_42c), iVar3 != 0 &&
                                 (local_42c[0] != 0)) &&
                                (local_468 = 0, *(int *)(iVar7 + 0x3057) != 0)))) &&
                              ((iVar7 = recovered_10003029(0x14,(int)&local_468), iVar7 != 0 &&
                               ((local_468 & 200) == 8)))) &&
                             ((iVar7 = recovered_10002fda(), iVar7 != 0 &&
                              ((iVar7 = recovered_10003029(0x14,(int)&local_468), iVar7 != 0 &&
                               ((local_468 & 0xc4) == 4)))))) {
                            *(undefined4 *)(local_460 + 0x311f) = 0;
                            *(undefined4 *)(local_460 + 0x3123) = 1;
                            iVar7 = local_460;
                            goto LAB_100011c9;
                          }
                        }
                      }
                      goto LAB_10002174;
                    }
                  }
                }
              }
            }
          }
        }
        iVar7 = recovered_10003029(0x14,(int)&local_45c);
        if (local_45c != 0 && iVar7 != 0) {
          recovered_10002fda();
        }
      }
    }
  }
LAB_10002174:
  recovered_100022bb();
  recovered_10002cd5();
  return;
}

#undef DAT_10003eb4
#undef DAT_10004144
#undef DAT_100041d0
#undef DAT_100041f0
#undef DAT_100041f4
#undef DAT_100041f8
#undef DAT_100041f9
#undef DAT_100041fa
#undef DAT_100041fb
#undef DAT_100041fc
#undef local_430
#undef local_42c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434

#undef DAT_10004100
#define DAT_10004100 (*(int * *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_100041d0
#define DAT_100041d0 (*(int *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_100041d8
#define DAT_100041d8 (*(int *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_100041dc
#define DAT_100041dc (*(int *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_100041e0
#define DAT_100041e0 (*(int *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_10004818
#define DAT_10004818 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa74U)))
#undef DAT_10004828
#define DAT_10004828 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002186
 */

void recovered_10002186(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;

  local_28 = 0;
  if ((DAT_100041e0 != 0) && (DAT_100041d0 != 0)) {
    recovered_1000321d();
    DAT_10004828 = 0;
    bVar1 = recovered_10003246(&local_28);
    if ((CONCAT31(extraout_var,bVar1) != 0) && (local_28 == 0x1100)) {
      DAT_100041e0 = 0;
    }
  }
  local_24 = 0;
  if ((DAT_100041dc != 0) && (DAT_100041d0 != 0)) {
    recovered_1000321d();
    DAT_10004818 = 1;
    bVar1 = recovered_10003246(&local_24);
    if ((CONCAT31(extraout_var_00,bVar1) != 0) && (local_24 == 0x1100)) {
      DAT_100041dc = 0;
    }
  }
  local_20[0] = 0;
  if ((DAT_100041d8 != 0) && (DAT_100041d0 != 0)) {
    recovered_1000321d();
    DAT_10004818 = 1;
    bVar1 = recovered_10003246(local_20);
    if ((CONCAT31(extraout_var_01,bVar1) != 0) && (local_20[0] == 0x1100)) {
      DAT_100041d8 = 0;
    }
  }
  recovered_10002cd5();
  if ((((DAT_10004100 != (int *)0x0) && (*DAT_10004100 == 0x54584b57)) &&
      (0xdb < (uint)DAT_10004100[2])) && ((code *)DAT_10004100[0x36] != (code *)0x0)) {
    (*(code *)DAT_10004100[0x36])();
  }
  return;
}

#undef DAT_10004100
#undef DAT_100041d0
#undef DAT_100041d8
#undef DAT_100041dc
#undef DAT_100041e0
#undef DAT_10004818
#undef DAT_10004828
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10004100
#define DAT_10004100 (*(int * *)(((uintptr_t)pf_module_state + 0x35cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022bb
 */

void recovered_100022bb(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((DAT_10004100 != (int *)0x0) && (*DAT_10004100 == 0x54584b57)) &&
      (0x2b < (uint)DAT_10004100[2])) && ((code *)DAT_10004100[10] != (code *)0x0)) {
    (*(code *)DAT_10004100[10])();
  }
  return;
}

#undef DAT_10004100

#undef DAT_100041a0
#define DAT_100041a0 (*(uint *)(((uintptr_t)pf_module_state + 0x3fcU)))
#undef DAT_100041a4
#define DAT_100041a4 (*(uint *)(((uintptr_t)pf_module_state + 0x400U)))
#undef DAT_100041a8
#define DAT_100041a8 (*(uint *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_100041c8
#define DAT_100041c8 (*(int *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_100041d4
#define DAT_100041d4 (*(int *)(((uintptr_t)pf_module_state + 0x430U)))
#undef DAT_100041e4
#define DAT_100041e4 (*(int *)(((uintptr_t)pf_module_state + 0x440U)))
#undef DAT_100041f0
#define DAT_100041f0 (*(int *)(((uintptr_t)pf_module_state + 0x44cU)))
#undef DAT_100041f4
#define DAT_100041f4 (*(int *)(((uintptr_t)pf_module_state + 0x450U)))
#undef DAT_10004818
#define DAT_10004818 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa74U)))
#undef DAT_1000481c
#define DAT_1000481c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa78U)))
#undef DAT_10004820
#define DAT_10004820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7cU)))
#undef DAT_10004824
#define DAT_10004824 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa80U)))
#undef DAT_10004825
#define DAT_10004825 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa81U)))
#undef DAT_10004826
#define DAT_10004826 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa82U)))
#undef DAT_10004827
#define DAT_10004827 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa83U)))
#undef DAT_10004828
#define DAT_10004828 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#undef DAT_1000482c
#define DAT_1000482c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa88U)))
#undef DAT_10004830
#define DAT_10004830 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa8cU)))
#undef DAT_10004834
#define DAT_10004834 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa90U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022f2
 */

undefined4 recovered_100022f2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;

  local_30 = 0;
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_100041d4 == 0 && DAT_100041f4 == 0) {
    return 0;
  }
  uVar4 = DAT_100041a4 - param_1;
  uVar11 = DAT_100041a8 - param_2;
  if ((param_2 <= DAT_100041a8 && uVar11 != 0) && (param_1 <= DAT_100041a4 && uVar4 != 0)) {
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    if (uVar11 < param_4) {
      param_4 = uVar11;
    }
    lVar1 = (ulonglong)DAT_100041a0 * (ulonglong)param_2 + CONCAT44(param_1 >> 0x1e,param_1 * 4);
    iVar13 = (int)lVar1;
    local_18 = (undefined4)((ulonglong)lVar1 >> 0x20);
    if (DAT_100041f4 != 0) {
      iVar5 = DAT_100041c8 + iVar13;
      iVar13 = iVar13 + DAT_100041f0;
      for (uVar4 = 0; uVar4 != param_4; uVar4 = uVar4 + 1) {
        for (uVar11 = 0; (param_3 & 0x3fffffff) != uVar11; uVar11 = uVar11 + 1) {
          *(undefined4 *)(iVar13 + uVar11 * 4) = *(undefined4 *)(iVar5 + uVar11 * 4);
        }
        iVar5 = iVar5 + DAT_100041a0;
        iVar13 = iVar13 + DAT_100041a0;
      }
      recovered_10003001();
LAB_100023e9:
      DAT_100041e4 = DAT_100041e4 + 1;
      return 1;
    }
    if (param_3 * 4 == DAT_100041a0 && param_1 == 0) {
      recovered_10003127();
    }
    else {
      for (uVar4 = 0; param_4 != uVar4; uVar4 = uVar4 + 1) {
        recovered_10003127();
      }
    }
    recovered_1000321d();
    uVar6 = (undefined1)(param_1 >> 8);
    uVar9 = (undefined1)(param_1 >> 0x10);
    uVar2 = (undefined1)(param_1 >> 0x18);
    uVar7 = (undefined1)(param_2 >> 8);
    uVar10 = (undefined1)(param_2 >> 0x10);
    local_1c = param_2 >> 0x18;
    PF_PART1(DAT_1000481c, 3) = (undefined1)(param_2 >> 0x18);
    uVar12 = (undefined1)(param_3 >> 8);
    local_20 = param_3 >> 0x10;
    PF_PART1(DAT_10004820, 2) = (undefined1)(param_3 >> 0x10);
    local_24 = param_3 >> 0x18;
    PF_PART1(DAT_10004820, 3) = (undefined1)(param_3 >> 0x18);
    uVar8 = (undefined1)(param_4 >> 8);
    local_28 = param_4 >> 0x10;
    DAT_10004826 = (undefined1)(param_4 >> 0x10);
    local_2c = param_4 >> 0x18;
    DAT_10004827 = (undefined1)(param_4 >> 0x18);
    PF_PART1(DAT_10004818, 0) = (char)param_1;
    PF_PART1(DAT_10004818, 1) = uVar6;
    PF_PART1(DAT_10004818, 2) = uVar9;
    PF_PART1(DAT_10004818, 3) = uVar2;
    PF_PART1(DAT_1000481c, 0) = (char)param_2;
    PF_PART1(DAT_1000481c, 1) = uVar7;
    PF_PART1(DAT_1000481c, 2) = uVar10;
    PF_PART1(DAT_10004820, 0) = (char)param_3;
    PF_PART1(DAT_10004820, 1) = uVar12;
    DAT_10004824 = (char)param_4;
    DAT_10004825 = uVar8;
    recovered_100035c7(local_18);
    DAT_10004830 = 1;
    DAT_10004834 = 0;
    bVar3 = recovered_10003246(&local_30);
    if ((CONCAT31(extraout_var,bVar3) != 0) && (local_30 == 0x1100)) {
      recovered_1000321d();
      PF_PART1(DAT_1000481c, 3) = (undefined1)local_1c;
      PF_PART1(DAT_10004820, 2) = (undefined1)local_20;
      PF_PART1(DAT_10004820, 3) = (undefined1)local_24;
      DAT_10004826 = (undefined1)local_28;
      DAT_10004827 = (undefined1)local_2c;
      DAT_10004828 = 1;
      DAT_1000482c = 0;
      PF_PART1(DAT_10004818, 0) = (char)param_1;
      PF_PART1(DAT_10004818, 1) = uVar6;
      PF_PART1(DAT_10004818, 2) = uVar9;
      PF_PART1(DAT_10004818, 3) = uVar2;
      PF_PART1(DAT_1000481c, 0) = (char)param_2;
      PF_PART1(DAT_1000481c, 1) = uVar7;
      PF_PART1(DAT_1000481c, 2) = uVar10;
      PF_PART1(DAT_10004820, 0) = (char)param_3;
      PF_PART1(DAT_10004820, 1) = uVar12;
      DAT_10004824 = (char)param_4;
      DAT_10004825 = uVar8;
      bVar3 = recovered_10003246(&local_30);
      if (CONCAT31(extraout_var_00,bVar3) != 0) {
        if (local_30 != 0x1100) {
          return 0;
        }
        goto LAB_100023e9;
      }
    }
  }
  return 0;
}

#undef DAT_100041a0
#undef DAT_100041a4
#undef DAT_100041a8
#undef DAT_100041c8
#undef DAT_100041d4
#undef DAT_100041e4
#undef DAT_100041f0
#undef DAT_100041f4
#undef DAT_10004818
#undef DAT_1000481c
#undef DAT_10004820
#undef DAT_10004824
#undef DAT_10004825
#undef DAT_10004826
#undef DAT_10004827
#undef DAT_10004828
#undef DAT_1000482c
#undef DAT_10004830
#undef DAT_10004834
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000263b
 */

void recovered_1000263b(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_100026c1(param_1);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000265a
 */

void recovered_1000265a(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10003602(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10003602(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c1
 */

void recovered_100026c1(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10002dcd();
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


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002707
 */

uint recovered_10002707(int *api,uint bus,uint slot,uint function,void *out)

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
    uVar1 = recovered_10002884(api,bus_00,slot_00,function_00,0,4,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_10002884(api,bus_00,slot_00,function_00,8,4,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_10002884(api,bus_00,slot_00,function_00,4,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_10002884(api,bus_00,slot_00,function_00,0xc,4,&local_34);
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
          uVar1 = recovered_10002884(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,4,
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
 * Address: 0x10002884
 */

uint recovered_10002884(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

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


#undef str_10003f63
#define str_10003f63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bfU)))
#undef str_10003f75
#define str_10003f75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_10003f87
#define str_10003f87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e8
 */

bool recovered_100028e8(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *in_ECX;
  uint uVar4;
  byte *in_EDX;
  uint uVar5;

  local_1c = 0;
  if ((((in_ECX == (int *)0x0 || in_EDX == (byte *)0x0) || (*in_ECX != 0x54584b57)) ||
      ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
    pcVar3 = str_10003f63;
  }
  else {
    uVar1 = recovered_10002884(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,&local_1c);
    if (uVar1 == 0) {
      pcVar3 = str_10003f75;
    }
    else {
      uVar1 = 0;
      for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
        uVar5 = uVar1 | 1;
        uVar4 = uVar1 | 2;
        if (*(uint *)(in_EDX + iVar2 + 0x2c) == 0) {
          uVar4 = uVar1;
        }
        uVar1 = uVar4;
        if ((*(uint *)(in_EDX + iVar2 + 0x2c) & 1) != 0) {
          uVar1 = uVar5;
        }
      }
      iVar2 = recovered_10002dcd();
      uVar4 = uVar1 | 4;
      if (iVar2 == 0) {
        uVar4 = uVar1;
      }
      if ((in_EDX[8] == 6) && (in_EDX[9] != 0)) {
        uVar4 = uVar4 | 2;
      }
      local_18[0] = local_1c | uVar4;
      iVar2 = recovered_10002d80(in_EDX[1],in_EDX[2],local_18[0]);
      if (iVar2 != 0) {
        recovered_10002884(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,local_18);
        return (uVar4 & ~local_18[0]) == 0;
      }
      pcVar3 = str_10003f87;
    }
  }
  recovered_100026c1(pcVar3);
  return false;
}

#undef str_10003f63
#undef str_10003f75
#undef str_10003f87
#undef local_1c
#undef local_18

#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a66
 */

uint recovered_10002a66(int *api,byte *device,uint index,int span,void *out)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  local_20 = 0;
  uVar3 = 0;
  if ((out != (void *)0x0 && device != (byte *)0x0) &&
     (((index == 0 || ((*(uint *)(device + index * 4 + 0x10) & 7) != 4)) &&
      (local_24 = *(uint *)(device + index * 4 + 0x14), (local_24 & 1) == 0 && local_24 != 0)))) {
    local_18 = (uint)device[2];
    recovered_10002884(api,(uint)*device,(uint)device[1],local_18,index * 4 + 0x10 & 0xffff,4,
                       &local_24);
    uVar3 = 0;
    iVar2 = 0;
    if ((local_24 & 7) == 4) {
      if (4 < index) {
        return 0;
      }
      local_20 = *(int *)(device + index * 4 + 0x18);
      recovered_10002884(api,(uint)*device,(uint)device[1],(uint)device[2],index * 4 + 0x14 & 0xffff
                         ,4,&local_20);
      iVar2 = local_20;
    }
    uVar1 = 0xfffffffc;
    if ((local_24 & 1) == 0) {
      uVar1 = 0xfffffff0;
    }
    uVar1 = uVar1 & local_24;
    if ((span != 0) && (uVar1 != 0 || iVar2 != 0)) {
      *(undefined4 *)out = 0;
      local_1c = 0;
      uVar3 = 0;
      if ((api != (int *)0x0) && (*api == 0x54584b57)) {
        if (((uint)api[2] < 0xbc) || ((code *)api[0x2e] == (code *)0x0)) {
          if ((0x67 < (uint)api[2] && iVar2 == 0) &&
             (((code *)api[0x19] != (code *)0x0 &&
              (iVar2 = (*(code *)api[0x19])(uVar1,0,span,&local_1c), iVar2 != 0)))) {
            *(undefined4 *)out = local_1c;
            uVar3 = 1;
          }
        }
        else {
          uVar3 = (*(code *)api[0x2e])(uVar1,iVar2,span,out);
        }
      }
    }
  }
  return uVar3;
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10004168
#define DAT_10004168 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_10004169
#define DAT_10004169 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c5U)))
#undef DAT_1000416a
#define DAT_1000416a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_1000416c
#define DAT_1000416c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef DAT_1000416e
#define DAT_1000416e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_10004170
#define DAT_10004170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ccU)))
#undef DAT_10004171
#define DAT_10004171 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cdU)))
#undef DAT_10004172
#define DAT_10004172 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ceU)))
#undef DAT_10004173
#define DAT_10004173 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cfU)))
#undef DAT_10004174
#define DAT_10004174 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d0U)))
#undef DAT_10004178
#define DAT_10004178 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3d4U)))
#undef DAT_1000417c
#define DAT_1000417c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_10004180
#define DAT_10004180 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3dcU)))
#undef DAT_10004184
#define DAT_10004184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3e0U)))
#undef DAT_10004188
#define DAT_10004188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3e4U)))
#undef DAT_1000418c
#define DAT_1000418c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3e8U)))
#undef DAT_10004190
#define DAT_10004190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c21
 */

void recovered_10002c21(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    DAT_10004168 = *in_ECX;
    DAT_10004169 = in_ECX[1];
    DAT_1000416a = in_ECX[2];
    DAT_1000416c = *(undefined2 *)(in_ECX + 4);
    DAT_1000416e = *(undefined2 *)(in_ECX + 6);
    DAT_10004170 = in_ECX[8];
    DAT_10004171 = in_ECX[9];
    DAT_10004172 = in_ECX[10];
    DAT_10004173 = in_ECX[0xb];
    DAT_10004174 = in_ECX[0xc];
    DAT_10004178 = *(undefined4 *)(in_ECX + 0x10);
    DAT_1000417c = *(undefined4 *)(in_ECX + 0x14);
    DAT_10004180 = *(undefined4 *)(in_ECX + 0x18);
    DAT_10004184 = *(undefined4 *)(in_ECX + 0x1c);
    DAT_10004188 = *(undefined4 *)(in_ECX + 0x20);
    DAT_1000418c = *(undefined4 *)(in_ECX + 0x24);
    DAT_10004190 = *(undefined4 *)(in_ECX + 0x28);
  }
  return;
}

#undef DAT_10004168
#undef DAT_10004169
#undef DAT_1000416a
#undef DAT_1000416c
#undef DAT_1000416e
#undef DAT_10004170
#undef DAT_10004171
#undef DAT_10004172
#undef DAT_10004173
#undef DAT_10004174
#undef DAT_10004178
#undef DAT_1000417c
#undef DAT_10004180
#undef DAT_10004184
#undef DAT_10004188
#undef DAT_1000418c
#undef DAT_10004190

#undef DAT_10004100
#define DAT_10004100 (*(int *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_10004104
#define DAT_10004104 (*(int *)(((uintptr_t)pf_module_state + 0x360U)))
#undef DAT_100041d0
#define DAT_100041d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_100041d4
#define DAT_100041d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x430U)))
#undef DAT_100041d8
#define DAT_100041d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_100041dc
#define DAT_100041dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_100041e0
#define DAT_100041e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_100041f9
#define DAT_100041f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x455U)))
#undef DAT_100041fa
#define DAT_100041fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x456U)))
#undef DAT_100041fb
#define DAT_100041fb (*(char *)(((uintptr_t)pf_module_state + 0x457U)))
#undef DAT_100041fc
#define DAT_100041fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x458U)))
#undef _DAT_100041fc
#define _DAT_100041fc (*(uint *)(((uintptr_t)pf_module_state + 0x458U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002cd5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;

  if (DAT_10004104 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = recovered_10002f4a();
    bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  }
  DAT_100041d0 = 0;
  DAT_100041d4 = 0;
  DAT_100041d8 = 0;
  DAT_100041dc = 0;
  DAT_100041e0 = 0;
  if ((DAT_10004100 != 0) && (DAT_100041fb != '\0')) {
    uVar2 = _DAT_100041fc & 0xfffffffb;
    if (!bVar1) {
      uVar2 = _DAT_100041fc;
    }
    recovered_10002d80(DAT_100041f9,DAT_100041fa,uVar2 & 0xffff);
    DAT_100041fb = '\0';
  }
  return;
}

#undef DAT_10004100
#undef DAT_10004104
#undef DAT_100041d0
#undef DAT_100041d4
#undef DAT_100041d8
#undef DAT_100041dc
#undef DAT_100041e0
#undef DAT_100041f9
#undef DAT_100041fa
#undef DAT_100041fb
#undef DAT_100041fc
#undef _DAT_100041fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

undefined4 recovered_10002d80(undefined1 param_1,undefined1 param_2,undefined4 param_3)

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
 * Address: 0x10002dcd
 */

int recovered_10002dcd(void)

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


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dee
 */

undefined4 recovered_10002dee(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_10002e63(2,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e3c
 */

undefined4 recovered_10002e3c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002ec9();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e63
 */

undefined4 recovered_10002e63(undefined4 param_1,int param_2)

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
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_10002eb1;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_10002eb1:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec9
 */

undefined4 recovered_10002ec9(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int *in_ECX;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10002ef7;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10002ef7:
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f13
 */

undefined4 recovered_10002f13(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined2 in_DX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x5c)) ||
     ((code *)in_ECX[0x16] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x16])(in_DX,2,param_1);
  return uVar1;
}


#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f4a
 */

bool recovered_10002f4a(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  int in_EDX;
  uint uVar2;
  bool bVar3;

  local_18[0] = 0xff;
  bVar3 = false;
  if (in_EDX != 0 && in_ECX != 0) {
    iVar1 = recovered_10002fda();
    if (iVar1 != 0) {
      recovered_10003001();
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        iVar1 = recovered_10003029(0x14,(int)local_18);
        if ((iVar1 != 0) && (local_18[0] == 0)) break;
        recovered_1000305f();
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fda
 */

undefined4 recovered_10002fda(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002ec9();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003001
 */

void recovered_10003001(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003029
 */

undefined4 recovered_10003029(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002e63(1,param_2);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000305f
 */

void recovered_1000305f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x33 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xc] != (code *)0x0)) {
    (*(code *)in_ECX[0xc])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000308a
 */

undefined4 recovered_1000308a(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_3 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d6
 */

bool recovered_100030d6(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_100031a8();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = recovered_100031a8();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003127
 */

void recovered_10003127(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1d] != (code *)0x0)) {
    (*(code *)in_ECX[0x1d])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003159
 */

undefined4 recovered_10003159(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  byte *in_EDX;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((!CARRY4(param_3,param_2)) && (param_3 != 0)) && (param_1 < 6)) && (param_4 != (int *)0x0))
  {
    uVar1 = recovered_10002a66(in_ECX,in_EDX,param_1,param_3 + param_2,param_4);
    if (uVar1 != 0) {
      *param_4 = *param_4 + param_2;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

undefined4 recovered_100031a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002ec9();
  return uVar1;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031cf
 */

undefined4 recovered_100031cf(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_1 != (undefined4 *)0x0) {
    iVar1 = recovered_10002e63(4,(int)local_14);
    if (iVar1 != 0) {
      *param_1 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

#undef DAT_10004800
#define DAT_10004800 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000321d
 */

void recovered_1000321d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_ECX;

  recovered_1000107e();
  DAT_10004800 = in_ECX;
  return;
}

#undef DAT_10004800

#undef DAT_100041cc
#define DAT_100041cc (*(uint16_t *)(((uintptr_t)pf_module_state + 0x428U)))
#undef DAT_100041ce
#define DAT_100041ce (*(short *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_100041d0
#define DAT_100041d0 (*(int *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_10004204
#define DAT_10004204 (*(int *)(((uintptr_t)pf_module_state + 0x460U)))
#undef DAT_10004308
#define DAT_10004308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_10004309
#define DAT_10004309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565U)))
#undef DAT_1000430a
#define DAT_1000430a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_1000430b
#define DAT_1000430b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x567U)))
#undef DAT_1000430c
#define DAT_1000430c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x568U)))
#undef DAT_10004318
#define DAT_10004318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x574U)))
#undef DAT_10004319
#define DAT_10004319 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x575U)))
#undef DAT_1000431a
#define DAT_1000431a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x576U)))
#undef DAT_1000431b
#define DAT_1000431b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x577U)))
#undef DAT_1000431c
#define DAT_1000431c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x578U)))
#undef DAT_10004402
#define DAT_10004402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65eU)))
#undef DAT_10004403
#define DAT_10004403 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_10004404
#define DAT_10004404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x660U)))
#undef DAT_10004502
#define DAT_10004502 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75eU)))
#undef _DAT_100041cc
#define _DAT_100041cc (*(uint *)(((uintptr_t)pf_module_state + 0x428U)))
#undef _DAT_10004502
#define _DAT_10004502 (*(short *)(((uintptr_t)pf_module_state + 0x75eU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003246
 */

/* WARNING: Removing unreachable block (ram,0x1000327b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003246(uint *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_ECX;
  uint in_EDX;
  bool bVar5;

  iVar3 = DAT_10004204;
  { __typeof__(DAT_10004204) pf_atomic_old = __atomic_exchange_n(&(DAT_10004204),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  local_18[0] = 0;
  local_1c = 0;
  local_20 = 0;
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  if (DAT_100041d0 != 0) {
    recovered_1000107e();
    iVar3 = recovered_1000308a(((uintptr_t)pf_module_state+0xa5cU),in_ECX,(int)local_18);
    if ((iVar3 != 0) && (iVar3 = recovered_1000308a(((uintptr_t)pf_module_state+0x85cU),in_EDX,(int)&local_20), iVar3 != 0))
    {
      recovered_1000107e();
      recovered_100035c7(local_1c);
      DAT_10004308 = (undefined1)in_ECX;
      DAT_10004309 = (undefined1)((uint)in_ECX >> 8);
      DAT_1000430a = (undefined1)((uint)in_ECX >> 0x10);
      DAT_1000430b = (undefined1)((uint)in_ECX >> 0x18);
      DAT_1000430c = 0x10001;
      recovered_100035c7(0);
      uVar4 = _DAT_100041cc;
      DAT_10004318 = (undefined1)in_EDX;
      DAT_10004319 = (undefined1)(in_EDX >> 8);
      DAT_1000431a = (undefined1)(in_EDX >> 0x10);
      DAT_1000431b = (undefined1)(in_EDX >> 0x18);
      DAT_1000431c = 2;
      sVar1 = DAT_100041ce;
      *(undefined2 *)(&DAT_10004404 + (_DAT_100041cc & 7) * 2) = 0;
      iVar3 = uVar4 + 1;
      _DAT_100041cc = CONCAT22(DAT_100041ce,(short)iVar3);
      DAT_10004402 = (undefined1)iVar3;
      DAT_10004403 = (undefined1)((uint)iVar3 >> 8);
      recovered_10003127();
      recovered_10003127();
      recovered_10003127();
      recovered_10003127();
      recovered_10003127();
      recovered_10003001();
      iVar3 = recovered_10002e3c();
      if (iVar3 != 0) {
        iVar3 = 100000;
        while (bVar5 = iVar3 != 0, iVar3 = iVar3 + -1, bVar5) {
          recovered_10003127();
          _DAT_100041cc = CONCAT22(_DAT_10004502,DAT_100041cc);
          sVar2 = _DAT_10004502;
          if (_DAT_10004502 != sVar1) goto LAB_100034ff;
          recovered_1000305f();
        }
        sVar2 = DAT_100041ce;
LAB_100034ff:
        if ((sVar2 != sVar1) && (sVar2 == (short)(sVar1 + 1))) {
          iVar3 = recovered_10003595();
          uVar4 = recovered_10003595();
          if ((iVar3 == 0) && ((0x17 < uVar4 && (uVar4 <= in_EDX)))) {
            recovered_10003127();
            uVar4 = recovered_10003595();
            if (param_1 != (uint *)0x0) {
              *param_1 = uVar4;
            }
            DAT_10004204 = 0;
            return (uVar4 & 0xfffffffe) == 0x1100;
          }
        }
      }
      recovered_10002cd5();
    }
  }
  DAT_10004204 = 0;
  return false;
}

#undef DAT_100041cc
#undef DAT_100041ce
#undef DAT_100041d0
#undef DAT_10004204
#undef DAT_10004308
#undef DAT_10004309
#undef DAT_1000430a
#undef DAT_1000430b
#undef DAT_1000430c
#undef DAT_10004318
#undef DAT_10004319
#undef DAT_1000431a
#undef DAT_1000431b
#undef DAT_1000431c
#undef DAT_10004402
#undef DAT_10004403
#undef DAT_10004404
#undef DAT_10004502
#undef _DAT_100041cc
#undef _DAT_10004502
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003595
 */

undefined4 recovered_10003595(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *in_ECX;

  if (in_ECX == (undefined4 *)0x0) {
    return 0;
  }
  return *in_ECX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c7
 */

void recovered_100035c7(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  undefined4 in_EDX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = (char)in_EDX;
    in_ECX[1] = (char)((uint)in_EDX >> 8);
    in_ECX[2] = (char)((uint)in_EDX >> 0x10);
    in_ECX[3] = (char)((uint)in_EDX >> 0x18);
    in_ECX[4] = (char)param_1;
    in_ECX[5] = (char)((uint)param_1 >> 8);
    in_ECX[6] = (char)((uint)param_1 >> 0x10);
    in_ECX[7] = (char)((uint)param_1 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003602
 */

void recovered_10003602(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10002dcd();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003630
 */

void recovered_10003630(uint param_1,int param_2)

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
    recovered_10003602(cVar3);
  }
  return;
}


#define local_94 (*(int *)(pf_stack_frame + 44))
#define local_90 (*(int *)(pf_stack_frame + 48))
#define local_84 (*(uint *)(pf_stack_frame + 60))
#define local_64 (*(int *)(pf_stack_frame + 92))
#define local_60 (*(uint *)(pf_stack_frame + 96))
#define local_5c (*(int *)(pf_stack_frame + 100))
#define local_58 (*(uint *)(pf_stack_frame + 104))
#define local_54 (*(int *)(pf_stack_frame + 108))
#define local_50 (*(uint *)(pf_stack_frame + 112))
#define local_48 (*(int *)(pf_stack_frame + 120))
#define local_3c (*(uint *)(pf_stack_frame + 132))
#define local_38 (*(uint *)(pf_stack_frame + 136))
#define local_34 (*(uint *)(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003682
 */

bool recovered_10003682(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int *a;
  int *b;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;

  bVar14 = false;
  if (param_2 != 0 && param_1 != 0) {
    local_48 = param_1 + 0x54;
    for (uVar8 = 0; uVar8 != param_2; uVar8 = uVar8 + 1) {
      iVar1 = param_1 + uVar8 * 0x70;
      iVar20 = *(int *)(param_1 + uVar8 * 0x70);
      if (iVar20 == 3) {
        uVar4 = *(uint *)(iVar1 + 0x38);
        uVar5 = recovered_10003c14((void *)(iVar1 + 8));
        if (uVar5 == 0) goto LAB_10003ac7;
        a = (int *)(iVar1 + 0x40);
        iVar20 = *(int *)(iVar1 + 0x40);
        iVar19 = *(int *)(iVar1 + 0x44);
        iVar18 = iVar19;
        iVar11 = iVar20;
        local_94 = iVar20;
        local_90 = iVar19;
        for (iVar12 = -0x20; iVar12 != 0; iVar12 = iVar12 + 0x10) {
          iVar2 = *(int *)(local_48 + 0x1c + iVar12);
          iVar6 = *(int *)(local_48 + 0x20 + iVar12);
          if (iVar2 < local_94) {
            local_94 = iVar2;
          }
          if (iVar6 < local_90) {
            local_90 = iVar6;
          }
          if (iVar11 < iVar2) {
            iVar11 = iVar2;
          }
          if (iVar18 < iVar6) {
            iVar18 = iVar6;
          }
        }
        if ((((-1 < iVar11) && (-1 < iVar18)) &&
            (iVar12 = *(int *)(iVar1 + 0x14), local_94 < iVar12)) &&
           (iVar2 = *(int *)(iVar1 + 0x18), local_90 < iVar2)) {
          if (local_94 < 1) {
            local_94 = 0;
          }
          iVar6 = iVar12 + -1;
          if (iVar11 < iVar12) {
            iVar6 = iVar11;
          }
          iVar12 = iVar2 + -1;
          if (iVar18 < iVar2) {
            iVar12 = iVar18;
          }
          b = (int *)(iVar1 + 0x50);
          iVar18 = *(int *)(iVar1 + 0x60);
          iVar11 = *(int *)(iVar1 + 100);
          lVar15 = recovered_10003cad(a,b,iVar18,iVar11);
          if (lVar15 != 0) {
            if (local_90 < 1) {
              local_90 = 0;
            }
            iVar2 = *(int *)(iVar1 + 0x50);
            iVar3 = *(int *)(iVar1 + 0x54);
            lVar15 = recovered_10003cad(b,(int *)(iVar1 + 0x60),local_94,local_90);
            lVar16 = recovered_10003cad((int *)(iVar1 + 0x60),a,local_94,local_90);
            lVar17 = recovered_10003cad(a,b,local_94,local_90);
            iVar7 = *(int *)(iVar1 + 8);
            iVar13 = 0;
            if (iVar7 != 0) {
              if (*(int *)(iVar1 + 0xc) != 0) {
                iVar7 = 0;
              }
              iVar13 = iVar7;
            }
            uVar9 = iVar19 - iVar11;
            uVar5 = iVar11 - iVar3;
            uVar10 = iVar3 - iVar19;
            while( true ) {
              local_64 = (int)((ulonglong)lVar17 >> 0x20);
              local_60 = (uint)lVar17;
              local_5c = (int)((ulonglong)lVar16 >> 0x20);
              local_58 = (uint)lVar16;
              local_54 = (int)((ulonglong)lVar15 >> 0x20);
              local_50 = (uint)lVar15;
              if (iVar12 < local_90) break;
              iVar11 = *(int *)(iVar1 + 0x1c) * local_90;
              iVar19 = iVar13 + iVar11;
              local_34 = iVar11 + iVar13;
              local_84 = local_50;
              local_38 = local_58;
              local_3c = local_60;
              for (iVar11 = local_94; iVar11 <= iVar6; iVar11 = iVar11 + 1) {
                if (((((-1 < local_54) && (-1 < local_5c)) && (-1 < local_64)) ||
                    ((((SBORROW4(0,local_54) != SBORROW4(-local_54,(uint)(local_84 != 0))) ==
                       (int)(-local_54 - (uint)(local_84 != 0)) < 0 &&
                      ((SBORROW4(0,local_5c) != SBORROW4(-local_5c,(uint)(local_38 != 0))) ==
                       (int)(-local_5c - (uint)(local_38 != 0)) < 0)) &&
                     ((SBORROW4(0,local_64) != SBORROW4(-local_64,(uint)(local_3c != 0))) ==
                      (int)(-local_64 - (uint)(local_3c != 0)) < 0)))) && (iVar13 != 0)) {
                  if ((local_34 & 3) == 0) {
                    *(uint *)(iVar19 + iVar11 * 4) =
                         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18;
                  }
                  else {
                    *(char *)(iVar19 + iVar11 * 4) = (char)(uVar4 >> 0x18);
                    *(char *)(iVar19 + 1 + iVar11 * 4) = (char)(uVar4 >> 0x10);
                    *(char *)(iVar19 + 2 + iVar11 * 4) = (char)(uVar4 >> 8);
                    *(char *)(iVar19 + 3 + iVar11 * 4) = (char)uVar4;
                  }
                }
                bVar14 = CARRY4(local_84,uVar5);
                local_84 = local_84 + uVar5;
                local_54 = local_54 + ((int)uVar5 >> 0x1f) + (uint)bVar14;
                bVar14 = CARRY4(local_38,uVar9);
                local_38 = local_38 + uVar9;
                local_5c = local_5c + ((int)uVar9 >> 0x1f) + (uint)bVar14;
                bVar14 = CARRY4(local_3c,uVar10);
                local_3c = local_3c + uVar10;
                local_64 = local_64 + ((int)uVar10 >> 0x1f) + (uint)bVar14;
                local_34 = local_34 + 4;
              }
              lVar15 = lVar15 - (iVar18 - iVar2);
              lVar16 = lVar16 - (iVar20 - iVar18);
              lVar17 = lVar17 - (iVar2 - iVar20);
              local_90 = local_90 + 1;
            }
          }
        }
      }
      else {
        if (iVar20 == 2) {
          iVar12 = *(int *)(iVar1 + 0x28);
          uVar4 = *(uint *)(iVar1 + 0x38);
          iVar20 = *(int *)(iVar1 + 0x34);
          iVar19 = *(int *)(iVar1 + 0x30);
          iVar18 = *(int *)(iVar1 + 0x2c);
        }
        else {
          if (iVar20 != 1) goto LAB_10003acb;
          iVar12 = 0;
          uVar4 = *(uint *)(iVar1 + 0x38);
          iVar20 = *(int *)(iVar1 + 0x18);
          iVar19 = *(int *)(iVar1 + 0x14);
          iVar18 = 0;
        }
        uVar4 = recovered_10003ada((void *)(iVar1 + 8),iVar12,iVar18,iVar19,iVar20,uVar4);
        if (uVar4 == 0) {
LAB_10003ac7:
          goto LAB_10003acb;
        }
      }
      local_48 = local_48 + 0x70;
    }
    uVar8 = param_2;
LAB_10003acb:
    bVar14 = param_2 <= uVar8;
  }
  return bVar14;
}

#undef local_94
#undef local_90
#undef local_84
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ada
 */

uint recovered_10003ada(void *surface,int x,int y,int width,int height,uint color)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pixel;
  int iVar7;
  int iVar8;

  uVar1 = recovered_10003c14(surface);
  uVar6 = 0;
  if (((0 < height) && (0 < width)) && (uVar1 != 0)) {
    iVar3 = width + x;
    iVar8 = height + y;
    uVar6 = 1;
    if (0 < iVar8 && 0 < iVar3) {
      iVar7 = *(int *)((int)surface + 0xc);
      if ((x < iVar7) && (iVar5 = *(int *)((int)surface + 0x10), y < iVar5)) {
        if (x < 1) {
          x = 0;
        }
        iVar4 = 0;
        if (0 < y) {
          iVar4 = y;
        }
        if (iVar3 < iVar7) {
          iVar7 = iVar3;
        }
        if (iVar8 < iVar5) {
          iVar5 = iVar8;
        }
        pvVar2 = recovered_10003c7c(surface);
        for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
          iVar8 = *(int *)((int)surface + 0x14) * iVar4;
          pixel = (void *)((int)pvVar2 + iVar8 + x * 4);
          iVar3 = x;
          if (((uint)pixel & 3) == 0) {
            for (; iVar3 < iVar7; iVar3 = iVar3 + 1) {
              *(uint *)((int)pvVar2 + iVar3 * 4 + iVar8) =
                   color >> 0x18 | (color & 0xff0000) >> 8 | (color & 0xff00) << 8 | color << 0x18;
            }
          }
          else {
            for (; iVar3 < iVar7; iVar3 = iVar3 + 1) {
              recovered_10003c9b(pixel,color);
              pixel = (void *)((int)pixel + 4);
            }
          }
        }
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c14
 */

uint recovered_10003c14(void *surface)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;

  uVar4 = 0;
  if ((((surface != (void *)0x0) && (*(int *)((int)surface + 0x18) == 1)) &&
      (uVar1 = *(uint *)((int)surface + 0xc), uVar1 != 0)) && (*(uint *)((int)surface + 0x10) != 0))
  {
    uVar4 = 0;
    if (uVar1 >> 0x1e == 0 &&
        (uint)(*(uint *)((int)surface + 0x14) < uVar1 << 2) <= -(uVar1 >> 0x1e)) {
      lVar2 = (ulonglong)*(uint *)((int)surface + 0x10) * (ulonglong)*(uint *)((int)surface + 0x14);
      iVar3 = (int)((ulonglong)lVar2 >> 0x20);
      uVar4 = 0;
      if (((*(uint *)((int)surface + 8) == 0) ||
          (iVar3 == 0 && (uint)(*(uint *)((int)surface + 8) < (uint)lVar2) <= (uint)-iVar3)) &&
         (*(int *)surface != 0)) {
        uVar4 = (uint)(*(int *)((int)surface + 4) == 0);
      }
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c7c
 */

void * recovered_10003c7c(void *surface)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = (void *)0x0;
  if (((surface != (void *)0x0) && (*(void **)surface != (void *)0x0)) &&
     (pvVar1 = (void *)0x0, *(int *)((int)surface + 4) == 0)) {
    pvVar1 = *(void **)surface;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c9b
 */

void recovered_10003c9b(void *pixel,uint color)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (pixel != (void *)0x0) {
    *(uint *)pixel = color >> 0x18 | (color & 0xff0000) >> 8 | (color & 0xff00) << 8 | color << 0x18
    ;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cad
 */

longlong recovered_10003cad(int *a,int *b,int x,int y)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)(b[1] - a[1]) * (longlong)(x - *a) - (longlong)(*b - *a) * (longlong)(y - a[1]);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce8
 */

undefined8 recovered_10003ce8(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10003d23;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10003d23;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10003d23:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d2a
 */

undefined8 recovered_10003d2a(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10003d6e
 */

undefined8 recovered_10003d6e(uint param_1,uint param_2,uint param_3)

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
