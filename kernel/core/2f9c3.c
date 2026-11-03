#include "functions.h"
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_000469c3
#define DAT_000469c3 (*(uint8_t *)(0x469c3U))
#undef DAT_0007cffc
#define DAT_0007cffc (*(int *)(0x7cffcU))
#undef DAT_0007d000
#define DAT_0007d000 (*(uint8_t *)(0x7d000U))
#undef DAT_0007d001
#define DAT_0007d001 (*(uint8_t *)(0x7d001U))
#undef str_00046988
#define str_00046988 (*(char (*)[1])(0x46988U))
#undef str_0004699f
#define str_0004699f (*(char (*)[1])(0x4699fU))
#undef str_000469b6
#define str_000469b6 (*(char (*)[1])(0x469b6U))
#define dStack00000010 (*(double *)(frame + 332))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f9c3
 */

void recovered_2f9c3(uint line,char *near_token,char *format,...)

{
  unsigned char frame[348];

  __builtin_va_list args;
  int iVar1;
  char *pcVar2;

  __builtin_va_start(args, format);
  local_10 = (double *)args;
  recovered_21685(local_110,0x100,format,local_10);
  __builtin_va_end(args);
  if (DAT_0007cffc == 0) {
    recovered_22fa2(str_00046988,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_000469b6;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_0004699f;
      }
      recovered_22fa2(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_22fa2(&DAT_000469c3,pcVar2,near_token);
      }
    }
    recovered_21d99();
  }
  else {
    recovered_219e1(&DAT_0007d001,0x100,&DAT_00042730,local_110);
    DAT_0007d000 = 1;
  }
  return;
}
