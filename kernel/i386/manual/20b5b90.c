/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d35b5 (*(char (*)[1])(0x20d35b5U))
#define local_30 (*(char (*)[40])(frame + 16))


void recovered_20b5b90(uint in_ECX,uint in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  pf_varargs_20044f0__4__4_(local_30,0x28,str_020d35b5,in_ECX,in_EDX);
  recovered_20b5100(local_30);
  return;
}
#undef str_020d35b5
#undef local_30
