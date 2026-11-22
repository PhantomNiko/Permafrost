/* i386 architectural operations; Pooka's Free Software License. */
#pragma once
static inline void GlobalDescriptorTableRegister(uint64_t descriptor){__asm__ volatile("lgdt %0"::"m"(descriptor):"memory");}

static inline uint32_t pf_pci_in32(uint16_t port){uint32_t value;__asm__ volatile("inl %1,%0":"=a"(value):"Nd"(port));return value;}
static inline void pf_pci_out32(uint16_t port,uint32_t value){__asm__ volatile("outl %0,%1"::"a"(value),"Nd"(port));}
