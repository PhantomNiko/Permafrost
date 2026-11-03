/* Freestanding Lua host support. Pooka's Free Software License.
 * Lua itself is compiled from the separately licensed sibling source checkout. */
#include <permafrost.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <signal.h>
#include <setjmp.h>

int errno;
jmp_buf pf_lua_exit;
int pf_lua_status;
void *malloc(size_t n) { return ((void *(*)(size_t))0x20df4)(n); }
void free(void *p) { ((void (*)(void *))0x20dfd)(p); }
void *realloc(void *p,size_t n) { return ((void *(*)(void *,size_t))0x20e83)(p,n); }
void *calloc(size_t n,size_t size) { if(size && n>SIZE_MAX/size)return 0;size*=n;void *p=malloc(size);if(p)memset(p,0,size);return p; }
void exit(int status) { pf_lua_status=status;longjmp(pf_lua_exit,1); }
void abort(void) { pf_puts("Lua runtime aborted\n");exit(1); }
int abs(int n) { return n<0?-n:n; } long labs(long n) { return n<0?-n:n; } long long llabs(long long n) { return n<0?-n:n; }
static unsigned random_state=1;
int rand(void) { random_state=random_state*1103515245U+12345U;return (random_state>>1)&RAND_MAX; }
void srand(unsigned n) { random_state=n; }
char *getenv(const char *name) { (void)name;return 0; }
int system(const char *command) { (void)command;errno=EINVAL;return -1; }
sighandler_t signal(int number,sighandler_t handler) { (void)number;(void)handler;return SIG_DFL; }

int memcmp(const void *a,const void *b,size_t n) { const unsigned char *x=a,*y=b;while(n--)if(*x++!=*y++)return x[-1]-y[-1];return 0; }
void *memchr(const void *p,int c,size_t n) { const unsigned char *s=p;while(n--)if(*s++==(unsigned char)c)return (void*)(s-1);return 0; }
size_t strlen(const char *s) { const char *p=s;while(*p)++p;return p-s; }
char *strcpy(char *out,const char *in) { char *p=out;while((*p++=*in++)){}return out; }
char *strncpy(char *out,const char *in,size_t n) { char *p=out;while(n && *in){*p++=*in++;--n;}while(n--)*p++=0;return out; }
char *strcat(char *out,const char *in) { strcpy(out+strlen(out),in);return out; }
char *strncat(char *out,const char *in,size_t n) { char *p=out+strlen(out);while(n-- && *in)*p++=*in++;*p=0;return out; }
int strcmp(const char *a,const char *b) { while(*a && *a==*b){++a;++b;}return (unsigned char)*a-(unsigned char)*b; }
int strncmp(const char *a,const char *b,size_t n) { while(n--){unsigned x=(unsigned char)*a++,y=(unsigned char)*b++;if(x!=y)return x-y;if(!x)break;}return 0; }
char *strchr(const char *s,int c) { do {if(*s==(char)c)return (char*)s;}while(*s++);return 0; }
char *strrchr(const char *s,int c) { const char *found=0;do {if(*s==(char)c)found=s;}while(*s++);return (char*)found; }
char *strstr(const char *s,const char *needle) { size_t n=strlen(needle);if(!n)return (char*)s;for(;*s;++s)if(!strncmp(s,needle,n))return (char*)s;return 0; }
size_t strspn(const char *s,const char *set) { size_t n=0;while(s[n] && strchr(set,s[n]))++n;return n; }
size_t strcspn(const char *s,const char *set) { size_t n=0;while(s[n] && !strchr(set,s[n]))++n;return n; }
char *strpbrk(const char *s,const char *set) { for(;*s;++s)if(strchr(set,*s))return (char*)s;return 0; }
int strcoll(const char *a,const char *b) { return strcmp(a,b); }
char *strerror(int value) { return value==ENOENT?"No such file":value==ERANGE?"Out of range":"Operation failed"; }
int isdigit(int c){return c>='0'&&c<='9';} int islower(int c){return c>='a'&&c<='z';} int isupper(int c){return c>='A'&&c<='Z';}
int isalpha(int c){return islower(c)||isupper(c);} int isalnum(int c){return isalpha(c)||isdigit(c);}
int isspace(int c){return c==' '||(c>=9&&c<=13);} int iscntrl(int c){return (c>=0&&c<32)||c==127;}
int isprint(int c){return c>=32&&c<127;} int isgraph(int c){return c>32&&c<127;} int ispunct(int c){return isgraph(c)&&!isalnum(c);}
int isxdigit(int c){return isdigit(c)||(c>='a'&&c<='f')||(c>='A'&&c<='F');}
int tolower(int c){return isupper(c)?c+32:c;} int toupper(int c){return islower(c)?c-32:c;}
static struct lconv locale={".","",""};
struct lconv *localeconv(void){return &locale;} char *setlocale(int category,const char *name){(void)category;return !name||!strcmp(name,"C")||!*name?"C":0;}

