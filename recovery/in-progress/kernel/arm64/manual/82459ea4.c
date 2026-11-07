/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2f4 (*(uint32_t volatile *)(0x8248ab1cU))
#define DAT_40494753 (*(uint8_t volatile *)(0x8266ec2cU))
#define DAT_40494755 (*(uint8_t volatile *)(0x8266ec31U))
#define DAT_4049479c (*(uint32_t volatile *)(0x8266ec8cU))
#define DAT_404947a0 (*(uint32_t volatile *)(0x8266ec90U))
undefined8 recovered_82459ea4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;

  uVar3 = recovered_8244e540(param_1);
  if ((((int)uVar3 != 0) &&
      (bVar2 = DAT_40494755, uVar3 = recovered_82462764(param_1,0x8247b8baU,(ulong)bVar2),
      (int)uVar3 != 0)) &&
     (bVar2 = DAT_40494753, uVar3 = recovered_82462764(param_1,0x8247b8caU,(ulong)bVar2),
     (int)uVar3 != 0)) {
    puVar4 = (uint *)recovered_82409aac();
    uVar3 = recovered_8246279c(param_1,0x8247b8daU,(ulong)*puVar4);
    if ((int)uVar3 != 0) {
      puVar5 = recovered_82409aac();
      uVar3 = recovered_8246279c(param_1,0x8247b8eeU,(ulong)*(uint *)((long)puVar5 + 4));
      if ((int)uVar3 != 0) {
        puVar5 = recovered_82409aac();
        uVar3 = recovered_8246279c(param_1,0x8247b906U,(ulong)*(uint *)(puVar5 + 1));
        if ((int)uVar3 != 0) {
          puVar5 = recovered_82409aac();
          uVar3 = recovered_8246279c(param_1,0x8247b917U,(ulong)*(uint *)((long)puVar5 + 0xc));
          if ((int)uVar3 != 0) {
            puVar5 = recovered_82409aac();
            uVar3 = recovered_8246279c(param_1,0x8247b928U,(ulong)*(uint *)(puVar5 + 2));
            if ((int)uVar3 != 0) {
              puVar5 = recovered_82409aac();
              uVar3 = recovered_8246279c(param_1,0x8247b93aU,(ulong)*(uint *)((long)puVar5 + 0x14));
              if ((int)uVar3 != 0) {
                puVar5 = recovered_82409aac();
                uVar3 = recovered_8246279c(param_1,0x8247b949U,(ulong)*(uint *)(puVar5 + 3));
                if ((int)uVar3 != 0) {
                  puVar5 = recovered_82409aac();
                  uVar3 = recovered_8246279c(param_1,0x8247b951U,
                                             (ulong)*(uint *)((long)puVar5 + 0x1c));
                  if ((int)uVar3 != 0) {
                    puVar5 = recovered_82409aac();
                    uVar3 = recovered_8246279c(param_1,0x8247b95aU,(ulong)*(uint *)(puVar5 + 4));
                    if ((int)uVar3 != 0) {
                      puVar5 = recovered_82409aac();
                      uVar3 = recovered_8246279c(param_1,0x8247b964U,
                                                 (ulong)*(uint *)((long)puVar5 + 0x24));
                      if ((int)uVar3 != 0) {
                        puVar5 = recovered_82409aac();
                        uVar3 = recovered_8246279c(param_1,0x8247b96fU,(ulong)*(uint *)(puVar5 + 5));
                        if ((int)uVar3 != 0) {
                          puVar5 = recovered_82409aac();
                          uVar3 = recovered_8246279c(param_1,0x8247b978U,
                                                     (ulong)*(uint *)((long)puVar5 + 0x2c));
                          if ((((int)uVar3 != 0) &&
                              (uVar1 = DAT_4049479c,
                              uVar3 = recovered_8246279c(param_1,0x8247b982U,(ulong)uVar1),
                              (int)uVar3 != 0)) &&
                             (uVar1 = DAT_404947a0,
                             uVar3 = recovered_8246279c(param_1,0x8247b98fU,(ulong)uVar1),
                             (int)uVar3 != 0)) {
                            uVar1 = DAT_4045a2f4;
                            uVar3 = recovered_8246279c(param_1,0x8247b99dU,(ulong)uVar1);
                            return uVar3;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
