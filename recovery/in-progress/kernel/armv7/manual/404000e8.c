/* Native unsigned remainder helper, including its zero-divisor result.
 * Pooka's Free Software License. */
#include "functions.h"
uint recovered_404000e8(uint dividend,uint divisor) {
 return divisor?dividend%divisor:0;
}
