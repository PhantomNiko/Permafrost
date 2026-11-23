/* Native PFS flush callback preserves status across lock release.
 * Pooka's Free Software License. */
#include "functions.h"
uint32_t recovered_82473d34(byte *context){
 if(!context)return 0;
 recovered_8244a488((int *)(uintptr_t)0x827381c8U);
 uint32_t status=recovered_8246dff8(*context);
 __atomic_store_n((unsigned *)(uintptr_t)0x827381c8U,0,__ATOMIC_RELEASE);return status;
}