unsigned long long strtoull(const char *s,char **end,int base) {
 const char *first=s;while(isspace((unsigned char)*s))++s;int negative=*s=='-';if(*s=='+'||*s=='-')++s;
 if((base==0||base==16)&&s[0]=='0'&&(s[1]=='x'||s[1]=='X')&&isxdigit((unsigned char)s[2])){base=16;s+=2;}
 else if(base==0)base=*s=='0'?8:10;
 if(base<2||base>36){if(end)*end=(char*)first;errno=EINVAL;return 0;}
 unsigned long long value=0;int found=0,overflow=0;
 for(;;++s){unsigned d=isdigit((unsigned char)*s)?*s-'0':isalpha((unsigned char)*s)?tolower(*s)-'a'+10:36;if(d>=(unsigned)base)break;found=1;if(value>(ULLONG_MAX-d)/(unsigned)base)overflow=1;else value=value*base+d;}
 if(end)*end=(char*)(found?s:first);if(overflow){errno=ERANGE;return ULLONG_MAX;}return negative?0-value:value;
}
long long strtoll(const char *s,char **end,int base){const char *p=s;while(isspace(*p))++p;int neg=*p=='-';unsigned long long n=strtoull(s,end,base);if((!neg&&n>LLONG_MAX)||(neg&&n&&n<0x8000000000000000ULL)){errno=ERANGE;return neg?LLONG_MIN:LLONG_MAX;}return (long long)n;}
unsigned long strtoul(const char *s,char **end,int base){unsigned long long n=strtoull(s,end,base);if(n>ULONG_MAX){errno=ERANGE;return ULONG_MAX;}return n;}
long strtol(const char *s,char **end,int base){long long n=strtoll(s,end,base);if(n>LONG_MAX){errno=ERANGE;return LONG_MAX;}if(n<LONG_MIN){errno=ERANGE;return LONG_MIN;}return n;}
double strtod(const char *s,char **end) {
 const char *first=s;while(isspace(*s))++s;int neg=*s=='-';if(*s=='-'||*s=='+')++s;
 if(!strncmp(s,"inf",3)){s+=3;if(end)*end=(char*)s;return neg?-HUGE_VAL:HUGE_VAL;}
 if(!strncmp(s,"nan",3)){if(end)*end=(char*)s+3;return NAN;}
 int radix=10;if(s[0]=='0'&&(s[1]=='x'||s[1]=='X')){radix=16;s+=2;}
 double v=0,scale=1;int digits=0,decimal=0;
 for(;;++s){if(*s=='.'&&!decimal){decimal=1;continue;}unsigned d=isdigit(*s)?*s-'0':radix==16&&isxdigit(*s)?tolower(*s)-'a'+10:16;if(d>=(unsigned)radix)break;digits=1;v=v*radix+d;if(decimal)scale*=radix;}
 if(!digits){if(end)*end=(char*)first;return 0;}v/=scale;
 if((radix==10&&tolower(*s)=='e')||(radix==16&&tolower(*s)=='p')){const char *p=s+1;int minus=*p=='-';if(*p=='+'||*p=='-')++p;if(isdigit(*p)){int exponent=0;while(isdigit(*p)){if(exponent<10000)exponent=exponent*10+*p-'0';++p;}double power=radix==16?2:10;while(exponent--&&isfinite(v))v=minus?v/power:v*power;s=p;}}
 if(end)*end=(char*)s;return neg?-v:v;
}
float strtof(const char *s,char **end){return (float)strtod(s,end);}

