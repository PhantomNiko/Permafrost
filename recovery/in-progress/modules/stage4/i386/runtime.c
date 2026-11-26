/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003918
#define DAT_10003918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001274
 */

undefined * recovered_10001274(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003918;
}

#undef DAT_10003918

#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16ebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000128a
 */

undefined1 * recovered_1000128a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10005000;
}

#undef DAT_10005000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a0
 */

bool recovered_100012a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x10;
}


#undef DAT_100039cb
#define DAT_100039cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_100039f8
#define DAT_100039f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe3U)))
#undef DAT_100039fb
#define DAT_100039fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe6U)))
#undef DAT_10003a00
#define DAT_10003a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xebU)))
#undef DAT_10003a05
#define DAT_10003a05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0U)))
#undef DAT_10003a0a
#define DAT_10003a0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf5U)))
#undef DAT_10003a0f
#define DAT_10003a0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_10003a14
#define DAT_10003a14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xffU)))
#undef DAT_10003a19
#define DAT_10003a19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_10003a1e
#define DAT_10003a1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109U)))
#undef DAT_10003a5d
#define DAT_10003a5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef DAT_10003a91
#define DAT_10003a91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef DAT_10003aa2
#define DAT_10003aa2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18dU)))
#undef DAT_10003b19
#define DAT_10003b19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_10003b35
#define DAT_10003b35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16ebU)))
#undef DAT_10007000
#define DAT_10007000 (*(uint *)(((uintptr_t)pf_module_state + 0x36ebU)))
#undef DAT_10009588
#define DAT_10009588 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c73U)))
#undef DAT_1000958c
#define DAT_1000958c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c77U)))
#undef DAT_10009590
#define DAT_10009590 (*(byte *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef DAT_10009591
#define DAT_10009591 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7cU)))
#undef DAT_10009794
#define DAT_10009794 (*(int *)(((uintptr_t)pf_module_state + 0x5e7fU)))
#undef str_10003994
#define str_10003994 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_100039ea
#define str_100039ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5U)))
#undef str_10003a23
#define str_10003a23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10eU)))
#undef str_10003a35
#define str_10003a35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10003a48
#define str_10003a48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x133U)))
#undef str_10003a60
#define str_10003a60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
#undef str_10003a96
#define str_10003a96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x181U)))
#undef str_10003aa7
#define str_10003aa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_10003ac2
#define str_10003ac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_10003add
#define str_10003add (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10003ae8
#define str_10003ae8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10003afb
#define str_10003afb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e6U)))
#undef str_10003b03
#define str_10003b03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeU)))
#undef str_10003b1d
#define str_10003b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10003b39
#define str_10003b39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_10003b55
#define str_10003b55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_10003b6b
#define str_10003b6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#define local_2348 (*(char * *)(pf_stack_frame + 808))
#define local_2344 (*(undefined4 *)(pf_stack_frame + 812))
#define local_2340 (*(uint *)(pf_stack_frame + 816))
#define local_233c (*(char * *)(pf_stack_frame + 820))
#define local_2338 (*(char * *)(pf_stack_frame + 824))
#define local_2334 (*(ulonglong (*)[1126])(pf_stack_frame + 828))
#define local_2314 (*(char (*)[8980])(pf_stack_frame + 860))
#define local_2114 (*(char (*)[8468])(pf_stack_frame + 1372))
#define local_2014 (*(int *)(pf_stack_frame + 1628))
#define local_2010 (*(undefined4 *)(pf_stack_frame + 1632))
#define local_200c (*(int *)(pf_stack_frame + 1636))
#define local_2008 (*(undefined1 (*)[8200])(pf_stack_frame + 1640))
#define aiStackY_2660 (*(int (*)[2456])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012b3
 */

uint recovered_100012b3(uint capability,uint operation,void *request)

{
  unsigned char pf_stack_frame[9872] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uchar uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *out;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  byte bVar10;

  iVar5 = DAT_10009794;
  bVar10 = 0;
  if (request == (void *)0x0) {
    return 0;
  }
  if (capability != 0x10) {
    return 0;
  }
  if (DAT_10009794 == 0) {
    return 0;
  }
  if (*(int *)request != 1) {
    return 0;
  }
  if (*(int *)((int)request + 4) != 0x28) {
    return 0;
  }
  if (operation != 0x50001) {
    if (operation == 0x50003) {
      puVar1 = *(undefined4 **)((int)request + 8);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      puVar8 = puVar1 + 3;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *puVar1 = 1;
      puVar1[1] = 0x70;
      puVar1[2] = 1;
      recovered_10001b35(puVar1 + 4,&DAT_100039cb,5);
      return 1;
    }
    if (operation != 0x50005) {
      return 0;
    }
    (**(code **)(DAT_10009794 + 8))(str_10003994);
    uVar6 = 0;
    goto LAB_10001483;
  }
  pcVar3 = *(char **)((int)request + 8);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar6 = recovered_10001c91(pcVar3);
  local_2348 = (char *)0x0;
  DAT_10009590 = 0;
  DAT_10009588 = 0;
  DAT_1000958c = 0;
  if (0x1ff < uVar6) {
    pcVar3 = str_100039ea;
    goto LAB_100013bc;
  }
  uVar6 = uVar6 + 1;
  recovered_10001b35(local_2314,pcVar3,uVar6);
  uVar2 = recovered_10001d02(local_2314,&DAT_100039f8);
  if (uVar2 == '\0') {
    pcVar3 = local_2314;
    out = &DAT_10009591;
  }
  else {
    uVar6 = recovered_10001c91(&DAT_10009591);
    uVar6 = uVar6 + 1;
    out = local_2314;
    pcVar3 = &DAT_10009591;
  }
  recovered_10001b35(out,pcVar3,uVar6);
  local_2340 = recovered_10001c91(local_2314);
  uVar2 = recovered_10001d02(local_2314,&DAT_100039fb);
  if ((uVar2 == '\0') && (uVar2 = recovered_10001d02(local_2314,&DAT_10003a00), uVar2 == '\0')) {
    uVar2 = recovered_10001d02(local_2314,&DAT_10003a05);
    if (uVar2 == '\0') {
      uVar2 = recovered_10001d02(local_2314,&DAT_10003a0a);
      if (uVar2 != '\0') {
        pcVar3 = &DAT_10005000;
        goto LAB_10001474;
      }
      uVar2 = recovered_10001d02(local_2314,&DAT_10003a0f);
      if (uVar2 == '\0') {
        pcVar3 = local_2314 + local_2340;
        uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003a14,&local_2348);
        if (uVar2 == '\0') {
          uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003a19,&local_2348);
          if (uVar2 == '\0') {
            uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003a1e,&local_2348);
            if (uVar2 == '\0') {
              uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003a91,&local_2348);
              if (uVar2 == '\0') {
                uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003aa2,&local_2348);
                if (uVar2 == '\0') {
                  uVar2 = recovered_100020d5(local_2314,pcVar3,str_10003add,&local_2348);
                  if (uVar2 == '\0') {
                    uVar2 = recovered_100020d5(local_2314,pcVar3,str_10003afb,&local_2348);
                    if (uVar2 == '\0') {
                      uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003b19,&local_2348);
                      if (uVar2 == '\0') {
                        uVar2 = recovered_100020d5(local_2314,pcVar3,&DAT_10003b35,&local_2348);
                        if (uVar2 == '\0') {
                          uVar6 = recovered_10001c91(local_2314);
                          if (0x2000 - DAT_10007000 <= uVar6 + 1) {
                            pcVar3 = str_10003b55;
                            goto LAB_10001983;
                          }
                          recovered_10001b35(&DAT_10005000 + DAT_10007000,local_2314,uVar6);
                          iVar5 = DAT_10007000 + uVar6;
                          DAT_10007000 = DAT_10007000 + 1 + uVar6;
                          (&DAT_10005000)[iVar5] = 10;
LAB_10001b16:
                          (&DAT_10005000)[DAT_10007000] = 0;
                        }
                        else {
                          uVar2 = recovered_10002ad2(local_2348,local_2114);
                          if ((uVar2 != '\0') &&
                             (uVar6 = (**(code **)(DAT_10009794 + 0x1c))(local_2114,1), uVar6 == 0))
                          {
                            pcVar3 = str_10003b39;
                            goto LAB_100013bc;
                          }
                        }
                      }
                      else {
                        uVar2 = recovered_10002ad2(local_2348,local_2114);
                        if ((uVar2 != '\0') &&
                           (uVar6 = (**(code **)(DAT_10009794 + 0x1c))(local_2114,0), uVar6 == 0)) {
                          pcVar3 = str_10003b1d;
                          goto LAB_100013bc;
                        }
                      }
                    }
                    else {
                      uVar2 = recovered_10002ad2(local_2348,local_2114);
                      if ((uVar2 != '\0') &&
                         (uVar6 = (**(code **)(DAT_10009794 + 0x18))(local_2114), uVar6 == 0)) {
                        pcVar3 = str_10003b03;
                        goto LAB_100013bc;
                      }
                    }
                  }
                  else {
                    uVar2 = recovered_10002ad2(local_2348,local_2114);
                    if ((uVar2 != '\0') &&
                       (uVar6 = (**(code **)(DAT_10009794 + 0x14))(local_2114), uVar6 == 0)) {
                      pcVar3 = str_10003ae8;
                      goto LAB_100013bc;
                    }
                  }
                }
                else {
                  PF_PART4(local_2334[0], 0) = 0;
                  uVar2 = recovered_10002ad2(local_2348,local_2114);
                  if (uVar2 != '\0') {
                    uVar4 = (**(code **)(DAT_10009794 + 0xc))
                                      (local_2114,&local_2014,0x1fff,(uint *)local_2334);
                    uVar6 = (uint)local_2334[0];
                    pcVar3 = str_10003aa7;
                    if (((uint)local_2334[0] < 0x2000 && uVar4 != 0) &&
                       ((uint)local_2334[0] <= 0x1fff - DAT_10007000)) {
                      uVar4 = 0;
                      pcVar3 = str_10003ac2;
                      do {
                        if ((uint)local_2334[0] == uVar4) {
                          recovered_10001b35(&DAT_10005000 + DAT_10007000,&local_2014,
                                             (uint)local_2334[0]);
                          DAT_10007000 = DAT_10007000 + uVar6;
                          goto LAB_10001b16;
                        }
                        iVar5 = uVar4 + 0x100;
                        uVar4 = uVar4 + 1;
                      } while (local_2114[iVar5] != '\0');
                    }
                    goto LAB_100013bc;
                  }
                }
              }
              else {
                uVar2 = recovered_10002ad2(local_2348,local_2114);
                if ((uVar2 != '\0') &&
                   (uVar6 = (**(code **)(DAT_10009794 + 0x10))
                                      (local_2114,&DAT_10005000,DAT_10007000), uVar6 == 0)) {
                  pcVar3 = str_10003a96;
LAB_100013bc:
                  recovered_10001ca8(pcVar3);
                }
              }
            }
            else {
              local_233c = local_2348;
              local_2344 = 0;
              local_2338 = pcVar3;
              uVar2 = recovered_10002450(&local_233c,local_2114,0x40);
              if (uVar2 == '\0') {
                pcVar3 = str_10003a23;
              }
              else {
                uVar6 = 0;
                while ((uVar2 = recovered_100024e9(&local_233c), uVar2 == '\0' &&
                       ((DAT_10009590 & 1) == 0))) {
                  if (uVar6 == 8) {
                    pcVar3 = str_10003a35;
                    goto LAB_10001983;
                  }
                  recovered_10002511(&local_2014,&local_233c,7);
                  if ((local_2014 != 1) || (local_200c != 0)) {
                    pcVar3 = str_10003a48;
                    goto LAB_10001983;
                  }
                  *(undefined4 *)((int)local_2334 + uVar6 * 4) = local_2010;
                  uVar6 = uVar6 + 1;
                }
                if (((DAT_10009590 & 1) == 0) &&
                   (uVar6 = (**(code **)(DAT_10009794 + 0x20))
                                      (local_2114,uVar6,local_2334,(ulonglong *)&local_2344),
                   local_2010 = local_2344, uVar6 != 0)) {
                  recovered_10003884(local_2008,0x100);
                  local_2014 = 1;
                  local_200c = 0;
                  recovered_100029b8((const unsigned char *)&local_2014);
                  (**(code **)(DAT_10009794 + 8))(&DAT_10003a5d);
                  goto LAB_1000147c;
                }
                pcVar3 = str_10003a60;
              }
LAB_10001983:
              recovered_10001ca8(pcVar3);
            }
          }
          else {
            (**(code **)(DAT_10009794 + 0x24))(local_2348);
          }
        }
        else {
          recovered_10002151(local_2348,pcVar3);
        }
      }
      else {
        recovered_10001d27(&DAT_10005000,&DAT_10005000 + DAT_10007000,0);
      }
    }
    else {
      DAT_10007000 = 0;
      DAT_10005000 = 0;
    }
  }
  else {
    pcVar3 = str_10003b6b;
LAB_10001474:
    (**(code **)(iVar5 + 8))(pcVar3);
  }
