/* Native BIOS service binding. Pooka's Free Software License. */
#include "functions.h"
unsigned recovered_20003f5(void) { return pf_bios_write_sectors(); }
