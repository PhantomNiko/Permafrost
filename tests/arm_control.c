/* ARM hardware-operation fixture; Pooka's Free Software License. */
#include <stdint.h>
#include "coprocessors.h"
#include "cpu.h"
uint32_t read_mair(void){return pf_arm_mrc(15,0,10,2,0);}
uint64_t read_timer(void){return pf_arm_mrrc(15,0,14);}
void write_timer(uint64_t value){pf_arm_mcrr(15,2,14,value);}
void write_timer_control(uint32_t value){pf_arm_mcr(15,0,14,2,1,value);}
uint32_t smc_probe(uint32_t function,uint32_t a,uint32_t b,uint32_t c){return pf_arm_smc(0,function,a,b,c);}
uint32_t hvc_probe(uint32_t function,uint32_t a,uint32_t b,uint32_t c){return pf_arm_hvc(0,function,a,b,c);}
uint64_t read_translation_base(void){return pf_arm_mrrc(15,0,2);}
uint64_t read_compare(void){return pf_arm_mrrc(15,2,14);}
void write_translation_base(uint64_t value){pf_arm_mcrr(15,0,2,value);}
