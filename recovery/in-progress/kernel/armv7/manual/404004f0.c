/* Native LDREX/STREX heap lock and retry path; Pooka's Free Software License. */
#include "functions.h"
void recovered_404004f0(void){volatile unsigned *lock=(volatile unsigned *)(uintptr_t)0x40534008U;while(__atomic_exchange_n(lock,1,__ATOMIC_ACQUIRE)){while(__atomic_load_n(lock,__ATOMIC_RELAXED)){__asm__ volatile("yield":::"memory");}}*(volatile unsigned char *)(uintptr_t)0x40534000U=0;recovered_40400574();__atomic_store_n(lock,0,__ATOMIC_RELEASE);}
