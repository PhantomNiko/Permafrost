#include "functions.h"
#define local_1c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bd6f
 */

uint recovered_2bd6f(uint drive,uint base,int data_sector,int sectors_per_cluster,uint cluster_size,
               int fat,uint cluster_count,uint first,uint size,void **out,int *chain_length)

{
  unsigned char frame[76];

  undefined4 in_EAX = 0;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  bVar5 = out == (void **)0x0;
  if (chain_length != (int *)0x0 && !bVar5) {
    *out = (void *)0x0;
    *chain_length = 0;
    if (size == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      CONCAT11(chain_length == (int *)0x0 || bVar5,bVar5)) >> 8),
                      first == 0);
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
    pvVar1 = recovered_211fa(size);
    iVar2 = 0;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    local_1c = first;
    uVar3 = 0;
    do {
      do {
        uVar4 = size - uVar3;
        if (size < uVar3 || uVar4 == 0) {
          *out = pvVar1;
          *chain_length = iVar2;
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        if (cluster_count <= local_1c || local_1c < 2) goto LAB_0002be70;
        if (cluster_size <= uVar4) {
          uVar4 = cluster_size;
        }
        bVar5 = recovered_2b3d8(drive & 0xff,
                                (local_1c - 2) * sectors_per_cluster + base + data_sector,
                                (int)pvVar1 + uVar3,uVar4);
        if (!bVar5) goto LAB_0002be70;
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 + uVar4;
      } while (size <= uVar3);
      local_1c = *(uint *)(fat + local_1c * 4);
    } while (1 < local_1c + 1);
LAB_0002be70:
    recovered_21203((int)pvVar1);
  }
  return 0;
}
