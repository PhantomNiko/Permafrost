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
#undef str_0004619f
#define str_0004619f (*(char (*)[1])(0x4619fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43f81
 */

int recovered_43f81(uint *value)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2c3e2(value);
  if (((((bVar1) &&
        (iVar2 = recovered_4317d((int *)value,0x48e3f,(uint)DAT_000504c0), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_44071((int *)value,0x48e46,&DAT_000504c7), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_44071((int *)value,0x48e4b,str_0004619f), (char)iVar2 != '\0' &&
       (iVar2 = recovered_431b7((int *)value,0x48e57,(uint)DAT_000504c2), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_431b7((int *)value,0x48e61,(uint)DAT_000504c3), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_431b7((int *)value,0x48e6c,(uint)DAT_000504c4), (char)iVar2 != '\0' &&
       (iVar2 = recovered_431b7((int *)value,0x48e77,(uint)DAT_000504c5), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_431b7((int *)value,0x48e83,(uint)DAT_000504c6);
    return iVar2;
  }
  return 0;
}
