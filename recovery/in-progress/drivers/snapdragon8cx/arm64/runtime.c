/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003f0
 */

void * recovered_100003f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10000480
#define DAT_10000480 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10000538
#define str_10000538 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003fc
 */

uint recovered_100003fc(void *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if ((((api == (void *)0x0) || (*(int *)api != 0x54584b57)) || (*(uint *)((long)api + 8) < 0xec))
     || (((*(uint *)((long)api + 0xe8) == 0 ||
          (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xe8))(&DAT_10000480), iVar1 == 0)) ||
         (*(uint *)((long)api + 0xc) == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000046c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                    (0,str_10000538,((uintptr_t)pf_module_state+0xd6U));
  return uVar2;
}

#undef DAT_10000480
#undef str_10000538

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
