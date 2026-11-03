#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef PTR_DAT_0005d000
#define PTR_DAT_0005d000 (*(uint8_t * *)(0x5d000U))
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2262b
 */

undefined4 * recovered_2262b(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_0005d000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar1 = recovered_214f9(param_1,0x57512);
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    iVar2 = recovered_214f9(param_1,0x5751f);
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    else {
      iVar2 = recovered_214f9(param_1,0x5752d);
      if (iVar2 != 0) {
        puVar3 = recovered_211fa(800);
        if (puVar3 != (undefined4 *)0x0) {
          recovered_213af((int)puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_2158e((char *)param_2,'r');
          bVar7 = true;
          bVar6 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_2158e((char *)param_2,'+');
            bVar6 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_2158e((char *)param_2,'a');
              bVar6 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar6;
          pcVar4 = recovered_2158e((char *)param_2,'w');
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_2158e((char *)param_2,'a'), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_2158e((char *)param_2,'+');
            bVar7 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar7;
          pcVar4 = recovered_2158e((char *)param_2,'a');
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_22362((char *)(puVar3 + 1),0xf1,&DAT_00057391,param_1);
          recovered_213af((int)&local_1c,0,0xc);
          iVar1 = recovered_228e6(param_1,&local_1c);
          if (iVar1 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_0005d000 = 2;
LAB_000228b2:
              recovered_21203((int)puVar3);
              return (undefined4 *)0x0;
            }
          }
          else {
            pcVar4 = recovered_2158e((char *)param_2,'w');
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar5 = recovered_22916((int)puVar3,local_18);
                if ((char)uVar5 == '\0') goto LAB_000228b2;
                recovered_21348(puVar3[0x3f],local_1c,local_18);
              }
              else {
                puVar3[0x3e] = local_1c;
              }
              puVar3[0x40] = local_18;
            }
          }
          if (*(char *)((int)puVar3 + 0x112) == '\x01') {
            puVar3[0x42] = puVar3[0x40];
            return puVar3;
          }
          return puVar3;
        }
        goto LAB_00022887;
      }
      uVar5 = 3;
    }
  }
  puVar3 = recovered_211fa(800);
  if (puVar3 != (undefined4 *)0x0) {
    recovered_213af((int)puVar3,0,800);
    *puVar3 = uVar5;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_22362((char *)(puVar3 + 1),0xf1,&DAT_00057391,param_1);
    return puVar3;
  }
LAB_00022887:
  *(undefined4 *)PTR_DAT_0005d000 = 0xc;
  return (undefined4 *)0x0;
}
