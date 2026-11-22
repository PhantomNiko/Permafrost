/* Native signed remainder helper; zero divisors produce zero.
 * Pooka's Free Software License. */
#include "functions.h"
int recovered_40400190(int dividend,int divisor) {
 uint a=dividend<0?0u-(uint)dividend:(uint)dividend;
 uint b=divisor<0?0u-(uint)divisor:(uint)divisor;
 uint remainder=b?a%b:0;
 return dividend<0?(int)(0u-remainder):(int)remainder;
}
