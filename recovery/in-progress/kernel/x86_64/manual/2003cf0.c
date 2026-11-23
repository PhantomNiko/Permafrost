/* Native signed 32-bit truncation followed by the negative-fraction correction.
 * Pooka's Free Software License. */
#include "functions.h"
double recovered_2003cf0(double value){
 int truncated=(int)value;
 double integral=(double)truncated;
 return value<integral?(double)(int)((unsigned)truncated-1U):integral;
}
