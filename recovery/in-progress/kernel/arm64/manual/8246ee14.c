/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494890 (*(uint64_t volatile *)(0x8266ee30U))
#define DAT_404948a0 (*(uint64_t volatile *)(0x8266ee40U))
ulong recovered_8246ee14(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_8244a838(&DAT_40494890,&DAT_404948a0,param_1);
  return uVar1;
}
