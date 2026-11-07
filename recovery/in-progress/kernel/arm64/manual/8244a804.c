/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494890 (*(uint64_t volatile *)(0x8266ee30U))
#define DAT_40494898 (*(uint64_t volatile *)(0x8266ee38U))
#define DAT_404948a0 (*(uint64_t volatile *)(0x8266ee40U))
void recovered_8244a804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)DAT_40494890;
  lVar2 = DAT_40494898;
  recovered_8244a8c0(plVar1,lVar2);
  DAT_40494890 = param_1;
  DAT_40494898 = param_2;
  DAT_404948a0 = param_3;
  return;
}
