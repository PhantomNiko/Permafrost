/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000430
 */

void * recovered_10000430(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x77e0U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x77e8U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x77f0U)))
#undef str_10000828
#define str_10000828 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10000837
#define str_10000837 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfU)))
#undef str_1000084e
#define str_1000084e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26U)))
#define auStack_54 (*(undefined1 (*)[84])(pf_stack_frame + 28))
#define uStack_34 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000043c
 */

uint recovered_1000043c(void *api)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;

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
  recovered_100005c0((undefined1 *)&DAT_10008008,0x18);
  recovered_100005c0(auStack_54,0x20);
  uStack_34 = 0;
  DAT_10008008 = api;
  if (*(int *)api == 0x54584b57) {
    if (0xbb < *(uint *)((long)api + 8)) {
      if (*(uint *)((long)api + 0xb8) == 0) {
LAB_100004f4:
        if ((*(uint *)((long)api + 100) == 0) ||
           (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 100))(0x10c3000,0,0x1000,&uStack_34),
           iVar1 == 0)) goto LAB_1000059c;
        DAT_10008010 = (ulong)uStack_34;
        DAT_10008018 = 1;
      }
      else {
        DAT_10008018 = (*(code *)(ulong)*(uint *)((long)api + 0xb8))
                                 (0x10c3000,0,0x1000,&DAT_10008010);
        if (DAT_10008018 == 0) goto LAB_100005a4;
      }
      uVar3 = recovered_100005d4(auStack_54,0x20);
      if ((((int)uVar3 != 0) && (*(uint *)((long)api + 0xc) != 0)) &&
         (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                            (str_10000828,str_10000837,str_1000084e), iVar1 != 0)) {
        recovered_100005c0(auStack_54,0x20);
        if (*(int *)api != 0x54584b57) {
          return 0;
        }
        if (*(uint *)((long)api + 8) < 0xe8) {
          return 0;
        }
        if (*(uint *)((long)api + 0xe4) == 0) {
          return 0;
        }
        uVar2 = (*(code *)(ulong)*(uint *)((long)api + 0xe4))(recovered_100005d4,0x100,str_10000837)
        ;
        return uVar2;
      }
      goto LAB_100005a4;
    }
    if (0x67 < *(uint *)((long)api + 8)) goto LAB_100004f4;
  }
LAB_1000059c:
  DAT_10008018 = 0;
LAB_100005a4:
  recovered_100005c0(auStack_54,0x20);
  return 0;
}

#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008018
#undef str_10000828
#undef str_10000837
#undef str_1000084e
#undef auStack_54
#undef uStack_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005c0
 */

void recovered_100005c0(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(int *)(((uintptr_t)pf_module_state + 0x77d8U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x77e0U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x77e8U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x77f0U)))
#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005d4
 */

undefined8 recovered_100005d4(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;

  uVar9 = 0;
  if ((param_1 != (undefined1 *)0x0) && (0xfffffeff < param_2 - 0x101)) {
    recovered_100005c0(auStack_170,0x100);
    while( true ) {
      do {
        iVar11 = DAT_10008000;
        cVar1 = '\x01';
        { __typeof__(DAT_10008000) pf_exclusive_expected = iVar11;
bVar2 = __atomic_compare_exchange_n(&(DAT_10008000),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
      } while (cVar1 != '\0');
      if (iVar11 == 0) break;
      do {
      } while (DAT_10008000 != 0);
    }
    for (uVar8 = 0; uVar10 = param_2 - uVar8, uVar8 <= param_2 && uVar10 != 0;
        uVar8 = uVar10 + uVar8) {
      if (3 < uVar10) {
        uVar10 = 4;
      }
      uStack_70 = 0;
      if ((DAT_10008008 == (int *)0x0) || (DAT_10008018 == 0)) {
LAB_10000734:
        uVar9 = 0;
        DAT_10008000 = 0;
        goto LAB_1000073c;
      }
      iVar11 = 0x32;
      while (iVar11 != 0) {
        uVar9 = recovered_1000078c(DAT_10008008,DAT_10008010 + 4,(long)&uStack_70 + 4);
        if ((int)uVar9 == 0) goto LAB_10000734;
        if ((uStack_70 & 0x100000000) != 0) goto LAB_100006ec;
        iVar11 = iVar11 + -1;
        if ((iVar11 != 0) &&
           ((((DAT_10008008 == (int *)0x0 || (*DAT_10008008 != 0x54584b57)) ||
             ((uint)DAT_10008008[2] < 0x34)) ||
            ((DAT_10008008[0xc] == 0 ||
             (iVar4 = (*(code *)(ulong)(uint)DAT_10008008[0xc])(200), iVar4 == 0))))))
        goto LAB_10000734;
      }
      if ((uStack_70 & 0x100000000) == 0) goto LAB_10000734;
LAB_100006ec:
      uVar9 = recovered_1000078c(DAT_10008008,DAT_10008010,(long)&uStack_70);
      if (((int)uVar9 == 0) || (uVar3 = (uint)uStack_70, (uint)uStack_70 == 0)) goto LAB_10000734;
      puVar7 = auStack_170 + uVar8;
      for (lVar6 = 0; (ulong)uVar10 * 8 != lVar6; lVar6 = lVar6 + 8) {
        *puVar7 = (char)(uVar3 >> (ulong)((uint)lVar6 & 0x1f));
        puVar7 = puVar7 + 1;
      }
    }
    DAT_10008000 = 0;
    puVar7 = auStack_170;
    for (uVar5 = (ulong)param_2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_1 = *puVar7;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar9 = 1;
LAB_1000073c:
    recovered_100005c0(auStack_170,0x100);
  }
  return uVar9;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008018
#undef auStack_170
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000078c
 */

undefined8 recovered_1000078c(int *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_3 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100007e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_3 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100007f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
