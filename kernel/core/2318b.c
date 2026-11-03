#include "functions.h"
#define in_stack_00000004 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2318b
 */

uint recovered_2318b(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_23162(in_stack_00000004);
  return (uint)pvVar1;
}
