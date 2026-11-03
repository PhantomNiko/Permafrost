#include "functions.h"
#define local_1c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38756
 */

uint recovered_38756(uint drive,uint base,int data_sector,int sectors_per_cluster,uint cluster_size,
               int fat,uint cluster_count,uint first,uint size,void **out,int *chain_length)

{
  unsigned char frame[76] = {0};

  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (chain_length != (int *)0x0 && out != (void **)0x0) {
    *out = (void *)0x0;
    *chain_length = 0;
    if (size == 0) {
      return CONCAT31((int3)(first >> 8),first == 0);
    }
    if (cluster_size == 0) {
      return 0;
    }
    if (sectors_per_cluster == 0) {
      return 0;
    }
    if (fat == 0) {
      return 0;
    }
    if (cluster_count < 2) {
      return 0;
    }
    lVar1 = (ulonglong)(cluster_count - 2) * (ulonglong)cluster_size;
    if ((uint)((uint)lVar1 < size) <= (uint)((ulonglong)lVar1 >> 0x20)) {
      pvVar3 = recovered_211fa(size);
      iVar4 = 0;
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      local_1c = first;
      uVar5 = 0;
      do {
        do {
          uVar6 = size - uVar5;
          if (size < uVar5 || uVar6 == 0) {
            *out = pvVar3;
            *chain_length = iVar4;
            return CONCAT31((int3)((uint)iVar4 >> 8),1);
          }
          if (cluster_count <= local_1c || local_1c < 2) goto LAB_00038869;
          if (cluster_size <= uVar6) {
            uVar6 = cluster_size;
          }
          bVar2 = recovered_3864c((byte)drive,
                                  (local_1c - 2) * sectors_per_cluster + base + data_sector,
                                  (int)pvVar3 + uVar5,uVar6);
          if (!bVar2) goto LAB_00038869;
          iVar4 = iVar4 + 1;
          uVar5 = uVar5 + uVar6;
        } while (size <= uVar5);
        local_1c = *(uint *)(fat + local_1c * 4);
      } while (1 < local_1c + 1);
LAB_00038869:
      recovered_21203((int)pvVar3);
    }
  }
  return 0;
}
