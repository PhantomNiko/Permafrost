#include "functions.h"
#undef DAT_0004e5f0
#define DAT_0004e5f0 (*(uint *)(0x4e5f0U))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(byte *)(0x4ee94U))
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(byte *)(0x4ee9cU))
#undef DAT_0004eea0
#define DAT_0004eea0 (*(uint *)(0x4eea0U))
#undef DAT_0004eea4
#define DAT_0004eea4 (*(uint *)(0x4eea4U))
#undef PTR_DAT_0004e030
#define PTR_DAT_0004e030 (*(uint8_t * *)(0x4e030U))
#undef PTR_DAT_0004e034
#define PTR_DAT_0004e034 (*(uint8_t * *)(0x4e034U))
#undef PTR_DAT_0004e038
#define PTR_DAT_0004e038 (*(uint8_t * *)(0x4e038U))
#undef PTR_DAT_0004e03c
#define PTR_DAT_0004e03c (*(uint8_t * *)(0x4e03cU))
#undef PTR_DAT_0004e040
#define PTR_DAT_0004e040 (*(uint8_t * *)(0x4e040U))
#undef PTR_DAT_0004e044
#define PTR_DAT_0004e044 (*(uint8_t * *)(0x4e044U))
#undef PTR_DAT_0004e048
#define PTR_DAT_0004e048 (*(uint8_t * *)(0x4e048U))
#undef PTR_DAT_0004e04c
#define PTR_DAT_0004e04c (*(uint8_t * *)(0x4e04cU))
#undef PTR_DAT_0004e050
#define PTR_DAT_0004e050 (*(uint8_t * *)(0x4e050U))
#undef PTR_DAT_0004e054
#define PTR_DAT_0004e054 (*(uint8_t * *)(0x4e054U))
#undef PTR_DAT_0004e058
#define PTR_DAT_0004e058 (*(uint8_t * *)(0x4e058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x416a9
 */

int recovered_416a9(int *param_1)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2c430(param_1);
  if (((((bVar1) &&
        (iVar2 = recovered_44fb6(param_1,0x4ab44,(uint)DAT_0004ee9c), (char)iVar2 != '\0')) &&
       (iVar2 = recovered_44fb6(param_1,0x4ab54,(uint)DAT_0004ee94), (char)iVar2 != '\0')) &&
      (((iVar2 = recovered_44ff0(param_1,0x4ab64,*(uint *)PTR_DAT_0004e040), (char)iVar2 != '\0' &&
        (iVar2 = recovered_44ff0(param_1,0x4ab78,*(uint *)PTR_DAT_0004e044), (char)iVar2 != '\0'))
       && ((iVar2 = recovered_44ff0(param_1,0x4ab89,*(uint *)PTR_DAT_0004e048), (char)iVar2 != '\0'
           && ((iVar2 = recovered_44ff0(param_1,0x4ab9a,*(uint *)PTR_DAT_0004e03c),
               (char)iVar2 != '\0' &&
               (iVar2 = recovered_44ff0(param_1,0x4abac,*(uint *)PTR_DAT_0004e038),
               (char)iVar2 != '\0')))))))) &&
     ((iVar2 = recovered_44ff0(param_1,0x4abbb,*(uint *)PTR_DAT_0004e054), (char)iVar2 != '\0' &&
      (((((iVar2 = recovered_44ff0(param_1,0x4abc3,*(uint *)PTR_DAT_0004e058), (char)iVar2 != '\0'
          && (iVar2 = recovered_44ff0(param_1,0x4abcc,*(uint *)PTR_DAT_0004e04c),
             (char)iVar2 != '\0')) &&
         (iVar2 = recovered_44ff0(param_1,0x4abd6,*(uint *)PTR_DAT_0004e050), (char)iVar2 != '\0'))
        && ((iVar2 = recovered_44ff0(param_1,0x4abe1,*(uint *)PTR_DAT_0004e030), (char)iVar2 != '\0'
            && (iVar2 = recovered_44ff0(param_1,0x4abea,*(uint *)PTR_DAT_0004e034),
               (char)iVar2 != '\0')))) &&
       ((iVar2 = recovered_44ff0(param_1,0x4abf4,DAT_0004eea0), (char)iVar2 != '\0' &&
        (iVar2 = recovered_44ff0(param_1,0x4ac01,DAT_0004eea4), (char)iVar2 != '\0')))))))) {
    iVar2 = recovered_44ff0(param_1,0x4ac0f,DAT_0004e5f0);
    return iVar2;
  }
  return 0;
}