LAB_1000147c:
  uVar6 = (uint)DAT_10009590;
LAB_10001483:
  return uVar6 + 1;
}

#undef DAT_100039cb
#undef DAT_100039f8
#undef DAT_100039fb
#undef DAT_10003a00
#undef DAT_10003a05
#undef DAT_10003a0a
#undef DAT_10003a0f
#undef DAT_10003a14
#undef DAT_10003a19
#undef DAT_10003a1e
#undef DAT_10003a5d
#undef DAT_10003a91
#undef DAT_10003aa2
#undef DAT_10003b19
#undef DAT_10003b35
#undef DAT_10005000
#undef DAT_10007000
#undef DAT_10009588
#undef DAT_1000958c
#undef DAT_10009590
#undef DAT_10009591
#undef DAT_10009794
#undef str_10003994
#undef str_100039ea
#undef str_10003a23
#undef str_10003a35
#undef str_10003a48
#undef str_10003a60
#undef str_10003a96
#undef str_10003aa7
#undef str_10003ac2
#undef str_10003add
#undef str_10003ae8
#undef str_10003afb
#undef str_10003b03
#undef str_10003b1d
#undef str_10003b39
#undef str_10003b55
#undef str_10003b6b
#undef local_2348
#undef local_2344
#undef local_2340
#undef local_233c
#undef local_2338
#undef local_2334
#undef local_2314
#undef local_2114
#undef local_2014
#undef local_2010
#undef local_200c
#undef local_2008
#undef aiStackY_2660

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b35
 */

void recovered_10001b35(void *out,void *src,uint length)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; length != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)src + uVar1);
  }
  return;
}


#undef DAT_10003918
#define DAT_10003918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ebU)))
#undef DAT_10009794
#define DAT_10009794 (*(int * *)(((uintptr_t)pf_module_state + 0x5e7fU)))
#undef str_100039d0
#define str_100039d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbU)))
#undef str_100039e3
#define str_100039e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b56
 */

uint recovered_10001b56(void *context,void *descriptor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;

  uVar1 = recovered_10001c2b(context);
  if (((((descriptor == &DAT_10003918) && (CONCAT31(extraout_var,uVar1) != 0)) &&
       (*(code **)((int)context + 0x24) != (code *)0x0)) &&
      (((DAT_10009794 = (int *)(**(code **)((int)context + 0x24))(str_100039d0,1,0x28),
        DAT_10009794 != (int *)0x0 && (*DAT_10009794 == 1)) &&
       ((DAT_10009794[1] == 0x28 && ((DAT_10009794[2] != 0 && (DAT_10009794[3] != 0)))))))) &&
     ((DAT_10009794[4] != 0 &&
      (((((DAT_10009794[5] != 0 && (DAT_10009794[6] != 0)) && (DAT_10009794[7] != 0)) &&
        ((DAT_10009794[8] != 0 && (DAT_10009794[9] != 0)))) &&
       ((uVar1 = recovered_10001c2b(context), CONCAT31(extraout_var_00,uVar1) != 0 &&
        (*(code **)((int)context + 0x14) != (code *)0x0)))))))) {
    uVar2 = (**(code **)((int)context + 0x14))(str_100039e3,3,0x240002,&DAT_10004000,0x20);
    return uVar2;
  }
  return 0;
}

#undef DAT_10003918
#undef DAT_10004000
#undef DAT_10009794
#undef str_100039d0
#undef str_100039e3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c2b
 */

uchar recovered_10001c2b(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (((context != (void *)0x0) && (*(int *)context == 0x444f4d4b)) &&
     (1099999 < *(uint *)((int)context + 4))) {
    bVar1 = 0x27 < *(uint *)((int)context + 8);
  }
  return bVar1;
}


#undef str_100039e3
#define str_100039e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c55
 */

undefined4 recovered_10001c55(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined3 extraout_var = 0;
  undefined4 uVar2;

  uVar1 = recovered_10001c2b(param_1);
  if ((CONCAT31(extraout_var,uVar1) == 0) || (*(code **)((int)param_1 + 0x18) == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)((int)param_1 + 0x18))(str_100039e3);
  }
  return uVar2;
}

#undef str_100039e3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c91
 */

uint recovered_10001c91(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = 0xffffffff;
  do {
    iVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (text[iVar1] != '\0');
  return uVar2;
}


#undef DAT_10003a5d
#define DAT_10003a5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef DAT_10003b68
#define DAT_10003b68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x253U)))
#undef DAT_10009590
#define DAT_10009590 (*(char *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef DAT_10009794
#define DAT_10009794 (*(int *)(((uintptr_t)pf_module_state + 0x5e7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca8
 */

void recovered_10001ca8(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10009590 == '\0') {
    (**(code **)(DAT_10009794 + 8))(&DAT_10003b68);
    (**(code **)(DAT_10009794 + 8))(text);
    (**(code **)(DAT_10009794 + 8))(&DAT_10003a5d);
  }
  DAT_10009590 = 1;
  return;
}

