unsigned pf_bios_poll_key(void);
unsigned pf_bios_read_bundle(void);
unsigned pf_bios_query_capacity(void);
unsigned pf_bios_write_sectors(void);
unsigned pf_bios_set_mode13(void);
unsigned pf_bios_wait_microseconds(unsigned microseconds);
unsigned pf_bios_set_text_mode(void);
unsigned pf_bios_set_wxga_mode(void);
#define _recovered_2000000 (*(uint32_t *)(uintptr_t)0x2000000)
#define recovered_2000014 (*(uint8_t *)(uintptr_t)0x2000014)
#define pf_varargs_20044f0__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4__4__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__4__4__4__8__8__8__8__8_ recovered_20044f0
#define pf_varargs_20044f0__4__4__4__8__4__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0__8_ recovered_20044f0
#define pf_varargs_20044f0__8__8_ recovered_20044f0
#define pf_varargs_20044f0__8__8__4__4__8__4__4__4__4__8_ recovered_20044f0
#define pf_varargs_20044f0__8__8__8__4__4__4_ recovered_20044f0
#define pf_varargs_20044f0___ recovered_20044f0
#define pf_varargs_202ce90__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4__4__4__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__4__4__4__4__4__4__4__4_ recovered_202ce90
#define pf_varargs_202ce90__4__4__4__8_ recovered_202ce90
#define pf_varargs_202ce90__4__4__8_ recovered_202ce90
#define pf_varargs_202ce90__4__8_ recovered_202ce90
#define pf_varargs_202ce90__4__8__8_ recovered_202ce90
#define pf_varargs_202ce90___ recovered_202ce90
#define pf_varargs_207a2e0__4_ recovered_207a2e0
#define pf_varargs_207a2e0__4__4_ recovered_207a2e0
#define pf_varargs_207a2e0__4__4__4_ recovered_207a2e0
#define pf_varargs_207a2e0___ recovered_207a2e0
#define pf_varargs_20bfa70__4__4_ recovered_20bfa70
#define pf_varargs_20bfa70__4__4__4__4__4__4__4__4__4__4_ recovered_20bfa70
#define pf_varargs_20bfa70___ recovered_20bfa70

#include "value.h"

#include "ws_literals.h"
#define builtin_memcpy __builtin_memcpy

static inline void pf_port8_write(ushort port,uint value){out(port,value);}
#define out(port,value) pf_port8_write(port,value)
static inline uint64_t rdtsc(void){uint32_t low,high;__asm__ volatile("rdtsc":"=a"(low),"=d"(high));return((uint64_t)high<<32)|low;}
static inline uint64_t xinuse(uint32_t selector){uint32_t low,high;__asm__ volatile("xgetbv":"=a"(low),"=d"(high):"c"(selector));return((uint64_t)high<<32)|low;}

#include "workspace.h"
