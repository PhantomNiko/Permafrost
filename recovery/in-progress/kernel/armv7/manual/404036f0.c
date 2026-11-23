/* Native ceiling applies one positive-fraction correction to floor.
 * Pooka's Free Software License. */
#include "functions.h"
double recovered_404036f0(double value){
 double integral=recovered_404036c0(value);
 return integral<value?integral+1.0:integral;
}
