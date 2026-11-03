#include "functions.h"
#undef DAT_000504c0
#define DAT_000504c0 (*(byte *)(0x504c0U))
#undef DAT_000504c2
#define DAT_000504c2 (*(byte *)(0x504c2U))
#undef DAT_000504c3
#define DAT_000504c3 (*(byte *)(0x504c3U))
#undef DAT_000504c4
#define DAT_000504c4 (*(byte *)(0x504c4U))
#undef DAT_000504c5
#define DAT_000504c5 (*(byte *)(0x504c5U))
#undef DAT_000504c6
#define DAT_000504c6 (*(byte *)(0x504c6U))
#undef DAT_000504c7
#define DAT_000504c7 (*(uint8_t *)(0x504c7U))
#undef str_00046187
#define str_00046187 (*(char (*)[1])(0x46187U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43f66
 */

int recovered_43f66(uint *value)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2c36c(value);
  if (((((bVar1) &&
        (iVar2 = recovered_43162((int *)value,0x48e61,(uint)DAT_000504c0), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_44056((int *)value,0x48e68,&DAT_000504c7), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_44056((int *)value,0x48e6d,str_00046187), (char)iVar2 != '\0' &&
       (iVar2 = recovered_4319c((int *)value,0x48e79,(uint)DAT_000504c2), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_4319c((int *)value,0x48e83,(uint)DAT_000504c3), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_4319c((int *)value,0x48e8e,(uint)DAT_000504c4), (char)iVar2 != '\0' &&
       (iVar2 = recovered_4319c((int *)value,0x48e99,(uint)DAT_000504c5), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_4319c((int *)value,0x48ea5,(uint)DAT_000504c6);
    return iVar2;
  }
  return 0;
}
