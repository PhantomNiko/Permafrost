/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define local_214 (*(char *)(frame + 28))
#define local_213 (*(char (*)[511])(frame + 29))
#define local_14 (*(undefined1 * *)(frame + 540))

void recovered_202ecc0(char *out,uint capacity,char *format,...){char buffer[512];__builtin_va_list args;__builtin_va_start(args,format);recovered_2003af0(buffer,sizeof(buffer),format?format:"",(void *)args);__builtin_va_end(args);recovered_202dd30(out,capacity,buffer); }
#undef DAT_020c5084
#undef local_214
#undef local_213
#undef local_14
