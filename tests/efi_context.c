/* Check the optional full-width EFI bridge without changing legacy fields.
 * Pooka's Free Software License. */
#include <assert.h>
#include "efi_context.h"
static uint32_t callback(uint32_t *request){return request[0]+37;}
int main(void){
 uint64_t storage[PF_EFI_CONTEXT_BYTES/8]={0};uint32_t *context=(uint32_t*)storage;
 context[2]=0xea8;context[0x114/4]=0x12345678;
 assert(pf_efi_bridge_address(context)==0x12345678);
 context[2]=PF_EFI_CONTEXT_BYTES;context[0xea8/4]=PF_EFI_BRIDGE_MAGIC;context[0xeac/4]=1;
#if UINTPTR_MAX > UINT32_MAX
 *(uint64_t*)((uint8_t*)context+0xeb0)=UINT64_C(0x123456789abc);
 assert(pf_efi_bridge_address(context)==UINT64_C(0x123456789abc));
#endif
 *(uint64_t*)((uint8_t*)context+0xeb0)=(uintptr_t)callback;
 uint32_t request[2]={5,0};
 assert(((uint32_t(*)(uint32_t*))pf_efi_bridge_address(context))(request)==42);
 context[0xea8/4]=0;assert(pf_efi_bridge_address(context)==0x12345678);
 return 0;
}
