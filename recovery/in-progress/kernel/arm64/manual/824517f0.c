/* Recovered literal semantics; Pooka's Free Software License. */
#include "functions.h"
#include "literals.h"
uchar recovered_824517f0(char *text,float *out){char buffer[256],*end=0;if(!text||!out||!pf_literal_prepare(text,buffer))return 0;float value=recovered_82401980(buffer,&end);if(!end||end==buffer||*end)return 0;*out=value;return 1;}
