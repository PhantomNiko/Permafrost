/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d3641 (*(char (*)[1])(0x20d3641U))
#define local_20 (*(char (*)[24])(frame + 16))


void recovered_20b59f0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  pf_varargs_20044f0__4__4__4_(local_20,0x18,str_020d3641,0xc,3,0x30);
  recovered_20b5100(local_20);
  return;
}
#undef str_020d3641
#undef local_20
