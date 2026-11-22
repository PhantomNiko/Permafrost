/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define format (*(char * *)(frame + 28))
#define in_stack_fffffff0 (*(char * *)(frame + 32))


void recovered_205e5b0(char *path,char *output)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (output == (char *)0x0) {
    return;
  }
  if (((path == (char *)0x0) || (*path == '\0')) ||
     (iVar1 = recovered_20022a0(path,&DAT_020c5359), iVar1 == 0)) {
    path = in_stack_fffffff0;
    format = str_020c6ac7;
  }
  else {
    format = str_020c6d20;
  }
  pf_varargs_20044f0__4_(output,0xf1,format,(uint)path);
  return;
}
#undef DAT_020c5359
#undef str_020c6ac7
#undef str_020c6d20
#undef format
#undef in_stack_fffffff0
