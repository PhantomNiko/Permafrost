/* Native PFS flush callback returns the storage status after releasing its lock.
 * Pooka's Free Software License. */
#include "functions.h"
uint32_t recovered_404d9568(byte *context){
 if(!context)return 0;
 volatile unsigned *lock=(volatile unsigned *)(uintptr_t)0x40682b70U;
 while(__atomic_exchange_n(lock,1,__ATOMIC_ACQUIRE)){while(__atomic_load_n(lock,__ATOMIC_RELAXED)){} }
 uint32_t status=recovered_404cde08((undefined4 *)(uintptr_t)*context);
 __atomic_store_n(lock,0,__ATOMIC_RELEASE);return status;
}