static void emit(char *out,size_t cap,size_t *used,char c){if(*used+1<cap)out[*used]=c;++*used;}
static unsigned integer_text(char *out,unsigned long long value,unsigned radix,int upper){
 const char *digits=upper?"0123456789ABCDEF":"0123456789abcdef";char reverse[65];unsigned n=0;
 do{reverse[n++]=digits[value%radix];value/=radix;}while(value);for(unsigned i=0;i<n;++i)out[i]=reverse[n-i-1];return n;
}
static unsigned float_text(char *out,double value,char spec,int precision,int alternate){
 unsigned n=0;if(signbit(value)){out[n++]='-';value=-value;}
 if(isnan(value)){memcpy(out+n,"nan",3);return n+3;}if(isinf(value)){memcpy(out+n,"inf",3);return n+3;}
 if(precision<0)precision=6;if(precision>32)precision=32;
 int exponent=0;double norm=value;
 if(norm){while(norm>=10){norm/=10;++exponent;}while(norm<1){norm*=10;--exponent;}}
 int scientific=tolower(spec)=='e';int general=tolower(spec)=='g';
 if(general){if(!precision)precision=1;scientific=exponent< -4||exponent>=precision;precision=scientific?precision-1:precision-exponent-1;if(precision<0)precision=0;}
 if(tolower(spec)=='a'){
  int e=0;double f=frexp(value,&e);if(value){f*=2;--e;}else e=0;
  out[n++]='0';out[n++]='x';out[n++]=value?'1':'0';out[n++]='.';f-=value?1:0;
  int digits=precision?precision:13;for(int i=0;i<digits;++i){f*=16;int d=(int)f;out[n++]="0123456789abcdef"[d&15];f-=d;}
  out[n++]='p';out[n++]=e<0?'-':'+';n+=integer_text(out+n,e<0?-e:e,10,0);return n;
 }
 double rounded=scientific?norm:value;double rounding=0.5;for(int i=0;i<precision;++i)rounding/=10;rounded+=rounding;
 if(scientific&&rounded>=10){rounded/=10;++exponent;}
 if(rounded>18446744073709549568.0){scientific=1;rounded=norm+rounding;}
 unsigned long long whole=(unsigned long long)rounded;double fraction=rounded-(double)whole;
 n+=integer_text(out+n,whole,10,0);unsigned dot=n;
 if(precision||alternate)out[n++]='.';
 for(int i=0;i<precision;++i){fraction*=10;int digit=(int)fraction;if(digit>9)digit=9;out[n++]=(char)('0'+digit);fraction-=digit;}
 if(general&&!alternate){while(n>dot+1&&out[n-1]=='0')--n;if(n==dot+1)--n;}
 if(scientific){out[n++]=spec=='E'||spec=='G'?'E':'e';out[n++]=exponent<0?'-':'+';unsigned e=exponent<0?-exponent:exponent;if(e<10)out[n++]='0';n+=integer_text(out+n,e,10,0);}
 return n;
}
int vsnprintf(char *out,size_t cap,const char *format,va_list args){
 size_t used=0;
 while(*format){if(*format!='%'){emit(out,cap,&used,*format++);continue;}++format;
  int left=0,zero=0,plus=0,space=0,alternate=0;
  for(;;){if(*format=='-')left=1;else if(*format=='0')zero=1;else if(*format=='+')plus=1;else if(*format==' ')space=1;else if(*format=='#')alternate=1;else break;++format;}
  int width=0;if(*format=='*'){width=va_arg(args,int);++format;if(width<0){left=1;width=-width;}}else while(isdigit(*format))width=width*10+*format++-'0';
  int precision=-1;if(*format=='.'){precision=0;++format;if(*format=='*'){precision=va_arg(args,int);++format;}else while(isdigit(*format))precision=precision*10+*format++-'0';}
  int length=0;if(*format=='l'){length=1;if(*++format=='l'){length=2;++format;}}else if(*format=='z'||*format=='t'){length=1;++format;}else if(*format=='h'){++format;if(*format=='h')++format;}else if(*format=='L'){length=3;++format;}
  char spec=*format?*format++:0;char text[384];const char *p=text;unsigned n=0;char sign=0;
  if(spec=='s'){p=va_arg(args,const char*);if(!p)p="(null)";n=strlen(p);if(precision>=0&&n>(unsigned)precision)n=precision;zero=0;}
  else if(spec=='c'){text[0]=(char)va_arg(args,int);n=1;zero=0;}
  else if(spec=='%'){text[0]='%';n=1;}
  else if(strchr("fFeEgGaA",spec)&&spec){double v=length==3?(double)va_arg(args,long double):va_arg(args,double);n=float_text(text,v,spec,precision,alternate);if(text[0]=='-'){sign='-';++p;--n;}else if(plus)sign='+';else if(space)sign=' ';}
  else if(strchr("diuoxXp",spec)&&spec){unsigned long long value;int negative=0;
   if(spec=='p'){value=(uintptr_t)va_arg(args,void*);alternate=1;spec='x';}
   else if(spec=='d'||spec=='i'){long long v=length==2?va_arg(args,long long):length==1?va_arg(args,long):va_arg(args,int);negative=v<0;value=negative?0-(unsigned long long)v:v;}
   else value=length==2?va_arg(args,unsigned long long):length==1?va_arg(args,unsigned long):va_arg(args,unsigned int);
   unsigned radix=spec=='x'||spec=='X'?16:spec=='o'?8:10;
   char digits[65];unsigned count=integer_text(digits,value,radix,spec=='X');
   if(negative)sign='-';else if((spec=='d'||spec=='i')&&plus)sign='+';else if((spec=='d'||spec=='i')&&space)sign=' ';
   if(alternate&&radix==16){text[n++]='0';text[n++]=spec=='X'?'X':'x';}else if(alternate&&radix==8&&value)text[n++]='0';
   while(precision>(int)count){text[n++]='0';--precision;}if(precision!=0||value){memcpy(text+n,digits,count);n+=count;}
  }else if(spec=='n'){*va_arg(args,int*)=used;continue;}else{if(spec)text[n++]=spec;}
  int pad=width-(int)n-(sign!=0);if(!left&&!zero)while(pad-->0)emit(out,cap,&used,' ');
  if(sign)emit(out,cap,&used,sign);if(!left&&zero)while(pad-->0)emit(out,cap,&used,'0');
  for(unsigned i=0;i<n;++i)emit(out,cap,&used,p[i]);if(left)while(pad-->0)emit(out,cap,&used,' ');
 }
 if(cap)out[used<cap?used:cap-1]=0;return used;
}
int snprintf(char *out,size_t n,const char *fmt,...){va_list ap;va_start(ap,fmt);int r=vsnprintf(out,n,fmt,ap);va_end(ap);return r;}
int sprintf(char *out,const char *fmt,...){va_list ap;va_start(ap,fmt);int r=vsnprintf(out,SIZE_MAX,fmt,ap);va_end(ap);return r;}
int vsprintf(char *out,const char *fmt,va_list ap){return vsnprintf(out,SIZE_MAX,fmt,ap);}

