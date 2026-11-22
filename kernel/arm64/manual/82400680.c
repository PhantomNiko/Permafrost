/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_18 (*(undefined8 *)(frame + 24))
undefined8 recovered_82400680(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_82400620(param_1,param_2,&uStack_18);
  return uStack_18;
}
