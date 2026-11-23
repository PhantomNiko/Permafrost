/* Native ASCII-to-PC-key mapping, including shifted punctuation.
 * Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_8240c628(unsigned char ch){
 static const unsigned char letters[26]={30,48,46,32,18,33,34,35,23,36,37,38,50,49,24,25,16,19,31,20,22,47,17,45,21,44};
 if(ch>='A' && ch<='Z')ch|=32;
 if(ch>='a' && ch<='z')return letters[ch-'a'];
 if(ch>='1' && ch<='9')return ch-'1'+2;
 switch(ch){
 case 8:return 14;case 9:return 15;case 10:case 13:return 28;
 case 27:return 1;case 32:return 57;case '0':return 11;
 case '\'':case '"':return 40;case '+':case '=':return 13;
 case ',':case '<':return 51;case '-':case '_':return 12;
 case '.':case '>':return 52;case '/':case '?':return 53;
 case ':':case ';':return 39;case '[':case '{':return 26;
 case ']':case '}':return 27;case '\\':case '|':return 43;
 case '`':case '~':return 41;default:return 0;
 }
}
