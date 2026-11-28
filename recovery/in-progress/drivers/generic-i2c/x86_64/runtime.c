/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc63U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000388
 */

void * recovered_10000388(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000395
 */

uint recovered_10000395(void *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
