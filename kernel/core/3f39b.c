#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_0005c7f7
#define DAT_0005c7f7 (*(uint8_t *)(0x5c7f7U))
#undef DAT_0009391c
#define DAT_0009391c (*(int *)(0x9391cU))
#undef DAT_00093920
#define DAT_00093920 (*(uint8_t *)(0x93920U))
#undef DAT_00093921
#define DAT_00093921 (*(uint8_t *)(0x93921U))
#undef str_0005c7bc
#define str_0005c7bc (*(char (*)[1])(0x5c7bcU))
#undef str_0005c7d3
#define str_0005c7d3 (*(char (*)[1])(0x5c7d3U))
#undef str_0005c7ea
#define str_0005c7ea (*(char (*)[1])(0x5c7eaU))
#define dStack00000010 (*(double *)(frame + 332))
#define local_110 (*(char (*)[256])(frame + 44))
#define local_10 (*(double * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f39b
 */

void recovered_3f39b(uint line,char *near_token,char *format,...)

{
  unsigned char frame[348] = {0};

  __builtin_va_list args;
  int iVar1;
  char *pcVar2;

  __builtin_va_start(args, format);
  local_10 = (double *)args;
  recovered_22006(local_110,0x100,format,local_10);
  if (DAT_0009391c == 0) {
    recovered_307b4(str_0005c7bc,local_110);
    if (line != 0) {
      if ((near_token == (char *)0x0) || (*near_token == '\0')) {
        iVar1 = *(int *)line;
        pcVar2 = str_0005c7ea;
        near_token = format;
      }
      else {
        iVar1 = *(int *)line;
        pcVar2 = str_0005c7d3;
      }
      recovered_307b4(pcVar2,iVar1 + 1,near_token);
      pcVar2 = *(char **)(line + 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        recovered_307b4(&DAT_0005c7f7,pcVar2,near_token);
      }
    }
    recovered_2f46d();
  }
  else {
    recovered_22362(&DAT_00093921,0x100,&DAT_00057391,local_110);
    DAT_00093920 = 1;
  }
  return;
}
