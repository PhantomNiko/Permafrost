#include "functions.h"
#undef str_0002dfe4
#define str_0002dfe4 (*(char (*)[1])(0x2dfe4U))
#define local_d8 (*(char (*)[160])(frame + 16))
#define local_38 (*(undefined2 (*)[2])(frame + 176))
#define local_34 (*(undefined4 *)(frame + 180))
#define local_30 (*(undefined4 *)(frame + 184))
#define local_2c (*(undefined4 *)(frame + 188))
#define local_28 (*(undefined4 *)(frame + 192))
#define local_24 (*(undefined4 *)(frame + 196))
#define local_20 (*(undefined4 *)(frame + 200))
#define local_1c (*(undefined4 *)(frame + 204))
#define local_18 (*(undefined4 * *)(frame + 208))
#define local_14 (*(uint *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2552e
 */

uint recovered_2552e(char *path)

{
  unsigned char frame[264];

  uint uVar1;
  undefined4 uVar2;
  
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_1c = 0;
  local_38[0] = 1;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = recovered_2c208((int)path,local_38,local_d8);
  if ((char)uVar1 != '\0') {
    uVar2 = recovered_2c38e((int)local_38,&local_18,(int *)&local_14,&local_1c,local_d8);
    if ((char)uVar2 != '\0') {
      uVar1 = recovered_2573b((int)local_18,local_14);
      recovered_256e9(local_18,local_14);
      recovered_2c544(local_38);
      return uVar1;
    }
    recovered_2c544(local_38);
  }
  recovered_21c41(str_0002dfe4,local_d8);
  return 0;
}

