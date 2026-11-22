/* Pooka's Free Software License. SDK runtime integration example. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){char *p=(char *)malloc(64);if(!p)return 1;strcpy(p,"SOURCE SDK C");printf("%s %d argc=%d\n",p,6*7,argc);free(p);return 0;}
