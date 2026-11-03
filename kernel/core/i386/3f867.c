#include "functions.h"
#undef DAT_0004c5f0
#define DAT_0004c5f0 (*(uint *)(0x4c5f0U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(byte *)(0x4ce94U))
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(byte *)(0x4ce9cU))
#undef DAT_0004cea0
#define DAT_0004cea0 (*(uint *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(uint *)(0x4cea4U))
#undef PTR_DAT_0004c030
#define PTR_DAT_0004c030 (*(uint8_t * *)(0x4c030U))
#undef PTR_DAT_0004c034
#define PTR_DAT_0004c034 (*(uint8_t * *)(0x4c034U))
#undef PTR_DAT_0004c038
#define PTR_DAT_0004c038 (*(uint8_t * *)(0x4c038U))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c040
#define PTR_DAT_0004c040 (*(uint8_t * *)(0x4c040U))
#undef PTR_DAT_0004c044
#define PTR_DAT_0004c044 (*(uint8_t * *)(0x4c044U))
#undef PTR_DAT_0004c048
#define PTR_DAT_0004c048 (*(uint8_t * *)(0x4c048U))
#undef PTR_DAT_0004c04c
#define PTR_DAT_0004c04c (*(uint8_t * *)(0x4c04cU))
#undef PTR_DAT_0004c050
#define PTR_DAT_0004c050 (*(uint8_t * *)(0x4c050U))
#undef PTR_DAT_0004c054
#define PTR_DAT_0004c054 (*(uint8_t * *)(0x4c054U))
#undef PTR_DAT_0004c058
#define PTR_DAT_0004c058 (*(uint8_t * *)(0x4c058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f867
 */

int recovered_3f867(int *param_1)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2c36c(param_1);
  if (((((bVar1) &&
        (iVar2 = recovered_43162(param_1,0x48804,(uint)DAT_0004ce9c), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_43162(param_1,0x48814,(uint)DAT_0004ce94), (char)iVar2 != '\0')) &&
      (((iVar2 = recovered_4319c(param_1,0x48824,*(uint *)PTR_DAT_0004c040), (char)iVar2 != '\0' &&
        (iVar2 = recovered_4319c(param_1,0x48838,*(uint *)PTR_DAT_0004c044), (char)iVar2 != '\0'))
       && ((iVar2 = recovered_4319c(param_1,0x48849,*(uint *)PTR_DAT_0004c048), (char)iVar2 != '\0'
           && ((iVar2 = recovered_4319c(param_1,0x4885a,*(uint *)PTR_DAT_0004c03c),
               (char)iVar2 != '\0' &&
               (iVar2 = recovered_4319c(param_1,0x4886c,*(uint *)PTR_DAT_0004c038),
               (char)iVar2 != '\0')))))))) &&
     ((iVar2 = recovered_4319c(param_1,0x4887b,*(uint *)PTR_DAT_0004c054), (char)iVar2 != '\0' &&
      (((((iVar2 = recovered_4319c(param_1,0x48883,*(uint *)PTR_DAT_0004c058), (char)iVar2 != '\0'
          && (iVar2 = recovered_4319c(param_1,0x4888c,*(uint *)PTR_DAT_0004c04c),
             (char)iVar2 != '\0')) &&
         (iVar2 = recovered_4319c(param_1,0x48896,*(uint *)PTR_DAT_0004c050), (char)iVar2 != '\0'))
        && ((iVar2 = recovered_4319c(param_1,0x488a1,*(uint *)PTR_DAT_0004c030), (char)iVar2 != '\0'
            && (iVar2 = recovered_4319c(param_1,0x488aa,*(uint *)PTR_DAT_0004c034),
               (char)iVar2 != '\0')))) &&
       ((iVar2 = recovered_4319c(param_1,0x488b4,DAT_0004cea0), (char)iVar2 != '\0' &&
        (iVar2 = recovered_4319c(param_1,0x488c1,DAT_0004cea4), (char)iVar2 != '\0')))))))) {
    iVar2 = recovered_4319c(param_1,0x488cf,DAT_0004c5f0);
    return iVar2;
  }
  return 0;
}
