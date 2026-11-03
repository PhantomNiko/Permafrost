#include "functions.h"
#undef DAT_00046380
#define DAT_00046380 (*(uint8_t *)(0x46380U))
#undef DAT_0004b010
#define DAT_0004b010 (*(uint8_t *)(0x4b010U))
#undef DAT_00082088
#define DAT_00082088 (*(int *)(0x82088U))
#undef DAT_0008208c
#define DAT_0008208c (*(uint8_t *)(0x8208cU))
#undef DAT_0008208d
#define DAT_0008208d (*(uint8_t *)(0x8208dU))
#undef str_0004afd5
#define str_0004afd5 (*(char (*)[1])(0x4afd5U))
#undef str_0004afec
#define str_0004afec (*(char (*)[1])(0x4afecU))
#undef str_0004b003
#define str_0004b003 (*(char (*)[1])(0x4b003U))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
#define dStack00000010 (*(double *)(frame + 332))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30ed3
 */

void recovered_30ed3(uint line,char *near_token,char *format,...)

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
    recovered_233a3(str_0004afd5,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_0004b003;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_0004afec;
      }
      recovered_233a3(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_233a3(&DAT_0004b010,pcVar2,near_token);
      }
    }
    recovered_2219f();
  }
  else {
    recovered_21de7(&DAT_0008208d,0x100,&DAT_00046380,local_110);
    DAT_0008208c = 1;
  }
  return;
}
