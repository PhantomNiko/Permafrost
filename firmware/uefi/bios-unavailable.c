/* EFI has no real-mode BIOS service. Pooka's Free Software License. */
#include "bios.h"
volatile struct pf_bios_regs pf_bios_request;
void pf_bios_execute(void) { pf_bios_request.flags|=1; }
