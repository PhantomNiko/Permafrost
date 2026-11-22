#include "functions.h"
#undef DAT_404e467b
#define DAT_404e467b (*(uint8_t *)(0x404e467bU))
#undef DAT_404f24be
#define DAT_404f24be (*(uint8_t *)(0x404f24beU))
#undef DAT_4063ec00
#define DAT_4063ec00 (*(uint32_t volatile *)(0x4063ec00U))
#undef DAT_4063ec04
#define DAT_4063ec04 (*(uint8_t volatile *)(0x4063ec04U))
#undef DAT_4063ec05
#define DAT_4063ec05 (*(uint8_t volatile *)(0x4063ec05U))
#undef str_404f4e5f
#define str_404f4e5f (*(char (*)[1])(0x404f4e5fU))
#undef str_404f4e75
#define str_404f4e75 (*(char (*)[1])(0x404f4e75U))
#undef str_404f4e8c
#define str_404f4e8c (*(char (*)[1])(0x404f4e8cU))
#define acStack_118 (*(char (*)[256])(frame + 24))
#define local_4 (*(undefined4 *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40494708
 */

void recovered_40494708(void *context,char *token,char *format,...)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint extraout_r0 = 0;
  uint uVar2;
  uint extraout_r0_00 = 0;
  uint extraout_r0_01 = 0;
  byte *pbVar3;
  undefined4 in_r3;

  __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_40403dc0(acStack_118,0x100,format,pf_arguments);
  __builtin_va_end(pf_arguments);
  iVar1 = DAT_4063ec00;
  if (iVar1 == 0) {
    recovered_4043bb94(str_404f4e5f,acStack_118);
    if (context != (void *)0x0) {
      uVar2 = extraout_r0;
      if (token != (char *)0x0) {
        uVar2 = (uint)(byte)*token;
      }
      if (token != (char *)0x0 && uVar2 != 0) {
        recovered_4043bb94(str_404f4e75,*(int *)context + 1,token);
        uVar2 = extraout_r0_01;
      }
      else {
        recovered_4043bb94(str_404f4e8c,*(int *)context + 1);
        uVar2 = extraout_r0_00;
      }
      pbVar3 = *(byte **)((int)context + 4);
      if (pbVar3 != (byte *)0x0) {
        uVar2 = (uint)*pbVar3;
      }
      if (pbVar3 != (byte *)0x0 && uVar2 != 0) {
        recovered_4043bb94(&DAT_404f24be);
      }
    }
    recovered_40435874();
  }
  else {
    recovered_40404a88(&DAT_4063ec05,0x100,&DAT_404e467b,acStack_118);
    DAT_4063ec04 = 1;
  }
  return;
}