struct pf_file { char *path;unsigned char *data;size_t size,capacity,pos;int write,dirty,error,eof,pushed,kind; };
static unsigned char output_lines[2][512];
static FILE standard[3]={{.kind=1,.pushed=-1},{.kind=2,.pushed=-1},{.kind=3,.pushed=-1}};
FILE *stdin=&standard[0],*stdout=&standard[1],*stderr=&standard[2];
FILE *fopen(const char *path,const char *mode){
 if(!path||!mode){errno=EINVAL;return 0;}FILE *f=calloc(1,sizeof(*f));if(!f)return 0;f->pushed=-1;f->path=malloc(strlen(path)+1);if(!f->path){free(f);return 0;}strcpy(f->path,path);
 f->write=*mode=='w'||*mode=='a'||strchr(mode,'+');struct pf_blob blob;
 if(*mode!='w'&&pf_read_file(path,&blob)){f->data=malloc(blob.size+1);if(!f->data){free(f->path);free(f);return 0;}memcpy(f->data,blob.data,blob.size);f->size=f->capacity=blob.size;}
 else if(*mode=='r'){free(f->path);free(f);errno=ENOENT;return 0;}
 if(*mode=='w')f->dirty=1;if(*mode=='a')f->pos=f->size;return f;
}
int fflush(FILE *f){if(!f){int a=fflush(stdout),b=fflush(stderr);return a||b?EOF:0;}if(f->kind>1&&f->pos){unsigned char *line=output_lines[f->kind-2];line[f->pos]=0;pf_log_text((char*)line);f->pos=0;}if(f->dirty){if(!pf_write_file(f->path,f->data,f->size)){f->error=1;errno=EIO;return EOF;}f->dirty=0;}return 0;}
int fclose(FILE *f){if(!f)return EOF;int result=fflush(f);if(!f->kind){free(f->path);free(f->data);free(f);}return result;}
FILE *freopen(const char *path,const char *mode,FILE *stream){if(stream&&!stream->kind)fclose(stream);return fopen(path,mode);}
size_t fread(void *out,size_t size,size_t count,FILE *f){if(!size||!count)return 0;if(count>SIZE_MAX/size)return 0;size_t total=size*count;unsigned char *p=out;size_t done=0;while(done<total){int c=fgetc(f);if(c==EOF)break;p[done++]=c;}return done/size;}
size_t fwrite(const void *in,size_t size,size_t count,FILE *f){if(!size||!count||count>SIZE_MAX/size)return 0;size_t n=size*count;if(f->kind){const unsigned char *p=in;unsigned char *line=output_lines[f->kind==3?1:0];for(size_t i=0;i<n;++i){unsigned c=p[i];if(c=='\r')continue;if(c=='\b'){if(f->pos)--f->pos;continue;}if(c=='\n'){line[f->pos]=0;pf_log_text((char*)line);f->pos=0;}else{if(f->pos==511)fflush(f);line[f->pos++]=c;}}return count;}if(!f->write||f->pos>SIZE_MAX-n){f->error=1;return 0;}size_t end=f->pos+n;if(end>f->capacity){size_t capacity=end+256;if(capacity<end)capacity=end;void *data=realloc(f->data,capacity);if(!data){f->error=1;return 0;}f->data=data;f->capacity=capacity;}if(f->pos>f->size)memset(f->data+f->size,0,f->pos-f->size);memcpy(f->data+f->pos,in,n);f->pos=end;if(end>f->size)f->size=end;f->dirty=1;return count;}
int fgetc(FILE *f){if(f->pushed>=0){int c=f->pushed;f->pushed=-1;return c;}if(f->kind==1){int c;do{c=pf_getkey()&255;}while(!c);return c;}if(f->pos>=f->size){f->eof=1;return EOF;}return f->data[f->pos++];}
int getc(FILE *f){return fgetc(f);}int getchar(void){return fgetc(stdin);}int ungetc(int c,FILE *f){if(c==EOF||f->pushed>=0)return EOF;f->pushed=(unsigned char)c;f->eof=0;return f->pushed;}
char *fgets(char *out,int size,FILE *f){if(size<=0)return 0;int n=0;while(n<size-1){int c=fgetc(f);if(c==EOF)break;out[n++]=c;if(c=='\n')break;}out[n]=0;return n?out:0;}
int fputc(int c,FILE *f){unsigned char byte=c;return fwrite(&byte,1,1,f)==1?byte:EOF;}int putc(int c,FILE *f){return fputc(c,f);}int putchar(int c){return fputc(c,stdout);}
int fputs(const char *s,FILE *f){size_t n=strlen(s);return fwrite(s,1,n,f)==n?0:EOF;}int puts(const char *s){fputs(s,stdout);return fputc('\n',stdout);}
int feof(FILE *f){return f->eof;}int ferror(FILE *f){return f->error;}void clearerr(FILE *f){f->eof=f->error=0;}
int fseek(FILE *f,long offset,int origin){long base=origin==SEEK_SET?0:origin==SEEK_CUR?ftell(f):(long)f->size;long pos=base+offset;if(pos<0)return -1;f->pos=pos;f->eof=0;f->pushed=-1;return 0;}
long ftell(FILE *f){return (long)f->pos-(f->pushed>=0);}void rewind(FILE *f){fseek(f,0,SEEK_SET);clearerr(f);}int setvbuf(FILE *f,char *buffer,int mode,size_t size){(void)f;(void)buffer;(void)mode;(void)size;return 0;}
int remove(const char *path){return pf_delete_file(path)?0:-1;}int rename(const char *from,const char *to){struct pf_blob b;if(!pf_read_file(from,&b))return -1;if(!pf_write_file(to,b.data,b.size))return -1;return remove(from);}
char *tmpnam(char *out){static char name[L_tmpnam];static unsigned counter;if(!out)out=name;sprintf(out,"/lua-tmp-%u",++counter);return out;}
FILE *tmpfile(void){char path[L_tmpnam];return fopen(tmpnam(path),"w+");}
int vfprintf(FILE *f,const char *fmt,va_list ap){char buffer[1024];va_list copy;va_copy(copy,ap);int n=vsnprintf(buffer,sizeof(buffer),fmt,copy);va_end(copy);if(n<(int)sizeof(buffer)){fwrite(buffer,1,n,f);return n;}char *larger=malloc(n+1);if(!larger)return -1;vsnprintf(larger,n+1,fmt,ap);fwrite(larger,1,n,f);free(larger);return n;}
int fprintf(FILE *f,const char *fmt,...){va_list ap;va_start(ap,fmt);int n=vfprintf(f,fmt,ap);va_end(ap);return n;}
int printf(const char *fmt,...){va_list ap;va_start(ap,fmt);int n=vfprintf(stdout,fmt,ap);va_end(ap);return n;}
int fscanf(FILE *f,const char *fmt,...){(void)fmt;char number[192];unsigned n=0;int c;do{c=fgetc(f);}while(c!=EOF&&isspace(c));while(c!=EOF&&(isalnum(c)||c=='.'||c=='+'||c=='-')){if(n+1<sizeof(number))number[n++]=c;c=fgetc(f);}ungetc(c,f);number[n]=0;if(!n)return EOF;char *end;double value=strtod(number,&end);if(end==number)return 0;va_list ap;va_start(ap,fmt);*va_arg(ap,double*)=value;va_end(ap);return 1;}

