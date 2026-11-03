#include "functions.h"
#undef DAT_00061d4c
#define DAT_00061d4c (*(byte *)(0x61d4cU))
#undef DAT_00061d4e
#define DAT_00061d4e (*(byte *)(0x61d4eU))
#undef DAT_00061d4f
#define DAT_00061d4f (*(byte *)(0x61d4fU))
#undef DAT_00061d50
#define DAT_00061d50 (*(byte *)(0x61d50U))
#undef DAT_00061d51
#define DAT_00061d51 (*(byte *)(0x61d51U))
#undef DAT_00061d52
#define DAT_00061d52 (*(byte *)(0x61d52U))
#undef DAT_00061d53
#define DAT_00061d53 (*(uint8_t *)(0x61d53U))
#undef str_0005728b
#define str_0005728b (*(char (*)[1])(0x5728bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53ead
 */

int recovered_53ead(uint *value)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;

  bVar1 = recovered_3a72d(value);
  if (((((bVar1) &&
        (iVar2 = recovered_5328e((int *)value,0x5a226,(uint)DAT_00061d4c), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_3ae12((int *)value,0x57f44,&DAT_00061d53), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_3ae12((int *)value,0x5a22d,str_0005728b), (char)iVar2 != '\0' &&
       (iVar2 = recovered_532c8((int *)value,0x5a239,(uint)DAT_00061d4e), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_532c8((int *)value,0x5a243,(uint)DAT_00061d4f), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_532c8((int *)value,0x5a24e,(uint)DAT_00061d50), (char)iVar2 != '\0' &&
       (iVar2 = recovered_532c8((int *)value,0x5a259,(uint)DAT_00061d51), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_532c8((int *)value,0x5a265,(uint)DAT_00061d52);
    return iVar2;
  }
  return 0;
}
