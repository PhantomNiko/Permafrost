/* Native unsigned division helper, including its zero-divisor result.
 * Pooka's Free Software License. */
#include "functions.h"
uint recovered_40400098(uint dividend,uint divisor) {
 return divisor?dividend/divisor:0;
}
