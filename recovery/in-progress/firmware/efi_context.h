/* Optional extension to the recovered WFE4 boot context.
 * Legacy fields remain unchanged. Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#define PF_EFI_CONTEXT_VERSION 5U
#define PF_EFI_CONTEXT_NATIVE_BYTES 0x2138U
#define PF_EFI_BRIDGE_EXTENSION 0x2138U
#define PF_EFI_BRIDGE_POINTER 0x2140U
#define PF_EFI_CONTEXT_BYTES 0x2150U
#define PF_EFI_INPUT_CAPABILITIES 0x2148U
#define PF_EFI_INPUT_USB_OWNED 1U
#define PF_EFI_PRESENT_SUPPORTED 2U
#define PF_EFI_PRESENT_ACTIVE 4U
#define PF_EFI_BRIDGE_MAGIC 0x34424650U
static inline uintptr_t pf_efi_bridge_address(const void *context) {
    const uint32_t *words=(const uint32_t *)context;
    if(!words)return 0;
    if(words[2]>=PF_EFI_BRIDGE_POINTER+8 && words[PF_EFI_BRIDGE_EXTENSION/4]==PF_EFI_BRIDGE_MAGIC && words[PF_EFI_BRIDGE_EXTENSION/4+1]==1)
        return (uintptr_t)*(const uint64_t *)((const uint8_t *)context+PF_EFI_BRIDGE_POINTER);
    return (uintptr_t)words[0x114/4];
}
