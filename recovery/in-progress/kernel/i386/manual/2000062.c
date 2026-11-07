/* Native BIOS service binding. Pooka's Free Software License. */
#include "functions.h"
unsigned recovered_2000062(void) { return pf_bios_poll_key(); }
