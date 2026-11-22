/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494769 (*(uint8_t volatile *)(0x8266ec2bU))
#define DAT_4049476a (*(uint8_t volatile *)(0x8266ec41U))
ulong recovered_8241ded4(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;

  uVar2 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = DAT_40494769, cVar1 != '\0')) {
    while (uVar2 = recovered_82409bd4(param_1), (int)uVar2 != 0) {
      cVar1 = DAT_4049476a;
      if (cVar1 != '\x01') {
        return uVar2;
      }
      DAT_4049476a = 0;
      if (*param_1 != '\n') {
        return uVar2;
      }
    }
  }
  return uVar2;
}
