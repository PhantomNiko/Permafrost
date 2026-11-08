/* ARM firmware service context. Pooka's Free Software License. */
#if defined(__aarch64__)
typedef struct { uint64_t daif,vbar,elr,spsr,physical_control,physical_deadline,virtual_control,virtual_deadline; } FirmwareServiceContext;
static FirmwareServiceContext firmware_service;
static unsigned firmware_service_ready;
static unsigned capture_service_context(FirmwareServiceContext *state){
 uint64_t level;__asm__ volatile("mrs %0,CurrentEL":"=r"(level));
 if((level&12)!=4)return 0;
 __asm__ volatile("mrs %0,daif":"=r"(state->daif));
 __asm__ volatile("msr daifset,#15\nisb":::"memory");
 __asm__ volatile("mrs %0,vbar_el1":"=r"(state->vbar));
 __asm__ volatile("mrs %0,elr_el1":"=r"(state->elr));
 __asm__ volatile("mrs %0,spsr_el1":"=r"(state->spsr));
 __asm__ volatile("mrs %0,cntp_ctl_el0":"=r"(state->physical_control));
 __asm__ volatile("mrs %0,cntp_cval_el0":"=r"(state->physical_deadline));
 __asm__ volatile("mrs %0,cntv_ctl_el0":"=r"(state->virtual_control));
 __asm__ volatile("mrs %0,cntv_cval_el0":"=r"(state->virtual_deadline));return 1;
}
static void restore_service_context(const FirmwareServiceContext *state){
 __asm__ volatile("msr daifset,#15\nmsr cntp_ctl_el0,xzr\nmsr cntv_ctl_el0,xzr\nisb":::"memory");
 __asm__ volatile("msr vbar_el1,%0"::"r"(state->vbar):"memory");
 __asm__ volatile("msr elr_el1,%0"::"r"(state->elr):"memory");
 __asm__ volatile("msr spsr_el1,%0"::"r"(state->spsr):"memory");
 __asm__ volatile("msr cntp_cval_el0,%0"::"r"(state->physical_deadline):"memory");
 __asm__ volatile("msr cntv_cval_el0,%0"::"r"(state->virtual_deadline):"memory");
 __asm__ volatile("msr cntp_ctl_el0,%0"::"r"(state->physical_control):"memory");
 __asm__ volatile("msr cntv_ctl_el0,%0\nisb"::"r"(state->virtual_control):"memory");
 __asm__ volatile("msr daif,%0\nisb"::"r"(state->daif):"memory");
}
#elif defined(__arm__)
typedef struct {uint32_t cpsr,vbar,physical_control,virtual_control;uint64_t physical_deadline,virtual_deadline;} FirmwareServiceContext;
static FirmwareServiceContext firmware_service;
static unsigned firmware_service_ready;
static unsigned capture_service_context(FirmwareServiceContext *state){
 uint32_t low,high;
 __asm__ volatile("mrs %0,cpsr":"=r"(state->cpsr));
 __asm__ volatile("cpsid if\nisb":::"memory");
 __asm__ volatile("mrc p15,0,%0,c12,c0,0":"=r"(state->vbar));
 __asm__ volatile("mrc p15,0,%0,c14,c2,1":"=r"(state->physical_control));
 __asm__ volatile("mrc p15,0,%0,c14,c3,1":"=r"(state->virtual_control));
 __asm__ volatile("mrrc p15,2,%0,%1,c14":"=r"(low),"=r"(high));
 state->physical_deadline=low|(uint64_t)high<<32;
 __asm__ volatile("mrrc p15,3,%0,%1,c14":"=r"(low),"=r"(high));
 state->virtual_deadline=low|(uint64_t)high<<32;return 1;
}
static void restore_service_context(const FirmwareServiceContext *state){
 uint32_t zero=0,current;
 __asm__ volatile("cpsid if":::"memory");
 __asm__ volatile("mcr p15,0,%0,c14,c2,1\nmcr p15,0,%0,c14,c3,1\nisb"::"r"(zero):"memory");
 __asm__ volatile("mcr p15,0,%0,c12,c0,0"::"r"(state->vbar):"memory");
 __asm__ volatile("mcrr p15,2,%0,%1,c14"::"r"((uint32_t)state->physical_deadline),"r"((uint32_t)(state->physical_deadline>>32)):"memory");
 __asm__ volatile("mcrr p15,3,%0,%1,c14"::"r"((uint32_t)state->virtual_deadline),"r"((uint32_t)(state->virtual_deadline>>32)):"memory");
 __asm__ volatile("mcr p15,0,%0,c14,c2,1"::"r"(state->physical_control):"memory");
 __asm__ volatile("mcr p15,0,%0,c14,c3,1\nisb"::"r"(state->virtual_control):"memory");
 __asm__ volatile("mrs %0,cpsr":"=r"(current));
 current=(current&~0xc0U)|(state->cpsr&0xc0U);
 __asm__ volatile("msr cpsr_c,%0\nisb"::"r"(current):"memory");
}
#endif