#undef DAT_10003a5d
#undef DAT_10003b68
#undef DAT_10009590
#undef DAT_10009794

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d02
 */

uchar recovered_10001d02(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    cVar1 = left[iVar2];
    if ((cVar1 == '\0') || (cVar1 != right[iVar2])) break;
    iVar2 = iVar2 + 1;
  }
  return cVar1 == right[iVar2];
}


#undef DAT_10003d17
#define DAT_10003d17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x402U)))
#undef DAT_10003d1a
#define DAT_10003d1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_10003d2d
#define DAT_10003d2d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_10009590
#define DAT_10009590 (*(char *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef str_10003cf5
#define str_10003cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e0U)))
#undef str_10003d11
#define str_10003d11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fcU)))
#undef str_10003d1e
#define str_10003d1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x409U)))
#undef str_10003d32
#define str_10003d32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_10003d3f
#define str_10003d3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42aU)))
#undef str_10003d4b
#define str_10003d4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#define local_148 (*(char * *)(pf_stack_frame + 40))
#define local_144 (*(char * *)(pf_stack_frame + 44))
#define local_140 (*(char * *)(pf_stack_frame + 48))
#define local_13c (*(char * *)(pf_stack_frame + 52))
#define local_138 (*(char * *)(pf_stack_frame + 56))
#define local_134 (*(uint *)(pf_stack_frame + 60))
#define local_130 (*(char * *)(pf_stack_frame + 64))
#define local_12c (*(char * *)(pf_stack_frame + 68))
#define local_128 (*(char * *)(pf_stack_frame + 72))
#define local_124 (*(char * *)(pf_stack_frame + 76))
#define local_120 (*(char * *)(pf_stack_frame + 80))
#define local_11c (*(char * *)(pf_stack_frame + 84))
#define local_118 (*(int *)(pf_stack_frame + 88))
#define local_154 (*(int *)(pf_stack_frame + 28))
#define local_14c (*(char * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d27
 */

void recovered_10001d27(char *begin,char *end,uint depth)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uchar uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *begin_00;

  if (0x10 < depth) {
    pcVar5 = str_10003cf5;
LAB_10001d4a:
    recovered_10001ca8(pcVar5);
    return;
  }
  local_134 = depth + 1;
  local_130 = str_10003d11;
  local_12c = &DAT_10003d17;
LAB_10001d7a:
  local_138 = begin;
  if (end <= begin) {
    return;
  }
LAB_10001d82:
  if (DAT_10009590 != '\0') {
    return;
  }
  uVar1 = recovered_10002ba7();
  pcVar5 = local_138;
  if (uVar1 == '\0') {
    return;
  }
  pcVar3 = recovered_10002be4(local_138,end);
  local_140 = (char *)0x0;
  uVar1 = recovered_100020d5(pcVar5,pcVar3,local_130,&local_140);
  if ((uVar1 != '\0') ||
     (uVar2 = recovered_100020d5(pcVar5,pcVar3,local_12c,&local_140), uVar2 != '\0')) {
    pcVar5 = pcVar3 + 1;
    if (end <= pcVar3) {
      pcVar5 = end;
    }
    local_144 = (char *)0x0;
    begin_00 = (char *)0x0;
    local_148 = (char *)0x0;
    local_13c = (char *)0x0;
    local_154 = 0;
    local_128 = pcVar5;
    local_124 = pcVar3;
LAB_10001e22:
    if (end <= pcVar5) goto LAB_10001fb2;
    pcVar3 = recovered_10002be4(pcVar5,end);
    local_14c = (char *)0x0;
    uVar2 = recovered_100020d5(pcVar5,pcVar3,local_12c,(char **)0x0);
    if ((uVar2 == '\0') &&
       (uVar2 = recovered_100020d5(pcVar5,pcVar3,local_130,(char **)0x0), uVar2 == '\0')) {
      uVar2 = recovered_100020d5(pcVar5,pcVar3,&DAT_10003d1a,&local_14c);
      if (uVar2 != '\0') {
        local_120 = local_14c;
        local_11c = pcVar3;
        uVar2 = recovered_100024e9(&local_120);
        if (uVar2 != '\0') {
          if (local_154 == 0) {
            local_13c = pcVar3 + 1;
            if (end <= pcVar3) {
              local_13c = end;
            }
            local_154 = 0;
            iVar4 = 5;
            local_148 = pcVar5;
            goto LAB_10001e7c;
          }
          local_154 = local_154 + -1;
          goto LAB_10001e72;
        }
        recovered_10001ca8(str_10003d1e);
        iVar4 = 1;
        goto LAB_10001e7c;
      }
      if (local_154 != 0) goto LAB_10001e6e;
      uVar2 = recovered_100020d5(pcVar5,pcVar3,&DAT_10003d2d,&local_14c);
      local_154 = 0;
      if (uVar2 != '\0') {
        local_120 = local_14c;
        local_11c = pcVar3;
        if (!(local_144 != (char *)0x0 || uVar1 != '\0')) {
          uVar2 = recovered_100024e9(&local_120);
          if (uVar2 != '\0') {
            begin_00 = pcVar3 + 1;
            if (end <= pcVar3) {
              begin_00 = end;
            }
            local_144 = pcVar5;
            goto LAB_10001e72;
          }
        }
        pcVar5 = str_10003d32;
        goto LAB_10001d4a;
      }
    }
    else {
      local_154 = local_154 + 1;
    }
LAB_10001e6e:
LAB_10001e72:
    pcVar5 = pcVar3 + 1;
    if (end <= pcVar3) {
      pcVar5 = end;
    }
    iVar4 = 0;
LAB_10001e7c:
    if (iVar4 != 0) goto LAB_10001f8f;
    goto LAB_10001e22;
  }
  uVar1 = recovered_100020d5(pcVar5,pcVar3,&DAT_10003d2d,(char **)0x0);
  if ((uVar1 != '\0') ||
     (uVar1 = recovered_100020d5(pcVar5,pcVar3,&DAT_10003d1a,(char **)0x0), uVar1 != '\0')) {
    pcVar5 = str_10003d4b;
    goto LAB_10001d4a;
  }
  recovered_10002151(pcVar5,pcVar3);
  begin = pcVar3 + 1;
  if (end <= pcVar3) {
    begin = end;
  }
  goto LAB_10001d7a;
LAB_10001f8f:
  if (iVar4 == 5) goto LAB_10001fb2;
  if (iVar4 == 1) {
    return;
  }
  if (end <= local_138) {
    return;
  }
  goto LAB_10001d82;
LAB_10001fb2:
  begin = local_13c;
  if (local_148 == (char *)0x0) {
    pcVar5 = str_10003d3f;
    goto LAB_10001d4a;
  }
  pcVar5 = local_144;
  if (local_144 == (char *)0x0) {
    pcVar5 = local_148;
  }
  while( true ) {
    recovered_10002bfc(&local_120,local_140,local_124);
    if (DAT_10009590 == '\x01') {
      return;
    }
    if ((local_120 == (char *)0x0) ||
       ((local_120 == (char *)0x3 && (local_118 == 0 && local_11c == (char *)0x0)))) break;
    recovered_10001d27(local_128,pcVar5,local_134);
    if (((uVar1 == '\0') || (DAT_10009590 != '\0')) || (uVar2 = recovered_10002ba7(), uVar2 == '\0')
       ) goto LAB_10001d7a;
  }
  if (uVar1 == '\0' && begin_00 != (char *)0x0) {
    recovered_10001d27(begin_00,local_148,local_134);
  }
  goto LAB_10001d7a;
}

#undef DAT_10003d17
#undef DAT_10003d1a
#undef DAT_10003d2d
#undef DAT_10009590
#undef str_10003cf5
#undef str_10003d11
#undef str_10003d1e
#undef str_10003d32
#undef str_10003d3f
#undef str_10003d4b
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_154
#undef local_14c

#define local_44 (*(byte * *)(pf_stack_frame + 28))
#define local_40 (*(char * *)(pf_stack_frame + 32))
#define local_3c (*(char (*)[60])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d5
 */

uchar recovered_100020d5(char *begin,char *end,char *keyword,char **after)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  local_44 = (byte *)begin;
  local_40 = end;
  uVar1 = recovered_10002450(&local_44,local_3c,0x20);
  if ((uVar1 == '\0') || (uVar1 = recovered_10001d02(local_3c,keyword), uVar1 == '\0')) {
    return '\0';
  }
  if (local_44 < end) {
    if (0x17 < *local_44 - 9) {
      return '\0';
    }
    if ((0x800011U >> (*local_44 - 9 & 0x1f) & 1) == 0) {
      return '\0';
    }
  }
  recovered_10002c47(&local_44);
  if (after == (char **)0x0) {
    return '\x01';
  }
  *after = (char *)local_44;
  return '\x01';
}

