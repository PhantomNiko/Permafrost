/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d342e (*(char (*)[1])(0x20d342eU))
#define local_18 (*(char (*)[16])(frame + 24))


void recovered_20b5590(uint in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  pf_varargs_20044f0__4_(local_18,0x10,str_020d342e,in_ECX);
  recovered_20b5100(local_18);
  return;
}
#undef str_020d342e
#undef local_18
