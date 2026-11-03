#include "functions.h"
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef DAT_0004306d
#define DAT_0004306d (*(uint8_t *)(0x4306dU))
#undef DAT_00088e84
#define DAT_00088e84 (*(int *)(0x88e84U))
#undef DAT_00088e88
#define DAT_00088e88 (*(uint8_t *)(0x88e88U))
#undef DAT_00088e89
#define DAT_00088e89 (*(uint8_t *)(0x88e89U))
#undef str_00043032
#define str_00043032 (*(char (*)[1])(0x43032U))
#undef str_00043049
#define str_00043049 (*(char (*)[1])(0x43049U))
#undef str_00043060
#define str_00043060 (*(char (*)[1])(0x43060U))
#define dStack00000010 (*(double *)(frame + 332))
#define pcVar2 (*(char * *)(frame + 16))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d241
 */

void recovered_2d241(uint line,char *near_token,char *format,...)

{
  unsigned char frame[348];

  __builtin_va_list args;
  int iVar1;
  
  __builtin_va_start(args, format);
  local_10 = (double *)args;
  recovered_21685(local_110,0x100,format,local_10);
  __builtin_va_end(args);
  if (DAT_00088e84 == 0) {
    recovered_236f9(str_00043032,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_00043060;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_00043049;
      }
      recovered_236f9(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_236f9(&DAT_0004306d,pcVar2,near_token);
      }
    }
    recovered_21d99();
  }
  else {
    recovered_219e1(&DAT_00088e89,0x100,&DAT_0003f336,local_110);
    DAT_00088e88 = 1;
  }
  return;
}

