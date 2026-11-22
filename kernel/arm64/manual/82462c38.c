/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2e4 (*(uint32_t volatile *)(0x8248ab10U))
#define DAT_40494b70 (*(uint8_t volatile *)(0x8266f270U))
#define in_stack_ffffffffffffffe8 (*(undefined1 * *)(frame + 24))
#define str_40451fad (*(char (*)[1])(0x8247be50U))
#define str_40451fb6 (*(char (*)[1])(0x8247be59U))
void recovered_82462c38(long param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  char *format;

  if (param_1 != 0) {
    cVar2 = DAT_40494b70;
    uVar1 = DAT_4045a2e4;
    if (cVar2 == '\0') {
      format = str_40451fad;
    }
    else {
      in_stack_ffffffffffffffe8 = &DAT_40494b70;
      format = str_40451fb6;
    }
    pf_varargs_404019bc_2
              ((char *)param_1,0x110,format,(ulong)uVar1,(ulonglong)in_stack_ffffffffffffffe8);
  }
  return;
}