#undef local_44
#undef local_40
#undef local_3c

#undef DAT_10003a5d
#define DAT_10003a5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef DAT_10003dae
#define DAT_10003dae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x499U)))
#undef DAT_10003db9
#define DAT_10003db9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef DAT_10007004
#define DAT_10007004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36efU)))
#undef DAT_10007024
#define DAT_10007024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x370fU)))
#undef DAT_10009584
#define DAT_10009584 (*(int *)(((uintptr_t)pf_module_state + 0x5c6fU)))
#undef DAT_10009590
#define DAT_10009590 (*(char *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef DAT_10009794
#define DAT_10009794 (*(int *)(((uintptr_t)pf_module_state + 0x5e7fU)))
#undef str_10003d9a
#define str_10003d9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x485U)))
#undef str_10003db3
#define str_10003db3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10003dbb
#define str_10003dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a6U)))
#define auStackY_460 (*(undefined4 (*)[280])(pf_stack_frame + 16))
#define local_14c (*(char * *)(pf_stack_frame + 804))
#define local_148 (*(char * *)(pf_stack_frame + 808))
#define local_144 (*(char * *)(pf_stack_frame + 812))
#define local_140 (*(char (*)[320])(pf_stack_frame + 816))
#define local_120 (*(undefined4 (*)[72])(pf_stack_frame + 848))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002151
 */

void recovered_10002151(char *begin,char *end)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  char *begin_00;
  char cVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte bVar9;

  bVar9 = 0;
  local_14c = begin;
  local_148 = end;
  recovered_10002c47(&local_14c);
  uVar2 = recovered_100024e9(&local_14c);
  if (uVar2 != '\0') {
    return;
  }
  uVar2 = recovered_10002450(&local_14c,local_140,0x20);
  if (uVar2 == '\0') {
LAB_10002247:
    recovered_10002bfc(local_120,begin,end);
  }
  else {
    recovered_10002c47(&local_14c);
    pcVar8 = local_14c;
    if (((local_14c < end) && (*local_14c == '=')) &&
       ((begin_00 = local_14c + 1, begin_00 == end || (*begin_00 != '=')))) {
      recovered_10002bfc(local_120,begin_00,end);
      iVar4 = DAT_10009584;
      if (DAT_10009590 != '\0') {
        return;
      }
      pcVar8 = &DAT_10007004;
      for (iVar6 = 0; iVar4 != iVar6; iVar6 = iVar6 + 1) {
        uVar2 = recovered_10001d02(pcVar8,local_140);
        if (uVar2 != '\0') goto LAB_100023c4;
        pcVar8 = pcVar8 + 300;
      }
      iVar6 = iVar4;
LAB_100023c4:
      if (iVar6 != 0x20) {
        if (iVar6 == iVar4) {
          DAT_10009584 = iVar4 + 1;
          uVar3 = recovered_10001c91(local_140);
          recovered_10001b35(&DAT_10007004 + iVar4 * 300,local_140,uVar3 + 1);
        }
        recovered_1000361f(&DAT_10007024 + iVar6 * 300,local_120,0x10c);
        return;
      }
      pcVar8 = str_10003d9a;
    }
    else {
      uVar2 = recovered_10001d02(local_140,&DAT_10003dae);
      if ((((uVar2 == '\0') && (uVar2 = recovered_10001d02(local_140,str_10003db3), uVar2 == '\0'))
          && (uVar2 = recovered_10001d02(local_140,&DAT_10003db9), uVar2 == '\0')) ||
         ((pcVar8 != end && (*pcVar8 == '(')))) goto LAB_10002247;
      uVar2 = recovered_100024e9(&local_14c);
      if (uVar2 != '\0') {
        uVar2 = recovered_10001d02(local_140,str_10003db3);
        if (uVar2 == '\0') {
          (**(code **)(DAT_10009794 + 8))(&DAT_10003a5d);
          return;
        }
        return;
      }
      local_144 = &DAT_10003a5d;
      do {
        if (DAT_10009590 != '\0') {
          return;
        }
        recovered_10002511(local_120,&local_14c,0);
        if (DAT_10009590 != '\0') {
          return;
        }
        recovered_100029b8((const unsigned char *)local_120);
        uVar2 = recovered_10001d02(local_140,str_10003db3);
        if (uVar2 == '\0') {
          (**(code **)(DAT_10009794 + 8))(local_144);
        }
        recovered_10002c47(&local_14c);
        uVar2 = recovered_100024e9(&local_14c);
        if (uVar2 != '\0') {
          return;
        }
        pcVar8 = local_14c + 1;
        cVar1 = *local_14c;
        local_14c = pcVar8;
      } while (cVar1 == ',');
      pcVar8 = str_10003dbb;
    }
    recovered_10001ca8(pcVar8);
  }
  return;
}

#undef DAT_10003a5d
#undef DAT_10003dae
#undef DAT_10003db9
#undef DAT_10007004
#undef DAT_10007024
#undef DAT_10009584
#undef DAT_10009590
#undef DAT_10009794
#undef str_10003d9a
#undef str_10003db3
#undef str_10003dbb
#undef auStackY_460
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_120

#undef str_10003dca
#define str_10003dca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

uchar recovered_10002450(void *cursor,char *out,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;

  recovered_10002c47(cursor);
  pbVar3 = *(byte **)cursor;
  pbVar5 = *(byte **)((int)cursor + 4);
  if ((pbVar3 == pbVar5) || ((*pbVar3 != 0x5f && (0x19 < (byte)((*pbVar3 & 0xdf) + 0xbf))))) {
LAB_100024df:
    uVar2 = '\0';
  }
  else {
    uVar4 = 1;
    while ((pbVar3 < pbVar5 &&
           (((bVar1 = *pbVar3, (byte)(bVar1 - 0x30U) < 10 || (bVar1 == 0x5f)) ||
            ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a))))) {
      if (capacity <= uVar4) {
        recovered_10001ca8(str_10003dca);
        goto LAB_100024df;
      }
      *(byte **)cursor = pbVar3 + 1;
      out[uVar4 - 1] = *pbVar3;
      pbVar5 = *(byte **)((int)cursor + 4);
      uVar4 = uVar4 + 1;
      pbVar3 = *(byte **)cursor;
    }
    out[uVar4 - 1] = '\0';
    uVar2 = '\x01';
  }
  return uVar2;
}

#undef str_10003dca

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e9
 */

