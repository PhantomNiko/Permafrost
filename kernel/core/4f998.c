#include "functions.h"
#undef DAT_0005d75c
#define DAT_0005d75c (*(uint *)(0x5d75cU))
#undef DAT_0005e720
#define DAT_0005e720 (*(byte *)(0x5e720U))
#undef DAT_0005e928
#define DAT_0005e928 (*(byte *)(0x5e928U))
#undef DAT_0005e92c
#define DAT_0005e92c (*(uint *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(uint *)(0x5e930U))
#undef PTR_DAT_0005d0a4
#define PTR_DAT_0005d0a4 (*(uint8_t * *)(0x5d0a4U))
#undef PTR_DAT_0005d0a8
#define PTR_DAT_0005d0a8 (*(uint8_t * *)(0x5d0a8U))
#undef PTR_DAT_0005d0ac
#define PTR_DAT_0005d0ac (*(uint8_t * *)(0x5d0acU))
#undef PTR_DAT_0005d0b0
#define PTR_DAT_0005d0b0 (*(uint8_t * *)(0x5d0b0U))
#undef PTR_DAT_0005d0b4
#define PTR_DAT_0005d0b4 (*(uint8_t * *)(0x5d0b4U))
#undef PTR_DAT_0005d0b8
#define PTR_DAT_0005d0b8 (*(uint8_t * *)(0x5d0b8U))
#undef PTR_DAT_0005d0bc
#define PTR_DAT_0005d0bc (*(uint8_t * *)(0x5d0bcU))
#undef PTR_DAT_0005d0c0
#define PTR_DAT_0005d0c0 (*(uint8_t * *)(0x5d0c0U))
#undef PTR_DAT_0005d0c4
#define PTR_DAT_0005d0c4 (*(uint8_t * *)(0x5d0c4U))
#undef PTR_DAT_0005d0c8
#define PTR_DAT_0005d0c8 (*(uint8_t * *)(0x5d0c8U))
#undef PTR_DAT_0005d0cc
#define PTR_DAT_0005d0cc (*(uint8_t * *)(0x5d0ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f998
 */

int recovered_4f998(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;

  bVar1 = recovered_3a72d(param_1);
  if (((((bVar1) &&
        (iVar2 = recovered_5328e(param_1,0x59baf,(uint)DAT_0005e928), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_5328e(param_1,0x59bbf,(uint)DAT_0005e720), (char)iVar2 != '\0')) &&
      (((iVar2 = recovered_532c8(param_1,0x59bcf,*(uint *)PTR_DAT_0005d0b4), (char)iVar2 != '\0' &&
        (iVar2 = recovered_532c8(param_1,0x59be3,*(uint *)PTR_DAT_0005d0b8), (char)iVar2 != '\0'))
       && ((iVar2 = recovered_532c8(param_1,0x59bf4,*(uint *)PTR_DAT_0005d0bc), (char)iVar2 != '\0'
           && ((iVar2 = recovered_532c8(param_1,0x59c05,*(uint *)PTR_DAT_0005d0b0),
               (char)iVar2 != '\0' &&
               (iVar2 = recovered_532c8(param_1,0x59c17,*(uint *)PTR_DAT_0005d0ac),
               (char)iVar2 != '\0')))))))) &&
     ((iVar2 = recovered_532c8(param_1,0x59c26,*(uint *)PTR_DAT_0005d0c8), (char)iVar2 != '\0' &&
      (((((iVar2 = recovered_532c8(param_1,0x59c2e,*(uint *)PTR_DAT_0005d0cc), (char)iVar2 != '\0'
          && (iVar2 = recovered_532c8(param_1,0x59c37,*(uint *)PTR_DAT_0005d0c0),
             (char)iVar2 != '\0')) &&
         (iVar2 = recovered_532c8(param_1,0x59c41,*(uint *)PTR_DAT_0005d0c4), (char)iVar2 != '\0'))
        && ((iVar2 = recovered_532c8(param_1,0x59c4c,*(uint *)PTR_DAT_0005d0a4), (char)iVar2 != '\0'
            && (iVar2 = recovered_532c8(param_1,0x59c55,*(uint *)PTR_DAT_0005d0a8),
               (char)iVar2 != '\0')))) &&
       ((iVar2 = recovered_532c8(param_1,0x59c5f,DAT_0005e92c), (char)iVar2 != '\0' &&
        (iVar2 = recovered_532c8(param_1,0x59c6c,DAT_0005e930), (char)iVar2 != '\0')))))))) {
    iVar2 = recovered_532c8(param_1,0x59c7a,DAT_0005d75c);
    return iVar2;
  }
  return 0;
}
