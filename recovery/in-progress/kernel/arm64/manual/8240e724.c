/* Native drive-selector tail calls recovered as C; Pooka's Free Software License. */
#include "functions.h"
bool recovered_8240e724(int drive){if((unsigned)(drive-0x40)<12)return true;if(drive!=0x80)return false;if(*(volatile unsigned char *)(uintptr_t)0x826f5126U&1)return true;return recovered_8240c7b8();}
