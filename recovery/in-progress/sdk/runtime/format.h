/* Recovered Tayga formatted output; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
struct pf_tayga_output {char *buffer;size_t capacity,used;int count;};
static void pf_tayga_emit(struct pf_tayga_output *out,char c){if(out->used+1<out->capacity)out->buffer[out->used++]=c;out->count++;}
static void pf_tayga_text(struct pf_tayga_output *out,const char *text){if(!text)text="(null)";while(*text)pf_tayga_emit(out,*text++);}
static void pf_tayga_number(struct pf_tayga_output *out,uint64_t value,unsigned base,unsigned upper){char digits[64];unsigned n=0;do{unsigned d=value%base;digits[n++]=(char)(d<10?'0'+d:(upper?'A':'a')+d-10);value/=base;}while(value);while(n)pf_tayga_emit(out,digits[--n]);}
static int pf_tayga_vsnprintf(char *buffer,size_t capacity,const char *format,__builtin_va_list input){
 struct pf_tayga_output out={buffer,capacity,0,0};__builtin_va_list args;__builtin_va_copy(args,input);
 while(*format){
  if(*format!='%'){pf_tayga_emit(&out,*format++);continue;}format++;
  if(*format=='%'){pf_tayga_emit(&out,*format++);continue;}
  while(*format==' '||*format=='#'||*format=='+'||*format=='-'||*format=='0')format++;
  if(*format=='*'){(void)__builtin_va_arg(args,int);format++;}else while(*format>='0'&&*format<='9')format++;
  if(*format=='.'){format++;if(*format=='*'){(void)__builtin_va_arg(args,int);format++;}else while(*format>='0'&&*format<='9')format++;}
  unsigned length=0;
  if(*format=='h'){format++;length=2;if(*format=='h'){format++;length=1;}}
  else if(*format=='l'){format++;length=3;if(*format=='l'){format++;length=4;}}
  else if(*format=='z'){format++;length=5;}else if(*format=='t'){format++;length=6;}else if(*format=='j'){format++;length=7;}else if(*format=='L'){format++;length=8;}
  char c=*format;if(c)format++;
  if(c=='s'){pf_tayga_text(&out,__builtin_va_arg(args,const char *));continue;}
  if(c=='c'){pf_tayga_emit(&out,(char)__builtin_va_arg(args,int));continue;}
  if(c=='p'){pf_tayga_text(&out,"0x");pf_tayga_number(&out,(uintptr_t)__builtin_va_arg(args,void *),16,0);continue;}
  if(c=='f'){
   if(length==8){(void)__builtin_va_arg(args,long double);pf_tayga_text(&out,"0.000000");continue;}
   double value=__builtin_va_arg(args,double);if(value<0){pf_tayga_emit(&out,'-');value=-value;}int32_t whole=(int32_t)value;pf_tayga_number(&out,(uint32_t)whole,10,0);pf_tayga_emit(&out,'.');value-=whole;
   for(unsigned i=0;i<6;i++){value*=10;int32_t digit=(int32_t)value;pf_tayga_emit(&out,(char)('0'+digit));value-=digit;}continue;
  }
  if(c=='d'||c=='i'||c=='I'||c=='u'||c=='x'||c=='X'){
   uint64_t word;unsigned sign=c=='d'||c=='i'||c=='I';
   if(sign){int64_t value;
    if(length==3)value=__builtin_va_arg(args,long);else if(length==4||length==7)value=__builtin_va_arg(args,long long);else if(length==5||length==6)value=__builtin_va_arg(args,ptrdiff_t);else{int v=__builtin_va_arg(args,int);value=length==1?(signed char)v:length==2?(short)v:v;}
    word=(uint64_t)value;if(value<0){pf_tayga_emit(&out,'-');word=0-word;}
   }else{
    if(length==3)word=__builtin_va_arg(args,unsigned long);else if(length==4||length==7)word=__builtin_va_arg(args,unsigned long long);else if(length==5||length==6)word=__builtin_va_arg(args,size_t);else{unsigned v=__builtin_va_arg(args,unsigned);word=length==1?(unsigned char)v:length==2?(unsigned short)v:v;}
   }
   pf_tayga_number(&out,word,(c=='x'||c=='X')?16:10,c=='X');continue;
  }
  pf_tayga_emit(&out,'?');
 }
 if(capacity)buffer[out.used]=0;__builtin_va_end(args);return out.count;
}
