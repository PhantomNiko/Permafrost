/* Native BIOS service binding. Pooka's Free Software License. */
#include "functions.h"
unsigned recovered_20005f8(unsigned microseconds) { return pf_bios_wait_microseconds(microseconds); }