uchar recovered_100024e9(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10002c47(cursor);
  if (*(char **)cursor == *(char **)((int)cursor + 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = **(char **)cursor == '#';
  }
  return bVar1;
}


#undef DAT_10003968
#define DAT_10003968 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000958c
#define DAT_1000958c (*(uint *)(((uintptr_t)pf_module_state + 0x5c77U)))
#undef DAT_10009590
#define DAT_10009590 (*(char *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef str_10003dde
#define str_10003dde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c9U)))
#undef str_10003dff
#define str_10003dff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10003e0f
#define str_10003e0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_10003e2c
#define str_10003e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#define local_120 (*(int *)(pf_stack_frame + 16))
#define local_11c (*(uint *)(pf_stack_frame + 20))
#define local_118 (*(int *)(pf_stack_frame + 24))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002511
 */

void * recovered_10002511(void *out,void *cursor,uint precedence)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char *text;
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char *text_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;

  recovered_10003884(out,0x10c);
  DAT_1000958c = DAT_1000958c + 1;
  if (DAT_1000958c < 0x11) {
    recovered_10002c79(out,cursor);
    text = (char *)((int)out + 0xc);
switchD_1000275f_caseD_1:
    if (DAT_10009590 == '\0') {
      recovered_10002c47(cursor);
      pbVar3 = *(byte **)cursor;
      if (pbVar3 == *(byte **)((int)cursor + 4)) goto LAB_10002560;
      if (pbVar3 + 1 < *(byte **)((int)cursor + 4)) {
        bVar11 = pbVar3[1] == 0x3d;
      }
      else {
        bVar11 = false;
      }
      bVar6 = *pbVar3;
      uVar8 = (uint)bVar6;
      iVar10 = 3;
      iVar9 = 2;
      if (!(bool)((uVar8 == 0x21 || uVar8 == 0x3d) & bVar11)) {
        if ((bVar6 & 0xfd) == 0x3c) {
          iVar9 = bVar11 + 1;
          iVar10 = 4;
        }
        else {
          bVar6 = bVar6 - 0x25;
          if ((10 < bVar6) || ((0x561U >> (bVar6 & 0x1f) & 1) == 0)) goto LAB_10002560;
          iVar10 = *(int *)(&DAT_10003968 + (uint)bVar6 * 4);
          iVar9 = 1;
        }
      }
      if (iVar10 < (int)precedence) goto LAB_10002560;
      *(byte **)cursor = pbVar3 + iVar9;
      recovered_10002511(&local_120,cursor,iVar10 + 1);
      iVar10 = local_118;
      uVar7 = local_11c;
      lVar12 = CONCAT44(local_118,local_11c);
      if ((uVar8 == 0x3d) || (uVar8 == 0x21)) {
        if (*(int *)out == local_120) {
          if (*(int *)out == 2) {
            bVar6 = recovered_10001d02(text,local_114);
          }
          else {
            bVar6 = *(uint *)((int)out + 4) == local_11c && *(int *)((int)out + 8) == local_118;
          }
        }
        else {
          bVar6 = 0;
        }
        recovered_10003884(text,0x100);
        *(uint *)((int)out + 4) = (uint)(byte)(uVar8 == 0x3d ^ bVar6 ^ 1);
LAB_100026f9:
        *(undefined4 *)((int)out + 8) = 0;
        *(undefined4 *)out = 3;
        goto switchD_1000275f_caseD_1;
      }
      if (local_120 != 2 || (*(int *)out != 2 || uVar8 != 0x2b)) {
        text_00 = str_10003e0f;
        if ((*(int *)out != 1) || (local_120 != 1)) goto LAB_1000255b;
        puVar1 = (uint *)((int)out + 4);
        uVar4 = *puVar1;
        iVar5 = *(int *)((int)out + 8);
        lVar13 = *(longlong *)puVar1;
        uVar2 = uVar8 - 0x25;
        switch((uintptr_t)(uVar2)) {
        case 0:
        case 10:
          text_00 = str_10003e2c;
          if ((local_11c == 0 && local_118 == 0) ||
             ((local_11c == 0xffffffff && uVar4 == 0) && (local_118 == -1 && iVar5 == -0x80000000LL)))
          goto LAB_1000255b;
          if (10 < uVar2) goto switchD_1000275f_caseD_1;
          iVar9 = local_118 >> 0x1f;
          switch((uintptr_t)(uVar2)) {
          case 0:
            lVar13 = recovered_10003824(*(longlong *)puVar1,CONCAT44(local_118,local_11c));
            *(longlong *)((int)out + 4) = lVar13;
            if ((lVar13 == 0) || (-(int)(lVar13 >> 0x3f) == -iVar9)) goto switchD_1000275f_caseD_1;
            lVar13 = lVar13 + lVar12;
            break;
          default:
            goto switchD_1000275f_caseD_1;
          case 5:
            goto switchD_1000275f_caseD_5;
          case 6:
            goto switchD_1000275f_caseD_6;
          case 8:
            goto switchD_1000275f_caseD_8;
          case 10:
            lVar12 = recovered_100037c3(*(longlong *)puVar1,CONCAT44(local_118,local_11c));
            lVar13 = recovered_10003824(lVar13,CONCAT44(iVar10,uVar7));
            uVar8 = (uint)(-(iVar5 >> 0x1f) != -iVar9 && lVar13 != 0);
            *(uint *)((int)out + 4) = (uint)lVar12 - uVar8;
            *(uint *)((int)out + 8) =
                 (int)((ulonglong)lVar12 >> 0x20) - (uint)((uint)lVar12 < uVar8);
            goto switchD_1000275f_caseD_1;
          }
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 7:
        case 9:
          goto switchD_1000275f_caseD_1;
        case 5:
switchD_1000275f_caseD_5:
          *(int *)((int)out + 4) = (int)((ulonglong)local_11c * (ulonglong)uVar4);
          *(uint *)((int)out + 8) =
               local_118 * uVar4 +
               iVar5 * local_11c + (int)((ulonglong)local_11c * (ulonglong)uVar4 >> 0x20);
          goto switchD_1000275f_caseD_1;
        case 6:
switchD_1000275f_caseD_6:
          *(uint *)((int)out + 4) = local_11c + uVar4;
          *(uint *)((int)out + 8) = local_118 + iVar5 + (uint)CARRY4(local_11c,uVar4);
          goto switchD_1000275f_caseD_1;
        case 8:
switchD_1000275f_caseD_8:
          lVar13 = CONCAT44((iVar5 - local_118) - (uint)(uVar4 < local_11c),uVar4 - local_11c);
          break;
        default:
          if (uVar8 == 0x3c) {
            bVar11 = (SBORROW4(iVar5,local_118) !=
                     SBORROW4(iVar5 - local_118,(uint)(uVar4 < local_11c))) !=
                     (int)((iVar5 - local_118) - (uint)(uVar4 < local_11c)) < 0;
            if (iVar9 == 2) {
              bVar11 = (SBORROW4(local_118,iVar5) !=
                       SBORROW4(local_118 - iVar5,(uint)(local_11c < uVar4))) ==
                       (int)((local_118 - iVar5) - (uint)(local_11c < uVar4)) < 0;
            }
            *(uint *)((int)out + 4) = (uint)bVar11;
            goto LAB_100026f9;
          }
          if (uVar8 == 0x3e) {
            bVar11 = (SBORROW4(local_118,iVar5) !=
                     SBORROW4(local_118 - iVar5,(uint)(local_11c < uVar4))) !=
                     (int)((local_118 - iVar5) - (uint)(local_11c < uVar4)) < 0;
            if (iVar9 == 2) {
              bVar11 = (SBORROW4(iVar5,local_118) !=
                       SBORROW4(iVar5 - local_118,(uint)(uVar4 < local_11c))) ==
                       (int)((iVar5 - local_118) - (uint)(uVar4 < local_11c)) < 0;
            }
            *(uint *)((int)out + 4) = (uint)bVar11;
            *(undefined4 *)((int)out + 8) = 0;
            *(undefined4 *)out = 3;
          }
          goto switchD_1000275f_caseD_1;
        }
        *(longlong *)((int)out + 4) = lVar13;
        goto switchD_1000275f_caseD_1;
      }
      uVar8 = recovered_10001c91(text);
      uVar7 = recovered_10001c91(local_114);
      if (uVar7 + uVar8 < 0x100) {
        recovered_10001b35(text + uVar8,local_114,uVar7 + 1);
      }
      else {
        recovered_10001ca8(str_10003dff);
      }
      goto switchD_1000275f_caseD_1;
    }
  }
  else {
    text_00 = str_10003dde;
LAB_1000255b:
    recovered_10001ca8(text_00);
  }
LAB_10002560:
  DAT_1000958c = DAT_1000958c - 1;
  return out;
}

#undef DAT_10003968
#undef DAT_1000958c
#undef DAT_10009590
#undef str_10003dde
#undef str_10003dff
#undef str_10003e0f
#undef str_10003e2c
#undef local_120
#undef local_11c
#undef local_118
#undef local_114

/* Recovered aggregate printer; Pooka's Free Software License. */
void recovered_100029b8(const unsigned char *value){
 unsigned tag=*(const unsigned *)value; unsigned long long bits=0;for(unsigned i=0;i<8;i++)bits|=(unsigned long long)value[4+i]<<(8*i);
 void (*log)(const char *)=*(void (**)(const char *))((*(unsigned int *)(pf_module_state+0x5e7f))+8);
 if(tag==0){log("nil");return;}if(tag==2){log((const char *)value+12);return;}if(tag==3){log(bits?"true":"false");return;}
 if((long long)bits<0){log("-");bits=0-bits;}char text[24];unsigned n=0;do{text[n++]=(char)('0'+bits%10);bits/=10;}while(bits);for(unsigned i=0;i<n/2;i++){char x=text[i];text[i]=text[n-1-i];text[n-1-i]=x;}text[n]=0;log(text);
}


#undef DAT_10009590
#define DAT_10009590 (*(char *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef str_10003f9b
#define str_10003f9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#define local_114 (*(char (*)[276])(pf_stack_frame + 44))
#define local_128 (*(char * *)(pf_stack_frame + 24))
#define local_124 (*(char * *)(pf_stack_frame + 28))
#define local_120 (*(int (*)[72])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad2
 */

