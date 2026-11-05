/* Optional extension to the recovered WFE3 boot context.
 * Legacy fields remain unchanged. Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#define PF_EFI_CONTEXT_BYTES 0xeb8U
#define PF_EFI_BRIDGE_MAGIC 0x34424650U
static inline uintptr_t pf_efi_bridge_address(const void *context) {
    const uint32_t *words=(const uint32_t *)context;
    if(!words)return 0;
    if(words[2]>=PF_EFI_CONTEXT_BYTES && words[0xea8/4]==PF_EFI_BRIDGE_MAGIC && words[0xeac/4]==1)
        return (uintptr_t)*(const uint64_t *)((const uint8_t *)context+0xeb0);
    return (uintptr_t)words[0x114/4];
}
