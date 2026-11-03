#include "functions.h"
#undef DAT_00057334
#define DAT_00057334 (*(byte *)(0x57334U))
#undef DAT_00057336
#define DAT_00057336 (*(byte *)(0x57336U))
#undef DAT_00057337
#define DAT_00057337 (*(byte *)(0x57337U))
#undef DAT_00057338
#define DAT_00057338 (*(byte *)(0x57338U))
#undef DAT_00057339
#define DAT_00057339 (*(byte *)(0x57339U))
#undef DAT_0005733a
#define DAT_0005733a (*(byte *)(0x5733aU))
#undef DAT_0005733b
#define DAT_0005733b (*(uint8_t *)(0x5733bU))
#undef str_0003f187
#define str_0003f187 (*(char (*)[1])(0x3f187U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3cc53
 */

int recovered_3cc53(uint *value)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_28c07(value);
  if (((((bVar1) &&
        (iVar2 = recovered_3cd43((int *)value,0x41751,(uint)DAT_00057334), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_3cd7d((int *)value,0x41758,&DAT_0005733b), (char)iVar2 != '\0')) &&
      ((iVar2 = recovered_3cd7d((int *)value,0x4175d,str_0003f187), (char)iVar2 != '\0' &&
       (iVar2 = recovered_3cdeb((int *)value,0x41769,(uint)DAT_00057336), (char)iVar2 != '\0')))) &&
     ((iVar2 = recovered_3cdeb((int *)value,0x41773,(uint)DAT_00057337), (char)iVar2 != '\0' &&
      ((iVar2 = recovered_3cdeb((int *)value,0x4177e,(uint)DAT_00057338), (char)iVar2 != '\0' &&
       (iVar2 = recovered_3cdeb((int *)value,0x41789,(uint)DAT_00057339), (char)iVar2 != '\0'))))))
  {
    iVar2 = recovered_3cdeb((int *)value,0x41795,(uint)DAT_0005733a);
    return iVar2;
  }
  return 0;
}