uchar recovered_10002ad2(char *input,char *out)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint length;
  bool bVar2;

  local_128 = input;
  uVar1 = recovered_10001c91(input);
  local_124 = input + uVar1;
  recovered_10002c47(&local_128);
  if ((local_128 < local_124) && ((*local_128 == '\'' || (*local_128 == '\"')))) {
    recovered_10002bfc(local_120,local_128,local_124);
    bVar2 = false;
    if ((DAT_10009590 == '\0') && (local_120[0] == 2)) {
      uVar1 = recovered_10001c91(local_114);
      recovered_10001b35(out,local_114,uVar1 + 1);
      bVar2 = *out != '\0';
    }
  }
  else {
    uVar1 = (int)local_124 - (int)local_128;
    do {
      length = uVar1;
      if (length == 0) goto LAB_10002b92;
      uVar1 = length - 1;
    } while ((local_128[length - 1] == ' ') || (local_128[length - 1] == '\t'));
    if (length < 0x100) {
      recovered_10001b35(out,local_128,length);
      out[length] = '\0';
      bVar2 = true;
    }
    else {
LAB_10002b92:
      recovered_10001ca8(str_10003f9b);
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_10009590
#undef str_10003f9b
#undef local_114
#undef local_128
#undef local_124
#undef local_120

#undef DAT_10009588
#define DAT_10009588 (*(uint *)(((uintptr_t)pf_module_state + 0x5c73U)))
#undef DAT_10009590
#define DAT_10009590 (*(byte *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef str_10003d67
#define str_10003d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x452U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba7
 */

uchar recovered_10002ba7(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10009588 = DAT_10009588 + 1;
  if (10000 < DAT_10009588) {
    recovered_10001ca8(str_10003d67);
  }
  return DAT_10009590 ^ 1;
}

#undef DAT_10009588
#undef DAT_10009590
#undef str_10003d67

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

char * recovered_10002be4(char *begin,char *end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; (begin < end && (*begin != '\n')); begin = begin + 1) {
  }
  return begin;
}


#undef str_10003d81
#define str_10003d81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46cU)))
#define local_1c (*(char * *)(pf_stack_frame + 20))
#define local_18 (*(char * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bfc
 */

void * recovered_10002bfc(void *out,char *begin,char *end)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  local_18 = end;
  local_1c = begin;
  recovered_10002511(out,&local_1c,0);
  uVar1 = recovered_100024e9(&local_1c);
  if (uVar1 == '\0') {
    recovered_10001ca8(str_10003d81);
  }
  return out;
}

#undef str_10003d81
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c47
 */

void recovered_10002c47(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;

  pbVar1 = *(byte **)cursor;
  while (((pbVar1 < *(byte **)((int)cursor + 4) && (*pbVar1 - 9 < 0x18)) &&
         ((0x800011U >> (*pbVar1 - 9 & 0x1f) & 1) != 0))) {
    pbVar1 = pbVar1 + 1;
    *(byte **)cursor = pbVar1;
  }
  return;
}


#undef DAT_10003a19
#define DAT_10003a19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_10003a1e
#define DAT_10003a1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109U)))
#undef DAT_10003a5d
#define DAT_10003a5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef DAT_10003b19
#define DAT_10003b19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_10003b35
#define DAT_10003b35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_10003dae
#define DAT_10003dae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x499U)))
#undef DAT_10003db9
#define DAT_10003db9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef DAT_10003ef1
#define DAT_10003ef1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5dcU)))
#undef DAT_10003ef5
#define DAT_10003ef5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e0U)))
#undef DAT_10003f80
#define DAT_10003f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_10003f85
#define DAT_10003f85 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670U)))
#undef DAT_10007004
#define DAT_10007004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36efU)))
#undef DAT_10009584
#define DAT_10009584 (*(int *)(((uintptr_t)pf_module_state + 0x5c6fU)))
#undef DAT_10009590
#define DAT_10009590 (*(byte *)(((uintptr_t)pf_module_state + 0x5c7bU)))
#undef DAT_10009794
#define DAT_10009794 (*(int *)(((uintptr_t)pf_module_state + 0x5e7fU)))
#undef str_10003a35
#define str_10003a35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10003a60
#define str_10003a60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
#undef str_10003db3
#define str_10003db3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10003dff
#define str_10003dff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10003e3d
#define str_10003e3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x528U)))
#undef str_10003e51
#define str_10003e51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53cU)))
#undef str_10003e6e
#define str_10003e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x559U)))
#undef str_10003e99
#define str_10003e99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x584U)))
#undef str_10003ead
#define str_10003ead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_10003ec6
#define str_10003ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
#undef str_10003ee0
#define str_10003ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cbU)))
#undef str_10003efa
#define str_10003efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_10003f00
#define str_10003f00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ebU)))
#undef str_10003f11
#define str_10003f11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef str_10003f22
#define str_10003f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60dU)))
#undef str_10003f42
#define str_10003f42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62dU)))
#undef str_10003f6a
#define str_10003f6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x655U)))
#undef str_10003f8a
#define str_10003f8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x675U)))
#define out_00 (*(void * *)(pf_stack_frame + 272))
#define local_bd8 (*(uint *)(pf_stack_frame + 296))
#define local_bd0 (*(uint *)(pf_stack_frame + 304))
#define aiStackY_cf0 (*(int (*)[828])(pf_stack_frame + 16))
#define local_bc0 (*(int *)(pf_stack_frame + 320))
#define uStackY_bf4 (*(undefined4 *)(pf_stack_frame + 268))
#define local_bbc (*(undefined4 *)(pf_stack_frame + 324))
#define local_bb8 (*(char (*)[3000])(pf_stack_frame + 328))
#define local_b98 (*(int *)(pf_stack_frame + 360))
#define local_b94 (*(uint *)(pf_stack_frame + 364))
#define local_b90 (*(int *)(pf_stack_frame + 368))
#define local_b8c (*(byte (*)[2956])(pf_stack_frame + 372))
#define local_a8c (*(ulonglong (*)[337])(pf_stack_frame + 628))
#define local_980 (*(int (*)[608])(pf_stack_frame + 896))
#define local_974 (*(char (*)[2420])(pf_stack_frame + 908))
#define local_870 (*(undefined4 (*)[540])(pf_stack_frame + 1168))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 3308))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c79
 */

void * recovered_10002c79(void *out,void *cursor)

