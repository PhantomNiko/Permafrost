/* Pooka's Free Software License. SDK runtime integration example. */
#include <cstdio>
#include <vector>
#include <string>
#include <numeric>
static int initialized;
__attribute__((constructor))static void initialize(){initialized=7;}
extern "C" int main(){std::vector<int> values={2,3,7};std::string text="SOURCE SDK CPP";printf("%s %d init=%d\n",text.c_str(),std::accumulate(values.begin(),values.end(),0),initialized);return 0;}
