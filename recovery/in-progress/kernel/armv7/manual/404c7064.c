/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_404c7064(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;

  if (param_1 == 0) {
    return;
  }
  recovered_40401c1c((void *)param_1,0,0xd);
  if (param_2 != 0) {
    size = recovered_4040251c((char *)param_2);
    if (0xb < size) {
      size = 0xc;
    }
    recovered_4040148c((void *)param_1,(void *)param_2,size);
    *(undefined1 *)(param_1 + size) = 0;
  }
  return;
}
