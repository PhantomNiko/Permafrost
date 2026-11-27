/* Recovered Type1 virtual ABI; Pooka's Free Software License. */
#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20909c0
 */

double recovered_20909c0(void *backend)

{
  unsigned char pf_stack_frame[72] __attribute__((aligned(16))) = {0};

  return *(double *)((long)backend + 0x18);
}
