#include "functions.h"
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(byte *)(0x4b4a0U))
#undef DAT_0004b4a2
#define DAT_0004b4a2 (*(byte *)(0x4b4a2U))
#undef DAT_0004b4a3
#define DAT_0004b4a3 (*(byte *)(0x4b4a3U))
#undef DAT_0004b4a4
#define DAT_0004b4a4 (*(byte *)(0x4b4a4U))
#undef DAT_0004b4a5
#define DAT_0004b4a5 (*(byte *)(0x4b4a5U))
#undef DAT_0004b4a6
#define DAT_0004b4a6 (*(byte *)(0x4b4a6U))
#undef DAT_0004b4a7
#define DAT_0004b4a7 (*(uint8_t *)(0x4b4a7U))
#undef str_00042537
#define str_00042537 (*(char (*)[1])(0x42537U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x404e0
 */

int recovered_404e0(uint *value)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2b367(value);
  if (((((bVar1) &&
        (iVar2 = recovered_405d0((int *)value,0x44e01,(uint)DAT_0004b4a0), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_4060a((int *)value,0x44e08,&DAT_0004b4a7), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_4060a((int *)value,0x44e0d,str_00042537), (char)iVar2 != '\0' &&
       (iVar2 = recovered_40678((int *)value,0x44e19,(uint)DAT_0004b4a2), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_40678((int *)value,0x44e23,(uint)DAT_0004b4a3), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_40678((int *)value,0x44e2e,(uint)DAT_0004b4a4), (char)iVar2 != '\0' &&
       (iVar2 = recovered_40678((int *)value,0x44e39,(uint)DAT_0004b4a5), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_40678((int *)value,0x44e45,(uint)DAT_0004b4a6);
    return iVar2;
  }
  return 0;
}
