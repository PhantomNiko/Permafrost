/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define PTR_recovered_4041437c_40459160 (*(void * *)(0x82485160U))
undefined8 * recovered_8241a0f4(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_4041437c_40459160;
  recovered_8241aff4((long)(param_1 + 0x308));
  recovered_8241af38(param_1 + 0x305);
  recovered_8241afb8((long)(param_1 + 5));
  return param_1;
}
