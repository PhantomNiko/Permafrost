/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f70
 */

void * recovered_10000f70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

int recovered_10000f80(int *api)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
