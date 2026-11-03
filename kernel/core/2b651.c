#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b651
 */

undefined1 * recovered_2b651(undefined4 *param_1)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)param_1[2];
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = recovered_20ae5(1);
      if (puVar1 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar1 = 0;
    }
    else {
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return puVar1;
}

