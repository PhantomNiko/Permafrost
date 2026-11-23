/* Recovered 1.1 formatter: native length modifiers, precision-limited text,
 * ignored field widths and six-digit decimal fractions.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
struct pf_format110_output {char *data;size_t capacity,stored;int count;};
static void pf_format110_emit(struct pf_format110_output *o,char c){
 if(o->capacity && o->stored+1<o->capacity)o->data[o->stored++]=c;o->count++;
}
static void pf_format110_number(struct pf_format110_output *o,uint64_t value,unsigned base,int upper){
 char digits[64];unsigned used=0;
 do{unsigned digit=value%base;digits[used++]=digit<10?'0'+digit:(upper?'A':'a')+digit-10;value/=base;}while(value);
 while(used)pf_format110_emit(o,digits[--used]);
}
static uint64_t pf_format110_unsigned(__builtin_va_list *args,unsigned length){
 switch(length){
 case 1:return (unsigned char)__builtin_va_arg(*args,unsigned);
 case 2:return (unsigned short)__builtin_va_arg(*args,unsigned);
 case 3:return __builtin_va_arg(*args,unsigned long);
 case 4:case 7:return __builtin_va_arg(*args,unsigned long long);
 case 5:case 6:return __builtin_va_arg(*args,uintptr_t);
 default:return __builtin_va_arg(*args,unsigned);
 }
}
static int64_t pf_format110_signed(__builtin_va_list *args,unsigned length){
 switch(length){
 case 1:return (signed char)__builtin_va_arg(*args,int);
 case 2:return (short)__builtin_va_arg(*args,int);
 case 3:return __builtin_va_arg(*args,long);
 case 4:case 7:return __builtin_va_arg(*args,long long);
 case 5:case 6:return __builtin_va_arg(*args,intptr_t);
 default:return __builtin_va_arg(*args,int);
 }
}
static int pf_format110(char *buffer,size_t capacity,const char *format,void *arguments){
 struct pf_format110_output out={buffer,capacity,0,0};__builtin_va_list args;
#if defined(__x86_64__)
 __builtin_va_copy(args,*(__builtin_va_list *)arguments);
#else
 args=(__builtin_va_list)arguments;
#endif
 while(*format){
  if(*format++!='%'){pf_format110_emit(&out,format[-1]);continue;}
  if(*format=='%'){pf_format110_emit(&out,*format++);continue;}
  while(*format==' '||*format=='#'||*format=='+'||*format=='-'||*format=='0')format++;
  if(*format=='*'){(void)__builtin_va_arg(args,int);format++;}
  else while(*format>='0'&&*format<='9')format++;
  int precision=-1;
  if(*format=='.'){
   format++;precision=0;
   if(*format=='*'){precision=__builtin_va_arg(args,int);format++;}
   else while(*format>='0'&&*format<='9'){
    unsigned digit=*format++-'0';precision=precision>(INT32_MAX-(int)digit)/10?INT32_MAX:precision*10+digit;
   }
  }
  unsigned length=0;
  switch(*format){
  case 'h':format++;length=2;if(*format=='h'){format++;length=1;}break;
  case 'l':format++;length=3;if(*format=='l'){format++;length=4;}break;
  case 'z':format++;length=5;break;case 't':format++;length=6;break;
  case 'j':format++;length=7;break;case 'L':format++;length=8;break;
  }
  char conversion=*format;if(conversion)format++;
  switch(conversion){
  case 'c':pf_format110_emit(&out,(char)__builtin_va_arg(args,int));break;
  case 's':{
   const char *text=__builtin_va_arg(args,const char *);if(!text)text="(null)";
   while(*text && precision!=0){pf_format110_emit(&out,*text++);if(precision>0)precision--;}
   break;
  }
  case 'd':case 'i':case 'I':{
   int64_t value=pf_format110_signed(&args,length);uint64_t magnitude=(uint64_t)value;
   if(value<0){pf_format110_emit(&out,'-');magnitude=0-magnitude;}
   pf_format110_number(&out,magnitude,10,0);break;
  }
  case 'u':case 'x':case 'X':
   pf_format110_number(&out,pf_format110_unsigned(&args,length),conversion=='u'?10:16,conversion=='X');break;
  case 'p':{
   uintptr_t pointer=(uintptr_t)__builtin_va_arg(args,void *);
   pf_format110_emit(&out,'0');pf_format110_emit(&out,'x');pf_format110_number(&out,pointer,16,0);break;
  }
  case 'f':{
   if(length==8){(void)__builtin_va_arg(args,long double);const char *text="0.000000";while(*text)pf_format110_emit(&out,*text++);break;}
   double value=__builtin_va_arg(args,double);if(value<0){pf_format110_emit(&out,'-');value=-value;}
   int32_t whole=(int32_t)value;pf_format110_number(&out,(uint32_t)whole,10,0);pf_format110_emit(&out,'.');
   double fraction=value-(double)whole;
   for(unsigned i=0;i<6;i++){fraction*=10.0;int32_t digit=(int32_t)fraction;pf_format110_emit(&out,(char)('0'+digit));fraction-=digit;}
   break;
  }
  default:pf_format110_emit(&out,'?');break;
  }
 }
 if(capacity)buffer[out.stored]=0;__builtin_va_end(args);return out.count;
}
