/* i386 architectural operations; Pooka's Free Software License. */
#pragma once
static inline void GlobalDescriptorTableRegister(uint64_t descriptor){__asm__ volatile("lgdt %0"::"m"(descriptor):"memory");}

static inline uint32_t pf_pci_in32(uint16_t port){uint32_t value;__asm__ volatile("inl %1,%0":"=a"(value):"Nd"(port));return value;}
static inline void pf_pci_out32(uint16_t port,uint32_t value){__asm__ volatile("outl %0,%1"::"a"(value),"Nd"(port));}

static inline uint32_t pf_read_cr0(void){uint32_t value;__asm__ volatile("mov %%cr0,%0":"=r"(value));return value;}
static inline uint32_t pf_read_cr4(void){uint32_t value;__asm__ volatile("mov %%cr4,%0":"=r"(value));return value;}
static inline void pf_flush_mmio_mapping(void){uint32_t value;__asm__ volatile("mov %%cr3,%0; mov %0,%%cr3; wbinvd":"=r"(value)::"memory");}

static inline uint16_t pf_pci_in16(uint16_t port){uint16_t value;__asm__ volatile("inw %1,%0":"=a"(value):"Nd"(port));return value;}
static inline void pf_pci_out16(uint16_t port,uint16_t value){__asm__ volatile("outw %0,%1"::"a"(value),"Nd"(port));}