{
  unsigned char pf_stack_frame[3360] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uchar uVar5;
  byte bVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  byte bVar21;
  ulonglong uVar22;

  bVar21 = 0;
  uStackY_bf4 = 0x10002ca8;
  recovered_10003884(&local_b98,0x10c);
  recovered_10002c47(cursor);
  uVar5 = recovered_10002ba7();
  if (uVar5 == '\0') {
LAB_10002d23:
    recovered_10001ca8(str_10003e3d);
  }
  else {
    pbVar14 = *(byte **)cursor;
    pbVar2 = *(byte **)((int)cursor + 4);
    if (pbVar14 == pbVar2) goto LAB_10002d23;
    pbVar7 = pbVar14 + 1;
    *(byte **)cursor = pbVar7;
    bVar6 = *pbVar14;
    uVar10 = (uint)bVar6;
    if (uVar10 == 0x28) {
      uStackY_bf4 = 0x10002ce7;
      recovered_10002511(&local_b98,cursor,0);
      recovered_10002c47(cursor);
      pcVar8 = *(char **)cursor;
      if ((pcVar8 == *(char **)((int)cursor + 4)) || (*(char **)cursor = pcVar8 + 1, *pcVar8 != ')')
         ) {
        recovered_10001ca8(str_10003e51);
      }
LAB_10002ecb:
      uStackY_bf4 = 0x10002ed1;
      recovered_1000361f(out,&local_b98,0x10c);
      return out;
    }
    if ((uVar10 - 0x21 < 0xd) && ((0x1401U >> (uVar10 - 0x21 & 0x1f) & 1) != 0)) {
      uStackY_bf4 = 0x10002d6d;
      recovered_10002511(&local_b98,cursor,7);
      if (uVar10 == 0x21) {
        if (local_b98 == 0) {
          bVar20 = true;
        }
        else {
          bVar20 = (local_b90 == 0 && local_b94 == 0) && local_b98 == 3;
        }
        uStackY_bf4 = 0x10002ead;
        recovered_10003884(local_b8c,0x100);
        local_b90 = 0;
        local_b98 = 3;
        local_b94 = (uint)bVar20;
      }
      else if (local_b98 == 1) {
        if (uVar10 == 0x2d) {
          bVar20 = local_b94 != 0;
          local_b94 = -local_b94;
          local_b90 = -(uint)bVar20 - local_b90;
        }
      }
      else {
        recovered_10001ca8(str_10003e6e);
      }
      goto LAB_10002ecb;
    }
    if ((uVar10 == 0x27) || (uVar10 == 0x22)) {
      local_b98 = 2;
      iVar15 = -0xff;
      while ((pbVar7 < pbVar2 && (*pbVar7 != bVar6))) {
        pbVar14 = pbVar7 + 1;
        *(byte **)cursor = pbVar14;
        bVar21 = *pbVar7;
        if ((bVar21 == 0x5c) && (bVar21 = 0x5c, pbVar14 < pbVar2)) {
          bVar1 = *pbVar14;
          bVar21 = 0x5c;
          if (bVar1 == bVar6 || bVar1 == 0x5c) {
            pbVar14 = pbVar7 + 2;
            *(byte **)cursor = pbVar14;
            bVar21 = pbVar7[1];
          }
          else if (uVar10 == 0x22) {
            pbVar14 = pbVar7 + 2;
            *(byte **)cursor = pbVar14;
            if (bVar1 == 0x6e) {
              bVar21 = 10;
            }
            else if (bVar1 == 0x72) {
              bVar21 = 0xd;
            }
            else {
              bVar21 = bVar1;
              if (bVar1 == 0x74) {
                bVar21 = 9;
              }
            }
          }
        }
        if (iVar15 == 0) {
          recovered_10001ca8(str_10003dff);
          goto LAB_10002ecb;
        }
        local_b8c[iVar15 + 0xff] = bVar21;
        iVar15 = iVar15 + 1;
        pbVar7 = pbVar14;
      }
      if (pbVar7 == pbVar2) {
        recovered_10001ca8(str_10003e99);
      }
      else {
        *(byte **)cursor = pbVar7 + 1;
      }
      goto LAB_10002ecb;
    }
    uVar11 = (uint)(byte)(bVar6 - 0x30U);
    if ((byte)(bVar6 - 0x30U) < 10) {
      uVar13 = 10;
      if (pbVar7 < pbVar2 && uVar10 == 0x30) {
        uVar11 = 0;
        bVar21 = 0;
        if (*pbVar7 == 0x78) {
          pbVar7 = pbVar14 + 2;
          *(byte **)cursor = pbVar7;
          uVar13 = 0x10;
          bVar21 = 1;
          uVar11 = 0;
        }
      }
      else {
        bVar21 = 0;
      }
      uVar3 = (ulonglong)uVar11;
      local_bc0 = 0;
      while( true ) {
        local_bd8 = (uint)(uVar3 >> 0x20);
        local_bd0 = (uint)uVar3;
        if (pbVar2 <= pbVar7) break;
        bVar6 = *pbVar7;
        if ((byte)(bVar6 - 0x30U) < 10) {
          uVar10 = bVar6 - 0x30U;
        }
        else if ((byte)(bVar6 + 0x9f) < 6) {
          uVar10 = (int)(char)bVar6 - 0x57;
        }
        else {
          uVar10 = (int)(char)bVar6 - 0x37;
          if (5 < (byte)(bVar6 + 0xbf)) {
            uVar10 = 99;
          }
        }
        if (uVar13 <= uVar10) break;
        uStackY_bf4 = 0x10003098;
        uVar22 = recovered_10003646(CONCAT44(0xffffffff,~uVar10),(ulonglong)uVar13);
        uVar11 = (uint)(uVar22 >> 0x20);
        if (uVar11 < local_bd8 || uVar11 - local_bd8 < (uint)((uint)uVar22 < local_bd0)) {
          pcVar8 = str_10003ead;
          goto LAB_10003139;
        }
        uVar3 = (uVar3 & 0xffffffff) * (ulonglong)uVar13 + CONCAT44(local_bd8 * uVar13,uVar10);
        pbVar7 = pbVar7 + 1;
        *(byte **)cursor = pbVar7;
        local_bc0 = local_bc0 + -1;
      }
      if ((bool)(bVar21 & local_bc0 == 0)) {
        recovered_10001ca8(str_10003ec6);
      }
      uStackY_bf4 = 0x10003107;
      recovered_10003884((void *)((int)out + 0xc),0x100);
      *(undefined4 *)out = 1;
      *(ulonglong *)((int)out + 4) = uVar3;
      return out;
    }
    *(byte **)cursor = pbVar14;
    uStackY_bf4 = 0x10002fa1;
    uVar5 = recovered_10002450(cursor,local_bb8,0x20);
    if (uVar5 == '\0') {
      pcVar8 = str_10003ee0;
LAB_10003139:
      recovered_10001ca8(pcVar8);
      uStackY_bf4 = 0x10003150;
      recovered_10003884(out,0x10c);
      return out;
    }
    uVar5 = recovered_10001d02(local_bb8,&DAT_10003ef1);
    if (uVar5 != '\0') goto LAB_10002d3a;
    bVar6 = recovered_10001d02(local_bb8,&DAT_10003ef5);
    if ((bVar6 != 0) || (uVar5 = recovered_10001d02(local_bb8,str_10003efa), uVar5 != '\0')) {
      local_b98 = 3;
      local_b94 = (uint)bVar6;
      local_b90 = 0;
      goto LAB_10002ecb;
    }
    recovered_10002c47(cursor);
    pcVar8 = *(char **)cursor;
    if ((*(char **)((int)cursor + 4) <= pcVar8) || (*pcVar8 != '(')) {
      iVar15 = DAT_10009584 + 1;
      pcVar8 = &DAT_10007004;
      while( true ) {
        pcVar12 = pcVar8;
        iVar15 = iVar15 + -1;
        if (iVar15 == 0) break;
        uVar5 = recovered_10001d02(local_bb8,pcVar12);
        pcVar8 = pcVar12 + 300;
        if (uVar5 != '\0') {
          uStackY_bf4 = 0x10003296;
          recovered_1000361f(out,pcVar12 + 0x20,0x10c);
          return out;
        }
      }
      pcVar8 = str_10003f11;
      goto LAB_10003139;
    }
    *(char **)cursor = pcVar8 + 1;
    recovered_10002c47(cursor);
    local_bd8 = 0;
    iVar15 = 1;
    iVar18 = -0x96c;
    while( true ) {
      pcVar8 = *(char **)cursor;
      pcVar12 = *(char **)((int)cursor + 4);
      if (pcVar12 <= pcVar8) break;
      if ((*pcVar8 == ')') || ((DAT_10009590 & 1) != 0)) goto LAB_100032ca;
      if (iVar18 == 0) {
        pcVar8 = str_10003a35;
        goto LAB_100033ba;
      }
      local_bd8 = local_bd8 + 1;
      uStackY_bf4 = 0x100031ef;
      recovered_10002511(local_a8c,cursor,0);
      uStackY_bf4 = 0x10003201;
      recovered_1000361f(auStack_14 + iVar18,local_a8c,0x10c);
      recovered_10002c47(cursor);
      pcVar8 = *(char **)cursor;
      pcVar12 = *(char **)((int)cursor + 4);
      if (pcVar12 <= pcVar8) goto LAB_100032ca;
      if (*pcVar8 != ',') goto LAB_100032c6;
      *(char **)cursor = pcVar8 + 1;
      recovered_10002c47(cursor);
      if ((*(char **)cursor == *(char **)((int)cursor + 4)) || (**(char **)cursor == ')')) {
        recovered_10001ca8(str_10003f00);
      }
      iVar15 = iVar15 + 1;
      iVar18 = iVar18 + 0x10c;
    }
    iVar15 = iVar15 + -1;
LAB_100032c6:
    local_bd8 = iVar15;
LAB_100032ca:
    if ((pcVar8 == pcVar12) || (*(char **)cursor = pcVar8 + 1, *pcVar8 != ')')) {
      pcVar8 = str_10003e51;
LAB_100033ba:
      recovered_10001ca8(pcVar8);
    }
    else if (DAT_10009590 != 1) {
      uVar5 = recovered_10001d02(local_bb8,&DAT_10003dae);
      if (((uVar5 == '\0') && (uVar5 = recovered_10001d02(local_bb8,str_10003db3), uVar5 == '\0'))
         && (uVar5 = recovered_10001d02(local_bb8,&DAT_10003db9), uVar5 == '\0')) {
        if ((local_bd8 == 0) || (local_980[0] != 2)) {
          pcVar8 = str_10003f22;
LAB_10003497:
          recovered_10001ca8(pcVar8);
          goto LAB_1000349c;
        }
        uVar5 = recovered_10001d02(local_bb8,&DAT_10003a1e);
        if (uVar5 != '\0') {
          local_bbc = 0;
          puVar9 = local_870;
          uVar10 = 0;
          while( true ) {
            if (local_bd8 - 1 == uVar10) {
              uStackY_bf4 = 0x100034e7;
              uVar10 = (**(code **)(DAT_10009794 + 0x20))
                                 (local_974,local_bd8 - 1,local_a8c,(ulonglong *)&local_bbc);
              if (uVar10 == 0) {
                recovered_10001ca8(str_10003a60);
              }
              uVar4 = local_bbc;
              uStackY_bf4 = 0x10003516;
              recovered_10003884((void *)((int)out + 0xc),0x100);
              *(undefined4 *)out = 1;
              *(undefined4 *)((int)out + 4) = uVar4;
              *(undefined4 *)((int)out + 8) = 0;
              return out;
            }
            if (((puVar9[-1] | 2) != 3) || (puVar9[1] != 0)) break;
            *(undefined4 *)((int)local_a8c + uVar10 * 4) = *puVar9;
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 0x43;
          }
          pcVar8 = str_10003f42;
          goto LAB_10003497;
        }
        if (local_bd8 != 1) {
          pcVar8 = str_10003f6a;
          goto LAB_10003497;
        }
        uVar5 = recovered_10001d02(local_bb8,&DAT_10003f80);
        if (uVar5 == '\0') {
          uVar5 = recovered_10001d02(local_bb8,&DAT_10003f85);
          if (uVar5 == '\0') {
            uVar5 = recovered_10001d02(local_bb8,&DAT_10003b19);
            if (uVar5 == '\0') {
              uVar5 = recovered_10001d02(local_bb8,&DAT_10003b35);
              if (uVar5 == '\0') {
                uVar5 = recovered_10001d02(local_bb8,&DAT_10003a19);
                if (uVar5 == '\0') {
                  recovered_10001ca8(str_10003f8a);
                  uVar10 = 0;
                }
                else {
                  uStackY_bf4 = 0x10003604;
                  (**(code **)(DAT_10009794 + 0x24))(local_974);
                  uVar10 = 1;
                }
                goto LAB_100035bf;
              }
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
            }
            uStackY_bf4 = 0x100035bc;
            uVar10 = (**(code **)(DAT_10009794 + 0x1c))(local_974,uVar10);
          }
          else {
            uStackY_bf4 = 0x1000355a;
            uVar10 = (**(code **)(DAT_10009794 + 0x18))(local_974);
          }
        }
        else {
          uStackY_bf4 = 0x1000347c;
          uVar10 = (**(code **)(DAT_10009794 + 0x14))(local_974);
        }
LAB_100035bf:
        *(undefined4 *)out = 1;
        *(uint *)((int)out + 4) = uVar10;
        *(undefined4 *)((int)out + 8) = 0;
      }
      else {
        piVar16 = local_980;
        while (bVar20 = local_bd8 != 0, local_bd8 = local_bd8 + -1, bVar20) {
          recovered_100029b8((const unsigned char *)piVar16);
          uVar5 = recovered_10001d02(local_bb8,str_10003db3);
          if (uVar5 == '\0') {
            uStackY_bf4 = 0x100033a3;
            (**(code **)(DAT_10009794 + 8))(&DAT_10003a5d);
          }
          piVar16 = piVar16 + 0x43;
        }
LAB_1000349c:
        *(undefined4 *)out = 1;
        *(undefined4 *)((int)out + 8) = 0;
        *(undefined4 *)((int)out + 4) = 0;
      }
      uVar10 = 0x100;
      out_00 = (void *)((int)out + 0xc);
      goto LAB_10002d3b;
    }
  }
LAB_10002d3a:
  uVar10 = 0x10c;
  out_00 = out;
LAB_10002d3b:
  uStackY_bf4 = 0x10002d40;
  recovered_10003884(out_00,uVar10);
  return out;
}

