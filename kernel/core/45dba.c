#include "functions.h"
#undef DAT_000524c0
#define DAT_000524c0 (*(byte *)(0x524c0U))
#undef DAT_000524c2
#define DAT_000524c2 (*(byte *)(0x524c2U))
#undef DAT_000524c3
#define DAT_000524c3 (*(byte *)(0x524c3U))
#undef DAT_000524c4
#define DAT_000524c4 (*(byte *)(0x524c4U))
#undef DAT_000524c5
#define DAT_000524c5 (*(byte *)(0x524c5U))
#undef DAT_000524c6
#define DAT_000524c6 (*(byte *)(0x524c6U))
#undef DAT_000524c7
#define DAT_000524c7 (*(uint8_t *)(0x524c7U))
#undef str_0004843b
#define str_0004843b (*(char (*)[1])(0x4843bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45dba
 */

int recovered_45dba(uint *value)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2c430(value);
  if (((((bVar1) &&
        (iVar2 = recovered_44fb6((int *)value,0x4b1bb,(uint)DAT_000524c0), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_2cb15((int *)value,0x48ed3,&DAT_000524c7), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_2cb15((int *)value,0x4b1c2,str_0004843b), (char)iVar2 != '\0' &&
       (iVar2 = recovered_44ff0((int *)value,0x4b1ce,(uint)DAT_000524c2), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_44ff0((int *)value,0x4b1d8,(uint)DAT_000524c3), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_44ff0((int *)value,0x4b1e3,(uint)DAT_000524c4), (char)iVar2 != '\0' &&
       (iVar2 = recovered_44ff0((int *)value,0x4b1ee,(uint)DAT_000524c5), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_44ff0((int *)value,0x4b1fa,(uint)DAT_000524c6);
    return iVar2;
  }
  return 0;
}
