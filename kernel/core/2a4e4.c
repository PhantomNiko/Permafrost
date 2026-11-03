#include "functions.h"
#undef str_0003f33e
#define str_0003f33e (*(char (*)[1])(0x3f33eU))
#define local_ec (*(char (*)[160])(frame + 16))
#define local_4c (*(undefined4 *)(frame + 176))
#define local_48 (*(undefined4 *)(frame + 180))
#define local_44 (*(undefined4 *)(frame + 184))
#define local_40 (*(undefined4 *)(frame + 188))
#define local_3c (*(undefined4 *)(frame + 192))
#define local_38 (*(undefined4 *)(frame + 196))
#define local_34 (*(undefined4 *)(frame + 200))
#define local_30 (*(undefined4 *)(frame + 204))
#define local_2c (*(undefined4 *)(frame + 208))
#define local_28 (*(undefined4 *)(frame + 212))
#define local_24 (*(undefined4 *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined4 * *)(frame + 228))
#define local_14 (*(uint *********** *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a4e4
 */

uint recovered_2a4e4(char *path)

{
  unsigned char frame[284];

  undefined4 uVar1;
  uint uVar2;

  local_18 = (undefined4 *)0x0;
  local_14 = (uint ***********)0x0;
  local_1c = 0;
  PF_PART2(local_4c, 0) = 1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = recovered_3ed26(path,&local_4c,local_ec);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_3be79((int)&local_4c,&local_18,(uint *)&local_14,&local_1c,local_ec,0xa0);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_2a75e((int)local_18,local_14);
      recovered_28bb5(local_18,(int)local_14);
      recovered_3be0f((undefined2 *)&local_4c);
      return uVar2;
    }
    recovered_3be0f((undefined2 *)&local_4c);
  }
  recovered_236f9(str_0003f33e,local_ec);
  return 0;
}
