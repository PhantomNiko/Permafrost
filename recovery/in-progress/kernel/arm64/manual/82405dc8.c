/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af32 (*(uint8_t volatile *)(0x82542043U))
#define DAT_4047af50 (*(uint32_t volatile *)(0x82542068U))
#define DAT_4047af54 (*(uint32_t volatile *)(0x8254206cU))
#define DAT_4047af58 (*(uint32_t volatile *)(0x82542070U))
void recovered_82405dc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_4047af50 = param_1;
  DAT_4047af54 = param_2;
  DAT_4047af58 = param_3;
  DAT_4047af32 = param_4;
  return;
}
