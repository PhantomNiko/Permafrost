/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define in_stack_00000020 (*(uint * *)(frame + 64))
#define in_stack_00000015 (*(undefined3 *)(frame + 53))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))


uint recovered_2051b70(int *nodes,uint *count,uint *capacity,uint parent,char *name,char *path,
                      uint index,uint directory,uint flags,uint *output)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if ((path != (char *)0x0 && name != (char *)0x0) &&
      (capacity != (uint *)0x0 && (count != (uint *)0x0 && nodes != (int *)0x0))) {
    puVar5 = (uint *)*nodes;
    uVar4 = *count;
    if (uVar4 != 0 && puVar5 != (uint *)0x0) {
      uVar6 = 0;
      do {
        if ((*puVar5 == parent) &&
           (iVar2 = recovered_20022a0((char *)(puVar5 + 2),name), iVar2 == 0)) {
          if (-1 < (int)uVar6) {
            if ((char)puVar5[0x82] != (char)directory) {
              return 0;
            }
            if (index != 0xffffffff) {
              puVar5[1] = index;
              puVar5[0x80] = flags;
              index = flags;
            }
            uVar4 = CONCAT31((int3)(index >> 8),1);
            if (output == (uint *)0x0) {
              return uVar4;
            }
            *output = uVar6;
            return uVar4;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x83;
      } while (uVar4 != uVar6);
      uVar4 = *count;
    }
    if (-1 < (int)uVar4) {
      uVar6 = *capacity;
      if (uVar4 < uVar6) {
        pvVar3 = (void *)*nodes;
      }
      else {
        uVar1 = 0x10;
        if (uVar6 != 0) {
          uVar1 = uVar6;
        }
        do {
          uVar6 = uVar1;
          uVar1 = uVar6 * 2;
        } while (uVar6 <= uVar4);
        if (0x7d1196 < uVar6) {
          return 0;
        }
        pvVar3 = recovered_2001860((void *)*nodes,uVar6 * 0x20c);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        recovered_2001e00((void *)(*capacity * 0x20c + (int)pvVar3),0,(uVar6 - *capacity) * 0x20c);
        *nodes = (int)pvVar3;
        *capacity = uVar6;
        uVar4 = *count;
      }
      recovered_2001e00((void *)(uVar4 * 0x20c + (int)pvVar3),0,0x20c);
      uVar4 = *count;
      *(uint *)((int)pvVar3 + uVar4 * 0x20c) = parent;
      *(uint *)((int)pvVar3 + uVar4 * 0x20c + 4) = index;
      iVar2 = *count * 0x20c;
      *(char *)((int)pvVar3 + iVar2 + 0x208) = (char)directory;
      *(uint *)((int)pvVar3 + iVar2 + 0x200) = flags;
      pf_varargs_20044f0__4_((char *)((int)pvVar3 + iVar2 + 8),0xf1,&DAT_020c5119,(uint)name);
      pf_varargs_20044f0__4_
                ((char *)((int)pvVar3 + *count * 0x20c + 0xf9),0xf1,&DAT_020c5119,(uint)path);
      uVar4 = *count;
      if (output != (uint *)0x0) {
        *output = uVar4;
      }
      uVar4 = uVar4 + 1;
      *count = uVar4;
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return 0;
}
#undef in_stack_00000020
#undef in_stack_00000015
#undef DAT_020c5119