#undef DAT_10003a19
#undef DAT_10003a1e
#undef DAT_10003a5d
#undef DAT_10003b19
#undef DAT_10003b35
#undef DAT_10003dae
#undef DAT_10003db9
#undef DAT_10003ef1
#undef DAT_10003ef5
#undef DAT_10003f80
#undef DAT_10003f85
#undef DAT_10007004
#undef DAT_10009584
#undef DAT_10009590
#undef DAT_10009794
#undef str_10003a35
#undef str_10003a60
#undef str_10003db3
#undef str_10003dff
#undef str_10003e3d
#undef str_10003e51
#undef str_10003e6e
#undef str_10003e99
#undef str_10003ead
#undef str_10003ec6
#undef str_10003ee0
#undef str_10003efa
#undef str_10003f00
#undef str_10003f11
#undef str_10003f22
#undef str_10003f42
#undef str_10003f6a
#undef str_10003f8a
#undef out_00
#undef local_bd8
#undef local_bd0
#undef aiStackY_cf0
#undef local_bc0
#undef uStackY_bf4
#undef local_bbc
#undef local_bb8
#undef local_b98
#undef local_b94
#undef local_b90
#undef local_b8c
#undef local_a8c
#undef local_980
#undef local_974
#undef local_870
#undef auStack_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000361f
 */

void recovered_1000361f(void *out,void *pf_input,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)pf_input + uVar1);
  }
  return;
}


static unsigned long long pf_divide(unsigned long long a,unsigned long long b,unsigned long long *rem){unsigned long long q=0,r=0;if(!b){if(rem)*rem=a;return ~0ULL;}for(unsigned i=64;i;i--){unsigned carry=(unsigned)(r>>63);r=(r<<1)|((a>>(i-1))&1);if(carry||r>=b){r-=b;q|=1ULL<<(i-1);}}if(rem)*rem=r;return q;}
unsigned long long recovered_10003646(unsigned long long a,unsigned long long b){return pf_divide(a,b,0);}


#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000366c
 */

undefined8 recovered_1000366c(uint param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  if (param_1 == 0 && param_2 == 0) {
    local_34 = 0;
    uVar8 = 0;
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    local_34 = 0;
    uVar8 = 0;
    uVar2 = 0;
    uVar4 = 0;
    for (uVar6 = 0x3f; uVar6 != 0xffffffff; uVar6 = uVar6 - 1) {
      uVar7 = uVar8 << 1 | local_34 >> 0x1f;
      uVar9 = recovered_100038da(CONCAT44(in_EDX,in_ECX),uVar6 & 0xff);
      uVar1 = ((uint)uVar9 & 1) + local_34 * 2;
      uVar10 = recovered_1000389f(1,uVar6 & 0xff);
      uVar3 = 0;
      uVar5 = 0;
      uVar9 = 0;
      if ((int)uVar8 < 0 || param_2 <= uVar7 && (uint)(uVar1 < param_1) <= uVar7 - param_2) {
        uVar3 = param_2;
        uVar5 = param_1;
        uVar9 = uVar10;
      }
      local_34 = uVar1 - uVar5;
      uVar8 = (uVar7 - uVar3) - (uint)(uVar1 < uVar5);
      uVar4 = uVar4 | (uint)(uVar9 >> 0x20);
      uVar2 = uVar2 | (uint)uVar9;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_34;
    param_3[1] = uVar8;
  }
  return CONCAT44(uVar4,uVar2);
}

#undef local_34

unsigned long long recovered_10003787(unsigned long long a,unsigned long long b){unsigned long long r;pf_divide(a,b,&r);return r;}


long long recovered_100037c3(long long a,long long b){unsigned long long x=a<0?0-(unsigned long long)a:(unsigned long long)a,y=b<0?0-(unsigned long long)b:(unsigned long long)b,q=pf_divide(x,y,0);return (a<0)!=(b<0)?0-q:q;}


long long recovered_10003824(long long a,long long b){unsigned long long x=a<0?0-(unsigned long long)a:(unsigned long long)a,y=b<0?0-(unsigned long long)b:(unsigned long long)b,r;pf_divide(x,y,&r);return a<0?0-r:r;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000387c
 */

void recovered_1000387c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003884
 */

void recovered_10003884(void *out,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  while (bVar1 = size != 0, size = size - 1, bVar1) {
    *(undefined1 *)out = 0;
    out = (void *)((int)out + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000389f
 */

ulonglong recovered_1000389f(ulonglong value,uint count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (count != 0) {
    bVar1 = (byte)count;
    if ((int)count < 0x20) {
      value = CONCAT44(PF_PART4(value, 4) << (bVar1 & 0x1f) | (uint)value >> 0x20 - (bVar1 & 0x1f),
                       (uint)value << (bVar1 & 0x1f));
    }
    else if (count < 0x40) {
      value = (ulonglong)((uint)value << (bVar1 & 0x1f)) << 0x20;
    }
    else {
      value = 0;
    }
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038da
 */

ulonglong recovered_100038da(ulonglong value,uint count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (count != 0) {
    bVar1 = (byte)count;
    if ((int)count < 0x20) {
      value = CONCAT44(PF_PART4(value, 4) >> (bVar1 & 0x1f),
                       (uint)value >> (bVar1 & 0x1f) | PF_PART4(value, 4) << 0x20 - (bVar1 & 0x1f));
    }
    else if (count < 0x40) {
      value = (ulonglong)(PF_PART4(value, 4) >> (bVar1 & 0x1f));
    }
    else {
      value = 0;
    }
  }
  return value;
}


/* Freestanding compiler clearing helper; Pooka's Free Software License. */
void __bzero(void *memory,unsigned long size){volatile unsigned char *bytes=memory;while(size--)*bytes++=0;}
void bzero(void *memory,unsigned long size){__bzero(memory,size); }

unsigned long long __udivdi3(unsigned long long a,unsigned long long b){return recovered_10003646(a,b); }
unsigned long long __ashldi3(unsigned long long v,unsigned n){union{unsigned long long q;unsigned w[2];}x={v};if(n>=32){x.w[1]=n<64?x.w[0]<<(n-32):0;x.w[0]=0;}else if(n){x.w[1]=(x.w[1]<<n)|(x.w[0]>>(32-n));x.w[0]<<=n;}return x.q;}
unsigned long long __lshrdi3(unsigned long long v,unsigned n){union{unsigned long long q;unsigned w[2];}x={v};if(n>=32){x.w[0]=n<64?x.w[1]>>(n-32):0;x.w[1]=0;}else if(n){x.w[0]=(x.w[0]>>n)|(x.w[1]<<(32-n));x.w[1]>>=n;}return x.q;}
