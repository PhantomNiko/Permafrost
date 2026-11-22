/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
void recovered_8243accc(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  recovered_82400b14((void *)param_2,0,0x100);
  lVar1 = DAT_40494ab8;
  pf_varargs_404019bc_1((char *)param_2,0xf0,&DAT_4044e262,lVar1 + param_1 * 0x118);
  lVar1 = DAT_40494ab8;
  lVar1 = lVar1 + param_1 * 0x118;
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(lVar1 + 0x10c);
  *(undefined8 *)(param_2 + 0xf4) = *(undefined8 *)(lVar1 + 0x100);
  return;
}