union ieee_double { double d; uint64_t bits; };
double fabs(double x){union ieee_double b={.d=x};b.bits&=0x7fffffffffffffffULL;return b.d;}
double trunc(double x){union ieee_double b={.d=x};int e=(int)((b.bits>>52)&2047)-1023;if(e<0)return x<0?-0.0:0.0;if(e<52)b.bits&=~((1ULL<<(52-e))-1);return b.d;}
double floor(double x){double t=trunc(x);return t>x?t-1:t;}
double ceil(double x){double t=trunc(x);return t<x?t+1:t;}
double sqrt(double x){double r;__asm__("fsqrt":"=t"(r):"0"(x));return r;}
double sin(double x){double r;__asm__("fsin":"=t"(r):"0"(x));return r;}
double cos(double x){double r;__asm__("fcos":"=t"(r):"0"(x));return r;}
double tan(double x){return sin(x)/cos(x);}
double atan2(double y,double x){double r;__asm__("fpatan":"=t"(r):"0"(x),"u"(y):"st(1)");return r;}
double atan(double x){return atan2(x,1);}
double asin(double x){return atan2(x,sqrt(1-x*x));}
double acos(double x){return atan2(sqrt(1-x*x),x);}
double log2(double x){double r;__asm__("fld1; fxch; fyl2x":"=t"(r):"0"(x):"st(1)");return r;}
double log(double x){return log2(x)*0.69314718055994530942;}
double log10(double x){return log2(x)*0.30102999566398119521;}
double ldexp(double x,int e){if(!x||!isfinite(x))return x;while(e>512){x*=1.3407807929942597e154;e-=512;if(!isfinite(x))return x;}while(e< -512){x*=7.458340731200207e-155;e+=512;if(!x)return x;}union ieee_double scale={.bits=(uint64_t)(e+1023)<<52};return x*scale.d;}
double frexp(double x,int *e){union ieee_double b={.d=x};unsigned raw=(b.bits>>52)&2047;*e=0;if(!x||raw==2047)return x;if(!raw){x*=18446744073709551616.0;b.d=x;raw=(b.bits>>52)&2047;*e=-64;}*e+=(int)raw-1022;b.bits=(b.bits&0x800fffffffffffffULL)|((uint64_t)1022<<52);return b.d;}
static double exp2(double x){if(x>1024)return HUGE_VAL;if(x< -1075)return 0;int i=(int)floor(x);double fraction=x-i,r;__asm__("f2xm1":"=t"(r):"0"(fraction));return ldexp(r+1,i);}
double exp(double x){return exp2(x*1.4426950408889634074);}
double pow(double x,double y){if(!y)return 1;if(x==0)return y>0?0:HUGE_VAL;int negative=x<0;if(negative&&trunc(y)!=y)return NAN;double r=exp2(log2(fabs(x))*y);return negative&&fmod(fabs(y),2)==1?-r:r;}
double fmod(double x,double y){if(!y||isnan(x)||isnan(y)||isinf(x))return NAN;if(isinf(y))return x;int sign=signbit(x);x=fabs(x);y=fabs(y);if(x<y)return sign?-x:x;int ex,ey;frexp(x,&ex);frexp(y,&ey);for(int i=ex-ey;i>=0;--i){double unit=ldexp(y,i);if(unit<=x)x-=unit;}return sign?-x:x;}
clock_t clock(void){return (clock_t)((uint64_t)*(volatile uint32_t*)0x46c*54925/1000);}
time_t time(time_t *out){time_t t=clock()/1000;if(out)*out=t;return t;}
double difftime(time_t a,time_t b){return (double)a-b;}
static struct tm epoch={.tm_mday=1,.tm_year=126,.tm_wday=4};
struct tm *gmtime(const time_t *t){epoch.tm_sec=*t%60;epoch.tm_min=(*t/60)%60;epoch.tm_hour=(*t/3600)%24;return &epoch;}
struct tm *localtime(const time_t *t){return gmtime(t);}
time_t mktime(struct tm *t){return t->tm_sec+t->tm_min*60+t->tm_hour*3600+(t->tm_mday-1)*86400;}
size_t strftime(char *out,size_t size,const char *fmt,const struct tm *t){size_t n=0;while(*fmt){char buffer[64];const char *p=buffer;if(*fmt!='%'){buffer[0]=*fmt++;buffer[1]=0;}else{++fmt;char c=*fmt?*fmt++:0;switch(c){case '%':strcpy(buffer,"%");break;case 'Y':sprintf(buffer,"%04d",t->tm_year+1900);break;case 'm':sprintf(buffer,"%02d",t->tm_mon+1);break;case 'd':sprintf(buffer,"%02d",t->tm_mday);break;case 'H':sprintf(buffer,"%02d",t->tm_hour);break;case 'M':sprintf(buffer,"%02d",t->tm_min);break;case 'S':sprintf(buffer,"%02d",t->tm_sec);break;case 'c':sprintf(buffer,"%04d-%02d-%02d %02d:%02d:%02d",t->tm_year+1900,t->tm_mon+1,t->tm_mday,t->tm_hour,t->tm_min,t->tm_sec);break;default:buffer[0]=c;buffer[1]=0;break;}}while(*p){if(n+1>=size)return 0;out[n++]=*p++;}}if(size)out[n]=0;return n;}
