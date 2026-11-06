/* i386 architectural operations; Pooka's Free Software License. */
#pragma once
static inline void GlobalDescriptorTableRegister(uint64_t descriptor){__asm__ volatile("lgdt %0"::"m"(descriptor):"memory");}
