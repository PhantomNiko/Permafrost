#include "functions.h"
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_0004b02d
#define DAT_0004b02d (*(uint8_t *)(0x4b02dU))
#undef DAT_00082088
#define DAT_00082088 (*(int *)(0x82088U))
#undef DAT_0008208c
#define DAT_0008208c (*(uint8_t *)(0x8208cU))
#undef DAT_0008208d
#define DAT_0008208d (*(uint8_t *)(0x8208dU))
#undef str_0004aff2
#define str_0004aff2 (*(char (*)[1])(0x4aff2U))
#undef str_0004b009
#define str_0004b009 (*(char (*)[1])(0x4b009U))
#undef str_0004b020
#define str_0004b020 (*(char (*)[1])(0x4b020U))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
#define dStack00000010 (*(double *)(frame + 332))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30f0b
 */

void recovered_30f0b(uint line,char *near_token,char *format,...)

{
  unsigned char frame[348];

  __builtin_va_list args;
  int iVar1;
  char *pcVar2;

  __builtin_va_start(args, format);
  local_10 = (double *)args;
  recovered_21a8b(local_110,0x100,format,local_10);
  __builtin_va_end(args);
  if (DAT_00082088 == 0) {
    recovered_233b7(str_0004aff2,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_0004b020;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_0004b009;
      }
      recovered_233b7(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_233b7(&DAT_0004b02d,pcVar2,near_token);
      }
    }
    recovered_2219f();
  }
  else {
    recovered_21de7(&DAT_0008208d,0x100,&DAT_00046398,local_110);
    DAT_0008208c = 1;
  }
  return;
}
