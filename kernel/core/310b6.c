#include "functions.h"
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
#undef DAT_0004d762
#define DAT_0004d762 (*(uint8_t *)(0x4d762U))
#undef DAT_00084090
#define DAT_00084090 (*(int *)(0x84090U))
#undef DAT_00084094
#define DAT_00084094 (*(uint8_t *)(0x84094U))
#undef DAT_00084095
#define DAT_00084095 (*(uint8_t *)(0x84095U))
#undef str_0004d727
#define str_0004d727 (*(char (*)[1])(0x4d727U))
#undef str_0004d73e
#define str_0004d73e (*(char (*)[1])(0x4d73eU))
#undef str_0004d755
#define str_0004d755 (*(char (*)[1])(0x4d755U))
#define dStack00000010 (*(double *)(frame + 332))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x310b6
 */

void recovered_310b6(uint line,char *near_token,char *format,...)

{
  unsigned char frame[348];

  __builtin_va_list args;
  int iVar1;
  char *pcVar2;

  __builtin_va_start(args, format);
  local_10 = (double *)args;
  recovered_21a8b(local_110,0x100,format,local_10);
  __builtin_va_end(args);
  if (DAT_00084090 == 0) {
    recovered_23390(str_0004d727,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_0004d755;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_0004d73e;
      }
      recovered_23390(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_23390(&DAT_0004d762,pcVar2,near_token);
      }
    }
    recovered_2219f();
  }
  else {
    recovered_21de7(&DAT_00084095,0x100,&DAT_00048638,local_110);
    DAT_00084094 = 1;
  }
  return;
}
